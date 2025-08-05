# cd mesa_bionic; git diff > ../packages/vulkan-wrapper-android/0004-leegao.patch

TERMUX_PKG_HOMEPAGE=https://www.mesa3d.org
TERMUX_PKG_DESCRIPTION="Android Vulkan ICD"
TERMUX_PKG_LICENSE="MIT"
TERMUX_PKG_LICENSE_FILE="docs/license.rst"
TERMUX_PKG_MAINTAINER="xMeM <haooy@outlook.com>"
TERMUX_PKG_VERSION="25.0.0"
TERMUX_PKG_REVISION=2
# TERMUX_PKG_SRCURL=git+https://github.com/xMeM/mesa
TERMUX_PKG_SRCURL=git+file:///home/builder/termux-packages/mesa_bionic
TERMUX_PKG_GIT_BRANCH=wrapper
_COMMIT=abf3138b2f2852c61925e8d8a97fea1e91c4dd1f
TERMUX_PKG_DEPENDS="libandroid-shmem, libc++, libdrm, libx11, libxcb, libxshmfence, libwayland, vulkan-loader-generic, zlib, zstd"
TERMUX_PKG_BUILD_DEPENDS="libwayland-protocols, libxrandr, xorgproto"
TERMUX_PKG_API_LEVEL=26
TERMUX_PKG_SHA256=SKIP_CHECKSUM

TERMUX_PKG_EXTRA_CONFIGURE_ARGS="
--cmake-prefix-path $TERMUX_PREFIX
-Dcpp_rtti=false
-Dgbm=disabled
-Dopengl=false
-Dllvm=disabled
-Dshared-llvm=disabled
-Dplatforms=x11
-Dgallium-drivers=
-Dxmlconfig=disabled
-Dvulkan-drivers=wrapper
-Db_ndebug=true
--buildtype=release
"

termux_step_post_get_source() {
	# git fetch --unshallow
	# git checkout $_COMMIT
	# Do not use meson wrap projects
	# rm -rf subprojects
	echo "Checking out"
	# git checkout $_COMMIT
	git log
}

termux_step_pre_configure() {
	termux_setup_cmake

	CPPFLAGS+=" -D__USE_GNU"
	# LDFLAGS+=" -landroid-sysvshm -ladrenotools"
	LDFLAGS+=" -landroid-shmem -ladrenotools"

	_WRAPPER_BIN=$TERMUX_PKG_BUILDDIR/_wrapper/bin
	mkdir -p $_WRAPPER_BIN
	if [ "$TERMUX_ON_DEVICE_BUILD" = "false" ]; then
		sed 's|@CMAKE@|'"$(command -v cmake)"'|g' \
			$TERMUX_PKG_BUILDER_DIR/cmake-wrapper.in \
			> $_WRAPPER_BIN/cmake
		chmod 0700 $_WRAPPER_BIN/cmake
		termux_setup_wayland_cross_pkg_config_wrapper
	fi
	export PATH=$_WRAPPER_BIN:$PATH
	which cmake

	echo "PRECONFIGURE"
	echo $PWD
	mkdir -p src/vulkan/wrapper/lib/
	cp /home/builder/termux-packages/mesa_bionic/src/vulkan/wrapper/lib/*.a src/vulkan/wrapper/lib/
}

termux_step_post_configure() {
	rm -f $_WRAPPER_BIN/cmake
	echo $PWD
	echo "Postconfigure"
	which ninja
	echo "PATH='$PATH'"
}
