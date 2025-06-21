/*
 * Copyright 2020 Intel Corporation
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the
 * "Software"), to deal in the Software without restriction, including
 * without limitation the rights to use, copy, modify, merge, publish,
 * distribute, sub license, and/or sell copies of the Software, and to
 * permit persons to whom the Software is furnished to do so, subject to
 * the following conditions:
 *
 * The above copyright notice and this permission notice (including the
 * next paragraph) shall be included in all copies or substantial portions
 * of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
 * OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NON-INFRINGEMENT.
 * IN NO EVENT SHALL VMWARE AND/OR ITS SUPPLIERS BE LIABLE FOR
 * ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT,
 * TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE
 * SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 */
/* This file generated from vk_wrapper_trampolines_gen.py, don't edit directly. */

#include "wrapper_private.h"
#include "wrapper_trampolines.h"
#include "vk_unwrappers.h"

#define VK_ALLOC2(device, type, size) (device ?     ((type *) vk_zalloc(&((struct wrapper_device*) device)->vk.alloc, size, alignof(type), VK_SYSTEM_ALLOCATION_SCOPE_COMMAND)) :     ((type *) malloc(size)) )

#define VK_ALLOC(device, type) VK_ALLOC2(device, type, sizeof(type))

                    
static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_GetPhysicalDeviceProperties(
    VkPhysicalDevice physicalDevice,
    VkPhysicalDeviceProperties* pProperties)
{
    VK_FROM_HANDLE(wrapper_physical_device, base, physicalDevice);
    base->dispatch_table.GetPhysicalDeviceProperties(base->dispatch_handle, pProperties);
#ifdef NEEDS_UNWRAPPING_VkPhysicalDeviceProperties
#warning TODO: Repack struct+ptr+out GetPhysicalDeviceProperties EntrypointParam(type='VkPhysicalDeviceProperties', name='pProperties', decl='VkPhysicalDeviceProperties* pProperties', len=None, elem=<Element 'param' at 0x736889c12160>, is_const=False, num_pointers=1)
#endif
    return ;
}

static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_GetPhysicalDeviceQueueFamilyProperties(
    VkPhysicalDevice physicalDevice,
    uint32_t* pQueueFamilyPropertyCount,
    VkQueueFamilyProperties* pQueueFamilyProperties)
{
    VK_FROM_HANDLE(wrapper_physical_device, base, physicalDevice);
    base->dispatch_table.GetPhysicalDeviceQueueFamilyProperties(base->dispatch_handle, pQueueFamilyPropertyCount, pQueueFamilyProperties);
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
#ifdef NEEDS_UNWRAPPING_VkQueueFamilyProperties
#warning TODO: Repack struct+array+out GetPhysicalDeviceQueueFamilyProperties EntrypointParam(type='VkQueueFamilyProperties', name='pQueueFamilyProperties', decl='VkQueueFamilyProperties* pQueueFamilyProperties', len='pQueueFamilyPropertyCount', elem=<Element 'param' at 0x736889c12660>, is_const=False, num_pointers=1)
#endif
    return ;
}

static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_GetPhysicalDeviceMemoryProperties(
    VkPhysicalDevice physicalDevice,
    VkPhysicalDeviceMemoryProperties* pMemoryProperties)
{
    VK_FROM_HANDLE(wrapper_physical_device, base, physicalDevice);
    base->dispatch_table.GetPhysicalDeviceMemoryProperties(base->dispatch_handle, pMemoryProperties);
#ifdef NEEDS_UNWRAPPING_VkPhysicalDeviceMemoryProperties
#warning TODO: Repack struct+ptr+out GetPhysicalDeviceMemoryProperties EntrypointParam(type='VkPhysicalDeviceMemoryProperties', name='pMemoryProperties', decl='VkPhysicalDeviceMemoryProperties* pMemoryProperties', len=None, elem=<Element 'param' at 0x736889c129d0>, is_const=False, num_pointers=1)
#endif
    return ;
}

static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_GetPhysicalDeviceFeatures(
    VkPhysicalDevice physicalDevice,
    VkPhysicalDeviceFeatures* pFeatures)
{
    VK_FROM_HANDLE(wrapper_physical_device, base, physicalDevice);
    base->dispatch_table.GetPhysicalDeviceFeatures(base->dispatch_handle, pFeatures);
#ifdef NEEDS_UNWRAPPING_VkPhysicalDeviceFeatures
#warning TODO: Repack struct+ptr+out GetPhysicalDeviceFeatures EntrypointParam(type='VkPhysicalDeviceFeatures', name='pFeatures', decl='VkPhysicalDeviceFeatures* pFeatures', len=None, elem=<Element 'param' at 0x736889c12d90>, is_const=False, num_pointers=1)
#endif
    return ;
}

static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_GetPhysicalDeviceFormatProperties(
    VkPhysicalDevice physicalDevice,
    VkFormat format,
    VkFormatProperties* pFormatProperties)
{
    VK_FROM_HANDLE(wrapper_physical_device, base, physicalDevice);
VkFormat format__ = format;
#ifdef NEEDS_UNWRAPPING_VkFormat
#endif
    base->dispatch_table.GetPhysicalDeviceFormatProperties(base->dispatch_handle, format__, pFormatProperties);
#ifdef NEEDS_UNWRAPPING_VkFormatProperties
#warning TODO: Repack struct+ptr+out GetPhysicalDeviceFormatProperties EntrypointParam(type='VkFormatProperties', name='pFormatProperties', decl='VkFormatProperties* pFormatProperties', len=None, elem=<Element 'param' at 0x736889c13240>, is_const=False, num_pointers=1)
#endif
    return ;
}

static VKAPI_ATTR VkResult VKAPI_CALL
wrapper_tramp_GetPhysicalDeviceImageFormatProperties(
    VkPhysicalDevice physicalDevice,
    VkFormat format,
    VkImageType type,
    VkImageTiling tiling,
    VkImageUsageFlags usage,
    VkImageCreateFlags flags,
    VkImageFormatProperties* pImageFormatProperties)
{
    VK_FROM_HANDLE(wrapper_physical_device, base, physicalDevice);
VkFormat format__ = format;
#ifdef NEEDS_UNWRAPPING_VkFormat
#endif
VkImageType type__ = type;
#ifdef NEEDS_UNWRAPPING_VkImageType
#endif
VkImageTiling tiling__ = tiling;
#ifdef NEEDS_UNWRAPPING_VkImageTiling
#endif
VkImageUsageFlags usage__ = usage;
#ifdef NEEDS_UNWRAPPING_VkImageUsageFlags
#endif
VkImageCreateFlags flags__ = flags;
#ifdef NEEDS_UNWRAPPING_VkImageCreateFlags
#endif
    VkResult result = base->dispatch_table.GetPhysicalDeviceImageFormatProperties(base->dispatch_handle, format__, type__, tiling__, usage__, flags__, pImageFormatProperties);
#ifdef NEEDS_UNWRAPPING_VkImageFormatProperties
#warning TODO: Repack struct+ptr+out GetPhysicalDeviceImageFormatProperties EntrypointParam(type='VkImageFormatProperties', name='pImageFormatProperties', decl='VkImageFormatProperties* pImageFormatProperties', len=None, elem=<Element 'param' at 0x736889c13a10>, is_const=False, num_pointers=1)
#endif
    return result;
}

static VKAPI_ATTR VkResult VKAPI_CALL
wrapper_tramp_CreateDevice(
    VkPhysicalDevice physicalDevice,
    const VkDeviceCreateInfo* pCreateInfo,
    const VkAllocationCallbacks* pAllocator,
    VkDevice* pDevice)
{
    VK_FROM_HANDLE(wrapper_physical_device, base, physicalDevice);
    VkResult result = base->dispatch_table.CreateDevice(base->dispatch_handle, pCreateInfo, pAllocator, pDevice);

    return result;
}
                
static VKAPI_ATTR VkResult VKAPI_CALL
wrapper_tramp_EnumerateDeviceLayerProperties(
    VkPhysicalDevice physicalDevice,
    uint32_t* pPropertyCount,
    VkLayerProperties* pProperties)
{
    VK_FROM_HANDLE(wrapper_physical_device, base, physicalDevice);
    VkResult result = base->dispatch_table.EnumerateDeviceLayerProperties(base->dispatch_handle, pPropertyCount, pProperties);
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
#ifdef NEEDS_UNWRAPPING_VkLayerProperties
#warning TODO: Repack struct+array+out EnumerateDeviceLayerProperties EntrypointParam(type='VkLayerProperties', name='pProperties', decl='VkLayerProperties* pProperties', len='pPropertyCount', elem=<Element 'param' at 0x736889c21800>, is_const=False, num_pointers=1)
#endif
    return result;
}

static VKAPI_ATTR VkResult VKAPI_CALL
wrapper_tramp_EnumerateDeviceExtensionProperties(
    VkPhysicalDevice physicalDevice,
    const char* pLayerName,
    uint32_t* pPropertyCount,
    VkExtensionProperties* pProperties)
{
    VK_FROM_HANDLE(wrapper_physical_device, base, physicalDevice);
const char* pLayerName__ = pLayerName;
#ifdef NEEDS_UNWRAPPING_char
#endif
    VkResult result = base->dispatch_table.EnumerateDeviceExtensionProperties(base->dispatch_handle, pLayerName__, pPropertyCount, pProperties);
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
#ifdef NEEDS_UNWRAPPING_VkExtensionProperties
#warning TODO: Repack struct+array+out EnumerateDeviceExtensionProperties EntrypointParam(type='VkExtensionProperties', name='pProperties', decl='VkExtensionProperties* pProperties', len='pPropertyCount', elem=<Element 'param' at 0x736889c22200>, is_const=False, num_pointers=1)
#endif
    return result;
}
                                                                
static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_GetPhysicalDeviceSparseImageFormatProperties(
    VkPhysicalDevice physicalDevice,
    VkFormat format,
    VkImageType type,
    VkSampleCountFlagBits samples,
    VkImageUsageFlags usage,
    VkImageTiling tiling,
    uint32_t* pPropertyCount,
    VkSparseImageFormatProperties* pProperties)
{
    VK_FROM_HANDLE(wrapper_physical_device, base, physicalDevice);
VkFormat format__ = format;
#ifdef NEEDS_UNWRAPPING_VkFormat
#endif
VkImageType type__ = type;
#ifdef NEEDS_UNWRAPPING_VkImageType
#endif
VkSampleCountFlagBits samples__ = samples;
#ifdef NEEDS_UNWRAPPING_VkSampleCountFlagBits
#endif
VkImageUsageFlags usage__ = usage;
#ifdef NEEDS_UNWRAPPING_VkImageUsageFlags
#endif
VkImageTiling tiling__ = tiling;
#ifdef NEEDS_UNWRAPPING_VkImageTiling
#endif
    base->dispatch_table.GetPhysicalDeviceSparseImageFormatProperties(base->dispatch_handle, format__, type__, samples__, usage__, tiling__, pPropertyCount, pProperties);
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
#ifdef NEEDS_UNWRAPPING_VkSparseImageFormatProperties
#warning TODO: Repack struct+array+out GetPhysicalDeviceSparseImageFormatProperties EntrypointParam(type='VkSparseImageFormatProperties', name='pProperties', decl='VkSparseImageFormatProperties* pProperties', len='pPropertyCount', elem=<Element 'param' at 0x736889c2b380>, is_const=False, num_pointers=1)
#endif
    return ;
}
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                            
static VKAPI_ATTR VkResult VKAPI_CALL
wrapper_tramp_GetPhysicalDeviceDisplayPropertiesKHR(
    VkPhysicalDevice physicalDevice,
    uint32_t* pPropertyCount,
    VkDisplayPropertiesKHR* pProperties)
{
    VK_FROM_HANDLE(wrapper_physical_device, base, physicalDevice);
    VkResult result = base->dispatch_table.GetPhysicalDeviceDisplayPropertiesKHR(base->dispatch_handle, pPropertyCount, pProperties);
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
#ifdef NEEDS_UNWRAPPING_VkDisplayPropertiesKHR
#warning TODO: Repack struct+array+out GetPhysicalDeviceDisplayPropertiesKHR EntrypointParam(type='VkDisplayPropertiesKHR', name='pProperties', decl='VkDisplayPropertiesKHR* pProperties', len='pPropertyCount', elem=<Element 'param' at 0x736889ab3420>, is_const=False, num_pointers=1)
#endif
    return result;
}

static VKAPI_ATTR VkResult VKAPI_CALL
wrapper_tramp_GetPhysicalDeviceDisplayPlanePropertiesKHR(
    VkPhysicalDevice physicalDevice,
    uint32_t* pPropertyCount,
    VkDisplayPlanePropertiesKHR* pProperties)
{
    VK_FROM_HANDLE(wrapper_physical_device, base, physicalDevice);
    VkResult result = base->dispatch_table.GetPhysicalDeviceDisplayPlanePropertiesKHR(base->dispatch_handle, pPropertyCount, pProperties);
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
#ifdef NEEDS_UNWRAPPING_VkDisplayPlanePropertiesKHR
#warning TODO: Repack struct+array+out GetPhysicalDeviceDisplayPlanePropertiesKHR EntrypointParam(type='VkDisplayPlanePropertiesKHR', name='pProperties', decl='VkDisplayPlanePropertiesKHR* pProperties', len='pPropertyCount', elem=<Element 'param' at 0x736889ab3880>, is_const=False, num_pointers=1)
#endif
    return result;
}

static VKAPI_ATTR VkResult VKAPI_CALL
wrapper_tramp_GetDisplayPlaneSupportedDisplaysKHR(
    VkPhysicalDevice physicalDevice,
    uint32_t planeIndex,
    uint32_t* pDisplayCount,
    VkDisplayKHR* pDisplays)
{
    VK_FROM_HANDLE(wrapper_physical_device, base, physicalDevice);
uint32_t planeIndex__ = planeIndex;
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
    VkResult result = base->dispatch_table.GetDisplayPlaneSupportedDisplaysKHR(base->dispatch_handle, planeIndex__, pDisplayCount, pDisplays);
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
#ifdef NEEDS_UNWRAPPING_VkDisplayKHR
#endif
    return result;
}

static VKAPI_ATTR VkResult VKAPI_CALL
wrapper_tramp_GetDisplayModePropertiesKHR(
    VkPhysicalDevice physicalDevice,
    VkDisplayKHR display,
    uint32_t* pPropertyCount,
    VkDisplayModePropertiesKHR* pProperties)
{
    VK_FROM_HANDLE(wrapper_physical_device, base, physicalDevice);
VkDisplayKHR display__ = display;
#ifdef NEEDS_UNWRAPPING_VkDisplayKHR
#endif
    VkResult result = base->dispatch_table.GetDisplayModePropertiesKHR(base->dispatch_handle, display__, pPropertyCount, pProperties);
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
#ifdef NEEDS_UNWRAPPING_VkDisplayModePropertiesKHR
#warning TODO: Repack struct+array+out GetDisplayModePropertiesKHR EntrypointParam(type='VkDisplayModePropertiesKHR', name='pProperties', decl='VkDisplayModePropertiesKHR* pProperties', len='pPropertyCount', elem=<Element 'param' at 0x736889abc450>, is_const=False, num_pointers=1)
#endif
    return result;
}

static VKAPI_ATTR VkResult VKAPI_CALL
wrapper_tramp_CreateDisplayModeKHR(
    VkPhysicalDevice physicalDevice,
    VkDisplayKHR display,
    const VkDisplayModeCreateInfoKHR* pCreateInfo,
    const VkAllocationCallbacks* pAllocator,
    VkDisplayModeKHR* pMode)
{
    VK_FROM_HANDLE(wrapper_physical_device, base, physicalDevice);
VkDisplayKHR display__ = display;
#ifdef NEEDS_UNWRAPPING_VkDisplayKHR
#endif
const VkDisplayModeCreateInfoKHR* pCreateInfo__ = pCreateInfo;
#ifdef NEEDS_UNWRAPPING_VkDisplayModeCreateInfoKHR
    VkDisplayModeCreateInfoKHR _w_pCreateInfo = { 0 };
    pCreateInfo__ = &_w_pCreateInfo;
    unwrap_VkDisplayModeCreateInfoKHR(NULL, (VkDisplayModeCreateInfoKHR *) pCreateInfo__, pCreateInfo);
#endif
const VkAllocationCallbacks* pAllocator__ = pAllocator;
#ifdef NEEDS_UNWRAPPING_VkAllocationCallbacks
    VkAllocationCallbacks _w_pAllocator = { 0 };
    pAllocator__ = &_w_pAllocator;
    unwrap_VkAllocationCallbacks(NULL, (VkAllocationCallbacks *) pAllocator__, pAllocator);
#endif
    VkResult result = base->dispatch_table.CreateDisplayModeKHR(base->dispatch_handle, display__, pCreateInfo__, pAllocator__, pMode);
#ifdef NEEDS_UNWRAPPING_VkDisplayModeKHR
#endif
    return result;
}

static VKAPI_ATTR VkResult VKAPI_CALL
wrapper_tramp_GetDisplayPlaneCapabilitiesKHR(
    VkPhysicalDevice physicalDevice,
    VkDisplayModeKHR mode,
    uint32_t planeIndex,
    VkDisplayPlaneCapabilitiesKHR* pCapabilities)
{
    VK_FROM_HANDLE(wrapper_physical_device, base, physicalDevice);
VkDisplayModeKHR mode__ = mode;
#ifdef NEEDS_UNWRAPPING_VkDisplayModeKHR
#endif
uint32_t planeIndex__ = planeIndex;
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
    VkResult result = base->dispatch_table.GetDisplayPlaneCapabilitiesKHR(base->dispatch_handle, mode__, planeIndex__, pCapabilities);
#ifdef NEEDS_UNWRAPPING_VkDisplayPlaneCapabilitiesKHR
#warning TODO: Repack struct+ptr+out GetDisplayPlaneCapabilitiesKHR EntrypointParam(type='VkDisplayPlaneCapabilitiesKHR', name='pCapabilities', decl='VkDisplayPlaneCapabilitiesKHR* pCapabilities', len=None, elem=<Element 'param' at 0x736889abd030>, is_const=False, num_pointers=1)
#endif
    return result;
}
            
static VKAPI_ATTR VkResult VKAPI_CALL
wrapper_tramp_GetPhysicalDeviceSurfaceSupportKHR(
    VkPhysicalDevice physicalDevice,
    uint32_t queueFamilyIndex,
    VkSurfaceKHR surface,
    VkBool32* pSupported)
{
    VK_FROM_HANDLE(wrapper_physical_device, base, physicalDevice);
uint32_t queueFamilyIndex__ = queueFamilyIndex;
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
VkSurfaceKHR surface__ = surface;
#ifdef NEEDS_UNWRAPPING_VkSurfaceKHR
#endif
    VkResult result = base->dispatch_table.GetPhysicalDeviceSurfaceSupportKHR(base->dispatch_handle, queueFamilyIndex__, surface__, pSupported);
#ifdef NEEDS_UNWRAPPING_VkBool32
#endif
    return result;
}

static VKAPI_ATTR VkResult VKAPI_CALL
wrapper_tramp_GetPhysicalDeviceSurfaceCapabilitiesKHR(
    VkPhysicalDevice physicalDevice,
    VkSurfaceKHR surface,
    VkSurfaceCapabilitiesKHR* pSurfaceCapabilities)
{
    VK_FROM_HANDLE(wrapper_physical_device, base, physicalDevice);
VkSurfaceKHR surface__ = surface;
#ifdef NEEDS_UNWRAPPING_VkSurfaceKHR
#endif
    VkResult result = base->dispatch_table.GetPhysicalDeviceSurfaceCapabilitiesKHR(base->dispatch_handle, surface__, pSurfaceCapabilities);
#ifdef NEEDS_UNWRAPPING_VkSurfaceCapabilitiesKHR
#warning TODO: Repack struct+ptr+out GetPhysicalDeviceSurfaceCapabilitiesKHR EntrypointParam(type='VkSurfaceCapabilitiesKHR', name='pSurfaceCapabilities', decl='VkSurfaceCapabilitiesKHR* pSurfaceCapabilities', len=None, elem=<Element 'param' at 0x736889abeb60>, is_const=False, num_pointers=1)
#endif
    return result;
}

static VKAPI_ATTR VkResult VKAPI_CALL
wrapper_tramp_GetPhysicalDeviceSurfaceFormatsKHR(
    VkPhysicalDevice physicalDevice,
    VkSurfaceKHR surface,
    uint32_t* pSurfaceFormatCount,
    VkSurfaceFormatKHR* pSurfaceFormats)
{
    VK_FROM_HANDLE(wrapper_physical_device, base, physicalDevice);
VkSurfaceKHR surface__ = surface;
#ifdef NEEDS_UNWRAPPING_VkSurfaceKHR
#endif
    VkResult result = base->dispatch_table.GetPhysicalDeviceSurfaceFormatsKHR(base->dispatch_handle, surface__, pSurfaceFormatCount, pSurfaceFormats);
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
#ifdef NEEDS_UNWRAPPING_VkSurfaceFormatKHR
#warning TODO: Repack struct+array+out GetPhysicalDeviceSurfaceFormatsKHR EntrypointParam(type='VkSurfaceFormatKHR', name='pSurfaceFormats', decl='VkSurfaceFormatKHR* pSurfaceFormats', len='pSurfaceFormatCount', elem=<Element 'param' at 0x736889abf150>, is_const=False, num_pointers=1)
#endif
    return result;
}

static VKAPI_ATTR VkResult VKAPI_CALL
wrapper_tramp_GetPhysicalDeviceSurfacePresentModesKHR(
    VkPhysicalDevice physicalDevice,
    VkSurfaceKHR surface,
    uint32_t* pPresentModeCount,
    VkPresentModeKHR* pPresentModes)
{
    VK_FROM_HANDLE(wrapper_physical_device, base, physicalDevice);
VkSurfaceKHR surface__ = surface;
#ifdef NEEDS_UNWRAPPING_VkSurfaceKHR
#endif
    VkResult result = base->dispatch_table.GetPhysicalDeviceSurfacePresentModesKHR(base->dispatch_handle, surface__, pPresentModeCount, pPresentModes);
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
#ifdef NEEDS_UNWRAPPING_VkPresentModeKHR
#endif
    return result;
}
                            #ifdef VK_USE_PLATFORM_WAYLAND_KHR

static VKAPI_ATTR VkBool32 VKAPI_CALL
wrapper_tramp_GetPhysicalDeviceWaylandPresentationSupportKHR(
    VkPhysicalDevice physicalDevice,
    uint32_t queueFamilyIndex,
    struct wl_display* display)
{
    VK_FROM_HANDLE(wrapper_physical_device, base, physicalDevice);
uint32_t queueFamilyIndex__ = queueFamilyIndex;
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
    VkBool32 result = base->dispatch_table.GetPhysicalDeviceWaylandPresentationSupportKHR(base->dispatch_handle, queueFamilyIndex__, display);
#ifdef NEEDS_UNWRAPPING_wl_display
#endif
    return result;
}
#endif
    #ifdef VK_USE_PLATFORM_WIN32_KHR

static VKAPI_ATTR VkBool32 VKAPI_CALL
wrapper_tramp_GetPhysicalDeviceWin32PresentationSupportKHR(
    VkPhysicalDevice physicalDevice,
    uint32_t queueFamilyIndex)
{
    VK_FROM_HANDLE(wrapper_physical_device, base, physicalDevice);
uint32_t queueFamilyIndex__ = queueFamilyIndex;
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
    VkBool32 result = base->dispatch_table.GetPhysicalDeviceWin32PresentationSupportKHR(base->dispatch_handle, queueFamilyIndex__);

    return result;
}
#endif
    #ifdef VK_USE_PLATFORM_XLIB_KHR

static VKAPI_ATTR VkBool32 VKAPI_CALL
wrapper_tramp_GetPhysicalDeviceXlibPresentationSupportKHR(
    VkPhysicalDevice physicalDevice,
    uint32_t queueFamilyIndex,
    Display* dpy,
    VisualID visualID)
{
    VK_FROM_HANDLE(wrapper_physical_device, base, physicalDevice);
uint32_t queueFamilyIndex__ = queueFamilyIndex;
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
VisualID visualID__ = visualID;
#ifdef NEEDS_UNWRAPPING_VisualID
#endif
    VkBool32 result = base->dispatch_table.GetPhysicalDeviceXlibPresentationSupportKHR(base->dispatch_handle, queueFamilyIndex__, dpy, visualID__);
#ifdef NEEDS_UNWRAPPING_Display
#endif
    return result;
}
#endif
    #ifdef VK_USE_PLATFORM_XCB_KHR

static VKAPI_ATTR VkBool32 VKAPI_CALL
wrapper_tramp_GetPhysicalDeviceXcbPresentationSupportKHR(
    VkPhysicalDevice physicalDevice,
    uint32_t queueFamilyIndex,
    xcb_connection_t* connection,
    xcb_visualid_t visual_id)
{
    VK_FROM_HANDLE(wrapper_physical_device, base, physicalDevice);
uint32_t queueFamilyIndex__ = queueFamilyIndex;
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
xcb_visualid_t visual_id__ = visual_id;
#ifdef NEEDS_UNWRAPPING_xcb_visualid_t
#endif
    VkBool32 result = base->dispatch_table.GetPhysicalDeviceXcbPresentationSupportKHR(base->dispatch_handle, queueFamilyIndex__, connection, visual_id__);
#ifdef NEEDS_UNWRAPPING_xcb_connection_t
#endif
    return result;
}
#endif
    #ifdef VK_USE_PLATFORM_DIRECTFB_EXT

static VKAPI_ATTR VkBool32 VKAPI_CALL
wrapper_tramp_GetPhysicalDeviceDirectFBPresentationSupportEXT(
    VkPhysicalDevice physicalDevice,
    uint32_t queueFamilyIndex,
    IDirectFB* dfb)
{
    VK_FROM_HANDLE(wrapper_physical_device, base, physicalDevice);
uint32_t queueFamilyIndex__ = queueFamilyIndex;
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
    VkBool32 result = base->dispatch_table.GetPhysicalDeviceDirectFBPresentationSupportEXT(base->dispatch_handle, queueFamilyIndex__, dfb);
#ifdef NEEDS_UNWRAPPING_IDirectFB
#endif
    return result;
}
#endif
            #ifdef VK_USE_PLATFORM_SCREEN_QNX

static VKAPI_ATTR VkBool32 VKAPI_CALL
wrapper_tramp_GetPhysicalDeviceScreenPresentationSupportQNX(
    VkPhysicalDevice physicalDevice,
    uint32_t queueFamilyIndex,
    struct _screen_window* window)
{
    VK_FROM_HANDLE(wrapper_physical_device, base, physicalDevice);
uint32_t queueFamilyIndex__ = queueFamilyIndex;
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
    VkBool32 result = base->dispatch_table.GetPhysicalDeviceScreenPresentationSupportQNX(base->dispatch_handle, queueFamilyIndex__, window);
#ifdef NEEDS_UNWRAPPING__screen_window
#endif
    return result;
}
#endif
                                
static VKAPI_ATTR VkResult VKAPI_CALL
wrapper_tramp_GetPhysicalDeviceExternalImageFormatPropertiesNV(
    VkPhysicalDevice physicalDevice,
    VkFormat format,
    VkImageType type,
    VkImageTiling tiling,
    VkImageUsageFlags usage,
    VkImageCreateFlags flags,
    VkExternalMemoryHandleTypeFlagsNV externalHandleType,
    VkExternalImageFormatPropertiesNV* pExternalImageFormatProperties)
{
    VK_FROM_HANDLE(wrapper_physical_device, base, physicalDevice);
VkFormat format__ = format;
#ifdef NEEDS_UNWRAPPING_VkFormat
#endif
VkImageType type__ = type;
#ifdef NEEDS_UNWRAPPING_VkImageType
#endif
VkImageTiling tiling__ = tiling;
#ifdef NEEDS_UNWRAPPING_VkImageTiling
#endif
VkImageUsageFlags usage__ = usage;
#ifdef NEEDS_UNWRAPPING_VkImageUsageFlags
#endif
VkImageCreateFlags flags__ = flags;
#ifdef NEEDS_UNWRAPPING_VkImageCreateFlags
#endif
VkExternalMemoryHandleTypeFlagsNV externalHandleType__ = externalHandleType;
#ifdef NEEDS_UNWRAPPING_VkExternalMemoryHandleTypeFlagsNV
#endif
    VkResult result = base->dispatch_table.GetPhysicalDeviceExternalImageFormatPropertiesNV(base->dispatch_handle, format__, type__, tiling__, usage__, flags__, externalHandleType__, pExternalImageFormatProperties);
#ifdef NEEDS_UNWRAPPING_VkExternalImageFormatPropertiesNV
#warning TODO: Repack struct+ptr+out GetPhysicalDeviceExternalImageFormatPropertiesNV EntrypointParam(type='VkExternalImageFormatPropertiesNV', name='pExternalImageFormatProperties', decl='VkExternalImageFormatPropertiesNV* pExternalImageFormatProperties', len=None, elem=<Element 'param' at 0x736889ae4a40>, is_const=False, num_pointers=1)
#endif
    return result;
}
                            
static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_GetPhysicalDeviceFeatures2(
    VkPhysicalDevice physicalDevice,
    VkPhysicalDeviceFeatures2* pFeatures)
{
    VK_FROM_HANDLE(wrapper_physical_device, base, physicalDevice);
    base->dispatch_table.GetPhysicalDeviceFeatures2(base->dispatch_handle, pFeatures);
#ifdef NEEDS_UNWRAPPING_VkPhysicalDeviceFeatures2
#warning TODO: Repack struct+ptr+out GetPhysicalDeviceFeatures2 EntrypointParam(type='VkPhysicalDeviceFeatures2', name='pFeatures', decl='VkPhysicalDeviceFeatures2* pFeatures', len=None, elem=<Element 'param' at 0x736889ae7060>, is_const=False, num_pointers=1)
#endif
    return ;
}
    
static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_GetPhysicalDeviceProperties2(
    VkPhysicalDevice physicalDevice,
    VkPhysicalDeviceProperties2* pProperties)
{
    VK_FROM_HANDLE(wrapper_physical_device, base, physicalDevice);
    base->dispatch_table.GetPhysicalDeviceProperties2(base->dispatch_handle, pProperties);
#ifdef NEEDS_UNWRAPPING_VkPhysicalDeviceProperties2
#warning TODO: Repack struct+ptr+out GetPhysicalDeviceProperties2 EntrypointParam(type='VkPhysicalDeviceProperties2', name='pProperties', decl='VkPhysicalDeviceProperties2* pProperties', len=None, elem=<Element 'param' at 0x736889ae7510>, is_const=False, num_pointers=1)
#endif
    return ;
}
    
static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_GetPhysicalDeviceFormatProperties2(
    VkPhysicalDevice physicalDevice,
    VkFormat format,
    VkFormatProperties2* pFormatProperties)
{
    VK_FROM_HANDLE(wrapper_physical_device, base, physicalDevice);
VkFormat format__ = format;
#ifdef NEEDS_UNWRAPPING_VkFormat
#endif
    base->dispatch_table.GetPhysicalDeviceFormatProperties2(base->dispatch_handle, format__, pFormatProperties);
#ifdef NEEDS_UNWRAPPING_VkFormatProperties2
#warning TODO: Repack struct+ptr+out GetPhysicalDeviceFormatProperties2 EntrypointParam(type='VkFormatProperties2', name='pFormatProperties', decl='VkFormatProperties2* pFormatProperties', len=None, elem=<Element 'param' at 0x736889ae7ab0>, is_const=False, num_pointers=1)
#endif
    return ;
}
    
static VKAPI_ATTR VkResult VKAPI_CALL
wrapper_tramp_GetPhysicalDeviceImageFormatProperties2(
    VkPhysicalDevice physicalDevice,
    const VkPhysicalDeviceImageFormatInfo2* pImageFormatInfo,
    VkImageFormatProperties2* pImageFormatProperties)
{
    VK_FROM_HANDLE(wrapper_physical_device, base, physicalDevice);
const VkPhysicalDeviceImageFormatInfo2* pImageFormatInfo__ = pImageFormatInfo;
#ifdef NEEDS_UNWRAPPING_VkPhysicalDeviceImageFormatInfo2
    VkPhysicalDeviceImageFormatInfo2 _w_pImageFormatInfo = { 0 };
    pImageFormatInfo__ = &_w_pImageFormatInfo;
    unwrap_VkPhysicalDeviceImageFormatInfo2(NULL, (VkPhysicalDeviceImageFormatInfo2 *) pImageFormatInfo__, pImageFormatInfo);
#endif
    VkResult result = base->dispatch_table.GetPhysicalDeviceImageFormatProperties2(base->dispatch_handle, pImageFormatInfo__, pImageFormatProperties);
#ifdef NEEDS_UNWRAPPING_VkImageFormatProperties2
#warning TODO: Repack struct+ptr+out GetPhysicalDeviceImageFormatProperties2 EntrypointParam(type='VkImageFormatProperties2', name='pImageFormatProperties', decl='VkImageFormatProperties2* pImageFormatProperties', len=None, elem=<Element 'param' at 0x736889af0040>, is_const=False, num_pointers=1)
#endif
    return result;
}
    
static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_GetPhysicalDeviceQueueFamilyProperties2(
    VkPhysicalDevice physicalDevice,
    uint32_t* pQueueFamilyPropertyCount,
    VkQueueFamilyProperties2* pQueueFamilyProperties)
{
    VK_FROM_HANDLE(wrapper_physical_device, base, physicalDevice);
    base->dispatch_table.GetPhysicalDeviceQueueFamilyProperties2(base->dispatch_handle, pQueueFamilyPropertyCount, pQueueFamilyProperties);
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
#ifdef NEEDS_UNWRAPPING_VkQueueFamilyProperties2
#warning TODO: Repack struct+array+out GetPhysicalDeviceQueueFamilyProperties2 EntrypointParam(type='VkQueueFamilyProperties2', name='pQueueFamilyProperties', decl='VkQueueFamilyProperties2* pQueueFamilyProperties', len='pQueueFamilyPropertyCount', elem=<Element 'param' at 0x736889af0590>, is_const=False, num_pointers=1)
#endif
    return ;
}
    
static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_GetPhysicalDeviceMemoryProperties2(
    VkPhysicalDevice physicalDevice,
    VkPhysicalDeviceMemoryProperties2* pMemoryProperties)
{
    VK_FROM_HANDLE(wrapper_physical_device, base, physicalDevice);
    base->dispatch_table.GetPhysicalDeviceMemoryProperties2(base->dispatch_handle, pMemoryProperties);
#ifdef NEEDS_UNWRAPPING_VkPhysicalDeviceMemoryProperties2
#warning TODO: Repack struct+ptr+out GetPhysicalDeviceMemoryProperties2 EntrypointParam(type='VkPhysicalDeviceMemoryProperties2', name='pMemoryProperties', decl='VkPhysicalDeviceMemoryProperties2* pMemoryProperties', len=None, elem=<Element 'param' at 0x736889af09a0>, is_const=False, num_pointers=1)
#endif
    return ;
}
    
static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_GetPhysicalDeviceSparseImageFormatProperties2(
    VkPhysicalDevice physicalDevice,
    const VkPhysicalDeviceSparseImageFormatInfo2* pFormatInfo,
    uint32_t* pPropertyCount,
    VkSparseImageFormatProperties2* pProperties)
{
    VK_FROM_HANDLE(wrapper_physical_device, base, physicalDevice);
const VkPhysicalDeviceSparseImageFormatInfo2* pFormatInfo__ = pFormatInfo;
#ifdef NEEDS_UNWRAPPING_VkPhysicalDeviceSparseImageFormatInfo2
    VkPhysicalDeviceSparseImageFormatInfo2 _w_pFormatInfo = { 0 };
    pFormatInfo__ = &_w_pFormatInfo;
    unwrap_VkPhysicalDeviceSparseImageFormatInfo2(NULL, (VkPhysicalDeviceSparseImageFormatInfo2 *) pFormatInfo__, pFormatInfo);
#endif
    base->dispatch_table.GetPhysicalDeviceSparseImageFormatProperties2(base->dispatch_handle, pFormatInfo__, pPropertyCount, pProperties);
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
#ifdef NEEDS_UNWRAPPING_VkSparseImageFormatProperties2
#warning TODO: Repack struct+array+out GetPhysicalDeviceSparseImageFormatProperties2 EntrypointParam(type='VkSparseImageFormatProperties2', name='pProperties', decl='VkSparseImageFormatProperties2* pProperties', len='pPropertyCount', elem=<Element 'param' at 0x736889af1030>, is_const=False, num_pointers=1)
#endif
    return ;
}
                
static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_GetPhysicalDeviceExternalBufferProperties(
    VkPhysicalDevice physicalDevice,
    const VkPhysicalDeviceExternalBufferInfo* pExternalBufferInfo,
    VkExternalBufferProperties* pExternalBufferProperties)
{
    VK_FROM_HANDLE(wrapper_physical_device, base, physicalDevice);
const VkPhysicalDeviceExternalBufferInfo* pExternalBufferInfo__ = pExternalBufferInfo;
#ifdef NEEDS_UNWRAPPING_VkPhysicalDeviceExternalBufferInfo
    VkPhysicalDeviceExternalBufferInfo _w_pExternalBufferInfo = { 0 };
    pExternalBufferInfo__ = &_w_pExternalBufferInfo;
    unwrap_VkPhysicalDeviceExternalBufferInfo(NULL, (VkPhysicalDeviceExternalBufferInfo *) pExternalBufferInfo__, pExternalBufferInfo);
#endif
    base->dispatch_table.GetPhysicalDeviceExternalBufferProperties(base->dispatch_handle, pExternalBufferInfo__, pExternalBufferProperties);
#ifdef NEEDS_UNWRAPPING_VkExternalBufferProperties
#warning TODO: Repack struct+ptr+out GetPhysicalDeviceExternalBufferProperties EntrypointParam(type='VkExternalBufferProperties', name='pExternalBufferProperties', decl='VkExternalBufferProperties* pExternalBufferProperties', len=None, elem=<Element 'param' at 0x736889af20c0>, is_const=False, num_pointers=1)
#endif
    return ;
}
                                
static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_GetPhysicalDeviceExternalSemaphoreProperties(
    VkPhysicalDevice physicalDevice,
    const VkPhysicalDeviceExternalSemaphoreInfo* pExternalSemaphoreInfo,
    VkExternalSemaphoreProperties* pExternalSemaphoreProperties)
{
    VK_FROM_HANDLE(wrapper_physical_device, base, physicalDevice);
const VkPhysicalDeviceExternalSemaphoreInfo* pExternalSemaphoreInfo__ = pExternalSemaphoreInfo;
#ifdef NEEDS_UNWRAPPING_VkPhysicalDeviceExternalSemaphoreInfo
    VkPhysicalDeviceExternalSemaphoreInfo _w_pExternalSemaphoreInfo = { 0 };
    pExternalSemaphoreInfo__ = &_w_pExternalSemaphoreInfo;
    unwrap_VkPhysicalDeviceExternalSemaphoreInfo(NULL, (VkPhysicalDeviceExternalSemaphoreInfo *) pExternalSemaphoreInfo__, pExternalSemaphoreInfo);
#endif
    base->dispatch_table.GetPhysicalDeviceExternalSemaphoreProperties(base->dispatch_handle, pExternalSemaphoreInfo__, pExternalSemaphoreProperties);
#ifdef NEEDS_UNWRAPPING_VkExternalSemaphoreProperties
#warning TODO: Repack struct+ptr+out GetPhysicalDeviceExternalSemaphoreProperties EntrypointParam(type='VkExternalSemaphoreProperties', name='pExternalSemaphoreProperties', decl='VkExternalSemaphoreProperties* pExternalSemaphoreProperties', len=None, elem=<Element 'param' at 0x736889afd8a0>, is_const=False, num_pointers=1)
#endif
    return ;
}
                            
static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_GetPhysicalDeviceExternalFenceProperties(
    VkPhysicalDevice physicalDevice,
    const VkPhysicalDeviceExternalFenceInfo* pExternalFenceInfo,
    VkExternalFenceProperties* pExternalFenceProperties)
{
    VK_FROM_HANDLE(wrapper_physical_device, base, physicalDevice);
const VkPhysicalDeviceExternalFenceInfo* pExternalFenceInfo__ = pExternalFenceInfo;
#ifdef NEEDS_UNWRAPPING_VkPhysicalDeviceExternalFenceInfo
    VkPhysicalDeviceExternalFenceInfo _w_pExternalFenceInfo = { 0 };
    pExternalFenceInfo__ = &_w_pExternalFenceInfo;
    unwrap_VkPhysicalDeviceExternalFenceInfo(NULL, (VkPhysicalDeviceExternalFenceInfo *) pExternalFenceInfo__, pExternalFenceInfo);
#endif
    base->dispatch_table.GetPhysicalDeviceExternalFenceProperties(base->dispatch_handle, pExternalFenceInfo__, pExternalFenceProperties);
#ifdef NEEDS_UNWRAPPING_VkExternalFenceProperties
#warning TODO: Repack struct+ptr+out GetPhysicalDeviceExternalFenceProperties EntrypointParam(type='VkExternalFenceProperties', name='pExternalFenceProperties', decl='VkExternalFenceProperties* pExternalFenceProperties', len=None, elem=<Element 'param' at 0x736889aff6a0>, is_const=False, num_pointers=1)
#endif
    return ;
}
                    
static VKAPI_ATTR VkResult VKAPI_CALL
wrapper_tramp_ReleaseDisplayEXT(
    VkPhysicalDevice physicalDevice,
    VkDisplayKHR display)
{
    VK_FROM_HANDLE(wrapper_physical_device, base, physicalDevice);
VkDisplayKHR display__ = display;
#ifdef NEEDS_UNWRAPPING_VkDisplayKHR
#endif
    VkResult result = base->dispatch_table.ReleaseDisplayEXT(base->dispatch_handle, display__);

    return result;
}
#ifdef VK_USE_PLATFORM_XLIB_XRANDR_EXT

static VKAPI_ATTR VkResult VKAPI_CALL
wrapper_tramp_AcquireXlibDisplayEXT(
    VkPhysicalDevice physicalDevice,
    Display* dpy,
    VkDisplayKHR display)
{
    VK_FROM_HANDLE(wrapper_physical_device, base, physicalDevice);
VkDisplayKHR display__ = display;
#ifdef NEEDS_UNWRAPPING_VkDisplayKHR
#endif
    VkResult result = base->dispatch_table.AcquireXlibDisplayEXT(base->dispatch_handle, dpy, display__);
#ifdef NEEDS_UNWRAPPING_Display
#endif
    return result;
}
#endif
#ifdef VK_USE_PLATFORM_XLIB_XRANDR_EXT

static VKAPI_ATTR VkResult VKAPI_CALL
wrapper_tramp_GetRandROutputDisplayEXT(
    VkPhysicalDevice physicalDevice,
    Display* dpy,
    RROutput rrOutput,
    VkDisplayKHR* pDisplay)
{
    VK_FROM_HANDLE(wrapper_physical_device, base, physicalDevice);
RROutput rrOutput__ = rrOutput;
#ifdef NEEDS_UNWRAPPING_RROutput
#endif
    VkResult result = base->dispatch_table.GetRandROutputDisplayEXT(base->dispatch_handle, dpy, rrOutput__, pDisplay);
#ifdef NEEDS_UNWRAPPING_Display
#endif
#ifdef NEEDS_UNWRAPPING_VkDisplayKHR
#endif
    return result;
}
#endif
#ifdef VK_USE_PLATFORM_WIN32_KHR

static VKAPI_ATTR VkResult VKAPI_CALL
wrapper_tramp_AcquireWinrtDisplayNV(
    VkPhysicalDevice physicalDevice,
    VkDisplayKHR display)
{
    VK_FROM_HANDLE(wrapper_physical_device, base, physicalDevice);
VkDisplayKHR display__ = display;
#ifdef NEEDS_UNWRAPPING_VkDisplayKHR
#endif
    VkResult result = base->dispatch_table.AcquireWinrtDisplayNV(base->dispatch_handle, display__);

    return result;
}
#endif
#ifdef VK_USE_PLATFORM_WIN32_KHR

static VKAPI_ATTR VkResult VKAPI_CALL
wrapper_tramp_GetWinrtDisplayNV(
    VkPhysicalDevice physicalDevice,
    uint32_t deviceRelativeId,
    VkDisplayKHR* pDisplay)
{
    VK_FROM_HANDLE(wrapper_physical_device, base, physicalDevice);
uint32_t deviceRelativeId__ = deviceRelativeId;
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
    VkResult result = base->dispatch_table.GetWinrtDisplayNV(base->dispatch_handle, deviceRelativeId__, pDisplay);
#ifdef NEEDS_UNWRAPPING_VkDisplayKHR
#endif
    return result;
}
#endif
                
static VKAPI_ATTR VkResult VKAPI_CALL
wrapper_tramp_GetPhysicalDeviceSurfaceCapabilities2EXT(
    VkPhysicalDevice physicalDevice,
    VkSurfaceKHR surface,
    VkSurfaceCapabilities2EXT* pSurfaceCapabilities)
{
    VK_FROM_HANDLE(wrapper_physical_device, base, physicalDevice);
VkSurfaceKHR surface__ = surface;
#ifdef NEEDS_UNWRAPPING_VkSurfaceKHR
#endif
    VkResult result = base->dispatch_table.GetPhysicalDeviceSurfaceCapabilities2EXT(base->dispatch_handle, surface__, pSurfaceCapabilities);
#ifdef NEEDS_UNWRAPPING_VkSurfaceCapabilities2EXT
#warning TODO: Repack struct+ptr+out GetPhysicalDeviceSurfaceCapabilities2EXT EntrypointParam(type='VkSurfaceCapabilities2EXT', name='pSurfaceCapabilities', decl='VkSurfaceCapabilities2EXT* pSurfaceCapabilities', len=None, elem=<Element 'param' at 0x736889b11ee0>, is_const=False, num_pointers=1)
#endif
    return result;
}
                                                            
static VKAPI_ATTR VkResult VKAPI_CALL
wrapper_tramp_GetPhysicalDevicePresentRectanglesKHR(
    VkPhysicalDevice physicalDevice,
    VkSurfaceKHR surface,
    uint32_t* pRectCount,
    VkRect2D* pRects)
{
    VK_FROM_HANDLE(wrapper_physical_device, base, physicalDevice);
VkSurfaceKHR surface__ = surface;
#ifdef NEEDS_UNWRAPPING_VkSurfaceKHR
#endif
    VkResult result = base->dispatch_table.GetPhysicalDevicePresentRectanglesKHR(base->dispatch_handle, surface__, pRectCount, pRects);
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
#ifdef NEEDS_UNWRAPPING_VkRect2D
#warning TODO: Repack struct+array+out GetPhysicalDevicePresentRectanglesKHR EntrypointParam(type='VkRect2D', name='pRects', decl='VkRect2D* pRects', len='pRectCount', elem=<Element 'param' at 0x736889b19530>, is_const=False, num_pointers=1)
#endif
    return result;
}
                                                                            
static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_GetPhysicalDeviceMultisamplePropertiesEXT(
    VkPhysicalDevice physicalDevice,
    VkSampleCountFlagBits samples,
    VkMultisamplePropertiesEXT* pMultisampleProperties)
{
    VK_FROM_HANDLE(wrapper_physical_device, base, physicalDevice);
VkSampleCountFlagBits samples__ = samples;
#ifdef NEEDS_UNWRAPPING_VkSampleCountFlagBits
#endif
    base->dispatch_table.GetPhysicalDeviceMultisamplePropertiesEXT(base->dispatch_handle, samples__, pMultisampleProperties);
#ifdef NEEDS_UNWRAPPING_VkMultisamplePropertiesEXT
#warning TODO: Repack struct+ptr+out GetPhysicalDeviceMultisamplePropertiesEXT EntrypointParam(type='VkMultisamplePropertiesEXT', name='pMultisampleProperties', decl='VkMultisamplePropertiesEXT* pMultisampleProperties', len=None, elem=<Element 'param' at 0x736889b26de0>, is_const=False, num_pointers=1)
#endif
    return ;
}

static VKAPI_ATTR VkResult VKAPI_CALL
wrapper_tramp_GetPhysicalDeviceSurfaceCapabilities2KHR(
    VkPhysicalDevice physicalDevice,
    const VkPhysicalDeviceSurfaceInfo2KHR* pSurfaceInfo,
    VkSurfaceCapabilities2KHR* pSurfaceCapabilities)
{
    VK_FROM_HANDLE(wrapper_physical_device, base, physicalDevice);
const VkPhysicalDeviceSurfaceInfo2KHR* pSurfaceInfo__ = pSurfaceInfo;
#ifdef NEEDS_UNWRAPPING_VkPhysicalDeviceSurfaceInfo2KHR
    VkPhysicalDeviceSurfaceInfo2KHR _w_pSurfaceInfo = { 0 };
    pSurfaceInfo__ = &_w_pSurfaceInfo;
    unwrap_VkPhysicalDeviceSurfaceInfo2KHR(NULL, (VkPhysicalDeviceSurfaceInfo2KHR *) pSurfaceInfo__, pSurfaceInfo);
#endif
    VkResult result = base->dispatch_table.GetPhysicalDeviceSurfaceCapabilities2KHR(base->dispatch_handle, pSurfaceInfo__, pSurfaceCapabilities);
#ifdef NEEDS_UNWRAPPING_VkSurfaceCapabilities2KHR
#warning TODO: Repack struct+ptr+out GetPhysicalDeviceSurfaceCapabilities2KHR EntrypointParam(type='VkSurfaceCapabilities2KHR', name='pSurfaceCapabilities', decl='VkSurfaceCapabilities2KHR* pSurfaceCapabilities', len=None, elem=<Element 'param' at 0x736889b27290>, is_const=False, num_pointers=1)
#endif
    return result;
}

static VKAPI_ATTR VkResult VKAPI_CALL
wrapper_tramp_GetPhysicalDeviceSurfaceFormats2KHR(
    VkPhysicalDevice physicalDevice,
    const VkPhysicalDeviceSurfaceInfo2KHR* pSurfaceInfo,
    uint32_t* pSurfaceFormatCount,
    VkSurfaceFormat2KHR* pSurfaceFormats)
{
    VK_FROM_HANDLE(wrapper_physical_device, base, physicalDevice);
const VkPhysicalDeviceSurfaceInfo2KHR* pSurfaceInfo__ = pSurfaceInfo;
#ifdef NEEDS_UNWRAPPING_VkPhysicalDeviceSurfaceInfo2KHR
    VkPhysicalDeviceSurfaceInfo2KHR _w_pSurfaceInfo = { 0 };
    pSurfaceInfo__ = &_w_pSurfaceInfo;
    unwrap_VkPhysicalDeviceSurfaceInfo2KHR(NULL, (VkPhysicalDeviceSurfaceInfo2KHR *) pSurfaceInfo__, pSurfaceInfo);
#endif
    VkResult result = base->dispatch_table.GetPhysicalDeviceSurfaceFormats2KHR(base->dispatch_handle, pSurfaceInfo__, pSurfaceFormatCount, pSurfaceFormats);
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
#ifdef NEEDS_UNWRAPPING_VkSurfaceFormat2KHR
#warning TODO: Repack struct+array+out GetPhysicalDeviceSurfaceFormats2KHR EntrypointParam(type='VkSurfaceFormat2KHR', name='pSurfaceFormats', decl='VkSurfaceFormat2KHR* pSurfaceFormats', len='pSurfaceFormatCount', elem=<Element 'param' at 0x736889b278d0>, is_const=False, num_pointers=1)
#endif
    return result;
}

static VKAPI_ATTR VkResult VKAPI_CALL
wrapper_tramp_GetPhysicalDeviceDisplayProperties2KHR(
    VkPhysicalDevice physicalDevice,
    uint32_t* pPropertyCount,
    VkDisplayProperties2KHR* pProperties)
{
    VK_FROM_HANDLE(wrapper_physical_device, base, physicalDevice);
    VkResult result = base->dispatch_table.GetPhysicalDeviceDisplayProperties2KHR(base->dispatch_handle, pPropertyCount, pProperties);
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
#ifdef NEEDS_UNWRAPPING_VkDisplayProperties2KHR
#warning TODO: Repack struct+array+out GetPhysicalDeviceDisplayProperties2KHR EntrypointParam(type='VkDisplayProperties2KHR', name='pProperties', decl='VkDisplayProperties2KHR* pProperties', len='pPropertyCount', elem=<Element 'param' at 0x736889b27d30>, is_const=False, num_pointers=1)
#endif
    return result;
}

static VKAPI_ATTR VkResult VKAPI_CALL
wrapper_tramp_GetPhysicalDeviceDisplayPlaneProperties2KHR(
    VkPhysicalDevice physicalDevice,
    uint32_t* pPropertyCount,
    VkDisplayPlaneProperties2KHR* pProperties)
{
    VK_FROM_HANDLE(wrapper_physical_device, base, physicalDevice);
    VkResult result = base->dispatch_table.GetPhysicalDeviceDisplayPlaneProperties2KHR(base->dispatch_handle, pPropertyCount, pProperties);
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
#ifdef NEEDS_UNWRAPPING_VkDisplayPlaneProperties2KHR
#warning TODO: Repack struct+array+out GetPhysicalDeviceDisplayPlaneProperties2KHR EntrypointParam(type='VkDisplayPlaneProperties2KHR', name='pProperties', decl='VkDisplayPlaneProperties2KHR* pProperties', len='pPropertyCount', elem=<Element 'param' at 0x736889b34220>, is_const=False, num_pointers=1)
#endif
    return result;
}

static VKAPI_ATTR VkResult VKAPI_CALL
wrapper_tramp_GetDisplayModeProperties2KHR(
    VkPhysicalDevice physicalDevice,
    VkDisplayKHR display,
    uint32_t* pPropertyCount,
    VkDisplayModeProperties2KHR* pProperties)
{
    VK_FROM_HANDLE(wrapper_physical_device, base, physicalDevice);
VkDisplayKHR display__ = display;
#ifdef NEEDS_UNWRAPPING_VkDisplayKHR
#endif
    VkResult result = base->dispatch_table.GetDisplayModeProperties2KHR(base->dispatch_handle, display__, pPropertyCount, pProperties);
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
#ifdef NEEDS_UNWRAPPING_VkDisplayModeProperties2KHR
#warning TODO: Repack struct+array+out GetDisplayModeProperties2KHR EntrypointParam(type='VkDisplayModeProperties2KHR', name='pProperties', decl='VkDisplayModeProperties2KHR* pProperties', len='pPropertyCount', elem=<Element 'param' at 0x736889b34810>, is_const=False, num_pointers=1)
#endif
    return result;
}

static VKAPI_ATTR VkResult VKAPI_CALL
wrapper_tramp_GetDisplayPlaneCapabilities2KHR(
    VkPhysicalDevice physicalDevice,
    const VkDisplayPlaneInfo2KHR* pDisplayPlaneInfo,
    VkDisplayPlaneCapabilities2KHR* pCapabilities)
{
    VK_FROM_HANDLE(wrapper_physical_device, base, physicalDevice);
const VkDisplayPlaneInfo2KHR* pDisplayPlaneInfo__ = pDisplayPlaneInfo;
#ifdef NEEDS_UNWRAPPING_VkDisplayPlaneInfo2KHR
    VkDisplayPlaneInfo2KHR _w_pDisplayPlaneInfo = { 0 };
    pDisplayPlaneInfo__ = &_w_pDisplayPlaneInfo;
    unwrap_VkDisplayPlaneInfo2KHR(NULL, (VkDisplayPlaneInfo2KHR *) pDisplayPlaneInfo__, pDisplayPlaneInfo);
#endif
    VkResult result = base->dispatch_table.GetDisplayPlaneCapabilities2KHR(base->dispatch_handle, pDisplayPlaneInfo__, pCapabilities);
#ifdef NEEDS_UNWRAPPING_VkDisplayPlaneCapabilities2KHR
#warning TODO: Repack struct+ptr+out GetDisplayPlaneCapabilities2KHR EntrypointParam(type='VkDisplayPlaneCapabilities2KHR', name='pCapabilities', decl='VkDisplayPlaneCapabilities2KHR* pCapabilities', len=None, elem=<Element 'param' at 0x736889b34cc0>, is_const=False, num_pointers=1)
#endif
    return result;
}
                                                                                                                    
static VKAPI_ATTR VkResult VKAPI_CALL
wrapper_tramp_GetPhysicalDeviceCalibrateableTimeDomainsKHR(
    VkPhysicalDevice physicalDevice,
    uint32_t* pTimeDomainCount,
    VkTimeDomainKHR* pTimeDomains)
{
    VK_FROM_HANDLE(wrapper_physical_device, base, physicalDevice);
    VkResult result = base->dispatch_table.GetPhysicalDeviceCalibrateableTimeDomainsKHR(base->dispatch_handle, pTimeDomainCount, pTimeDomains);
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
#ifdef NEEDS_UNWRAPPING_VkTimeDomainKHR
#endif
    return result;
}
                                                                                                                                                                                                                                                                                                                                            
static VKAPI_ATTR VkResult VKAPI_CALL
wrapper_tramp_GetPhysicalDeviceCooperativeMatrixPropertiesNV(
    VkPhysicalDevice physicalDevice,
    uint32_t* pPropertyCount,
    VkCooperativeMatrixPropertiesNV* pProperties)
{
    VK_FROM_HANDLE(wrapper_physical_device, base, physicalDevice);
    VkResult result = base->dispatch_table.GetPhysicalDeviceCooperativeMatrixPropertiesNV(base->dispatch_handle, pPropertyCount, pProperties);
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
#ifdef NEEDS_UNWRAPPING_VkCooperativeMatrixPropertiesNV
#warning TODO: Repack struct+array+out GetPhysicalDeviceCooperativeMatrixPropertiesNV EntrypointParam(type='VkCooperativeMatrixPropertiesNV', name='pProperties', decl='VkCooperativeMatrixPropertiesNV* pProperties', len='pPropertyCount', elem=<Element 'param' at 0x736889992b10>, is_const=False, num_pointers=1)
#endif
    return result;
}
                            #ifdef VK_USE_PLATFORM_WIN32_KHR

static VKAPI_ATTR VkResult VKAPI_CALL
wrapper_tramp_GetPhysicalDeviceSurfacePresentModes2EXT(
    VkPhysicalDevice physicalDevice,
    const VkPhysicalDeviceSurfaceInfo2KHR* pSurfaceInfo,
    uint32_t* pPresentModeCount,
    VkPresentModeKHR* pPresentModes)
{
    VK_FROM_HANDLE(wrapper_physical_device, base, physicalDevice);
const VkPhysicalDeviceSurfaceInfo2KHR* pSurfaceInfo__ = pSurfaceInfo;
#ifdef NEEDS_UNWRAPPING_VkPhysicalDeviceSurfaceInfo2KHR
    VkPhysicalDeviceSurfaceInfo2KHR _w_pSurfaceInfo = { 0 };
    pSurfaceInfo__ = &_w_pSurfaceInfo;
    unwrap_VkPhysicalDeviceSurfaceInfo2KHR(NULL, (VkPhysicalDeviceSurfaceInfo2KHR *) pSurfaceInfo__, pSurfaceInfo);
#endif
    VkResult result = base->dispatch_table.GetPhysicalDeviceSurfacePresentModes2EXT(base->dispatch_handle, pSurfaceInfo__, pPresentModeCount, pPresentModes);
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
#ifdef NEEDS_UNWRAPPING_VkPresentModeKHR
#endif
    return result;
}
#endif
            
static VKAPI_ATTR VkResult VKAPI_CALL
wrapper_tramp_EnumeratePhysicalDeviceQueueFamilyPerformanceQueryCountersKHR(
    VkPhysicalDevice physicalDevice,
    uint32_t queueFamilyIndex,
    uint32_t* pCounterCount,
    VkPerformanceCounterKHR* pCounters,
    VkPerformanceCounterDescriptionKHR* pCounterDescriptions)
{
    VK_FROM_HANDLE(wrapper_physical_device, base, physicalDevice);
uint32_t queueFamilyIndex__ = queueFamilyIndex;
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
    VkResult result = base->dispatch_table.EnumeratePhysicalDeviceQueueFamilyPerformanceQueryCountersKHR(base->dispatch_handle, queueFamilyIndex__, pCounterCount, pCounters, pCounterDescriptions);
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
#ifdef NEEDS_UNWRAPPING_VkPerformanceCounterKHR
#warning TODO: Repack struct+array+out EnumeratePhysicalDeviceQueueFamilyPerformanceQueryCountersKHR EntrypointParam(type='VkPerformanceCounterKHR', name='pCounters', decl='VkPerformanceCounterKHR* pCounters', len='pCounterCount', elem=<Element 'param' at 0x73688999e4d0>, is_const=False, num_pointers=1)
#endif
#ifdef NEEDS_UNWRAPPING_VkPerformanceCounterDescriptionKHR
#warning TODO: Repack struct+array+out EnumeratePhysicalDeviceQueueFamilyPerformanceQueryCountersKHR EntrypointParam(type='VkPerformanceCounterDescriptionKHR', name='pCounterDescriptions', decl='VkPerformanceCounterDescriptionKHR* pCounterDescriptions', len='pCounterCount', elem=<Element 'param' at 0x73688999e5c0>, is_const=False, num_pointers=1)
#endif
    return result;
}

static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_GetPhysicalDeviceQueueFamilyPerformanceQueryPassesKHR(
    VkPhysicalDevice physicalDevice,
    const VkQueryPoolPerformanceCreateInfoKHR* pPerformanceQueryCreateInfo,
    uint32_t* pNumPasses)
{
    VK_FROM_HANDLE(wrapper_physical_device, base, physicalDevice);
const VkQueryPoolPerformanceCreateInfoKHR* pPerformanceQueryCreateInfo__ = pPerformanceQueryCreateInfo;
#ifdef NEEDS_UNWRAPPING_VkQueryPoolPerformanceCreateInfoKHR
    VkQueryPoolPerformanceCreateInfoKHR _w_pPerformanceQueryCreateInfo = { 0 };
    pPerformanceQueryCreateInfo__ = &_w_pPerformanceQueryCreateInfo;
    unwrap_VkQueryPoolPerformanceCreateInfoKHR(NULL, (VkQueryPoolPerformanceCreateInfoKHR *) pPerformanceQueryCreateInfo__, pPerformanceQueryCreateInfo);
#endif
    base->dispatch_table.GetPhysicalDeviceQueueFamilyPerformanceQueryPassesKHR(base->dispatch_handle, pPerformanceQueryCreateInfo__, pNumPasses);
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
    return ;
}
                                    
static VKAPI_ATTR VkResult VKAPI_CALL
wrapper_tramp_GetPhysicalDeviceSupportedFramebufferMixedSamplesCombinationsNV(
    VkPhysicalDevice physicalDevice,
    uint32_t* pCombinationCount,
    VkFramebufferMixedSamplesCombinationNV* pCombinations)
{
    VK_FROM_HANDLE(wrapper_physical_device, base, physicalDevice);
    VkResult result = base->dispatch_table.GetPhysicalDeviceSupportedFramebufferMixedSamplesCombinationsNV(base->dispatch_handle, pCombinationCount, pCombinations);
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
#ifdef NEEDS_UNWRAPPING_VkFramebufferMixedSamplesCombinationNV
#warning TODO: Repack struct+array+out GetPhysicalDeviceSupportedFramebufferMixedSamplesCombinationsNV EntrypointParam(type='VkFramebufferMixedSamplesCombinationNV', name='pCombinations', decl='VkFramebufferMixedSamplesCombinationNV* pCombinations', len='pCombinationCount', elem=<Element 'param' at 0x7368899a8a90>, is_const=False, num_pointers=1)
#endif
    return result;
}
                                                                
static VKAPI_ATTR VkResult VKAPI_CALL
wrapper_tramp_GetPhysicalDeviceToolProperties(
    VkPhysicalDevice physicalDevice,
    uint32_t* pToolCount,
    VkPhysicalDeviceToolProperties* pToolProperties)
{
    VK_FROM_HANDLE(wrapper_physical_device, base, physicalDevice);
    VkResult result = base->dispatch_table.GetPhysicalDeviceToolProperties(base->dispatch_handle, pToolCount, pToolProperties);
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
#ifdef NEEDS_UNWRAPPING_VkPhysicalDeviceToolProperties
#warning TODO: Repack struct+array+out GetPhysicalDeviceToolProperties EntrypointParam(type='VkPhysicalDeviceToolProperties', name='pToolProperties', decl='VkPhysicalDeviceToolProperties* pToolProperties', len='pToolCount', elem=<Element 'param' at 0x7368899b5620>, is_const=False, num_pointers=1)
#endif
    return result;
}
                                                                                                                                                                                                                                                                                                                                                                                                        
static VKAPI_ATTR VkResult VKAPI_CALL
wrapper_tramp_GetPhysicalDeviceFragmentShadingRatesKHR(
    VkPhysicalDevice physicalDevice,
    uint32_t* pFragmentShadingRateCount,
    VkPhysicalDeviceFragmentShadingRateKHR* pFragmentShadingRates)
{
    VK_FROM_HANDLE(wrapper_physical_device, base, physicalDevice);
    VkResult result = base->dispatch_table.GetPhysicalDeviceFragmentShadingRatesKHR(base->dispatch_handle, pFragmentShadingRateCount, pFragmentShadingRates);
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
#ifdef NEEDS_UNWRAPPING_VkPhysicalDeviceFragmentShadingRateKHR
#warning TODO: Repack struct+array+out GetPhysicalDeviceFragmentShadingRatesKHR EntrypointParam(type='VkPhysicalDeviceFragmentShadingRateKHR', name='pFragmentShadingRates', decl='VkPhysicalDeviceFragmentShadingRateKHR* pFragmentShadingRates', len='pFragmentShadingRateCount', elem=<Element 'param' at 0x7368899ede90>, is_const=False, num_pointers=1)
#endif
    return result;
}
                                                                                        
static VKAPI_ATTR VkResult VKAPI_CALL
wrapper_tramp_GetPhysicalDeviceVideoCapabilitiesKHR(
    VkPhysicalDevice physicalDevice,
    const VkVideoProfileInfoKHR* pVideoProfile,
    VkVideoCapabilitiesKHR* pCapabilities)
{
    VK_FROM_HANDLE(wrapper_physical_device, base, physicalDevice);
const VkVideoProfileInfoKHR* pVideoProfile__ = pVideoProfile;
#ifdef NEEDS_UNWRAPPING_VkVideoProfileInfoKHR
    VkVideoProfileInfoKHR _w_pVideoProfile = { 0 };
    pVideoProfile__ = &_w_pVideoProfile;
    unwrap_VkVideoProfileInfoKHR(NULL, (VkVideoProfileInfoKHR *) pVideoProfile__, pVideoProfile);
#endif
    VkResult result = base->dispatch_table.GetPhysicalDeviceVideoCapabilitiesKHR(base->dispatch_handle, pVideoProfile__, pCapabilities);
#ifdef NEEDS_UNWRAPPING_VkVideoCapabilitiesKHR
#warning TODO: Repack struct+ptr+out GetPhysicalDeviceVideoCapabilitiesKHR EntrypointParam(type='VkVideoCapabilitiesKHR', name='pCapabilities', decl='VkVideoCapabilitiesKHR* pCapabilities', len=None, elem=<Element 'param' at 0x7368899ffb50>, is_const=False, num_pointers=1)
#endif
    return result;
}

static VKAPI_ATTR VkResult VKAPI_CALL
wrapper_tramp_GetPhysicalDeviceVideoFormatPropertiesKHR(
    VkPhysicalDevice physicalDevice,
    const VkPhysicalDeviceVideoFormatInfoKHR* pVideoFormatInfo,
    uint32_t* pVideoFormatPropertyCount,
    VkVideoFormatPropertiesKHR* pVideoFormatProperties)
{
    VK_FROM_HANDLE(wrapper_physical_device, base, physicalDevice);
const VkPhysicalDeviceVideoFormatInfoKHR* pVideoFormatInfo__ = pVideoFormatInfo;
#ifdef NEEDS_UNWRAPPING_VkPhysicalDeviceVideoFormatInfoKHR
    VkPhysicalDeviceVideoFormatInfoKHR _w_pVideoFormatInfo = { 0 };
    pVideoFormatInfo__ = &_w_pVideoFormatInfo;
    unwrap_VkPhysicalDeviceVideoFormatInfoKHR(NULL, (VkPhysicalDeviceVideoFormatInfoKHR *) pVideoFormatInfo__, pVideoFormatInfo);
#endif
    VkResult result = base->dispatch_table.GetPhysicalDeviceVideoFormatPropertiesKHR(base->dispatch_handle, pVideoFormatInfo__, pVideoFormatPropertyCount, pVideoFormatProperties);
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
#ifdef NEEDS_UNWRAPPING_VkVideoFormatPropertiesKHR
#warning TODO: Repack struct+array+out GetPhysicalDeviceVideoFormatPropertiesKHR EntrypointParam(type='VkVideoFormatPropertiesKHR', name='pVideoFormatProperties', decl='VkVideoFormatPropertiesKHR* pVideoFormatProperties', len='pVideoFormatPropertyCount', elem=<Element 'param' at 0x736889a0c1d0>, is_const=False, num_pointers=1)
#endif
    return result;
}

static VKAPI_ATTR VkResult VKAPI_CALL
wrapper_tramp_GetPhysicalDeviceVideoEncodeQualityLevelPropertiesKHR(
    VkPhysicalDevice physicalDevice,
    const VkPhysicalDeviceVideoEncodeQualityLevelInfoKHR* pQualityLevelInfo,
    VkVideoEncodeQualityLevelPropertiesKHR* pQualityLevelProperties)
{
    VK_FROM_HANDLE(wrapper_physical_device, base, physicalDevice);
const VkPhysicalDeviceVideoEncodeQualityLevelInfoKHR* pQualityLevelInfo__ = pQualityLevelInfo;
#ifdef NEEDS_UNWRAPPING_VkPhysicalDeviceVideoEncodeQualityLevelInfoKHR
    VkPhysicalDeviceVideoEncodeQualityLevelInfoKHR _w_pQualityLevelInfo = { 0 };
    pQualityLevelInfo__ = &_w_pQualityLevelInfo;
    unwrap_VkPhysicalDeviceVideoEncodeQualityLevelInfoKHR(NULL, (VkPhysicalDeviceVideoEncodeQualityLevelInfoKHR *) pQualityLevelInfo__, pQualityLevelInfo);
#endif
    VkResult result = base->dispatch_table.GetPhysicalDeviceVideoEncodeQualityLevelPropertiesKHR(base->dispatch_handle, pQualityLevelInfo__, pQualityLevelProperties);
#ifdef NEEDS_UNWRAPPING_VkVideoEncodeQualityLevelPropertiesKHR
#warning TODO: Repack struct+ptr+out GetPhysicalDeviceVideoEncodeQualityLevelPropertiesKHR EntrypointParam(type='VkVideoEncodeQualityLevelPropertiesKHR', name='pQualityLevelProperties', decl='VkVideoEncodeQualityLevelPropertiesKHR* pQualityLevelProperties', len=None, elem=<Element 'param' at 0x736889a0c630>, is_const=False, num_pointers=1)
#endif
    return result;
}
                                                                                                                                
static VKAPI_ATTR VkResult VKAPI_CALL
wrapper_tramp_AcquireDrmDisplayEXT(
    VkPhysicalDevice physicalDevice,
    int32_t drmFd,
    VkDisplayKHR display)
{
    VK_FROM_HANDLE(wrapper_physical_device, base, physicalDevice);
int32_t drmFd__ = drmFd;
#ifdef NEEDS_UNWRAPPING_int32_t
#endif
VkDisplayKHR display__ = display;
#ifdef NEEDS_UNWRAPPING_VkDisplayKHR
#endif
    VkResult result = base->dispatch_table.AcquireDrmDisplayEXT(base->dispatch_handle, drmFd__, display__);

    return result;
}

static VKAPI_ATTR VkResult VKAPI_CALL
wrapper_tramp_GetDrmDisplayEXT(
    VkPhysicalDevice physicalDevice,
    int32_t drmFd,
    uint32_t connectorId,
    VkDisplayKHR* display)
{
    VK_FROM_HANDLE(wrapper_physical_device, base, physicalDevice);
int32_t drmFd__ = drmFd;
#ifdef NEEDS_UNWRAPPING_int32_t
#endif
uint32_t connectorId__ = connectorId;
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
    VkResult result = base->dispatch_table.GetDrmDisplayEXT(base->dispatch_handle, drmFd__, connectorId__, display);
#ifdef NEEDS_UNWRAPPING_VkDisplayKHR
#endif
    return result;
}
                                                                                                                                        
static VKAPI_ATTR VkResult VKAPI_CALL
wrapper_tramp_GetPhysicalDeviceOpticalFlowImageFormatsNV(
    VkPhysicalDevice physicalDevice,
    const VkOpticalFlowImageFormatInfoNV* pOpticalFlowImageFormatInfo,
    uint32_t* pFormatCount,
    VkOpticalFlowImageFormatPropertiesNV* pImageFormatProperties)
{
    VK_FROM_HANDLE(wrapper_physical_device, base, physicalDevice);
const VkOpticalFlowImageFormatInfoNV* pOpticalFlowImageFormatInfo__ = pOpticalFlowImageFormatInfo;
#ifdef NEEDS_UNWRAPPING_VkOpticalFlowImageFormatInfoNV
    VkOpticalFlowImageFormatInfoNV _w_pOpticalFlowImageFormatInfo = { 0 };
    pOpticalFlowImageFormatInfo__ = &_w_pOpticalFlowImageFormatInfo;
    unwrap_VkOpticalFlowImageFormatInfoNV(NULL, (VkOpticalFlowImageFormatInfoNV *) pOpticalFlowImageFormatInfo__, pOpticalFlowImageFormatInfo);
#endif
    VkResult result = base->dispatch_table.GetPhysicalDeviceOpticalFlowImageFormatsNV(base->dispatch_handle, pOpticalFlowImageFormatInfo__, pFormatCount, pImageFormatProperties);
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
#ifdef NEEDS_UNWRAPPING_VkOpticalFlowImageFormatPropertiesNV
#warning TODO: Repack struct+array+out GetPhysicalDeviceOpticalFlowImageFormatsNV EntrypointParam(type='VkOpticalFlowImageFormatPropertiesNV', name='pImageFormatProperties', decl='VkOpticalFlowImageFormatPropertiesNV* pImageFormatProperties', len='pFormatCount', elem=<Element 'param' at 0x736889851e90>, is_const=False, num_pointers=1)
#endif
    return result;
}
                                                            
static VKAPI_ATTR VkResult VKAPI_CALL
wrapper_tramp_GetPhysicalDeviceCooperativeMatrixPropertiesKHR(
    VkPhysicalDevice physicalDevice,
    uint32_t* pPropertyCount,
    VkCooperativeMatrixPropertiesKHR* pProperties)
{
    VK_FROM_HANDLE(wrapper_physical_device, base, physicalDevice);
    VkResult result = base->dispatch_table.GetPhysicalDeviceCooperativeMatrixPropertiesKHR(base->dispatch_handle, pPropertyCount, pProperties);
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
#ifdef NEEDS_UNWRAPPING_VkCooperativeMatrixPropertiesKHR
#warning TODO: Repack struct+array+out GetPhysicalDeviceCooperativeMatrixPropertiesKHR EntrypointParam(type='VkCooperativeMatrixPropertiesKHR', name='pProperties', decl='VkCooperativeMatrixPropertiesKHR* pProperties', len='pPropertyCount', elem=<Element 'param' at 0x73688985ea20>, is_const=False, num_pointers=1)
#endif
    return result;
}
                                                    
struct vk_physical_device_entrypoint_table wrapper_physical_device_trampolines = {
                        .GetPhysicalDeviceProperties = wrapper_tramp_GetPhysicalDeviceProperties,
    .GetPhysicalDeviceQueueFamilyProperties = wrapper_tramp_GetPhysicalDeviceQueueFamilyProperties,
    .GetPhysicalDeviceMemoryProperties = wrapper_tramp_GetPhysicalDeviceMemoryProperties,
    .GetPhysicalDeviceFeatures = wrapper_tramp_GetPhysicalDeviceFeatures,
    .GetPhysicalDeviceFormatProperties = wrapper_tramp_GetPhysicalDeviceFormatProperties,
    .GetPhysicalDeviceImageFormatProperties = wrapper_tramp_GetPhysicalDeviceImageFormatProperties,
    .CreateDevice = wrapper_tramp_CreateDevice,
                    .EnumerateDeviceLayerProperties = wrapper_tramp_EnumerateDeviceLayerProperties,
    .EnumerateDeviceExtensionProperties = wrapper_tramp_EnumerateDeviceExtensionProperties,
                                                                    .GetPhysicalDeviceSparseImageFormatProperties = wrapper_tramp_GetPhysicalDeviceSparseImageFormatProperties,
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                .GetPhysicalDeviceDisplayPropertiesKHR = wrapper_tramp_GetPhysicalDeviceDisplayPropertiesKHR,
    .GetPhysicalDeviceDisplayPlanePropertiesKHR = wrapper_tramp_GetPhysicalDeviceDisplayPlanePropertiesKHR,
    .GetDisplayPlaneSupportedDisplaysKHR = wrapper_tramp_GetDisplayPlaneSupportedDisplaysKHR,
    .GetDisplayModePropertiesKHR = wrapper_tramp_GetDisplayModePropertiesKHR,
    .CreateDisplayModeKHR = wrapper_tramp_CreateDisplayModeKHR,
    .GetDisplayPlaneCapabilitiesKHR = wrapper_tramp_GetDisplayPlaneCapabilitiesKHR,
                .GetPhysicalDeviceSurfaceSupportKHR = wrapper_tramp_GetPhysicalDeviceSurfaceSupportKHR,
    .GetPhysicalDeviceSurfaceCapabilitiesKHR = wrapper_tramp_GetPhysicalDeviceSurfaceCapabilitiesKHR,
    .GetPhysicalDeviceSurfaceFormatsKHR = wrapper_tramp_GetPhysicalDeviceSurfaceFormatsKHR,
    .GetPhysicalDeviceSurfacePresentModesKHR = wrapper_tramp_GetPhysicalDeviceSurfacePresentModesKHR,
                            #ifdef VK_USE_PLATFORM_WAYLAND_KHR
    .GetPhysicalDeviceWaylandPresentationSupportKHR = wrapper_tramp_GetPhysicalDeviceWaylandPresentationSupportKHR,
#endif
    #ifdef VK_USE_PLATFORM_WIN32_KHR
    .GetPhysicalDeviceWin32PresentationSupportKHR = wrapper_tramp_GetPhysicalDeviceWin32PresentationSupportKHR,
#endif
    #ifdef VK_USE_PLATFORM_XLIB_KHR
    .GetPhysicalDeviceXlibPresentationSupportKHR = wrapper_tramp_GetPhysicalDeviceXlibPresentationSupportKHR,
#endif
    #ifdef VK_USE_PLATFORM_XCB_KHR
    .GetPhysicalDeviceXcbPresentationSupportKHR = wrapper_tramp_GetPhysicalDeviceXcbPresentationSupportKHR,
#endif
    #ifdef VK_USE_PLATFORM_DIRECTFB_EXT
    .GetPhysicalDeviceDirectFBPresentationSupportEXT = wrapper_tramp_GetPhysicalDeviceDirectFBPresentationSupportEXT,
#endif
            #ifdef VK_USE_PLATFORM_SCREEN_QNX
    .GetPhysicalDeviceScreenPresentationSupportQNX = wrapper_tramp_GetPhysicalDeviceScreenPresentationSupportQNX,
#endif
                                    .GetPhysicalDeviceExternalImageFormatPropertiesNV = wrapper_tramp_GetPhysicalDeviceExternalImageFormatPropertiesNV,
                                .GetPhysicalDeviceFeatures2 = wrapper_tramp_GetPhysicalDeviceFeatures2,
        .GetPhysicalDeviceProperties2 = wrapper_tramp_GetPhysicalDeviceProperties2,
        .GetPhysicalDeviceFormatProperties2 = wrapper_tramp_GetPhysicalDeviceFormatProperties2,
        .GetPhysicalDeviceImageFormatProperties2 = wrapper_tramp_GetPhysicalDeviceImageFormatProperties2,
        .GetPhysicalDeviceQueueFamilyProperties2 = wrapper_tramp_GetPhysicalDeviceQueueFamilyProperties2,
        .GetPhysicalDeviceMemoryProperties2 = wrapper_tramp_GetPhysicalDeviceMemoryProperties2,
        .GetPhysicalDeviceSparseImageFormatProperties2 = wrapper_tramp_GetPhysicalDeviceSparseImageFormatProperties2,
                    .GetPhysicalDeviceExternalBufferProperties = wrapper_tramp_GetPhysicalDeviceExternalBufferProperties,
                                    .GetPhysicalDeviceExternalSemaphoreProperties = wrapper_tramp_GetPhysicalDeviceExternalSemaphoreProperties,
                                .GetPhysicalDeviceExternalFenceProperties = wrapper_tramp_GetPhysicalDeviceExternalFenceProperties,
                        .ReleaseDisplayEXT = wrapper_tramp_ReleaseDisplayEXT,
#ifdef VK_USE_PLATFORM_XLIB_XRANDR_EXT
    .AcquireXlibDisplayEXT = wrapper_tramp_AcquireXlibDisplayEXT,
#endif
#ifdef VK_USE_PLATFORM_XLIB_XRANDR_EXT
    .GetRandROutputDisplayEXT = wrapper_tramp_GetRandROutputDisplayEXT,
#endif
#ifdef VK_USE_PLATFORM_WIN32_KHR
    .AcquireWinrtDisplayNV = wrapper_tramp_AcquireWinrtDisplayNV,
#endif
#ifdef VK_USE_PLATFORM_WIN32_KHR
    .GetWinrtDisplayNV = wrapper_tramp_GetWinrtDisplayNV,
#endif
                    .GetPhysicalDeviceSurfaceCapabilities2EXT = wrapper_tramp_GetPhysicalDeviceSurfaceCapabilities2EXT,
                                                                .GetPhysicalDevicePresentRectanglesKHR = wrapper_tramp_GetPhysicalDevicePresentRectanglesKHR,
                                                                                .GetPhysicalDeviceMultisamplePropertiesEXT = wrapper_tramp_GetPhysicalDeviceMultisamplePropertiesEXT,
    .GetPhysicalDeviceSurfaceCapabilities2KHR = wrapper_tramp_GetPhysicalDeviceSurfaceCapabilities2KHR,
    .GetPhysicalDeviceSurfaceFormats2KHR = wrapper_tramp_GetPhysicalDeviceSurfaceFormats2KHR,
    .GetPhysicalDeviceDisplayProperties2KHR = wrapper_tramp_GetPhysicalDeviceDisplayProperties2KHR,
    .GetPhysicalDeviceDisplayPlaneProperties2KHR = wrapper_tramp_GetPhysicalDeviceDisplayPlaneProperties2KHR,
    .GetDisplayModeProperties2KHR = wrapper_tramp_GetDisplayModeProperties2KHR,
    .GetDisplayPlaneCapabilities2KHR = wrapper_tramp_GetDisplayPlaneCapabilities2KHR,
                                                                                                                        .GetPhysicalDeviceCalibrateableTimeDomainsKHR = wrapper_tramp_GetPhysicalDeviceCalibrateableTimeDomainsKHR,
                                                                                                                                                                                                                                                                                                                                                .GetPhysicalDeviceCooperativeMatrixPropertiesNV = wrapper_tramp_GetPhysicalDeviceCooperativeMatrixPropertiesNV,
                            #ifdef VK_USE_PLATFORM_WIN32_KHR
    .GetPhysicalDeviceSurfacePresentModes2EXT = wrapper_tramp_GetPhysicalDeviceSurfacePresentModes2EXT,
#endif
                .EnumeratePhysicalDeviceQueueFamilyPerformanceQueryCountersKHR = wrapper_tramp_EnumeratePhysicalDeviceQueueFamilyPerformanceQueryCountersKHR,
    .GetPhysicalDeviceQueueFamilyPerformanceQueryPassesKHR = wrapper_tramp_GetPhysicalDeviceQueueFamilyPerformanceQueryPassesKHR,
                                        .GetPhysicalDeviceSupportedFramebufferMixedSamplesCombinationsNV = wrapper_tramp_GetPhysicalDeviceSupportedFramebufferMixedSamplesCombinationsNV,
                                                                    .GetPhysicalDeviceToolProperties = wrapper_tramp_GetPhysicalDeviceToolProperties,
                                                                                                                                                                                                                                                                                                                                                                                                            .GetPhysicalDeviceFragmentShadingRatesKHR = wrapper_tramp_GetPhysicalDeviceFragmentShadingRatesKHR,
                                                                                            .GetPhysicalDeviceVideoCapabilitiesKHR = wrapper_tramp_GetPhysicalDeviceVideoCapabilitiesKHR,
    .GetPhysicalDeviceVideoFormatPropertiesKHR = wrapper_tramp_GetPhysicalDeviceVideoFormatPropertiesKHR,
    .GetPhysicalDeviceVideoEncodeQualityLevelPropertiesKHR = wrapper_tramp_GetPhysicalDeviceVideoEncodeQualityLevelPropertiesKHR,
                                                                                                                                    .AcquireDrmDisplayEXT = wrapper_tramp_AcquireDrmDisplayEXT,
    .GetDrmDisplayEXT = wrapper_tramp_GetDrmDisplayEXT,
                                                                                                                                            .GetPhysicalDeviceOpticalFlowImageFormatsNV = wrapper_tramp_GetPhysicalDeviceOpticalFlowImageFormatsNV,
                                                                .GetPhysicalDeviceCooperativeMatrixPropertiesKHR = wrapper_tramp_GetPhysicalDeviceCooperativeMatrixPropertiesKHR,
                                                    };

            
static VKAPI_ATTR PFN_vkVoidFunction VKAPI_CALL
wrapper_tramp_GetDeviceProcAddr(
    VkDevice device,
    const char* pName)
{
    VK_FROM_HANDLE(wrapper_device, base, device);
const char* pName__ = pName;
#ifdef NEEDS_UNWRAPPING_char
#endif
    PFN_vkVoidFunction result = base->dispatch_table.GetDeviceProcAddr(base->dispatch_handle, pName__);

    return result;
}
                                
static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_DestroyDevice(
    VkDevice device,
    const VkAllocationCallbacks* pAllocator)
{
    VK_FROM_HANDLE(wrapper_device, base, device);
const VkAllocationCallbacks* pAllocator__ = pAllocator;
#ifdef NEEDS_UNWRAPPING_VkAllocationCallbacks
    VkAllocationCallbacks _w_pAllocator = { 0 };
    pAllocator__ = &_w_pAllocator;
    unwrap_VkAllocationCallbacks(base, (VkAllocationCallbacks *) pAllocator__, pAllocator);
#endif
    base->dispatch_table.DestroyDevice(base->dispatch_handle, pAllocator__);

    return ;
}
                    
static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_GetDeviceQueue(
    VkDevice device,
    uint32_t queueFamilyIndex,
    uint32_t queueIndex,
    VkQueue* pQueue)
{
    VK_FROM_HANDLE(wrapper_device, base, device);
    base->dispatch_table.GetDeviceQueue(base->dispatch_handle, queueFamilyIndex, queueIndex, pQueue);

    return ;
}

static VKAPI_ATTR VkResult VKAPI_CALL
wrapper_tramp_QueueSubmit(
    VkQueue queue,
    uint32_t submitCount,
    const VkSubmitInfo* pSubmits,
    VkFence fence)
{
    VK_FROM_HANDLE(wrapper_queue, base, queue);
uint32_t submitCount__ = submitCount;
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
const VkSubmitInfo* pSubmits__ = pSubmits;
#ifdef NEEDS_UNWRAPPING_VkSubmitInfo
    pSubmits__ = alloca(submitCount * sizeof(VkSubmitInfo));
    for (int i = 0; i < submitCount; i++)
        unwrap_VkSubmitInfo(base->device, (VkSubmitInfo *) &pSubmits__[i], &pSubmits[i]);
#endif
VkFence fence__ = fence;
#ifdef NEEDS_UNWRAPPING_VkFence
#endif
    VkResult result = base->device->dispatch_table.QueueSubmit(base->dispatch_handle, submitCount__, pSubmits__, fence__);

    return result;
}

static VKAPI_ATTR VkResult VKAPI_CALL
wrapper_tramp_QueueWaitIdle(
    VkQueue queue)
{
    VK_FROM_HANDLE(wrapper_queue, base, queue);
    VkResult result = base->device->dispatch_table.QueueWaitIdle(base->dispatch_handle);

    return result;
}

static VKAPI_ATTR VkResult VKAPI_CALL
wrapper_tramp_DeviceWaitIdle(
    VkDevice device)
{
    VK_FROM_HANDLE(wrapper_device, base, device);
    VkResult result = base->dispatch_table.DeviceWaitIdle(base->dispatch_handle);

    return result;
}

static VKAPI_ATTR VkResult VKAPI_CALL
wrapper_tramp_AllocateMemory(
    VkDevice device,
    const VkMemoryAllocateInfo* pAllocateInfo,
    const VkAllocationCallbacks* pAllocator,
    VkDeviceMemory* pMemory)
{
    VK_FROM_HANDLE(wrapper_device, base, device);
const VkMemoryAllocateInfo* pAllocateInfo__ = pAllocateInfo;
#ifdef NEEDS_UNWRAPPING_VkMemoryAllocateInfo
    VkMemoryAllocateInfo _w_pAllocateInfo = { 0 };
    pAllocateInfo__ = &_w_pAllocateInfo;
    unwrap_VkMemoryAllocateInfo(base, (VkMemoryAllocateInfo *) pAllocateInfo__, pAllocateInfo);
#endif
const VkAllocationCallbacks* pAllocator__ = pAllocator;
#ifdef NEEDS_UNWRAPPING_VkAllocationCallbacks
    VkAllocationCallbacks _w_pAllocator = { 0 };
    pAllocator__ = &_w_pAllocator;
    unwrap_VkAllocationCallbacks(base, (VkAllocationCallbacks *) pAllocator__, pAllocator);
#endif
    VkResult result = base->dispatch_table.AllocateMemory(base->dispatch_handle, pAllocateInfo__, pAllocator__, pMemory);
#ifdef NEEDS_UNWRAPPING_VkDeviceMemory
#endif
    return result;
}

static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_FreeMemory(
    VkDevice device,
    VkDeviceMemory memory,
    const VkAllocationCallbacks* pAllocator)
{
    VK_FROM_HANDLE(wrapper_device, base, device);
VkDeviceMemory memory__ = memory;
#ifdef NEEDS_UNWRAPPING_VkDeviceMemory
#endif
const VkAllocationCallbacks* pAllocator__ = pAllocator;
#ifdef NEEDS_UNWRAPPING_VkAllocationCallbacks
    VkAllocationCallbacks _w_pAllocator = { 0 };
    pAllocator__ = &_w_pAllocator;
    unwrap_VkAllocationCallbacks(base, (VkAllocationCallbacks *) pAllocator__, pAllocator);
#endif
    base->dispatch_table.FreeMemory(base->dispatch_handle, memory__, pAllocator__);

    return ;
}

static VKAPI_ATTR VkResult VKAPI_CALL
wrapper_tramp_MapMemory(
    VkDevice device,
    VkDeviceMemory memory,
    VkDeviceSize offset,
    VkDeviceSize size,
    VkMemoryMapFlags flags,
    void** ppData)
{
    VK_FROM_HANDLE(wrapper_device, base, device);
VkDeviceMemory memory__ = memory;
#ifdef NEEDS_UNWRAPPING_VkDeviceMemory
#endif
VkDeviceSize offset__ = offset;
#ifdef NEEDS_UNWRAPPING_VkDeviceSize
#endif
VkDeviceSize size__ = size;
#ifdef NEEDS_UNWRAPPING_VkDeviceSize
#endif
VkMemoryMapFlags flags__ = flags;
#ifdef NEEDS_UNWRAPPING_VkMemoryMapFlags
#endif
    VkResult result = base->dispatch_table.MapMemory(base->dispatch_handle, memory__, offset__, size__, flags__, ppData);
#ifdef NEEDS_UNWRAPPING_void
#endif
    return result;
}

static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_UnmapMemory(
    VkDevice device,
    VkDeviceMemory memory)
{
    VK_FROM_HANDLE(wrapper_device, base, device);
VkDeviceMemory memory__ = memory;
#ifdef NEEDS_UNWRAPPING_VkDeviceMemory
#endif
    base->dispatch_table.UnmapMemory(base->dispatch_handle, memory__);

    return ;
}

static VKAPI_ATTR VkResult VKAPI_CALL
wrapper_tramp_FlushMappedMemoryRanges(
    VkDevice device,
    uint32_t memoryRangeCount,
    const VkMappedMemoryRange* pMemoryRanges)
{
    VK_FROM_HANDLE(wrapper_device, base, device);
uint32_t memoryRangeCount__ = memoryRangeCount;
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
const VkMappedMemoryRange* pMemoryRanges__ = pMemoryRanges;
#ifdef NEEDS_UNWRAPPING_VkMappedMemoryRange
    pMemoryRanges__ = alloca(memoryRangeCount * sizeof(VkMappedMemoryRange));
    for (int i = 0; i < memoryRangeCount; i++)
        unwrap_VkMappedMemoryRange(base, (VkMappedMemoryRange *) &pMemoryRanges__[i], &pMemoryRanges[i]);
#endif
    VkResult result = base->dispatch_table.FlushMappedMemoryRanges(base->dispatch_handle, memoryRangeCount__, pMemoryRanges__);

    return result;
}

static VKAPI_ATTR VkResult VKAPI_CALL
wrapper_tramp_InvalidateMappedMemoryRanges(
    VkDevice device,
    uint32_t memoryRangeCount,
    const VkMappedMemoryRange* pMemoryRanges)
{
    VK_FROM_HANDLE(wrapper_device, base, device);
uint32_t memoryRangeCount__ = memoryRangeCount;
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
const VkMappedMemoryRange* pMemoryRanges__ = pMemoryRanges;
#ifdef NEEDS_UNWRAPPING_VkMappedMemoryRange
    pMemoryRanges__ = alloca(memoryRangeCount * sizeof(VkMappedMemoryRange));
    for (int i = 0; i < memoryRangeCount; i++)
        unwrap_VkMappedMemoryRange(base, (VkMappedMemoryRange *) &pMemoryRanges__[i], &pMemoryRanges[i]);
#endif
    VkResult result = base->dispatch_table.InvalidateMappedMemoryRanges(base->dispatch_handle, memoryRangeCount__, pMemoryRanges__);

    return result;
}

static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_GetDeviceMemoryCommitment(
    VkDevice device,
    VkDeviceMemory memory,
    VkDeviceSize* pCommittedMemoryInBytes)
{
    VK_FROM_HANDLE(wrapper_device, base, device);
VkDeviceMemory memory__ = memory;
#ifdef NEEDS_UNWRAPPING_VkDeviceMemory
#endif
    base->dispatch_table.GetDeviceMemoryCommitment(base->dispatch_handle, memory__, pCommittedMemoryInBytes);
#ifdef NEEDS_UNWRAPPING_VkDeviceSize
#endif
    return ;
}

static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_GetBufferMemoryRequirements(
    VkDevice device,
    VkBuffer buffer,
    VkMemoryRequirements* pMemoryRequirements)
{
    VK_FROM_HANDLE(wrapper_device, base, device);
VkBuffer buffer__ = buffer;
#ifdef NEEDS_UNWRAPPING_VkBuffer
#endif
    base->dispatch_table.GetBufferMemoryRequirements(base->dispatch_handle, buffer__, pMemoryRequirements);
#ifdef NEEDS_UNWRAPPING_VkMemoryRequirements
#warning TODO: Repack struct+ptr+out GetBufferMemoryRequirements EntrypointParam(type='VkMemoryRequirements', name='pMemoryRequirements', decl='VkMemoryRequirements* pMemoryRequirements', len=None, elem=<Element 'param' at 0x736889c295d0>, is_const=False, num_pointers=1)
#endif
    return ;
}

static VKAPI_ATTR VkResult VKAPI_CALL
wrapper_tramp_BindBufferMemory(
    VkDevice device,
    VkBuffer buffer,
    VkDeviceMemory memory,
    VkDeviceSize memoryOffset)
{
    VK_FROM_HANDLE(wrapper_device, base, device);
VkBuffer buffer__ = buffer;
#ifdef NEEDS_UNWRAPPING_VkBuffer
#endif
VkDeviceMemory memory__ = memory;
#ifdef NEEDS_UNWRAPPING_VkDeviceMemory
#endif
VkDeviceSize memoryOffset__ = memoryOffset;
#ifdef NEEDS_UNWRAPPING_VkDeviceSize
#endif
    VkResult result = base->dispatch_table.BindBufferMemory(base->dispatch_handle, buffer__, memory__, memoryOffset__);

    return result;
}

static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_GetImageMemoryRequirements(
    VkDevice device,
    VkImage image,
    VkMemoryRequirements* pMemoryRequirements)
{
    VK_FROM_HANDLE(wrapper_device, base, device);
VkImage image__ = image;
#ifdef NEEDS_UNWRAPPING_VkImage
    VK_FROM_HANDLE(wrapper_image, w_image, image);
    image__ = w_image->dispatch_handle;
#endif
    base->dispatch_table.GetImageMemoryRequirements(base->dispatch_handle, image__, pMemoryRequirements);
#ifdef NEEDS_UNWRAPPING_VkMemoryRequirements
#warning TODO: Repack struct+ptr+out GetImageMemoryRequirements EntrypointParam(type='VkMemoryRequirements', name='pMemoryRequirements', decl='VkMemoryRequirements* pMemoryRequirements', len=None, elem=<Element 'param' at 0x736889c29f30>, is_const=False, num_pointers=1)
#endif
    return ;
}

static VKAPI_ATTR VkResult VKAPI_CALL
wrapper_tramp_BindImageMemory(
    VkDevice device,
    VkImage image,
    VkDeviceMemory memory,
    VkDeviceSize memoryOffset)
{
    VK_FROM_HANDLE(wrapper_device, base, device);
VkImage image__ = image;
#ifdef NEEDS_UNWRAPPING_VkImage
    VK_FROM_HANDLE(wrapper_image, w_image, image);
    image__ = w_image->dispatch_handle;
#endif
VkDeviceMemory memory__ = memory;
#ifdef NEEDS_UNWRAPPING_VkDeviceMemory
#endif
VkDeviceSize memoryOffset__ = memoryOffset;
#ifdef NEEDS_UNWRAPPING_VkDeviceSize
#endif
    VkResult result = base->dispatch_table.BindImageMemory(base->dispatch_handle, image__, memory__, memoryOffset__);

    return result;
}

static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_GetImageSparseMemoryRequirements(
    VkDevice device,
    VkImage image,
    uint32_t* pSparseMemoryRequirementCount,
    VkSparseImageMemoryRequirements* pSparseMemoryRequirements)
{
    VK_FROM_HANDLE(wrapper_device, base, device);
VkImage image__ = image;
#ifdef NEEDS_UNWRAPPING_VkImage
    VK_FROM_HANDLE(wrapper_image, w_image, image);
    image__ = w_image->dispatch_handle;
#endif
    base->dispatch_table.GetImageSparseMemoryRequirements(base->dispatch_handle, image__, pSparseMemoryRequirementCount, pSparseMemoryRequirements);
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
#ifdef NEEDS_UNWRAPPING_VkSparseImageMemoryRequirements
#warning TODO: Repack struct+array+out GetImageSparseMemoryRequirements EntrypointParam(type='VkSparseImageMemoryRequirements', name='pSparseMemoryRequirements', decl='VkSparseImageMemoryRequirements* pSparseMemoryRequirements', len='pSparseMemoryRequirementCount', elem=<Element 'param' at 0x736889c2aa20>, is_const=False, num_pointers=1)
#endif
    return ;
}
    
static VKAPI_ATTR VkResult VKAPI_CALL
wrapper_tramp_QueueBindSparse(
    VkQueue queue,
    uint32_t bindInfoCount,
    const VkBindSparseInfo* pBindInfo,
    VkFence fence)
{
    VK_FROM_HANDLE(wrapper_queue, base, queue);
uint32_t bindInfoCount__ = bindInfoCount;
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
const VkBindSparseInfo* pBindInfo__ = pBindInfo;
#ifdef NEEDS_UNWRAPPING_VkBindSparseInfo
    pBindInfo__ = alloca(bindInfoCount * sizeof(VkBindSparseInfo));
    for (int i = 0; i < bindInfoCount; i++)
        unwrap_VkBindSparseInfo(base->device, (VkBindSparseInfo *) &pBindInfo__[i], &pBindInfo[i]);
#endif
VkFence fence__ = fence;
#ifdef NEEDS_UNWRAPPING_VkFence
#endif
    VkResult result = base->device->dispatch_table.QueueBindSparse(base->dispatch_handle, bindInfoCount__, pBindInfo__, fence__);

    return result;
}

static VKAPI_ATTR VkResult VKAPI_CALL
wrapper_tramp_CreateFence(
    VkDevice device,
    const VkFenceCreateInfo* pCreateInfo,
    const VkAllocationCallbacks* pAllocator,
    VkFence* pFence)
{
    VK_FROM_HANDLE(wrapper_device, base, device);
const VkFenceCreateInfo* pCreateInfo__ = pCreateInfo;
#ifdef NEEDS_UNWRAPPING_VkFenceCreateInfo
    VkFenceCreateInfo _w_pCreateInfo = { 0 };
    pCreateInfo__ = &_w_pCreateInfo;
    unwrap_VkFenceCreateInfo(base, (VkFenceCreateInfo *) pCreateInfo__, pCreateInfo);
#endif
const VkAllocationCallbacks* pAllocator__ = pAllocator;
#ifdef NEEDS_UNWRAPPING_VkAllocationCallbacks
    VkAllocationCallbacks _w_pAllocator = { 0 };
    pAllocator__ = &_w_pAllocator;
    unwrap_VkAllocationCallbacks(base, (VkAllocationCallbacks *) pAllocator__, pAllocator);
#endif
    VkResult result = base->dispatch_table.CreateFence(base->dispatch_handle, pCreateInfo__, pAllocator__, pFence);
#ifdef NEEDS_UNWRAPPING_VkFence
#endif
    return result;
}

static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_DestroyFence(
    VkDevice device,
    VkFence fence,
    const VkAllocationCallbacks* pAllocator)
{
    VK_FROM_HANDLE(wrapper_device, base, device);
VkFence fence__ = fence;
#ifdef NEEDS_UNWRAPPING_VkFence
#endif
const VkAllocationCallbacks* pAllocator__ = pAllocator;
#ifdef NEEDS_UNWRAPPING_VkAllocationCallbacks
    VkAllocationCallbacks _w_pAllocator = { 0 };
    pAllocator__ = &_w_pAllocator;
    unwrap_VkAllocationCallbacks(base, (VkAllocationCallbacks *) pAllocator__, pAllocator);
#endif
    base->dispatch_table.DestroyFence(base->dispatch_handle, fence__, pAllocator__);

    return ;
}

static VKAPI_ATTR VkResult VKAPI_CALL
wrapper_tramp_ResetFences(
    VkDevice device,
    uint32_t fenceCount,
    const VkFence* pFences)
{
    VK_FROM_HANDLE(wrapper_device, base, device);
uint32_t fenceCount__ = fenceCount;
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
const VkFence* pFences__ = pFences;
#ifdef NEEDS_UNWRAPPING_VkFence
#endif
    VkResult result = base->dispatch_table.ResetFences(base->dispatch_handle, fenceCount__, pFences__);

    return result;
}

static VKAPI_ATTR VkResult VKAPI_CALL
wrapper_tramp_GetFenceStatus(
    VkDevice device,
    VkFence fence)
{
    VK_FROM_HANDLE(wrapper_device, base, device);
VkFence fence__ = fence;
#ifdef NEEDS_UNWRAPPING_VkFence
#endif
    VkResult result = base->dispatch_table.GetFenceStatus(base->dispatch_handle, fence__);

    return result;
}

static VKAPI_ATTR VkResult VKAPI_CALL
wrapper_tramp_WaitForFences(
    VkDevice device,
    uint32_t fenceCount,
    const VkFence* pFences,
    VkBool32 waitAll,
    uint64_t timeout)
{
    VK_FROM_HANDLE(wrapper_device, base, device);
uint32_t fenceCount__ = fenceCount;
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
const VkFence* pFences__ = pFences;
#ifdef NEEDS_UNWRAPPING_VkFence
#endif
VkBool32 waitAll__ = waitAll;
#ifdef NEEDS_UNWRAPPING_VkBool32
#endif
uint64_t timeout__ = timeout;
#ifdef NEEDS_UNWRAPPING_uint64_t
#endif
    VkResult result = base->dispatch_table.WaitForFences(base->dispatch_handle, fenceCount__, pFences__, waitAll__, timeout__);

    return result;
}

static VKAPI_ATTR VkResult VKAPI_CALL
wrapper_tramp_CreateSemaphore(
    VkDevice device,
    const VkSemaphoreCreateInfo* pCreateInfo,
    const VkAllocationCallbacks* pAllocator,
    VkSemaphore* pSemaphore)
{
    VK_FROM_HANDLE(wrapper_device, base, device);
const VkSemaphoreCreateInfo* pCreateInfo__ = pCreateInfo;
#ifdef NEEDS_UNWRAPPING_VkSemaphoreCreateInfo
    VkSemaphoreCreateInfo _w_pCreateInfo = { 0 };
    pCreateInfo__ = &_w_pCreateInfo;
    unwrap_VkSemaphoreCreateInfo(base, (VkSemaphoreCreateInfo *) pCreateInfo__, pCreateInfo);
#endif
const VkAllocationCallbacks* pAllocator__ = pAllocator;
#ifdef NEEDS_UNWRAPPING_VkAllocationCallbacks
    VkAllocationCallbacks _w_pAllocator = { 0 };
    pAllocator__ = &_w_pAllocator;
    unwrap_VkAllocationCallbacks(base, (VkAllocationCallbacks *) pAllocator__, pAllocator);
#endif
    VkResult result = base->dispatch_table.CreateSemaphore(base->dispatch_handle, pCreateInfo__, pAllocator__, pSemaphore);
#ifdef NEEDS_UNWRAPPING_VkSemaphore
#endif
    return result;
}

static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_DestroySemaphore(
    VkDevice device,
    VkSemaphore semaphore,
    const VkAllocationCallbacks* pAllocator)
{
    VK_FROM_HANDLE(wrapper_device, base, device);
VkSemaphore semaphore__ = semaphore;
#ifdef NEEDS_UNWRAPPING_VkSemaphore
#endif
const VkAllocationCallbacks* pAllocator__ = pAllocator;
#ifdef NEEDS_UNWRAPPING_VkAllocationCallbacks
    VkAllocationCallbacks _w_pAllocator = { 0 };
    pAllocator__ = &_w_pAllocator;
    unwrap_VkAllocationCallbacks(base, (VkAllocationCallbacks *) pAllocator__, pAllocator);
#endif
    base->dispatch_table.DestroySemaphore(base->dispatch_handle, semaphore__, pAllocator__);

    return ;
}

static VKAPI_ATTR VkResult VKAPI_CALL
wrapper_tramp_CreateEvent(
    VkDevice device,
    const VkEventCreateInfo* pCreateInfo,
    const VkAllocationCallbacks* pAllocator,
    VkEvent* pEvent)
{
    VK_FROM_HANDLE(wrapper_device, base, device);
const VkEventCreateInfo* pCreateInfo__ = pCreateInfo;
#ifdef NEEDS_UNWRAPPING_VkEventCreateInfo
    VkEventCreateInfo _w_pCreateInfo = { 0 };
    pCreateInfo__ = &_w_pCreateInfo;
    unwrap_VkEventCreateInfo(base, (VkEventCreateInfo *) pCreateInfo__, pCreateInfo);
#endif
const VkAllocationCallbacks* pAllocator__ = pAllocator;
#ifdef NEEDS_UNWRAPPING_VkAllocationCallbacks
    VkAllocationCallbacks _w_pAllocator = { 0 };
    pAllocator__ = &_w_pAllocator;
    unwrap_VkAllocationCallbacks(base, (VkAllocationCallbacks *) pAllocator__, pAllocator);
#endif
    VkResult result = base->dispatch_table.CreateEvent(base->dispatch_handle, pCreateInfo__, pAllocator__, pEvent);
#ifdef NEEDS_UNWRAPPING_VkEvent
#endif
    return result;
}

static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_DestroyEvent(
    VkDevice device,
    VkEvent event,
    const VkAllocationCallbacks* pAllocator)
{
    VK_FROM_HANDLE(wrapper_device, base, device);
VkEvent event__ = event;
#ifdef NEEDS_UNWRAPPING_VkEvent
#endif
const VkAllocationCallbacks* pAllocator__ = pAllocator;
#ifdef NEEDS_UNWRAPPING_VkAllocationCallbacks
    VkAllocationCallbacks _w_pAllocator = { 0 };
    pAllocator__ = &_w_pAllocator;
    unwrap_VkAllocationCallbacks(base, (VkAllocationCallbacks *) pAllocator__, pAllocator);
#endif
    base->dispatch_table.DestroyEvent(base->dispatch_handle, event__, pAllocator__);

    return ;
}

static VKAPI_ATTR VkResult VKAPI_CALL
wrapper_tramp_GetEventStatus(
    VkDevice device,
    VkEvent event)
{
    VK_FROM_HANDLE(wrapper_device, base, device);
VkEvent event__ = event;
#ifdef NEEDS_UNWRAPPING_VkEvent
#endif
    VkResult result = base->dispatch_table.GetEventStatus(base->dispatch_handle, event__);

    return result;
}

static VKAPI_ATTR VkResult VKAPI_CALL
wrapper_tramp_SetEvent(
    VkDevice device,
    VkEvent event)
{
    VK_FROM_HANDLE(wrapper_device, base, device);
VkEvent event__ = event;
#ifdef NEEDS_UNWRAPPING_VkEvent
#endif
    VkResult result = base->dispatch_table.SetEvent(base->dispatch_handle, event__);

    return result;
}

static VKAPI_ATTR VkResult VKAPI_CALL
wrapper_tramp_ResetEvent(
    VkDevice device,
    VkEvent event)
{
    VK_FROM_HANDLE(wrapper_device, base, device);
VkEvent event__ = event;
#ifdef NEEDS_UNWRAPPING_VkEvent
#endif
    VkResult result = base->dispatch_table.ResetEvent(base->dispatch_handle, event__);

    return result;
}

static VKAPI_ATTR VkResult VKAPI_CALL
wrapper_tramp_CreateQueryPool(
    VkDevice device,
    const VkQueryPoolCreateInfo* pCreateInfo,
    const VkAllocationCallbacks* pAllocator,
    VkQueryPool* pQueryPool)
{
    VK_FROM_HANDLE(wrapper_device, base, device);
const VkQueryPoolCreateInfo* pCreateInfo__ = pCreateInfo;
#ifdef NEEDS_UNWRAPPING_VkQueryPoolCreateInfo
    VkQueryPoolCreateInfo _w_pCreateInfo = { 0 };
    pCreateInfo__ = &_w_pCreateInfo;
    unwrap_VkQueryPoolCreateInfo(base, (VkQueryPoolCreateInfo *) pCreateInfo__, pCreateInfo);
#endif
const VkAllocationCallbacks* pAllocator__ = pAllocator;
#ifdef NEEDS_UNWRAPPING_VkAllocationCallbacks
    VkAllocationCallbacks _w_pAllocator = { 0 };
    pAllocator__ = &_w_pAllocator;
    unwrap_VkAllocationCallbacks(base, (VkAllocationCallbacks *) pAllocator__, pAllocator);
#endif
    VkResult result = base->dispatch_table.CreateQueryPool(base->dispatch_handle, pCreateInfo__, pAllocator__, pQueryPool);
#ifdef NEEDS_UNWRAPPING_VkQueryPool
#endif
    return result;
}

static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_DestroyQueryPool(
    VkDevice device,
    VkQueryPool queryPool,
    const VkAllocationCallbacks* pAllocator)
{
    VK_FROM_HANDLE(wrapper_device, base, device);
VkQueryPool queryPool__ = queryPool;
#ifdef NEEDS_UNWRAPPING_VkQueryPool
#endif
const VkAllocationCallbacks* pAllocator__ = pAllocator;
#ifdef NEEDS_UNWRAPPING_VkAllocationCallbacks
    VkAllocationCallbacks _w_pAllocator = { 0 };
    pAllocator__ = &_w_pAllocator;
    unwrap_VkAllocationCallbacks(base, (VkAllocationCallbacks *) pAllocator__, pAllocator);
#endif
    base->dispatch_table.DestroyQueryPool(base->dispatch_handle, queryPool__, pAllocator__);

    return ;
}

static VKAPI_ATTR VkResult VKAPI_CALL
wrapper_tramp_GetQueryPoolResults(
    VkDevice device,
    VkQueryPool queryPool,
    uint32_t firstQuery,
    uint32_t queryCount,
    size_t dataSize,
    void* pData,
    VkDeviceSize stride,
    VkQueryResultFlags flags)
{
    VK_FROM_HANDLE(wrapper_device, base, device);
VkQueryPool queryPool__ = queryPool;
#ifdef NEEDS_UNWRAPPING_VkQueryPool
#endif
uint32_t firstQuery__ = firstQuery;
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
uint32_t queryCount__ = queryCount;
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
size_t dataSize__ = dataSize;
#ifdef NEEDS_UNWRAPPING_size_t
#endif
VkDeviceSize stride__ = stride;
#ifdef NEEDS_UNWRAPPING_VkDeviceSize
#endif
VkQueryResultFlags flags__ = flags;
#ifdef NEEDS_UNWRAPPING_VkQueryResultFlags
#endif
    VkResult result = base->dispatch_table.GetQueryPoolResults(base->dispatch_handle, queryPool__, firstQuery__, queryCount__, dataSize__, pData, stride__, flags__);
#ifdef NEEDS_UNWRAPPING_void
#endif
    return result;
}

static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_ResetQueryPool(
    VkDevice device,
    VkQueryPool queryPool,
    uint32_t firstQuery,
    uint32_t queryCount)
{
    VK_FROM_HANDLE(wrapper_device, base, device);
VkQueryPool queryPool__ = queryPool;
#ifdef NEEDS_UNWRAPPING_VkQueryPool
#endif
uint32_t firstQuery__ = firstQuery;
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
uint32_t queryCount__ = queryCount;
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
    base->dispatch_table.ResetQueryPool(base->dispatch_handle, queryPool__, firstQuery__, queryCount__);

    return ;
}
    
static VKAPI_ATTR VkResult VKAPI_CALL
wrapper_tramp_CreateBuffer(
    VkDevice device,
    const VkBufferCreateInfo* pCreateInfo,
    const VkAllocationCallbacks* pAllocator,
    VkBuffer* pBuffer)
{
    VK_FROM_HANDLE(wrapper_device, base, device);
const VkBufferCreateInfo* pCreateInfo__ = pCreateInfo;
#ifdef NEEDS_UNWRAPPING_VkBufferCreateInfo
    VkBufferCreateInfo _w_pCreateInfo = { 0 };
    pCreateInfo__ = &_w_pCreateInfo;
    unwrap_VkBufferCreateInfo(base, (VkBufferCreateInfo *) pCreateInfo__, pCreateInfo);
#endif
const VkAllocationCallbacks* pAllocator__ = pAllocator;
#ifdef NEEDS_UNWRAPPING_VkAllocationCallbacks
    VkAllocationCallbacks _w_pAllocator = { 0 };
    pAllocator__ = &_w_pAllocator;
    unwrap_VkAllocationCallbacks(base, (VkAllocationCallbacks *) pAllocator__, pAllocator);
#endif
    VkResult result = base->dispatch_table.CreateBuffer(base->dispatch_handle, pCreateInfo__, pAllocator__, pBuffer);
#ifdef NEEDS_UNWRAPPING_VkBuffer
#endif
    return result;
}

static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_DestroyBuffer(
    VkDevice device,
    VkBuffer buffer,
    const VkAllocationCallbacks* pAllocator)
{
    VK_FROM_HANDLE(wrapper_device, base, device);
VkBuffer buffer__ = buffer;
#ifdef NEEDS_UNWRAPPING_VkBuffer
#endif
const VkAllocationCallbacks* pAllocator__ = pAllocator;
#ifdef NEEDS_UNWRAPPING_VkAllocationCallbacks
    VkAllocationCallbacks _w_pAllocator = { 0 };
    pAllocator__ = &_w_pAllocator;
    unwrap_VkAllocationCallbacks(base, (VkAllocationCallbacks *) pAllocator__, pAllocator);
#endif
    base->dispatch_table.DestroyBuffer(base->dispatch_handle, buffer__, pAllocator__);

    return ;
}

static VKAPI_ATTR VkResult VKAPI_CALL
wrapper_tramp_CreateBufferView(
    VkDevice device,
    const VkBufferViewCreateInfo* pCreateInfo,
    const VkAllocationCallbacks* pAllocator,
    VkBufferView* pView)
{
    VK_FROM_HANDLE(wrapper_device, base, device);
const VkBufferViewCreateInfo* pCreateInfo__ = pCreateInfo;
#ifdef NEEDS_UNWRAPPING_VkBufferViewCreateInfo
    VkBufferViewCreateInfo _w_pCreateInfo = { 0 };
    pCreateInfo__ = &_w_pCreateInfo;
    unwrap_VkBufferViewCreateInfo(base, (VkBufferViewCreateInfo *) pCreateInfo__, pCreateInfo);
#endif
const VkAllocationCallbacks* pAllocator__ = pAllocator;
#ifdef NEEDS_UNWRAPPING_VkAllocationCallbacks
    VkAllocationCallbacks _w_pAllocator = { 0 };
    pAllocator__ = &_w_pAllocator;
    unwrap_VkAllocationCallbacks(base, (VkAllocationCallbacks *) pAllocator__, pAllocator);
#endif
    VkResult result = base->dispatch_table.CreateBufferView(base->dispatch_handle, pCreateInfo__, pAllocator__, pView);
#ifdef NEEDS_UNWRAPPING_VkBufferView
#endif
    return result;
}

static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_DestroyBufferView(
    VkDevice device,
    VkBufferView bufferView,
    const VkAllocationCallbacks* pAllocator)
{
    VK_FROM_HANDLE(wrapper_device, base, device);
VkBufferView bufferView__ = bufferView;
#ifdef NEEDS_UNWRAPPING_VkBufferView
#endif
const VkAllocationCallbacks* pAllocator__ = pAllocator;
#ifdef NEEDS_UNWRAPPING_VkAllocationCallbacks
    VkAllocationCallbacks _w_pAllocator = { 0 };
    pAllocator__ = &_w_pAllocator;
    unwrap_VkAllocationCallbacks(base, (VkAllocationCallbacks *) pAllocator__, pAllocator);
#endif
    base->dispatch_table.DestroyBufferView(base->dispatch_handle, bufferView__, pAllocator__);

    return ;
}

static VKAPI_ATTR VkResult VKAPI_CALL
wrapper_tramp_CreateImage(
    VkDevice device,
    const VkImageCreateInfo* pCreateInfo,
    const VkAllocationCallbacks* pAllocator,
    VkImage* pImage)
{
    VK_FROM_HANDLE(wrapper_device, base, device);
    VkResult result = base->dispatch_table.CreateImage(base->dispatch_handle, pCreateInfo, pAllocator, pImage);

    return result;
}

static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_DestroyImage(
    VkDevice device,
    VkImage image,
    const VkAllocationCallbacks* pAllocator)
{
    VK_FROM_HANDLE(wrapper_device, base, device);
VkImage image__ = image;
#ifdef NEEDS_UNWRAPPING_VkImage
    VK_FROM_HANDLE(wrapper_image, w_image, image);
    image__ = w_image->dispatch_handle;
#endif
const VkAllocationCallbacks* pAllocator__ = pAllocator;
#ifdef NEEDS_UNWRAPPING_VkAllocationCallbacks
    VkAllocationCallbacks _w_pAllocator = { 0 };
    pAllocator__ = &_w_pAllocator;
    unwrap_VkAllocationCallbacks(base, (VkAllocationCallbacks *) pAllocator__, pAllocator);
#endif
    base->dispatch_table.DestroyImage(base->dispatch_handle, image__, pAllocator__);

    return ;
}

static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_GetImageSubresourceLayout(
    VkDevice device,
    VkImage image,
    const VkImageSubresource* pSubresource,
    VkSubresourceLayout* pLayout)
{
    VK_FROM_HANDLE(wrapper_device, base, device);
VkImage image__ = image;
#ifdef NEEDS_UNWRAPPING_VkImage
    VK_FROM_HANDLE(wrapper_image, w_image, image);
    image__ = w_image->dispatch_handle;
#endif
const VkImageSubresource* pSubresource__ = pSubresource;
#ifdef NEEDS_UNWRAPPING_VkImageSubresource
    VkImageSubresource _w_pSubresource = { 0 };
    pSubresource__ = &_w_pSubresource;
    unwrap_VkImageSubresource(base, (VkImageSubresource *) pSubresource__, pSubresource);
#endif
    base->dispatch_table.GetImageSubresourceLayout(base->dispatch_handle, image__, pSubresource__, pLayout);
#ifdef NEEDS_UNWRAPPING_VkSubresourceLayout
#warning TODO: Repack struct+ptr+out GetImageSubresourceLayout EntrypointParam(type='VkSubresourceLayout', name='pLayout', decl='VkSubresourceLayout* pLayout', len=None, elem=<Element 'param' at 0x736889a4a390>, is_const=False, num_pointers=1)
#endif
    return ;
}

static VKAPI_ATTR VkResult VKAPI_CALL
wrapper_tramp_CreateImageView(
    VkDevice device,
    const VkImageViewCreateInfo* pCreateInfo,
    const VkAllocationCallbacks* pAllocator,
    VkImageView* pView)
{
    VK_FROM_HANDLE(wrapper_device, base, device);
const VkImageViewCreateInfo* pCreateInfo__ = pCreateInfo;
#ifdef NEEDS_UNWRAPPING_VkImageViewCreateInfo
    VkImageViewCreateInfo _w_pCreateInfo = { 0 };
    pCreateInfo__ = &_w_pCreateInfo;
    unwrap_VkImageViewCreateInfo(base, (VkImageViewCreateInfo *) pCreateInfo__, pCreateInfo);
#endif
const VkAllocationCallbacks* pAllocator__ = pAllocator;
#ifdef NEEDS_UNWRAPPING_VkAllocationCallbacks
    VkAllocationCallbacks _w_pAllocator = { 0 };
    pAllocator__ = &_w_pAllocator;
    unwrap_VkAllocationCallbacks(base, (VkAllocationCallbacks *) pAllocator__, pAllocator);
#endif
    VkResult result = base->dispatch_table.CreateImageView(base->dispatch_handle, pCreateInfo__, pAllocator__, pView);
#ifdef NEEDS_UNWRAPPING_VkImageView
#endif
    return result;
}

static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_DestroyImageView(
    VkDevice device,
    VkImageView imageView,
    const VkAllocationCallbacks* pAllocator)
{
    VK_FROM_HANDLE(wrapper_device, base, device);
VkImageView imageView__ = imageView;
#ifdef NEEDS_UNWRAPPING_VkImageView
#endif
const VkAllocationCallbacks* pAllocator__ = pAllocator;
#ifdef NEEDS_UNWRAPPING_VkAllocationCallbacks
    VkAllocationCallbacks _w_pAllocator = { 0 };
    pAllocator__ = &_w_pAllocator;
    unwrap_VkAllocationCallbacks(base, (VkAllocationCallbacks *) pAllocator__, pAllocator);
#endif
    base->dispatch_table.DestroyImageView(base->dispatch_handle, imageView__, pAllocator__);

    return ;
}

static VKAPI_ATTR VkResult VKAPI_CALL
wrapper_tramp_CreateShaderModule(
    VkDevice device,
    const VkShaderModuleCreateInfo* pCreateInfo,
    const VkAllocationCallbacks* pAllocator,
    VkShaderModule* pShaderModule)
{
    VK_FROM_HANDLE(wrapper_device, base, device);
const VkShaderModuleCreateInfo* pCreateInfo__ = pCreateInfo;
#ifdef NEEDS_UNWRAPPING_VkShaderModuleCreateInfo
    VkShaderModuleCreateInfo _w_pCreateInfo = { 0 };
    pCreateInfo__ = &_w_pCreateInfo;
    unwrap_VkShaderModuleCreateInfo(base, (VkShaderModuleCreateInfo *) pCreateInfo__, pCreateInfo);
#endif
const VkAllocationCallbacks* pAllocator__ = pAllocator;
#ifdef NEEDS_UNWRAPPING_VkAllocationCallbacks
    VkAllocationCallbacks _w_pAllocator = { 0 };
    pAllocator__ = &_w_pAllocator;
    unwrap_VkAllocationCallbacks(base, (VkAllocationCallbacks *) pAllocator__, pAllocator);
#endif
    VkResult result = base->dispatch_table.CreateShaderModule(base->dispatch_handle, pCreateInfo__, pAllocator__, pShaderModule);
#ifdef NEEDS_UNWRAPPING_VkShaderModule
#endif
    return result;
}

static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_DestroyShaderModule(
    VkDevice device,
    VkShaderModule shaderModule,
    const VkAllocationCallbacks* pAllocator)
{
    VK_FROM_HANDLE(wrapper_device, base, device);
VkShaderModule shaderModule__ = shaderModule;
#ifdef NEEDS_UNWRAPPING_VkShaderModule
#endif
const VkAllocationCallbacks* pAllocator__ = pAllocator;
#ifdef NEEDS_UNWRAPPING_VkAllocationCallbacks
    VkAllocationCallbacks _w_pAllocator = { 0 };
    pAllocator__ = &_w_pAllocator;
    unwrap_VkAllocationCallbacks(base, (VkAllocationCallbacks *) pAllocator__, pAllocator);
#endif
    base->dispatch_table.DestroyShaderModule(base->dispatch_handle, shaderModule__, pAllocator__);

    return ;
}

static VKAPI_ATTR VkResult VKAPI_CALL
wrapper_tramp_CreatePipelineCache(
    VkDevice device,
    const VkPipelineCacheCreateInfo* pCreateInfo,
    const VkAllocationCallbacks* pAllocator,
    VkPipelineCache* pPipelineCache)
{
    VK_FROM_HANDLE(wrapper_device, base, device);
const VkPipelineCacheCreateInfo* pCreateInfo__ = pCreateInfo;
#ifdef NEEDS_UNWRAPPING_VkPipelineCacheCreateInfo
    VkPipelineCacheCreateInfo _w_pCreateInfo = { 0 };
    pCreateInfo__ = &_w_pCreateInfo;
    unwrap_VkPipelineCacheCreateInfo(base, (VkPipelineCacheCreateInfo *) pCreateInfo__, pCreateInfo);
#endif
const VkAllocationCallbacks* pAllocator__ = pAllocator;
#ifdef NEEDS_UNWRAPPING_VkAllocationCallbacks
    VkAllocationCallbacks _w_pAllocator = { 0 };
    pAllocator__ = &_w_pAllocator;
    unwrap_VkAllocationCallbacks(base, (VkAllocationCallbacks *) pAllocator__, pAllocator);
#endif
    VkResult result = base->dispatch_table.CreatePipelineCache(base->dispatch_handle, pCreateInfo__, pAllocator__, pPipelineCache);
#ifdef NEEDS_UNWRAPPING_VkPipelineCache
#endif
    return result;
}

static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_DestroyPipelineCache(
    VkDevice device,
    VkPipelineCache pipelineCache,
    const VkAllocationCallbacks* pAllocator)
{
    VK_FROM_HANDLE(wrapper_device, base, device);
VkPipelineCache pipelineCache__ = pipelineCache;
#ifdef NEEDS_UNWRAPPING_VkPipelineCache
#endif
const VkAllocationCallbacks* pAllocator__ = pAllocator;
#ifdef NEEDS_UNWRAPPING_VkAllocationCallbacks
    VkAllocationCallbacks _w_pAllocator = { 0 };
    pAllocator__ = &_w_pAllocator;
    unwrap_VkAllocationCallbacks(base, (VkAllocationCallbacks *) pAllocator__, pAllocator);
#endif
    base->dispatch_table.DestroyPipelineCache(base->dispatch_handle, pipelineCache__, pAllocator__);

    return ;
}

static VKAPI_ATTR VkResult VKAPI_CALL
wrapper_tramp_GetPipelineCacheData(
    VkDevice device,
    VkPipelineCache pipelineCache,
    size_t* pDataSize,
    void* pData)
{
    VK_FROM_HANDLE(wrapper_device, base, device);
VkPipelineCache pipelineCache__ = pipelineCache;
#ifdef NEEDS_UNWRAPPING_VkPipelineCache
#endif
    VkResult result = base->dispatch_table.GetPipelineCacheData(base->dispatch_handle, pipelineCache__, pDataSize, pData);
#ifdef NEEDS_UNWRAPPING_size_t
#endif
#ifdef NEEDS_UNWRAPPING_void
#endif
    return result;
}

static VKAPI_ATTR VkResult VKAPI_CALL
wrapper_tramp_MergePipelineCaches(
    VkDevice device,
    VkPipelineCache dstCache,
    uint32_t srcCacheCount,
    const VkPipelineCache* pSrcCaches)
{
    VK_FROM_HANDLE(wrapper_device, base, device);
VkPipelineCache dstCache__ = dstCache;
#ifdef NEEDS_UNWRAPPING_VkPipelineCache
#endif
uint32_t srcCacheCount__ = srcCacheCount;
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
const VkPipelineCache* pSrcCaches__ = pSrcCaches;
#ifdef NEEDS_UNWRAPPING_VkPipelineCache
#endif
    VkResult result = base->dispatch_table.MergePipelineCaches(base->dispatch_handle, dstCache__, srcCacheCount__, pSrcCaches__);

    return result;
}

static VKAPI_ATTR VkResult VKAPI_CALL
wrapper_tramp_CreateGraphicsPipelines(
    VkDevice device,
    VkPipelineCache pipelineCache,
    uint32_t createInfoCount,
    const VkGraphicsPipelineCreateInfo* pCreateInfos,
    const VkAllocationCallbacks* pAllocator,
    VkPipeline* pPipelines)
{
    VK_FROM_HANDLE(wrapper_device, base, device);
VkPipelineCache pipelineCache__ = pipelineCache;
#ifdef NEEDS_UNWRAPPING_VkPipelineCache
#endif
uint32_t createInfoCount__ = createInfoCount;
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
const VkGraphicsPipelineCreateInfo* pCreateInfos__ = pCreateInfos;
#ifdef NEEDS_UNWRAPPING_VkGraphicsPipelineCreateInfo
    pCreateInfos__ = alloca(createInfoCount * sizeof(VkGraphicsPipelineCreateInfo));
    for (int i = 0; i < createInfoCount; i++)
        unwrap_VkGraphicsPipelineCreateInfo(base, (VkGraphicsPipelineCreateInfo *) &pCreateInfos__[i], &pCreateInfos[i]);
#endif
const VkAllocationCallbacks* pAllocator__ = pAllocator;
#ifdef NEEDS_UNWRAPPING_VkAllocationCallbacks
    VkAllocationCallbacks _w_pAllocator = { 0 };
    pAllocator__ = &_w_pAllocator;
    unwrap_VkAllocationCallbacks(base, (VkAllocationCallbacks *) pAllocator__, pAllocator);
#endif
    VkResult result = base->dispatch_table.CreateGraphicsPipelines(base->dispatch_handle, pipelineCache__, createInfoCount__, pCreateInfos__, pAllocator__, pPipelines);
#ifdef NEEDS_UNWRAPPING_VkPipeline
#endif
    return result;
}

static VKAPI_ATTR VkResult VKAPI_CALL
wrapper_tramp_CreateComputePipelines(
    VkDevice device,
    VkPipelineCache pipelineCache,
    uint32_t createInfoCount,
    const VkComputePipelineCreateInfo* pCreateInfos,
    const VkAllocationCallbacks* pAllocator,
    VkPipeline* pPipelines)
{
    VK_FROM_HANDLE(wrapper_device, base, device);
VkPipelineCache pipelineCache__ = pipelineCache;
#ifdef NEEDS_UNWRAPPING_VkPipelineCache
#endif
uint32_t createInfoCount__ = createInfoCount;
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
const VkComputePipelineCreateInfo* pCreateInfos__ = pCreateInfos;
#ifdef NEEDS_UNWRAPPING_VkComputePipelineCreateInfo
    pCreateInfos__ = alloca(createInfoCount * sizeof(VkComputePipelineCreateInfo));
    for (int i = 0; i < createInfoCount; i++)
        unwrap_VkComputePipelineCreateInfo(base, (VkComputePipelineCreateInfo *) &pCreateInfos__[i], &pCreateInfos[i]);
#endif
const VkAllocationCallbacks* pAllocator__ = pAllocator;
#ifdef NEEDS_UNWRAPPING_VkAllocationCallbacks
    VkAllocationCallbacks _w_pAllocator = { 0 };
    pAllocator__ = &_w_pAllocator;
    unwrap_VkAllocationCallbacks(base, (VkAllocationCallbacks *) pAllocator__, pAllocator);
#endif
    VkResult result = base->dispatch_table.CreateComputePipelines(base->dispatch_handle, pipelineCache__, createInfoCount__, pCreateInfos__, pAllocator__, pPipelines);
#ifdef NEEDS_UNWRAPPING_VkPipeline
#endif
    return result;
}

static VKAPI_ATTR VkResult VKAPI_CALL
wrapper_tramp_GetDeviceSubpassShadingMaxWorkgroupSizeHUAWEI(
    VkDevice device,
    VkRenderPass renderpass,
    VkExtent2D* pMaxWorkgroupSize)
{
    VK_FROM_HANDLE(wrapper_device, base, device);
VkRenderPass renderpass__ = renderpass;
#ifdef NEEDS_UNWRAPPING_VkRenderPass
#endif
    VkResult result = base->dispatch_table.GetDeviceSubpassShadingMaxWorkgroupSizeHUAWEI(base->dispatch_handle, renderpass__, pMaxWorkgroupSize);
#ifdef NEEDS_UNWRAPPING_VkExtent2D
#warning TODO: Repack struct+array+out GetDeviceSubpassShadingMaxWorkgroupSizeHUAWEI EntrypointParam(type='VkExtent2D', name='pMaxWorkgroupSize', decl='VkExtent2D* pMaxWorkgroupSize', len='1', elem=<Element 'param' at 0x736889a5f150>, is_const=False, num_pointers=1)
#endif
    return result;
}

static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_DestroyPipeline(
    VkDevice device,
    VkPipeline pipeline,
    const VkAllocationCallbacks* pAllocator)
{
    VK_FROM_HANDLE(wrapper_device, base, device);
VkPipeline pipeline__ = pipeline;
#ifdef NEEDS_UNWRAPPING_VkPipeline
#endif
const VkAllocationCallbacks* pAllocator__ = pAllocator;
#ifdef NEEDS_UNWRAPPING_VkAllocationCallbacks
    VkAllocationCallbacks _w_pAllocator = { 0 };
    pAllocator__ = &_w_pAllocator;
    unwrap_VkAllocationCallbacks(base, (VkAllocationCallbacks *) pAllocator__, pAllocator);
#endif
    base->dispatch_table.DestroyPipeline(base->dispatch_handle, pipeline__, pAllocator__);

    return ;
}

static VKAPI_ATTR VkResult VKAPI_CALL
wrapper_tramp_CreatePipelineLayout(
    VkDevice device,
    const VkPipelineLayoutCreateInfo* pCreateInfo,
    const VkAllocationCallbacks* pAllocator,
    VkPipelineLayout* pPipelineLayout)
{
    VK_FROM_HANDLE(wrapper_device, base, device);
const VkPipelineLayoutCreateInfo* pCreateInfo__ = pCreateInfo;
#ifdef NEEDS_UNWRAPPING_VkPipelineLayoutCreateInfo
    VkPipelineLayoutCreateInfo _w_pCreateInfo = { 0 };
    pCreateInfo__ = &_w_pCreateInfo;
    unwrap_VkPipelineLayoutCreateInfo(base, (VkPipelineLayoutCreateInfo *) pCreateInfo__, pCreateInfo);
#endif
const VkAllocationCallbacks* pAllocator__ = pAllocator;
#ifdef NEEDS_UNWRAPPING_VkAllocationCallbacks
    VkAllocationCallbacks _w_pAllocator = { 0 };
    pAllocator__ = &_w_pAllocator;
    unwrap_VkAllocationCallbacks(base, (VkAllocationCallbacks *) pAllocator__, pAllocator);
#endif
    VkResult result = base->dispatch_table.CreatePipelineLayout(base->dispatch_handle, pCreateInfo__, pAllocator__, pPipelineLayout);
#ifdef NEEDS_UNWRAPPING_VkPipelineLayout
#endif
    return result;
}

static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_DestroyPipelineLayout(
    VkDevice device,
    VkPipelineLayout pipelineLayout,
    const VkAllocationCallbacks* pAllocator)
{
    VK_FROM_HANDLE(wrapper_device, base, device);
VkPipelineLayout pipelineLayout__ = pipelineLayout;
#ifdef NEEDS_UNWRAPPING_VkPipelineLayout
#endif
const VkAllocationCallbacks* pAllocator__ = pAllocator;
#ifdef NEEDS_UNWRAPPING_VkAllocationCallbacks
    VkAllocationCallbacks _w_pAllocator = { 0 };
    pAllocator__ = &_w_pAllocator;
    unwrap_VkAllocationCallbacks(base, (VkAllocationCallbacks *) pAllocator__, pAllocator);
#endif
    base->dispatch_table.DestroyPipelineLayout(base->dispatch_handle, pipelineLayout__, pAllocator__);

    return ;
}

static VKAPI_ATTR VkResult VKAPI_CALL
wrapper_tramp_CreateSampler(
    VkDevice device,
    const VkSamplerCreateInfo* pCreateInfo,
    const VkAllocationCallbacks* pAllocator,
    VkSampler* pSampler)
{
    VK_FROM_HANDLE(wrapper_device, base, device);
const VkSamplerCreateInfo* pCreateInfo__ = pCreateInfo;
#ifdef NEEDS_UNWRAPPING_VkSamplerCreateInfo
    VkSamplerCreateInfo _w_pCreateInfo = { 0 };
    pCreateInfo__ = &_w_pCreateInfo;
    unwrap_VkSamplerCreateInfo(base, (VkSamplerCreateInfo *) pCreateInfo__, pCreateInfo);
#endif
const VkAllocationCallbacks* pAllocator__ = pAllocator;
#ifdef NEEDS_UNWRAPPING_VkAllocationCallbacks
    VkAllocationCallbacks _w_pAllocator = { 0 };
    pAllocator__ = &_w_pAllocator;
    unwrap_VkAllocationCallbacks(base, (VkAllocationCallbacks *) pAllocator__, pAllocator);
#endif
    VkResult result = base->dispatch_table.CreateSampler(base->dispatch_handle, pCreateInfo__, pAllocator__, pSampler);
#ifdef NEEDS_UNWRAPPING_VkSampler
#endif
    return result;
}

static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_DestroySampler(
    VkDevice device,
    VkSampler sampler,
    const VkAllocationCallbacks* pAllocator)
{
    VK_FROM_HANDLE(wrapper_device, base, device);
VkSampler sampler__ = sampler;
#ifdef NEEDS_UNWRAPPING_VkSampler
#endif
const VkAllocationCallbacks* pAllocator__ = pAllocator;
#ifdef NEEDS_UNWRAPPING_VkAllocationCallbacks
    VkAllocationCallbacks _w_pAllocator = { 0 };
    pAllocator__ = &_w_pAllocator;
    unwrap_VkAllocationCallbacks(base, (VkAllocationCallbacks *) pAllocator__, pAllocator);
#endif
    base->dispatch_table.DestroySampler(base->dispatch_handle, sampler__, pAllocator__);

    return ;
}

static VKAPI_ATTR VkResult VKAPI_CALL
wrapper_tramp_CreateDescriptorSetLayout(
    VkDevice device,
    const VkDescriptorSetLayoutCreateInfo* pCreateInfo,
    const VkAllocationCallbacks* pAllocator,
    VkDescriptorSetLayout* pSetLayout)
{
    VK_FROM_HANDLE(wrapper_device, base, device);
const VkDescriptorSetLayoutCreateInfo* pCreateInfo__ = pCreateInfo;
#ifdef NEEDS_UNWRAPPING_VkDescriptorSetLayoutCreateInfo
    VkDescriptorSetLayoutCreateInfo _w_pCreateInfo = { 0 };
    pCreateInfo__ = &_w_pCreateInfo;
    unwrap_VkDescriptorSetLayoutCreateInfo(base, (VkDescriptorSetLayoutCreateInfo *) pCreateInfo__, pCreateInfo);
#endif
const VkAllocationCallbacks* pAllocator__ = pAllocator;
#ifdef NEEDS_UNWRAPPING_VkAllocationCallbacks
    VkAllocationCallbacks _w_pAllocator = { 0 };
    pAllocator__ = &_w_pAllocator;
    unwrap_VkAllocationCallbacks(base, (VkAllocationCallbacks *) pAllocator__, pAllocator);
#endif
    VkResult result = base->dispatch_table.CreateDescriptorSetLayout(base->dispatch_handle, pCreateInfo__, pAllocator__, pSetLayout);
#ifdef NEEDS_UNWRAPPING_VkDescriptorSetLayout
#endif
    return result;
}

static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_DestroyDescriptorSetLayout(
    VkDevice device,
    VkDescriptorSetLayout descriptorSetLayout,
    const VkAllocationCallbacks* pAllocator)
{
    VK_FROM_HANDLE(wrapper_device, base, device);
VkDescriptorSetLayout descriptorSetLayout__ = descriptorSetLayout;
#ifdef NEEDS_UNWRAPPING_VkDescriptorSetLayout
#endif
const VkAllocationCallbacks* pAllocator__ = pAllocator;
#ifdef NEEDS_UNWRAPPING_VkAllocationCallbacks
    VkAllocationCallbacks _w_pAllocator = { 0 };
    pAllocator__ = &_w_pAllocator;
    unwrap_VkAllocationCallbacks(base, (VkAllocationCallbacks *) pAllocator__, pAllocator);
#endif
    base->dispatch_table.DestroyDescriptorSetLayout(base->dispatch_handle, descriptorSetLayout__, pAllocator__);

    return ;
}

static VKAPI_ATTR VkResult VKAPI_CALL
wrapper_tramp_CreateDescriptorPool(
    VkDevice device,
    const VkDescriptorPoolCreateInfo* pCreateInfo,
    const VkAllocationCallbacks* pAllocator,
    VkDescriptorPool* pDescriptorPool)
{
    VK_FROM_HANDLE(wrapper_device, base, device);
const VkDescriptorPoolCreateInfo* pCreateInfo__ = pCreateInfo;
#ifdef NEEDS_UNWRAPPING_VkDescriptorPoolCreateInfo
    VkDescriptorPoolCreateInfo _w_pCreateInfo = { 0 };
    pCreateInfo__ = &_w_pCreateInfo;
    unwrap_VkDescriptorPoolCreateInfo(base, (VkDescriptorPoolCreateInfo *) pCreateInfo__, pCreateInfo);
#endif
const VkAllocationCallbacks* pAllocator__ = pAllocator;
#ifdef NEEDS_UNWRAPPING_VkAllocationCallbacks
    VkAllocationCallbacks _w_pAllocator = { 0 };
    pAllocator__ = &_w_pAllocator;
    unwrap_VkAllocationCallbacks(base, (VkAllocationCallbacks *) pAllocator__, pAllocator);
#endif
    VkResult result = base->dispatch_table.CreateDescriptorPool(base->dispatch_handle, pCreateInfo__, pAllocator__, pDescriptorPool);
#ifdef NEEDS_UNWRAPPING_VkDescriptorPool
#endif
    return result;
}

static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_DestroyDescriptorPool(
    VkDevice device,
    VkDescriptorPool descriptorPool,
    const VkAllocationCallbacks* pAllocator)
{
    VK_FROM_HANDLE(wrapper_device, base, device);
VkDescriptorPool descriptorPool__ = descriptorPool;
#ifdef NEEDS_UNWRAPPING_VkDescriptorPool
#endif
const VkAllocationCallbacks* pAllocator__ = pAllocator;
#ifdef NEEDS_UNWRAPPING_VkAllocationCallbacks
    VkAllocationCallbacks _w_pAllocator = { 0 };
    pAllocator__ = &_w_pAllocator;
    unwrap_VkAllocationCallbacks(base, (VkAllocationCallbacks *) pAllocator__, pAllocator);
#endif
    base->dispatch_table.DestroyDescriptorPool(base->dispatch_handle, descriptorPool__, pAllocator__);

    return ;
}

static VKAPI_ATTR VkResult VKAPI_CALL
wrapper_tramp_ResetDescriptorPool(
    VkDevice device,
    VkDescriptorPool descriptorPool,
    VkDescriptorPoolResetFlags flags)
{
    VK_FROM_HANDLE(wrapper_device, base, device);
VkDescriptorPool descriptorPool__ = descriptorPool;
#ifdef NEEDS_UNWRAPPING_VkDescriptorPool
#endif
VkDescriptorPoolResetFlags flags__ = flags;
#ifdef NEEDS_UNWRAPPING_VkDescriptorPoolResetFlags
#endif
    VkResult result = base->dispatch_table.ResetDescriptorPool(base->dispatch_handle, descriptorPool__, flags__);

    return result;
}

static VKAPI_ATTR VkResult VKAPI_CALL
wrapper_tramp_AllocateDescriptorSets(
    VkDevice device,
    const VkDescriptorSetAllocateInfo* pAllocateInfo,
    VkDescriptorSet* pDescriptorSets)
{
    VK_FROM_HANDLE(wrapper_device, base, device);
const VkDescriptorSetAllocateInfo* pAllocateInfo__ = pAllocateInfo;
#ifdef NEEDS_UNWRAPPING_VkDescriptorSetAllocateInfo
    VkDescriptorSetAllocateInfo _w_pAllocateInfo = { 0 };
    pAllocateInfo__ = &_w_pAllocateInfo;
    unwrap_VkDescriptorSetAllocateInfo(base, (VkDescriptorSetAllocateInfo *) pAllocateInfo__, pAllocateInfo);
#endif
    VkResult result = base->dispatch_table.AllocateDescriptorSets(base->dispatch_handle, pAllocateInfo__, pDescriptorSets);
#ifdef NEEDS_UNWRAPPING_VkDescriptorSet
#endif
    return result;
}

static VKAPI_ATTR VkResult VKAPI_CALL
wrapper_tramp_FreeDescriptorSets(
    VkDevice device,
    VkDescriptorPool descriptorPool,
    uint32_t descriptorSetCount,
    const VkDescriptorSet* pDescriptorSets)
{
    VK_FROM_HANDLE(wrapper_device, base, device);
VkDescriptorPool descriptorPool__ = descriptorPool;
#ifdef NEEDS_UNWRAPPING_VkDescriptorPool
#endif
uint32_t descriptorSetCount__ = descriptorSetCount;
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
const VkDescriptorSet* pDescriptorSets__ = pDescriptorSets;
#ifdef NEEDS_UNWRAPPING_VkDescriptorSet
#endif
    VkResult result = base->dispatch_table.FreeDescriptorSets(base->dispatch_handle, descriptorPool__, descriptorSetCount__, pDescriptorSets__);

    return result;
}

static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_UpdateDescriptorSets(
    VkDevice device,
    uint32_t descriptorWriteCount,
    const VkWriteDescriptorSet* pDescriptorWrites,
    uint32_t descriptorCopyCount,
    const VkCopyDescriptorSet* pDescriptorCopies)
{
    VK_FROM_HANDLE(wrapper_device, base, device);
uint32_t descriptorWriteCount__ = descriptorWriteCount;
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
const VkWriteDescriptorSet* pDescriptorWrites__ = pDescriptorWrites;
#ifdef NEEDS_UNWRAPPING_VkWriteDescriptorSet
    pDescriptorWrites__ = alloca(descriptorWriteCount * sizeof(VkWriteDescriptorSet));
    for (int i = 0; i < descriptorWriteCount; i++)
        unwrap_VkWriteDescriptorSet(base, (VkWriteDescriptorSet *) &pDescriptorWrites__[i], &pDescriptorWrites[i]);
#endif
uint32_t descriptorCopyCount__ = descriptorCopyCount;
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
const VkCopyDescriptorSet* pDescriptorCopies__ = pDescriptorCopies;
#ifdef NEEDS_UNWRAPPING_VkCopyDescriptorSet
    pDescriptorCopies__ = alloca(descriptorCopyCount * sizeof(VkCopyDescriptorSet));
    for (int i = 0; i < descriptorCopyCount; i++)
        unwrap_VkCopyDescriptorSet(base, (VkCopyDescriptorSet *) &pDescriptorCopies__[i], &pDescriptorCopies[i]);
#endif
    base->dispatch_table.UpdateDescriptorSets(base->dispatch_handle, descriptorWriteCount__, pDescriptorWrites__, descriptorCopyCount__, pDescriptorCopies__);

    return ;
}

static VKAPI_ATTR VkResult VKAPI_CALL
wrapper_tramp_CreateFramebuffer(
    VkDevice device,
    const VkFramebufferCreateInfo* pCreateInfo,
    const VkAllocationCallbacks* pAllocator,
    VkFramebuffer* pFramebuffer)
{
    VK_FROM_HANDLE(wrapper_device, base, device);
const VkFramebufferCreateInfo* pCreateInfo__ = pCreateInfo;
#ifdef NEEDS_UNWRAPPING_VkFramebufferCreateInfo
    VkFramebufferCreateInfo _w_pCreateInfo = { 0 };
    pCreateInfo__ = &_w_pCreateInfo;
    unwrap_VkFramebufferCreateInfo(base, (VkFramebufferCreateInfo *) pCreateInfo__, pCreateInfo);
#endif
const VkAllocationCallbacks* pAllocator__ = pAllocator;
#ifdef NEEDS_UNWRAPPING_VkAllocationCallbacks
    VkAllocationCallbacks _w_pAllocator = { 0 };
    pAllocator__ = &_w_pAllocator;
    unwrap_VkAllocationCallbacks(base, (VkAllocationCallbacks *) pAllocator__, pAllocator);
#endif
    VkResult result = base->dispatch_table.CreateFramebuffer(base->dispatch_handle, pCreateInfo__, pAllocator__, pFramebuffer);
#ifdef NEEDS_UNWRAPPING_VkFramebuffer
#endif
    return result;
}

static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_DestroyFramebuffer(
    VkDevice device,
    VkFramebuffer framebuffer,
    const VkAllocationCallbacks* pAllocator)
{
    VK_FROM_HANDLE(wrapper_device, base, device);
VkFramebuffer framebuffer__ = framebuffer;
#ifdef NEEDS_UNWRAPPING_VkFramebuffer
#endif
const VkAllocationCallbacks* pAllocator__ = pAllocator;
#ifdef NEEDS_UNWRAPPING_VkAllocationCallbacks
    VkAllocationCallbacks _w_pAllocator = { 0 };
    pAllocator__ = &_w_pAllocator;
    unwrap_VkAllocationCallbacks(base, (VkAllocationCallbacks *) pAllocator__, pAllocator);
#endif
    base->dispatch_table.DestroyFramebuffer(base->dispatch_handle, framebuffer__, pAllocator__);

    return ;
}

static VKAPI_ATTR VkResult VKAPI_CALL
wrapper_tramp_CreateRenderPass(
    VkDevice device,
    const VkRenderPassCreateInfo* pCreateInfo,
    const VkAllocationCallbacks* pAllocator,
    VkRenderPass* pRenderPass)
{
    VK_FROM_HANDLE(wrapper_device, base, device);
const VkRenderPassCreateInfo* pCreateInfo__ = pCreateInfo;
#ifdef NEEDS_UNWRAPPING_VkRenderPassCreateInfo
    VkRenderPassCreateInfo _w_pCreateInfo = { 0 };
    pCreateInfo__ = &_w_pCreateInfo;
    unwrap_VkRenderPassCreateInfo(base, (VkRenderPassCreateInfo *) pCreateInfo__, pCreateInfo);
#endif
const VkAllocationCallbacks* pAllocator__ = pAllocator;
#ifdef NEEDS_UNWRAPPING_VkAllocationCallbacks
    VkAllocationCallbacks _w_pAllocator = { 0 };
    pAllocator__ = &_w_pAllocator;
    unwrap_VkAllocationCallbacks(base, (VkAllocationCallbacks *) pAllocator__, pAllocator);
#endif
    VkResult result = base->dispatch_table.CreateRenderPass(base->dispatch_handle, pCreateInfo__, pAllocator__, pRenderPass);
#ifdef NEEDS_UNWRAPPING_VkRenderPass
#endif
    return result;
}

static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_DestroyRenderPass(
    VkDevice device,
    VkRenderPass renderPass,
    const VkAllocationCallbacks* pAllocator)
{
    VK_FROM_HANDLE(wrapper_device, base, device);
VkRenderPass renderPass__ = renderPass;
#ifdef NEEDS_UNWRAPPING_VkRenderPass
#endif
const VkAllocationCallbacks* pAllocator__ = pAllocator;
#ifdef NEEDS_UNWRAPPING_VkAllocationCallbacks
    VkAllocationCallbacks _w_pAllocator = { 0 };
    pAllocator__ = &_w_pAllocator;
    unwrap_VkAllocationCallbacks(base, (VkAllocationCallbacks *) pAllocator__, pAllocator);
#endif
    base->dispatch_table.DestroyRenderPass(base->dispatch_handle, renderPass__, pAllocator__);

    return ;
}

static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_GetRenderAreaGranularity(
    VkDevice device,
    VkRenderPass renderPass,
    VkExtent2D* pGranularity)
{
    VK_FROM_HANDLE(wrapper_device, base, device);
VkRenderPass renderPass__ = renderPass;
#ifdef NEEDS_UNWRAPPING_VkRenderPass
#endif
    base->dispatch_table.GetRenderAreaGranularity(base->dispatch_handle, renderPass__, pGranularity);
#ifdef NEEDS_UNWRAPPING_VkExtent2D
#warning TODO: Repack struct+ptr+out GetRenderAreaGranularity EntrypointParam(type='VkExtent2D', name='pGranularity', decl='VkExtent2D* pGranularity', len=None, elem=<Element 'param' at 0x736889a74770>, is_const=False, num_pointers=1)
#endif
    return ;
}

static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_GetRenderingAreaGranularityKHR(
    VkDevice device,
    const VkRenderingAreaInfoKHR* pRenderingAreaInfo,
    VkExtent2D* pGranularity)
{
    VK_FROM_HANDLE(wrapper_device, base, device);
const VkRenderingAreaInfoKHR* pRenderingAreaInfo__ = pRenderingAreaInfo;
#ifdef NEEDS_UNWRAPPING_VkRenderingAreaInfoKHR
    VkRenderingAreaInfoKHR _w_pRenderingAreaInfo = { 0 };
    pRenderingAreaInfo__ = &_w_pRenderingAreaInfo;
    unwrap_VkRenderingAreaInfoKHR(base, (VkRenderingAreaInfoKHR *) pRenderingAreaInfo__, pRenderingAreaInfo);
#endif
    base->dispatch_table.GetRenderingAreaGranularityKHR(base->dispatch_handle, pRenderingAreaInfo__, pGranularity);
#ifdef NEEDS_UNWRAPPING_VkExtent2D
#warning TODO: Repack struct+ptr+out GetRenderingAreaGranularityKHR EntrypointParam(type='VkExtent2D', name='pGranularity', decl='VkExtent2D* pGranularity', len=None, elem=<Element 'param' at 0x736889a74bd0>, is_const=False, num_pointers=1)
#endif
    return ;
}

static VKAPI_ATTR VkResult VKAPI_CALL
wrapper_tramp_CreateCommandPool(
    VkDevice device,
    const VkCommandPoolCreateInfo* pCreateInfo,
    const VkAllocationCallbacks* pAllocator,
    VkCommandPool* pCommandPool)
{
    VK_FROM_HANDLE(wrapper_device, base, device);
const VkCommandPoolCreateInfo* pCreateInfo__ = pCreateInfo;
#ifdef NEEDS_UNWRAPPING_VkCommandPoolCreateInfo
    VkCommandPoolCreateInfo _w_pCreateInfo = { 0 };
    pCreateInfo__ = &_w_pCreateInfo;
    unwrap_VkCommandPoolCreateInfo(base, (VkCommandPoolCreateInfo *) pCreateInfo__, pCreateInfo);
#endif
const VkAllocationCallbacks* pAllocator__ = pAllocator;
#ifdef NEEDS_UNWRAPPING_VkAllocationCallbacks
    VkAllocationCallbacks _w_pAllocator = { 0 };
    pAllocator__ = &_w_pAllocator;
    unwrap_VkAllocationCallbacks(base, (VkAllocationCallbacks *) pAllocator__, pAllocator);
#endif
    VkResult result = base->dispatch_table.CreateCommandPool(base->dispatch_handle, pCreateInfo__, pAllocator__, pCommandPool);
#ifdef NEEDS_UNWRAPPING_VkCommandPool
#endif
    return result;
}

static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_DestroyCommandPool(
    VkDevice device,
    VkCommandPool commandPool,
    const VkAllocationCallbacks* pAllocator)
{
    VK_FROM_HANDLE(wrapper_device, base, device);
VkCommandPool commandPool__ = commandPool;
#ifdef NEEDS_UNWRAPPING_VkCommandPool
#endif
const VkAllocationCallbacks* pAllocator__ = pAllocator;
#ifdef NEEDS_UNWRAPPING_VkAllocationCallbacks
    VkAllocationCallbacks _w_pAllocator = { 0 };
    pAllocator__ = &_w_pAllocator;
    unwrap_VkAllocationCallbacks(base, (VkAllocationCallbacks *) pAllocator__, pAllocator);
#endif
    base->dispatch_table.DestroyCommandPool(base->dispatch_handle, commandPool__, pAllocator__);

    return ;
}

static VKAPI_ATTR VkResult VKAPI_CALL
wrapper_tramp_ResetCommandPool(
    VkDevice device,
    VkCommandPool commandPool,
    VkCommandPoolResetFlags flags)
{
    VK_FROM_HANDLE(wrapper_device, base, device);
VkCommandPool commandPool__ = commandPool;
#ifdef NEEDS_UNWRAPPING_VkCommandPool
#endif
VkCommandPoolResetFlags flags__ = flags;
#ifdef NEEDS_UNWRAPPING_VkCommandPoolResetFlags
#endif
    VkResult result = base->dispatch_table.ResetCommandPool(base->dispatch_handle, commandPool__, flags__);

    return result;
}

static VKAPI_ATTR VkResult VKAPI_CALL
wrapper_tramp_AllocateCommandBuffers(
    VkDevice device,
    const VkCommandBufferAllocateInfo* pAllocateInfo,
    VkCommandBuffer* pCommandBuffers)
{
    VK_FROM_HANDLE(wrapper_device, base, device);
    VkResult result = base->dispatch_table.AllocateCommandBuffers(base->dispatch_handle, pAllocateInfo, pCommandBuffers);

    return result;
}

static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_FreeCommandBuffers(
    VkDevice device,
    VkCommandPool commandPool,
    uint32_t commandBufferCount,
    const VkCommandBuffer* pCommandBuffers)
{
    VK_FROM_HANDLE(wrapper_device, base, device);
    base->dispatch_table.FreeCommandBuffers(base->dispatch_handle, commandPool, commandBufferCount, pCommandBuffers);

    return ;
}

static VKAPI_ATTR VkResult VKAPI_CALL
wrapper_tramp_BeginCommandBuffer(
    VkCommandBuffer commandBuffer,
    const VkCommandBufferBeginInfo* pBeginInfo)
{
    VK_FROM_HANDLE(wrapper_command_buffer, base, commandBuffer);
const VkCommandBufferBeginInfo* pBeginInfo__ = pBeginInfo;
#ifdef NEEDS_UNWRAPPING_VkCommandBufferBeginInfo
    VkCommandBufferBeginInfo _w_pBeginInfo = { 0 };
    pBeginInfo__ = &_w_pBeginInfo;
    unwrap_VkCommandBufferBeginInfo(base->device, (VkCommandBufferBeginInfo *) pBeginInfo__, pBeginInfo);
#endif
    VkResult result = base->device->dispatch_table.BeginCommandBuffer(base->dispatch_handle, pBeginInfo__);

    return result;
}

static VKAPI_ATTR VkResult VKAPI_CALL
wrapper_tramp_EndCommandBuffer(
    VkCommandBuffer commandBuffer)
{
    VK_FROM_HANDLE(wrapper_command_buffer, base, commandBuffer);
    VkResult result = base->device->dispatch_table.EndCommandBuffer(base->dispatch_handle);

    return result;
}

static VKAPI_ATTR VkResult VKAPI_CALL
wrapper_tramp_ResetCommandBuffer(
    VkCommandBuffer commandBuffer,
    VkCommandBufferResetFlags flags)
{
    VK_FROM_HANDLE(wrapper_command_buffer, base, commandBuffer);
VkCommandBufferResetFlags flags__ = flags;
#ifdef NEEDS_UNWRAPPING_VkCommandBufferResetFlags
#endif
    VkResult result = base->device->dispatch_table.ResetCommandBuffer(base->dispatch_handle, flags__);

    return result;
}

static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_CmdBindPipeline(
    VkCommandBuffer commandBuffer,
    VkPipelineBindPoint pipelineBindPoint,
    VkPipeline pipeline)
{
    VK_FROM_HANDLE(wrapper_command_buffer, base, commandBuffer);
VkPipelineBindPoint pipelineBindPoint__ = pipelineBindPoint;
#ifdef NEEDS_UNWRAPPING_VkPipelineBindPoint
#endif
VkPipeline pipeline__ = pipeline;
#ifdef NEEDS_UNWRAPPING_VkPipeline
#endif
    base->device->dispatch_table.CmdBindPipeline(base->dispatch_handle, pipelineBindPoint__, pipeline__);

    return ;
}

static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_CmdSetAttachmentFeedbackLoopEnableEXT(
    VkCommandBuffer commandBuffer,
    VkImageAspectFlags aspectMask)
{
    VK_FROM_HANDLE(wrapper_command_buffer, base, commandBuffer);
VkImageAspectFlags aspectMask__ = aspectMask;
#ifdef NEEDS_UNWRAPPING_VkImageAspectFlags
#endif
    base->device->dispatch_table.CmdSetAttachmentFeedbackLoopEnableEXT(base->dispatch_handle, aspectMask__);

    return ;
}

static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_CmdSetViewport(
    VkCommandBuffer commandBuffer,
    uint32_t firstViewport,
    uint32_t viewportCount,
    const VkViewport* pViewports)
{
    VK_FROM_HANDLE(wrapper_command_buffer, base, commandBuffer);
uint32_t firstViewport__ = firstViewport;
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
uint32_t viewportCount__ = viewportCount;
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
const VkViewport* pViewports__ = pViewports;
#ifdef NEEDS_UNWRAPPING_VkViewport
    pViewports__ = alloca(viewportCount * sizeof(VkViewport));
    for (int i = 0; i < viewportCount; i++)
        unwrap_VkViewport(base->device, (VkViewport *) &pViewports__[i], &pViewports[i]);
#endif
    base->device->dispatch_table.CmdSetViewport(base->dispatch_handle, firstViewport__, viewportCount__, pViewports__);

    return ;
}

static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_CmdSetScissor(
    VkCommandBuffer commandBuffer,
    uint32_t firstScissor,
    uint32_t scissorCount,
    const VkRect2D* pScissors)
{
    VK_FROM_HANDLE(wrapper_command_buffer, base, commandBuffer);
uint32_t firstScissor__ = firstScissor;
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
uint32_t scissorCount__ = scissorCount;
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
const VkRect2D* pScissors__ = pScissors;
#ifdef NEEDS_UNWRAPPING_VkRect2D
    pScissors__ = alloca(scissorCount * sizeof(VkRect2D));
    for (int i = 0; i < scissorCount; i++)
        unwrap_VkRect2D(base->device, (VkRect2D *) &pScissors__[i], &pScissors[i]);
#endif
    base->device->dispatch_table.CmdSetScissor(base->dispatch_handle, firstScissor__, scissorCount__, pScissors__);

    return ;
}

static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_CmdSetLineWidth(
    VkCommandBuffer commandBuffer,
    float lineWidth)
{
    VK_FROM_HANDLE(wrapper_command_buffer, base, commandBuffer);
float lineWidth__ = lineWidth;
#ifdef NEEDS_UNWRAPPING_float
#endif
    base->device->dispatch_table.CmdSetLineWidth(base->dispatch_handle, lineWidth__);

    return ;
}

static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_CmdSetDepthBias(
    VkCommandBuffer commandBuffer,
    float depthBiasConstantFactor,
    float depthBiasClamp,
    float depthBiasSlopeFactor)
{
    VK_FROM_HANDLE(wrapper_command_buffer, base, commandBuffer);
float depthBiasConstantFactor__ = depthBiasConstantFactor;
#ifdef NEEDS_UNWRAPPING_float
#endif
float depthBiasClamp__ = depthBiasClamp;
#ifdef NEEDS_UNWRAPPING_float
#endif
float depthBiasSlopeFactor__ = depthBiasSlopeFactor;
#ifdef NEEDS_UNWRAPPING_float
#endif
    base->device->dispatch_table.CmdSetDepthBias(base->dispatch_handle, depthBiasConstantFactor__, depthBiasClamp__, depthBiasSlopeFactor__);

    return ;
}

static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_CmdSetBlendConstants(
    VkCommandBuffer commandBuffer,
    const float blendConstants[4])
{
    VK_FROM_HANDLE(wrapper_command_buffer, base, commandBuffer);
    base->device->dispatch_table.CmdSetBlendConstants(base->dispatch_handle, blendConstants);

    return ;
}

static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_CmdSetDepthBounds(
    VkCommandBuffer commandBuffer,
    float minDepthBounds,
    float maxDepthBounds)
{
    VK_FROM_HANDLE(wrapper_command_buffer, base, commandBuffer);
float minDepthBounds__ = minDepthBounds;
#ifdef NEEDS_UNWRAPPING_float
#endif
float maxDepthBounds__ = maxDepthBounds;
#ifdef NEEDS_UNWRAPPING_float
#endif
    base->device->dispatch_table.CmdSetDepthBounds(base->dispatch_handle, minDepthBounds__, maxDepthBounds__);

    return ;
}

static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_CmdSetStencilCompareMask(
    VkCommandBuffer commandBuffer,
    VkStencilFaceFlags faceMask,
    uint32_t compareMask)
{
    VK_FROM_HANDLE(wrapper_command_buffer, base, commandBuffer);
VkStencilFaceFlags faceMask__ = faceMask;
#ifdef NEEDS_UNWRAPPING_VkStencilFaceFlags
#endif
uint32_t compareMask__ = compareMask;
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
    base->device->dispatch_table.CmdSetStencilCompareMask(base->dispatch_handle, faceMask__, compareMask__);

    return ;
}

static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_CmdSetStencilWriteMask(
    VkCommandBuffer commandBuffer,
    VkStencilFaceFlags faceMask,
    uint32_t writeMask)
{
    VK_FROM_HANDLE(wrapper_command_buffer, base, commandBuffer);
VkStencilFaceFlags faceMask__ = faceMask;
#ifdef NEEDS_UNWRAPPING_VkStencilFaceFlags
#endif
uint32_t writeMask__ = writeMask;
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
    base->device->dispatch_table.CmdSetStencilWriteMask(base->dispatch_handle, faceMask__, writeMask__);

    return ;
}

static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_CmdSetStencilReference(
    VkCommandBuffer commandBuffer,
    VkStencilFaceFlags faceMask,
    uint32_t reference)
{
    VK_FROM_HANDLE(wrapper_command_buffer, base, commandBuffer);
VkStencilFaceFlags faceMask__ = faceMask;
#ifdef NEEDS_UNWRAPPING_VkStencilFaceFlags
#endif
uint32_t reference__ = reference;
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
    base->device->dispatch_table.CmdSetStencilReference(base->dispatch_handle, faceMask__, reference__);

    return ;
}

static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_CmdBindDescriptorSets(
    VkCommandBuffer commandBuffer,
    VkPipelineBindPoint pipelineBindPoint,
    VkPipelineLayout layout,
    uint32_t firstSet,
    uint32_t descriptorSetCount,
    const VkDescriptorSet* pDescriptorSets,
    uint32_t dynamicOffsetCount,
    const uint32_t* pDynamicOffsets)
{
    VK_FROM_HANDLE(wrapper_command_buffer, base, commandBuffer);
VkPipelineBindPoint pipelineBindPoint__ = pipelineBindPoint;
#ifdef NEEDS_UNWRAPPING_VkPipelineBindPoint
#endif
VkPipelineLayout layout__ = layout;
#ifdef NEEDS_UNWRAPPING_VkPipelineLayout
#endif
uint32_t firstSet__ = firstSet;
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
uint32_t descriptorSetCount__ = descriptorSetCount;
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
const VkDescriptorSet* pDescriptorSets__ = pDescriptorSets;
#ifdef NEEDS_UNWRAPPING_VkDescriptorSet
#endif
uint32_t dynamicOffsetCount__ = dynamicOffsetCount;
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
const uint32_t* pDynamicOffsets__ = pDynamicOffsets;
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
    base->device->dispatch_table.CmdBindDescriptorSets(base->dispatch_handle, pipelineBindPoint__, layout__, firstSet__, descriptorSetCount__, pDescriptorSets__, dynamicOffsetCount__, pDynamicOffsets__);

    return ;
}

static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_CmdBindIndexBuffer(
    VkCommandBuffer commandBuffer,
    VkBuffer buffer,
    VkDeviceSize offset,
    VkIndexType indexType)
{
    VK_FROM_HANDLE(wrapper_command_buffer, base, commandBuffer);
VkBuffer buffer__ = buffer;
#ifdef NEEDS_UNWRAPPING_VkBuffer
#endif
VkDeviceSize offset__ = offset;
#ifdef NEEDS_UNWRAPPING_VkDeviceSize
#endif
VkIndexType indexType__ = indexType;
#ifdef NEEDS_UNWRAPPING_VkIndexType
#endif
    base->device->dispatch_table.CmdBindIndexBuffer(base->dispatch_handle, buffer__, offset__, indexType__);

    return ;
}

static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_CmdBindVertexBuffers(
    VkCommandBuffer commandBuffer,
    uint32_t firstBinding,
    uint32_t bindingCount,
    const VkBuffer* pBuffers,
    const VkDeviceSize* pOffsets)
{
    VK_FROM_HANDLE(wrapper_command_buffer, base, commandBuffer);
uint32_t firstBinding__ = firstBinding;
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
uint32_t bindingCount__ = bindingCount;
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
const VkBuffer* pBuffers__ = pBuffers;
#ifdef NEEDS_UNWRAPPING_VkBuffer
#endif
const VkDeviceSize* pOffsets__ = pOffsets;
#ifdef NEEDS_UNWRAPPING_VkDeviceSize
#endif
    base->device->dispatch_table.CmdBindVertexBuffers(base->dispatch_handle, firstBinding__, bindingCount__, pBuffers__, pOffsets__);

    return ;
}

static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_CmdDraw(
    VkCommandBuffer commandBuffer,
    uint32_t vertexCount,
    uint32_t instanceCount,
    uint32_t firstVertex,
    uint32_t firstInstance)
{
    VK_FROM_HANDLE(wrapper_command_buffer, base, commandBuffer);
uint32_t vertexCount__ = vertexCount;
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
uint32_t instanceCount__ = instanceCount;
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
uint32_t firstVertex__ = firstVertex;
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
uint32_t firstInstance__ = firstInstance;
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
    base->device->dispatch_table.CmdDraw(base->dispatch_handle, vertexCount__, instanceCount__, firstVertex__, firstInstance__);

    return ;
}

static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_CmdDrawIndexed(
    VkCommandBuffer commandBuffer,
    uint32_t indexCount,
    uint32_t instanceCount,
    uint32_t firstIndex,
    int32_t vertexOffset,
    uint32_t firstInstance)
{
    VK_FROM_HANDLE(wrapper_command_buffer, base, commandBuffer);
uint32_t indexCount__ = indexCount;
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
uint32_t instanceCount__ = instanceCount;
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
uint32_t firstIndex__ = firstIndex;
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
int32_t vertexOffset__ = vertexOffset;
#ifdef NEEDS_UNWRAPPING_int32_t
#endif
uint32_t firstInstance__ = firstInstance;
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
    base->device->dispatch_table.CmdDrawIndexed(base->dispatch_handle, indexCount__, instanceCount__, firstIndex__, vertexOffset__, firstInstance__);

    return ;
}

static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_CmdDrawMultiEXT(
    VkCommandBuffer commandBuffer,
    uint32_t drawCount,
    const VkMultiDrawInfoEXT* pVertexInfo,
    uint32_t instanceCount,
    uint32_t firstInstance,
    uint32_t stride)
{
    VK_FROM_HANDLE(wrapper_command_buffer, base, commandBuffer);
uint32_t drawCount__ = drawCount;
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
const VkMultiDrawInfoEXT* pVertexInfo__ = pVertexInfo;
#ifdef NEEDS_UNWRAPPING_VkMultiDrawInfoEXT
    pVertexInfo__ = alloca(drawCount * sizeof(VkMultiDrawInfoEXT));
    for (int i = 0; i < drawCount; i++)
        unwrap_VkMultiDrawInfoEXT(base->device, (VkMultiDrawInfoEXT *) &pVertexInfo__[i], &pVertexInfo[i]);
#endif
uint32_t instanceCount__ = instanceCount;
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
uint32_t firstInstance__ = firstInstance;
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
uint32_t stride__ = stride;
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
    base->device->dispatch_table.CmdDrawMultiEXT(base->dispatch_handle, drawCount__, pVertexInfo__, instanceCount__, firstInstance__, stride__);

    return ;
}

static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_CmdDrawMultiIndexedEXT(
    VkCommandBuffer commandBuffer,
    uint32_t drawCount,
    const VkMultiDrawIndexedInfoEXT* pIndexInfo,
    uint32_t instanceCount,
    uint32_t firstInstance,
    uint32_t stride,
    const int32_t* pVertexOffset)
{
    VK_FROM_HANDLE(wrapper_command_buffer, base, commandBuffer);
uint32_t drawCount__ = drawCount;
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
const VkMultiDrawIndexedInfoEXT* pIndexInfo__ = pIndexInfo;
#ifdef NEEDS_UNWRAPPING_VkMultiDrawIndexedInfoEXT
    pIndexInfo__ = alloca(drawCount * sizeof(VkMultiDrawIndexedInfoEXT));
    for (int i = 0; i < drawCount; i++)
        unwrap_VkMultiDrawIndexedInfoEXT(base->device, (VkMultiDrawIndexedInfoEXT *) &pIndexInfo__[i], &pIndexInfo[i]);
#endif
uint32_t instanceCount__ = instanceCount;
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
uint32_t firstInstance__ = firstInstance;
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
uint32_t stride__ = stride;
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
const int32_t* pVertexOffset__ = pVertexOffset;
#ifdef NEEDS_UNWRAPPING_int32_t
#endif
    base->device->dispatch_table.CmdDrawMultiIndexedEXT(base->dispatch_handle, drawCount__, pIndexInfo__, instanceCount__, firstInstance__, stride__, pVertexOffset__);

    return ;
}

static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_CmdDrawIndirect(
    VkCommandBuffer commandBuffer,
    VkBuffer buffer,
    VkDeviceSize offset,
    uint32_t drawCount,
    uint32_t stride)
{
    VK_FROM_HANDLE(wrapper_command_buffer, base, commandBuffer);
VkBuffer buffer__ = buffer;
#ifdef NEEDS_UNWRAPPING_VkBuffer
#endif
VkDeviceSize offset__ = offset;
#ifdef NEEDS_UNWRAPPING_VkDeviceSize
#endif
uint32_t drawCount__ = drawCount;
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
uint32_t stride__ = stride;
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
    base->device->dispatch_table.CmdDrawIndirect(base->dispatch_handle, buffer__, offset__, drawCount__, stride__);

    return ;
}

static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_CmdDrawIndexedIndirect(
    VkCommandBuffer commandBuffer,
    VkBuffer buffer,
    VkDeviceSize offset,
    uint32_t drawCount,
    uint32_t stride)
{
    VK_FROM_HANDLE(wrapper_command_buffer, base, commandBuffer);
VkBuffer buffer__ = buffer;
#ifdef NEEDS_UNWRAPPING_VkBuffer
#endif
VkDeviceSize offset__ = offset;
#ifdef NEEDS_UNWRAPPING_VkDeviceSize
#endif
uint32_t drawCount__ = drawCount;
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
uint32_t stride__ = stride;
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
    base->device->dispatch_table.CmdDrawIndexedIndirect(base->dispatch_handle, buffer__, offset__, drawCount__, stride__);

    return ;
}

static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_CmdDispatch(
    VkCommandBuffer commandBuffer,
    uint32_t groupCountX,
    uint32_t groupCountY,
    uint32_t groupCountZ)
{
    VK_FROM_HANDLE(wrapper_command_buffer, base, commandBuffer);
uint32_t groupCountX__ = groupCountX;
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
uint32_t groupCountY__ = groupCountY;
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
uint32_t groupCountZ__ = groupCountZ;
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
    base->device->dispatch_table.CmdDispatch(base->dispatch_handle, groupCountX__, groupCountY__, groupCountZ__);

    return ;
}

static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_CmdDispatchIndirect(
    VkCommandBuffer commandBuffer,
    VkBuffer buffer,
    VkDeviceSize offset)
{
    VK_FROM_HANDLE(wrapper_command_buffer, base, commandBuffer);
VkBuffer buffer__ = buffer;
#ifdef NEEDS_UNWRAPPING_VkBuffer
#endif
VkDeviceSize offset__ = offset;
#ifdef NEEDS_UNWRAPPING_VkDeviceSize
#endif
    base->device->dispatch_table.CmdDispatchIndirect(base->dispatch_handle, buffer__, offset__);

    return ;
}

static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_CmdSubpassShadingHUAWEI(
    VkCommandBuffer commandBuffer)
{
    VK_FROM_HANDLE(wrapper_command_buffer, base, commandBuffer);
    base->device->dispatch_table.CmdSubpassShadingHUAWEI(base->dispatch_handle);

    return ;
}

static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_CmdDrawClusterHUAWEI(
    VkCommandBuffer commandBuffer,
    uint32_t groupCountX,
    uint32_t groupCountY,
    uint32_t groupCountZ)
{
    VK_FROM_HANDLE(wrapper_command_buffer, base, commandBuffer);
uint32_t groupCountX__ = groupCountX;
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
uint32_t groupCountY__ = groupCountY;
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
uint32_t groupCountZ__ = groupCountZ;
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
    base->device->dispatch_table.CmdDrawClusterHUAWEI(base->dispatch_handle, groupCountX__, groupCountY__, groupCountZ__);

    return ;
}

static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_CmdDrawClusterIndirectHUAWEI(
    VkCommandBuffer commandBuffer,
    VkBuffer buffer,
    VkDeviceSize offset)
{
    VK_FROM_HANDLE(wrapper_command_buffer, base, commandBuffer);
VkBuffer buffer__ = buffer;
#ifdef NEEDS_UNWRAPPING_VkBuffer
#endif
VkDeviceSize offset__ = offset;
#ifdef NEEDS_UNWRAPPING_VkDeviceSize
#endif
    base->device->dispatch_table.CmdDrawClusterIndirectHUAWEI(base->dispatch_handle, buffer__, offset__);

    return ;
}

static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_CmdUpdatePipelineIndirectBufferNV(
    VkCommandBuffer commandBuffer,
    VkPipelineBindPoint           pipelineBindPoint,
    VkPipeline                    pipeline)
{
    VK_FROM_HANDLE(wrapper_command_buffer, base, commandBuffer);
VkPipelineBindPoint           pipelineBindPoint__ = pipelineBindPoint;
#ifdef NEEDS_UNWRAPPING_VkPipelineBindPoint
#endif
VkPipeline                    pipeline__ = pipeline;
#ifdef NEEDS_UNWRAPPING_VkPipeline
#endif
    base->device->dispatch_table.CmdUpdatePipelineIndirectBufferNV(base->dispatch_handle, pipelineBindPoint__, pipeline__);

    return ;
}

static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_CmdCopyBuffer(
    VkCommandBuffer commandBuffer,
    VkBuffer srcBuffer,
    VkBuffer dstBuffer,
    uint32_t regionCount,
    const VkBufferCopy* pRegions)
{
    VK_FROM_HANDLE(wrapper_command_buffer, base, commandBuffer);
VkBuffer srcBuffer__ = srcBuffer;
#ifdef NEEDS_UNWRAPPING_VkBuffer
#endif
VkBuffer dstBuffer__ = dstBuffer;
#ifdef NEEDS_UNWRAPPING_VkBuffer
#endif
uint32_t regionCount__ = regionCount;
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
const VkBufferCopy* pRegions__ = pRegions;
#ifdef NEEDS_UNWRAPPING_VkBufferCopy
    pRegions__ = alloca(regionCount * sizeof(VkBufferCopy));
    for (int i = 0; i < regionCount; i++)
        unwrap_VkBufferCopy(base->device, (VkBufferCopy *) &pRegions__[i], &pRegions[i]);
#endif
    base->device->dispatch_table.CmdCopyBuffer(base->dispatch_handle, srcBuffer__, dstBuffer__, regionCount__, pRegions__);

    return ;
}

static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_CmdCopyImage(
    VkCommandBuffer commandBuffer,
    VkImage srcImage,
    VkImageLayout srcImageLayout,
    VkImage dstImage,
    VkImageLayout dstImageLayout,
    uint32_t regionCount,
    const VkImageCopy* pRegions)
{
    VK_FROM_HANDLE(wrapper_command_buffer, base, commandBuffer);
VkImage srcImage__ = srcImage;
#ifdef NEEDS_UNWRAPPING_VkImage
    VK_FROM_HANDLE(wrapper_image, w_srcImage, srcImage);
    srcImage__ = w_srcImage->dispatch_handle;
#endif
VkImageLayout srcImageLayout__ = srcImageLayout;
#ifdef NEEDS_UNWRAPPING_VkImageLayout
#endif
VkImage dstImage__ = dstImage;
#ifdef NEEDS_UNWRAPPING_VkImage
    VK_FROM_HANDLE(wrapper_image, w_dstImage, dstImage);
    dstImage__ = w_dstImage->dispatch_handle;
#endif
VkImageLayout dstImageLayout__ = dstImageLayout;
#ifdef NEEDS_UNWRAPPING_VkImageLayout
#endif
uint32_t regionCount__ = regionCount;
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
const VkImageCopy* pRegions__ = pRegions;
#ifdef NEEDS_UNWRAPPING_VkImageCopy
    pRegions__ = alloca(regionCount * sizeof(VkImageCopy));
    for (int i = 0; i < regionCount; i++)
        unwrap_VkImageCopy(base->device, (VkImageCopy *) &pRegions__[i], &pRegions[i]);
#endif
    base->device->dispatch_table.CmdCopyImage(base->dispatch_handle, srcImage__, srcImageLayout__, dstImage__, dstImageLayout__, regionCount__, pRegions__);

    return ;
}

static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_CmdBlitImage(
    VkCommandBuffer commandBuffer,
    VkImage srcImage,
    VkImageLayout srcImageLayout,
    VkImage dstImage,
    VkImageLayout dstImageLayout,
    uint32_t regionCount,
    const VkImageBlit* pRegions,
    VkFilter filter)
{
    VK_FROM_HANDLE(wrapper_command_buffer, base, commandBuffer);
VkImage srcImage__ = srcImage;
#ifdef NEEDS_UNWRAPPING_VkImage
    VK_FROM_HANDLE(wrapper_image, w_srcImage, srcImage);
    srcImage__ = w_srcImage->dispatch_handle;
#endif
VkImageLayout srcImageLayout__ = srcImageLayout;
#ifdef NEEDS_UNWRAPPING_VkImageLayout
#endif
VkImage dstImage__ = dstImage;
#ifdef NEEDS_UNWRAPPING_VkImage
    VK_FROM_HANDLE(wrapper_image, w_dstImage, dstImage);
    dstImage__ = w_dstImage->dispatch_handle;
#endif
VkImageLayout dstImageLayout__ = dstImageLayout;
#ifdef NEEDS_UNWRAPPING_VkImageLayout
#endif
uint32_t regionCount__ = regionCount;
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
const VkImageBlit* pRegions__ = pRegions;
#ifdef NEEDS_UNWRAPPING_VkImageBlit
    pRegions__ = alloca(regionCount * sizeof(VkImageBlit));
    for (int i = 0; i < regionCount; i++)
        unwrap_VkImageBlit(base->device, (VkImageBlit *) &pRegions__[i], &pRegions[i]);
#endif
VkFilter filter__ = filter;
#ifdef NEEDS_UNWRAPPING_VkFilter
#endif
    base->device->dispatch_table.CmdBlitImage(base->dispatch_handle, srcImage__, srcImageLayout__, dstImage__, dstImageLayout__, regionCount__, pRegions__, filter__);

    return ;
}

static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_CmdCopyBufferToImage(
    VkCommandBuffer commandBuffer,
    VkBuffer srcBuffer,
    VkImage dstImage,
    VkImageLayout dstImageLayout,
    uint32_t regionCount,
    const VkBufferImageCopy* pRegions)
{
    VK_FROM_HANDLE(wrapper_command_buffer, base, commandBuffer);
VkBuffer srcBuffer__ = srcBuffer;
#ifdef NEEDS_UNWRAPPING_VkBuffer
#endif
VkImage dstImage__ = dstImage;
#ifdef NEEDS_UNWRAPPING_VkImage
    VK_FROM_HANDLE(wrapper_image, w_dstImage, dstImage);
    dstImage__ = w_dstImage->dispatch_handle;
#endif
VkImageLayout dstImageLayout__ = dstImageLayout;
#ifdef NEEDS_UNWRAPPING_VkImageLayout
#endif
uint32_t regionCount__ = regionCount;
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
const VkBufferImageCopy* pRegions__ = pRegions;
#ifdef NEEDS_UNWRAPPING_VkBufferImageCopy
    pRegions__ = alloca(regionCount * sizeof(VkBufferImageCopy));
    for (int i = 0; i < regionCount; i++)
        unwrap_VkBufferImageCopy(base->device, (VkBufferImageCopy *) &pRegions__[i], &pRegions[i]);
#endif
    base->device->dispatch_table.CmdCopyBufferToImage(base->dispatch_handle, srcBuffer__, dstImage__, dstImageLayout__, regionCount__, pRegions__);

    return ;
}

static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_CmdCopyImageToBuffer(
    VkCommandBuffer commandBuffer,
    VkImage srcImage,
    VkImageLayout srcImageLayout,
    VkBuffer dstBuffer,
    uint32_t regionCount,
    const VkBufferImageCopy* pRegions)
{
    VK_FROM_HANDLE(wrapper_command_buffer, base, commandBuffer);
VkImage srcImage__ = srcImage;
#ifdef NEEDS_UNWRAPPING_VkImage
    VK_FROM_HANDLE(wrapper_image, w_srcImage, srcImage);
    srcImage__ = w_srcImage->dispatch_handle;
#endif
VkImageLayout srcImageLayout__ = srcImageLayout;
#ifdef NEEDS_UNWRAPPING_VkImageLayout
#endif
VkBuffer dstBuffer__ = dstBuffer;
#ifdef NEEDS_UNWRAPPING_VkBuffer
#endif
uint32_t regionCount__ = regionCount;
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
const VkBufferImageCopy* pRegions__ = pRegions;
#ifdef NEEDS_UNWRAPPING_VkBufferImageCopy
    pRegions__ = alloca(regionCount * sizeof(VkBufferImageCopy));
    for (int i = 0; i < regionCount; i++)
        unwrap_VkBufferImageCopy(base->device, (VkBufferImageCopy *) &pRegions__[i], &pRegions[i]);
#endif
    base->device->dispatch_table.CmdCopyImageToBuffer(base->dispatch_handle, srcImage__, srcImageLayout__, dstBuffer__, regionCount__, pRegions__);

    return ;
}

static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_CmdCopyMemoryIndirectNV(
    VkCommandBuffer commandBuffer,
    VkDeviceAddress copyBufferAddress,
    uint32_t copyCount,
    uint32_t stride)
{
    VK_FROM_HANDLE(wrapper_command_buffer, base, commandBuffer);
VkDeviceAddress copyBufferAddress__ = copyBufferAddress;
#ifdef NEEDS_UNWRAPPING_VkDeviceAddress
#endif
uint32_t copyCount__ = copyCount;
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
uint32_t stride__ = stride;
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
    base->device->dispatch_table.CmdCopyMemoryIndirectNV(base->dispatch_handle, copyBufferAddress__, copyCount__, stride__);

    return ;
}

static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_CmdCopyMemoryToImageIndirectNV(
    VkCommandBuffer commandBuffer,
    VkDeviceAddress copyBufferAddress,
    uint32_t copyCount,
    uint32_t stride,
    VkImage dstImage,
    VkImageLayout dstImageLayout,
    const VkImageSubresourceLayers* pImageSubresources)
{
    VK_FROM_HANDLE(wrapper_command_buffer, base, commandBuffer);
VkDeviceAddress copyBufferAddress__ = copyBufferAddress;
#ifdef NEEDS_UNWRAPPING_VkDeviceAddress
#endif
uint32_t copyCount__ = copyCount;
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
uint32_t stride__ = stride;
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
VkImage dstImage__ = dstImage;
#ifdef NEEDS_UNWRAPPING_VkImage
    VK_FROM_HANDLE(wrapper_image, w_dstImage, dstImage);
    dstImage__ = w_dstImage->dispatch_handle;
#endif
VkImageLayout dstImageLayout__ = dstImageLayout;
#ifdef NEEDS_UNWRAPPING_VkImageLayout
#endif
const VkImageSubresourceLayers* pImageSubresources__ = pImageSubresources;
#ifdef NEEDS_UNWRAPPING_VkImageSubresourceLayers
    pImageSubresources__ = alloca(copyCount * sizeof(VkImageSubresourceLayers));
    for (int i = 0; i < copyCount; i++)
        unwrap_VkImageSubresourceLayers(base->device, (VkImageSubresourceLayers *) &pImageSubresources__[i], &pImageSubresources[i]);
#endif
    base->device->dispatch_table.CmdCopyMemoryToImageIndirectNV(base->dispatch_handle, copyBufferAddress__, copyCount__, stride__, dstImage__, dstImageLayout__, pImageSubresources__);

    return ;
}

static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_CmdUpdateBuffer(
    VkCommandBuffer commandBuffer,
    VkBuffer dstBuffer,
    VkDeviceSize dstOffset,
    VkDeviceSize dataSize,
    const void* pData)
{
    VK_FROM_HANDLE(wrapper_command_buffer, base, commandBuffer);
VkBuffer dstBuffer__ = dstBuffer;
#ifdef NEEDS_UNWRAPPING_VkBuffer
#endif
VkDeviceSize dstOffset__ = dstOffset;
#ifdef NEEDS_UNWRAPPING_VkDeviceSize
#endif
VkDeviceSize dataSize__ = dataSize;
#ifdef NEEDS_UNWRAPPING_VkDeviceSize
#endif
const void* pData__ = pData;
#ifdef NEEDS_UNWRAPPING_void
#endif
    base->device->dispatch_table.CmdUpdateBuffer(base->dispatch_handle, dstBuffer__, dstOffset__, dataSize__, pData__);

    return ;
}

static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_CmdFillBuffer(
    VkCommandBuffer commandBuffer,
    VkBuffer dstBuffer,
    VkDeviceSize dstOffset,
    VkDeviceSize size,
    uint32_t data)
{
    VK_FROM_HANDLE(wrapper_command_buffer, base, commandBuffer);
VkBuffer dstBuffer__ = dstBuffer;
#ifdef NEEDS_UNWRAPPING_VkBuffer
#endif
VkDeviceSize dstOffset__ = dstOffset;
#ifdef NEEDS_UNWRAPPING_VkDeviceSize
#endif
VkDeviceSize size__ = size;
#ifdef NEEDS_UNWRAPPING_VkDeviceSize
#endif
uint32_t data__ = data;
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
    base->device->dispatch_table.CmdFillBuffer(base->dispatch_handle, dstBuffer__, dstOffset__, size__, data__);

    return ;
}

static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_CmdClearColorImage(
    VkCommandBuffer commandBuffer,
    VkImage image,
    VkImageLayout imageLayout,
    const VkClearColorValue* pColor,
    uint32_t rangeCount,
    const VkImageSubresourceRange* pRanges)
{
    VK_FROM_HANDLE(wrapper_command_buffer, base, commandBuffer);
VkImage image__ = image;
#ifdef NEEDS_UNWRAPPING_VkImage
    VK_FROM_HANDLE(wrapper_image, w_image, image);
    image__ = w_image->dispatch_handle;
#endif
VkImageLayout imageLayout__ = imageLayout;
#ifdef NEEDS_UNWRAPPING_VkImageLayout
#endif
const VkClearColorValue* pColor__ = pColor;
#ifdef NEEDS_UNWRAPPING_VkClearColorValue
#endif
uint32_t rangeCount__ = rangeCount;
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
const VkImageSubresourceRange* pRanges__ = pRanges;
#ifdef NEEDS_UNWRAPPING_VkImageSubresourceRange
    pRanges__ = alloca(rangeCount * sizeof(VkImageSubresourceRange));
    for (int i = 0; i < rangeCount; i++)
        unwrap_VkImageSubresourceRange(base->device, (VkImageSubresourceRange *) &pRanges__[i], &pRanges[i]);
#endif
    base->device->dispatch_table.CmdClearColorImage(base->dispatch_handle, image__, imageLayout__, pColor__, rangeCount__, pRanges__);

    return ;
}

static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_CmdClearDepthStencilImage(
    VkCommandBuffer commandBuffer,
    VkImage image,
    VkImageLayout imageLayout,
    const VkClearDepthStencilValue* pDepthStencil,
    uint32_t rangeCount,
    const VkImageSubresourceRange* pRanges)
{
    VK_FROM_HANDLE(wrapper_command_buffer, base, commandBuffer);
VkImage image__ = image;
#ifdef NEEDS_UNWRAPPING_VkImage
    VK_FROM_HANDLE(wrapper_image, w_image, image);
    image__ = w_image->dispatch_handle;
#endif
VkImageLayout imageLayout__ = imageLayout;
#ifdef NEEDS_UNWRAPPING_VkImageLayout
#endif
const VkClearDepthStencilValue* pDepthStencil__ = pDepthStencil;
#ifdef NEEDS_UNWRAPPING_VkClearDepthStencilValue
    VkClearDepthStencilValue _w_pDepthStencil = { 0 };
    pDepthStencil__ = &_w_pDepthStencil;
    unwrap_VkClearDepthStencilValue(base->device, (VkClearDepthStencilValue *) pDepthStencil__, pDepthStencil);
#endif
uint32_t rangeCount__ = rangeCount;
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
const VkImageSubresourceRange* pRanges__ = pRanges;
#ifdef NEEDS_UNWRAPPING_VkImageSubresourceRange
    pRanges__ = alloca(rangeCount * sizeof(VkImageSubresourceRange));
    for (int i = 0; i < rangeCount; i++)
        unwrap_VkImageSubresourceRange(base->device, (VkImageSubresourceRange *) &pRanges__[i], &pRanges[i]);
#endif
    base->device->dispatch_table.CmdClearDepthStencilImage(base->dispatch_handle, image__, imageLayout__, pDepthStencil__, rangeCount__, pRanges__);

    return ;
}

static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_CmdClearAttachments(
    VkCommandBuffer commandBuffer,
    uint32_t attachmentCount,
    const VkClearAttachment* pAttachments,
    uint32_t rectCount,
    const VkClearRect* pRects)
{
    VK_FROM_HANDLE(wrapper_command_buffer, base, commandBuffer);
uint32_t attachmentCount__ = attachmentCount;
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
const VkClearAttachment* pAttachments__ = pAttachments;
#ifdef NEEDS_UNWRAPPING_VkClearAttachment
    pAttachments__ = alloca(attachmentCount * sizeof(VkClearAttachment));
    for (int i = 0; i < attachmentCount; i++)
        unwrap_VkClearAttachment(base->device, (VkClearAttachment *) &pAttachments__[i], &pAttachments[i]);
#endif
uint32_t rectCount__ = rectCount;
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
const VkClearRect* pRects__ = pRects;
#ifdef NEEDS_UNWRAPPING_VkClearRect
    pRects__ = alloca(rectCount * sizeof(VkClearRect));
    for (int i = 0; i < rectCount; i++)
        unwrap_VkClearRect(base->device, (VkClearRect *) &pRects__[i], &pRects[i]);
#endif
    base->device->dispatch_table.CmdClearAttachments(base->dispatch_handle, attachmentCount__, pAttachments__, rectCount__, pRects__);

    return ;
}

static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_CmdResolveImage(
    VkCommandBuffer commandBuffer,
    VkImage srcImage,
    VkImageLayout srcImageLayout,
    VkImage dstImage,
    VkImageLayout dstImageLayout,
    uint32_t regionCount,
    const VkImageResolve* pRegions)
{
    VK_FROM_HANDLE(wrapper_command_buffer, base, commandBuffer);
VkImage srcImage__ = srcImage;
#ifdef NEEDS_UNWRAPPING_VkImage
    VK_FROM_HANDLE(wrapper_image, w_srcImage, srcImage);
    srcImage__ = w_srcImage->dispatch_handle;
#endif
VkImageLayout srcImageLayout__ = srcImageLayout;
#ifdef NEEDS_UNWRAPPING_VkImageLayout
#endif
VkImage dstImage__ = dstImage;
#ifdef NEEDS_UNWRAPPING_VkImage
    VK_FROM_HANDLE(wrapper_image, w_dstImage, dstImage);
    dstImage__ = w_dstImage->dispatch_handle;
#endif
VkImageLayout dstImageLayout__ = dstImageLayout;
#ifdef NEEDS_UNWRAPPING_VkImageLayout
#endif
uint32_t regionCount__ = regionCount;
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
const VkImageResolve* pRegions__ = pRegions;
#ifdef NEEDS_UNWRAPPING_VkImageResolve
    pRegions__ = alloca(regionCount * sizeof(VkImageResolve));
    for (int i = 0; i < regionCount; i++)
        unwrap_VkImageResolve(base->device, (VkImageResolve *) &pRegions__[i], &pRegions[i]);
#endif
    base->device->dispatch_table.CmdResolveImage(base->dispatch_handle, srcImage__, srcImageLayout__, dstImage__, dstImageLayout__, regionCount__, pRegions__);

    return ;
}

static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_CmdSetEvent(
    VkCommandBuffer commandBuffer,
    VkEvent event,
    VkPipelineStageFlags stageMask)
{
    VK_FROM_HANDLE(wrapper_command_buffer, base, commandBuffer);
VkEvent event__ = event;
#ifdef NEEDS_UNWRAPPING_VkEvent
#endif
VkPipelineStageFlags stageMask__ = stageMask;
#ifdef NEEDS_UNWRAPPING_VkPipelineStageFlags
#endif
    base->device->dispatch_table.CmdSetEvent(base->dispatch_handle, event__, stageMask__);

    return ;
}

static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_CmdResetEvent(
    VkCommandBuffer commandBuffer,
    VkEvent event,
    VkPipelineStageFlags stageMask)
{
    VK_FROM_HANDLE(wrapper_command_buffer, base, commandBuffer);
VkEvent event__ = event;
#ifdef NEEDS_UNWRAPPING_VkEvent
#endif
VkPipelineStageFlags stageMask__ = stageMask;
#ifdef NEEDS_UNWRAPPING_VkPipelineStageFlags
#endif
    base->device->dispatch_table.CmdResetEvent(base->dispatch_handle, event__, stageMask__);

    return ;
}

static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_CmdWaitEvents(
    VkCommandBuffer commandBuffer,
    uint32_t eventCount,
    const VkEvent* pEvents,
    VkPipelineStageFlags srcStageMask,
    VkPipelineStageFlags dstStageMask,
    uint32_t memoryBarrierCount,
    const VkMemoryBarrier* pMemoryBarriers,
    uint32_t bufferMemoryBarrierCount,
    const VkBufferMemoryBarrier* pBufferMemoryBarriers,
    uint32_t imageMemoryBarrierCount,
    const VkImageMemoryBarrier* pImageMemoryBarriers)
{
    VK_FROM_HANDLE(wrapper_command_buffer, base, commandBuffer);
uint32_t eventCount__ = eventCount;
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
const VkEvent* pEvents__ = pEvents;
#ifdef NEEDS_UNWRAPPING_VkEvent
#endif
VkPipelineStageFlags srcStageMask__ = srcStageMask;
#ifdef NEEDS_UNWRAPPING_VkPipelineStageFlags
#endif
VkPipelineStageFlags dstStageMask__ = dstStageMask;
#ifdef NEEDS_UNWRAPPING_VkPipelineStageFlags
#endif
uint32_t memoryBarrierCount__ = memoryBarrierCount;
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
const VkMemoryBarrier* pMemoryBarriers__ = pMemoryBarriers;
#ifdef NEEDS_UNWRAPPING_VkMemoryBarrier
    pMemoryBarriers__ = alloca(memoryBarrierCount * sizeof(VkMemoryBarrier));
    for (int i = 0; i < memoryBarrierCount; i++)
        unwrap_VkMemoryBarrier(base->device, (VkMemoryBarrier *) &pMemoryBarriers__[i], &pMemoryBarriers[i]);
#endif
uint32_t bufferMemoryBarrierCount__ = bufferMemoryBarrierCount;
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
const VkBufferMemoryBarrier* pBufferMemoryBarriers__ = pBufferMemoryBarriers;
#ifdef NEEDS_UNWRAPPING_VkBufferMemoryBarrier
    pBufferMemoryBarriers__ = alloca(bufferMemoryBarrierCount * sizeof(VkBufferMemoryBarrier));
    for (int i = 0; i < bufferMemoryBarrierCount; i++)
        unwrap_VkBufferMemoryBarrier(base->device, (VkBufferMemoryBarrier *) &pBufferMemoryBarriers__[i], &pBufferMemoryBarriers[i]);
#endif
uint32_t imageMemoryBarrierCount__ = imageMemoryBarrierCount;
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
const VkImageMemoryBarrier* pImageMemoryBarriers__ = pImageMemoryBarriers;
#ifdef NEEDS_UNWRAPPING_VkImageMemoryBarrier
    pImageMemoryBarriers__ = alloca(imageMemoryBarrierCount * sizeof(VkImageMemoryBarrier));
    for (int i = 0; i < imageMemoryBarrierCount; i++)
        unwrap_VkImageMemoryBarrier(base->device, (VkImageMemoryBarrier *) &pImageMemoryBarriers__[i], &pImageMemoryBarriers[i]);
#endif
    base->device->dispatch_table.CmdWaitEvents(base->dispatch_handle, eventCount__, pEvents__, srcStageMask__, dstStageMask__, memoryBarrierCount__, pMemoryBarriers__, bufferMemoryBarrierCount__, pBufferMemoryBarriers__, imageMemoryBarrierCount__, pImageMemoryBarriers__);

    return ;
}

static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_CmdPipelineBarrier(
    VkCommandBuffer commandBuffer,
    VkPipelineStageFlags srcStageMask,
    VkPipelineStageFlags dstStageMask,
    VkDependencyFlags dependencyFlags,
    uint32_t memoryBarrierCount,
    const VkMemoryBarrier* pMemoryBarriers,
    uint32_t bufferMemoryBarrierCount,
    const VkBufferMemoryBarrier* pBufferMemoryBarriers,
    uint32_t imageMemoryBarrierCount,
    const VkImageMemoryBarrier* pImageMemoryBarriers)
{
    VK_FROM_HANDLE(wrapper_command_buffer, base, commandBuffer);
VkPipelineStageFlags srcStageMask__ = srcStageMask;
#ifdef NEEDS_UNWRAPPING_VkPipelineStageFlags
#endif
VkPipelineStageFlags dstStageMask__ = dstStageMask;
#ifdef NEEDS_UNWRAPPING_VkPipelineStageFlags
#endif
VkDependencyFlags dependencyFlags__ = dependencyFlags;
#ifdef NEEDS_UNWRAPPING_VkDependencyFlags
#endif
uint32_t memoryBarrierCount__ = memoryBarrierCount;
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
const VkMemoryBarrier* pMemoryBarriers__ = pMemoryBarriers;
#ifdef NEEDS_UNWRAPPING_VkMemoryBarrier
    pMemoryBarriers__ = alloca(memoryBarrierCount * sizeof(VkMemoryBarrier));
    for (int i = 0; i < memoryBarrierCount; i++)
        unwrap_VkMemoryBarrier(base->device, (VkMemoryBarrier *) &pMemoryBarriers__[i], &pMemoryBarriers[i]);
#endif
uint32_t bufferMemoryBarrierCount__ = bufferMemoryBarrierCount;
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
const VkBufferMemoryBarrier* pBufferMemoryBarriers__ = pBufferMemoryBarriers;
#ifdef NEEDS_UNWRAPPING_VkBufferMemoryBarrier
    pBufferMemoryBarriers__ = alloca(bufferMemoryBarrierCount * sizeof(VkBufferMemoryBarrier));
    for (int i = 0; i < bufferMemoryBarrierCount; i++)
        unwrap_VkBufferMemoryBarrier(base->device, (VkBufferMemoryBarrier *) &pBufferMemoryBarriers__[i], &pBufferMemoryBarriers[i]);
#endif
uint32_t imageMemoryBarrierCount__ = imageMemoryBarrierCount;
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
const VkImageMemoryBarrier* pImageMemoryBarriers__ = pImageMemoryBarriers;
#ifdef NEEDS_UNWRAPPING_VkImageMemoryBarrier
    pImageMemoryBarriers__ = alloca(imageMemoryBarrierCount * sizeof(VkImageMemoryBarrier));
    for (int i = 0; i < imageMemoryBarrierCount; i++)
        unwrap_VkImageMemoryBarrier(base->device, (VkImageMemoryBarrier *) &pImageMemoryBarriers__[i], &pImageMemoryBarriers[i]);
#endif
    base->device->dispatch_table.CmdPipelineBarrier(base->dispatch_handle, srcStageMask__, dstStageMask__, dependencyFlags__, memoryBarrierCount__, pMemoryBarriers__, bufferMemoryBarrierCount__, pBufferMemoryBarriers__, imageMemoryBarrierCount__, pImageMemoryBarriers__);

    return ;
}

static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_CmdBeginQuery(
    VkCommandBuffer commandBuffer,
    VkQueryPool queryPool,
    uint32_t query,
    VkQueryControlFlags flags)
{
    VK_FROM_HANDLE(wrapper_command_buffer, base, commandBuffer);
VkQueryPool queryPool__ = queryPool;
#ifdef NEEDS_UNWRAPPING_VkQueryPool
#endif
uint32_t query__ = query;
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
VkQueryControlFlags flags__ = flags;
#ifdef NEEDS_UNWRAPPING_VkQueryControlFlags
#endif
    base->device->dispatch_table.CmdBeginQuery(base->dispatch_handle, queryPool__, query__, flags__);

    return ;
}

static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_CmdEndQuery(
    VkCommandBuffer commandBuffer,
    VkQueryPool queryPool,
    uint32_t query)
{
    VK_FROM_HANDLE(wrapper_command_buffer, base, commandBuffer);
VkQueryPool queryPool__ = queryPool;
#ifdef NEEDS_UNWRAPPING_VkQueryPool
#endif
uint32_t query__ = query;
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
    base->device->dispatch_table.CmdEndQuery(base->dispatch_handle, queryPool__, query__);

    return ;
}

static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_CmdBeginConditionalRenderingEXT(
    VkCommandBuffer commandBuffer,
    const VkConditionalRenderingBeginInfoEXT* pConditionalRenderingBegin)
{
    VK_FROM_HANDLE(wrapper_command_buffer, base, commandBuffer);
const VkConditionalRenderingBeginInfoEXT* pConditionalRenderingBegin__ = pConditionalRenderingBegin;
#ifdef NEEDS_UNWRAPPING_VkConditionalRenderingBeginInfoEXT
    VkConditionalRenderingBeginInfoEXT _w_pConditionalRenderingBegin = { 0 };
    pConditionalRenderingBegin__ = &_w_pConditionalRenderingBegin;
    unwrap_VkConditionalRenderingBeginInfoEXT(base->device, (VkConditionalRenderingBeginInfoEXT *) pConditionalRenderingBegin__, pConditionalRenderingBegin);
#endif
    base->device->dispatch_table.CmdBeginConditionalRenderingEXT(base->dispatch_handle, pConditionalRenderingBegin__);

    return ;
}

static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_CmdEndConditionalRenderingEXT(
    VkCommandBuffer commandBuffer)
{
    VK_FROM_HANDLE(wrapper_command_buffer, base, commandBuffer);
    base->device->dispatch_table.CmdEndConditionalRenderingEXT(base->dispatch_handle);

    return ;
}

static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_CmdResetQueryPool(
    VkCommandBuffer commandBuffer,
    VkQueryPool queryPool,
    uint32_t firstQuery,
    uint32_t queryCount)
{
    VK_FROM_HANDLE(wrapper_command_buffer, base, commandBuffer);
VkQueryPool queryPool__ = queryPool;
#ifdef NEEDS_UNWRAPPING_VkQueryPool
#endif
uint32_t firstQuery__ = firstQuery;
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
uint32_t queryCount__ = queryCount;
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
    base->device->dispatch_table.CmdResetQueryPool(base->dispatch_handle, queryPool__, firstQuery__, queryCount__);

    return ;
}

static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_CmdWriteTimestamp(
    VkCommandBuffer commandBuffer,
    VkPipelineStageFlagBits pipelineStage,
    VkQueryPool queryPool,
    uint32_t query)
{
    VK_FROM_HANDLE(wrapper_command_buffer, base, commandBuffer);
VkPipelineStageFlagBits pipelineStage__ = pipelineStage;
#ifdef NEEDS_UNWRAPPING_VkPipelineStageFlagBits
#endif
VkQueryPool queryPool__ = queryPool;
#ifdef NEEDS_UNWRAPPING_VkQueryPool
#endif
uint32_t query__ = query;
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
    base->device->dispatch_table.CmdWriteTimestamp(base->dispatch_handle, pipelineStage__, queryPool__, query__);

    return ;
}

static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_CmdCopyQueryPoolResults(
    VkCommandBuffer commandBuffer,
    VkQueryPool queryPool,
    uint32_t firstQuery,
    uint32_t queryCount,
    VkBuffer dstBuffer,
    VkDeviceSize dstOffset,
    VkDeviceSize stride,
    VkQueryResultFlags flags)
{
    VK_FROM_HANDLE(wrapper_command_buffer, base, commandBuffer);
VkQueryPool queryPool__ = queryPool;
#ifdef NEEDS_UNWRAPPING_VkQueryPool
#endif
uint32_t firstQuery__ = firstQuery;
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
uint32_t queryCount__ = queryCount;
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
VkBuffer dstBuffer__ = dstBuffer;
#ifdef NEEDS_UNWRAPPING_VkBuffer
#endif
VkDeviceSize dstOffset__ = dstOffset;
#ifdef NEEDS_UNWRAPPING_VkDeviceSize
#endif
VkDeviceSize stride__ = stride;
#ifdef NEEDS_UNWRAPPING_VkDeviceSize
#endif
VkQueryResultFlags flags__ = flags;
#ifdef NEEDS_UNWRAPPING_VkQueryResultFlags
#endif
    base->device->dispatch_table.CmdCopyQueryPoolResults(base->dispatch_handle, queryPool__, firstQuery__, queryCount__, dstBuffer__, dstOffset__, stride__, flags__);

    return ;
}

static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_CmdPushConstants(
    VkCommandBuffer commandBuffer,
    VkPipelineLayout layout,
    VkShaderStageFlags stageFlags,
    uint32_t offset,
    uint32_t size,
    const void* pValues)
{
    VK_FROM_HANDLE(wrapper_command_buffer, base, commandBuffer);
VkPipelineLayout layout__ = layout;
#ifdef NEEDS_UNWRAPPING_VkPipelineLayout
#endif
VkShaderStageFlags stageFlags__ = stageFlags;
#ifdef NEEDS_UNWRAPPING_VkShaderStageFlags
#endif
uint32_t offset__ = offset;
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
uint32_t size__ = size;
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
const void* pValues__ = pValues;
#ifdef NEEDS_UNWRAPPING_void
#endif
    base->device->dispatch_table.CmdPushConstants(base->dispatch_handle, layout__, stageFlags__, offset__, size__, pValues__);

    return ;
}

static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_CmdBeginRenderPass(
    VkCommandBuffer commandBuffer,
    const VkRenderPassBeginInfo* pRenderPassBegin,
    VkSubpassContents contents)
{
    VK_FROM_HANDLE(wrapper_command_buffer, base, commandBuffer);
const VkRenderPassBeginInfo* pRenderPassBegin__ = pRenderPassBegin;
#ifdef NEEDS_UNWRAPPING_VkRenderPassBeginInfo
    VkRenderPassBeginInfo _w_pRenderPassBegin = { 0 };
    pRenderPassBegin__ = &_w_pRenderPassBegin;
    unwrap_VkRenderPassBeginInfo(base->device, (VkRenderPassBeginInfo *) pRenderPassBegin__, pRenderPassBegin);
#endif
VkSubpassContents contents__ = contents;
#ifdef NEEDS_UNWRAPPING_VkSubpassContents
#endif
    base->device->dispatch_table.CmdBeginRenderPass(base->dispatch_handle, pRenderPassBegin__, contents__);

    return ;
}

static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_CmdNextSubpass(
    VkCommandBuffer commandBuffer,
    VkSubpassContents contents)
{
    VK_FROM_HANDLE(wrapper_command_buffer, base, commandBuffer);
VkSubpassContents contents__ = contents;
#ifdef NEEDS_UNWRAPPING_VkSubpassContents
#endif
    base->device->dispatch_table.CmdNextSubpass(base->dispatch_handle, contents__);

    return ;
}

static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_CmdEndRenderPass(
    VkCommandBuffer commandBuffer)
{
    VK_FROM_HANDLE(wrapper_command_buffer, base, commandBuffer);
    base->device->dispatch_table.CmdEndRenderPass(base->dispatch_handle);

    return ;
}

static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_CmdExecuteCommands(
    VkCommandBuffer commandBuffer,
    uint32_t commandBufferCount,
    const VkCommandBuffer* pCommandBuffers)
{
    VK_FROM_HANDLE(wrapper_command_buffer, base, commandBuffer);
    base->device->dispatch_table.CmdExecuteCommands(base->dispatch_handle, commandBufferCount, pCommandBuffers);

    return ;
}
                                
static VKAPI_ATTR VkResult VKAPI_CALL
wrapper_tramp_CreateSharedSwapchainsKHR(
    VkDevice device,
    uint32_t swapchainCount,
    const VkSwapchainCreateInfoKHR* pCreateInfos,
    const VkAllocationCallbacks* pAllocator,
    VkSwapchainKHR* pSwapchains)
{
    VK_FROM_HANDLE(wrapper_device, base, device);
uint32_t swapchainCount__ = swapchainCount;
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
const VkSwapchainCreateInfoKHR* pCreateInfos__ = pCreateInfos;
#ifdef NEEDS_UNWRAPPING_VkSwapchainCreateInfoKHR
    pCreateInfos__ = alloca(swapchainCount * sizeof(VkSwapchainCreateInfoKHR));
    for (int i = 0; i < swapchainCount; i++)
        unwrap_VkSwapchainCreateInfoKHR(base, (VkSwapchainCreateInfoKHR *) &pCreateInfos__[i], &pCreateInfos[i]);
#endif
const VkAllocationCallbacks* pAllocator__ = pAllocator;
#ifdef NEEDS_UNWRAPPING_VkAllocationCallbacks
    VkAllocationCallbacks _w_pAllocator = { 0 };
    pAllocator__ = &_w_pAllocator;
    unwrap_VkAllocationCallbacks(base, (VkAllocationCallbacks *) pAllocator__, pAllocator);
#endif
    VkResult result = base->dispatch_table.CreateSharedSwapchainsKHR(base->dispatch_handle, swapchainCount__, pCreateInfos__, pAllocator__, pSwapchains);
#ifdef NEEDS_UNWRAPPING_VkSwapchainKHR
#endif
    return result;
}
                    
static VKAPI_ATTR VkResult VKAPI_CALL
wrapper_tramp_CreateSwapchainKHR(
    VkDevice device,
    const VkSwapchainCreateInfoKHR* pCreateInfo,
    const VkAllocationCallbacks* pAllocator,
    VkSwapchainKHR* pSwapchain)
{
    VK_FROM_HANDLE(wrapper_device, base, device);
const VkSwapchainCreateInfoKHR* pCreateInfo__ = pCreateInfo;
#ifdef NEEDS_UNWRAPPING_VkSwapchainCreateInfoKHR
    VkSwapchainCreateInfoKHR _w_pCreateInfo = { 0 };
    pCreateInfo__ = &_w_pCreateInfo;
    unwrap_VkSwapchainCreateInfoKHR(base, (VkSwapchainCreateInfoKHR *) pCreateInfo__, pCreateInfo);
#endif
const VkAllocationCallbacks* pAllocator__ = pAllocator;
#ifdef NEEDS_UNWRAPPING_VkAllocationCallbacks
    VkAllocationCallbacks _w_pAllocator = { 0 };
    pAllocator__ = &_w_pAllocator;
    unwrap_VkAllocationCallbacks(base, (VkAllocationCallbacks *) pAllocator__, pAllocator);
#endif
    VkResult result = base->dispatch_table.CreateSwapchainKHR(base->dispatch_handle, pCreateInfo__, pAllocator__, pSwapchain);
#ifdef NEEDS_UNWRAPPING_VkSwapchainKHR
#endif
    return result;
}

static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_DestroySwapchainKHR(
    VkDevice device,
    VkSwapchainKHR swapchain,
    const VkAllocationCallbacks* pAllocator)
{
    VK_FROM_HANDLE(wrapper_device, base, device);
VkSwapchainKHR swapchain__ = swapchain;
#ifdef NEEDS_UNWRAPPING_VkSwapchainKHR
#endif
const VkAllocationCallbacks* pAllocator__ = pAllocator;
#ifdef NEEDS_UNWRAPPING_VkAllocationCallbacks
    VkAllocationCallbacks _w_pAllocator = { 0 };
    pAllocator__ = &_w_pAllocator;
    unwrap_VkAllocationCallbacks(base, (VkAllocationCallbacks *) pAllocator__, pAllocator);
#endif
    base->dispatch_table.DestroySwapchainKHR(base->dispatch_handle, swapchain__, pAllocator__);

    return ;
}

static VKAPI_ATTR VkResult VKAPI_CALL
wrapper_tramp_GetSwapchainImagesKHR(
    VkDevice device,
    VkSwapchainKHR swapchain,
    uint32_t* pSwapchainImageCount,
    VkImage* pSwapchainImages)
{
    VK_FROM_HANDLE(wrapper_device, base, device);
VkSwapchainKHR swapchain__ = swapchain;
#ifdef NEEDS_UNWRAPPING_VkSwapchainKHR
#endif
    VkResult result = base->dispatch_table.GetSwapchainImagesKHR(base->dispatch_handle, swapchain__, pSwapchainImageCount, pSwapchainImages);
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
#ifdef NEEDS_UNWRAPPING_VkImage
#warning TODO: Repack wrapped+array+out GetSwapchainImagesKHR EntrypointParam(type='VkImage', name='pSwapchainImages', decl='VkImage* pSwapchainImages', len='pSwapchainImageCount', elem=<Element 'param' at 0x736889ac86d0>, is_const=False, num_pointers=1)
#endif
    return result;
}

static VKAPI_ATTR VkResult VKAPI_CALL
wrapper_tramp_AcquireNextImageKHR(
    VkDevice device,
    VkSwapchainKHR swapchain,
    uint64_t timeout,
    VkSemaphore semaphore,
    VkFence fence,
    uint32_t* pImageIndex)
{
    VK_FROM_HANDLE(wrapper_device, base, device);
VkSwapchainKHR swapchain__ = swapchain;
#ifdef NEEDS_UNWRAPPING_VkSwapchainKHR
#endif
uint64_t timeout__ = timeout;
#ifdef NEEDS_UNWRAPPING_uint64_t
#endif
VkSemaphore semaphore__ = semaphore;
#ifdef NEEDS_UNWRAPPING_VkSemaphore
#endif
VkFence fence__ = fence;
#ifdef NEEDS_UNWRAPPING_VkFence
#endif
    VkResult result = base->dispatch_table.AcquireNextImageKHR(base->dispatch_handle, swapchain__, timeout__, semaphore__, fence__, pImageIndex);
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
    return result;
}

static VKAPI_ATTR VkResult VKAPI_CALL
wrapper_tramp_QueuePresentKHR(
    VkQueue queue,
    const VkPresentInfoKHR* pPresentInfo)
{
    VK_FROM_HANDLE(wrapper_queue, base, queue);
const VkPresentInfoKHR* pPresentInfo__ = pPresentInfo;
#ifdef NEEDS_UNWRAPPING_VkPresentInfoKHR
    VkPresentInfoKHR _w_pPresentInfo = { 0 };
    pPresentInfo__ = &_w_pPresentInfo;
    unwrap_VkPresentInfoKHR(base->device, (VkPresentInfoKHR *) pPresentInfo__, pPresentInfo);
#endif
    VkResult result = base->device->dispatch_table.QueuePresentKHR(base->dispatch_handle, pPresentInfo__);

    return result;
}
                                                                        
static VKAPI_ATTR VkResult VKAPI_CALL
wrapper_tramp_DebugMarkerSetObjectNameEXT(
    VkDevice device,
    const VkDebugMarkerObjectNameInfoEXT* pNameInfo)
{
    VK_FROM_HANDLE(wrapper_device, base, device);
const VkDebugMarkerObjectNameInfoEXT* pNameInfo__ = pNameInfo;
#ifdef NEEDS_UNWRAPPING_VkDebugMarkerObjectNameInfoEXT
    VkDebugMarkerObjectNameInfoEXT _w_pNameInfo = { 0 };
    pNameInfo__ = &_w_pNameInfo;
    unwrap_VkDebugMarkerObjectNameInfoEXT(base, (VkDebugMarkerObjectNameInfoEXT *) pNameInfo__, pNameInfo);
#endif
    VkResult result = base->dispatch_table.DebugMarkerSetObjectNameEXT(base->dispatch_handle, pNameInfo__);

    return result;
}

static VKAPI_ATTR VkResult VKAPI_CALL
wrapper_tramp_DebugMarkerSetObjectTagEXT(
    VkDevice device,
    const VkDebugMarkerObjectTagInfoEXT* pTagInfo)
{
    VK_FROM_HANDLE(wrapper_device, base, device);
const VkDebugMarkerObjectTagInfoEXT* pTagInfo__ = pTagInfo;
#ifdef NEEDS_UNWRAPPING_VkDebugMarkerObjectTagInfoEXT
    VkDebugMarkerObjectTagInfoEXT _w_pTagInfo = { 0 };
    pTagInfo__ = &_w_pTagInfo;
    unwrap_VkDebugMarkerObjectTagInfoEXT(base, (VkDebugMarkerObjectTagInfoEXT *) pTagInfo__, pTagInfo);
#endif
    VkResult result = base->dispatch_table.DebugMarkerSetObjectTagEXT(base->dispatch_handle, pTagInfo__);

    return result;
}

static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_CmdDebugMarkerBeginEXT(
    VkCommandBuffer commandBuffer,
    const VkDebugMarkerMarkerInfoEXT* pMarkerInfo)
{
    VK_FROM_HANDLE(wrapper_command_buffer, base, commandBuffer);
const VkDebugMarkerMarkerInfoEXT* pMarkerInfo__ = pMarkerInfo;
#ifdef NEEDS_UNWRAPPING_VkDebugMarkerMarkerInfoEXT
    VkDebugMarkerMarkerInfoEXT _w_pMarkerInfo = { 0 };
    pMarkerInfo__ = &_w_pMarkerInfo;
    unwrap_VkDebugMarkerMarkerInfoEXT(base->device, (VkDebugMarkerMarkerInfoEXT *) pMarkerInfo__, pMarkerInfo);
#endif
    base->device->dispatch_table.CmdDebugMarkerBeginEXT(base->dispatch_handle, pMarkerInfo__);

    return ;
}

static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_CmdDebugMarkerEndEXT(
    VkCommandBuffer commandBuffer)
{
    VK_FROM_HANDLE(wrapper_command_buffer, base, commandBuffer);
    base->device->dispatch_table.CmdDebugMarkerEndEXT(base->dispatch_handle);

    return ;
}

static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_CmdDebugMarkerInsertEXT(
    VkCommandBuffer commandBuffer,
    const VkDebugMarkerMarkerInfoEXT* pMarkerInfo)
{
    VK_FROM_HANDLE(wrapper_command_buffer, base, commandBuffer);
const VkDebugMarkerMarkerInfoEXT* pMarkerInfo__ = pMarkerInfo;
#ifdef NEEDS_UNWRAPPING_VkDebugMarkerMarkerInfoEXT
    VkDebugMarkerMarkerInfoEXT _w_pMarkerInfo = { 0 };
    pMarkerInfo__ = &_w_pMarkerInfo;
    unwrap_VkDebugMarkerMarkerInfoEXT(base->device, (VkDebugMarkerMarkerInfoEXT *) pMarkerInfo__, pMarkerInfo);
#endif
    base->device->dispatch_table.CmdDebugMarkerInsertEXT(base->dispatch_handle, pMarkerInfo__);

    return ;
}
    #ifdef VK_USE_PLATFORM_WIN32_KHR

static VKAPI_ATTR VkResult VKAPI_CALL
wrapper_tramp_GetMemoryWin32HandleNV(
    VkDevice device,
    VkDeviceMemory memory,
    VkExternalMemoryHandleTypeFlagsNV handleType,
    HANDLE* pHandle)
{
    VK_FROM_HANDLE(wrapper_device, base, device);
VkDeviceMemory memory__ = memory;
#ifdef NEEDS_UNWRAPPING_VkDeviceMemory
#endif
VkExternalMemoryHandleTypeFlagsNV handleType__ = handleType;
#ifdef NEEDS_UNWRAPPING_VkExternalMemoryHandleTypeFlagsNV
#endif
    VkResult result = base->dispatch_table.GetMemoryWin32HandleNV(base->dispatch_handle, memory__, handleType__, pHandle);
#ifdef NEEDS_UNWRAPPING_HANDLE
#endif
    return result;
}
#endif

static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_CmdExecuteGeneratedCommandsNV(
    VkCommandBuffer commandBuffer,
    VkBool32 isPreprocessed,
    const VkGeneratedCommandsInfoNV* pGeneratedCommandsInfo)
{
    VK_FROM_HANDLE(wrapper_command_buffer, base, commandBuffer);
VkBool32 isPreprocessed__ = isPreprocessed;
#ifdef NEEDS_UNWRAPPING_VkBool32
#endif
const VkGeneratedCommandsInfoNV* pGeneratedCommandsInfo__ = pGeneratedCommandsInfo;
#ifdef NEEDS_UNWRAPPING_VkGeneratedCommandsInfoNV
    VkGeneratedCommandsInfoNV _w_pGeneratedCommandsInfo = { 0 };
    pGeneratedCommandsInfo__ = &_w_pGeneratedCommandsInfo;
    unwrap_VkGeneratedCommandsInfoNV(base->device, (VkGeneratedCommandsInfoNV *) pGeneratedCommandsInfo__, pGeneratedCommandsInfo);
#endif
    base->device->dispatch_table.CmdExecuteGeneratedCommandsNV(base->dispatch_handle, isPreprocessed__, pGeneratedCommandsInfo__);

    return ;
}

static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_CmdPreprocessGeneratedCommandsNV(
    VkCommandBuffer commandBuffer,
    const VkGeneratedCommandsInfoNV* pGeneratedCommandsInfo)
{
    VK_FROM_HANDLE(wrapper_command_buffer, base, commandBuffer);
const VkGeneratedCommandsInfoNV* pGeneratedCommandsInfo__ = pGeneratedCommandsInfo;
#ifdef NEEDS_UNWRAPPING_VkGeneratedCommandsInfoNV
    VkGeneratedCommandsInfoNV _w_pGeneratedCommandsInfo = { 0 };
    pGeneratedCommandsInfo__ = &_w_pGeneratedCommandsInfo;
    unwrap_VkGeneratedCommandsInfoNV(base->device, (VkGeneratedCommandsInfoNV *) pGeneratedCommandsInfo__, pGeneratedCommandsInfo);
#endif
    base->device->dispatch_table.CmdPreprocessGeneratedCommandsNV(base->dispatch_handle, pGeneratedCommandsInfo__);

    return ;
}

static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_CmdBindPipelineShaderGroupNV(
    VkCommandBuffer commandBuffer,
    VkPipelineBindPoint pipelineBindPoint,
    VkPipeline pipeline,
    uint32_t groupIndex)
{
    VK_FROM_HANDLE(wrapper_command_buffer, base, commandBuffer);
VkPipelineBindPoint pipelineBindPoint__ = pipelineBindPoint;
#ifdef NEEDS_UNWRAPPING_VkPipelineBindPoint
#endif
VkPipeline pipeline__ = pipeline;
#ifdef NEEDS_UNWRAPPING_VkPipeline
#endif
uint32_t groupIndex__ = groupIndex;
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
    base->device->dispatch_table.CmdBindPipelineShaderGroupNV(base->dispatch_handle, pipelineBindPoint__, pipeline__, groupIndex__);

    return ;
}

static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_GetGeneratedCommandsMemoryRequirementsNV(
    VkDevice device,
    const VkGeneratedCommandsMemoryRequirementsInfoNV* pInfo,
    VkMemoryRequirements2* pMemoryRequirements)
{
    VK_FROM_HANDLE(wrapper_device, base, device);
const VkGeneratedCommandsMemoryRequirementsInfoNV* pInfo__ = pInfo;
#ifdef NEEDS_UNWRAPPING_VkGeneratedCommandsMemoryRequirementsInfoNV
    VkGeneratedCommandsMemoryRequirementsInfoNV _w_pInfo = { 0 };
    pInfo__ = &_w_pInfo;
    unwrap_VkGeneratedCommandsMemoryRequirementsInfoNV(base, (VkGeneratedCommandsMemoryRequirementsInfoNV *) pInfo__, pInfo);
#endif
    base->dispatch_table.GetGeneratedCommandsMemoryRequirementsNV(base->dispatch_handle, pInfo__, pMemoryRequirements);
#ifdef NEEDS_UNWRAPPING_VkMemoryRequirements2
#warning TODO: Repack struct+ptr+out GetGeneratedCommandsMemoryRequirementsNV EntrypointParam(type='VkMemoryRequirements2', name='pMemoryRequirements', decl='VkMemoryRequirements2* pMemoryRequirements', len=None, elem=<Element 'param' at 0x736889ae6250>, is_const=False, num_pointers=1)
#endif
    return ;
}

static VKAPI_ATTR VkResult VKAPI_CALL
wrapper_tramp_CreateIndirectCommandsLayoutNV(
    VkDevice device,
    const VkIndirectCommandsLayoutCreateInfoNV* pCreateInfo,
    const VkAllocationCallbacks* pAllocator,
    VkIndirectCommandsLayoutNV* pIndirectCommandsLayout)
{
    VK_FROM_HANDLE(wrapper_device, base, device);
const VkIndirectCommandsLayoutCreateInfoNV* pCreateInfo__ = pCreateInfo;
#ifdef NEEDS_UNWRAPPING_VkIndirectCommandsLayoutCreateInfoNV
    VkIndirectCommandsLayoutCreateInfoNV _w_pCreateInfo = { 0 };
    pCreateInfo__ = &_w_pCreateInfo;
    unwrap_VkIndirectCommandsLayoutCreateInfoNV(base, (VkIndirectCommandsLayoutCreateInfoNV *) pCreateInfo__, pCreateInfo);
#endif
const VkAllocationCallbacks* pAllocator__ = pAllocator;
#ifdef NEEDS_UNWRAPPING_VkAllocationCallbacks
    VkAllocationCallbacks _w_pAllocator = { 0 };
    pAllocator__ = &_w_pAllocator;
    unwrap_VkAllocationCallbacks(base, (VkAllocationCallbacks *) pAllocator__, pAllocator);
#endif
    VkResult result = base->dispatch_table.CreateIndirectCommandsLayoutNV(base->dispatch_handle, pCreateInfo__, pAllocator__, pIndirectCommandsLayout);
#ifdef NEEDS_UNWRAPPING_VkIndirectCommandsLayoutNV
#endif
    return result;
}

static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_DestroyIndirectCommandsLayoutNV(
    VkDevice device,
    VkIndirectCommandsLayoutNV indirectCommandsLayout,
    const VkAllocationCallbacks* pAllocator)
{
    VK_FROM_HANDLE(wrapper_device, base, device);
VkIndirectCommandsLayoutNV indirectCommandsLayout__ = indirectCommandsLayout;
#ifdef NEEDS_UNWRAPPING_VkIndirectCommandsLayoutNV
#endif
const VkAllocationCallbacks* pAllocator__ = pAllocator;
#ifdef NEEDS_UNWRAPPING_VkAllocationCallbacks
    VkAllocationCallbacks _w_pAllocator = { 0 };
    pAllocator__ = &_w_pAllocator;
    unwrap_VkAllocationCallbacks(base, (VkAllocationCallbacks *) pAllocator__, pAllocator);
#endif
    base->dispatch_table.DestroyIndirectCommandsLayoutNV(base->dispatch_handle, indirectCommandsLayout__, pAllocator__);

    return ;
}
                                                        
static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_CmdPushDescriptorSetKHR(
    VkCommandBuffer commandBuffer,
    VkPipelineBindPoint pipelineBindPoint,
    VkPipelineLayout layout,
    uint32_t set,
    uint32_t descriptorWriteCount,
    const VkWriteDescriptorSet* pDescriptorWrites)
{
    VK_FROM_HANDLE(wrapper_command_buffer, base, commandBuffer);
VkPipelineBindPoint pipelineBindPoint__ = pipelineBindPoint;
#ifdef NEEDS_UNWRAPPING_VkPipelineBindPoint
#endif
VkPipelineLayout layout__ = layout;
#ifdef NEEDS_UNWRAPPING_VkPipelineLayout
#endif
uint32_t set__ = set;
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
uint32_t descriptorWriteCount__ = descriptorWriteCount;
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
const VkWriteDescriptorSet* pDescriptorWrites__ = pDescriptorWrites;
#ifdef NEEDS_UNWRAPPING_VkWriteDescriptorSet
    pDescriptorWrites__ = alloca(descriptorWriteCount * sizeof(VkWriteDescriptorSet));
    for (int i = 0; i < descriptorWriteCount; i++)
        unwrap_VkWriteDescriptorSet(base->device, (VkWriteDescriptorSet *) &pDescriptorWrites__[i], &pDescriptorWrites[i]);
#endif
    base->device->dispatch_table.CmdPushDescriptorSetKHR(base->dispatch_handle, pipelineBindPoint__, layout__, set__, descriptorWriteCount__, pDescriptorWrites__);

    return ;
}

static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_TrimCommandPool(
    VkDevice device,
    VkCommandPool commandPool,
    VkCommandPoolTrimFlags flags)
{
    VK_FROM_HANDLE(wrapper_device, base, device);
VkCommandPool commandPool__ = commandPool;
#ifdef NEEDS_UNWRAPPING_VkCommandPool
#endif
VkCommandPoolTrimFlags flags__ = flags;
#ifdef NEEDS_UNWRAPPING_VkCommandPoolTrimFlags
#endif
    base->dispatch_table.TrimCommandPool(base->dispatch_handle, commandPool__, flags__);

    return ;
}
            #ifdef VK_USE_PLATFORM_WIN32_KHR

static VKAPI_ATTR VkResult VKAPI_CALL
wrapper_tramp_GetMemoryWin32HandleKHR(
    VkDevice device,
    const VkMemoryGetWin32HandleInfoKHR* pGetWin32HandleInfo,
    HANDLE* pHandle)
{
    VK_FROM_HANDLE(wrapper_device, base, device);
const VkMemoryGetWin32HandleInfoKHR* pGetWin32HandleInfo__ = pGetWin32HandleInfo;
#ifdef NEEDS_UNWRAPPING_VkMemoryGetWin32HandleInfoKHR
    VkMemoryGetWin32HandleInfoKHR _w_pGetWin32HandleInfo = { 0 };
    pGetWin32HandleInfo__ = &_w_pGetWin32HandleInfo;
    unwrap_VkMemoryGetWin32HandleInfoKHR(base, (VkMemoryGetWin32HandleInfoKHR *) pGetWin32HandleInfo__, pGetWin32HandleInfo);
#endif
    VkResult result = base->dispatch_table.GetMemoryWin32HandleKHR(base->dispatch_handle, pGetWin32HandleInfo__, pHandle);
#ifdef NEEDS_UNWRAPPING_HANDLE
#endif
    return result;
}
#endif
#ifdef VK_USE_PLATFORM_WIN32_KHR

static VKAPI_ATTR VkResult VKAPI_CALL
wrapper_tramp_GetMemoryWin32HandlePropertiesKHR(
    VkDevice device,
    VkExternalMemoryHandleTypeFlagBits handleType,
    HANDLE handle,
    VkMemoryWin32HandlePropertiesKHR* pMemoryWin32HandleProperties)
{
    VK_FROM_HANDLE(wrapper_device, base, device);
VkExternalMemoryHandleTypeFlagBits handleType__ = handleType;
#ifdef NEEDS_UNWRAPPING_VkExternalMemoryHandleTypeFlagBits
#endif
HANDLE handle__ = handle;
#ifdef NEEDS_UNWRAPPING_HANDLE
#endif
    VkResult result = base->dispatch_table.GetMemoryWin32HandlePropertiesKHR(base->dispatch_handle, handleType__, handle__, pMemoryWin32HandleProperties);
#ifdef NEEDS_UNWRAPPING_VkMemoryWin32HandlePropertiesKHR
#warning TODO: Repack struct+ptr+out GetMemoryWin32HandlePropertiesKHR EntrypointParam(type='VkMemoryWin32HandlePropertiesKHR', name='pMemoryWin32HandleProperties', decl='VkMemoryWin32HandlePropertiesKHR* pMemoryWin32HandleProperties', len=None, elem=<Element 'param' at 0x736889af2c00>, is_const=False, num_pointers=1)
#endif
    return result;
}
#endif

static VKAPI_ATTR VkResult VKAPI_CALL
wrapper_tramp_GetMemoryFdKHR(
    VkDevice device,
    const VkMemoryGetFdInfoKHR* pGetFdInfo,
    int* pFd)
{
    VK_FROM_HANDLE(wrapper_device, base, device);
const VkMemoryGetFdInfoKHR* pGetFdInfo__ = pGetFdInfo;
#ifdef NEEDS_UNWRAPPING_VkMemoryGetFdInfoKHR
    VkMemoryGetFdInfoKHR _w_pGetFdInfo = { 0 };
    pGetFdInfo__ = &_w_pGetFdInfo;
    unwrap_VkMemoryGetFdInfoKHR(base, (VkMemoryGetFdInfoKHR *) pGetFdInfo__, pGetFdInfo);
#endif
    VkResult result = base->dispatch_table.GetMemoryFdKHR(base->dispatch_handle, pGetFdInfo__, pFd);
#ifdef NEEDS_UNWRAPPING_int
#endif
    return result;
}

static VKAPI_ATTR VkResult VKAPI_CALL
wrapper_tramp_GetMemoryFdPropertiesKHR(
    VkDevice device,
    VkExternalMemoryHandleTypeFlagBits handleType,
    int fd,
    VkMemoryFdPropertiesKHR* pMemoryFdProperties)
{
    VK_FROM_HANDLE(wrapper_device, base, device);
VkExternalMemoryHandleTypeFlagBits handleType__ = handleType;
#ifdef NEEDS_UNWRAPPING_VkExternalMemoryHandleTypeFlagBits
#endif
int fd__ = fd;
#ifdef NEEDS_UNWRAPPING_int
#endif
    VkResult result = base->dispatch_table.GetMemoryFdPropertiesKHR(base->dispatch_handle, handleType__, fd__, pMemoryFdProperties);
#ifdef NEEDS_UNWRAPPING_VkMemoryFdPropertiesKHR
#warning TODO: Repack struct+ptr+out GetMemoryFdPropertiesKHR EntrypointParam(type='VkMemoryFdPropertiesKHR', name='pMemoryFdProperties', decl='VkMemoryFdPropertiesKHR* pMemoryFdProperties', len=None, elem=<Element 'param' at 0x736889af3650>, is_const=False, num_pointers=1)
#endif
    return result;
}
#ifdef VK_USE_PLATFORM_FUCHSIA

static VKAPI_ATTR VkResult VKAPI_CALL
wrapper_tramp_GetMemoryZirconHandleFUCHSIA(
    VkDevice device,
    const VkMemoryGetZirconHandleInfoFUCHSIA* pGetZirconHandleInfo,
    zx_handle_t* pZirconHandle)
{
    VK_FROM_HANDLE(wrapper_device, base, device);
const VkMemoryGetZirconHandleInfoFUCHSIA* pGetZirconHandleInfo__ = pGetZirconHandleInfo;
#ifdef NEEDS_UNWRAPPING_VkMemoryGetZirconHandleInfoFUCHSIA
    VkMemoryGetZirconHandleInfoFUCHSIA _w_pGetZirconHandleInfo = { 0 };
    pGetZirconHandleInfo__ = &_w_pGetZirconHandleInfo;
    unwrap_VkMemoryGetZirconHandleInfoFUCHSIA(base, (VkMemoryGetZirconHandleInfoFUCHSIA *) pGetZirconHandleInfo__, pGetZirconHandleInfo);
#endif
    VkResult result = base->dispatch_table.GetMemoryZirconHandleFUCHSIA(base->dispatch_handle, pGetZirconHandleInfo__, pZirconHandle);
#ifdef NEEDS_UNWRAPPING_zx_handle_t
#endif
    return result;
}
#endif
#ifdef VK_USE_PLATFORM_FUCHSIA

static VKAPI_ATTR VkResult VKAPI_CALL
wrapper_tramp_GetMemoryZirconHandlePropertiesFUCHSIA(
    VkDevice device,
    VkExternalMemoryHandleTypeFlagBits handleType,
    zx_handle_t zirconHandle,
    VkMemoryZirconHandlePropertiesFUCHSIA* pMemoryZirconHandleProperties)
{
    VK_FROM_HANDLE(wrapper_device, base, device);
VkExternalMemoryHandleTypeFlagBits handleType__ = handleType;
#ifdef NEEDS_UNWRAPPING_VkExternalMemoryHandleTypeFlagBits
#endif
zx_handle_t zirconHandle__ = zirconHandle;
#ifdef NEEDS_UNWRAPPING_zx_handle_t
#endif
    VkResult result = base->dispatch_table.GetMemoryZirconHandlePropertiesFUCHSIA(base->dispatch_handle, handleType__, zirconHandle__, pMemoryZirconHandleProperties);
#ifdef NEEDS_UNWRAPPING_VkMemoryZirconHandlePropertiesFUCHSIA
#warning TODO: Repack struct+ptr+out GetMemoryZirconHandlePropertiesFUCHSIA EntrypointParam(type='VkMemoryZirconHandlePropertiesFUCHSIA', name='pMemoryZirconHandleProperties', decl='VkMemoryZirconHandlePropertiesFUCHSIA* pMemoryZirconHandleProperties', len=None, elem=<Element 'param' at 0x736889afc0e0>, is_const=False, num_pointers=1)
#endif
    return result;
}
#endif

static VKAPI_ATTR VkResult VKAPI_CALL
wrapper_tramp_GetMemoryRemoteAddressNV(
    VkDevice device,
    const VkMemoryGetRemoteAddressInfoNV* pMemoryGetRemoteAddressInfo,
    VkRemoteAddressNV* pAddress)
{
    VK_FROM_HANDLE(wrapper_device, base, device);
const VkMemoryGetRemoteAddressInfoNV* pMemoryGetRemoteAddressInfo__ = pMemoryGetRemoteAddressInfo;
#ifdef NEEDS_UNWRAPPING_VkMemoryGetRemoteAddressInfoNV
    VkMemoryGetRemoteAddressInfoNV _w_pMemoryGetRemoteAddressInfo = { 0 };
    pMemoryGetRemoteAddressInfo__ = &_w_pMemoryGetRemoteAddressInfo;
    unwrap_VkMemoryGetRemoteAddressInfoNV(base, (VkMemoryGetRemoteAddressInfoNV *) pMemoryGetRemoteAddressInfo__, pMemoryGetRemoteAddressInfo);
#endif
    VkResult result = base->dispatch_table.GetMemoryRemoteAddressNV(base->dispatch_handle, pMemoryGetRemoteAddressInfo__, pAddress);
#ifdef NEEDS_UNWRAPPING_VkRemoteAddressNV
#endif
    return result;
}
        #ifdef VK_USE_PLATFORM_WIN32_KHR

static VKAPI_ATTR VkResult VKAPI_CALL
wrapper_tramp_GetSemaphoreWin32HandleKHR(
    VkDevice device,
    const VkSemaphoreGetWin32HandleInfoKHR* pGetWin32HandleInfo,
    HANDLE* pHandle)
{
    VK_FROM_HANDLE(wrapper_device, base, device);
const VkSemaphoreGetWin32HandleInfoKHR* pGetWin32HandleInfo__ = pGetWin32HandleInfo;
#ifdef NEEDS_UNWRAPPING_VkSemaphoreGetWin32HandleInfoKHR
    VkSemaphoreGetWin32HandleInfoKHR _w_pGetWin32HandleInfo = { 0 };
    pGetWin32HandleInfo__ = &_w_pGetWin32HandleInfo;
    unwrap_VkSemaphoreGetWin32HandleInfoKHR(base, (VkSemaphoreGetWin32HandleInfoKHR *) pGetWin32HandleInfo__, pGetWin32HandleInfo);
#endif
    VkResult result = base->dispatch_table.GetSemaphoreWin32HandleKHR(base->dispatch_handle, pGetWin32HandleInfo__, pHandle);
#ifdef NEEDS_UNWRAPPING_HANDLE
#endif
    return result;
}
#endif
#ifdef VK_USE_PLATFORM_WIN32_KHR

static VKAPI_ATTR VkResult VKAPI_CALL
wrapper_tramp_ImportSemaphoreWin32HandleKHR(
    VkDevice device,
    const VkImportSemaphoreWin32HandleInfoKHR* pImportSemaphoreWin32HandleInfo)
{
    VK_FROM_HANDLE(wrapper_device, base, device);
const VkImportSemaphoreWin32HandleInfoKHR* pImportSemaphoreWin32HandleInfo__ = pImportSemaphoreWin32HandleInfo;
#ifdef NEEDS_UNWRAPPING_VkImportSemaphoreWin32HandleInfoKHR
    VkImportSemaphoreWin32HandleInfoKHR _w_pImportSemaphoreWin32HandleInfo = { 0 };
    pImportSemaphoreWin32HandleInfo__ = &_w_pImportSemaphoreWin32HandleInfo;
    unwrap_VkImportSemaphoreWin32HandleInfoKHR(base, (VkImportSemaphoreWin32HandleInfoKHR *) pImportSemaphoreWin32HandleInfo__, pImportSemaphoreWin32HandleInfo);
#endif
    VkResult result = base->dispatch_table.ImportSemaphoreWin32HandleKHR(base->dispatch_handle, pImportSemaphoreWin32HandleInfo__);

    return result;
}
#endif

static VKAPI_ATTR VkResult VKAPI_CALL
wrapper_tramp_GetSemaphoreFdKHR(
    VkDevice device,
    const VkSemaphoreGetFdInfoKHR* pGetFdInfo,
    int* pFd)
{
    VK_FROM_HANDLE(wrapper_device, base, device);
const VkSemaphoreGetFdInfoKHR* pGetFdInfo__ = pGetFdInfo;
#ifdef NEEDS_UNWRAPPING_VkSemaphoreGetFdInfoKHR
    VkSemaphoreGetFdInfoKHR _w_pGetFdInfo = { 0 };
    pGetFdInfo__ = &_w_pGetFdInfo;
    unwrap_VkSemaphoreGetFdInfoKHR(base, (VkSemaphoreGetFdInfoKHR *) pGetFdInfo__, pGetFdInfo);
#endif
    VkResult result = base->dispatch_table.GetSemaphoreFdKHR(base->dispatch_handle, pGetFdInfo__, pFd);
#ifdef NEEDS_UNWRAPPING_int
#endif
    return result;
}

static VKAPI_ATTR VkResult VKAPI_CALL
wrapper_tramp_ImportSemaphoreFdKHR(
    VkDevice device,
    const VkImportSemaphoreFdInfoKHR* pImportSemaphoreFdInfo)
{
    VK_FROM_HANDLE(wrapper_device, base, device);
const VkImportSemaphoreFdInfoKHR* pImportSemaphoreFdInfo__ = pImportSemaphoreFdInfo;
#ifdef NEEDS_UNWRAPPING_VkImportSemaphoreFdInfoKHR
    VkImportSemaphoreFdInfoKHR _w_pImportSemaphoreFdInfo = { 0 };
    pImportSemaphoreFdInfo__ = &_w_pImportSemaphoreFdInfo;
    unwrap_VkImportSemaphoreFdInfoKHR(base, (VkImportSemaphoreFdInfoKHR *) pImportSemaphoreFdInfo__, pImportSemaphoreFdInfo);
#endif
    VkResult result = base->dispatch_table.ImportSemaphoreFdKHR(base->dispatch_handle, pImportSemaphoreFdInfo__);

    return result;
}
#ifdef VK_USE_PLATFORM_FUCHSIA

static VKAPI_ATTR VkResult VKAPI_CALL
wrapper_tramp_GetSemaphoreZirconHandleFUCHSIA(
    VkDevice device,
    const VkSemaphoreGetZirconHandleInfoFUCHSIA* pGetZirconHandleInfo,
    zx_handle_t* pZirconHandle)
{
    VK_FROM_HANDLE(wrapper_device, base, device);
const VkSemaphoreGetZirconHandleInfoFUCHSIA* pGetZirconHandleInfo__ = pGetZirconHandleInfo;
#ifdef NEEDS_UNWRAPPING_VkSemaphoreGetZirconHandleInfoFUCHSIA
    VkSemaphoreGetZirconHandleInfoFUCHSIA _w_pGetZirconHandleInfo = { 0 };
    pGetZirconHandleInfo__ = &_w_pGetZirconHandleInfo;
    unwrap_VkSemaphoreGetZirconHandleInfoFUCHSIA(base, (VkSemaphoreGetZirconHandleInfoFUCHSIA *) pGetZirconHandleInfo__, pGetZirconHandleInfo);
#endif
    VkResult result = base->dispatch_table.GetSemaphoreZirconHandleFUCHSIA(base->dispatch_handle, pGetZirconHandleInfo__, pZirconHandle);
#ifdef NEEDS_UNWRAPPING_zx_handle_t
#endif
    return result;
}
#endif
#ifdef VK_USE_PLATFORM_FUCHSIA

static VKAPI_ATTR VkResult VKAPI_CALL
wrapper_tramp_ImportSemaphoreZirconHandleFUCHSIA(
    VkDevice device,
    const VkImportSemaphoreZirconHandleInfoFUCHSIA* pImportSemaphoreZirconHandleInfo)
{
    VK_FROM_HANDLE(wrapper_device, base, device);
const VkImportSemaphoreZirconHandleInfoFUCHSIA* pImportSemaphoreZirconHandleInfo__ = pImportSemaphoreZirconHandleInfo;
#ifdef NEEDS_UNWRAPPING_VkImportSemaphoreZirconHandleInfoFUCHSIA
    VkImportSemaphoreZirconHandleInfoFUCHSIA _w_pImportSemaphoreZirconHandleInfo = { 0 };
    pImportSemaphoreZirconHandleInfo__ = &_w_pImportSemaphoreZirconHandleInfo;
    unwrap_VkImportSemaphoreZirconHandleInfoFUCHSIA(base, (VkImportSemaphoreZirconHandleInfoFUCHSIA *) pImportSemaphoreZirconHandleInfo__, pImportSemaphoreZirconHandleInfo);
#endif
    VkResult result = base->dispatch_table.ImportSemaphoreZirconHandleFUCHSIA(base->dispatch_handle, pImportSemaphoreZirconHandleInfo__);

    return result;
}
#endif
        #ifdef VK_USE_PLATFORM_WIN32_KHR

static VKAPI_ATTR VkResult VKAPI_CALL
wrapper_tramp_GetFenceWin32HandleKHR(
    VkDevice device,
    const VkFenceGetWin32HandleInfoKHR* pGetWin32HandleInfo,
    HANDLE* pHandle)
{
    VK_FROM_HANDLE(wrapper_device, base, device);
const VkFenceGetWin32HandleInfoKHR* pGetWin32HandleInfo__ = pGetWin32HandleInfo;
#ifdef NEEDS_UNWRAPPING_VkFenceGetWin32HandleInfoKHR
    VkFenceGetWin32HandleInfoKHR _w_pGetWin32HandleInfo = { 0 };
    pGetWin32HandleInfo__ = &_w_pGetWin32HandleInfo;
    unwrap_VkFenceGetWin32HandleInfoKHR(base, (VkFenceGetWin32HandleInfoKHR *) pGetWin32HandleInfo__, pGetWin32HandleInfo);
#endif
    VkResult result = base->dispatch_table.GetFenceWin32HandleKHR(base->dispatch_handle, pGetWin32HandleInfo__, pHandle);
#ifdef NEEDS_UNWRAPPING_HANDLE
#endif
    return result;
}
#endif
#ifdef VK_USE_PLATFORM_WIN32_KHR

static VKAPI_ATTR VkResult VKAPI_CALL
wrapper_tramp_ImportFenceWin32HandleKHR(
    VkDevice device,
    const VkImportFenceWin32HandleInfoKHR* pImportFenceWin32HandleInfo)
{
    VK_FROM_HANDLE(wrapper_device, base, device);
const VkImportFenceWin32HandleInfoKHR* pImportFenceWin32HandleInfo__ = pImportFenceWin32HandleInfo;
#ifdef NEEDS_UNWRAPPING_VkImportFenceWin32HandleInfoKHR
    VkImportFenceWin32HandleInfoKHR _w_pImportFenceWin32HandleInfo = { 0 };
    pImportFenceWin32HandleInfo__ = &_w_pImportFenceWin32HandleInfo;
    unwrap_VkImportFenceWin32HandleInfoKHR(base, (VkImportFenceWin32HandleInfoKHR *) pImportFenceWin32HandleInfo__, pImportFenceWin32HandleInfo);
#endif
    VkResult result = base->dispatch_table.ImportFenceWin32HandleKHR(base->dispatch_handle, pImportFenceWin32HandleInfo__);

    return result;
}
#endif

static VKAPI_ATTR VkResult VKAPI_CALL
wrapper_tramp_GetFenceFdKHR(
    VkDevice device,
    const VkFenceGetFdInfoKHR* pGetFdInfo,
    int* pFd)
{
    VK_FROM_HANDLE(wrapper_device, base, device);
const VkFenceGetFdInfoKHR* pGetFdInfo__ = pGetFdInfo;
#ifdef NEEDS_UNWRAPPING_VkFenceGetFdInfoKHR
    VkFenceGetFdInfoKHR _w_pGetFdInfo = { 0 };
    pGetFdInfo__ = &_w_pGetFdInfo;
    unwrap_VkFenceGetFdInfoKHR(base, (VkFenceGetFdInfoKHR *) pGetFdInfo__, pGetFdInfo);
#endif
    VkResult result = base->dispatch_table.GetFenceFdKHR(base->dispatch_handle, pGetFdInfo__, pFd);
#ifdef NEEDS_UNWRAPPING_int
#endif
    return result;
}

static VKAPI_ATTR VkResult VKAPI_CALL
wrapper_tramp_ImportFenceFdKHR(
    VkDevice device,
    const VkImportFenceFdInfoKHR* pImportFenceFdInfo)
{
    VK_FROM_HANDLE(wrapper_device, base, device);
const VkImportFenceFdInfoKHR* pImportFenceFdInfo__ = pImportFenceFdInfo;
#ifdef NEEDS_UNWRAPPING_VkImportFenceFdInfoKHR
    VkImportFenceFdInfoKHR _w_pImportFenceFdInfo = { 0 };
    pImportFenceFdInfo__ = &_w_pImportFenceFdInfo;
    unwrap_VkImportFenceFdInfoKHR(base, (VkImportFenceFdInfoKHR *) pImportFenceFdInfo__, pImportFenceFdInfo);
#endif
    VkResult result = base->dispatch_table.ImportFenceFdKHR(base->dispatch_handle, pImportFenceFdInfo__);

    return result;
}
                    
static VKAPI_ATTR VkResult VKAPI_CALL
wrapper_tramp_DisplayPowerControlEXT(
    VkDevice device,
    VkDisplayKHR display,
    const VkDisplayPowerInfoEXT* pDisplayPowerInfo)
{
    VK_FROM_HANDLE(wrapper_device, base, device);
VkDisplayKHR display__ = display;
#ifdef NEEDS_UNWRAPPING_VkDisplayKHR
#endif
const VkDisplayPowerInfoEXT* pDisplayPowerInfo__ = pDisplayPowerInfo;
#ifdef NEEDS_UNWRAPPING_VkDisplayPowerInfoEXT
    VkDisplayPowerInfoEXT _w_pDisplayPowerInfo = { 0 };
    pDisplayPowerInfo__ = &_w_pDisplayPowerInfo;
    unwrap_VkDisplayPowerInfoEXT(base, (VkDisplayPowerInfoEXT *) pDisplayPowerInfo__, pDisplayPowerInfo);
#endif
    VkResult result = base->dispatch_table.DisplayPowerControlEXT(base->dispatch_handle, display__, pDisplayPowerInfo__);

    return result;
}

static VKAPI_ATTR VkResult VKAPI_CALL
wrapper_tramp_RegisterDeviceEventEXT(
    VkDevice device,
    const VkDeviceEventInfoEXT* pDeviceEventInfo,
    const VkAllocationCallbacks* pAllocator,
    VkFence* pFence)
{
    VK_FROM_HANDLE(wrapper_device, base, device);
const VkDeviceEventInfoEXT* pDeviceEventInfo__ = pDeviceEventInfo;
#ifdef NEEDS_UNWRAPPING_VkDeviceEventInfoEXT
    VkDeviceEventInfoEXT _w_pDeviceEventInfo = { 0 };
    pDeviceEventInfo__ = &_w_pDeviceEventInfo;
    unwrap_VkDeviceEventInfoEXT(base, (VkDeviceEventInfoEXT *) pDeviceEventInfo__, pDeviceEventInfo);
#endif
const VkAllocationCallbacks* pAllocator__ = pAllocator;
#ifdef NEEDS_UNWRAPPING_VkAllocationCallbacks
    VkAllocationCallbacks _w_pAllocator = { 0 };
    pAllocator__ = &_w_pAllocator;
    unwrap_VkAllocationCallbacks(base, (VkAllocationCallbacks *) pAllocator__, pAllocator);
#endif
    VkResult result = base->dispatch_table.RegisterDeviceEventEXT(base->dispatch_handle, pDeviceEventInfo__, pAllocator__, pFence);
#ifdef NEEDS_UNWRAPPING_VkFence
#endif
    return result;
}

static VKAPI_ATTR VkResult VKAPI_CALL
wrapper_tramp_RegisterDisplayEventEXT(
    VkDevice device,
    VkDisplayKHR display,
    const VkDisplayEventInfoEXT* pDisplayEventInfo,
    const VkAllocationCallbacks* pAllocator,
    VkFence* pFence)
{
    VK_FROM_HANDLE(wrapper_device, base, device);
VkDisplayKHR display__ = display;
#ifdef NEEDS_UNWRAPPING_VkDisplayKHR
#endif
const VkDisplayEventInfoEXT* pDisplayEventInfo__ = pDisplayEventInfo;
#ifdef NEEDS_UNWRAPPING_VkDisplayEventInfoEXT
    VkDisplayEventInfoEXT _w_pDisplayEventInfo = { 0 };
    pDisplayEventInfo__ = &_w_pDisplayEventInfo;
    unwrap_VkDisplayEventInfoEXT(base, (VkDisplayEventInfoEXT *) pDisplayEventInfo__, pDisplayEventInfo);
#endif
const VkAllocationCallbacks* pAllocator__ = pAllocator;
#ifdef NEEDS_UNWRAPPING_VkAllocationCallbacks
    VkAllocationCallbacks _w_pAllocator = { 0 };
    pAllocator__ = &_w_pAllocator;
    unwrap_VkAllocationCallbacks(base, (VkAllocationCallbacks *) pAllocator__, pAllocator);
#endif
    VkResult result = base->dispatch_table.RegisterDisplayEventEXT(base->dispatch_handle, display__, pDisplayEventInfo__, pAllocator__, pFence);
#ifdef NEEDS_UNWRAPPING_VkFence
#endif
    return result;
}

static VKAPI_ATTR VkResult VKAPI_CALL
wrapper_tramp_GetSwapchainCounterEXT(
    VkDevice device,
    VkSwapchainKHR swapchain,
    VkSurfaceCounterFlagBitsEXT counter,
    uint64_t* pCounterValue)
{
    VK_FROM_HANDLE(wrapper_device, base, device);
VkSwapchainKHR swapchain__ = swapchain;
#ifdef NEEDS_UNWRAPPING_VkSwapchainKHR
#endif
VkSurfaceCounterFlagBitsEXT counter__ = counter;
#ifdef NEEDS_UNWRAPPING_VkSurfaceCounterFlagBitsEXT
#endif
    VkResult result = base->dispatch_table.GetSwapchainCounterEXT(base->dispatch_handle, swapchain__, counter__, pCounterValue);
#ifdef NEEDS_UNWRAPPING_uint64_t
#endif
    return result;
}
            
static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_GetDeviceGroupPeerMemoryFeatures(
    VkDevice device,
    uint32_t heapIndex,
    uint32_t localDeviceIndex,
    uint32_t remoteDeviceIndex,
    VkPeerMemoryFeatureFlags* pPeerMemoryFeatures)
{
    VK_FROM_HANDLE(wrapper_device, base, device);
uint32_t heapIndex__ = heapIndex;
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
uint32_t localDeviceIndex__ = localDeviceIndex;
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
uint32_t remoteDeviceIndex__ = remoteDeviceIndex;
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
    base->dispatch_table.GetDeviceGroupPeerMemoryFeatures(base->dispatch_handle, heapIndex__, localDeviceIndex__, remoteDeviceIndex__, pPeerMemoryFeatures);
#ifdef NEEDS_UNWRAPPING_VkPeerMemoryFeatureFlags
#endif
    return ;
}
    
static VKAPI_ATTR VkResult VKAPI_CALL
wrapper_tramp_BindBufferMemory2(
    VkDevice device,
    uint32_t bindInfoCount,
    const VkBindBufferMemoryInfo* pBindInfos)
{
    VK_FROM_HANDLE(wrapper_device, base, device);
uint32_t bindInfoCount__ = bindInfoCount;
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
const VkBindBufferMemoryInfo* pBindInfos__ = pBindInfos;
#ifdef NEEDS_UNWRAPPING_VkBindBufferMemoryInfo
    pBindInfos__ = alloca(bindInfoCount * sizeof(VkBindBufferMemoryInfo));
    for (int i = 0; i < bindInfoCount; i++)
        unwrap_VkBindBufferMemoryInfo(base, (VkBindBufferMemoryInfo *) &pBindInfos__[i], &pBindInfos[i]);
#endif
    VkResult result = base->dispatch_table.BindBufferMemory2(base->dispatch_handle, bindInfoCount__, pBindInfos__);

    return result;
}
    
static VKAPI_ATTR VkResult VKAPI_CALL
wrapper_tramp_BindImageMemory2(
    VkDevice device,
    uint32_t bindInfoCount,
    const VkBindImageMemoryInfo* pBindInfos)
{
    VK_FROM_HANDLE(wrapper_device, base, device);
uint32_t bindInfoCount__ = bindInfoCount;
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
const VkBindImageMemoryInfo* pBindInfos__ = pBindInfos;
#ifdef NEEDS_UNWRAPPING_VkBindImageMemoryInfo
    pBindInfos__ = alloca(bindInfoCount * sizeof(VkBindImageMemoryInfo));
    for (int i = 0; i < bindInfoCount; i++)
        unwrap_VkBindImageMemoryInfo(base, (VkBindImageMemoryInfo *) &pBindInfos__[i], &pBindInfos[i]);
#endif
    VkResult result = base->dispatch_table.BindImageMemory2(base->dispatch_handle, bindInfoCount__, pBindInfos__);

    return result;
}
    
static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_CmdSetDeviceMask(
    VkCommandBuffer commandBuffer,
    uint32_t deviceMask)
{
    VK_FROM_HANDLE(wrapper_command_buffer, base, commandBuffer);
uint32_t deviceMask__ = deviceMask;
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
    base->device->dispatch_table.CmdSetDeviceMask(base->dispatch_handle, deviceMask__);

    return ;
}
    
static VKAPI_ATTR VkResult VKAPI_CALL
wrapper_tramp_GetDeviceGroupPresentCapabilitiesKHR(
    VkDevice device,
    VkDeviceGroupPresentCapabilitiesKHR* pDeviceGroupPresentCapabilities)
{
    VK_FROM_HANDLE(wrapper_device, base, device);
    VkResult result = base->dispatch_table.GetDeviceGroupPresentCapabilitiesKHR(base->dispatch_handle, pDeviceGroupPresentCapabilities);
#ifdef NEEDS_UNWRAPPING_VkDeviceGroupPresentCapabilitiesKHR
#warning TODO: Repack struct+ptr+out GetDeviceGroupPresentCapabilitiesKHR EntrypointParam(type='VkDeviceGroupPresentCapabilitiesKHR', name='pDeviceGroupPresentCapabilities', decl='VkDeviceGroupPresentCapabilitiesKHR* pDeviceGroupPresentCapabilities', len=None, elem=<Element 'param' at 0x736889b13d80>, is_const=False, num_pointers=1)
#endif
    return result;
}

static VKAPI_ATTR VkResult VKAPI_CALL
wrapper_tramp_GetDeviceGroupSurfacePresentModesKHR(
    VkDevice device,
    VkSurfaceKHR surface,
    VkDeviceGroupPresentModeFlagsKHR* pModes)
{
    VK_FROM_HANDLE(wrapper_device, base, device);
VkSurfaceKHR surface__ = surface;
#ifdef NEEDS_UNWRAPPING_VkSurfaceKHR
#endif
    VkResult result = base->dispatch_table.GetDeviceGroupSurfacePresentModesKHR(base->dispatch_handle, surface__, pModes);
#ifdef NEEDS_UNWRAPPING_VkDeviceGroupPresentModeFlagsKHR
#endif
    return result;
}

static VKAPI_ATTR VkResult VKAPI_CALL
wrapper_tramp_AcquireNextImage2KHR(
    VkDevice device,
    const VkAcquireNextImageInfoKHR* pAcquireInfo,
    uint32_t* pImageIndex)
{
    VK_FROM_HANDLE(wrapper_device, base, device);
const VkAcquireNextImageInfoKHR* pAcquireInfo__ = pAcquireInfo;
#ifdef NEEDS_UNWRAPPING_VkAcquireNextImageInfoKHR
    VkAcquireNextImageInfoKHR _w_pAcquireInfo = { 0 };
    pAcquireInfo__ = &_w_pAcquireInfo;
    unwrap_VkAcquireNextImageInfoKHR(base, (VkAcquireNextImageInfoKHR *) pAcquireInfo__, pAcquireInfo);
#endif
    VkResult result = base->dispatch_table.AcquireNextImage2KHR(base->dispatch_handle, pAcquireInfo__, pImageIndex);
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
    return result;
}

static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_CmdDispatchBase(
    VkCommandBuffer commandBuffer,
    uint32_t baseGroupX,
    uint32_t baseGroupY,
    uint32_t baseGroupZ,
    uint32_t groupCountX,
    uint32_t groupCountY,
    uint32_t groupCountZ)
{
    VK_FROM_HANDLE(wrapper_command_buffer, base, commandBuffer);
uint32_t baseGroupX__ = baseGroupX;
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
uint32_t baseGroupY__ = baseGroupY;
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
uint32_t baseGroupZ__ = baseGroupZ;
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
uint32_t groupCountX__ = groupCountX;
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
uint32_t groupCountY__ = groupCountY;
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
uint32_t groupCountZ__ = groupCountZ;
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
    base->device->dispatch_table.CmdDispatchBase(base->dispatch_handle, baseGroupX__, baseGroupY__, baseGroupZ__, groupCountX__, groupCountY__, groupCountZ__);

    return ;
}
        
static VKAPI_ATTR VkResult VKAPI_CALL
wrapper_tramp_CreateDescriptorUpdateTemplate(
    VkDevice device,
    const VkDescriptorUpdateTemplateCreateInfo* pCreateInfo,
    const VkAllocationCallbacks* pAllocator,
    VkDescriptorUpdateTemplate* pDescriptorUpdateTemplate)
{
    VK_FROM_HANDLE(wrapper_device, base, device);
const VkDescriptorUpdateTemplateCreateInfo* pCreateInfo__ = pCreateInfo;
#ifdef NEEDS_UNWRAPPING_VkDescriptorUpdateTemplateCreateInfo
    VkDescriptorUpdateTemplateCreateInfo _w_pCreateInfo = { 0 };
    pCreateInfo__ = &_w_pCreateInfo;
    unwrap_VkDescriptorUpdateTemplateCreateInfo(base, (VkDescriptorUpdateTemplateCreateInfo *) pCreateInfo__, pCreateInfo);
#endif
const VkAllocationCallbacks* pAllocator__ = pAllocator;
#ifdef NEEDS_UNWRAPPING_VkAllocationCallbacks
    VkAllocationCallbacks _w_pAllocator = { 0 };
    pAllocator__ = &_w_pAllocator;
    unwrap_VkAllocationCallbacks(base, (VkAllocationCallbacks *) pAllocator__, pAllocator);
#endif
    VkResult result = base->dispatch_table.CreateDescriptorUpdateTemplate(base->dispatch_handle, pCreateInfo__, pAllocator__, pDescriptorUpdateTemplate);
#ifdef NEEDS_UNWRAPPING_VkDescriptorUpdateTemplate
#endif
    return result;
}
    
static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_DestroyDescriptorUpdateTemplate(
    VkDevice device,
    VkDescriptorUpdateTemplate descriptorUpdateTemplate,
    const VkAllocationCallbacks* pAllocator)
{
    VK_FROM_HANDLE(wrapper_device, base, device);
VkDescriptorUpdateTemplate descriptorUpdateTemplate__ = descriptorUpdateTemplate;
#ifdef NEEDS_UNWRAPPING_VkDescriptorUpdateTemplate
#endif
const VkAllocationCallbacks* pAllocator__ = pAllocator;
#ifdef NEEDS_UNWRAPPING_VkAllocationCallbacks
    VkAllocationCallbacks _w_pAllocator = { 0 };
    pAllocator__ = &_w_pAllocator;
    unwrap_VkAllocationCallbacks(base, (VkAllocationCallbacks *) pAllocator__, pAllocator);
#endif
    base->dispatch_table.DestroyDescriptorUpdateTemplate(base->dispatch_handle, descriptorUpdateTemplate__, pAllocator__);

    return ;
}
    
static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_UpdateDescriptorSetWithTemplate(
    VkDevice device,
    VkDescriptorSet descriptorSet,
    VkDescriptorUpdateTemplate descriptorUpdateTemplate,
    const void* pData)
{
    VK_FROM_HANDLE(wrapper_device, base, device);
VkDescriptorSet descriptorSet__ = descriptorSet;
#ifdef NEEDS_UNWRAPPING_VkDescriptorSet
#endif
VkDescriptorUpdateTemplate descriptorUpdateTemplate__ = descriptorUpdateTemplate;
#ifdef NEEDS_UNWRAPPING_VkDescriptorUpdateTemplate
#endif
const void* pData__ = pData;
#ifdef NEEDS_UNWRAPPING_void
#endif
    base->dispatch_table.UpdateDescriptorSetWithTemplate(base->dispatch_handle, descriptorSet__, descriptorUpdateTemplate__, pData__);

    return ;
}
    
static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_CmdPushDescriptorSetWithTemplateKHR(
    VkCommandBuffer commandBuffer,
    VkDescriptorUpdateTemplate descriptorUpdateTemplate,
    VkPipelineLayout layout,
    uint32_t set,
    const void* pData)
{
    VK_FROM_HANDLE(wrapper_command_buffer, base, commandBuffer);
VkDescriptorUpdateTemplate descriptorUpdateTemplate__ = descriptorUpdateTemplate;
#ifdef NEEDS_UNWRAPPING_VkDescriptorUpdateTemplate
#endif
VkPipelineLayout layout__ = layout;
#ifdef NEEDS_UNWRAPPING_VkPipelineLayout
#endif
uint32_t set__ = set;
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
const void* pData__ = pData;
#ifdef NEEDS_UNWRAPPING_void
#endif
    base->device->dispatch_table.CmdPushDescriptorSetWithTemplateKHR(base->dispatch_handle, descriptorUpdateTemplate__, layout__, set__, pData__);

    return ;
}

static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_SetHdrMetadataEXT(
    VkDevice device,
    uint32_t swapchainCount,
    const VkSwapchainKHR* pSwapchains,
    const VkHdrMetadataEXT* pMetadata)
{
    VK_FROM_HANDLE(wrapper_device, base, device);
uint32_t swapchainCount__ = swapchainCount;
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
const VkSwapchainKHR* pSwapchains__ = pSwapchains;
#ifdef NEEDS_UNWRAPPING_VkSwapchainKHR
#endif
const VkHdrMetadataEXT* pMetadata__ = pMetadata;
#ifdef NEEDS_UNWRAPPING_VkHdrMetadataEXT
    pMetadata__ = alloca(swapchainCount * sizeof(VkHdrMetadataEXT));
    for (int i = 0; i < swapchainCount; i++)
        unwrap_VkHdrMetadataEXT(base, (VkHdrMetadataEXT *) &pMetadata__[i], &pMetadata[i]);
#endif
    base->dispatch_table.SetHdrMetadataEXT(base->dispatch_handle, swapchainCount__, pSwapchains__, pMetadata__);

    return ;
}

static VKAPI_ATTR VkResult VKAPI_CALL
wrapper_tramp_GetSwapchainStatusKHR(
    VkDevice device,
    VkSwapchainKHR swapchain)
{
    VK_FROM_HANDLE(wrapper_device, base, device);
VkSwapchainKHR swapchain__ = swapchain;
#ifdef NEEDS_UNWRAPPING_VkSwapchainKHR
#endif
    VkResult result = base->dispatch_table.GetSwapchainStatusKHR(base->dispatch_handle, swapchain__);

    return result;
}

static VKAPI_ATTR VkResult VKAPI_CALL
wrapper_tramp_GetRefreshCycleDurationGOOGLE(
    VkDevice device,
    VkSwapchainKHR swapchain,
    VkRefreshCycleDurationGOOGLE* pDisplayTimingProperties)
{
    VK_FROM_HANDLE(wrapper_device, base, device);
VkSwapchainKHR swapchain__ = swapchain;
#ifdef NEEDS_UNWRAPPING_VkSwapchainKHR
#endif
    VkResult result = base->dispatch_table.GetRefreshCycleDurationGOOGLE(base->dispatch_handle, swapchain__, pDisplayTimingProperties);
#ifdef NEEDS_UNWRAPPING_VkRefreshCycleDurationGOOGLE
#warning TODO: Repack struct+ptr+out GetRefreshCycleDurationGOOGLE EntrypointParam(type='VkRefreshCycleDurationGOOGLE', name='pDisplayTimingProperties', decl='VkRefreshCycleDurationGOOGLE* pDisplayTimingProperties', len=None, elem=<Element 'param' at 0x736889b1bce0>, is_const=False, num_pointers=1)
#endif
    return result;
}

static VKAPI_ATTR VkResult VKAPI_CALL
wrapper_tramp_GetPastPresentationTimingGOOGLE(
    VkDevice device,
    VkSwapchainKHR swapchain,
    uint32_t* pPresentationTimingCount,
    VkPastPresentationTimingGOOGLE* pPresentationTimings)
{
    VK_FROM_HANDLE(wrapper_device, base, device);
VkSwapchainKHR swapchain__ = swapchain;
#ifdef NEEDS_UNWRAPPING_VkSwapchainKHR
#endif
    VkResult result = base->dispatch_table.GetPastPresentationTimingGOOGLE(base->dispatch_handle, swapchain__, pPresentationTimingCount, pPresentationTimings);
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
#ifdef NEEDS_UNWRAPPING_VkPastPresentationTimingGOOGLE
#warning TODO: Repack struct+array+out GetPastPresentationTimingGOOGLE EntrypointParam(type='VkPastPresentationTimingGOOGLE', name='pPresentationTimings', decl='VkPastPresentationTimingGOOGLE* pPresentationTimings', len='pPresentationTimingCount', elem=<Element 'param' at 0x736889b24400>, is_const=False, num_pointers=1)
#endif
    return result;
}
            
static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_CmdSetViewportWScalingNV(
    VkCommandBuffer commandBuffer,
    uint32_t firstViewport,
    uint32_t viewportCount,
    const VkViewportWScalingNV* pViewportWScalings)
{
    VK_FROM_HANDLE(wrapper_command_buffer, base, commandBuffer);
uint32_t firstViewport__ = firstViewport;
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
uint32_t viewportCount__ = viewportCount;
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
const VkViewportWScalingNV* pViewportWScalings__ = pViewportWScalings;
#ifdef NEEDS_UNWRAPPING_VkViewportWScalingNV
    pViewportWScalings__ = alloca(viewportCount * sizeof(VkViewportWScalingNV));
    for (int i = 0; i < viewportCount; i++)
        unwrap_VkViewportWScalingNV(base->device, (VkViewportWScalingNV *) &pViewportWScalings__[i], &pViewportWScalings[i]);
#endif
    base->device->dispatch_table.CmdSetViewportWScalingNV(base->dispatch_handle, firstViewport__, viewportCount__, pViewportWScalings__);

    return ;
}

static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_CmdSetDiscardRectangleEXT(
    VkCommandBuffer commandBuffer,
    uint32_t firstDiscardRectangle,
    uint32_t discardRectangleCount,
    const VkRect2D* pDiscardRectangles)
{
    VK_FROM_HANDLE(wrapper_command_buffer, base, commandBuffer);
uint32_t firstDiscardRectangle__ = firstDiscardRectangle;
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
uint32_t discardRectangleCount__ = discardRectangleCount;
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
const VkRect2D* pDiscardRectangles__ = pDiscardRectangles;
#ifdef NEEDS_UNWRAPPING_VkRect2D
    pDiscardRectangles__ = alloca(discardRectangleCount * sizeof(VkRect2D));
    for (int i = 0; i < discardRectangleCount; i++)
        unwrap_VkRect2D(base->device, (VkRect2D *) &pDiscardRectangles__[i], &pDiscardRectangles[i]);
#endif
    base->device->dispatch_table.CmdSetDiscardRectangleEXT(base->dispatch_handle, firstDiscardRectangle__, discardRectangleCount__, pDiscardRectangles__);

    return ;
}

static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_CmdSetDiscardRectangleEnableEXT(
    VkCommandBuffer commandBuffer,
    VkBool32 discardRectangleEnable)
{
    VK_FROM_HANDLE(wrapper_command_buffer, base, commandBuffer);
VkBool32 discardRectangleEnable__ = discardRectangleEnable;
#ifdef NEEDS_UNWRAPPING_VkBool32
#endif
    base->device->dispatch_table.CmdSetDiscardRectangleEnableEXT(base->dispatch_handle, discardRectangleEnable__);

    return ;
}

static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_CmdSetDiscardRectangleModeEXT(
    VkCommandBuffer commandBuffer,
    VkDiscardRectangleModeEXT discardRectangleMode)
{
    VK_FROM_HANDLE(wrapper_command_buffer, base, commandBuffer);
VkDiscardRectangleModeEXT discardRectangleMode__ = discardRectangleMode;
#ifdef NEEDS_UNWRAPPING_VkDiscardRectangleModeEXT
#endif
    base->device->dispatch_table.CmdSetDiscardRectangleModeEXT(base->dispatch_handle, discardRectangleMode__);

    return ;
}

static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_CmdSetSampleLocationsEXT(
    VkCommandBuffer commandBuffer,
    const VkSampleLocationsInfoEXT* pSampleLocationsInfo)
{
    VK_FROM_HANDLE(wrapper_command_buffer, base, commandBuffer);
const VkSampleLocationsInfoEXT* pSampleLocationsInfo__ = pSampleLocationsInfo;
#ifdef NEEDS_UNWRAPPING_VkSampleLocationsInfoEXT
    VkSampleLocationsInfoEXT _w_pSampleLocationsInfo = { 0 };
    pSampleLocationsInfo__ = &_w_pSampleLocationsInfo;
    unwrap_VkSampleLocationsInfoEXT(base->device, (VkSampleLocationsInfoEXT *) pSampleLocationsInfo__, pSampleLocationsInfo);
#endif
    base->device->dispatch_table.CmdSetSampleLocationsEXT(base->dispatch_handle, pSampleLocationsInfo__);

    return ;
}
                            
static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_GetBufferMemoryRequirements2(
    VkDevice device,
    const VkBufferMemoryRequirementsInfo2* pInfo,
    VkMemoryRequirements2* pMemoryRequirements)
{
    VK_FROM_HANDLE(wrapper_device, base, device);
const VkBufferMemoryRequirementsInfo2* pInfo__ = pInfo;
#ifdef NEEDS_UNWRAPPING_VkBufferMemoryRequirementsInfo2
    VkBufferMemoryRequirementsInfo2 _w_pInfo = { 0 };
    pInfo__ = &_w_pInfo;
    unwrap_VkBufferMemoryRequirementsInfo2(base, (VkBufferMemoryRequirementsInfo2 *) pInfo__, pInfo);
#endif
    base->dispatch_table.GetBufferMemoryRequirements2(base->dispatch_handle, pInfo__, pMemoryRequirements);
#ifdef NEEDS_UNWRAPPING_VkMemoryRequirements2
#warning TODO: Repack struct+ptr+out GetBufferMemoryRequirements2 EntrypointParam(type='VkMemoryRequirements2', name='pMemoryRequirements', decl='VkMemoryRequirements2* pMemoryRequirements', len=None, elem=<Element 'param' at 0x736889b351c0>, is_const=False, num_pointers=1)
#endif
    return ;
}
    
static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_GetImageMemoryRequirements2(
    VkDevice device,
    const VkImageMemoryRequirementsInfo2* pInfo,
    VkMemoryRequirements2* pMemoryRequirements)
{
    VK_FROM_HANDLE(wrapper_device, base, device);
const VkImageMemoryRequirementsInfo2* pInfo__ = pInfo;
#ifdef NEEDS_UNWRAPPING_VkImageMemoryRequirementsInfo2
    VkImageMemoryRequirementsInfo2 _w_pInfo = { 0 };
    pInfo__ = &_w_pInfo;
    unwrap_VkImageMemoryRequirementsInfo2(base, (VkImageMemoryRequirementsInfo2 *) pInfo__, pInfo);
#endif
    base->dispatch_table.GetImageMemoryRequirements2(base->dispatch_handle, pInfo__, pMemoryRequirements);
#ifdef NEEDS_UNWRAPPING_VkMemoryRequirements2
#warning TODO: Repack struct+ptr+out GetImageMemoryRequirements2 EntrypointParam(type='VkMemoryRequirements2', name='pMemoryRequirements', decl='VkMemoryRequirements2* pMemoryRequirements', len=None, elem=<Element 'param' at 0x736889b35760>, is_const=False, num_pointers=1)
#endif
    return ;
}
    
static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_GetImageSparseMemoryRequirements2(
    VkDevice device,
    const VkImageSparseMemoryRequirementsInfo2* pInfo,
    uint32_t* pSparseMemoryRequirementCount,
    VkSparseImageMemoryRequirements2* pSparseMemoryRequirements)
{
    VK_FROM_HANDLE(wrapper_device, base, device);
const VkImageSparseMemoryRequirementsInfo2* pInfo__ = pInfo;
#ifdef NEEDS_UNWRAPPING_VkImageSparseMemoryRequirementsInfo2
    VkImageSparseMemoryRequirementsInfo2 _w_pInfo = { 0 };
    pInfo__ = &_w_pInfo;
    unwrap_VkImageSparseMemoryRequirementsInfo2(base, (VkImageSparseMemoryRequirementsInfo2 *) pInfo__, pInfo);
#endif
    base->dispatch_table.GetImageSparseMemoryRequirements2(base->dispatch_handle, pInfo__, pSparseMemoryRequirementCount, pSparseMemoryRequirements);
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
#ifdef NEEDS_UNWRAPPING_VkSparseImageMemoryRequirements2
#warning TODO: Repack struct+array+out GetImageSparseMemoryRequirements2 EntrypointParam(type='VkSparseImageMemoryRequirements2', name='pSparseMemoryRequirements', decl='VkSparseImageMemoryRequirements2* pSparseMemoryRequirements', len='pSparseMemoryRequirementCount', elem=<Element 'param' at 0x736889b35e90>, is_const=False, num_pointers=1)
#endif
    return ;
}
    
static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_GetDeviceBufferMemoryRequirements(
    VkDevice device,
    const VkDeviceBufferMemoryRequirements* pInfo,
    VkMemoryRequirements2* pMemoryRequirements)
{
    VK_FROM_HANDLE(wrapper_device, base, device);
const VkDeviceBufferMemoryRequirements* pInfo__ = pInfo;
#ifdef NEEDS_UNWRAPPING_VkDeviceBufferMemoryRequirements
    VkDeviceBufferMemoryRequirements _w_pInfo = { 0 };
    pInfo__ = &_w_pInfo;
    unwrap_VkDeviceBufferMemoryRequirements(base, (VkDeviceBufferMemoryRequirements *) pInfo__, pInfo);
#endif
    base->dispatch_table.GetDeviceBufferMemoryRequirements(base->dispatch_handle, pInfo__, pMemoryRequirements);
#ifdef NEEDS_UNWRAPPING_VkMemoryRequirements2
#warning TODO: Repack struct+ptr+out GetDeviceBufferMemoryRequirements EntrypointParam(type='VkMemoryRequirements2', name='pMemoryRequirements', decl='VkMemoryRequirements2* pMemoryRequirements', len=None, elem=<Element 'param' at 0x736889b364d0>, is_const=False, num_pointers=1)
#endif
    return ;
}
    
static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_GetDeviceImageMemoryRequirements(
    VkDevice device,
    const VkDeviceImageMemoryRequirements* pInfo,
    VkMemoryRequirements2* pMemoryRequirements)
{
    VK_FROM_HANDLE(wrapper_device, base, device);
const VkDeviceImageMemoryRequirements* pInfo__ = pInfo;
#ifdef NEEDS_UNWRAPPING_VkDeviceImageMemoryRequirements
    VkDeviceImageMemoryRequirements _w_pInfo = { 0 };
    pInfo__ = &_w_pInfo;
    unwrap_VkDeviceImageMemoryRequirements(base, (VkDeviceImageMemoryRequirements *) pInfo__, pInfo);
#endif
    base->dispatch_table.GetDeviceImageMemoryRequirements(base->dispatch_handle, pInfo__, pMemoryRequirements);
#ifdef NEEDS_UNWRAPPING_VkMemoryRequirements2
#warning TODO: Repack struct+ptr+out GetDeviceImageMemoryRequirements EntrypointParam(type='VkMemoryRequirements2', name='pMemoryRequirements', decl='VkMemoryRequirements2* pMemoryRequirements', len=None, elem=<Element 'param' at 0x736889b36a70>, is_const=False, num_pointers=1)
#endif
    return ;
}
    
static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_GetDeviceImageSparseMemoryRequirements(
    VkDevice device,
    const VkDeviceImageMemoryRequirements* pInfo,
    uint32_t* pSparseMemoryRequirementCount,
    VkSparseImageMemoryRequirements2* pSparseMemoryRequirements)
{
    VK_FROM_HANDLE(wrapper_device, base, device);
const VkDeviceImageMemoryRequirements* pInfo__ = pInfo;
#ifdef NEEDS_UNWRAPPING_VkDeviceImageMemoryRequirements
    VkDeviceImageMemoryRequirements _w_pInfo = { 0 };
    pInfo__ = &_w_pInfo;
    unwrap_VkDeviceImageMemoryRequirements(base, (VkDeviceImageMemoryRequirements *) pInfo__, pInfo);
#endif
    base->dispatch_table.GetDeviceImageSparseMemoryRequirements(base->dispatch_handle, pInfo__, pSparseMemoryRequirementCount, pSparseMemoryRequirements);
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
#ifdef NEEDS_UNWRAPPING_VkSparseImageMemoryRequirements2
#warning TODO: Repack struct+array+out GetDeviceImageSparseMemoryRequirements EntrypointParam(type='VkSparseImageMemoryRequirements2', name='pSparseMemoryRequirements', decl='VkSparseImageMemoryRequirements2* pSparseMemoryRequirements', len='pSparseMemoryRequirementCount', elem=<Element 'param' at 0x736889b37150>, is_const=False, num_pointers=1)
#endif
    return ;
}
    
static VKAPI_ATTR VkResult VKAPI_CALL
wrapper_tramp_CreateSamplerYcbcrConversion(
    VkDevice device,
    const VkSamplerYcbcrConversionCreateInfo* pCreateInfo,
    const VkAllocationCallbacks* pAllocator,
    VkSamplerYcbcrConversion* pYcbcrConversion)
{
    VK_FROM_HANDLE(wrapper_device, base, device);
const VkSamplerYcbcrConversionCreateInfo* pCreateInfo__ = pCreateInfo;
#ifdef NEEDS_UNWRAPPING_VkSamplerYcbcrConversionCreateInfo
    VkSamplerYcbcrConversionCreateInfo _w_pCreateInfo = { 0 };
    pCreateInfo__ = &_w_pCreateInfo;
    unwrap_VkSamplerYcbcrConversionCreateInfo(base, (VkSamplerYcbcrConversionCreateInfo *) pCreateInfo__, pCreateInfo);
#endif
const VkAllocationCallbacks* pAllocator__ = pAllocator;
#ifdef NEEDS_UNWRAPPING_VkAllocationCallbacks
    VkAllocationCallbacks _w_pAllocator = { 0 };
    pAllocator__ = &_w_pAllocator;
    unwrap_VkAllocationCallbacks(base, (VkAllocationCallbacks *) pAllocator__, pAllocator);
#endif
    VkResult result = base->dispatch_table.CreateSamplerYcbcrConversion(base->dispatch_handle, pCreateInfo__, pAllocator__, pYcbcrConversion);
#ifdef NEEDS_UNWRAPPING_VkSamplerYcbcrConversion
#endif
    return result;
}
    
static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_DestroySamplerYcbcrConversion(
    VkDevice device,
    VkSamplerYcbcrConversion ycbcrConversion,
    const VkAllocationCallbacks* pAllocator)
{
    VK_FROM_HANDLE(wrapper_device, base, device);
VkSamplerYcbcrConversion ycbcrConversion__ = ycbcrConversion;
#ifdef NEEDS_UNWRAPPING_VkSamplerYcbcrConversion
#endif
const VkAllocationCallbacks* pAllocator__ = pAllocator;
#ifdef NEEDS_UNWRAPPING_VkAllocationCallbacks
    VkAllocationCallbacks _w_pAllocator = { 0 };
    pAllocator__ = &_w_pAllocator;
    unwrap_VkAllocationCallbacks(base, (VkAllocationCallbacks *) pAllocator__, pAllocator);
#endif
    base->dispatch_table.DestroySamplerYcbcrConversion(base->dispatch_handle, ycbcrConversion__, pAllocator__);

    return ;
}
    
static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_GetDeviceQueue2(
    VkDevice device,
    const VkDeviceQueueInfo2* pQueueInfo,
    VkQueue* pQueue)
{
    VK_FROM_HANDLE(wrapper_device, base, device);
    base->dispatch_table.GetDeviceQueue2(base->dispatch_handle, pQueueInfo, pQueue);

    return ;
}

static VKAPI_ATTR VkResult VKAPI_CALL
wrapper_tramp_CreateValidationCacheEXT(
    VkDevice device,
    const VkValidationCacheCreateInfoEXT* pCreateInfo,
    const VkAllocationCallbacks* pAllocator,
    VkValidationCacheEXT* pValidationCache)
{
    VK_FROM_HANDLE(wrapper_device, base, device);
const VkValidationCacheCreateInfoEXT* pCreateInfo__ = pCreateInfo;
#ifdef NEEDS_UNWRAPPING_VkValidationCacheCreateInfoEXT
    VkValidationCacheCreateInfoEXT _w_pCreateInfo = { 0 };
    pCreateInfo__ = &_w_pCreateInfo;
    unwrap_VkValidationCacheCreateInfoEXT(base, (VkValidationCacheCreateInfoEXT *) pCreateInfo__, pCreateInfo);
#endif
const VkAllocationCallbacks* pAllocator__ = pAllocator;
#ifdef NEEDS_UNWRAPPING_VkAllocationCallbacks
    VkAllocationCallbacks _w_pAllocator = { 0 };
    pAllocator__ = &_w_pAllocator;
    unwrap_VkAllocationCallbacks(base, (VkAllocationCallbacks *) pAllocator__, pAllocator);
#endif
    VkResult result = base->dispatch_table.CreateValidationCacheEXT(base->dispatch_handle, pCreateInfo__, pAllocator__, pValidationCache);
#ifdef NEEDS_UNWRAPPING_VkValidationCacheEXT
#endif
    return result;
}

static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_DestroyValidationCacheEXT(
    VkDevice device,
    VkValidationCacheEXT validationCache,
    const VkAllocationCallbacks* pAllocator)
{
    VK_FROM_HANDLE(wrapper_device, base, device);
VkValidationCacheEXT validationCache__ = validationCache;
#ifdef NEEDS_UNWRAPPING_VkValidationCacheEXT
#endif
const VkAllocationCallbacks* pAllocator__ = pAllocator;
#ifdef NEEDS_UNWRAPPING_VkAllocationCallbacks
    VkAllocationCallbacks _w_pAllocator = { 0 };
    pAllocator__ = &_w_pAllocator;
    unwrap_VkAllocationCallbacks(base, (VkAllocationCallbacks *) pAllocator__, pAllocator);
#endif
    base->dispatch_table.DestroyValidationCacheEXT(base->dispatch_handle, validationCache__, pAllocator__);

    return ;
}

static VKAPI_ATTR VkResult VKAPI_CALL
wrapper_tramp_GetValidationCacheDataEXT(
    VkDevice device,
    VkValidationCacheEXT validationCache,
    size_t* pDataSize,
    void* pData)
{
    VK_FROM_HANDLE(wrapper_device, base, device);
VkValidationCacheEXT validationCache__ = validationCache;
#ifdef NEEDS_UNWRAPPING_VkValidationCacheEXT
#endif
    VkResult result = base->dispatch_table.GetValidationCacheDataEXT(base->dispatch_handle, validationCache__, pDataSize, pData);
#ifdef NEEDS_UNWRAPPING_size_t
#endif
#ifdef NEEDS_UNWRAPPING_void
#endif
    return result;
}

static VKAPI_ATTR VkResult VKAPI_CALL
wrapper_tramp_MergeValidationCachesEXT(
    VkDevice device,
    VkValidationCacheEXT dstCache,
    uint32_t srcCacheCount,
    const VkValidationCacheEXT* pSrcCaches)
{
    VK_FROM_HANDLE(wrapper_device, base, device);
VkValidationCacheEXT dstCache__ = dstCache;
#ifdef NEEDS_UNWRAPPING_VkValidationCacheEXT
#endif
uint32_t srcCacheCount__ = srcCacheCount;
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
const VkValidationCacheEXT* pSrcCaches__ = pSrcCaches;
#ifdef NEEDS_UNWRAPPING_VkValidationCacheEXT
#endif
    VkResult result = base->dispatch_table.MergeValidationCachesEXT(base->dispatch_handle, dstCache__, srcCacheCount__, pSrcCaches__);

    return result;
}

static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_GetDescriptorSetLayoutSupport(
    VkDevice device,
    const VkDescriptorSetLayoutCreateInfo* pCreateInfo,
    VkDescriptorSetLayoutSupport* pSupport)
{
    VK_FROM_HANDLE(wrapper_device, base, device);
const VkDescriptorSetLayoutCreateInfo* pCreateInfo__ = pCreateInfo;
#ifdef NEEDS_UNWRAPPING_VkDescriptorSetLayoutCreateInfo
    VkDescriptorSetLayoutCreateInfo _w_pCreateInfo = { 0 };
    pCreateInfo__ = &_w_pCreateInfo;
    unwrap_VkDescriptorSetLayoutCreateInfo(base, (VkDescriptorSetLayoutCreateInfo *) pCreateInfo__, pCreateInfo);
#endif
    base->dispatch_table.GetDescriptorSetLayoutSupport(base->dispatch_handle, pCreateInfo__, pSupport);
#ifdef NEEDS_UNWRAPPING_VkDescriptorSetLayoutSupport
#warning TODO: Repack struct+ptr+out GetDescriptorSetLayoutSupport EntrypointParam(type='VkDescriptorSetLayoutSupport', name='pSupport', decl='VkDescriptorSetLayoutSupport* pSupport', len=None, elem=<Element 'param' at 0x736889941d00>, is_const=False, num_pointers=1)
#endif
    return ;
}
    #ifdef VK_USE_PLATFORM_ANDROID_KHR

static VKAPI_ATTR VkResult VKAPI_CALL
wrapper_tramp_GetSwapchainGrallocUsageANDROID(
    VkDevice device,
    VkFormat format,
    VkImageUsageFlags imageUsage,
    int* grallocUsage)
{
    VK_FROM_HANDLE(wrapper_device, base, device);
VkFormat format__ = format;
#ifdef NEEDS_UNWRAPPING_VkFormat
#endif
VkImageUsageFlags imageUsage__ = imageUsage;
#ifdef NEEDS_UNWRAPPING_VkImageUsageFlags
#endif
    VkResult result = base->dispatch_table.GetSwapchainGrallocUsageANDROID(base->dispatch_handle, format__, imageUsage__, grallocUsage);
#ifdef NEEDS_UNWRAPPING_int
#endif
    return result;
}
#endif
#ifdef VK_USE_PLATFORM_ANDROID_KHR

static VKAPI_ATTR VkResult VKAPI_CALL
wrapper_tramp_GetSwapchainGrallocUsage2ANDROID(
    VkDevice device,
    VkFormat format,
    VkImageUsageFlags imageUsage,
    VkSwapchainImageUsageFlagsANDROID swapchainImageUsage,
    uint64_t* grallocConsumerUsage,
    uint64_t* grallocProducerUsage)
{
    VK_FROM_HANDLE(wrapper_device, base, device);
VkFormat format__ = format;
#ifdef NEEDS_UNWRAPPING_VkFormat
#endif
VkImageUsageFlags imageUsage__ = imageUsage;
#ifdef NEEDS_UNWRAPPING_VkImageUsageFlags
#endif
VkSwapchainImageUsageFlagsANDROID swapchainImageUsage__ = swapchainImageUsage;
#ifdef NEEDS_UNWRAPPING_VkSwapchainImageUsageFlagsANDROID
#endif
    VkResult result = base->dispatch_table.GetSwapchainGrallocUsage2ANDROID(base->dispatch_handle, format__, imageUsage__, swapchainImageUsage__, grallocConsumerUsage, grallocProducerUsage);
#ifdef NEEDS_UNWRAPPING_uint64_t
#endif
#ifdef NEEDS_UNWRAPPING_uint64_t
#endif
    return result;
}
#endif
#ifdef VK_USE_PLATFORM_ANDROID_KHR

static VKAPI_ATTR VkResult VKAPI_CALL
wrapper_tramp_AcquireImageANDROID(
    VkDevice device,
    VkImage image,
    int nativeFenceFd,
    VkSemaphore semaphore,
    VkFence fence)
{
    VK_FROM_HANDLE(wrapper_device, base, device);
VkImage image__ = image;
#ifdef NEEDS_UNWRAPPING_VkImage
    VK_FROM_HANDLE(wrapper_image, w_image, image);
    image__ = w_image->dispatch_handle;
#endif
int nativeFenceFd__ = nativeFenceFd;
#ifdef NEEDS_UNWRAPPING_int
#endif
VkSemaphore semaphore__ = semaphore;
#ifdef NEEDS_UNWRAPPING_VkSemaphore
#endif
VkFence fence__ = fence;
#ifdef NEEDS_UNWRAPPING_VkFence
#endif
    VkResult result = base->dispatch_table.AcquireImageANDROID(base->dispatch_handle, image__, nativeFenceFd__, semaphore__, fence__);

    return result;
}
#endif
#ifdef VK_USE_PLATFORM_ANDROID_KHR

static VKAPI_ATTR VkResult VKAPI_CALL
wrapper_tramp_QueueSignalReleaseImageANDROID(
    VkQueue queue,
    uint32_t waitSemaphoreCount,
    const VkSemaphore* pWaitSemaphores,
    VkImage image,
    int* pNativeFenceFd)
{
    VK_FROM_HANDLE(wrapper_queue, base, queue);
uint32_t waitSemaphoreCount__ = waitSemaphoreCount;
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
const VkSemaphore* pWaitSemaphores__ = pWaitSemaphores;
#ifdef NEEDS_UNWRAPPING_VkSemaphore
#endif
VkImage image__ = image;
#ifdef NEEDS_UNWRAPPING_VkImage
    VK_FROM_HANDLE(wrapper_image, w_image, image);
    image__ = w_image->dispatch_handle;
#endif
    VkResult result = base->device->dispatch_table.QueueSignalReleaseImageANDROID(base->dispatch_handle, waitSemaphoreCount__, pWaitSemaphores__, image__, pNativeFenceFd);
#ifdef NEEDS_UNWRAPPING_int
#endif
    return result;
}
#endif

static VKAPI_ATTR VkResult VKAPI_CALL
wrapper_tramp_GetShaderInfoAMD(
    VkDevice device,
    VkPipeline pipeline,
    VkShaderStageFlagBits shaderStage,
    VkShaderInfoTypeAMD infoType,
    size_t* pInfoSize,
    void* pInfo)
{
    VK_FROM_HANDLE(wrapper_device, base, device);
VkPipeline pipeline__ = pipeline;
#ifdef NEEDS_UNWRAPPING_VkPipeline
#endif
VkShaderStageFlagBits shaderStage__ = shaderStage;
#ifdef NEEDS_UNWRAPPING_VkShaderStageFlagBits
#endif
VkShaderInfoTypeAMD infoType__ = infoType;
#ifdef NEEDS_UNWRAPPING_VkShaderInfoTypeAMD
#endif
    VkResult result = base->dispatch_table.GetShaderInfoAMD(base->dispatch_handle, pipeline__, shaderStage__, infoType__, pInfoSize, pInfo);
#ifdef NEEDS_UNWRAPPING_size_t
#endif
#ifdef NEEDS_UNWRAPPING_void
#endif
    return result;
}

static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_SetLocalDimmingAMD(
    VkDevice device,
    VkSwapchainKHR swapChain,
    VkBool32 localDimmingEnable)
{
    VK_FROM_HANDLE(wrapper_device, base, device);
VkSwapchainKHR swapChain__ = swapChain;
#ifdef NEEDS_UNWRAPPING_VkSwapchainKHR
#endif
VkBool32 localDimmingEnable__ = localDimmingEnable;
#ifdef NEEDS_UNWRAPPING_VkBool32
#endif
    base->dispatch_table.SetLocalDimmingAMD(base->dispatch_handle, swapChain__, localDimmingEnable__);

    return ;
}
        
static VKAPI_ATTR VkResult VKAPI_CALL
wrapper_tramp_GetCalibratedTimestampsKHR(
    VkDevice device,
    uint32_t timestampCount,
    const VkCalibratedTimestampInfoKHR* pTimestampInfos,
    uint64_t* pTimestamps,
    uint64_t* pMaxDeviation)
{
    VK_FROM_HANDLE(wrapper_device, base, device);
uint32_t timestampCount__ = timestampCount;
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
const VkCalibratedTimestampInfoKHR* pTimestampInfos__ = pTimestampInfos;
#ifdef NEEDS_UNWRAPPING_VkCalibratedTimestampInfoKHR
    pTimestampInfos__ = alloca(timestampCount * sizeof(VkCalibratedTimestampInfoKHR));
    for (int i = 0; i < timestampCount; i++)
        unwrap_VkCalibratedTimestampInfoKHR(base, (VkCalibratedTimestampInfoKHR *) &pTimestampInfos__[i], &pTimestampInfos[i]);
#endif
    VkResult result = base->dispatch_table.GetCalibratedTimestampsKHR(base->dispatch_handle, timestampCount__, pTimestampInfos__, pTimestamps, pMaxDeviation);
#ifdef NEEDS_UNWRAPPING_uint64_t
#endif
#ifdef NEEDS_UNWRAPPING_uint64_t
#endif
    return result;
}
    
static VKAPI_ATTR VkResult VKAPI_CALL
wrapper_tramp_SetDebugUtilsObjectNameEXT(
    VkDevice device,
    const VkDebugUtilsObjectNameInfoEXT* pNameInfo)
{
    VK_FROM_HANDLE(wrapper_device, base, device);
const VkDebugUtilsObjectNameInfoEXT* pNameInfo__ = pNameInfo;
#ifdef NEEDS_UNWRAPPING_VkDebugUtilsObjectNameInfoEXT
    VkDebugUtilsObjectNameInfoEXT _w_pNameInfo = { 0 };
    pNameInfo__ = &_w_pNameInfo;
    unwrap_VkDebugUtilsObjectNameInfoEXT(base, (VkDebugUtilsObjectNameInfoEXT *) pNameInfo__, pNameInfo);
#endif
    VkResult result = base->dispatch_table.SetDebugUtilsObjectNameEXT(base->dispatch_handle, pNameInfo__);

    return result;
}

static VKAPI_ATTR VkResult VKAPI_CALL
wrapper_tramp_SetDebugUtilsObjectTagEXT(
    VkDevice device,
    const VkDebugUtilsObjectTagInfoEXT* pTagInfo)
{
    VK_FROM_HANDLE(wrapper_device, base, device);
const VkDebugUtilsObjectTagInfoEXT* pTagInfo__ = pTagInfo;
#ifdef NEEDS_UNWRAPPING_VkDebugUtilsObjectTagInfoEXT
    VkDebugUtilsObjectTagInfoEXT _w_pTagInfo = { 0 };
    pTagInfo__ = &_w_pTagInfo;
    unwrap_VkDebugUtilsObjectTagInfoEXT(base, (VkDebugUtilsObjectTagInfoEXT *) pTagInfo__, pTagInfo);
#endif
    VkResult result = base->dispatch_table.SetDebugUtilsObjectTagEXT(base->dispatch_handle, pTagInfo__);

    return result;
}

static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_QueueBeginDebugUtilsLabelEXT(
    VkQueue queue,
    const VkDebugUtilsLabelEXT* pLabelInfo)
{
    VK_FROM_HANDLE(wrapper_queue, base, queue);
const VkDebugUtilsLabelEXT* pLabelInfo__ = pLabelInfo;
#ifdef NEEDS_UNWRAPPING_VkDebugUtilsLabelEXT
    VkDebugUtilsLabelEXT _w_pLabelInfo = { 0 };
    pLabelInfo__ = &_w_pLabelInfo;
    unwrap_VkDebugUtilsLabelEXT(base->device, (VkDebugUtilsLabelEXT *) pLabelInfo__, pLabelInfo);
#endif
    base->device->dispatch_table.QueueBeginDebugUtilsLabelEXT(base->dispatch_handle, pLabelInfo__);

    return ;
}

static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_QueueEndDebugUtilsLabelEXT(
    VkQueue queue)
{
    VK_FROM_HANDLE(wrapper_queue, base, queue);
    base->device->dispatch_table.QueueEndDebugUtilsLabelEXT(base->dispatch_handle);

    return ;
}

static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_QueueInsertDebugUtilsLabelEXT(
    VkQueue queue,
    const VkDebugUtilsLabelEXT* pLabelInfo)
{
    VK_FROM_HANDLE(wrapper_queue, base, queue);
const VkDebugUtilsLabelEXT* pLabelInfo__ = pLabelInfo;
#ifdef NEEDS_UNWRAPPING_VkDebugUtilsLabelEXT
    VkDebugUtilsLabelEXT _w_pLabelInfo = { 0 };
    pLabelInfo__ = &_w_pLabelInfo;
    unwrap_VkDebugUtilsLabelEXT(base->device, (VkDebugUtilsLabelEXT *) pLabelInfo__, pLabelInfo);
#endif
    base->device->dispatch_table.QueueInsertDebugUtilsLabelEXT(base->dispatch_handle, pLabelInfo__);

    return ;
}

static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_CmdBeginDebugUtilsLabelEXT(
    VkCommandBuffer commandBuffer,
    const VkDebugUtilsLabelEXT* pLabelInfo)
{
    VK_FROM_HANDLE(wrapper_command_buffer, base, commandBuffer);
const VkDebugUtilsLabelEXT* pLabelInfo__ = pLabelInfo;
#ifdef NEEDS_UNWRAPPING_VkDebugUtilsLabelEXT
    VkDebugUtilsLabelEXT _w_pLabelInfo = { 0 };
    pLabelInfo__ = &_w_pLabelInfo;
    unwrap_VkDebugUtilsLabelEXT(base->device, (VkDebugUtilsLabelEXT *) pLabelInfo__, pLabelInfo);
#endif
    base->device->dispatch_table.CmdBeginDebugUtilsLabelEXT(base->dispatch_handle, pLabelInfo__);

    return ;
}

static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_CmdEndDebugUtilsLabelEXT(
    VkCommandBuffer commandBuffer)
{
    VK_FROM_HANDLE(wrapper_command_buffer, base, commandBuffer);
    base->device->dispatch_table.CmdEndDebugUtilsLabelEXT(base->dispatch_handle);

    return ;
}

static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_CmdInsertDebugUtilsLabelEXT(
    VkCommandBuffer commandBuffer,
    const VkDebugUtilsLabelEXT* pLabelInfo)
{
    VK_FROM_HANDLE(wrapper_command_buffer, base, commandBuffer);
const VkDebugUtilsLabelEXT* pLabelInfo__ = pLabelInfo;
#ifdef NEEDS_UNWRAPPING_VkDebugUtilsLabelEXT
    VkDebugUtilsLabelEXT _w_pLabelInfo = { 0 };
    pLabelInfo__ = &_w_pLabelInfo;
    unwrap_VkDebugUtilsLabelEXT(base->device, (VkDebugUtilsLabelEXT *) pLabelInfo__, pLabelInfo);
#endif
    base->device->dispatch_table.CmdInsertDebugUtilsLabelEXT(base->dispatch_handle, pLabelInfo__);

    return ;
}
            
static VKAPI_ATTR VkResult VKAPI_CALL
wrapper_tramp_GetMemoryHostPointerPropertiesEXT(
    VkDevice device,
    VkExternalMemoryHandleTypeFlagBits handleType,
    const void* pHostPointer,
    VkMemoryHostPointerPropertiesEXT* pMemoryHostPointerProperties)
{
    VK_FROM_HANDLE(wrapper_device, base, device);
VkExternalMemoryHandleTypeFlagBits handleType__ = handleType;
#ifdef NEEDS_UNWRAPPING_VkExternalMemoryHandleTypeFlagBits
#endif
const void* pHostPointer__ = pHostPointer;
#ifdef NEEDS_UNWRAPPING_void
#endif
    VkResult result = base->dispatch_table.GetMemoryHostPointerPropertiesEXT(base->dispatch_handle, handleType__, pHostPointer__, pMemoryHostPointerProperties);
#ifdef NEEDS_UNWRAPPING_VkMemoryHostPointerPropertiesEXT
#warning TODO: Repack struct+ptr+out GetMemoryHostPointerPropertiesEXT EntrypointParam(type='VkMemoryHostPointerPropertiesEXT', name='pMemoryHostPointerProperties', decl='VkMemoryHostPointerPropertiesEXT* pMemoryHostPointerProperties', len=None, elem=<Element 'param' at 0x736889954040>, is_const=False, num_pointers=1)
#endif
    return result;
}

static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_CmdWriteBufferMarkerAMD(
    VkCommandBuffer commandBuffer,
    VkPipelineStageFlagBits pipelineStage,
    VkBuffer dstBuffer,
    VkDeviceSize dstOffset,
    uint32_t marker)
{
    VK_FROM_HANDLE(wrapper_command_buffer, base, commandBuffer);
VkPipelineStageFlagBits pipelineStage__ = pipelineStage;
#ifdef NEEDS_UNWRAPPING_VkPipelineStageFlagBits
#endif
VkBuffer dstBuffer__ = dstBuffer;
#ifdef NEEDS_UNWRAPPING_VkBuffer
#endif
VkDeviceSize dstOffset__ = dstOffset;
#ifdef NEEDS_UNWRAPPING_VkDeviceSize
#endif
uint32_t marker__ = marker;
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
    base->device->dispatch_table.CmdWriteBufferMarkerAMD(base->dispatch_handle, pipelineStage__, dstBuffer__, dstOffset__, marker__);

    return ;
}

static VKAPI_ATTR VkResult VKAPI_CALL
wrapper_tramp_CreateRenderPass2(
    VkDevice device,
    const VkRenderPassCreateInfo2* pCreateInfo,
    const VkAllocationCallbacks* pAllocator,
    VkRenderPass* pRenderPass)
{
    VK_FROM_HANDLE(wrapper_device, base, device);
const VkRenderPassCreateInfo2* pCreateInfo__ = pCreateInfo;
#ifdef NEEDS_UNWRAPPING_VkRenderPassCreateInfo2
    VkRenderPassCreateInfo2 _w_pCreateInfo = { 0 };
    pCreateInfo__ = &_w_pCreateInfo;
    unwrap_VkRenderPassCreateInfo2(base, (VkRenderPassCreateInfo2 *) pCreateInfo__, pCreateInfo);
#endif
const VkAllocationCallbacks* pAllocator__ = pAllocator;
#ifdef NEEDS_UNWRAPPING_VkAllocationCallbacks
    VkAllocationCallbacks _w_pAllocator = { 0 };
    pAllocator__ = &_w_pAllocator;
    unwrap_VkAllocationCallbacks(base, (VkAllocationCallbacks *) pAllocator__, pAllocator);
#endif
    VkResult result = base->dispatch_table.CreateRenderPass2(base->dispatch_handle, pCreateInfo__, pAllocator__, pRenderPass);
#ifdef NEEDS_UNWRAPPING_VkRenderPass
#endif
    return result;
}
    
static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_CmdBeginRenderPass2(
    VkCommandBuffer commandBuffer,
    const VkRenderPassBeginInfo*      pRenderPassBegin,
    const VkSubpassBeginInfo*      pSubpassBeginInfo)
{
    VK_FROM_HANDLE(wrapper_command_buffer, base, commandBuffer);
const VkRenderPassBeginInfo*      pRenderPassBegin__ = pRenderPassBegin;
#ifdef NEEDS_UNWRAPPING_VkRenderPassBeginInfo
    VkRenderPassBeginInfo _w_pRenderPassBegin = { 0 };
    pRenderPassBegin__ = &_w_pRenderPassBegin;
    unwrap_VkRenderPassBeginInfo(base->device, (VkRenderPassBeginInfo *) pRenderPassBegin__, pRenderPassBegin);
#endif
const VkSubpassBeginInfo*      pSubpassBeginInfo__ = pSubpassBeginInfo;
#ifdef NEEDS_UNWRAPPING_VkSubpassBeginInfo
    VkSubpassBeginInfo _w_pSubpassBeginInfo = { 0 };
    pSubpassBeginInfo__ = &_w_pSubpassBeginInfo;
    unwrap_VkSubpassBeginInfo(base->device, (VkSubpassBeginInfo *) pSubpassBeginInfo__, pSubpassBeginInfo);
#endif
    base->device->dispatch_table.CmdBeginRenderPass2(base->dispatch_handle, pRenderPassBegin__, pSubpassBeginInfo__);

    return ;
}
    
static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_CmdNextSubpass2(
    VkCommandBuffer commandBuffer,
    const VkSubpassBeginInfo*      pSubpassBeginInfo,
    const VkSubpassEndInfo*        pSubpassEndInfo)
{
    VK_FROM_HANDLE(wrapper_command_buffer, base, commandBuffer);
const VkSubpassBeginInfo*      pSubpassBeginInfo__ = pSubpassBeginInfo;
#ifdef NEEDS_UNWRAPPING_VkSubpassBeginInfo
    VkSubpassBeginInfo _w_pSubpassBeginInfo = { 0 };
    pSubpassBeginInfo__ = &_w_pSubpassBeginInfo;
    unwrap_VkSubpassBeginInfo(base->device, (VkSubpassBeginInfo *) pSubpassBeginInfo__, pSubpassBeginInfo);
#endif
const VkSubpassEndInfo*        pSubpassEndInfo__ = pSubpassEndInfo;
#ifdef NEEDS_UNWRAPPING_VkSubpassEndInfo
    VkSubpassEndInfo _w_pSubpassEndInfo = { 0 };
    pSubpassEndInfo__ = &_w_pSubpassEndInfo;
    unwrap_VkSubpassEndInfo(base->device, (VkSubpassEndInfo *) pSubpassEndInfo__, pSubpassEndInfo);
#endif
    base->device->dispatch_table.CmdNextSubpass2(base->dispatch_handle, pSubpassBeginInfo__, pSubpassEndInfo__);

    return ;
}
    
static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_CmdEndRenderPass2(
    VkCommandBuffer commandBuffer,
    const VkSubpassEndInfo*        pSubpassEndInfo)
{
    VK_FROM_HANDLE(wrapper_command_buffer, base, commandBuffer);
const VkSubpassEndInfo*        pSubpassEndInfo__ = pSubpassEndInfo;
#ifdef NEEDS_UNWRAPPING_VkSubpassEndInfo
    VkSubpassEndInfo _w_pSubpassEndInfo = { 0 };
    pSubpassEndInfo__ = &_w_pSubpassEndInfo;
    unwrap_VkSubpassEndInfo(base->device, (VkSubpassEndInfo *) pSubpassEndInfo__, pSubpassEndInfo);
#endif
    base->device->dispatch_table.CmdEndRenderPass2(base->dispatch_handle, pSubpassEndInfo__);

    return ;
}
    
static VKAPI_ATTR VkResult VKAPI_CALL
wrapper_tramp_GetSemaphoreCounterValue(
    VkDevice device,
    VkSemaphore semaphore,
    uint64_t* pValue)
{
    VK_FROM_HANDLE(wrapper_device, base, device);
VkSemaphore semaphore__ = semaphore;
#ifdef NEEDS_UNWRAPPING_VkSemaphore
#endif
    VkResult result = base->dispatch_table.GetSemaphoreCounterValue(base->dispatch_handle, semaphore__, pValue);
#ifdef NEEDS_UNWRAPPING_uint64_t
#endif
    return result;
}
    
static VKAPI_ATTR VkResult VKAPI_CALL
wrapper_tramp_WaitSemaphores(
    VkDevice device,
    const VkSemaphoreWaitInfo* pWaitInfo,
    uint64_t timeout)
{
    VK_FROM_HANDLE(wrapper_device, base, device);
const VkSemaphoreWaitInfo* pWaitInfo__ = pWaitInfo;
#ifdef NEEDS_UNWRAPPING_VkSemaphoreWaitInfo
    VkSemaphoreWaitInfo _w_pWaitInfo = { 0 };
    pWaitInfo__ = &_w_pWaitInfo;
    unwrap_VkSemaphoreWaitInfo(base, (VkSemaphoreWaitInfo *) pWaitInfo__, pWaitInfo);
#endif
uint64_t timeout__ = timeout;
#ifdef NEEDS_UNWRAPPING_uint64_t
#endif
    VkResult result = base->dispatch_table.WaitSemaphores(base->dispatch_handle, pWaitInfo__, timeout__);

    return result;
}
    
static VKAPI_ATTR VkResult VKAPI_CALL
wrapper_tramp_SignalSemaphore(
    VkDevice device,
    const VkSemaphoreSignalInfo* pSignalInfo)
{
    VK_FROM_HANDLE(wrapper_device, base, device);
const VkSemaphoreSignalInfo* pSignalInfo__ = pSignalInfo;
#ifdef NEEDS_UNWRAPPING_VkSemaphoreSignalInfo
    VkSemaphoreSignalInfo _w_pSignalInfo = { 0 };
    pSignalInfo__ = &_w_pSignalInfo;
    unwrap_VkSemaphoreSignalInfo(base, (VkSemaphoreSignalInfo *) pSignalInfo__, pSignalInfo);
#endif
    VkResult result = base->dispatch_table.SignalSemaphore(base->dispatch_handle, pSignalInfo__);

    return result;
}
    #ifdef VK_USE_PLATFORM_ANDROID_KHR

static VKAPI_ATTR VkResult VKAPI_CALL
wrapper_tramp_GetAndroidHardwareBufferPropertiesANDROID(
    VkDevice device,
    const struct AHardwareBuffer* buffer,
    VkAndroidHardwareBufferPropertiesANDROID* pProperties)
{
    VK_FROM_HANDLE(wrapper_device, base, device);
const struct AHardwareBuffer* buffer__ = buffer;
#ifdef NEEDS_UNWRAPPING_AHardwareBuffer
#endif
    VkResult result = base->dispatch_table.GetAndroidHardwareBufferPropertiesANDROID(base->dispatch_handle, buffer__, pProperties);
#ifdef NEEDS_UNWRAPPING_VkAndroidHardwareBufferPropertiesANDROID
#warning TODO: Repack struct+ptr+out GetAndroidHardwareBufferPropertiesANDROID EntrypointParam(type='VkAndroidHardwareBufferPropertiesANDROID', name='pProperties', decl='VkAndroidHardwareBufferPropertiesANDROID* pProperties', len=None, elem=<Element 'param' at 0x736889956b60>, is_const=False, num_pointers=1)
#endif
    return result;
}
#endif
#ifdef VK_USE_PLATFORM_ANDROID_KHR

static VKAPI_ATTR VkResult VKAPI_CALL
wrapper_tramp_GetMemoryAndroidHardwareBufferANDROID(
    VkDevice device,
    const VkMemoryGetAndroidHardwareBufferInfoANDROID* pInfo,
    struct AHardwareBuffer** pBuffer)
{
    VK_FROM_HANDLE(wrapper_device, base, device);
const VkMemoryGetAndroidHardwareBufferInfoANDROID* pInfo__ = pInfo;
#ifdef NEEDS_UNWRAPPING_VkMemoryGetAndroidHardwareBufferInfoANDROID
    VkMemoryGetAndroidHardwareBufferInfoANDROID _w_pInfo = { 0 };
    pInfo__ = &_w_pInfo;
    unwrap_VkMemoryGetAndroidHardwareBufferInfoANDROID(base, (VkMemoryGetAndroidHardwareBufferInfoANDROID *) pInfo__, pInfo);
#endif
    VkResult result = base->dispatch_table.GetMemoryAndroidHardwareBufferANDROID(base->dispatch_handle, pInfo__, pBuffer);
#ifdef NEEDS_UNWRAPPING_AHardwareBuffer
#endif
    return result;
}
#endif

static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_CmdDrawIndirectCount(
    VkCommandBuffer commandBuffer,
    VkBuffer buffer,
    VkDeviceSize offset,
    VkBuffer countBuffer,
    VkDeviceSize countBufferOffset,
    uint32_t maxDrawCount,
    uint32_t stride)
{
    VK_FROM_HANDLE(wrapper_command_buffer, base, commandBuffer);
VkBuffer buffer__ = buffer;
#ifdef NEEDS_UNWRAPPING_VkBuffer
#endif
VkDeviceSize offset__ = offset;
#ifdef NEEDS_UNWRAPPING_VkDeviceSize
#endif
VkBuffer countBuffer__ = countBuffer;
#ifdef NEEDS_UNWRAPPING_VkBuffer
#endif
VkDeviceSize countBufferOffset__ = countBufferOffset;
#ifdef NEEDS_UNWRAPPING_VkDeviceSize
#endif
uint32_t maxDrawCount__ = maxDrawCount;
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
uint32_t stride__ = stride;
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
    base->device->dispatch_table.CmdDrawIndirectCount(base->dispatch_handle, buffer__, offset__, countBuffer__, countBufferOffset__, maxDrawCount__, stride__);

    return ;
}
        
static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_CmdDrawIndexedIndirectCount(
    VkCommandBuffer commandBuffer,
    VkBuffer buffer,
    VkDeviceSize offset,
    VkBuffer countBuffer,
    VkDeviceSize countBufferOffset,
    uint32_t maxDrawCount,
    uint32_t stride)
{
    VK_FROM_HANDLE(wrapper_command_buffer, base, commandBuffer);
VkBuffer buffer__ = buffer;
#ifdef NEEDS_UNWRAPPING_VkBuffer
#endif
VkDeviceSize offset__ = offset;
#ifdef NEEDS_UNWRAPPING_VkDeviceSize
#endif
VkBuffer countBuffer__ = countBuffer;
#ifdef NEEDS_UNWRAPPING_VkBuffer
#endif
VkDeviceSize countBufferOffset__ = countBufferOffset;
#ifdef NEEDS_UNWRAPPING_VkDeviceSize
#endif
uint32_t maxDrawCount__ = maxDrawCount;
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
uint32_t stride__ = stride;
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
    base->device->dispatch_table.CmdDrawIndexedIndirectCount(base->dispatch_handle, buffer__, offset__, countBuffer__, countBufferOffset__, maxDrawCount__, stride__);

    return ;
}
        
static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_CmdSetCheckpointNV(
    VkCommandBuffer commandBuffer,
    const void* pCheckpointMarker)
{
    VK_FROM_HANDLE(wrapper_command_buffer, base, commandBuffer);
const void* pCheckpointMarker__ = pCheckpointMarker;
#ifdef NEEDS_UNWRAPPING_void
#endif
    base->device->dispatch_table.CmdSetCheckpointNV(base->dispatch_handle, pCheckpointMarker__);

    return ;
}

static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_GetQueueCheckpointDataNV(
    VkQueue queue,
    uint32_t* pCheckpointDataCount,
    VkCheckpointDataNV* pCheckpointData)
{
    VK_FROM_HANDLE(wrapper_queue, base, queue);
    base->device->dispatch_table.GetQueueCheckpointDataNV(base->dispatch_handle, pCheckpointDataCount, pCheckpointData);
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
#ifdef NEEDS_UNWRAPPING_VkCheckpointDataNV
#warning TODO: Repack struct+array+out GetQueueCheckpointDataNV EntrypointParam(type='VkCheckpointDataNV', name='pCheckpointData', decl='VkCheckpointDataNV* pCheckpointData', len='pCheckpointDataCount', elem=<Element 'param' at 0x736889960ae0>, is_const=False, num_pointers=1)
#endif
    return ;
}

static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_CmdBindTransformFeedbackBuffersEXT(
    VkCommandBuffer commandBuffer,
    uint32_t firstBinding,
    uint32_t bindingCount,
    const VkBuffer* pBuffers,
    const VkDeviceSize* pOffsets,
    const VkDeviceSize* pSizes)
{
    VK_FROM_HANDLE(wrapper_command_buffer, base, commandBuffer);
uint32_t firstBinding__ = firstBinding;
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
uint32_t bindingCount__ = bindingCount;
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
const VkBuffer* pBuffers__ = pBuffers;
#ifdef NEEDS_UNWRAPPING_VkBuffer
#endif
const VkDeviceSize* pOffsets__ = pOffsets;
#ifdef NEEDS_UNWRAPPING_VkDeviceSize
#endif
const VkDeviceSize* pSizes__ = pSizes;
#ifdef NEEDS_UNWRAPPING_VkDeviceSize
#endif
    base->device->dispatch_table.CmdBindTransformFeedbackBuffersEXT(base->dispatch_handle, firstBinding__, bindingCount__, pBuffers__, pOffsets__, pSizes__);

    return ;
}

static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_CmdBeginTransformFeedbackEXT(
    VkCommandBuffer commandBuffer,
    uint32_t firstCounterBuffer,
    uint32_t counterBufferCount,
    const VkBuffer* pCounterBuffers,
    const VkDeviceSize* pCounterBufferOffsets)
{
    VK_FROM_HANDLE(wrapper_command_buffer, base, commandBuffer);
uint32_t firstCounterBuffer__ = firstCounterBuffer;
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
uint32_t counterBufferCount__ = counterBufferCount;
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
const VkBuffer* pCounterBuffers__ = pCounterBuffers;
#ifdef NEEDS_UNWRAPPING_VkBuffer
#endif
const VkDeviceSize* pCounterBufferOffsets__ = pCounterBufferOffsets;
#ifdef NEEDS_UNWRAPPING_VkDeviceSize
#endif
    base->device->dispatch_table.CmdBeginTransformFeedbackEXT(base->dispatch_handle, firstCounterBuffer__, counterBufferCount__, pCounterBuffers__, pCounterBufferOffsets__);

    return ;
}

static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_CmdEndTransformFeedbackEXT(
    VkCommandBuffer commandBuffer,
    uint32_t firstCounterBuffer,
    uint32_t counterBufferCount,
    const VkBuffer* pCounterBuffers,
    const VkDeviceSize* pCounterBufferOffsets)
{
    VK_FROM_HANDLE(wrapper_command_buffer, base, commandBuffer);
uint32_t firstCounterBuffer__ = firstCounterBuffer;
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
uint32_t counterBufferCount__ = counterBufferCount;
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
const VkBuffer* pCounterBuffers__ = pCounterBuffers;
#ifdef NEEDS_UNWRAPPING_VkBuffer
#endif
const VkDeviceSize* pCounterBufferOffsets__ = pCounterBufferOffsets;
#ifdef NEEDS_UNWRAPPING_VkDeviceSize
#endif
    base->device->dispatch_table.CmdEndTransformFeedbackEXT(base->dispatch_handle, firstCounterBuffer__, counterBufferCount__, pCounterBuffers__, pCounterBufferOffsets__);

    return ;
}

static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_CmdBeginQueryIndexedEXT(
    VkCommandBuffer commandBuffer,
    VkQueryPool queryPool,
    uint32_t query,
    VkQueryControlFlags flags,
    uint32_t index)
{
    VK_FROM_HANDLE(wrapper_command_buffer, base, commandBuffer);
VkQueryPool queryPool__ = queryPool;
#ifdef NEEDS_UNWRAPPING_VkQueryPool
#endif
uint32_t query__ = query;
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
VkQueryControlFlags flags__ = flags;
#ifdef NEEDS_UNWRAPPING_VkQueryControlFlags
#endif
uint32_t index__ = index;
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
    base->device->dispatch_table.CmdBeginQueryIndexedEXT(base->dispatch_handle, queryPool__, query__, flags__, index__);

    return ;
}

static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_CmdEndQueryIndexedEXT(
    VkCommandBuffer commandBuffer,
    VkQueryPool queryPool,
    uint32_t query,
    uint32_t index)
{
    VK_FROM_HANDLE(wrapper_command_buffer, base, commandBuffer);
VkQueryPool queryPool__ = queryPool;
#ifdef NEEDS_UNWRAPPING_VkQueryPool
#endif
uint32_t query__ = query;
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
uint32_t index__ = index;
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
    base->device->dispatch_table.CmdEndQueryIndexedEXT(base->dispatch_handle, queryPool__, query__, index__);

    return ;
}

static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_CmdDrawIndirectByteCountEXT(
    VkCommandBuffer commandBuffer,
    uint32_t instanceCount,
    uint32_t firstInstance,
    VkBuffer counterBuffer,
    VkDeviceSize counterBufferOffset,
    uint32_t counterOffset,
    uint32_t vertexStride)
{
    VK_FROM_HANDLE(wrapper_command_buffer, base, commandBuffer);
uint32_t instanceCount__ = instanceCount;
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
uint32_t firstInstance__ = firstInstance;
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
VkBuffer counterBuffer__ = counterBuffer;
#ifdef NEEDS_UNWRAPPING_VkBuffer
#endif
VkDeviceSize counterBufferOffset__ = counterBufferOffset;
#ifdef NEEDS_UNWRAPPING_VkDeviceSize
#endif
uint32_t counterOffset__ = counterOffset;
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
uint32_t vertexStride__ = vertexStride;
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
    base->device->dispatch_table.CmdDrawIndirectByteCountEXT(base->dispatch_handle, instanceCount__, firstInstance__, counterBuffer__, counterBufferOffset__, counterOffset__, vertexStride__);

    return ;
}

static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_CmdSetExclusiveScissorNV(
    VkCommandBuffer commandBuffer,
    uint32_t firstExclusiveScissor,
    uint32_t exclusiveScissorCount,
    const VkRect2D* pExclusiveScissors)
{
    VK_FROM_HANDLE(wrapper_command_buffer, base, commandBuffer);
uint32_t firstExclusiveScissor__ = firstExclusiveScissor;
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
uint32_t exclusiveScissorCount__ = exclusiveScissorCount;
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
const VkRect2D* pExclusiveScissors__ = pExclusiveScissors;
#ifdef NEEDS_UNWRAPPING_VkRect2D
    pExclusiveScissors__ = alloca(exclusiveScissorCount * sizeof(VkRect2D));
    for (int i = 0; i < exclusiveScissorCount; i++)
        unwrap_VkRect2D(base->device, (VkRect2D *) &pExclusiveScissors__[i], &pExclusiveScissors[i]);
#endif
    base->device->dispatch_table.CmdSetExclusiveScissorNV(base->dispatch_handle, firstExclusiveScissor__, exclusiveScissorCount__, pExclusiveScissors__);

    return ;
}

static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_CmdSetExclusiveScissorEnableNV(
    VkCommandBuffer commandBuffer,
    uint32_t firstExclusiveScissor,
    uint32_t exclusiveScissorCount,
    const VkBool32* pExclusiveScissorEnables)
{
    VK_FROM_HANDLE(wrapper_command_buffer, base, commandBuffer);
uint32_t firstExclusiveScissor__ = firstExclusiveScissor;
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
uint32_t exclusiveScissorCount__ = exclusiveScissorCount;
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
const VkBool32* pExclusiveScissorEnables__ = pExclusiveScissorEnables;
#ifdef NEEDS_UNWRAPPING_VkBool32
#endif
    base->device->dispatch_table.CmdSetExclusiveScissorEnableNV(base->dispatch_handle, firstExclusiveScissor__, exclusiveScissorCount__, pExclusiveScissorEnables__);

    return ;
}

static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_CmdBindShadingRateImageNV(
    VkCommandBuffer commandBuffer,
    VkImageView imageView,
    VkImageLayout imageLayout)
{
    VK_FROM_HANDLE(wrapper_command_buffer, base, commandBuffer);
VkImageView imageView__ = imageView;
#ifdef NEEDS_UNWRAPPING_VkImageView
#endif
VkImageLayout imageLayout__ = imageLayout;
#ifdef NEEDS_UNWRAPPING_VkImageLayout
#endif
    base->device->dispatch_table.CmdBindShadingRateImageNV(base->dispatch_handle, imageView__, imageLayout__);

    return ;
}

static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_CmdSetViewportShadingRatePaletteNV(
    VkCommandBuffer commandBuffer,
    uint32_t firstViewport,
    uint32_t viewportCount,
    const VkShadingRatePaletteNV* pShadingRatePalettes)
{
    VK_FROM_HANDLE(wrapper_command_buffer, base, commandBuffer);
uint32_t firstViewport__ = firstViewport;
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
uint32_t viewportCount__ = viewportCount;
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
const VkShadingRatePaletteNV* pShadingRatePalettes__ = pShadingRatePalettes;
#ifdef NEEDS_UNWRAPPING_VkShadingRatePaletteNV
    pShadingRatePalettes__ = alloca(viewportCount * sizeof(VkShadingRatePaletteNV));
    for (int i = 0; i < viewportCount; i++)
        unwrap_VkShadingRatePaletteNV(base->device, (VkShadingRatePaletteNV *) &pShadingRatePalettes__[i], &pShadingRatePalettes[i]);
#endif
    base->device->dispatch_table.CmdSetViewportShadingRatePaletteNV(base->dispatch_handle, firstViewport__, viewportCount__, pShadingRatePalettes__);

    return ;
}

static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_CmdSetCoarseSampleOrderNV(
    VkCommandBuffer commandBuffer,
    VkCoarseSampleOrderTypeNV sampleOrderType,
    uint32_t customSampleOrderCount,
    const VkCoarseSampleOrderCustomNV* pCustomSampleOrders)
{
    VK_FROM_HANDLE(wrapper_command_buffer, base, commandBuffer);
VkCoarseSampleOrderTypeNV sampleOrderType__ = sampleOrderType;
#ifdef NEEDS_UNWRAPPING_VkCoarseSampleOrderTypeNV
#endif
uint32_t customSampleOrderCount__ = customSampleOrderCount;
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
const VkCoarseSampleOrderCustomNV* pCustomSampleOrders__ = pCustomSampleOrders;
#ifdef NEEDS_UNWRAPPING_VkCoarseSampleOrderCustomNV
    pCustomSampleOrders__ = alloca(customSampleOrderCount * sizeof(VkCoarseSampleOrderCustomNV));
    for (int i = 0; i < customSampleOrderCount; i++)
        unwrap_VkCoarseSampleOrderCustomNV(base->device, (VkCoarseSampleOrderCustomNV *) &pCustomSampleOrders__[i], &pCustomSampleOrders[i]);
#endif
    base->device->dispatch_table.CmdSetCoarseSampleOrderNV(base->dispatch_handle, sampleOrderType__, customSampleOrderCount__, pCustomSampleOrders__);

    return ;
}

static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_CmdDrawMeshTasksNV(
    VkCommandBuffer commandBuffer,
    uint32_t taskCount,
    uint32_t firstTask)
{
    VK_FROM_HANDLE(wrapper_command_buffer, base, commandBuffer);
uint32_t taskCount__ = taskCount;
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
uint32_t firstTask__ = firstTask;
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
    base->device->dispatch_table.CmdDrawMeshTasksNV(base->dispatch_handle, taskCount__, firstTask__);

    return ;
}

static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_CmdDrawMeshTasksIndirectNV(
    VkCommandBuffer commandBuffer,
    VkBuffer buffer,
    VkDeviceSize offset,
    uint32_t drawCount,
    uint32_t stride)
{
    VK_FROM_HANDLE(wrapper_command_buffer, base, commandBuffer);
VkBuffer buffer__ = buffer;
#ifdef NEEDS_UNWRAPPING_VkBuffer
#endif
VkDeviceSize offset__ = offset;
#ifdef NEEDS_UNWRAPPING_VkDeviceSize
#endif
uint32_t drawCount__ = drawCount;
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
uint32_t stride__ = stride;
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
    base->device->dispatch_table.CmdDrawMeshTasksIndirectNV(base->dispatch_handle, buffer__, offset__, drawCount__, stride__);

    return ;
}

static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_CmdDrawMeshTasksIndirectCountNV(
    VkCommandBuffer commandBuffer,
    VkBuffer buffer,
    VkDeviceSize offset,
    VkBuffer countBuffer,
    VkDeviceSize countBufferOffset,
    uint32_t maxDrawCount,
    uint32_t stride)
{
    VK_FROM_HANDLE(wrapper_command_buffer, base, commandBuffer);
VkBuffer buffer__ = buffer;
#ifdef NEEDS_UNWRAPPING_VkBuffer
#endif
VkDeviceSize offset__ = offset;
#ifdef NEEDS_UNWRAPPING_VkDeviceSize
#endif
VkBuffer countBuffer__ = countBuffer;
#ifdef NEEDS_UNWRAPPING_VkBuffer
#endif
VkDeviceSize countBufferOffset__ = countBufferOffset;
#ifdef NEEDS_UNWRAPPING_VkDeviceSize
#endif
uint32_t maxDrawCount__ = maxDrawCount;
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
uint32_t stride__ = stride;
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
    base->device->dispatch_table.CmdDrawMeshTasksIndirectCountNV(base->dispatch_handle, buffer__, offset__, countBuffer__, countBufferOffset__, maxDrawCount__, stride__);

    return ;
}

static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_CmdDrawMeshTasksEXT(
    VkCommandBuffer commandBuffer,
    uint32_t groupCountX,
    uint32_t groupCountY,
    uint32_t groupCountZ)
{
    VK_FROM_HANDLE(wrapper_command_buffer, base, commandBuffer);
uint32_t groupCountX__ = groupCountX;
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
uint32_t groupCountY__ = groupCountY;
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
uint32_t groupCountZ__ = groupCountZ;
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
    base->device->dispatch_table.CmdDrawMeshTasksEXT(base->dispatch_handle, groupCountX__, groupCountY__, groupCountZ__);

    return ;
}

static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_CmdDrawMeshTasksIndirectEXT(
    VkCommandBuffer commandBuffer,
    VkBuffer buffer,
    VkDeviceSize offset,
    uint32_t drawCount,
    uint32_t stride)
{
    VK_FROM_HANDLE(wrapper_command_buffer, base, commandBuffer);
VkBuffer buffer__ = buffer;
#ifdef NEEDS_UNWRAPPING_VkBuffer
#endif
VkDeviceSize offset__ = offset;
#ifdef NEEDS_UNWRAPPING_VkDeviceSize
#endif
uint32_t drawCount__ = drawCount;
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
uint32_t stride__ = stride;
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
    base->device->dispatch_table.CmdDrawMeshTasksIndirectEXT(base->dispatch_handle, buffer__, offset__, drawCount__, stride__);

    return ;
}

static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_CmdDrawMeshTasksIndirectCountEXT(
    VkCommandBuffer commandBuffer,
    VkBuffer buffer,
    VkDeviceSize offset,
    VkBuffer countBuffer,
    VkDeviceSize countBufferOffset,
    uint32_t maxDrawCount,
    uint32_t stride)
{
    VK_FROM_HANDLE(wrapper_command_buffer, base, commandBuffer);
VkBuffer buffer__ = buffer;
#ifdef NEEDS_UNWRAPPING_VkBuffer
#endif
VkDeviceSize offset__ = offset;
#ifdef NEEDS_UNWRAPPING_VkDeviceSize
#endif
VkBuffer countBuffer__ = countBuffer;
#ifdef NEEDS_UNWRAPPING_VkBuffer
#endif
VkDeviceSize countBufferOffset__ = countBufferOffset;
#ifdef NEEDS_UNWRAPPING_VkDeviceSize
#endif
uint32_t maxDrawCount__ = maxDrawCount;
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
uint32_t stride__ = stride;
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
    base->device->dispatch_table.CmdDrawMeshTasksIndirectCountEXT(base->dispatch_handle, buffer__, offset__, countBuffer__, countBufferOffset__, maxDrawCount__, stride__);

    return ;
}

static VKAPI_ATTR VkResult VKAPI_CALL
wrapper_tramp_CompileDeferredNV(
    VkDevice device,
    VkPipeline pipeline,
    uint32_t shader)
{
    VK_FROM_HANDLE(wrapper_device, base, device);
VkPipeline pipeline__ = pipeline;
#ifdef NEEDS_UNWRAPPING_VkPipeline
#endif
uint32_t shader__ = shader;
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
    VkResult result = base->dispatch_table.CompileDeferredNV(base->dispatch_handle, pipeline__, shader__);

    return result;
}

static VKAPI_ATTR VkResult VKAPI_CALL
wrapper_tramp_CreateAccelerationStructureNV(
    VkDevice device,
    const VkAccelerationStructureCreateInfoNV* pCreateInfo,
    const VkAllocationCallbacks* pAllocator,
    VkAccelerationStructureNV* pAccelerationStructure)
{
    VK_FROM_HANDLE(wrapper_device, base, device);
const VkAccelerationStructureCreateInfoNV* pCreateInfo__ = pCreateInfo;
#ifdef NEEDS_UNWRAPPING_VkAccelerationStructureCreateInfoNV
    VkAccelerationStructureCreateInfoNV _w_pCreateInfo = { 0 };
    pCreateInfo__ = &_w_pCreateInfo;
    unwrap_VkAccelerationStructureCreateInfoNV(base, (VkAccelerationStructureCreateInfoNV *) pCreateInfo__, pCreateInfo);
#endif
const VkAllocationCallbacks* pAllocator__ = pAllocator;
#ifdef NEEDS_UNWRAPPING_VkAllocationCallbacks
    VkAllocationCallbacks _w_pAllocator = { 0 };
    pAllocator__ = &_w_pAllocator;
    unwrap_VkAllocationCallbacks(base, (VkAllocationCallbacks *) pAllocator__, pAllocator);
#endif
    VkResult result = base->dispatch_table.CreateAccelerationStructureNV(base->dispatch_handle, pCreateInfo__, pAllocator__, pAccelerationStructure);
#ifdef NEEDS_UNWRAPPING_VkAccelerationStructureNV
#endif
    return result;
}

static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_CmdBindInvocationMaskHUAWEI(
    VkCommandBuffer commandBuffer,
    VkImageView imageView,
    VkImageLayout imageLayout)
{
    VK_FROM_HANDLE(wrapper_command_buffer, base, commandBuffer);
VkImageView imageView__ = imageView;
#ifdef NEEDS_UNWRAPPING_VkImageView
#endif
VkImageLayout imageLayout__ = imageLayout;
#ifdef NEEDS_UNWRAPPING_VkImageLayout
#endif
    base->device->dispatch_table.CmdBindInvocationMaskHUAWEI(base->dispatch_handle, imageView__, imageLayout__);

    return ;
}

static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_DestroyAccelerationStructureKHR(
    VkDevice device,
    VkAccelerationStructureKHR accelerationStructure,
    const VkAllocationCallbacks* pAllocator)
{
    VK_FROM_HANDLE(wrapper_device, base, device);
VkAccelerationStructureKHR accelerationStructure__ = accelerationStructure;
#ifdef NEEDS_UNWRAPPING_VkAccelerationStructureKHR
#endif
const VkAllocationCallbacks* pAllocator__ = pAllocator;
#ifdef NEEDS_UNWRAPPING_VkAllocationCallbacks
    VkAllocationCallbacks _w_pAllocator = { 0 };
    pAllocator__ = &_w_pAllocator;
    unwrap_VkAllocationCallbacks(base, (VkAllocationCallbacks *) pAllocator__, pAllocator);
#endif
    base->dispatch_table.DestroyAccelerationStructureKHR(base->dispatch_handle, accelerationStructure__, pAllocator__);

    return ;
}

static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_DestroyAccelerationStructureNV(
    VkDevice device,
    VkAccelerationStructureNV accelerationStructure,
    const VkAllocationCallbacks* pAllocator)
{
    VK_FROM_HANDLE(wrapper_device, base, device);
VkAccelerationStructureNV accelerationStructure__ = accelerationStructure;
#ifdef NEEDS_UNWRAPPING_VkAccelerationStructureNV
#endif
const VkAllocationCallbacks* pAllocator__ = pAllocator;
#ifdef NEEDS_UNWRAPPING_VkAllocationCallbacks
    VkAllocationCallbacks _w_pAllocator = { 0 };
    pAllocator__ = &_w_pAllocator;
    unwrap_VkAllocationCallbacks(base, (VkAllocationCallbacks *) pAllocator__, pAllocator);
#endif
    base->dispatch_table.DestroyAccelerationStructureNV(base->dispatch_handle, accelerationStructure__, pAllocator__);

    return ;
}

static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_GetAccelerationStructureMemoryRequirementsNV(
    VkDevice device,
    const VkAccelerationStructureMemoryRequirementsInfoNV* pInfo,
    VkMemoryRequirements2KHR* pMemoryRequirements)
{
    VK_FROM_HANDLE(wrapper_device, base, device);
const VkAccelerationStructureMemoryRequirementsInfoNV* pInfo__ = pInfo;
#ifdef NEEDS_UNWRAPPING_VkAccelerationStructureMemoryRequirementsInfoNV
    VkAccelerationStructureMemoryRequirementsInfoNV _w_pInfo = { 0 };
    pInfo__ = &_w_pInfo;
    unwrap_VkAccelerationStructureMemoryRequirementsInfoNV(base, (VkAccelerationStructureMemoryRequirementsInfoNV *) pInfo__, pInfo);
#endif
    base->dispatch_table.GetAccelerationStructureMemoryRequirementsNV(base->dispatch_handle, pInfo__, pMemoryRequirements);
#ifdef NEEDS_UNWRAPPING_VkMemoryRequirements2KHR
#warning TODO: Repack struct+ptr+out GetAccelerationStructureMemoryRequirementsNV EntrypointParam(type='VkMemoryRequirements2KHR', name='pMemoryRequirements', decl='VkMemoryRequirements2KHR* pMemoryRequirements', len=None, elem=<Element 'param' at 0x73688997cf90>, is_const=False, num_pointers=1)
#endif
    return ;
}

static VKAPI_ATTR VkResult VKAPI_CALL
wrapper_tramp_BindAccelerationStructureMemoryNV(
    VkDevice device,
    uint32_t bindInfoCount,
    const VkBindAccelerationStructureMemoryInfoNV* pBindInfos)
{
    VK_FROM_HANDLE(wrapper_device, base, device);
uint32_t bindInfoCount__ = bindInfoCount;
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
const VkBindAccelerationStructureMemoryInfoNV* pBindInfos__ = pBindInfos;
#ifdef NEEDS_UNWRAPPING_VkBindAccelerationStructureMemoryInfoNV
    pBindInfos__ = alloca(bindInfoCount * sizeof(VkBindAccelerationStructureMemoryInfoNV));
    for (int i = 0; i < bindInfoCount; i++)
        unwrap_VkBindAccelerationStructureMemoryInfoNV(base, (VkBindAccelerationStructureMemoryInfoNV *) &pBindInfos__[i], &pBindInfos[i]);
#endif
    VkResult result = base->dispatch_table.BindAccelerationStructureMemoryNV(base->dispatch_handle, bindInfoCount__, pBindInfos__);

    return result;
}

static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_CmdCopyAccelerationStructureNV(
    VkCommandBuffer commandBuffer,
    VkAccelerationStructureNV dst,
    VkAccelerationStructureNV src,
    VkCopyAccelerationStructureModeKHR mode)
{
    VK_FROM_HANDLE(wrapper_command_buffer, base, commandBuffer);
VkAccelerationStructureNV dst__ = dst;
#ifdef NEEDS_UNWRAPPING_VkAccelerationStructureNV
#endif
VkAccelerationStructureNV src__ = src;
#ifdef NEEDS_UNWRAPPING_VkAccelerationStructureNV
#endif
VkCopyAccelerationStructureModeKHR mode__ = mode;
#ifdef NEEDS_UNWRAPPING_VkCopyAccelerationStructureModeKHR
#endif
    base->device->dispatch_table.CmdCopyAccelerationStructureNV(base->dispatch_handle, dst__, src__, mode__);

    return ;
}

static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_CmdCopyAccelerationStructureKHR(
    VkCommandBuffer commandBuffer,
    const VkCopyAccelerationStructureInfoKHR* pInfo)
{
    VK_FROM_HANDLE(wrapper_command_buffer, base, commandBuffer);
const VkCopyAccelerationStructureInfoKHR* pInfo__ = pInfo;
#ifdef NEEDS_UNWRAPPING_VkCopyAccelerationStructureInfoKHR
    VkCopyAccelerationStructureInfoKHR _w_pInfo = { 0 };
    pInfo__ = &_w_pInfo;
    unwrap_VkCopyAccelerationStructureInfoKHR(base->device, (VkCopyAccelerationStructureInfoKHR *) pInfo__, pInfo);
#endif
    base->device->dispatch_table.CmdCopyAccelerationStructureKHR(base->dispatch_handle, pInfo__);

    return ;
}

static VKAPI_ATTR VkResult VKAPI_CALL
wrapper_tramp_CopyAccelerationStructureKHR(
    VkDevice device,
    VkDeferredOperationKHR deferredOperation,
    const VkCopyAccelerationStructureInfoKHR* pInfo)
{
    VK_FROM_HANDLE(wrapper_device, base, device);
VkDeferredOperationKHR deferredOperation__ = deferredOperation;
#ifdef NEEDS_UNWRAPPING_VkDeferredOperationKHR
#endif
const VkCopyAccelerationStructureInfoKHR* pInfo__ = pInfo;
#ifdef NEEDS_UNWRAPPING_VkCopyAccelerationStructureInfoKHR
    VkCopyAccelerationStructureInfoKHR _w_pInfo = { 0 };
    pInfo__ = &_w_pInfo;
    unwrap_VkCopyAccelerationStructureInfoKHR(base, (VkCopyAccelerationStructureInfoKHR *) pInfo__, pInfo);
#endif
    VkResult result = base->dispatch_table.CopyAccelerationStructureKHR(base->dispatch_handle, deferredOperation__, pInfo__);

    return result;
}

static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_CmdCopyAccelerationStructureToMemoryKHR(
    VkCommandBuffer commandBuffer,
    const VkCopyAccelerationStructureToMemoryInfoKHR* pInfo)
{
    VK_FROM_HANDLE(wrapper_command_buffer, base, commandBuffer);
const VkCopyAccelerationStructureToMemoryInfoKHR* pInfo__ = pInfo;
#ifdef NEEDS_UNWRAPPING_VkCopyAccelerationStructureToMemoryInfoKHR
    VkCopyAccelerationStructureToMemoryInfoKHR _w_pInfo = { 0 };
    pInfo__ = &_w_pInfo;
    unwrap_VkCopyAccelerationStructureToMemoryInfoKHR(base->device, (VkCopyAccelerationStructureToMemoryInfoKHR *) pInfo__, pInfo);
#endif
    base->device->dispatch_table.CmdCopyAccelerationStructureToMemoryKHR(base->dispatch_handle, pInfo__);

    return ;
}

static VKAPI_ATTR VkResult VKAPI_CALL
wrapper_tramp_CopyAccelerationStructureToMemoryKHR(
    VkDevice device,
    VkDeferredOperationKHR deferredOperation,
    const VkCopyAccelerationStructureToMemoryInfoKHR* pInfo)
{
    VK_FROM_HANDLE(wrapper_device, base, device);
VkDeferredOperationKHR deferredOperation__ = deferredOperation;
#ifdef NEEDS_UNWRAPPING_VkDeferredOperationKHR
#endif
const VkCopyAccelerationStructureToMemoryInfoKHR* pInfo__ = pInfo;
#ifdef NEEDS_UNWRAPPING_VkCopyAccelerationStructureToMemoryInfoKHR
    VkCopyAccelerationStructureToMemoryInfoKHR _w_pInfo = { 0 };
    pInfo__ = &_w_pInfo;
    unwrap_VkCopyAccelerationStructureToMemoryInfoKHR(base, (VkCopyAccelerationStructureToMemoryInfoKHR *) pInfo__, pInfo);
#endif
    VkResult result = base->dispatch_table.CopyAccelerationStructureToMemoryKHR(base->dispatch_handle, deferredOperation__, pInfo__);

    return result;
}

static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_CmdCopyMemoryToAccelerationStructureKHR(
    VkCommandBuffer commandBuffer,
    const VkCopyMemoryToAccelerationStructureInfoKHR* pInfo)
{
    VK_FROM_HANDLE(wrapper_command_buffer, base, commandBuffer);
const VkCopyMemoryToAccelerationStructureInfoKHR* pInfo__ = pInfo;
#ifdef NEEDS_UNWRAPPING_VkCopyMemoryToAccelerationStructureInfoKHR
    VkCopyMemoryToAccelerationStructureInfoKHR _w_pInfo = { 0 };
    pInfo__ = &_w_pInfo;
    unwrap_VkCopyMemoryToAccelerationStructureInfoKHR(base->device, (VkCopyMemoryToAccelerationStructureInfoKHR *) pInfo__, pInfo);
#endif
    base->device->dispatch_table.CmdCopyMemoryToAccelerationStructureKHR(base->dispatch_handle, pInfo__);

    return ;
}

static VKAPI_ATTR VkResult VKAPI_CALL
wrapper_tramp_CopyMemoryToAccelerationStructureKHR(
    VkDevice device,
    VkDeferredOperationKHR deferredOperation,
    const VkCopyMemoryToAccelerationStructureInfoKHR* pInfo)
{
    VK_FROM_HANDLE(wrapper_device, base, device);
VkDeferredOperationKHR deferredOperation__ = deferredOperation;
#ifdef NEEDS_UNWRAPPING_VkDeferredOperationKHR
#endif
const VkCopyMemoryToAccelerationStructureInfoKHR* pInfo__ = pInfo;
#ifdef NEEDS_UNWRAPPING_VkCopyMemoryToAccelerationStructureInfoKHR
    VkCopyMemoryToAccelerationStructureInfoKHR _w_pInfo = { 0 };
    pInfo__ = &_w_pInfo;
    unwrap_VkCopyMemoryToAccelerationStructureInfoKHR(base, (VkCopyMemoryToAccelerationStructureInfoKHR *) pInfo__, pInfo);
#endif
    VkResult result = base->dispatch_table.CopyMemoryToAccelerationStructureKHR(base->dispatch_handle, deferredOperation__, pInfo__);

    return result;
}

static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_CmdWriteAccelerationStructuresPropertiesKHR(
    VkCommandBuffer commandBuffer,
    uint32_t accelerationStructureCount,
    const VkAccelerationStructureKHR* pAccelerationStructures,
    VkQueryType queryType,
    VkQueryPool queryPool,
    uint32_t firstQuery)
{
    VK_FROM_HANDLE(wrapper_command_buffer, base, commandBuffer);
uint32_t accelerationStructureCount__ = accelerationStructureCount;
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
const VkAccelerationStructureKHR* pAccelerationStructures__ = pAccelerationStructures;
#ifdef NEEDS_UNWRAPPING_VkAccelerationStructureKHR
#endif
VkQueryType queryType__ = queryType;
#ifdef NEEDS_UNWRAPPING_VkQueryType
#endif
VkQueryPool queryPool__ = queryPool;
#ifdef NEEDS_UNWRAPPING_VkQueryPool
#endif
uint32_t firstQuery__ = firstQuery;
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
    base->device->dispatch_table.CmdWriteAccelerationStructuresPropertiesKHR(base->dispatch_handle, accelerationStructureCount__, pAccelerationStructures__, queryType__, queryPool__, firstQuery__);

    return ;
}

static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_CmdWriteAccelerationStructuresPropertiesNV(
    VkCommandBuffer commandBuffer,
    uint32_t accelerationStructureCount,
    const VkAccelerationStructureNV* pAccelerationStructures,
    VkQueryType queryType,
    VkQueryPool queryPool,
    uint32_t firstQuery)
{
    VK_FROM_HANDLE(wrapper_command_buffer, base, commandBuffer);
uint32_t accelerationStructureCount__ = accelerationStructureCount;
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
const VkAccelerationStructureNV* pAccelerationStructures__ = pAccelerationStructures;
#ifdef NEEDS_UNWRAPPING_VkAccelerationStructureNV
#endif
VkQueryType queryType__ = queryType;
#ifdef NEEDS_UNWRAPPING_VkQueryType
#endif
VkQueryPool queryPool__ = queryPool;
#ifdef NEEDS_UNWRAPPING_VkQueryPool
#endif
uint32_t firstQuery__ = firstQuery;
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
    base->device->dispatch_table.CmdWriteAccelerationStructuresPropertiesNV(base->dispatch_handle, accelerationStructureCount__, pAccelerationStructures__, queryType__, queryPool__, firstQuery__);

    return ;
}

static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_CmdBuildAccelerationStructureNV(
    VkCommandBuffer commandBuffer,
    const VkAccelerationStructureInfoNV* pInfo,
    VkBuffer instanceData,
    VkDeviceSize instanceOffset,
    VkBool32 update,
    VkAccelerationStructureNV dst,
    VkAccelerationStructureNV src,
    VkBuffer scratch,
    VkDeviceSize scratchOffset)
{
    VK_FROM_HANDLE(wrapper_command_buffer, base, commandBuffer);
const VkAccelerationStructureInfoNV* pInfo__ = pInfo;
#ifdef NEEDS_UNWRAPPING_VkAccelerationStructureInfoNV
    VkAccelerationStructureInfoNV _w_pInfo = { 0 };
    pInfo__ = &_w_pInfo;
    unwrap_VkAccelerationStructureInfoNV(base->device, (VkAccelerationStructureInfoNV *) pInfo__, pInfo);
#endif
VkBuffer instanceData__ = instanceData;
#ifdef NEEDS_UNWRAPPING_VkBuffer
#endif
VkDeviceSize instanceOffset__ = instanceOffset;
#ifdef NEEDS_UNWRAPPING_VkDeviceSize
#endif
VkBool32 update__ = update;
#ifdef NEEDS_UNWRAPPING_VkBool32
#endif
VkAccelerationStructureNV dst__ = dst;
#ifdef NEEDS_UNWRAPPING_VkAccelerationStructureNV
#endif
VkAccelerationStructureNV src__ = src;
#ifdef NEEDS_UNWRAPPING_VkAccelerationStructureNV
#endif
VkBuffer scratch__ = scratch;
#ifdef NEEDS_UNWRAPPING_VkBuffer
#endif
VkDeviceSize scratchOffset__ = scratchOffset;
#ifdef NEEDS_UNWRAPPING_VkDeviceSize
#endif
    base->device->dispatch_table.CmdBuildAccelerationStructureNV(base->dispatch_handle, pInfo__, instanceData__, instanceOffset__, update__, dst__, src__, scratch__, scratchOffset__);

    return ;
}

static VKAPI_ATTR VkResult VKAPI_CALL
wrapper_tramp_WriteAccelerationStructuresPropertiesKHR(
    VkDevice device,
    uint32_t accelerationStructureCount,
    const VkAccelerationStructureKHR* pAccelerationStructures,
    VkQueryType  queryType,
    size_t       dataSize,
    void* pData,
    size_t stride)
{
    VK_FROM_HANDLE(wrapper_device, base, device);
uint32_t accelerationStructureCount__ = accelerationStructureCount;
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
const VkAccelerationStructureKHR* pAccelerationStructures__ = pAccelerationStructures;
#ifdef NEEDS_UNWRAPPING_VkAccelerationStructureKHR
#endif
VkQueryType  queryType__ = queryType;
#ifdef NEEDS_UNWRAPPING_VkQueryType
#endif
size_t       dataSize__ = dataSize;
#ifdef NEEDS_UNWRAPPING_size_t
#endif
size_t stride__ = stride;
#ifdef NEEDS_UNWRAPPING_size_t
#endif
    VkResult result = base->dispatch_table.WriteAccelerationStructuresPropertiesKHR(base->dispatch_handle, accelerationStructureCount__, pAccelerationStructures__, queryType__, dataSize__, pData, stride__);
#ifdef NEEDS_UNWRAPPING_void
#endif
    return result;
}

static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_CmdTraceRaysKHR(
    VkCommandBuffer commandBuffer,
    const VkStridedDeviceAddressRegionKHR* pRaygenShaderBindingTable,
    const VkStridedDeviceAddressRegionKHR* pMissShaderBindingTable,
    const VkStridedDeviceAddressRegionKHR* pHitShaderBindingTable,
    const VkStridedDeviceAddressRegionKHR* pCallableShaderBindingTable,
    uint32_t width,
    uint32_t height,
    uint32_t depth)
{
    VK_FROM_HANDLE(wrapper_command_buffer, base, commandBuffer);
const VkStridedDeviceAddressRegionKHR* pRaygenShaderBindingTable__ = pRaygenShaderBindingTable;
#ifdef NEEDS_UNWRAPPING_VkStridedDeviceAddressRegionKHR
    VkStridedDeviceAddressRegionKHR _w_pRaygenShaderBindingTable = { 0 };
    pRaygenShaderBindingTable__ = &_w_pRaygenShaderBindingTable;
    unwrap_VkStridedDeviceAddressRegionKHR(base->device, (VkStridedDeviceAddressRegionKHR *) pRaygenShaderBindingTable__, pRaygenShaderBindingTable);
#endif
const VkStridedDeviceAddressRegionKHR* pMissShaderBindingTable__ = pMissShaderBindingTable;
#ifdef NEEDS_UNWRAPPING_VkStridedDeviceAddressRegionKHR
    VkStridedDeviceAddressRegionKHR _w_pMissShaderBindingTable = { 0 };
    pMissShaderBindingTable__ = &_w_pMissShaderBindingTable;
    unwrap_VkStridedDeviceAddressRegionKHR(base->device, (VkStridedDeviceAddressRegionKHR *) pMissShaderBindingTable__, pMissShaderBindingTable);
#endif
const VkStridedDeviceAddressRegionKHR* pHitShaderBindingTable__ = pHitShaderBindingTable;
#ifdef NEEDS_UNWRAPPING_VkStridedDeviceAddressRegionKHR
    VkStridedDeviceAddressRegionKHR _w_pHitShaderBindingTable = { 0 };
    pHitShaderBindingTable__ = &_w_pHitShaderBindingTable;
    unwrap_VkStridedDeviceAddressRegionKHR(base->device, (VkStridedDeviceAddressRegionKHR *) pHitShaderBindingTable__, pHitShaderBindingTable);
#endif
const VkStridedDeviceAddressRegionKHR* pCallableShaderBindingTable__ = pCallableShaderBindingTable;
#ifdef NEEDS_UNWRAPPING_VkStridedDeviceAddressRegionKHR
    VkStridedDeviceAddressRegionKHR _w_pCallableShaderBindingTable = { 0 };
    pCallableShaderBindingTable__ = &_w_pCallableShaderBindingTable;
    unwrap_VkStridedDeviceAddressRegionKHR(base->device, (VkStridedDeviceAddressRegionKHR *) pCallableShaderBindingTable__, pCallableShaderBindingTable);
#endif
uint32_t width__ = width;
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
uint32_t height__ = height;
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
uint32_t depth__ = depth;
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
    base->device->dispatch_table.CmdTraceRaysKHR(base->dispatch_handle, pRaygenShaderBindingTable__, pMissShaderBindingTable__, pHitShaderBindingTable__, pCallableShaderBindingTable__, width__, height__, depth__);

    return ;
}

static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_CmdTraceRaysNV(
    VkCommandBuffer commandBuffer,
    VkBuffer raygenShaderBindingTableBuffer,
    VkDeviceSize raygenShaderBindingOffset,
    VkBuffer missShaderBindingTableBuffer,
    VkDeviceSize missShaderBindingOffset,
    VkDeviceSize missShaderBindingStride,
    VkBuffer hitShaderBindingTableBuffer,
    VkDeviceSize hitShaderBindingOffset,
    VkDeviceSize hitShaderBindingStride,
    VkBuffer callableShaderBindingTableBuffer,
    VkDeviceSize callableShaderBindingOffset,
    VkDeviceSize callableShaderBindingStride,
    uint32_t width,
    uint32_t height,
    uint32_t depth)
{
    VK_FROM_HANDLE(wrapper_command_buffer, base, commandBuffer);
VkBuffer raygenShaderBindingTableBuffer__ = raygenShaderBindingTableBuffer;
#ifdef NEEDS_UNWRAPPING_VkBuffer
#endif
VkDeviceSize raygenShaderBindingOffset__ = raygenShaderBindingOffset;
#ifdef NEEDS_UNWRAPPING_VkDeviceSize
#endif
VkBuffer missShaderBindingTableBuffer__ = missShaderBindingTableBuffer;
#ifdef NEEDS_UNWRAPPING_VkBuffer
#endif
VkDeviceSize missShaderBindingOffset__ = missShaderBindingOffset;
#ifdef NEEDS_UNWRAPPING_VkDeviceSize
#endif
VkDeviceSize missShaderBindingStride__ = missShaderBindingStride;
#ifdef NEEDS_UNWRAPPING_VkDeviceSize
#endif
VkBuffer hitShaderBindingTableBuffer__ = hitShaderBindingTableBuffer;
#ifdef NEEDS_UNWRAPPING_VkBuffer
#endif
VkDeviceSize hitShaderBindingOffset__ = hitShaderBindingOffset;
#ifdef NEEDS_UNWRAPPING_VkDeviceSize
#endif
VkDeviceSize hitShaderBindingStride__ = hitShaderBindingStride;
#ifdef NEEDS_UNWRAPPING_VkDeviceSize
#endif
VkBuffer callableShaderBindingTableBuffer__ = callableShaderBindingTableBuffer;
#ifdef NEEDS_UNWRAPPING_VkBuffer
#endif
VkDeviceSize callableShaderBindingOffset__ = callableShaderBindingOffset;
#ifdef NEEDS_UNWRAPPING_VkDeviceSize
#endif
VkDeviceSize callableShaderBindingStride__ = callableShaderBindingStride;
#ifdef NEEDS_UNWRAPPING_VkDeviceSize
#endif
uint32_t width__ = width;
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
uint32_t height__ = height;
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
uint32_t depth__ = depth;
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
    base->device->dispatch_table.CmdTraceRaysNV(base->dispatch_handle, raygenShaderBindingTableBuffer__, raygenShaderBindingOffset__, missShaderBindingTableBuffer__, missShaderBindingOffset__, missShaderBindingStride__, hitShaderBindingTableBuffer__, hitShaderBindingOffset__, hitShaderBindingStride__, callableShaderBindingTableBuffer__, callableShaderBindingOffset__, callableShaderBindingStride__, width__, height__, depth__);

    return ;
}

static VKAPI_ATTR VkResult VKAPI_CALL
wrapper_tramp_GetRayTracingShaderGroupHandlesKHR(
    VkDevice device,
    VkPipeline pipeline,
    uint32_t firstGroup,
    uint32_t groupCount,
    size_t dataSize,
    void* pData)
{
    VK_FROM_HANDLE(wrapper_device, base, device);
VkPipeline pipeline__ = pipeline;
#ifdef NEEDS_UNWRAPPING_VkPipeline
#endif
uint32_t firstGroup__ = firstGroup;
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
uint32_t groupCount__ = groupCount;
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
size_t dataSize__ = dataSize;
#ifdef NEEDS_UNWRAPPING_size_t
#endif
    VkResult result = base->dispatch_table.GetRayTracingShaderGroupHandlesKHR(base->dispatch_handle, pipeline__, firstGroup__, groupCount__, dataSize__, pData);
#ifdef NEEDS_UNWRAPPING_void
#endif
    return result;
}
    
static VKAPI_ATTR VkResult VKAPI_CALL
wrapper_tramp_GetRayTracingCaptureReplayShaderGroupHandlesKHR(
    VkDevice device,
    VkPipeline pipeline,
    uint32_t firstGroup,
    uint32_t groupCount,
    size_t dataSize,
    void* pData)
{
    VK_FROM_HANDLE(wrapper_device, base, device);
VkPipeline pipeline__ = pipeline;
#ifdef NEEDS_UNWRAPPING_VkPipeline
#endif
uint32_t firstGroup__ = firstGroup;
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
uint32_t groupCount__ = groupCount;
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
size_t dataSize__ = dataSize;
#ifdef NEEDS_UNWRAPPING_size_t
#endif
    VkResult result = base->dispatch_table.GetRayTracingCaptureReplayShaderGroupHandlesKHR(base->dispatch_handle, pipeline__, firstGroup__, groupCount__, dataSize__, pData);
#ifdef NEEDS_UNWRAPPING_void
#endif
    return result;
}

static VKAPI_ATTR VkResult VKAPI_CALL
wrapper_tramp_GetAccelerationStructureHandleNV(
    VkDevice device,
    VkAccelerationStructureNV accelerationStructure,
    size_t dataSize,
    void* pData)
{
    VK_FROM_HANDLE(wrapper_device, base, device);
VkAccelerationStructureNV accelerationStructure__ = accelerationStructure;
#ifdef NEEDS_UNWRAPPING_VkAccelerationStructureNV
#endif
size_t dataSize__ = dataSize;
#ifdef NEEDS_UNWRAPPING_size_t
#endif
    VkResult result = base->dispatch_table.GetAccelerationStructureHandleNV(base->dispatch_handle, accelerationStructure__, dataSize__, pData);
#ifdef NEEDS_UNWRAPPING_void
#endif
    return result;
}

static VKAPI_ATTR VkResult VKAPI_CALL
wrapper_tramp_CreateRayTracingPipelinesNV(
    VkDevice device,
    VkPipelineCache pipelineCache,
    uint32_t createInfoCount,
    const VkRayTracingPipelineCreateInfoNV* pCreateInfos,
    const VkAllocationCallbacks* pAllocator,
    VkPipeline* pPipelines)
{
    VK_FROM_HANDLE(wrapper_device, base, device);
VkPipelineCache pipelineCache__ = pipelineCache;
#ifdef NEEDS_UNWRAPPING_VkPipelineCache
#endif
uint32_t createInfoCount__ = createInfoCount;
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
const VkRayTracingPipelineCreateInfoNV* pCreateInfos__ = pCreateInfos;
#ifdef NEEDS_UNWRAPPING_VkRayTracingPipelineCreateInfoNV
    pCreateInfos__ = alloca(createInfoCount * sizeof(VkRayTracingPipelineCreateInfoNV));
    for (int i = 0; i < createInfoCount; i++)
        unwrap_VkRayTracingPipelineCreateInfoNV(base, (VkRayTracingPipelineCreateInfoNV *) &pCreateInfos__[i], &pCreateInfos[i]);
#endif
const VkAllocationCallbacks* pAllocator__ = pAllocator;
#ifdef NEEDS_UNWRAPPING_VkAllocationCallbacks
    VkAllocationCallbacks _w_pAllocator = { 0 };
    pAllocator__ = &_w_pAllocator;
    unwrap_VkAllocationCallbacks(base, (VkAllocationCallbacks *) pAllocator__, pAllocator);
#endif
    VkResult result = base->dispatch_table.CreateRayTracingPipelinesNV(base->dispatch_handle, pipelineCache__, createInfoCount__, pCreateInfos__, pAllocator__, pPipelines);
#ifdef NEEDS_UNWRAPPING_VkPipeline
#endif
    return result;
}

static VKAPI_ATTR VkResult VKAPI_CALL
wrapper_tramp_CreateRayTracingPipelinesKHR(
    VkDevice device,
    VkDeferredOperationKHR deferredOperation,
    VkPipelineCache pipelineCache,
    uint32_t createInfoCount,
    const VkRayTracingPipelineCreateInfoKHR* pCreateInfos,
    const VkAllocationCallbacks* pAllocator,
    VkPipeline* pPipelines)
{
    VK_FROM_HANDLE(wrapper_device, base, device);
VkDeferredOperationKHR deferredOperation__ = deferredOperation;
#ifdef NEEDS_UNWRAPPING_VkDeferredOperationKHR
#endif
VkPipelineCache pipelineCache__ = pipelineCache;
#ifdef NEEDS_UNWRAPPING_VkPipelineCache
#endif
uint32_t createInfoCount__ = createInfoCount;
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
const VkRayTracingPipelineCreateInfoKHR* pCreateInfos__ = pCreateInfos;
#ifdef NEEDS_UNWRAPPING_VkRayTracingPipelineCreateInfoKHR
    pCreateInfos__ = alloca(createInfoCount * sizeof(VkRayTracingPipelineCreateInfoKHR));
    for (int i = 0; i < createInfoCount; i++)
        unwrap_VkRayTracingPipelineCreateInfoKHR(base, (VkRayTracingPipelineCreateInfoKHR *) &pCreateInfos__[i], &pCreateInfos[i]);
#endif
const VkAllocationCallbacks* pAllocator__ = pAllocator;
#ifdef NEEDS_UNWRAPPING_VkAllocationCallbacks
    VkAllocationCallbacks _w_pAllocator = { 0 };
    pAllocator__ = &_w_pAllocator;
    unwrap_VkAllocationCallbacks(base, (VkAllocationCallbacks *) pAllocator__, pAllocator);
#endif
    VkResult result = base->dispatch_table.CreateRayTracingPipelinesKHR(base->dispatch_handle, deferredOperation__, pipelineCache__, createInfoCount__, pCreateInfos__, pAllocator__, pPipelines);
#ifdef NEEDS_UNWRAPPING_VkPipeline
#endif
    return result;
}
    
static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_CmdTraceRaysIndirectKHR(
    VkCommandBuffer commandBuffer,
    const VkStridedDeviceAddressRegionKHR* pRaygenShaderBindingTable,
    const VkStridedDeviceAddressRegionKHR* pMissShaderBindingTable,
    const VkStridedDeviceAddressRegionKHR* pHitShaderBindingTable,
    const VkStridedDeviceAddressRegionKHR* pCallableShaderBindingTable,
    VkDeviceAddress indirectDeviceAddress)
{
    VK_FROM_HANDLE(wrapper_command_buffer, base, commandBuffer);
const VkStridedDeviceAddressRegionKHR* pRaygenShaderBindingTable__ = pRaygenShaderBindingTable;
#ifdef NEEDS_UNWRAPPING_VkStridedDeviceAddressRegionKHR
    VkStridedDeviceAddressRegionKHR _w_pRaygenShaderBindingTable = { 0 };
    pRaygenShaderBindingTable__ = &_w_pRaygenShaderBindingTable;
    unwrap_VkStridedDeviceAddressRegionKHR(base->device, (VkStridedDeviceAddressRegionKHR *) pRaygenShaderBindingTable__, pRaygenShaderBindingTable);
#endif
const VkStridedDeviceAddressRegionKHR* pMissShaderBindingTable__ = pMissShaderBindingTable;
#ifdef NEEDS_UNWRAPPING_VkStridedDeviceAddressRegionKHR
    VkStridedDeviceAddressRegionKHR _w_pMissShaderBindingTable = { 0 };
    pMissShaderBindingTable__ = &_w_pMissShaderBindingTable;
    unwrap_VkStridedDeviceAddressRegionKHR(base->device, (VkStridedDeviceAddressRegionKHR *) pMissShaderBindingTable__, pMissShaderBindingTable);
#endif
const VkStridedDeviceAddressRegionKHR* pHitShaderBindingTable__ = pHitShaderBindingTable;
#ifdef NEEDS_UNWRAPPING_VkStridedDeviceAddressRegionKHR
    VkStridedDeviceAddressRegionKHR _w_pHitShaderBindingTable = { 0 };
    pHitShaderBindingTable__ = &_w_pHitShaderBindingTable;
    unwrap_VkStridedDeviceAddressRegionKHR(base->device, (VkStridedDeviceAddressRegionKHR *) pHitShaderBindingTable__, pHitShaderBindingTable);
#endif
const VkStridedDeviceAddressRegionKHR* pCallableShaderBindingTable__ = pCallableShaderBindingTable;
#ifdef NEEDS_UNWRAPPING_VkStridedDeviceAddressRegionKHR
    VkStridedDeviceAddressRegionKHR _w_pCallableShaderBindingTable = { 0 };
    pCallableShaderBindingTable__ = &_w_pCallableShaderBindingTable;
    unwrap_VkStridedDeviceAddressRegionKHR(base->device, (VkStridedDeviceAddressRegionKHR *) pCallableShaderBindingTable__, pCallableShaderBindingTable);
#endif
VkDeviceAddress indirectDeviceAddress__ = indirectDeviceAddress;
#ifdef NEEDS_UNWRAPPING_VkDeviceAddress
#endif
    base->device->dispatch_table.CmdTraceRaysIndirectKHR(base->dispatch_handle, pRaygenShaderBindingTable__, pMissShaderBindingTable__, pHitShaderBindingTable__, pCallableShaderBindingTable__, indirectDeviceAddress__);

    return ;
}

static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_CmdTraceRaysIndirect2KHR(
    VkCommandBuffer commandBuffer,
    VkDeviceAddress indirectDeviceAddress)
{
    VK_FROM_HANDLE(wrapper_command_buffer, base, commandBuffer);
VkDeviceAddress indirectDeviceAddress__ = indirectDeviceAddress;
#ifdef NEEDS_UNWRAPPING_VkDeviceAddress
#endif
    base->device->dispatch_table.CmdTraceRaysIndirect2KHR(base->dispatch_handle, indirectDeviceAddress__);

    return ;
}

static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_GetDeviceAccelerationStructureCompatibilityKHR(
    VkDevice device,
    const VkAccelerationStructureVersionInfoKHR* pVersionInfo,
    VkAccelerationStructureCompatibilityKHR* pCompatibility)
{
    VK_FROM_HANDLE(wrapper_device, base, device);
const VkAccelerationStructureVersionInfoKHR* pVersionInfo__ = pVersionInfo;
#ifdef NEEDS_UNWRAPPING_VkAccelerationStructureVersionInfoKHR
    VkAccelerationStructureVersionInfoKHR _w_pVersionInfo = { 0 };
    pVersionInfo__ = &_w_pVersionInfo;
    unwrap_VkAccelerationStructureVersionInfoKHR(base, (VkAccelerationStructureVersionInfoKHR *) pVersionInfo__, pVersionInfo);
#endif
    base->dispatch_table.GetDeviceAccelerationStructureCompatibilityKHR(base->dispatch_handle, pVersionInfo__, pCompatibility);
#ifdef NEEDS_UNWRAPPING_VkAccelerationStructureCompatibilityKHR
#endif
    return ;
}

static VKAPI_ATTR VkDeviceSize VKAPI_CALL
wrapper_tramp_GetRayTracingShaderGroupStackSizeKHR(
    VkDevice device,
    VkPipeline pipeline,
    uint32_t group,
    VkShaderGroupShaderKHR groupShader)
{
    VK_FROM_HANDLE(wrapper_device, base, device);
VkPipeline pipeline__ = pipeline;
#ifdef NEEDS_UNWRAPPING_VkPipeline
#endif
uint32_t group__ = group;
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
VkShaderGroupShaderKHR groupShader__ = groupShader;
#ifdef NEEDS_UNWRAPPING_VkShaderGroupShaderKHR
#endif
    VkDeviceSize result = base->dispatch_table.GetRayTracingShaderGroupStackSizeKHR(base->dispatch_handle, pipeline__, group__, groupShader__);

    return result;
}

static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_CmdSetRayTracingPipelineStackSizeKHR(
    VkCommandBuffer commandBuffer,
    uint32_t pipelineStackSize)
{
    VK_FROM_HANDLE(wrapper_command_buffer, base, commandBuffer);
uint32_t pipelineStackSize__ = pipelineStackSize;
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
    base->device->dispatch_table.CmdSetRayTracingPipelineStackSizeKHR(base->dispatch_handle, pipelineStackSize__);

    return ;
}

static VKAPI_ATTR uint32_t VKAPI_CALL
wrapper_tramp_GetImageViewHandleNVX(
    VkDevice device,
    const VkImageViewHandleInfoNVX* pInfo)
{
    VK_FROM_HANDLE(wrapper_device, base, device);
const VkImageViewHandleInfoNVX* pInfo__ = pInfo;
#ifdef NEEDS_UNWRAPPING_VkImageViewHandleInfoNVX
    VkImageViewHandleInfoNVX _w_pInfo = { 0 };
    pInfo__ = &_w_pInfo;
    unwrap_VkImageViewHandleInfoNVX(base, (VkImageViewHandleInfoNVX *) pInfo__, pInfo);
#endif
    uint32_t result = base->dispatch_table.GetImageViewHandleNVX(base->dispatch_handle, pInfo__);

    return result;
}

static VKAPI_ATTR VkResult VKAPI_CALL
wrapper_tramp_GetImageViewAddressNVX(
    VkDevice device,
    VkImageView imageView,
    VkImageViewAddressPropertiesNVX* pProperties)
{
    VK_FROM_HANDLE(wrapper_device, base, device);
VkImageView imageView__ = imageView;
#ifdef NEEDS_UNWRAPPING_VkImageView
#endif
    VkResult result = base->dispatch_table.GetImageViewAddressNVX(base->dispatch_handle, imageView__, pProperties);
#ifdef NEEDS_UNWRAPPING_VkImageViewAddressPropertiesNVX
#warning TODO: Repack struct+ptr+out GetImageViewAddressNVX EntrypointParam(type='VkImageViewAddressPropertiesNVX', name='pProperties', decl='VkImageViewAddressPropertiesNVX* pProperties', len=None, elem=<Element 'param' at 0x73688999cdb0>, is_const=False, num_pointers=1)
#endif
    return result;
}
    #ifdef VK_USE_PLATFORM_WIN32_KHR

static VKAPI_ATTR VkResult VKAPI_CALL
wrapper_tramp_GetDeviceGroupSurfacePresentModes2EXT(
    VkDevice device,
    const VkPhysicalDeviceSurfaceInfo2KHR* pSurfaceInfo,
    VkDeviceGroupPresentModeFlagsKHR* pModes)
{
    VK_FROM_HANDLE(wrapper_device, base, device);
const VkPhysicalDeviceSurfaceInfo2KHR* pSurfaceInfo__ = pSurfaceInfo;
#ifdef NEEDS_UNWRAPPING_VkPhysicalDeviceSurfaceInfo2KHR
    VkPhysicalDeviceSurfaceInfo2KHR _w_pSurfaceInfo = { 0 };
    pSurfaceInfo__ = &_w_pSurfaceInfo;
    unwrap_VkPhysicalDeviceSurfaceInfo2KHR(base, (VkPhysicalDeviceSurfaceInfo2KHR *) pSurfaceInfo__, pSurfaceInfo);
#endif
    VkResult result = base->dispatch_table.GetDeviceGroupSurfacePresentModes2EXT(base->dispatch_handle, pSurfaceInfo__, pModes);
#ifdef NEEDS_UNWRAPPING_VkDeviceGroupPresentModeFlagsKHR
#endif
    return result;
}
#endif
#ifdef VK_USE_PLATFORM_WIN32_KHR

static VKAPI_ATTR VkResult VKAPI_CALL
wrapper_tramp_AcquireFullScreenExclusiveModeEXT(
    VkDevice device,
    VkSwapchainKHR swapchain)
{
    VK_FROM_HANDLE(wrapper_device, base, device);
VkSwapchainKHR swapchain__ = swapchain;
#ifdef NEEDS_UNWRAPPING_VkSwapchainKHR
#endif
    VkResult result = base->dispatch_table.AcquireFullScreenExclusiveModeEXT(base->dispatch_handle, swapchain__);

    return result;
}
#endif
#ifdef VK_USE_PLATFORM_WIN32_KHR

static VKAPI_ATTR VkResult VKAPI_CALL
wrapper_tramp_ReleaseFullScreenExclusiveModeEXT(
    VkDevice device,
    VkSwapchainKHR swapchain)
{
    VK_FROM_HANDLE(wrapper_device, base, device);
VkSwapchainKHR swapchain__ = swapchain;
#ifdef NEEDS_UNWRAPPING_VkSwapchainKHR
#endif
    VkResult result = base->dispatch_table.ReleaseFullScreenExclusiveModeEXT(base->dispatch_handle, swapchain__);

    return result;
}
#endif
        
static VKAPI_ATTR VkResult VKAPI_CALL
wrapper_tramp_AcquireProfilingLockKHR(
    VkDevice device,
    const VkAcquireProfilingLockInfoKHR* pInfo)
{
    VK_FROM_HANDLE(wrapper_device, base, device);
const VkAcquireProfilingLockInfoKHR* pInfo__ = pInfo;
#ifdef NEEDS_UNWRAPPING_VkAcquireProfilingLockInfoKHR
    VkAcquireProfilingLockInfoKHR _w_pInfo = { 0 };
    pInfo__ = &_w_pInfo;
    unwrap_VkAcquireProfilingLockInfoKHR(base, (VkAcquireProfilingLockInfoKHR *) pInfo__, pInfo);
#endif
    VkResult result = base->dispatch_table.AcquireProfilingLockKHR(base->dispatch_handle, pInfo__);

    return result;
}

static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_ReleaseProfilingLockKHR(
    VkDevice device)
{
    VK_FROM_HANDLE(wrapper_device, base, device);
    base->dispatch_table.ReleaseProfilingLockKHR(base->dispatch_handle);

    return ;
}

static VKAPI_ATTR VkResult VKAPI_CALL
wrapper_tramp_GetImageDrmFormatModifierPropertiesEXT(
    VkDevice device,
    VkImage image,
    VkImageDrmFormatModifierPropertiesEXT* pProperties)
{
    VK_FROM_HANDLE(wrapper_device, base, device);
VkImage image__ = image;
#ifdef NEEDS_UNWRAPPING_VkImage
    VK_FROM_HANDLE(wrapper_image, w_image, image);
    image__ = w_image->dispatch_handle;
#endif
    VkResult result = base->dispatch_table.GetImageDrmFormatModifierPropertiesEXT(base->dispatch_handle, image__, pProperties);
#ifdef NEEDS_UNWRAPPING_VkImageDrmFormatModifierPropertiesEXT
#warning TODO: Repack struct+ptr+out GetImageDrmFormatModifierPropertiesEXT EntrypointParam(type='VkImageDrmFormatModifierPropertiesEXT', name='pProperties', decl='VkImageDrmFormatModifierPropertiesEXT* pProperties', len=None, elem=<Element 'param' at 0x73688999f5b0>, is_const=False, num_pointers=1)
#endif
    return result;
}

static VKAPI_ATTR uint64_t VKAPI_CALL
wrapper_tramp_GetBufferOpaqueCaptureAddress(
    VkDevice device,
    const VkBufferDeviceAddressInfo* pInfo)
{
    VK_FROM_HANDLE(wrapper_device, base, device);
const VkBufferDeviceAddressInfo* pInfo__ = pInfo;
#ifdef NEEDS_UNWRAPPING_VkBufferDeviceAddressInfo
    VkBufferDeviceAddressInfo _w_pInfo = { 0 };
    pInfo__ = &_w_pInfo;
    unwrap_VkBufferDeviceAddressInfo(base, (VkBufferDeviceAddressInfo *) pInfo__, pInfo);
#endif
    uint64_t result = base->dispatch_table.GetBufferOpaqueCaptureAddress(base->dispatch_handle, pInfo__);

    return result;
}
    
static VKAPI_ATTR VkDeviceAddress VKAPI_CALL
wrapper_tramp_GetBufferDeviceAddress(
    VkDevice device,
    const VkBufferDeviceAddressInfo* pInfo)
{
    VK_FROM_HANDLE(wrapper_device, base, device);
const VkBufferDeviceAddressInfo* pInfo__ = pInfo;
#ifdef NEEDS_UNWRAPPING_VkBufferDeviceAddressInfo
    VkBufferDeviceAddressInfo _w_pInfo = { 0 };
    pInfo__ = &_w_pInfo;
    unwrap_VkBufferDeviceAddressInfo(base, (VkBufferDeviceAddressInfo *) pInfo__, pInfo);
#endif
    VkDeviceAddress result = base->dispatch_table.GetBufferDeviceAddress(base->dispatch_handle, pInfo__);

    return result;
}
                
static VKAPI_ATTR VkResult VKAPI_CALL
wrapper_tramp_InitializePerformanceApiINTEL(
    VkDevice device,
    const VkInitializePerformanceApiInfoINTEL* pInitializeInfo)
{
    VK_FROM_HANDLE(wrapper_device, base, device);
const VkInitializePerformanceApiInfoINTEL* pInitializeInfo__ = pInitializeInfo;
#ifdef NEEDS_UNWRAPPING_VkInitializePerformanceApiInfoINTEL
    VkInitializePerformanceApiInfoINTEL _w_pInitializeInfo = { 0 };
    pInitializeInfo__ = &_w_pInitializeInfo;
    unwrap_VkInitializePerformanceApiInfoINTEL(base, (VkInitializePerformanceApiInfoINTEL *) pInitializeInfo__, pInitializeInfo);
#endif
    VkResult result = base->dispatch_table.InitializePerformanceApiINTEL(base->dispatch_handle, pInitializeInfo__);

    return result;
}

static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_UninitializePerformanceApiINTEL(
    VkDevice device)
{
    VK_FROM_HANDLE(wrapper_device, base, device);
    base->dispatch_table.UninitializePerformanceApiINTEL(base->dispatch_handle);

    return ;
}

static VKAPI_ATTR VkResult VKAPI_CALL
wrapper_tramp_CmdSetPerformanceMarkerINTEL(
    VkCommandBuffer commandBuffer,
    const VkPerformanceMarkerInfoINTEL* pMarkerInfo)
{
    VK_FROM_HANDLE(wrapper_command_buffer, base, commandBuffer);
const VkPerformanceMarkerInfoINTEL* pMarkerInfo__ = pMarkerInfo;
#ifdef NEEDS_UNWRAPPING_VkPerformanceMarkerInfoINTEL
    VkPerformanceMarkerInfoINTEL _w_pMarkerInfo = { 0 };
    pMarkerInfo__ = &_w_pMarkerInfo;
    unwrap_VkPerformanceMarkerInfoINTEL(base->device, (VkPerformanceMarkerInfoINTEL *) pMarkerInfo__, pMarkerInfo);
#endif
    VkResult result = base->device->dispatch_table.CmdSetPerformanceMarkerINTEL(base->dispatch_handle, pMarkerInfo__);

    return result;
}

static VKAPI_ATTR VkResult VKAPI_CALL
wrapper_tramp_CmdSetPerformanceStreamMarkerINTEL(
    VkCommandBuffer commandBuffer,
    const VkPerformanceStreamMarkerInfoINTEL* pMarkerInfo)
{
    VK_FROM_HANDLE(wrapper_command_buffer, base, commandBuffer);
const VkPerformanceStreamMarkerInfoINTEL* pMarkerInfo__ = pMarkerInfo;
#ifdef NEEDS_UNWRAPPING_VkPerformanceStreamMarkerInfoINTEL
    VkPerformanceStreamMarkerInfoINTEL _w_pMarkerInfo = { 0 };
    pMarkerInfo__ = &_w_pMarkerInfo;
    unwrap_VkPerformanceStreamMarkerInfoINTEL(base->device, (VkPerformanceStreamMarkerInfoINTEL *) pMarkerInfo__, pMarkerInfo);
#endif
    VkResult result = base->device->dispatch_table.CmdSetPerformanceStreamMarkerINTEL(base->dispatch_handle, pMarkerInfo__);

    return result;
}

static VKAPI_ATTR VkResult VKAPI_CALL
wrapper_tramp_CmdSetPerformanceOverrideINTEL(
    VkCommandBuffer commandBuffer,
    const VkPerformanceOverrideInfoINTEL* pOverrideInfo)
{
    VK_FROM_HANDLE(wrapper_command_buffer, base, commandBuffer);
const VkPerformanceOverrideInfoINTEL* pOverrideInfo__ = pOverrideInfo;
#ifdef NEEDS_UNWRAPPING_VkPerformanceOverrideInfoINTEL
    VkPerformanceOverrideInfoINTEL _w_pOverrideInfo = { 0 };
    pOverrideInfo__ = &_w_pOverrideInfo;
    unwrap_VkPerformanceOverrideInfoINTEL(base->device, (VkPerformanceOverrideInfoINTEL *) pOverrideInfo__, pOverrideInfo);
#endif
    VkResult result = base->device->dispatch_table.CmdSetPerformanceOverrideINTEL(base->dispatch_handle, pOverrideInfo__);

    return result;
}

static VKAPI_ATTR VkResult VKAPI_CALL
wrapper_tramp_AcquirePerformanceConfigurationINTEL(
    VkDevice device,
    const VkPerformanceConfigurationAcquireInfoINTEL* pAcquireInfo,
    VkPerformanceConfigurationINTEL* pConfiguration)
{
    VK_FROM_HANDLE(wrapper_device, base, device);
const VkPerformanceConfigurationAcquireInfoINTEL* pAcquireInfo__ = pAcquireInfo;
#ifdef NEEDS_UNWRAPPING_VkPerformanceConfigurationAcquireInfoINTEL
    VkPerformanceConfigurationAcquireInfoINTEL _w_pAcquireInfo = { 0 };
    pAcquireInfo__ = &_w_pAcquireInfo;
    unwrap_VkPerformanceConfigurationAcquireInfoINTEL(base, (VkPerformanceConfigurationAcquireInfoINTEL *) pAcquireInfo__, pAcquireInfo);
#endif
    VkResult result = base->dispatch_table.AcquirePerformanceConfigurationINTEL(base->dispatch_handle, pAcquireInfo__, pConfiguration);
#ifdef NEEDS_UNWRAPPING_VkPerformanceConfigurationINTEL
#endif
    return result;
}

static VKAPI_ATTR VkResult VKAPI_CALL
wrapper_tramp_ReleasePerformanceConfigurationINTEL(
    VkDevice device,
    VkPerformanceConfigurationINTEL configuration)
{
    VK_FROM_HANDLE(wrapper_device, base, device);
VkPerformanceConfigurationINTEL configuration__ = configuration;
#ifdef NEEDS_UNWRAPPING_VkPerformanceConfigurationINTEL
#endif
    VkResult result = base->dispatch_table.ReleasePerformanceConfigurationINTEL(base->dispatch_handle, configuration__);

    return result;
}

static VKAPI_ATTR VkResult VKAPI_CALL
wrapper_tramp_QueueSetPerformanceConfigurationINTEL(
    VkQueue queue,
    VkPerformanceConfigurationINTEL configuration)
{
    VK_FROM_HANDLE(wrapper_queue, base, queue);
VkPerformanceConfigurationINTEL configuration__ = configuration;
#ifdef NEEDS_UNWRAPPING_VkPerformanceConfigurationINTEL
#endif
    VkResult result = base->device->dispatch_table.QueueSetPerformanceConfigurationINTEL(base->dispatch_handle, configuration__);

    return result;
}

static VKAPI_ATTR VkResult VKAPI_CALL
wrapper_tramp_GetPerformanceParameterINTEL(
    VkDevice device,
    VkPerformanceParameterTypeINTEL parameter,
    VkPerformanceValueINTEL* pValue)
{
    VK_FROM_HANDLE(wrapper_device, base, device);
VkPerformanceParameterTypeINTEL parameter__ = parameter;
#ifdef NEEDS_UNWRAPPING_VkPerformanceParameterTypeINTEL
#endif
    VkResult result = base->dispatch_table.GetPerformanceParameterINTEL(base->dispatch_handle, parameter__, pValue);
#ifdef NEEDS_UNWRAPPING_VkPerformanceValueINTEL
#warning TODO: Repack struct+ptr+out GetPerformanceParameterINTEL EntrypointParam(type='VkPerformanceValueINTEL', name='pValue', decl='VkPerformanceValueINTEL* pValue', len=None, elem=<Element 'param' at 0x7368899aae30>, is_const=False, num_pointers=1)
#endif
    return result;
}

static VKAPI_ATTR uint64_t VKAPI_CALL
wrapper_tramp_GetDeviceMemoryOpaqueCaptureAddress(
    VkDevice device,
    const VkDeviceMemoryOpaqueCaptureAddressInfo* pInfo)
{
    VK_FROM_HANDLE(wrapper_device, base, device);
const VkDeviceMemoryOpaqueCaptureAddressInfo* pInfo__ = pInfo;
#ifdef NEEDS_UNWRAPPING_VkDeviceMemoryOpaqueCaptureAddressInfo
    VkDeviceMemoryOpaqueCaptureAddressInfo _w_pInfo = { 0 };
    pInfo__ = &_w_pInfo;
    unwrap_VkDeviceMemoryOpaqueCaptureAddressInfo(base, (VkDeviceMemoryOpaqueCaptureAddressInfo *) pInfo__, pInfo);
#endif
    uint64_t result = base->dispatch_table.GetDeviceMemoryOpaqueCaptureAddress(base->dispatch_handle, pInfo__);

    return result;
}
    
static VKAPI_ATTR VkResult VKAPI_CALL
wrapper_tramp_GetPipelineExecutablePropertiesKHR(
    VkDevice                        device,
    const VkPipelineInfoKHR*        pPipelineInfo,
    uint32_t* pExecutableCount,
    VkPipelineExecutablePropertiesKHR* pProperties)
{
    VK_FROM_HANDLE(wrapper_device, base, device);
const VkPipelineInfoKHR*        pPipelineInfo__ = pPipelineInfo;
#ifdef NEEDS_UNWRAPPING_VkPipelineInfoKHR
    VkPipelineInfoKHR _w_pPipelineInfo = { 0 };
    pPipelineInfo__ = &_w_pPipelineInfo;
    unwrap_VkPipelineInfoKHR(base, (VkPipelineInfoKHR *) pPipelineInfo__, pPipelineInfo);
#endif
    VkResult result = base->dispatch_table.GetPipelineExecutablePropertiesKHR(base->dispatch_handle, pPipelineInfo__, pExecutableCount, pProperties);
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
#ifdef NEEDS_UNWRAPPING_VkPipelineExecutablePropertiesKHR
#warning TODO: Repack struct+array+out GetPipelineExecutablePropertiesKHR EntrypointParam(type='VkPipelineExecutablePropertiesKHR', name='pProperties', decl='VkPipelineExecutablePropertiesKHR* pProperties', len='pExecutableCount', elem=<Element 'param' at 0x7368899ab880>, is_const=False, num_pointers=1)
#endif
    return result;
}

static VKAPI_ATTR VkResult VKAPI_CALL
wrapper_tramp_GetPipelineExecutableStatisticsKHR(
    VkDevice                        device,
    const VkPipelineExecutableInfoKHR*  pExecutableInfo,
    uint32_t* pStatisticCount,
    VkPipelineExecutableStatisticKHR* pStatistics)
{
    VK_FROM_HANDLE(wrapper_device, base, device);
const VkPipelineExecutableInfoKHR*  pExecutableInfo__ = pExecutableInfo;
#ifdef NEEDS_UNWRAPPING_VkPipelineExecutableInfoKHR
    VkPipelineExecutableInfoKHR _w_pExecutableInfo = { 0 };
    pExecutableInfo__ = &_w_pExecutableInfo;
    unwrap_VkPipelineExecutableInfoKHR(base, (VkPipelineExecutableInfoKHR *) pExecutableInfo__, pExecutableInfo);
#endif
    VkResult result = base->dispatch_table.GetPipelineExecutableStatisticsKHR(base->dispatch_handle, pExecutableInfo__, pStatisticCount, pStatistics);
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
#ifdef NEEDS_UNWRAPPING_VkPipelineExecutableStatisticKHR
#warning TODO: Repack struct+array+out GetPipelineExecutableStatisticsKHR EntrypointParam(type='VkPipelineExecutableStatisticKHR', name='pStatistics', decl='VkPipelineExecutableStatisticKHR* pStatistics', len='pStatisticCount', elem=<Element 'param' at 0x7368899abf10>, is_const=False, num_pointers=1)
#endif
    return result;
}

static VKAPI_ATTR VkResult VKAPI_CALL
wrapper_tramp_GetPipelineExecutableInternalRepresentationsKHR(
    VkDevice                        device,
    const VkPipelineExecutableInfoKHR*  pExecutableInfo,
    uint32_t* pInternalRepresentationCount,
    VkPipelineExecutableInternalRepresentationKHR* pInternalRepresentations)
{
    VK_FROM_HANDLE(wrapper_device, base, device);
const VkPipelineExecutableInfoKHR*  pExecutableInfo__ = pExecutableInfo;
#ifdef NEEDS_UNWRAPPING_VkPipelineExecutableInfoKHR
    VkPipelineExecutableInfoKHR _w_pExecutableInfo = { 0 };
    pExecutableInfo__ = &_w_pExecutableInfo;
    unwrap_VkPipelineExecutableInfoKHR(base, (VkPipelineExecutableInfoKHR *) pExecutableInfo__, pExecutableInfo);
#endif
    VkResult result = base->dispatch_table.GetPipelineExecutableInternalRepresentationsKHR(base->dispatch_handle, pExecutableInfo__, pInternalRepresentationCount, pInternalRepresentations);
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
#ifdef NEEDS_UNWRAPPING_VkPipelineExecutableInternalRepresentationKHR
#warning TODO: Repack struct+array+out GetPipelineExecutableInternalRepresentationsKHR EntrypointParam(type='VkPipelineExecutableInternalRepresentationKHR', name='pInternalRepresentations', decl='VkPipelineExecutableInternalRepresentationKHR* pInternalRepresentations', len='pInternalRepresentationCount', elem=<Element 'param' at 0x7368899b4630>, is_const=False, num_pointers=1)
#endif
    return result;
}

static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_CmdSetLineStippleKHR(
    VkCommandBuffer commandBuffer,
    uint32_t lineStippleFactor,
    uint16_t lineStipplePattern)
{
    VK_FROM_HANDLE(wrapper_command_buffer, base, commandBuffer);
uint32_t lineStippleFactor__ = lineStippleFactor;
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
uint16_t lineStipplePattern__ = lineStipplePattern;
#ifdef NEEDS_UNWRAPPING_uint16_t
#endif
    base->device->dispatch_table.CmdSetLineStippleKHR(base->dispatch_handle, lineStippleFactor__, lineStipplePattern__);

    return ;
}
            
static VKAPI_ATTR VkResult VKAPI_CALL
wrapper_tramp_CreateAccelerationStructureKHR(
    VkDevice                                           device,
    const VkAccelerationStructureCreateInfoKHR*        pCreateInfo,
    const VkAllocationCallbacks*       pAllocator,
    VkAccelerationStructureKHR*                        pAccelerationStructure)
{
    VK_FROM_HANDLE(wrapper_device, base, device);
const VkAccelerationStructureCreateInfoKHR*        pCreateInfo__ = pCreateInfo;
#ifdef NEEDS_UNWRAPPING_VkAccelerationStructureCreateInfoKHR
    VkAccelerationStructureCreateInfoKHR _w_pCreateInfo = { 0 };
    pCreateInfo__ = &_w_pCreateInfo;
    unwrap_VkAccelerationStructureCreateInfoKHR(base, (VkAccelerationStructureCreateInfoKHR *) pCreateInfo__, pCreateInfo);
#endif
const VkAllocationCallbacks*       pAllocator__ = pAllocator;
#ifdef NEEDS_UNWRAPPING_VkAllocationCallbacks
    VkAllocationCallbacks _w_pAllocator = { 0 };
    pAllocator__ = &_w_pAllocator;
    unwrap_VkAllocationCallbacks(base, (VkAllocationCallbacks *) pAllocator__, pAllocator);
#endif
    VkResult result = base->dispatch_table.CreateAccelerationStructureKHR(base->dispatch_handle, pCreateInfo__, pAllocator__, pAccelerationStructure);
#ifdef NEEDS_UNWRAPPING_VkAccelerationStructureKHR
#endif
    return result;
}

static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_CmdBuildAccelerationStructuresKHR(
    VkCommandBuffer                                    commandBuffer,
    uint32_t infoCount,
    const VkAccelerationStructureBuildGeometryInfoKHR* pInfos,
    const VkAccelerationStructureBuildRangeInfoKHR* const* ppBuildRangeInfos)
{
    VK_FROM_HANDLE(wrapper_command_buffer, base, commandBuffer);
uint32_t infoCount__ = infoCount;
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
const VkAccelerationStructureBuildGeometryInfoKHR* pInfos__ = pInfos;
#ifdef NEEDS_UNWRAPPING_VkAccelerationStructureBuildGeometryInfoKHR
    pInfos__ = alloca(infoCount * sizeof(VkAccelerationStructureBuildGeometryInfoKHR));
    for (int i = 0; i < infoCount; i++)
        unwrap_VkAccelerationStructureBuildGeometryInfoKHR(base->device, (VkAccelerationStructureBuildGeometryInfoKHR *) &pInfos__[i], &pInfos[i]);
#endif
const VkAccelerationStructureBuildRangeInfoKHR* const* ppBuildRangeInfos__ = ppBuildRangeInfos;
#ifdef NEEDS_UNWRAPPING_VkAccelerationStructureBuildRangeInfoKHR
#error: Unhandled struct+ptr2 CmdBuildAccelerationStructuresKHR EntrypointParam(type='VkAccelerationStructureBuildRangeInfoKHR', name='ppBuildRangeInfos', decl='const VkAccelerationStructureBuildRangeInfoKHR* const* ppBuildRangeInfos', len='infoCount', elem=<Element 'param' at 0x7368899b6340>, is_const=True, num_pointers=2)
#endif
    base->device->dispatch_table.CmdBuildAccelerationStructuresKHR(base->dispatch_handle, infoCount__, pInfos__, ppBuildRangeInfos__);

    return ;
}

static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_CmdBuildAccelerationStructuresIndirectKHR(
    VkCommandBuffer                  commandBuffer,
    uint32_t                                           infoCount,
    const VkAccelerationStructureBuildGeometryInfoKHR* pInfos,
    const VkDeviceAddress*             pIndirectDeviceAddresses,
    const uint32_t*                    pIndirectStrides,
    const uint32_t* const*             ppMaxPrimitiveCounts)
{
    VK_FROM_HANDLE(wrapper_command_buffer, base, commandBuffer);
uint32_t                                           infoCount__ = infoCount;
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
const VkAccelerationStructureBuildGeometryInfoKHR* pInfos__ = pInfos;
#ifdef NEEDS_UNWRAPPING_VkAccelerationStructureBuildGeometryInfoKHR
    pInfos__ = alloca(infoCount * sizeof(VkAccelerationStructureBuildGeometryInfoKHR));
    for (int i = 0; i < infoCount; i++)
        unwrap_VkAccelerationStructureBuildGeometryInfoKHR(base->device, (VkAccelerationStructureBuildGeometryInfoKHR *) &pInfos__[i], &pInfos[i]);
#endif
const VkDeviceAddress*             pIndirectDeviceAddresses__ = pIndirectDeviceAddresses;
#ifdef NEEDS_UNWRAPPING_VkDeviceAddress
#endif
const uint32_t*                    pIndirectStrides__ = pIndirectStrides;
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
const uint32_t* const*             ppMaxPrimitiveCounts__ = ppMaxPrimitiveCounts;
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
    base->device->dispatch_table.CmdBuildAccelerationStructuresIndirectKHR(base->dispatch_handle, infoCount__, pInfos__, pIndirectDeviceAddresses__, pIndirectStrides__, ppMaxPrimitiveCounts__);

    return ;
}

static VKAPI_ATTR VkResult VKAPI_CALL
wrapper_tramp_BuildAccelerationStructuresKHR(
    VkDevice                                           device,
    VkDeferredOperationKHR deferredOperation,
    uint32_t infoCount,
    const VkAccelerationStructureBuildGeometryInfoKHR* pInfos,
    const VkAccelerationStructureBuildRangeInfoKHR* const* ppBuildRangeInfos)
{
    VK_FROM_HANDLE(wrapper_device, base, device);
VkDeferredOperationKHR deferredOperation__ = deferredOperation;
#ifdef NEEDS_UNWRAPPING_VkDeferredOperationKHR
#endif
uint32_t infoCount__ = infoCount;
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
const VkAccelerationStructureBuildGeometryInfoKHR* pInfos__ = pInfos;
#ifdef NEEDS_UNWRAPPING_VkAccelerationStructureBuildGeometryInfoKHR
    pInfos__ = alloca(infoCount * sizeof(VkAccelerationStructureBuildGeometryInfoKHR));
    for (int i = 0; i < infoCount; i++)
        unwrap_VkAccelerationStructureBuildGeometryInfoKHR(base, (VkAccelerationStructureBuildGeometryInfoKHR *) &pInfos__[i], &pInfos[i]);
#endif
const VkAccelerationStructureBuildRangeInfoKHR* const* ppBuildRangeInfos__ = ppBuildRangeInfos;
#ifdef NEEDS_UNWRAPPING_VkAccelerationStructureBuildRangeInfoKHR
#error: Unhandled struct+ptr2 BuildAccelerationStructuresKHR EntrypointParam(type='VkAccelerationStructureBuildRangeInfoKHR', name='ppBuildRangeInfos', decl='const VkAccelerationStructureBuildRangeInfoKHR* const* ppBuildRangeInfos', len='infoCount', elem=<Element 'param' at 0x7368899b70b0>, is_const=True, num_pointers=2)
#endif
    VkResult result = base->dispatch_table.BuildAccelerationStructuresKHR(base->dispatch_handle, deferredOperation__, infoCount__, pInfos__, ppBuildRangeInfos__);

    return result;
}

static VKAPI_ATTR VkDeviceAddress VKAPI_CALL
wrapper_tramp_GetAccelerationStructureDeviceAddressKHR(
    VkDevice device,
    const VkAccelerationStructureDeviceAddressInfoKHR* pInfo)
{
    VK_FROM_HANDLE(wrapper_device, base, device);
const VkAccelerationStructureDeviceAddressInfoKHR* pInfo__ = pInfo;
#ifdef NEEDS_UNWRAPPING_VkAccelerationStructureDeviceAddressInfoKHR
    VkAccelerationStructureDeviceAddressInfoKHR _w_pInfo = { 0 };
    pInfo__ = &_w_pInfo;
    unwrap_VkAccelerationStructureDeviceAddressInfoKHR(base, (VkAccelerationStructureDeviceAddressInfoKHR *) pInfo__, pInfo);
#endif
    VkDeviceAddress result = base->dispatch_table.GetAccelerationStructureDeviceAddressKHR(base->dispatch_handle, pInfo__);

    return result;
}

static VKAPI_ATTR VkResult VKAPI_CALL
wrapper_tramp_CreateDeferredOperationKHR(
    VkDevice device,
    const VkAllocationCallbacks* pAllocator,
    VkDeferredOperationKHR* pDeferredOperation)
{
    VK_FROM_HANDLE(wrapper_device, base, device);
const VkAllocationCallbacks* pAllocator__ = pAllocator;
#ifdef NEEDS_UNWRAPPING_VkAllocationCallbacks
    VkAllocationCallbacks _w_pAllocator = { 0 };
    pAllocator__ = &_w_pAllocator;
    unwrap_VkAllocationCallbacks(base, (VkAllocationCallbacks *) pAllocator__, pAllocator);
#endif
    VkResult result = base->dispatch_table.CreateDeferredOperationKHR(base->dispatch_handle, pAllocator__, pDeferredOperation);
#ifdef NEEDS_UNWRAPPING_VkDeferredOperationKHR
#endif
    return result;
}

static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_DestroyDeferredOperationKHR(
    VkDevice device,
    VkDeferredOperationKHR operation,
    const VkAllocationCallbacks* pAllocator)
{
    VK_FROM_HANDLE(wrapper_device, base, device);
VkDeferredOperationKHR operation__ = operation;
#ifdef NEEDS_UNWRAPPING_VkDeferredOperationKHR
#endif
const VkAllocationCallbacks* pAllocator__ = pAllocator;
#ifdef NEEDS_UNWRAPPING_VkAllocationCallbacks
    VkAllocationCallbacks _w_pAllocator = { 0 };
    pAllocator__ = &_w_pAllocator;
    unwrap_VkAllocationCallbacks(base, (VkAllocationCallbacks *) pAllocator__, pAllocator);
#endif
    base->dispatch_table.DestroyDeferredOperationKHR(base->dispatch_handle, operation__, pAllocator__);

    return ;
}

static VKAPI_ATTR uint32_t VKAPI_CALL
wrapper_tramp_GetDeferredOperationMaxConcurrencyKHR(
    VkDevice device,
    VkDeferredOperationKHR operation)
{
    VK_FROM_HANDLE(wrapper_device, base, device);
VkDeferredOperationKHR operation__ = operation;
#ifdef NEEDS_UNWRAPPING_VkDeferredOperationKHR
#endif
    uint32_t result = base->dispatch_table.GetDeferredOperationMaxConcurrencyKHR(base->dispatch_handle, operation__);

    return result;
}

static VKAPI_ATTR VkResult VKAPI_CALL
wrapper_tramp_GetDeferredOperationResultKHR(
    VkDevice device,
    VkDeferredOperationKHR operation)
{
    VK_FROM_HANDLE(wrapper_device, base, device);
VkDeferredOperationKHR operation__ = operation;
#ifdef NEEDS_UNWRAPPING_VkDeferredOperationKHR
#endif
    VkResult result = base->dispatch_table.GetDeferredOperationResultKHR(base->dispatch_handle, operation__);

    return result;
}

static VKAPI_ATTR VkResult VKAPI_CALL
wrapper_tramp_DeferredOperationJoinKHR(
    VkDevice device,
    VkDeferredOperationKHR operation)
{
    VK_FROM_HANDLE(wrapper_device, base, device);
VkDeferredOperationKHR operation__ = operation;
#ifdef NEEDS_UNWRAPPING_VkDeferredOperationKHR
#endif
    VkResult result = base->dispatch_table.DeferredOperationJoinKHR(base->dispatch_handle, operation__);

    return result;
}

static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_GetPipelineIndirectMemoryRequirementsNV(
    VkDevice device,
    const VkComputePipelineCreateInfo* pCreateInfo,
    VkMemoryRequirements2* pMemoryRequirements)
{
    VK_FROM_HANDLE(wrapper_device, base, device);
const VkComputePipelineCreateInfo* pCreateInfo__ = pCreateInfo;
#ifdef NEEDS_UNWRAPPING_VkComputePipelineCreateInfo
    VkComputePipelineCreateInfo _w_pCreateInfo = { 0 };
    pCreateInfo__ = &_w_pCreateInfo;
    unwrap_VkComputePipelineCreateInfo(base, (VkComputePipelineCreateInfo *) pCreateInfo__, pCreateInfo);
#endif
    base->dispatch_table.GetPipelineIndirectMemoryRequirementsNV(base->dispatch_handle, pCreateInfo__, pMemoryRequirements);
#ifdef NEEDS_UNWRAPPING_VkMemoryRequirements2
#warning TODO: Repack struct+ptr+out GetPipelineIndirectMemoryRequirementsNV EntrypointParam(type='VkMemoryRequirements2', name='pMemoryRequirements', decl='VkMemoryRequirements2* pMemoryRequirements', len=None, elem=<Element 'param' at 0x7368899bcbd0>, is_const=False, num_pointers=1)
#endif
    return ;
}

static VKAPI_ATTR VkDeviceAddress VKAPI_CALL
wrapper_tramp_GetPipelineIndirectDeviceAddressNV(
    VkDevice device,
    const VkPipelineIndirectDeviceAddressInfoNV* pInfo)
{
    VK_FROM_HANDLE(wrapper_device, base, device);
const VkPipelineIndirectDeviceAddressInfoNV* pInfo__ = pInfo;
#ifdef NEEDS_UNWRAPPING_VkPipelineIndirectDeviceAddressInfoNV
    VkPipelineIndirectDeviceAddressInfoNV _w_pInfo = { 0 };
    pInfo__ = &_w_pInfo;
    unwrap_VkPipelineIndirectDeviceAddressInfoNV(base, (VkPipelineIndirectDeviceAddressInfoNV *) pInfo__, pInfo);
#endif
    VkDeviceAddress result = base->dispatch_table.GetPipelineIndirectDeviceAddressNV(base->dispatch_handle, pInfo__);

    return result;
}

static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_CmdSetCullMode(
    VkCommandBuffer commandBuffer,
    VkCullModeFlags cullMode)
{
    VK_FROM_HANDLE(wrapper_command_buffer, base, commandBuffer);
VkCullModeFlags cullMode__ = cullMode;
#ifdef NEEDS_UNWRAPPING_VkCullModeFlags
#endif
    base->device->dispatch_table.CmdSetCullMode(base->dispatch_handle, cullMode__);

    return ;
}
    
static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_CmdSetFrontFace(
    VkCommandBuffer commandBuffer,
    VkFrontFace frontFace)
{
    VK_FROM_HANDLE(wrapper_command_buffer, base, commandBuffer);
VkFrontFace frontFace__ = frontFace;
#ifdef NEEDS_UNWRAPPING_VkFrontFace
#endif
    base->device->dispatch_table.CmdSetFrontFace(base->dispatch_handle, frontFace__);

    return ;
}
    
static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_CmdSetPrimitiveTopology(
    VkCommandBuffer commandBuffer,
    VkPrimitiveTopology primitiveTopology)
{
    VK_FROM_HANDLE(wrapper_command_buffer, base, commandBuffer);
VkPrimitiveTopology primitiveTopology__ = primitiveTopology;
#ifdef NEEDS_UNWRAPPING_VkPrimitiveTopology
#endif
    base->device->dispatch_table.CmdSetPrimitiveTopology(base->dispatch_handle, primitiveTopology__);

    return ;
}
    
static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_CmdSetViewportWithCount(
    VkCommandBuffer commandBuffer,
    uint32_t viewportCount,
    const VkViewport* pViewports)
{
    VK_FROM_HANDLE(wrapper_command_buffer, base, commandBuffer);
uint32_t viewportCount__ = viewportCount;
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
const VkViewport* pViewports__ = pViewports;
#ifdef NEEDS_UNWRAPPING_VkViewport
    pViewports__ = alloca(viewportCount * sizeof(VkViewport));
    for (int i = 0; i < viewportCount; i++)
        unwrap_VkViewport(base->device, (VkViewport *) &pViewports__[i], &pViewports[i]);
#endif
    base->device->dispatch_table.CmdSetViewportWithCount(base->dispatch_handle, viewportCount__, pViewports__);

    return ;
}
    
static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_CmdSetScissorWithCount(
    VkCommandBuffer commandBuffer,
    uint32_t scissorCount,
    const VkRect2D* pScissors)
{
    VK_FROM_HANDLE(wrapper_command_buffer, base, commandBuffer);
uint32_t scissorCount__ = scissorCount;
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
const VkRect2D* pScissors__ = pScissors;
#ifdef NEEDS_UNWRAPPING_VkRect2D
    pScissors__ = alloca(scissorCount * sizeof(VkRect2D));
    for (int i = 0; i < scissorCount; i++)
        unwrap_VkRect2D(base->device, (VkRect2D *) &pScissors__[i], &pScissors[i]);
#endif
    base->device->dispatch_table.CmdSetScissorWithCount(base->dispatch_handle, scissorCount__, pScissors__);

    return ;
}
    
static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_CmdBindIndexBuffer2KHR(
    VkCommandBuffer commandBuffer,
    VkBuffer buffer,
    VkDeviceSize offset,
    VkDeviceSize size,
    VkIndexType indexType)
{
    VK_FROM_HANDLE(wrapper_command_buffer, base, commandBuffer);
VkBuffer buffer__ = buffer;
#ifdef NEEDS_UNWRAPPING_VkBuffer
#endif
VkDeviceSize offset__ = offset;
#ifdef NEEDS_UNWRAPPING_VkDeviceSize
#endif
VkDeviceSize size__ = size;
#ifdef NEEDS_UNWRAPPING_VkDeviceSize
#endif
VkIndexType indexType__ = indexType;
#ifdef NEEDS_UNWRAPPING_VkIndexType
#endif
    base->device->dispatch_table.CmdBindIndexBuffer2KHR(base->dispatch_handle, buffer__, offset__, size__, indexType__);

    return ;
}

static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_CmdBindVertexBuffers2(
    VkCommandBuffer commandBuffer,
    uint32_t firstBinding,
    uint32_t bindingCount,
    const VkBuffer* pBuffers,
    const VkDeviceSize* pOffsets,
    const VkDeviceSize* pSizes,
    const VkDeviceSize* pStrides)
{
    VK_FROM_HANDLE(wrapper_command_buffer, base, commandBuffer);
uint32_t firstBinding__ = firstBinding;
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
uint32_t bindingCount__ = bindingCount;
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
const VkBuffer* pBuffers__ = pBuffers;
#ifdef NEEDS_UNWRAPPING_VkBuffer
#endif
const VkDeviceSize* pOffsets__ = pOffsets;
#ifdef NEEDS_UNWRAPPING_VkDeviceSize
#endif
const VkDeviceSize* pSizes__ = pSizes;
#ifdef NEEDS_UNWRAPPING_VkDeviceSize
#endif
const VkDeviceSize* pStrides__ = pStrides;
#ifdef NEEDS_UNWRAPPING_VkDeviceSize
#endif
    base->device->dispatch_table.CmdBindVertexBuffers2(base->dispatch_handle, firstBinding__, bindingCount__, pBuffers__, pOffsets__, pSizes__, pStrides__);

    return ;
}
    
static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_CmdSetDepthTestEnable(
    VkCommandBuffer commandBuffer,
    VkBool32 depthTestEnable)
{
    VK_FROM_HANDLE(wrapper_command_buffer, base, commandBuffer);
VkBool32 depthTestEnable__ = depthTestEnable;
#ifdef NEEDS_UNWRAPPING_VkBool32
#endif
    base->device->dispatch_table.CmdSetDepthTestEnable(base->dispatch_handle, depthTestEnable__);

    return ;
}
    
static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_CmdSetDepthWriteEnable(
    VkCommandBuffer commandBuffer,
    VkBool32 depthWriteEnable)
{
    VK_FROM_HANDLE(wrapper_command_buffer, base, commandBuffer);
VkBool32 depthWriteEnable__ = depthWriteEnable;
#ifdef NEEDS_UNWRAPPING_VkBool32
#endif
    base->device->dispatch_table.CmdSetDepthWriteEnable(base->dispatch_handle, depthWriteEnable__);

    return ;
}
    
static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_CmdSetDepthCompareOp(
    VkCommandBuffer commandBuffer,
    VkCompareOp depthCompareOp)
{
    VK_FROM_HANDLE(wrapper_command_buffer, base, commandBuffer);
VkCompareOp depthCompareOp__ = depthCompareOp;
#ifdef NEEDS_UNWRAPPING_VkCompareOp
#endif
    base->device->dispatch_table.CmdSetDepthCompareOp(base->dispatch_handle, depthCompareOp__);

    return ;
}
    
static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_CmdSetDepthBoundsTestEnable(
    VkCommandBuffer commandBuffer,
    VkBool32 depthBoundsTestEnable)
{
    VK_FROM_HANDLE(wrapper_command_buffer, base, commandBuffer);
VkBool32 depthBoundsTestEnable__ = depthBoundsTestEnable;
#ifdef NEEDS_UNWRAPPING_VkBool32
#endif
    base->device->dispatch_table.CmdSetDepthBoundsTestEnable(base->dispatch_handle, depthBoundsTestEnable__);

    return ;
}
    
static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_CmdSetStencilTestEnable(
    VkCommandBuffer commandBuffer,
    VkBool32 stencilTestEnable)
{
    VK_FROM_HANDLE(wrapper_command_buffer, base, commandBuffer);
VkBool32 stencilTestEnable__ = stencilTestEnable;
#ifdef NEEDS_UNWRAPPING_VkBool32
#endif
    base->device->dispatch_table.CmdSetStencilTestEnable(base->dispatch_handle, stencilTestEnable__);

    return ;
}
    
static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_CmdSetStencilOp(
    VkCommandBuffer commandBuffer,
    VkStencilFaceFlags faceMask,
    VkStencilOp failOp,
    VkStencilOp passOp,
    VkStencilOp depthFailOp,
    VkCompareOp compareOp)
{
    VK_FROM_HANDLE(wrapper_command_buffer, base, commandBuffer);
VkStencilFaceFlags faceMask__ = faceMask;
#ifdef NEEDS_UNWRAPPING_VkStencilFaceFlags
#endif
VkStencilOp failOp__ = failOp;
#ifdef NEEDS_UNWRAPPING_VkStencilOp
#endif
VkStencilOp passOp__ = passOp;
#ifdef NEEDS_UNWRAPPING_VkStencilOp
#endif
VkStencilOp depthFailOp__ = depthFailOp;
#ifdef NEEDS_UNWRAPPING_VkStencilOp
#endif
VkCompareOp compareOp__ = compareOp;
#ifdef NEEDS_UNWRAPPING_VkCompareOp
#endif
    base->device->dispatch_table.CmdSetStencilOp(base->dispatch_handle, faceMask__, failOp__, passOp__, depthFailOp__, compareOp__);

    return ;
}
    
static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_CmdSetPatchControlPointsEXT(
    VkCommandBuffer commandBuffer,
    uint32_t patchControlPoints)
{
    VK_FROM_HANDLE(wrapper_command_buffer, base, commandBuffer);
uint32_t patchControlPoints__ = patchControlPoints;
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
    base->device->dispatch_table.CmdSetPatchControlPointsEXT(base->dispatch_handle, patchControlPoints__);

    return ;
}

static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_CmdSetRasterizerDiscardEnable(
    VkCommandBuffer commandBuffer,
    VkBool32 rasterizerDiscardEnable)
{
    VK_FROM_HANDLE(wrapper_command_buffer, base, commandBuffer);
VkBool32 rasterizerDiscardEnable__ = rasterizerDiscardEnable;
#ifdef NEEDS_UNWRAPPING_VkBool32
#endif
    base->device->dispatch_table.CmdSetRasterizerDiscardEnable(base->dispatch_handle, rasterizerDiscardEnable__);

    return ;
}
    
static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_CmdSetDepthBiasEnable(
    VkCommandBuffer commandBuffer,
    VkBool32 depthBiasEnable)
{
    VK_FROM_HANDLE(wrapper_command_buffer, base, commandBuffer);
VkBool32 depthBiasEnable__ = depthBiasEnable;
#ifdef NEEDS_UNWRAPPING_VkBool32
#endif
    base->device->dispatch_table.CmdSetDepthBiasEnable(base->dispatch_handle, depthBiasEnable__);

    return ;
}
    
static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_CmdSetLogicOpEXT(
    VkCommandBuffer commandBuffer,
    VkLogicOp logicOp)
{
    VK_FROM_HANDLE(wrapper_command_buffer, base, commandBuffer);
VkLogicOp logicOp__ = logicOp;
#ifdef NEEDS_UNWRAPPING_VkLogicOp
#endif
    base->device->dispatch_table.CmdSetLogicOpEXT(base->dispatch_handle, logicOp__);

    return ;
}

static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_CmdSetPrimitiveRestartEnable(
    VkCommandBuffer commandBuffer,
    VkBool32 primitiveRestartEnable)
{
    VK_FROM_HANDLE(wrapper_command_buffer, base, commandBuffer);
VkBool32 primitiveRestartEnable__ = primitiveRestartEnable;
#ifdef NEEDS_UNWRAPPING_VkBool32
#endif
    base->device->dispatch_table.CmdSetPrimitiveRestartEnable(base->dispatch_handle, primitiveRestartEnable__);

    return ;
}
    
static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_CmdSetTessellationDomainOriginEXT(
    VkCommandBuffer commandBuffer,
    VkTessellationDomainOrigin domainOrigin)
{
    VK_FROM_HANDLE(wrapper_command_buffer, base, commandBuffer);
VkTessellationDomainOrigin domainOrigin__ = domainOrigin;
#ifdef NEEDS_UNWRAPPING_VkTessellationDomainOrigin
#endif
    base->device->dispatch_table.CmdSetTessellationDomainOriginEXT(base->dispatch_handle, domainOrigin__);

    return ;
}

static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_CmdSetDepthClampEnableEXT(
    VkCommandBuffer commandBuffer,
    VkBool32 depthClampEnable)
{
    VK_FROM_HANDLE(wrapper_command_buffer, base, commandBuffer);
VkBool32 depthClampEnable__ = depthClampEnable;
#ifdef NEEDS_UNWRAPPING_VkBool32
#endif
    base->device->dispatch_table.CmdSetDepthClampEnableEXT(base->dispatch_handle, depthClampEnable__);

    return ;
}

static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_CmdSetPolygonModeEXT(
    VkCommandBuffer commandBuffer,
    VkPolygonMode polygonMode)
{
    VK_FROM_HANDLE(wrapper_command_buffer, base, commandBuffer);
VkPolygonMode polygonMode__ = polygonMode;
#ifdef NEEDS_UNWRAPPING_VkPolygonMode
#endif
    base->device->dispatch_table.CmdSetPolygonModeEXT(base->dispatch_handle, polygonMode__);

    return ;
}

static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_CmdSetRasterizationSamplesEXT(
    VkCommandBuffer commandBuffer,
    VkSampleCountFlagBits  rasterizationSamples)
{
    VK_FROM_HANDLE(wrapper_command_buffer, base, commandBuffer);
VkSampleCountFlagBits  rasterizationSamples__ = rasterizationSamples;
#ifdef NEEDS_UNWRAPPING_VkSampleCountFlagBits
#endif
    base->device->dispatch_table.CmdSetRasterizationSamplesEXT(base->dispatch_handle, rasterizationSamples__);

    return ;
}

static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_CmdSetSampleMaskEXT(
    VkCommandBuffer commandBuffer,
    VkSampleCountFlagBits  samples,
    const VkSampleMask*    pSampleMask)
{
    VK_FROM_HANDLE(wrapper_command_buffer, base, commandBuffer);
VkSampleCountFlagBits  samples__ = samples;
#ifdef NEEDS_UNWRAPPING_VkSampleCountFlagBits
#endif
const VkSampleMask*    pSampleMask__ = pSampleMask;
#ifdef NEEDS_UNWRAPPING_VkSampleMask
#endif
    base->device->dispatch_table.CmdSetSampleMaskEXT(base->dispatch_handle, samples__, pSampleMask__);

    return ;
}

static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_CmdSetAlphaToCoverageEnableEXT(
    VkCommandBuffer commandBuffer,
    VkBool32 alphaToCoverageEnable)
{
    VK_FROM_HANDLE(wrapper_command_buffer, base, commandBuffer);
VkBool32 alphaToCoverageEnable__ = alphaToCoverageEnable;
#ifdef NEEDS_UNWRAPPING_VkBool32
#endif
    base->device->dispatch_table.CmdSetAlphaToCoverageEnableEXT(base->dispatch_handle, alphaToCoverageEnable__);

    return ;
}

static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_CmdSetAlphaToOneEnableEXT(
    VkCommandBuffer commandBuffer,
    VkBool32 alphaToOneEnable)
{
    VK_FROM_HANDLE(wrapper_command_buffer, base, commandBuffer);
VkBool32 alphaToOneEnable__ = alphaToOneEnable;
#ifdef NEEDS_UNWRAPPING_VkBool32
#endif
    base->device->dispatch_table.CmdSetAlphaToOneEnableEXT(base->dispatch_handle, alphaToOneEnable__);

    return ;
}

static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_CmdSetLogicOpEnableEXT(
    VkCommandBuffer commandBuffer,
    VkBool32 logicOpEnable)
{
    VK_FROM_HANDLE(wrapper_command_buffer, base, commandBuffer);
VkBool32 logicOpEnable__ = logicOpEnable;
#ifdef NEEDS_UNWRAPPING_VkBool32
#endif
    base->device->dispatch_table.CmdSetLogicOpEnableEXT(base->dispatch_handle, logicOpEnable__);

    return ;
}

static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_CmdSetColorBlendEnableEXT(
    VkCommandBuffer commandBuffer,
    uint32_t firstAttachment,
    uint32_t attachmentCount,
    const VkBool32* pColorBlendEnables)
{
    VK_FROM_HANDLE(wrapper_command_buffer, base, commandBuffer);
uint32_t firstAttachment__ = firstAttachment;
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
uint32_t attachmentCount__ = attachmentCount;
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
const VkBool32* pColorBlendEnables__ = pColorBlendEnables;
#ifdef NEEDS_UNWRAPPING_VkBool32
#endif
    base->device->dispatch_table.CmdSetColorBlendEnableEXT(base->dispatch_handle, firstAttachment__, attachmentCount__, pColorBlendEnables__);

    return ;
}

static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_CmdSetColorBlendEquationEXT(
    VkCommandBuffer commandBuffer,
    uint32_t firstAttachment,
    uint32_t attachmentCount,
    const VkColorBlendEquationEXT* pColorBlendEquations)
{
    VK_FROM_HANDLE(wrapper_command_buffer, base, commandBuffer);
uint32_t firstAttachment__ = firstAttachment;
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
uint32_t attachmentCount__ = attachmentCount;
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
const VkColorBlendEquationEXT* pColorBlendEquations__ = pColorBlendEquations;
#ifdef NEEDS_UNWRAPPING_VkColorBlendEquationEXT
    pColorBlendEquations__ = alloca(attachmentCount * sizeof(VkColorBlendEquationEXT));
    for (int i = 0; i < attachmentCount; i++)
        unwrap_VkColorBlendEquationEXT(base->device, (VkColorBlendEquationEXT *) &pColorBlendEquations__[i], &pColorBlendEquations[i]);
#endif
    base->device->dispatch_table.CmdSetColorBlendEquationEXT(base->dispatch_handle, firstAttachment__, attachmentCount__, pColorBlendEquations__);

    return ;
}

static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_CmdSetColorWriteMaskEXT(
    VkCommandBuffer commandBuffer,
    uint32_t firstAttachment,
    uint32_t attachmentCount,
    const VkColorComponentFlags* pColorWriteMasks)
{
    VK_FROM_HANDLE(wrapper_command_buffer, base, commandBuffer);
uint32_t firstAttachment__ = firstAttachment;
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
uint32_t attachmentCount__ = attachmentCount;
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
const VkColorComponentFlags* pColorWriteMasks__ = pColorWriteMasks;
#ifdef NEEDS_UNWRAPPING_VkColorComponentFlags
#endif
    base->device->dispatch_table.CmdSetColorWriteMaskEXT(base->dispatch_handle, firstAttachment__, attachmentCount__, pColorWriteMasks__);

    return ;
}

static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_CmdSetRasterizationStreamEXT(
    VkCommandBuffer commandBuffer,
    uint32_t rasterizationStream)
{
    VK_FROM_HANDLE(wrapper_command_buffer, base, commandBuffer);
uint32_t rasterizationStream__ = rasterizationStream;
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
    base->device->dispatch_table.CmdSetRasterizationStreamEXT(base->dispatch_handle, rasterizationStream__);

    return ;
}

static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_CmdSetConservativeRasterizationModeEXT(
    VkCommandBuffer commandBuffer,
    VkConservativeRasterizationModeEXT conservativeRasterizationMode)
{
    VK_FROM_HANDLE(wrapper_command_buffer, base, commandBuffer);
VkConservativeRasterizationModeEXT conservativeRasterizationMode__ = conservativeRasterizationMode;
#ifdef NEEDS_UNWRAPPING_VkConservativeRasterizationModeEXT
#endif
    base->device->dispatch_table.CmdSetConservativeRasterizationModeEXT(base->dispatch_handle, conservativeRasterizationMode__);

    return ;
}

static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_CmdSetExtraPrimitiveOverestimationSizeEXT(
    VkCommandBuffer commandBuffer,
    float extraPrimitiveOverestimationSize)
{
    VK_FROM_HANDLE(wrapper_command_buffer, base, commandBuffer);
float extraPrimitiveOverestimationSize__ = extraPrimitiveOverestimationSize;
#ifdef NEEDS_UNWRAPPING_float
#endif
    base->device->dispatch_table.CmdSetExtraPrimitiveOverestimationSizeEXT(base->dispatch_handle, extraPrimitiveOverestimationSize__);

    return ;
}

static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_CmdSetDepthClipEnableEXT(
    VkCommandBuffer commandBuffer,
    VkBool32 depthClipEnable)
{
    VK_FROM_HANDLE(wrapper_command_buffer, base, commandBuffer);
VkBool32 depthClipEnable__ = depthClipEnable;
#ifdef NEEDS_UNWRAPPING_VkBool32
#endif
    base->device->dispatch_table.CmdSetDepthClipEnableEXT(base->dispatch_handle, depthClipEnable__);

    return ;
}

static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_CmdSetSampleLocationsEnableEXT(
    VkCommandBuffer commandBuffer,
    VkBool32 sampleLocationsEnable)
{
    VK_FROM_HANDLE(wrapper_command_buffer, base, commandBuffer);
VkBool32 sampleLocationsEnable__ = sampleLocationsEnable;
#ifdef NEEDS_UNWRAPPING_VkBool32
#endif
    base->device->dispatch_table.CmdSetSampleLocationsEnableEXT(base->dispatch_handle, sampleLocationsEnable__);

    return ;
}

static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_CmdSetColorBlendAdvancedEXT(
    VkCommandBuffer commandBuffer,
    uint32_t firstAttachment,
    uint32_t attachmentCount,
    const VkColorBlendAdvancedEXT* pColorBlendAdvanced)
{
    VK_FROM_HANDLE(wrapper_command_buffer, base, commandBuffer);
uint32_t firstAttachment__ = firstAttachment;
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
uint32_t attachmentCount__ = attachmentCount;
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
const VkColorBlendAdvancedEXT* pColorBlendAdvanced__ = pColorBlendAdvanced;
#ifdef NEEDS_UNWRAPPING_VkColorBlendAdvancedEXT
    pColorBlendAdvanced__ = alloca(attachmentCount * sizeof(VkColorBlendAdvancedEXT));
    for (int i = 0; i < attachmentCount; i++)
        unwrap_VkColorBlendAdvancedEXT(base->device, (VkColorBlendAdvancedEXT *) &pColorBlendAdvanced__[i], &pColorBlendAdvanced[i]);
#endif
    base->device->dispatch_table.CmdSetColorBlendAdvancedEXT(base->dispatch_handle, firstAttachment__, attachmentCount__, pColorBlendAdvanced__);

    return ;
}

static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_CmdSetProvokingVertexModeEXT(
    VkCommandBuffer commandBuffer,
    VkProvokingVertexModeEXT provokingVertexMode)
{
    VK_FROM_HANDLE(wrapper_command_buffer, base, commandBuffer);
VkProvokingVertexModeEXT provokingVertexMode__ = provokingVertexMode;
#ifdef NEEDS_UNWRAPPING_VkProvokingVertexModeEXT
#endif
    base->device->dispatch_table.CmdSetProvokingVertexModeEXT(base->dispatch_handle, provokingVertexMode__);

    return ;
}

static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_CmdSetLineRasterizationModeEXT(
    VkCommandBuffer commandBuffer,
    VkLineRasterizationModeEXT lineRasterizationMode)
{
    VK_FROM_HANDLE(wrapper_command_buffer, base, commandBuffer);
VkLineRasterizationModeEXT lineRasterizationMode__ = lineRasterizationMode;
#ifdef NEEDS_UNWRAPPING_VkLineRasterizationModeEXT
#endif
    base->device->dispatch_table.CmdSetLineRasterizationModeEXT(base->dispatch_handle, lineRasterizationMode__);

    return ;
}

static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_CmdSetLineStippleEnableEXT(
    VkCommandBuffer commandBuffer,
    VkBool32 stippledLineEnable)
{
    VK_FROM_HANDLE(wrapper_command_buffer, base, commandBuffer);
VkBool32 stippledLineEnable__ = stippledLineEnable;
#ifdef NEEDS_UNWRAPPING_VkBool32
#endif
    base->device->dispatch_table.CmdSetLineStippleEnableEXT(base->dispatch_handle, stippledLineEnable__);

    return ;
}

static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_CmdSetDepthClipNegativeOneToOneEXT(
    VkCommandBuffer commandBuffer,
    VkBool32 negativeOneToOne)
{
    VK_FROM_HANDLE(wrapper_command_buffer, base, commandBuffer);
VkBool32 negativeOneToOne__ = negativeOneToOne;
#ifdef NEEDS_UNWRAPPING_VkBool32
#endif
    base->device->dispatch_table.CmdSetDepthClipNegativeOneToOneEXT(base->dispatch_handle, negativeOneToOne__);

    return ;
}

static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_CmdSetViewportWScalingEnableNV(
    VkCommandBuffer commandBuffer,
    VkBool32 viewportWScalingEnable)
{
    VK_FROM_HANDLE(wrapper_command_buffer, base, commandBuffer);
VkBool32 viewportWScalingEnable__ = viewportWScalingEnable;
#ifdef NEEDS_UNWRAPPING_VkBool32
#endif
    base->device->dispatch_table.CmdSetViewportWScalingEnableNV(base->dispatch_handle, viewportWScalingEnable__);

    return ;
}

static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_CmdSetViewportSwizzleNV(
    VkCommandBuffer commandBuffer,
    uint32_t firstViewport,
    uint32_t viewportCount,
    const VkViewportSwizzleNV* pViewportSwizzles)
{
    VK_FROM_HANDLE(wrapper_command_buffer, base, commandBuffer);
uint32_t firstViewport__ = firstViewport;
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
uint32_t viewportCount__ = viewportCount;
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
const VkViewportSwizzleNV* pViewportSwizzles__ = pViewportSwizzles;
#ifdef NEEDS_UNWRAPPING_VkViewportSwizzleNV
    pViewportSwizzles__ = alloca(viewportCount * sizeof(VkViewportSwizzleNV));
    for (int i = 0; i < viewportCount; i++)
        unwrap_VkViewportSwizzleNV(base->device, (VkViewportSwizzleNV *) &pViewportSwizzles__[i], &pViewportSwizzles[i]);
#endif
    base->device->dispatch_table.CmdSetViewportSwizzleNV(base->dispatch_handle, firstViewport__, viewportCount__, pViewportSwizzles__);

    return ;
}

static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_CmdSetCoverageToColorEnableNV(
    VkCommandBuffer commandBuffer,
    VkBool32 coverageToColorEnable)
{
    VK_FROM_HANDLE(wrapper_command_buffer, base, commandBuffer);
VkBool32 coverageToColorEnable__ = coverageToColorEnable;
#ifdef NEEDS_UNWRAPPING_VkBool32
#endif
    base->device->dispatch_table.CmdSetCoverageToColorEnableNV(base->dispatch_handle, coverageToColorEnable__);

    return ;
}

static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_CmdSetCoverageToColorLocationNV(
    VkCommandBuffer commandBuffer,
    uint32_t coverageToColorLocation)
{
    VK_FROM_HANDLE(wrapper_command_buffer, base, commandBuffer);
uint32_t coverageToColorLocation__ = coverageToColorLocation;
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
    base->device->dispatch_table.CmdSetCoverageToColorLocationNV(base->dispatch_handle, coverageToColorLocation__);

    return ;
}

static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_CmdSetCoverageModulationModeNV(
    VkCommandBuffer commandBuffer,
    VkCoverageModulationModeNV coverageModulationMode)
{
    VK_FROM_HANDLE(wrapper_command_buffer, base, commandBuffer);
VkCoverageModulationModeNV coverageModulationMode__ = coverageModulationMode;
#ifdef NEEDS_UNWRAPPING_VkCoverageModulationModeNV
#endif
    base->device->dispatch_table.CmdSetCoverageModulationModeNV(base->dispatch_handle, coverageModulationMode__);

    return ;
}

static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_CmdSetCoverageModulationTableEnableNV(
    VkCommandBuffer commandBuffer,
    VkBool32 coverageModulationTableEnable)
{
    VK_FROM_HANDLE(wrapper_command_buffer, base, commandBuffer);
VkBool32 coverageModulationTableEnable__ = coverageModulationTableEnable;
#ifdef NEEDS_UNWRAPPING_VkBool32
#endif
    base->device->dispatch_table.CmdSetCoverageModulationTableEnableNV(base->dispatch_handle, coverageModulationTableEnable__);

    return ;
}

static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_CmdSetCoverageModulationTableNV(
    VkCommandBuffer commandBuffer,
    uint32_t coverageModulationTableCount,
    const float* pCoverageModulationTable)
{
    VK_FROM_HANDLE(wrapper_command_buffer, base, commandBuffer);
uint32_t coverageModulationTableCount__ = coverageModulationTableCount;
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
const float* pCoverageModulationTable__ = pCoverageModulationTable;
#ifdef NEEDS_UNWRAPPING_float
#endif
    base->device->dispatch_table.CmdSetCoverageModulationTableNV(base->dispatch_handle, coverageModulationTableCount__, pCoverageModulationTable__);

    return ;
}

static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_CmdSetShadingRateImageEnableNV(
    VkCommandBuffer commandBuffer,
    VkBool32 shadingRateImageEnable)
{
    VK_FROM_HANDLE(wrapper_command_buffer, base, commandBuffer);
VkBool32 shadingRateImageEnable__ = shadingRateImageEnable;
#ifdef NEEDS_UNWRAPPING_VkBool32
#endif
    base->device->dispatch_table.CmdSetShadingRateImageEnableNV(base->dispatch_handle, shadingRateImageEnable__);

    return ;
}

static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_CmdSetCoverageReductionModeNV(
    VkCommandBuffer commandBuffer,
    VkCoverageReductionModeNV coverageReductionMode)
{
    VK_FROM_HANDLE(wrapper_command_buffer, base, commandBuffer);
VkCoverageReductionModeNV coverageReductionMode__ = coverageReductionMode;
#ifdef NEEDS_UNWRAPPING_VkCoverageReductionModeNV
#endif
    base->device->dispatch_table.CmdSetCoverageReductionModeNV(base->dispatch_handle, coverageReductionMode__);

    return ;
}

static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_CmdSetRepresentativeFragmentTestEnableNV(
    VkCommandBuffer commandBuffer,
    VkBool32 representativeFragmentTestEnable)
{
    VK_FROM_HANDLE(wrapper_command_buffer, base, commandBuffer);
VkBool32 representativeFragmentTestEnable__ = representativeFragmentTestEnable;
#ifdef NEEDS_UNWRAPPING_VkBool32
#endif
    base->device->dispatch_table.CmdSetRepresentativeFragmentTestEnableNV(base->dispatch_handle, representativeFragmentTestEnable__);

    return ;
}

static VKAPI_ATTR VkResult VKAPI_CALL
wrapper_tramp_CreatePrivateDataSlot(
    VkDevice device,
    const VkPrivateDataSlotCreateInfo* pCreateInfo,
    const VkAllocationCallbacks* pAllocator,
    VkPrivateDataSlot* pPrivateDataSlot)
{
    VK_FROM_HANDLE(wrapper_device, base, device);
const VkPrivateDataSlotCreateInfo* pCreateInfo__ = pCreateInfo;
#ifdef NEEDS_UNWRAPPING_VkPrivateDataSlotCreateInfo
    VkPrivateDataSlotCreateInfo _w_pCreateInfo = { 0 };
    pCreateInfo__ = &_w_pCreateInfo;
    unwrap_VkPrivateDataSlotCreateInfo(base, (VkPrivateDataSlotCreateInfo *) pCreateInfo__, pCreateInfo);
#endif
const VkAllocationCallbacks* pAllocator__ = pAllocator;
#ifdef NEEDS_UNWRAPPING_VkAllocationCallbacks
    VkAllocationCallbacks _w_pAllocator = { 0 };
    pAllocator__ = &_w_pAllocator;
    unwrap_VkAllocationCallbacks(base, (VkAllocationCallbacks *) pAllocator__, pAllocator);
#endif
    VkResult result = base->dispatch_table.CreatePrivateDataSlot(base->dispatch_handle, pCreateInfo__, pAllocator__, pPrivateDataSlot);
#ifdef NEEDS_UNWRAPPING_VkPrivateDataSlot
#endif
    return result;
}
    
static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_DestroyPrivateDataSlot(
    VkDevice device,
    VkPrivateDataSlot privateDataSlot,
    const VkAllocationCallbacks* pAllocator)
{
    VK_FROM_HANDLE(wrapper_device, base, device);
VkPrivateDataSlot privateDataSlot__ = privateDataSlot;
#ifdef NEEDS_UNWRAPPING_VkPrivateDataSlot
#endif
const VkAllocationCallbacks* pAllocator__ = pAllocator;
#ifdef NEEDS_UNWRAPPING_VkAllocationCallbacks
    VkAllocationCallbacks _w_pAllocator = { 0 };
    pAllocator__ = &_w_pAllocator;
    unwrap_VkAllocationCallbacks(base, (VkAllocationCallbacks *) pAllocator__, pAllocator);
#endif
    base->dispatch_table.DestroyPrivateDataSlot(base->dispatch_handle, privateDataSlot__, pAllocator__);

    return ;
}
    
static VKAPI_ATTR VkResult VKAPI_CALL
wrapper_tramp_SetPrivateData(
    VkDevice device,
    VkObjectType objectType,
    uint64_t objectHandle,
    VkPrivateDataSlot privateDataSlot,
    uint64_t data)
{
    VK_FROM_HANDLE(wrapper_device, base, device);
VkObjectType objectType__ = objectType;
#ifdef NEEDS_UNWRAPPING_VkObjectType
#endif
uint64_t objectHandle__ = objectHandle;
#ifdef NEEDS_UNWRAPPING_uint64_t
#endif
VkPrivateDataSlot privateDataSlot__ = privateDataSlot;
#ifdef NEEDS_UNWRAPPING_VkPrivateDataSlot
#endif
uint64_t data__ = data;
#ifdef NEEDS_UNWRAPPING_uint64_t
#endif
    VkResult result = base->dispatch_table.SetPrivateData(base->dispatch_handle, objectType__, objectHandle__, privateDataSlot__, data__);

    return result;
}
    
static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_GetPrivateData(
    VkDevice device,
    VkObjectType objectType,
    uint64_t objectHandle,
    VkPrivateDataSlot privateDataSlot,
    uint64_t* pData)
{
    VK_FROM_HANDLE(wrapper_device, base, device);
VkObjectType objectType__ = objectType;
#ifdef NEEDS_UNWRAPPING_VkObjectType
#endif
uint64_t objectHandle__ = objectHandle;
#ifdef NEEDS_UNWRAPPING_uint64_t
#endif
VkPrivateDataSlot privateDataSlot__ = privateDataSlot;
#ifdef NEEDS_UNWRAPPING_VkPrivateDataSlot
#endif
    base->dispatch_table.GetPrivateData(base->dispatch_handle, objectType__, objectHandle__, privateDataSlot__, pData);
#ifdef NEEDS_UNWRAPPING_uint64_t
#endif
    return ;
}
    
static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_CmdCopyBuffer2(
    VkCommandBuffer commandBuffer,
    const VkCopyBufferInfo2* pCopyBufferInfo)
{
    VK_FROM_HANDLE(wrapper_command_buffer, base, commandBuffer);
const VkCopyBufferInfo2* pCopyBufferInfo__ = pCopyBufferInfo;
#ifdef NEEDS_UNWRAPPING_VkCopyBufferInfo2
    VkCopyBufferInfo2 _w_pCopyBufferInfo = { 0 };
    pCopyBufferInfo__ = &_w_pCopyBufferInfo;
    unwrap_VkCopyBufferInfo2(base->device, (VkCopyBufferInfo2 *) pCopyBufferInfo__, pCopyBufferInfo);
#endif
    base->device->dispatch_table.CmdCopyBuffer2(base->dispatch_handle, pCopyBufferInfo__);

    return ;
}
    
static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_CmdCopyImage2(
    VkCommandBuffer commandBuffer,
    const VkCopyImageInfo2* pCopyImageInfo)
{
    VK_FROM_HANDLE(wrapper_command_buffer, base, commandBuffer);
const VkCopyImageInfo2* pCopyImageInfo__ = pCopyImageInfo;
#ifdef NEEDS_UNWRAPPING_VkCopyImageInfo2
    VkCopyImageInfo2 _w_pCopyImageInfo = { 0 };
    pCopyImageInfo__ = &_w_pCopyImageInfo;
    unwrap_VkCopyImageInfo2(base->device, (VkCopyImageInfo2 *) pCopyImageInfo__, pCopyImageInfo);
#endif
    base->device->dispatch_table.CmdCopyImage2(base->dispatch_handle, pCopyImageInfo__);

    return ;
}
    
static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_CmdBlitImage2(
    VkCommandBuffer commandBuffer,
    const VkBlitImageInfo2* pBlitImageInfo)
{
    VK_FROM_HANDLE(wrapper_command_buffer, base, commandBuffer);
const VkBlitImageInfo2* pBlitImageInfo__ = pBlitImageInfo;
#ifdef NEEDS_UNWRAPPING_VkBlitImageInfo2
    VkBlitImageInfo2 _w_pBlitImageInfo = { 0 };
    pBlitImageInfo__ = &_w_pBlitImageInfo;
    unwrap_VkBlitImageInfo2(base->device, (VkBlitImageInfo2 *) pBlitImageInfo__, pBlitImageInfo);
#endif
    base->device->dispatch_table.CmdBlitImage2(base->dispatch_handle, pBlitImageInfo__);

    return ;
}
    
static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_CmdCopyBufferToImage2(
    VkCommandBuffer commandBuffer,
    const VkCopyBufferToImageInfo2* pCopyBufferToImageInfo)
{
    VK_FROM_HANDLE(wrapper_command_buffer, base, commandBuffer);
const VkCopyBufferToImageInfo2* pCopyBufferToImageInfo__ = pCopyBufferToImageInfo;
#ifdef NEEDS_UNWRAPPING_VkCopyBufferToImageInfo2
    VkCopyBufferToImageInfo2 _w_pCopyBufferToImageInfo = { 0 };
    pCopyBufferToImageInfo__ = &_w_pCopyBufferToImageInfo;
    unwrap_VkCopyBufferToImageInfo2(base->device, (VkCopyBufferToImageInfo2 *) pCopyBufferToImageInfo__, pCopyBufferToImageInfo);
#endif
    base->device->dispatch_table.CmdCopyBufferToImage2(base->dispatch_handle, pCopyBufferToImageInfo__);

    return ;
}
    
static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_CmdCopyImageToBuffer2(
    VkCommandBuffer commandBuffer,
    const VkCopyImageToBufferInfo2* pCopyImageToBufferInfo)
{
    VK_FROM_HANDLE(wrapper_command_buffer, base, commandBuffer);
const VkCopyImageToBufferInfo2* pCopyImageToBufferInfo__ = pCopyImageToBufferInfo;
#ifdef NEEDS_UNWRAPPING_VkCopyImageToBufferInfo2
    VkCopyImageToBufferInfo2 _w_pCopyImageToBufferInfo = { 0 };
    pCopyImageToBufferInfo__ = &_w_pCopyImageToBufferInfo;
    unwrap_VkCopyImageToBufferInfo2(base->device, (VkCopyImageToBufferInfo2 *) pCopyImageToBufferInfo__, pCopyImageToBufferInfo);
#endif
    base->device->dispatch_table.CmdCopyImageToBuffer2(base->dispatch_handle, pCopyImageToBufferInfo__);

    return ;
}
    
static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_CmdResolveImage2(
    VkCommandBuffer commandBuffer,
    const VkResolveImageInfo2* pResolveImageInfo)
{
    VK_FROM_HANDLE(wrapper_command_buffer, base, commandBuffer);
const VkResolveImageInfo2* pResolveImageInfo__ = pResolveImageInfo;
#ifdef NEEDS_UNWRAPPING_VkResolveImageInfo2
    VkResolveImageInfo2 _w_pResolveImageInfo = { 0 };
    pResolveImageInfo__ = &_w_pResolveImageInfo;
    unwrap_VkResolveImageInfo2(base->device, (VkResolveImageInfo2 *) pResolveImageInfo__, pResolveImageInfo);
#endif
    base->device->dispatch_table.CmdResolveImage2(base->dispatch_handle, pResolveImageInfo__);

    return ;
}
    
static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_CmdSetFragmentShadingRateKHR(
    VkCommandBuffer           commandBuffer,
    const VkExtent2D*                           pFragmentSize,
    const VkFragmentShadingRateCombinerOpKHR    combinerOps[2])
{
    VK_FROM_HANDLE(wrapper_command_buffer, base, commandBuffer);
    base->device->dispatch_table.CmdSetFragmentShadingRateKHR(base->dispatch_handle, pFragmentSize, combinerOps);

    return ;
}
    
static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_CmdSetFragmentShadingRateEnumNV(
    VkCommandBuffer           commandBuffer,
    VkFragmentShadingRateNV                     shadingRate,
    const VkFragmentShadingRateCombinerOpKHR    combinerOps[2])
{
    VK_FROM_HANDLE(wrapper_command_buffer, base, commandBuffer);
    base->device->dispatch_table.CmdSetFragmentShadingRateEnumNV(base->dispatch_handle, shadingRate, combinerOps);

    return ;
}

static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_GetAccelerationStructureBuildSizesKHR(
    VkDevice                                            device,
    VkAccelerationStructureBuildTypeKHR                 buildType,
    const VkAccelerationStructureBuildGeometryInfoKHR*  pBuildInfo,
    const uint32_t*  pMaxPrimitiveCounts,
    VkAccelerationStructureBuildSizesInfoKHR*           pSizeInfo)
{
    VK_FROM_HANDLE(wrapper_device, base, device);
VkAccelerationStructureBuildTypeKHR                 buildType__ = buildType;
#ifdef NEEDS_UNWRAPPING_VkAccelerationStructureBuildTypeKHR
#endif
const VkAccelerationStructureBuildGeometryInfoKHR*  pBuildInfo__ = pBuildInfo;
#ifdef NEEDS_UNWRAPPING_VkAccelerationStructureBuildGeometryInfoKHR
    VkAccelerationStructureBuildGeometryInfoKHR _w_pBuildInfo = { 0 };
    pBuildInfo__ = &_w_pBuildInfo;
    unwrap_VkAccelerationStructureBuildGeometryInfoKHR(base, (VkAccelerationStructureBuildGeometryInfoKHR *) pBuildInfo__, pBuildInfo);
#endif
const uint32_t*  pMaxPrimitiveCounts__ = pMaxPrimitiveCounts;
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
    base->dispatch_table.GetAccelerationStructureBuildSizesKHR(base->dispatch_handle, buildType__, pBuildInfo__, pMaxPrimitiveCounts__, pSizeInfo);
#ifdef NEEDS_UNWRAPPING_VkAccelerationStructureBuildSizesInfoKHR
#warning TODO: Repack struct+ptr+out GetAccelerationStructureBuildSizesKHR EntrypointParam(type='VkAccelerationStructureBuildSizesInfoKHR', name='pSizeInfo', decl='VkAccelerationStructureBuildSizesInfoKHR*           pSizeInfo', len=None, elem=<Element 'param' at 0x7368899eea70>, is_const=False, num_pointers=1)
#endif
    return ;
}

static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_CmdSetVertexInputEXT(
    VkCommandBuffer commandBuffer,
    uint32_t vertexBindingDescriptionCount,
    const VkVertexInputBindingDescription2EXT* pVertexBindingDescriptions,
    uint32_t vertexAttributeDescriptionCount,
    const VkVertexInputAttributeDescription2EXT* pVertexAttributeDescriptions)
{
    VK_FROM_HANDLE(wrapper_command_buffer, base, commandBuffer);
uint32_t vertexBindingDescriptionCount__ = vertexBindingDescriptionCount;
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
const VkVertexInputBindingDescription2EXT* pVertexBindingDescriptions__ = pVertexBindingDescriptions;
#ifdef NEEDS_UNWRAPPING_VkVertexInputBindingDescription2EXT
    pVertexBindingDescriptions__ = alloca(vertexBindingDescriptionCount * sizeof(VkVertexInputBindingDescription2EXT));
    for (int i = 0; i < vertexBindingDescriptionCount; i++)
        unwrap_VkVertexInputBindingDescription2EXT(base->device, (VkVertexInputBindingDescription2EXT *) &pVertexBindingDescriptions__[i], &pVertexBindingDescriptions[i]);
#endif
uint32_t vertexAttributeDescriptionCount__ = vertexAttributeDescriptionCount;
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
const VkVertexInputAttributeDescription2EXT* pVertexAttributeDescriptions__ = pVertexAttributeDescriptions;
#ifdef NEEDS_UNWRAPPING_VkVertexInputAttributeDescription2EXT
    pVertexAttributeDescriptions__ = alloca(vertexAttributeDescriptionCount * sizeof(VkVertexInputAttributeDescription2EXT));
    for (int i = 0; i < vertexAttributeDescriptionCount; i++)
        unwrap_VkVertexInputAttributeDescription2EXT(base->device, (VkVertexInputAttributeDescription2EXT *) &pVertexAttributeDescriptions__[i], &pVertexAttributeDescriptions[i]);
#endif
    base->device->dispatch_table.CmdSetVertexInputEXT(base->dispatch_handle, vertexBindingDescriptionCount__, pVertexBindingDescriptions__, vertexAttributeDescriptionCount__, pVertexAttributeDescriptions__);

    return ;
}

static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_CmdSetColorWriteEnableEXT(
    VkCommandBuffer       commandBuffer,
    uint32_t                                attachmentCount,
    const VkBool32*   pColorWriteEnables)
{
    VK_FROM_HANDLE(wrapper_command_buffer, base, commandBuffer);
uint32_t                                attachmentCount__ = attachmentCount;
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
const VkBool32*   pColorWriteEnables__ = pColorWriteEnables;
#ifdef NEEDS_UNWRAPPING_VkBool32
#endif
    base->device->dispatch_table.CmdSetColorWriteEnableEXT(base->dispatch_handle, attachmentCount__, pColorWriteEnables__);

    return ;
}

static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_CmdSetEvent2(
    VkCommandBuffer                   commandBuffer,
    VkEvent                                             event,
    const VkDependencyInfo*                             pDependencyInfo)
{
    VK_FROM_HANDLE(wrapper_command_buffer, base, commandBuffer);
VkEvent                                             event__ = event;
#ifdef NEEDS_UNWRAPPING_VkEvent
#endif
const VkDependencyInfo*                             pDependencyInfo__ = pDependencyInfo;
#ifdef NEEDS_UNWRAPPING_VkDependencyInfo
    VkDependencyInfo _w_pDependencyInfo = { 0 };
    pDependencyInfo__ = &_w_pDependencyInfo;
    unwrap_VkDependencyInfo(base->device, (VkDependencyInfo *) pDependencyInfo__, pDependencyInfo);
#endif
    base->device->dispatch_table.CmdSetEvent2(base->dispatch_handle, event__, pDependencyInfo__);

    return ;
}
    
static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_CmdResetEvent2(
    VkCommandBuffer                   commandBuffer,
    VkEvent                                             event,
    VkPipelineStageFlags2               stageMask)
{
    VK_FROM_HANDLE(wrapper_command_buffer, base, commandBuffer);
VkEvent                                             event__ = event;
#ifdef NEEDS_UNWRAPPING_VkEvent
#endif
VkPipelineStageFlags2               stageMask__ = stageMask;
#ifdef NEEDS_UNWRAPPING_VkPipelineStageFlags2
#endif
    base->device->dispatch_table.CmdResetEvent2(base->dispatch_handle, event__, stageMask__);

    return ;
}
    
static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_CmdWaitEvents2(
    VkCommandBuffer                   commandBuffer,
    uint32_t                                            eventCount,
    const VkEvent*                     pEvents,
    const VkDependencyInfo*            pDependencyInfos)
{
    VK_FROM_HANDLE(wrapper_command_buffer, base, commandBuffer);
uint32_t                                            eventCount__ = eventCount;
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
const VkEvent*                     pEvents__ = pEvents;
#ifdef NEEDS_UNWRAPPING_VkEvent
#endif
const VkDependencyInfo*            pDependencyInfos__ = pDependencyInfos;
#ifdef NEEDS_UNWRAPPING_VkDependencyInfo
    pDependencyInfos__ = alloca(eventCount * sizeof(VkDependencyInfo));
    for (int i = 0; i < eventCount; i++)
        unwrap_VkDependencyInfo(base->device, (VkDependencyInfo *) &pDependencyInfos__[i], &pDependencyInfos[i]);
#endif
    base->device->dispatch_table.CmdWaitEvents2(base->dispatch_handle, eventCount__, pEvents__, pDependencyInfos__);

    return ;
}
    
static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_CmdPipelineBarrier2(
    VkCommandBuffer                   commandBuffer,
    const VkDependencyInfo*                             pDependencyInfo)
{
    VK_FROM_HANDLE(wrapper_command_buffer, base, commandBuffer);
const VkDependencyInfo*                             pDependencyInfo__ = pDependencyInfo;
#ifdef NEEDS_UNWRAPPING_VkDependencyInfo
    VkDependencyInfo _w_pDependencyInfo = { 0 };
    pDependencyInfo__ = &_w_pDependencyInfo;
    unwrap_VkDependencyInfo(base->device, (VkDependencyInfo *) pDependencyInfo__, pDependencyInfo);
#endif
    base->device->dispatch_table.CmdPipelineBarrier2(base->dispatch_handle, pDependencyInfo__);

    return ;
}
    
static VKAPI_ATTR VkResult VKAPI_CALL
wrapper_tramp_QueueSubmit2(
    VkQueue                           queue,
    uint32_t                            submitCount,
    const VkSubmitInfo2*              pSubmits,
    VkFence           fence)
{
    VK_FROM_HANDLE(wrapper_queue, base, queue);
uint32_t                            submitCount__ = submitCount;
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
const VkSubmitInfo2*              pSubmits__ = pSubmits;
#ifdef NEEDS_UNWRAPPING_VkSubmitInfo2
    pSubmits__ = alloca(submitCount * sizeof(VkSubmitInfo2));
    for (int i = 0; i < submitCount; i++)
        unwrap_VkSubmitInfo2(base->device, (VkSubmitInfo2 *) &pSubmits__[i], &pSubmits[i]);
#endif
VkFence           fence__ = fence;
#ifdef NEEDS_UNWRAPPING_VkFence
#endif
    VkResult result = base->device->dispatch_table.QueueSubmit2(base->dispatch_handle, submitCount__, pSubmits__, fence__);

    return result;
}
    
static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_CmdWriteTimestamp2(
    VkCommandBuffer                   commandBuffer,
    VkPipelineStageFlags2               stage,
    VkQueryPool                                         queryPool,
    uint32_t                                            query)
{
    VK_FROM_HANDLE(wrapper_command_buffer, base, commandBuffer);
VkPipelineStageFlags2               stage__ = stage;
#ifdef NEEDS_UNWRAPPING_VkPipelineStageFlags2
#endif
VkQueryPool                                         queryPool__ = queryPool;
#ifdef NEEDS_UNWRAPPING_VkQueryPool
#endif
uint32_t                                            query__ = query;
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
    base->device->dispatch_table.CmdWriteTimestamp2(base->dispatch_handle, stage__, queryPool__, query__);

    return ;
}
    
static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_CmdWriteBufferMarker2AMD(
    VkCommandBuffer                   commandBuffer,
    VkPipelineStageFlags2               stage,
    VkBuffer                                            dstBuffer,
    VkDeviceSize                                        dstOffset,
    uint32_t                                            marker)
{
    VK_FROM_HANDLE(wrapper_command_buffer, base, commandBuffer);
VkPipelineStageFlags2               stage__ = stage;
#ifdef NEEDS_UNWRAPPING_VkPipelineStageFlags2
#endif
VkBuffer                                            dstBuffer__ = dstBuffer;
#ifdef NEEDS_UNWRAPPING_VkBuffer
#endif
VkDeviceSize                                        dstOffset__ = dstOffset;
#ifdef NEEDS_UNWRAPPING_VkDeviceSize
#endif
uint32_t                                            marker__ = marker;
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
    base->device->dispatch_table.CmdWriteBufferMarker2AMD(base->dispatch_handle, stage__, dstBuffer__, dstOffset__, marker__);

    return ;
}

static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_GetQueueCheckpointData2NV(
    VkQueue queue,
    uint32_t* pCheckpointDataCount,
    VkCheckpointData2NV* pCheckpointData)
{
    VK_FROM_HANDLE(wrapper_queue, base, queue);
    base->device->dispatch_table.GetQueueCheckpointData2NV(base->dispatch_handle, pCheckpointDataCount, pCheckpointData);
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
#ifdef NEEDS_UNWRAPPING_VkCheckpointData2NV
#warning TODO: Repack struct+array+out GetQueueCheckpointData2NV EntrypointParam(type='VkCheckpointData2NV', name='pCheckpointData', decl='VkCheckpointData2NV* pCheckpointData', len='pCheckpointDataCount', elem=<Element 'param' at 0x7368899fe250>, is_const=False, num_pointers=1)
#endif
    return ;
}

static VKAPI_ATTR VkResult VKAPI_CALL
wrapper_tramp_CopyMemoryToImageEXT(
    VkDevice device,
    const VkCopyMemoryToImageInfoEXT* pCopyMemoryToImageInfo)
{
    VK_FROM_HANDLE(wrapper_device, base, device);
const VkCopyMemoryToImageInfoEXT* pCopyMemoryToImageInfo__ = pCopyMemoryToImageInfo;
#ifdef NEEDS_UNWRAPPING_VkCopyMemoryToImageInfoEXT
    VkCopyMemoryToImageInfoEXT _w_pCopyMemoryToImageInfo = { 0 };
    pCopyMemoryToImageInfo__ = &_w_pCopyMemoryToImageInfo;
    unwrap_VkCopyMemoryToImageInfoEXT(base, (VkCopyMemoryToImageInfoEXT *) pCopyMemoryToImageInfo__, pCopyMemoryToImageInfo);
#endif
    VkResult result = base->dispatch_table.CopyMemoryToImageEXT(base->dispatch_handle, pCopyMemoryToImageInfo__);

    return result;
}

static VKAPI_ATTR VkResult VKAPI_CALL
wrapper_tramp_CopyImageToMemoryEXT(
    VkDevice device,
    const VkCopyImageToMemoryInfoEXT* pCopyImageToMemoryInfo)
{
    VK_FROM_HANDLE(wrapper_device, base, device);
const VkCopyImageToMemoryInfoEXT* pCopyImageToMemoryInfo__ = pCopyImageToMemoryInfo;
#ifdef NEEDS_UNWRAPPING_VkCopyImageToMemoryInfoEXT
    VkCopyImageToMemoryInfoEXT _w_pCopyImageToMemoryInfo = { 0 };
    pCopyImageToMemoryInfo__ = &_w_pCopyImageToMemoryInfo;
    unwrap_VkCopyImageToMemoryInfoEXT(base, (VkCopyImageToMemoryInfoEXT *) pCopyImageToMemoryInfo__, pCopyImageToMemoryInfo);
#endif
    VkResult result = base->dispatch_table.CopyImageToMemoryEXT(base->dispatch_handle, pCopyImageToMemoryInfo__);

    return result;
}

static VKAPI_ATTR VkResult VKAPI_CALL
wrapper_tramp_CopyImageToImageEXT(
    VkDevice device,
    const VkCopyImageToImageInfoEXT* pCopyImageToImageInfo)
{
    VK_FROM_HANDLE(wrapper_device, base, device);
const VkCopyImageToImageInfoEXT* pCopyImageToImageInfo__ = pCopyImageToImageInfo;
#ifdef NEEDS_UNWRAPPING_VkCopyImageToImageInfoEXT
    VkCopyImageToImageInfoEXT _w_pCopyImageToImageInfo = { 0 };
    pCopyImageToImageInfo__ = &_w_pCopyImageToImageInfo;
    unwrap_VkCopyImageToImageInfoEXT(base, (VkCopyImageToImageInfoEXT *) pCopyImageToImageInfo__, pCopyImageToImageInfo);
#endif
    VkResult result = base->dispatch_table.CopyImageToImageEXT(base->dispatch_handle, pCopyImageToImageInfo__);

    return result;
}

static VKAPI_ATTR VkResult VKAPI_CALL
wrapper_tramp_TransitionImageLayoutEXT(
    VkDevice device,
    uint32_t transitionCount,
    const VkHostImageLayoutTransitionInfoEXT* pTransitions)
{
    VK_FROM_HANDLE(wrapper_device, base, device);
uint32_t transitionCount__ = transitionCount;
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
const VkHostImageLayoutTransitionInfoEXT* pTransitions__ = pTransitions;
#ifdef NEEDS_UNWRAPPING_VkHostImageLayoutTransitionInfoEXT
    pTransitions__ = alloca(transitionCount * sizeof(VkHostImageLayoutTransitionInfoEXT));
    for (int i = 0; i < transitionCount; i++)
        unwrap_VkHostImageLayoutTransitionInfoEXT(base, (VkHostImageLayoutTransitionInfoEXT *) &pTransitions__[i], &pTransitions[i]);
#endif
    VkResult result = base->dispatch_table.TransitionImageLayoutEXT(base->dispatch_handle, transitionCount__, pTransitions__);

    return result;
}
            
static VKAPI_ATTR VkResult VKAPI_CALL
wrapper_tramp_CreateVideoSessionKHR(
    VkDevice device,
    const VkVideoSessionCreateInfoKHR* pCreateInfo,
    const VkAllocationCallbacks* pAllocator,
    VkVideoSessionKHR* pVideoSession)
{
    VK_FROM_HANDLE(wrapper_device, base, device);
const VkVideoSessionCreateInfoKHR* pCreateInfo__ = pCreateInfo;
#ifdef NEEDS_UNWRAPPING_VkVideoSessionCreateInfoKHR
    VkVideoSessionCreateInfoKHR _w_pCreateInfo = { 0 };
    pCreateInfo__ = &_w_pCreateInfo;
    unwrap_VkVideoSessionCreateInfoKHR(base, (VkVideoSessionCreateInfoKHR *) pCreateInfo__, pCreateInfo);
#endif
const VkAllocationCallbacks* pAllocator__ = pAllocator;
#ifdef NEEDS_UNWRAPPING_VkAllocationCallbacks
    VkAllocationCallbacks _w_pAllocator = { 0 };
    pAllocator__ = &_w_pAllocator;
    unwrap_VkAllocationCallbacks(base, (VkAllocationCallbacks *) pAllocator__, pAllocator);
#endif
    VkResult result = base->dispatch_table.CreateVideoSessionKHR(base->dispatch_handle, pCreateInfo__, pAllocator__, pVideoSession);
#ifdef NEEDS_UNWRAPPING_VkVideoSessionKHR
#endif
    return result;
}

static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_DestroyVideoSessionKHR(
    VkDevice device,
    VkVideoSessionKHR videoSession,
    const VkAllocationCallbacks* pAllocator)
{
    VK_FROM_HANDLE(wrapper_device, base, device);
VkVideoSessionKHR videoSession__ = videoSession;
#ifdef NEEDS_UNWRAPPING_VkVideoSessionKHR
#endif
const VkAllocationCallbacks* pAllocator__ = pAllocator;
#ifdef NEEDS_UNWRAPPING_VkAllocationCallbacks
    VkAllocationCallbacks _w_pAllocator = { 0 };
    pAllocator__ = &_w_pAllocator;
    unwrap_VkAllocationCallbacks(base, (VkAllocationCallbacks *) pAllocator__, pAllocator);
#endif
    base->dispatch_table.DestroyVideoSessionKHR(base->dispatch_handle, videoSession__, pAllocator__);

    return ;
}

static VKAPI_ATTR VkResult VKAPI_CALL
wrapper_tramp_CreateVideoSessionParametersKHR(
    VkDevice device,
    const VkVideoSessionParametersCreateInfoKHR* pCreateInfo,
    const VkAllocationCallbacks* pAllocator,
    VkVideoSessionParametersKHR* pVideoSessionParameters)
{
    VK_FROM_HANDLE(wrapper_device, base, device);
const VkVideoSessionParametersCreateInfoKHR* pCreateInfo__ = pCreateInfo;
#ifdef NEEDS_UNWRAPPING_VkVideoSessionParametersCreateInfoKHR
    VkVideoSessionParametersCreateInfoKHR _w_pCreateInfo = { 0 };
    pCreateInfo__ = &_w_pCreateInfo;
    unwrap_VkVideoSessionParametersCreateInfoKHR(base, (VkVideoSessionParametersCreateInfoKHR *) pCreateInfo__, pCreateInfo);
#endif
const VkAllocationCallbacks* pAllocator__ = pAllocator;
#ifdef NEEDS_UNWRAPPING_VkAllocationCallbacks
    VkAllocationCallbacks _w_pAllocator = { 0 };
    pAllocator__ = &_w_pAllocator;
    unwrap_VkAllocationCallbacks(base, (VkAllocationCallbacks *) pAllocator__, pAllocator);
#endif
    VkResult result = base->dispatch_table.CreateVideoSessionParametersKHR(base->dispatch_handle, pCreateInfo__, pAllocator__, pVideoSessionParameters);
#ifdef NEEDS_UNWRAPPING_VkVideoSessionParametersKHR
#endif
    return result;
}

static VKAPI_ATTR VkResult VKAPI_CALL
wrapper_tramp_UpdateVideoSessionParametersKHR(
    VkDevice device,
    VkVideoSessionParametersKHR videoSessionParameters,
    const VkVideoSessionParametersUpdateInfoKHR* pUpdateInfo)
{
    VK_FROM_HANDLE(wrapper_device, base, device);
VkVideoSessionParametersKHR videoSessionParameters__ = videoSessionParameters;
#ifdef NEEDS_UNWRAPPING_VkVideoSessionParametersKHR
#endif
const VkVideoSessionParametersUpdateInfoKHR* pUpdateInfo__ = pUpdateInfo;
#ifdef NEEDS_UNWRAPPING_VkVideoSessionParametersUpdateInfoKHR
    VkVideoSessionParametersUpdateInfoKHR _w_pUpdateInfo = { 0 };
    pUpdateInfo__ = &_w_pUpdateInfo;
    unwrap_VkVideoSessionParametersUpdateInfoKHR(base, (VkVideoSessionParametersUpdateInfoKHR *) pUpdateInfo__, pUpdateInfo);
#endif
    VkResult result = base->dispatch_table.UpdateVideoSessionParametersKHR(base->dispatch_handle, videoSessionParameters__, pUpdateInfo__);

    return result;
}

static VKAPI_ATTR VkResult VKAPI_CALL
wrapper_tramp_GetEncodedVideoSessionParametersKHR(
    VkDevice device,
    const VkVideoEncodeSessionParametersGetInfoKHR* pVideoSessionParametersInfo,
    VkVideoEncodeSessionParametersFeedbackInfoKHR* pFeedbackInfo,
    size_t* pDataSize,
    void* pData)
{
    VK_FROM_HANDLE(wrapper_device, base, device);
const VkVideoEncodeSessionParametersGetInfoKHR* pVideoSessionParametersInfo__ = pVideoSessionParametersInfo;
#ifdef NEEDS_UNWRAPPING_VkVideoEncodeSessionParametersGetInfoKHR
    VkVideoEncodeSessionParametersGetInfoKHR _w_pVideoSessionParametersInfo = { 0 };
    pVideoSessionParametersInfo__ = &_w_pVideoSessionParametersInfo;
    unwrap_VkVideoEncodeSessionParametersGetInfoKHR(base, (VkVideoEncodeSessionParametersGetInfoKHR *) pVideoSessionParametersInfo__, pVideoSessionParametersInfo);
#endif
    VkResult result = base->dispatch_table.GetEncodedVideoSessionParametersKHR(base->dispatch_handle, pVideoSessionParametersInfo__, pFeedbackInfo, pDataSize, pData);
#ifdef NEEDS_UNWRAPPING_VkVideoEncodeSessionParametersFeedbackInfoKHR
#warning TODO: Repack struct+ptr+out GetEncodedVideoSessionParametersKHR EntrypointParam(type='VkVideoEncodeSessionParametersFeedbackInfoKHR', name='pFeedbackInfo', decl='VkVideoEncodeSessionParametersFeedbackInfoKHR* pFeedbackInfo', len=None, elem=<Element 'param' at 0x736889a0e020>, is_const=False, num_pointers=1)
#endif
#ifdef NEEDS_UNWRAPPING_size_t
#endif
#ifdef NEEDS_UNWRAPPING_void
#endif
    return result;
}

static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_DestroyVideoSessionParametersKHR(
    VkDevice device,
    VkVideoSessionParametersKHR videoSessionParameters,
    const VkAllocationCallbacks* pAllocator)
{
    VK_FROM_HANDLE(wrapper_device, base, device);
VkVideoSessionParametersKHR videoSessionParameters__ = videoSessionParameters;
#ifdef NEEDS_UNWRAPPING_VkVideoSessionParametersKHR
#endif
const VkAllocationCallbacks* pAllocator__ = pAllocator;
#ifdef NEEDS_UNWRAPPING_VkAllocationCallbacks
    VkAllocationCallbacks _w_pAllocator = { 0 };
    pAllocator__ = &_w_pAllocator;
    unwrap_VkAllocationCallbacks(base, (VkAllocationCallbacks *) pAllocator__, pAllocator);
#endif
    base->dispatch_table.DestroyVideoSessionParametersKHR(base->dispatch_handle, videoSessionParameters__, pAllocator__);

    return ;
}

static VKAPI_ATTR VkResult VKAPI_CALL
wrapper_tramp_GetVideoSessionMemoryRequirementsKHR(
    VkDevice device,
    VkVideoSessionKHR videoSession,
    uint32_t* pMemoryRequirementsCount,
    VkVideoSessionMemoryRequirementsKHR* pMemoryRequirements)
{
    VK_FROM_HANDLE(wrapper_device, base, device);
VkVideoSessionKHR videoSession__ = videoSession;
#ifdef NEEDS_UNWRAPPING_VkVideoSessionKHR
#endif
    VkResult result = base->dispatch_table.GetVideoSessionMemoryRequirementsKHR(base->dispatch_handle, videoSession__, pMemoryRequirementsCount, pMemoryRequirements);
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
#ifdef NEEDS_UNWRAPPING_VkVideoSessionMemoryRequirementsKHR
#warning TODO: Repack struct+array+out GetVideoSessionMemoryRequirementsKHR EntrypointParam(type='VkVideoSessionMemoryRequirementsKHR', name='pMemoryRequirements', decl='VkVideoSessionMemoryRequirementsKHR* pMemoryRequirements', len='pMemoryRequirementsCount', elem=<Element 'param' at 0x736889a0ecf0>, is_const=False, num_pointers=1)
#endif
    return result;
}

static VKAPI_ATTR VkResult VKAPI_CALL
wrapper_tramp_BindVideoSessionMemoryKHR(
    VkDevice device,
    VkVideoSessionKHR videoSession,
    uint32_t bindSessionMemoryInfoCount,
    const VkBindVideoSessionMemoryInfoKHR* pBindSessionMemoryInfos)
{
    VK_FROM_HANDLE(wrapper_device, base, device);
VkVideoSessionKHR videoSession__ = videoSession;
#ifdef NEEDS_UNWRAPPING_VkVideoSessionKHR
#endif
uint32_t bindSessionMemoryInfoCount__ = bindSessionMemoryInfoCount;
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
const VkBindVideoSessionMemoryInfoKHR* pBindSessionMemoryInfos__ = pBindSessionMemoryInfos;
#ifdef NEEDS_UNWRAPPING_VkBindVideoSessionMemoryInfoKHR
    pBindSessionMemoryInfos__ = alloca(bindSessionMemoryInfoCount * sizeof(VkBindVideoSessionMemoryInfoKHR));
    for (int i = 0; i < bindSessionMemoryInfoCount; i++)
        unwrap_VkBindVideoSessionMemoryInfoKHR(base, (VkBindVideoSessionMemoryInfoKHR *) &pBindSessionMemoryInfos__[i], &pBindSessionMemoryInfos[i]);
#endif
    VkResult result = base->dispatch_table.BindVideoSessionMemoryKHR(base->dispatch_handle, videoSession__, bindSessionMemoryInfoCount__, pBindSessionMemoryInfos__);

    return result;
}

static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_CmdDecodeVideoKHR(
    VkCommandBuffer commandBuffer,
    const VkVideoDecodeInfoKHR* pDecodeInfo)
{
    VK_FROM_HANDLE(wrapper_command_buffer, base, commandBuffer);
const VkVideoDecodeInfoKHR* pDecodeInfo__ = pDecodeInfo;
#ifdef NEEDS_UNWRAPPING_VkVideoDecodeInfoKHR
    VkVideoDecodeInfoKHR _w_pDecodeInfo = { 0 };
    pDecodeInfo__ = &_w_pDecodeInfo;
    unwrap_VkVideoDecodeInfoKHR(base->device, (VkVideoDecodeInfoKHR *) pDecodeInfo__, pDecodeInfo);
#endif
    base->device->dispatch_table.CmdDecodeVideoKHR(base->dispatch_handle, pDecodeInfo__);

    return ;
}

static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_CmdBeginVideoCodingKHR(
    VkCommandBuffer commandBuffer,
    const VkVideoBeginCodingInfoKHR* pBeginInfo)
{
    VK_FROM_HANDLE(wrapper_command_buffer, base, commandBuffer);
const VkVideoBeginCodingInfoKHR* pBeginInfo__ = pBeginInfo;
#ifdef NEEDS_UNWRAPPING_VkVideoBeginCodingInfoKHR
    VkVideoBeginCodingInfoKHR _w_pBeginInfo = { 0 };
    pBeginInfo__ = &_w_pBeginInfo;
    unwrap_VkVideoBeginCodingInfoKHR(base->device, (VkVideoBeginCodingInfoKHR *) pBeginInfo__, pBeginInfo);
#endif
    base->device->dispatch_table.CmdBeginVideoCodingKHR(base->dispatch_handle, pBeginInfo__);

    return ;
}

static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_CmdControlVideoCodingKHR(
    VkCommandBuffer commandBuffer,
    const VkVideoCodingControlInfoKHR* pCodingControlInfo)
{
    VK_FROM_HANDLE(wrapper_command_buffer, base, commandBuffer);
const VkVideoCodingControlInfoKHR* pCodingControlInfo__ = pCodingControlInfo;
#ifdef NEEDS_UNWRAPPING_VkVideoCodingControlInfoKHR
    VkVideoCodingControlInfoKHR _w_pCodingControlInfo = { 0 };
    pCodingControlInfo__ = &_w_pCodingControlInfo;
    unwrap_VkVideoCodingControlInfoKHR(base->device, (VkVideoCodingControlInfoKHR *) pCodingControlInfo__, pCodingControlInfo);
#endif
    base->device->dispatch_table.CmdControlVideoCodingKHR(base->dispatch_handle, pCodingControlInfo__);

    return ;
}

static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_CmdEndVideoCodingKHR(
    VkCommandBuffer commandBuffer,
    const VkVideoEndCodingInfoKHR* pEndCodingInfo)
{
    VK_FROM_HANDLE(wrapper_command_buffer, base, commandBuffer);
const VkVideoEndCodingInfoKHR* pEndCodingInfo__ = pEndCodingInfo;
#ifdef NEEDS_UNWRAPPING_VkVideoEndCodingInfoKHR
    VkVideoEndCodingInfoKHR _w_pEndCodingInfo = { 0 };
    pEndCodingInfo__ = &_w_pEndCodingInfo;
    unwrap_VkVideoEndCodingInfoKHR(base->device, (VkVideoEndCodingInfoKHR *) pEndCodingInfo__, pEndCodingInfo);
#endif
    base->device->dispatch_table.CmdEndVideoCodingKHR(base->dispatch_handle, pEndCodingInfo__);

    return ;
}

static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_CmdEncodeVideoKHR(
    VkCommandBuffer commandBuffer,
    const VkVideoEncodeInfoKHR* pEncodeInfo)
{
    VK_FROM_HANDLE(wrapper_command_buffer, base, commandBuffer);
const VkVideoEncodeInfoKHR* pEncodeInfo__ = pEncodeInfo;
#ifdef NEEDS_UNWRAPPING_VkVideoEncodeInfoKHR
    VkVideoEncodeInfoKHR _w_pEncodeInfo = { 0 };
    pEncodeInfo__ = &_w_pEncodeInfo;
    unwrap_VkVideoEncodeInfoKHR(base->device, (VkVideoEncodeInfoKHR *) pEncodeInfo__, pEncodeInfo);
#endif
    base->device->dispatch_table.CmdEncodeVideoKHR(base->dispatch_handle, pEncodeInfo__);

    return ;
}

static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_CmdDecompressMemoryNV(
    VkCommandBuffer commandBuffer,
    uint32_t decompressRegionCount,
    const VkDecompressMemoryRegionNV* pDecompressMemoryRegions)
{
    VK_FROM_HANDLE(wrapper_command_buffer, base, commandBuffer);
uint32_t decompressRegionCount__ = decompressRegionCount;
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
const VkDecompressMemoryRegionNV* pDecompressMemoryRegions__ = pDecompressMemoryRegions;
#ifdef NEEDS_UNWRAPPING_VkDecompressMemoryRegionNV
    pDecompressMemoryRegions__ = alloca(decompressRegionCount * sizeof(VkDecompressMemoryRegionNV));
    for (int i = 0; i < decompressRegionCount; i++)
        unwrap_VkDecompressMemoryRegionNV(base->device, (VkDecompressMemoryRegionNV *) &pDecompressMemoryRegions__[i], &pDecompressMemoryRegions[i]);
#endif
    base->device->dispatch_table.CmdDecompressMemoryNV(base->dispatch_handle, decompressRegionCount__, pDecompressMemoryRegions__);

    return ;
}

static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_CmdDecompressMemoryIndirectCountNV(
    VkCommandBuffer commandBuffer,
    VkDeviceAddress indirectCommandsAddress,
    VkDeviceAddress indirectCommandsCountAddress,
    uint32_t stride)
{
    VK_FROM_HANDLE(wrapper_command_buffer, base, commandBuffer);
VkDeviceAddress indirectCommandsAddress__ = indirectCommandsAddress;
#ifdef NEEDS_UNWRAPPING_VkDeviceAddress
#endif
VkDeviceAddress indirectCommandsCountAddress__ = indirectCommandsCountAddress;
#ifdef NEEDS_UNWRAPPING_VkDeviceAddress
#endif
uint32_t stride__ = stride;
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
    base->device->dispatch_table.CmdDecompressMemoryIndirectCountNV(base->dispatch_handle, indirectCommandsAddress__, indirectCommandsCountAddress__, stride__);

    return ;
}

static VKAPI_ATTR VkResult VKAPI_CALL
wrapper_tramp_CreateCuModuleNVX(
    VkDevice device,
    const VkCuModuleCreateInfoNVX* pCreateInfo,
    const VkAllocationCallbacks* pAllocator,
    VkCuModuleNVX* pModule)
{
    VK_FROM_HANDLE(wrapper_device, base, device);
const VkCuModuleCreateInfoNVX* pCreateInfo__ = pCreateInfo;
#ifdef NEEDS_UNWRAPPING_VkCuModuleCreateInfoNVX
    VkCuModuleCreateInfoNVX _w_pCreateInfo = { 0 };
    pCreateInfo__ = &_w_pCreateInfo;
    unwrap_VkCuModuleCreateInfoNVX(base, (VkCuModuleCreateInfoNVX *) pCreateInfo__, pCreateInfo);
#endif
const VkAllocationCallbacks* pAllocator__ = pAllocator;
#ifdef NEEDS_UNWRAPPING_VkAllocationCallbacks
    VkAllocationCallbacks _w_pAllocator = { 0 };
    pAllocator__ = &_w_pAllocator;
    unwrap_VkAllocationCallbacks(base, (VkAllocationCallbacks *) pAllocator__, pAllocator);
#endif
    VkResult result = base->dispatch_table.CreateCuModuleNVX(base->dispatch_handle, pCreateInfo__, pAllocator__, pModule);
#ifdef NEEDS_UNWRAPPING_VkCuModuleNVX
#endif
    return result;
}

static VKAPI_ATTR VkResult VKAPI_CALL
wrapper_tramp_CreateCuFunctionNVX(
    VkDevice device,
    const VkCuFunctionCreateInfoNVX* pCreateInfo,
    const VkAllocationCallbacks* pAllocator,
    VkCuFunctionNVX* pFunction)
{
    VK_FROM_HANDLE(wrapper_device, base, device);
const VkCuFunctionCreateInfoNVX* pCreateInfo__ = pCreateInfo;
#ifdef NEEDS_UNWRAPPING_VkCuFunctionCreateInfoNVX
    VkCuFunctionCreateInfoNVX _w_pCreateInfo = { 0 };
    pCreateInfo__ = &_w_pCreateInfo;
    unwrap_VkCuFunctionCreateInfoNVX(base, (VkCuFunctionCreateInfoNVX *) pCreateInfo__, pCreateInfo);
#endif
const VkAllocationCallbacks* pAllocator__ = pAllocator;
#ifdef NEEDS_UNWRAPPING_VkAllocationCallbacks
    VkAllocationCallbacks _w_pAllocator = { 0 };
    pAllocator__ = &_w_pAllocator;
    unwrap_VkAllocationCallbacks(base, (VkAllocationCallbacks *) pAllocator__, pAllocator);
#endif
    VkResult result = base->dispatch_table.CreateCuFunctionNVX(base->dispatch_handle, pCreateInfo__, pAllocator__, pFunction);
#ifdef NEEDS_UNWRAPPING_VkCuFunctionNVX
#endif
    return result;
}

static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_DestroyCuModuleNVX(
    VkDevice device,
    VkCuModuleNVX module,
    const VkAllocationCallbacks* pAllocator)
{
    VK_FROM_HANDLE(wrapper_device, base, device);
VkCuModuleNVX module__ = module;
#ifdef NEEDS_UNWRAPPING_VkCuModuleNVX
#endif
const VkAllocationCallbacks* pAllocator__ = pAllocator;
#ifdef NEEDS_UNWRAPPING_VkAllocationCallbacks
    VkAllocationCallbacks _w_pAllocator = { 0 };
    pAllocator__ = &_w_pAllocator;
    unwrap_VkAllocationCallbacks(base, (VkAllocationCallbacks *) pAllocator__, pAllocator);
#endif
    base->dispatch_table.DestroyCuModuleNVX(base->dispatch_handle, module__, pAllocator__);

    return ;
}

static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_DestroyCuFunctionNVX(
    VkDevice device,
    VkCuFunctionNVX function,
    const VkAllocationCallbacks* pAllocator)
{
    VK_FROM_HANDLE(wrapper_device, base, device);
VkCuFunctionNVX function__ = function;
#ifdef NEEDS_UNWRAPPING_VkCuFunctionNVX
#endif
const VkAllocationCallbacks* pAllocator__ = pAllocator;
#ifdef NEEDS_UNWRAPPING_VkAllocationCallbacks
    VkAllocationCallbacks _w_pAllocator = { 0 };
    pAllocator__ = &_w_pAllocator;
    unwrap_VkAllocationCallbacks(base, (VkAllocationCallbacks *) pAllocator__, pAllocator);
#endif
    base->dispatch_table.DestroyCuFunctionNVX(base->dispatch_handle, function__, pAllocator__);

    return ;
}

static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_CmdCuLaunchKernelNVX(
    VkCommandBuffer commandBuffer,
    const VkCuLaunchInfoNVX* pLaunchInfo)
{
    VK_FROM_HANDLE(wrapper_command_buffer, base, commandBuffer);
const VkCuLaunchInfoNVX* pLaunchInfo__ = pLaunchInfo;
#ifdef NEEDS_UNWRAPPING_VkCuLaunchInfoNVX
    VkCuLaunchInfoNVX _w_pLaunchInfo = { 0 };
    pLaunchInfo__ = &_w_pLaunchInfo;
    unwrap_VkCuLaunchInfoNVX(base->device, (VkCuLaunchInfoNVX *) pLaunchInfo__, pLaunchInfo);
#endif
    base->device->dispatch_table.CmdCuLaunchKernelNVX(base->dispatch_handle, pLaunchInfo__);

    return ;
}

static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_GetDescriptorSetLayoutSizeEXT(
    VkDevice device,
    VkDescriptorSetLayout layout,
    VkDeviceSize* pLayoutSizeInBytes)
{
    VK_FROM_HANDLE(wrapper_device, base, device);
VkDescriptorSetLayout layout__ = layout;
#ifdef NEEDS_UNWRAPPING_VkDescriptorSetLayout
#endif
    base->dispatch_table.GetDescriptorSetLayoutSizeEXT(base->dispatch_handle, layout__, pLayoutSizeInBytes);
#ifdef NEEDS_UNWRAPPING_VkDeviceSize
#endif
    return ;
}

static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_GetDescriptorSetLayoutBindingOffsetEXT(
    VkDevice device,
    VkDescriptorSetLayout layout,
    uint32_t binding,
    VkDeviceSize* pOffset)
{
    VK_FROM_HANDLE(wrapper_device, base, device);
VkDescriptorSetLayout layout__ = layout;
#ifdef NEEDS_UNWRAPPING_VkDescriptorSetLayout
#endif
uint32_t binding__ = binding;
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
    base->dispatch_table.GetDescriptorSetLayoutBindingOffsetEXT(base->dispatch_handle, layout__, binding__, pOffset);
#ifdef NEEDS_UNWRAPPING_VkDeviceSize
#endif
    return ;
}

static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_GetDescriptorEXT(
    VkDevice device,
    const VkDescriptorGetInfoEXT* pDescriptorInfo,
    size_t dataSize,
    void* pDescriptor)
{
    VK_FROM_HANDLE(wrapper_device, base, device);
const VkDescriptorGetInfoEXT* pDescriptorInfo__ = pDescriptorInfo;
#ifdef NEEDS_UNWRAPPING_VkDescriptorGetInfoEXT
    VkDescriptorGetInfoEXT _w_pDescriptorInfo = { 0 };
    pDescriptorInfo__ = &_w_pDescriptorInfo;
    unwrap_VkDescriptorGetInfoEXT(base, (VkDescriptorGetInfoEXT *) pDescriptorInfo__, pDescriptorInfo);
#endif
size_t dataSize__ = dataSize;
#ifdef NEEDS_UNWRAPPING_size_t
#endif
    base->dispatch_table.GetDescriptorEXT(base->dispatch_handle, pDescriptorInfo__, dataSize__, pDescriptor);
#ifdef NEEDS_UNWRAPPING_void
#endif
    return ;
}

static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_CmdBindDescriptorBuffersEXT(
    VkCommandBuffer commandBuffer,
    uint32_t bufferCount,
    const VkDescriptorBufferBindingInfoEXT* pBindingInfos)
{
    VK_FROM_HANDLE(wrapper_command_buffer, base, commandBuffer);
uint32_t bufferCount__ = bufferCount;
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
const VkDescriptorBufferBindingInfoEXT* pBindingInfos__ = pBindingInfos;
#ifdef NEEDS_UNWRAPPING_VkDescriptorBufferBindingInfoEXT
    pBindingInfos__ = alloca(bufferCount * sizeof(VkDescriptorBufferBindingInfoEXT));
    for (int i = 0; i < bufferCount; i++)
        unwrap_VkDescriptorBufferBindingInfoEXT(base->device, (VkDescriptorBufferBindingInfoEXT *) &pBindingInfos__[i], &pBindingInfos[i]);
#endif
    base->device->dispatch_table.CmdBindDescriptorBuffersEXT(base->dispatch_handle, bufferCount__, pBindingInfos__);

    return ;
}

static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_CmdSetDescriptorBufferOffsetsEXT(
    VkCommandBuffer commandBuffer,
    VkPipelineBindPoint pipelineBindPoint,
    VkPipelineLayout layout,
    uint32_t firstSet,
    uint32_t setCount,
    const uint32_t* pBufferIndices,
    const VkDeviceSize* pOffsets)
{
    VK_FROM_HANDLE(wrapper_command_buffer, base, commandBuffer);
VkPipelineBindPoint pipelineBindPoint__ = pipelineBindPoint;
#ifdef NEEDS_UNWRAPPING_VkPipelineBindPoint
#endif
VkPipelineLayout layout__ = layout;
#ifdef NEEDS_UNWRAPPING_VkPipelineLayout
#endif
uint32_t firstSet__ = firstSet;
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
uint32_t setCount__ = setCount;
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
const uint32_t* pBufferIndices__ = pBufferIndices;
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
const VkDeviceSize* pOffsets__ = pOffsets;
#ifdef NEEDS_UNWRAPPING_VkDeviceSize
#endif
    base->device->dispatch_table.CmdSetDescriptorBufferOffsetsEXT(base->dispatch_handle, pipelineBindPoint__, layout__, firstSet__, setCount__, pBufferIndices__, pOffsets__);

    return ;
}

static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_CmdBindDescriptorBufferEmbeddedSamplersEXT(
    VkCommandBuffer commandBuffer,
    VkPipelineBindPoint pipelineBindPoint,
    VkPipelineLayout layout,
    uint32_t set)
{
    VK_FROM_HANDLE(wrapper_command_buffer, base, commandBuffer);
VkPipelineBindPoint pipelineBindPoint__ = pipelineBindPoint;
#ifdef NEEDS_UNWRAPPING_VkPipelineBindPoint
#endif
VkPipelineLayout layout__ = layout;
#ifdef NEEDS_UNWRAPPING_VkPipelineLayout
#endif
uint32_t set__ = set;
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
    base->device->dispatch_table.CmdBindDescriptorBufferEmbeddedSamplersEXT(base->dispatch_handle, pipelineBindPoint__, layout__, set__);

    return ;
}

static VKAPI_ATTR VkResult VKAPI_CALL
wrapper_tramp_GetBufferOpaqueCaptureDescriptorDataEXT(
    VkDevice device,
    const VkBufferCaptureDescriptorDataInfoEXT* pInfo,
    void* pData)
{
    VK_FROM_HANDLE(wrapper_device, base, device);
const VkBufferCaptureDescriptorDataInfoEXT* pInfo__ = pInfo;
#ifdef NEEDS_UNWRAPPING_VkBufferCaptureDescriptorDataInfoEXT
    VkBufferCaptureDescriptorDataInfoEXT _w_pInfo = { 0 };
    pInfo__ = &_w_pInfo;
    unwrap_VkBufferCaptureDescriptorDataInfoEXT(base, (VkBufferCaptureDescriptorDataInfoEXT *) pInfo__, pInfo);
#endif
    VkResult result = base->dispatch_table.GetBufferOpaqueCaptureDescriptorDataEXT(base->dispatch_handle, pInfo__, pData);
#ifdef NEEDS_UNWRAPPING_void
#endif
    return result;
}

static VKAPI_ATTR VkResult VKAPI_CALL
wrapper_tramp_GetImageOpaqueCaptureDescriptorDataEXT(
    VkDevice device,
    const VkImageCaptureDescriptorDataInfoEXT* pInfo,
    void* pData)
{
    VK_FROM_HANDLE(wrapper_device, base, device);
const VkImageCaptureDescriptorDataInfoEXT* pInfo__ = pInfo;
#ifdef NEEDS_UNWRAPPING_VkImageCaptureDescriptorDataInfoEXT
    VkImageCaptureDescriptorDataInfoEXT _w_pInfo = { 0 };
    pInfo__ = &_w_pInfo;
    unwrap_VkImageCaptureDescriptorDataInfoEXT(base, (VkImageCaptureDescriptorDataInfoEXT *) pInfo__, pInfo);
#endif
    VkResult result = base->dispatch_table.GetImageOpaqueCaptureDescriptorDataEXT(base->dispatch_handle, pInfo__, pData);
#ifdef NEEDS_UNWRAPPING_void
#endif
    return result;
}

static VKAPI_ATTR VkResult VKAPI_CALL
wrapper_tramp_GetImageViewOpaqueCaptureDescriptorDataEXT(
    VkDevice device,
    const VkImageViewCaptureDescriptorDataInfoEXT* pInfo,
    void* pData)
{
    VK_FROM_HANDLE(wrapper_device, base, device);
const VkImageViewCaptureDescriptorDataInfoEXT* pInfo__ = pInfo;
#ifdef NEEDS_UNWRAPPING_VkImageViewCaptureDescriptorDataInfoEXT
    VkImageViewCaptureDescriptorDataInfoEXT _w_pInfo = { 0 };
    pInfo__ = &_w_pInfo;
    unwrap_VkImageViewCaptureDescriptorDataInfoEXT(base, (VkImageViewCaptureDescriptorDataInfoEXT *) pInfo__, pInfo);
#endif
    VkResult result = base->dispatch_table.GetImageViewOpaqueCaptureDescriptorDataEXT(base->dispatch_handle, pInfo__, pData);
#ifdef NEEDS_UNWRAPPING_void
#endif
    return result;
}

static VKAPI_ATTR VkResult VKAPI_CALL
wrapper_tramp_GetSamplerOpaqueCaptureDescriptorDataEXT(
    VkDevice device,
    const VkSamplerCaptureDescriptorDataInfoEXT* pInfo,
    void* pData)
{
    VK_FROM_HANDLE(wrapper_device, base, device);
const VkSamplerCaptureDescriptorDataInfoEXT* pInfo__ = pInfo;
#ifdef NEEDS_UNWRAPPING_VkSamplerCaptureDescriptorDataInfoEXT
    VkSamplerCaptureDescriptorDataInfoEXT _w_pInfo = { 0 };
    pInfo__ = &_w_pInfo;
    unwrap_VkSamplerCaptureDescriptorDataInfoEXT(base, (VkSamplerCaptureDescriptorDataInfoEXT *) pInfo__, pInfo);
#endif
    VkResult result = base->dispatch_table.GetSamplerOpaqueCaptureDescriptorDataEXT(base->dispatch_handle, pInfo__, pData);
#ifdef NEEDS_UNWRAPPING_void
#endif
    return result;
}

static VKAPI_ATTR VkResult VKAPI_CALL
wrapper_tramp_GetAccelerationStructureOpaqueCaptureDescriptorDataEXT(
    VkDevice device,
    const VkAccelerationStructureCaptureDescriptorDataInfoEXT* pInfo,
    void* pData)
{
    VK_FROM_HANDLE(wrapper_device, base, device);
const VkAccelerationStructureCaptureDescriptorDataInfoEXT* pInfo__ = pInfo;
#ifdef NEEDS_UNWRAPPING_VkAccelerationStructureCaptureDescriptorDataInfoEXT
    VkAccelerationStructureCaptureDescriptorDataInfoEXT _w_pInfo = { 0 };
    pInfo__ = &_w_pInfo;
    unwrap_VkAccelerationStructureCaptureDescriptorDataInfoEXT(base, (VkAccelerationStructureCaptureDescriptorDataInfoEXT *) pInfo__, pInfo);
#endif
    VkResult result = base->dispatch_table.GetAccelerationStructureOpaqueCaptureDescriptorDataEXT(base->dispatch_handle, pInfo__, pData);
#ifdef NEEDS_UNWRAPPING_void
#endif
    return result;
}

static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_SetDeviceMemoryPriorityEXT(
    VkDevice       device,
    VkDeviceMemory memory,
    float          priority)
{
    VK_FROM_HANDLE(wrapper_device, base, device);
VkDeviceMemory memory__ = memory;
#ifdef NEEDS_UNWRAPPING_VkDeviceMemory
#endif
float          priority__ = priority;
#ifdef NEEDS_UNWRAPPING_float
#endif
    base->dispatch_table.SetDeviceMemoryPriorityEXT(base->dispatch_handle, memory__, priority__);

    return ;
}
        
static VKAPI_ATTR VkResult VKAPI_CALL
wrapper_tramp_WaitForPresentKHR(
    VkDevice device,
    VkSwapchainKHR swapchain,
    uint64_t presentId,
    uint64_t timeout)
{
    VK_FROM_HANDLE(wrapper_device, base, device);
VkSwapchainKHR swapchain__ = swapchain;
#ifdef NEEDS_UNWRAPPING_VkSwapchainKHR
#endif
uint64_t presentId__ = presentId;
#ifdef NEEDS_UNWRAPPING_uint64_t
#endif
uint64_t timeout__ = timeout;
#ifdef NEEDS_UNWRAPPING_uint64_t
#endif
    VkResult result = base->dispatch_table.WaitForPresentKHR(base->dispatch_handle, swapchain__, presentId__, timeout__);

    return result;
}
#ifdef VK_USE_PLATFORM_FUCHSIA

static VKAPI_ATTR VkResult VKAPI_CALL
wrapper_tramp_CreateBufferCollectionFUCHSIA(
    VkDevice device,
    const VkBufferCollectionCreateInfoFUCHSIA* pCreateInfo,
    const VkAllocationCallbacks* pAllocator,
    VkBufferCollectionFUCHSIA* pCollection)
{
    VK_FROM_HANDLE(wrapper_device, base, device);
const VkBufferCollectionCreateInfoFUCHSIA* pCreateInfo__ = pCreateInfo;
#ifdef NEEDS_UNWRAPPING_VkBufferCollectionCreateInfoFUCHSIA
    VkBufferCollectionCreateInfoFUCHSIA _w_pCreateInfo = { 0 };
    pCreateInfo__ = &_w_pCreateInfo;
    unwrap_VkBufferCollectionCreateInfoFUCHSIA(base, (VkBufferCollectionCreateInfoFUCHSIA *) pCreateInfo__, pCreateInfo);
#endif
const VkAllocationCallbacks* pAllocator__ = pAllocator;
#ifdef NEEDS_UNWRAPPING_VkAllocationCallbacks
    VkAllocationCallbacks _w_pAllocator = { 0 };
    pAllocator__ = &_w_pAllocator;
    unwrap_VkAllocationCallbacks(base, (VkAllocationCallbacks *) pAllocator__, pAllocator);
#endif
    VkResult result = base->dispatch_table.CreateBufferCollectionFUCHSIA(base->dispatch_handle, pCreateInfo__, pAllocator__, pCollection);
#ifdef NEEDS_UNWRAPPING_VkBufferCollectionFUCHSIA
#endif
    return result;
}
#endif
#ifdef VK_USE_PLATFORM_FUCHSIA

static VKAPI_ATTR VkResult VKAPI_CALL
wrapper_tramp_SetBufferCollectionBufferConstraintsFUCHSIA(
    VkDevice device,
    VkBufferCollectionFUCHSIA collection,
    const VkBufferConstraintsInfoFUCHSIA* pBufferConstraintsInfo)
{
    VK_FROM_HANDLE(wrapper_device, base, device);
VkBufferCollectionFUCHSIA collection__ = collection;
#ifdef NEEDS_UNWRAPPING_VkBufferCollectionFUCHSIA
#endif
const VkBufferConstraintsInfoFUCHSIA* pBufferConstraintsInfo__ = pBufferConstraintsInfo;
#ifdef NEEDS_UNWRAPPING_VkBufferConstraintsInfoFUCHSIA
    VkBufferConstraintsInfoFUCHSIA _w_pBufferConstraintsInfo = { 0 };
    pBufferConstraintsInfo__ = &_w_pBufferConstraintsInfo;
    unwrap_VkBufferConstraintsInfoFUCHSIA(base, (VkBufferConstraintsInfoFUCHSIA *) pBufferConstraintsInfo__, pBufferConstraintsInfo);
#endif
    VkResult result = base->dispatch_table.SetBufferCollectionBufferConstraintsFUCHSIA(base->dispatch_handle, collection__, pBufferConstraintsInfo__);

    return result;
}
#endif
#ifdef VK_USE_PLATFORM_FUCHSIA

static VKAPI_ATTR VkResult VKAPI_CALL
wrapper_tramp_SetBufferCollectionImageConstraintsFUCHSIA(
    VkDevice device,
    VkBufferCollectionFUCHSIA collection,
    const VkImageConstraintsInfoFUCHSIA* pImageConstraintsInfo)
{
    VK_FROM_HANDLE(wrapper_device, base, device);
VkBufferCollectionFUCHSIA collection__ = collection;
#ifdef NEEDS_UNWRAPPING_VkBufferCollectionFUCHSIA
#endif
const VkImageConstraintsInfoFUCHSIA* pImageConstraintsInfo__ = pImageConstraintsInfo;
#ifdef NEEDS_UNWRAPPING_VkImageConstraintsInfoFUCHSIA
    VkImageConstraintsInfoFUCHSIA _w_pImageConstraintsInfo = { 0 };
    pImageConstraintsInfo__ = &_w_pImageConstraintsInfo;
    unwrap_VkImageConstraintsInfoFUCHSIA(base, (VkImageConstraintsInfoFUCHSIA *) pImageConstraintsInfo__, pImageConstraintsInfo);
#endif
    VkResult result = base->dispatch_table.SetBufferCollectionImageConstraintsFUCHSIA(base->dispatch_handle, collection__, pImageConstraintsInfo__);

    return result;
}
#endif
#ifdef VK_USE_PLATFORM_FUCHSIA

static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_DestroyBufferCollectionFUCHSIA(
    VkDevice device,
    VkBufferCollectionFUCHSIA collection,
    const VkAllocationCallbacks* pAllocator)
{
    VK_FROM_HANDLE(wrapper_device, base, device);
VkBufferCollectionFUCHSIA collection__ = collection;
#ifdef NEEDS_UNWRAPPING_VkBufferCollectionFUCHSIA
#endif
const VkAllocationCallbacks* pAllocator__ = pAllocator;
#ifdef NEEDS_UNWRAPPING_VkAllocationCallbacks
    VkAllocationCallbacks _w_pAllocator = { 0 };
    pAllocator__ = &_w_pAllocator;
    unwrap_VkAllocationCallbacks(base, (VkAllocationCallbacks *) pAllocator__, pAllocator);
#endif
    base->dispatch_table.DestroyBufferCollectionFUCHSIA(base->dispatch_handle, collection__, pAllocator__);

    return ;
}
#endif
#ifdef VK_USE_PLATFORM_FUCHSIA

static VKAPI_ATTR VkResult VKAPI_CALL
wrapper_tramp_GetBufferCollectionPropertiesFUCHSIA(
    VkDevice device,
    VkBufferCollectionFUCHSIA collection,
    VkBufferCollectionPropertiesFUCHSIA* pProperties)
{
    VK_FROM_HANDLE(wrapper_device, base, device);
VkBufferCollectionFUCHSIA collection__ = collection;
#ifdef NEEDS_UNWRAPPING_VkBufferCollectionFUCHSIA
#endif
    VkResult result = base->dispatch_table.GetBufferCollectionPropertiesFUCHSIA(base->dispatch_handle, collection__, pProperties);
#ifdef NEEDS_UNWRAPPING_VkBufferCollectionPropertiesFUCHSIA
#warning TODO: Repack struct+ptr+out GetBufferCollectionPropertiesFUCHSIA EntrypointParam(type='VkBufferCollectionPropertiesFUCHSIA', name='pProperties', decl='VkBufferCollectionPropertiesFUCHSIA* pProperties', len=None, elem=<Element 'param' at 0x736889a34630>, is_const=False, num_pointers=1)
#endif
    return result;
}
#endif

static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_CmdBeginRendering(
    VkCommandBuffer                   commandBuffer,
    const VkRenderingInfo*                              pRenderingInfo)
{
    VK_FROM_HANDLE(wrapper_command_buffer, base, commandBuffer);
const VkRenderingInfo*                              pRenderingInfo__ = pRenderingInfo;
#ifdef NEEDS_UNWRAPPING_VkRenderingInfo
    VkRenderingInfo _w_pRenderingInfo = { 0 };
    pRenderingInfo__ = &_w_pRenderingInfo;
    unwrap_VkRenderingInfo(base->device, (VkRenderingInfo *) pRenderingInfo__, pRenderingInfo);
#endif
    base->device->dispatch_table.CmdBeginRendering(base->dispatch_handle, pRenderingInfo__);

    return ;
}
    
static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_CmdEndRendering(
    VkCommandBuffer                   commandBuffer)
{
    VK_FROM_HANDLE(wrapper_command_buffer, base, commandBuffer);
    base->device->dispatch_table.CmdEndRendering(base->dispatch_handle);

    return ;
}
    
static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_GetDescriptorSetLayoutHostMappingInfoVALVE(
    VkDevice device,
    const VkDescriptorSetBindingReferenceVALVE* pBindingReference,
    VkDescriptorSetLayoutHostMappingInfoVALVE* pHostMapping)
{
    VK_FROM_HANDLE(wrapper_device, base, device);
const VkDescriptorSetBindingReferenceVALVE* pBindingReference__ = pBindingReference;
#ifdef NEEDS_UNWRAPPING_VkDescriptorSetBindingReferenceVALVE
    VkDescriptorSetBindingReferenceVALVE _w_pBindingReference = { 0 };
    pBindingReference__ = &_w_pBindingReference;
    unwrap_VkDescriptorSetBindingReferenceVALVE(base, (VkDescriptorSetBindingReferenceVALVE *) pBindingReference__, pBindingReference);
#endif
    base->dispatch_table.GetDescriptorSetLayoutHostMappingInfoVALVE(base->dispatch_handle, pBindingReference__, pHostMapping);
#ifdef NEEDS_UNWRAPPING_VkDescriptorSetLayoutHostMappingInfoVALVE
#warning TODO: Repack struct+ptr+out GetDescriptorSetLayoutHostMappingInfoVALVE EntrypointParam(type='VkDescriptorSetLayoutHostMappingInfoVALVE', name='pHostMapping', decl='VkDescriptorSetLayoutHostMappingInfoVALVE* pHostMapping', len=None, elem=<Element 'param' at 0x736889a36ca0>, is_const=False, num_pointers=1)
#endif
    return ;
}

static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_GetDescriptorSetHostMappingVALVE(
    VkDevice device,
    VkDescriptorSet descriptorSet,
    void** ppData)
{
    VK_FROM_HANDLE(wrapper_device, base, device);
VkDescriptorSet descriptorSet__ = descriptorSet;
#ifdef NEEDS_UNWRAPPING_VkDescriptorSet
#endif
    base->dispatch_table.GetDescriptorSetHostMappingVALVE(base->dispatch_handle, descriptorSet__, ppData);
#ifdef NEEDS_UNWRAPPING_void
#endif
    return ;
}

static VKAPI_ATTR VkResult VKAPI_CALL
wrapper_tramp_CreateMicromapEXT(
    VkDevice                                           device,
    const VkMicromapCreateInfoEXT*        pCreateInfo,
    const VkAllocationCallbacks*       pAllocator,
    VkMicromapEXT*                        pMicromap)
{
    VK_FROM_HANDLE(wrapper_device, base, device);
const VkMicromapCreateInfoEXT*        pCreateInfo__ = pCreateInfo;
#ifdef NEEDS_UNWRAPPING_VkMicromapCreateInfoEXT
    VkMicromapCreateInfoEXT _w_pCreateInfo = { 0 };
    pCreateInfo__ = &_w_pCreateInfo;
    unwrap_VkMicromapCreateInfoEXT(base, (VkMicromapCreateInfoEXT *) pCreateInfo__, pCreateInfo);
#endif
const VkAllocationCallbacks*       pAllocator__ = pAllocator;
#ifdef NEEDS_UNWRAPPING_VkAllocationCallbacks
    VkAllocationCallbacks _w_pAllocator = { 0 };
    pAllocator__ = &_w_pAllocator;
    unwrap_VkAllocationCallbacks(base, (VkAllocationCallbacks *) pAllocator__, pAllocator);
#endif
    VkResult result = base->dispatch_table.CreateMicromapEXT(base->dispatch_handle, pCreateInfo__, pAllocator__, pMicromap);
#ifdef NEEDS_UNWRAPPING_VkMicromapEXT
#endif
    return result;
}

static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_CmdBuildMicromapsEXT(
    VkCommandBuffer                                    commandBuffer,
    uint32_t infoCount,
    const VkMicromapBuildInfoEXT* pInfos)
{
    VK_FROM_HANDLE(wrapper_command_buffer, base, commandBuffer);
uint32_t infoCount__ = infoCount;
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
const VkMicromapBuildInfoEXT* pInfos__ = pInfos;
#ifdef NEEDS_UNWRAPPING_VkMicromapBuildInfoEXT
    pInfos__ = alloca(infoCount * sizeof(VkMicromapBuildInfoEXT));
    for (int i = 0; i < infoCount; i++)
        unwrap_VkMicromapBuildInfoEXT(base->device, (VkMicromapBuildInfoEXT *) &pInfos__[i], &pInfos[i]);
#endif
    base->device->dispatch_table.CmdBuildMicromapsEXT(base->dispatch_handle, infoCount__, pInfos__);

    return ;
}

static VKAPI_ATTR VkResult VKAPI_CALL
wrapper_tramp_BuildMicromapsEXT(
    VkDevice                                           device,
    VkDeferredOperationKHR deferredOperation,
    uint32_t infoCount,
    const VkMicromapBuildInfoEXT* pInfos)
{
    VK_FROM_HANDLE(wrapper_device, base, device);
VkDeferredOperationKHR deferredOperation__ = deferredOperation;
#ifdef NEEDS_UNWRAPPING_VkDeferredOperationKHR
#endif
uint32_t infoCount__ = infoCount;
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
const VkMicromapBuildInfoEXT* pInfos__ = pInfos;
#ifdef NEEDS_UNWRAPPING_VkMicromapBuildInfoEXT
    pInfos__ = alloca(infoCount * sizeof(VkMicromapBuildInfoEXT));
    for (int i = 0; i < infoCount; i++)
        unwrap_VkMicromapBuildInfoEXT(base, (VkMicromapBuildInfoEXT *) &pInfos__[i], &pInfos[i]);
#endif
    VkResult result = base->dispatch_table.BuildMicromapsEXT(base->dispatch_handle, deferredOperation__, infoCount__, pInfos__);

    return result;
}

static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_DestroyMicromapEXT(
    VkDevice device,
    VkMicromapEXT micromap,
    const VkAllocationCallbacks* pAllocator)
{
    VK_FROM_HANDLE(wrapper_device, base, device);
VkMicromapEXT micromap__ = micromap;
#ifdef NEEDS_UNWRAPPING_VkMicromapEXT
#endif
const VkAllocationCallbacks* pAllocator__ = pAllocator;
#ifdef NEEDS_UNWRAPPING_VkAllocationCallbacks
    VkAllocationCallbacks _w_pAllocator = { 0 };
    pAllocator__ = &_w_pAllocator;
    unwrap_VkAllocationCallbacks(base, (VkAllocationCallbacks *) pAllocator__, pAllocator);
#endif
    base->dispatch_table.DestroyMicromapEXT(base->dispatch_handle, micromap__, pAllocator__);

    return ;
}

static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_CmdCopyMicromapEXT(
    VkCommandBuffer commandBuffer,
    const VkCopyMicromapInfoEXT* pInfo)
{
    VK_FROM_HANDLE(wrapper_command_buffer, base, commandBuffer);
const VkCopyMicromapInfoEXT* pInfo__ = pInfo;
#ifdef NEEDS_UNWRAPPING_VkCopyMicromapInfoEXT
    VkCopyMicromapInfoEXT _w_pInfo = { 0 };
    pInfo__ = &_w_pInfo;
    unwrap_VkCopyMicromapInfoEXT(base->device, (VkCopyMicromapInfoEXT *) pInfo__, pInfo);
#endif
    base->device->dispatch_table.CmdCopyMicromapEXT(base->dispatch_handle, pInfo__);

    return ;
}

static VKAPI_ATTR VkResult VKAPI_CALL
wrapper_tramp_CopyMicromapEXT(
    VkDevice device,
    VkDeferredOperationKHR deferredOperation,
    const VkCopyMicromapInfoEXT* pInfo)
{
    VK_FROM_HANDLE(wrapper_device, base, device);
VkDeferredOperationKHR deferredOperation__ = deferredOperation;
#ifdef NEEDS_UNWRAPPING_VkDeferredOperationKHR
#endif
const VkCopyMicromapInfoEXT* pInfo__ = pInfo;
#ifdef NEEDS_UNWRAPPING_VkCopyMicromapInfoEXT
    VkCopyMicromapInfoEXT _w_pInfo = { 0 };
    pInfo__ = &_w_pInfo;
    unwrap_VkCopyMicromapInfoEXT(base, (VkCopyMicromapInfoEXT *) pInfo__, pInfo);
#endif
    VkResult result = base->dispatch_table.CopyMicromapEXT(base->dispatch_handle, deferredOperation__, pInfo__);

    return result;
}

static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_CmdCopyMicromapToMemoryEXT(
    VkCommandBuffer commandBuffer,
    const VkCopyMicromapToMemoryInfoEXT* pInfo)
{
    VK_FROM_HANDLE(wrapper_command_buffer, base, commandBuffer);
const VkCopyMicromapToMemoryInfoEXT* pInfo__ = pInfo;
#ifdef NEEDS_UNWRAPPING_VkCopyMicromapToMemoryInfoEXT
    VkCopyMicromapToMemoryInfoEXT _w_pInfo = { 0 };
    pInfo__ = &_w_pInfo;
    unwrap_VkCopyMicromapToMemoryInfoEXT(base->device, (VkCopyMicromapToMemoryInfoEXT *) pInfo__, pInfo);
#endif
    base->device->dispatch_table.CmdCopyMicromapToMemoryEXT(base->dispatch_handle, pInfo__);

    return ;
}

static VKAPI_ATTR VkResult VKAPI_CALL
wrapper_tramp_CopyMicromapToMemoryEXT(
    VkDevice device,
    VkDeferredOperationKHR deferredOperation,
    const VkCopyMicromapToMemoryInfoEXT* pInfo)
{
    VK_FROM_HANDLE(wrapper_device, base, device);
VkDeferredOperationKHR deferredOperation__ = deferredOperation;
#ifdef NEEDS_UNWRAPPING_VkDeferredOperationKHR
#endif
const VkCopyMicromapToMemoryInfoEXT* pInfo__ = pInfo;
#ifdef NEEDS_UNWRAPPING_VkCopyMicromapToMemoryInfoEXT
    VkCopyMicromapToMemoryInfoEXT _w_pInfo = { 0 };
    pInfo__ = &_w_pInfo;
    unwrap_VkCopyMicromapToMemoryInfoEXT(base, (VkCopyMicromapToMemoryInfoEXT *) pInfo__, pInfo);
#endif
    VkResult result = base->dispatch_table.CopyMicromapToMemoryEXT(base->dispatch_handle, deferredOperation__, pInfo__);

    return result;
}

static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_CmdCopyMemoryToMicromapEXT(
    VkCommandBuffer commandBuffer,
    const VkCopyMemoryToMicromapInfoEXT* pInfo)
{
    VK_FROM_HANDLE(wrapper_command_buffer, base, commandBuffer);
const VkCopyMemoryToMicromapInfoEXT* pInfo__ = pInfo;
#ifdef NEEDS_UNWRAPPING_VkCopyMemoryToMicromapInfoEXT
    VkCopyMemoryToMicromapInfoEXT _w_pInfo = { 0 };
    pInfo__ = &_w_pInfo;
    unwrap_VkCopyMemoryToMicromapInfoEXT(base->device, (VkCopyMemoryToMicromapInfoEXT *) pInfo__, pInfo);
#endif
    base->device->dispatch_table.CmdCopyMemoryToMicromapEXT(base->dispatch_handle, pInfo__);

    return ;
}

static VKAPI_ATTR VkResult VKAPI_CALL
wrapper_tramp_CopyMemoryToMicromapEXT(
    VkDevice device,
    VkDeferredOperationKHR deferredOperation,
    const VkCopyMemoryToMicromapInfoEXT* pInfo)
{
    VK_FROM_HANDLE(wrapper_device, base, device);
VkDeferredOperationKHR deferredOperation__ = deferredOperation;
#ifdef NEEDS_UNWRAPPING_VkDeferredOperationKHR
#endif
const VkCopyMemoryToMicromapInfoEXT* pInfo__ = pInfo;
#ifdef NEEDS_UNWRAPPING_VkCopyMemoryToMicromapInfoEXT
    VkCopyMemoryToMicromapInfoEXT _w_pInfo = { 0 };
    pInfo__ = &_w_pInfo;
    unwrap_VkCopyMemoryToMicromapInfoEXT(base, (VkCopyMemoryToMicromapInfoEXT *) pInfo__, pInfo);
#endif
    VkResult result = base->dispatch_table.CopyMemoryToMicromapEXT(base->dispatch_handle, deferredOperation__, pInfo__);

    return result;
}

static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_CmdWriteMicromapsPropertiesEXT(
    VkCommandBuffer commandBuffer,
    uint32_t micromapCount,
    const VkMicromapEXT* pMicromaps,
    VkQueryType queryType,
    VkQueryPool queryPool,
    uint32_t firstQuery)
{
    VK_FROM_HANDLE(wrapper_command_buffer, base, commandBuffer);
uint32_t micromapCount__ = micromapCount;
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
const VkMicromapEXT* pMicromaps__ = pMicromaps;
#ifdef NEEDS_UNWRAPPING_VkMicromapEXT
#endif
VkQueryType queryType__ = queryType;
#ifdef NEEDS_UNWRAPPING_VkQueryType
#endif
VkQueryPool queryPool__ = queryPool;
#ifdef NEEDS_UNWRAPPING_VkQueryPool
#endif
uint32_t firstQuery__ = firstQuery;
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
    base->device->dispatch_table.CmdWriteMicromapsPropertiesEXT(base->dispatch_handle, micromapCount__, pMicromaps__, queryType__, queryPool__, firstQuery__);

    return ;
}

static VKAPI_ATTR VkResult VKAPI_CALL
wrapper_tramp_WriteMicromapsPropertiesEXT(
    VkDevice device,
    uint32_t micromapCount,
    const VkMicromapEXT* pMicromaps,
    VkQueryType  queryType,
    size_t       dataSize,
    void* pData,
    size_t stride)
{
    VK_FROM_HANDLE(wrapper_device, base, device);
uint32_t micromapCount__ = micromapCount;
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
const VkMicromapEXT* pMicromaps__ = pMicromaps;
#ifdef NEEDS_UNWRAPPING_VkMicromapEXT
#endif
VkQueryType  queryType__ = queryType;
#ifdef NEEDS_UNWRAPPING_VkQueryType
#endif
size_t       dataSize__ = dataSize;
#ifdef NEEDS_UNWRAPPING_size_t
#endif
size_t stride__ = stride;
#ifdef NEEDS_UNWRAPPING_size_t
#endif
    VkResult result = base->dispatch_table.WriteMicromapsPropertiesEXT(base->dispatch_handle, micromapCount__, pMicromaps__, queryType__, dataSize__, pData, stride__);
#ifdef NEEDS_UNWRAPPING_void
#endif
    return result;
}

static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_GetDeviceMicromapCompatibilityEXT(
    VkDevice device,
    const VkMicromapVersionInfoEXT* pVersionInfo,
    VkAccelerationStructureCompatibilityKHR* pCompatibility)
{
    VK_FROM_HANDLE(wrapper_device, base, device);
const VkMicromapVersionInfoEXT* pVersionInfo__ = pVersionInfo;
#ifdef NEEDS_UNWRAPPING_VkMicromapVersionInfoEXT
    VkMicromapVersionInfoEXT _w_pVersionInfo = { 0 };
    pVersionInfo__ = &_w_pVersionInfo;
    unwrap_VkMicromapVersionInfoEXT(base, (VkMicromapVersionInfoEXT *) pVersionInfo__, pVersionInfo);
#endif
    base->dispatch_table.GetDeviceMicromapCompatibilityEXT(base->dispatch_handle, pVersionInfo__, pCompatibility);
#ifdef NEEDS_UNWRAPPING_VkAccelerationStructureCompatibilityKHR
#endif
    return ;
}

static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_GetMicromapBuildSizesEXT(
    VkDevice                                            device,
    VkAccelerationStructureBuildTypeKHR                 buildType,
    const VkMicromapBuildInfoEXT*  pBuildInfo,
    VkMicromapBuildSizesInfoEXT*           pSizeInfo)
{
    VK_FROM_HANDLE(wrapper_device, base, device);
VkAccelerationStructureBuildTypeKHR                 buildType__ = buildType;
#ifdef NEEDS_UNWRAPPING_VkAccelerationStructureBuildTypeKHR
#endif
const VkMicromapBuildInfoEXT*  pBuildInfo__ = pBuildInfo;
#ifdef NEEDS_UNWRAPPING_VkMicromapBuildInfoEXT
    VkMicromapBuildInfoEXT _w_pBuildInfo = { 0 };
    pBuildInfo__ = &_w_pBuildInfo;
    unwrap_VkMicromapBuildInfoEXT(base, (VkMicromapBuildInfoEXT *) pBuildInfo__, pBuildInfo);
#endif
    base->dispatch_table.GetMicromapBuildSizesEXT(base->dispatch_handle, buildType__, pBuildInfo__, pSizeInfo);
#ifdef NEEDS_UNWRAPPING_VkMicromapBuildSizesInfoEXT
#warning TODO: Repack struct+ptr+out GetMicromapBuildSizesEXT EntrypointParam(type='VkMicromapBuildSizesInfoEXT', name='pSizeInfo', decl='VkMicromapBuildSizesInfoEXT*           pSizeInfo', len=None, elem=<Element 'param' at 0x736889843600>, is_const=False, num_pointers=1)
#endif
    return ;
}

static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_GetShaderModuleIdentifierEXT(
    VkDevice device,
    VkShaderModule shaderModule,
    VkShaderModuleIdentifierEXT* pIdentifier)
{
    VK_FROM_HANDLE(wrapper_device, base, device);
VkShaderModule shaderModule__ = shaderModule;
#ifdef NEEDS_UNWRAPPING_VkShaderModule
#endif
    base->dispatch_table.GetShaderModuleIdentifierEXT(base->dispatch_handle, shaderModule__, pIdentifier);
#ifdef NEEDS_UNWRAPPING_VkShaderModuleIdentifierEXT
#warning TODO: Repack struct+ptr+out GetShaderModuleIdentifierEXT EntrypointParam(type='VkShaderModuleIdentifierEXT', name='pIdentifier', decl='VkShaderModuleIdentifierEXT* pIdentifier', len=None, elem=<Element 'param' at 0x736889843ab0>, is_const=False, num_pointers=1)
#endif
    return ;
}

static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_GetShaderModuleCreateInfoIdentifierEXT(
    VkDevice device,
    const VkShaderModuleCreateInfo* pCreateInfo,
    VkShaderModuleIdentifierEXT* pIdentifier)
{
    VK_FROM_HANDLE(wrapper_device, base, device);
const VkShaderModuleCreateInfo* pCreateInfo__ = pCreateInfo;
#ifdef NEEDS_UNWRAPPING_VkShaderModuleCreateInfo
    VkShaderModuleCreateInfo _w_pCreateInfo = { 0 };
    pCreateInfo__ = &_w_pCreateInfo;
    unwrap_VkShaderModuleCreateInfo(base, (VkShaderModuleCreateInfo *) pCreateInfo__, pCreateInfo);
#endif
    base->dispatch_table.GetShaderModuleCreateInfoIdentifierEXT(base->dispatch_handle, pCreateInfo__, pIdentifier);
#ifdef NEEDS_UNWRAPPING_VkShaderModuleIdentifierEXT
#warning TODO: Repack struct+ptr+out GetShaderModuleCreateInfoIdentifierEXT EntrypointParam(type='VkShaderModuleIdentifierEXT', name='pIdentifier', decl='VkShaderModuleIdentifierEXT* pIdentifier', len=None, elem=<Element 'param' at 0x736889843f60>, is_const=False, num_pointers=1)
#endif
    return ;
}

static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_GetImageSubresourceLayout2KHR(
    VkDevice device,
    VkImage image,
    const VkImageSubresource2KHR* pSubresource,
    VkSubresourceLayout2KHR* pLayout)
{
    VK_FROM_HANDLE(wrapper_device, base, device);
VkImage image__ = image;
#ifdef NEEDS_UNWRAPPING_VkImage
    VK_FROM_HANDLE(wrapper_image, w_image, image);
    image__ = w_image->dispatch_handle;
#endif
const VkImageSubresource2KHR* pSubresource__ = pSubresource;
#ifdef NEEDS_UNWRAPPING_VkImageSubresource2KHR
    VkImageSubresource2KHR _w_pSubresource = { 0 };
    pSubresource__ = &_w_pSubresource;
    unwrap_VkImageSubresource2KHR(base, (VkImageSubresource2KHR *) pSubresource__, pSubresource);
#endif
    base->dispatch_table.GetImageSubresourceLayout2KHR(base->dispatch_handle, image__, pSubresource__, pLayout);
#ifdef NEEDS_UNWRAPPING_VkSubresourceLayout2KHR
#warning TODO: Repack struct+ptr+out GetImageSubresourceLayout2KHR EntrypointParam(type='VkSubresourceLayout2KHR', name='pLayout', decl='VkSubresourceLayout2KHR* pLayout', len=None, elem=<Element 'param' at 0x736889850540>, is_const=False, num_pointers=1)
#endif
    return ;
}
    
static VKAPI_ATTR VkResult VKAPI_CALL
wrapper_tramp_GetPipelinePropertiesEXT(
    VkDevice device,
    const VkPipelineInfoEXT* pPipelineInfo,
    VkBaseOutStructure* pPipelineProperties)
{
    VK_FROM_HANDLE(wrapper_device, base, device);
const VkPipelineInfoEXT* pPipelineInfo__ = pPipelineInfo;
#ifdef NEEDS_UNWRAPPING_VkPipelineInfoEXT
    VkPipelineInfoEXT _w_pPipelineInfo = { 0 };
    pPipelineInfo__ = &_w_pPipelineInfo;
    unwrap_VkPipelineInfoEXT(base, (VkPipelineInfoEXT *) pPipelineInfo__, pPipelineInfo);
#endif
    VkResult result = base->dispatch_table.GetPipelinePropertiesEXT(base->dispatch_handle, pPipelineInfo__, pPipelineProperties);
#ifdef NEEDS_UNWRAPPING_VkBaseOutStructure
#warning TODO: Repack struct+ptr+out GetPipelinePropertiesEXT EntrypointParam(type='VkBaseOutStructure', name='pPipelineProperties', decl='VkBaseOutStructure* pPipelineProperties', len=None, elem=<Element 'param' at 0x736889850b30>, is_const=False, num_pointers=1)
#endif
    return result;
}
#ifdef VK_USE_PLATFORM_METAL_EXT

static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_ExportMetalObjectsEXT(
    VkDevice device,
    VkExportMetalObjectsInfoEXT* pMetalObjectsInfo)
{
    VK_FROM_HANDLE(wrapper_device, base, device);
    base->dispatch_table.ExportMetalObjectsEXT(base->dispatch_handle, pMetalObjectsInfo);
#ifdef NEEDS_UNWRAPPING_VkExportMetalObjectsInfoEXT
#endif
    return ;
}
#endif

static VKAPI_ATTR VkResult VKAPI_CALL
wrapper_tramp_GetFramebufferTilePropertiesQCOM(
    VkDevice device,
    VkFramebuffer framebuffer,
    uint32_t* pPropertiesCount,
    VkTilePropertiesQCOM* pProperties)
{
    VK_FROM_HANDLE(wrapper_device, base, device);
VkFramebuffer framebuffer__ = framebuffer;
#ifdef NEEDS_UNWRAPPING_VkFramebuffer
#endif
    VkResult result = base->dispatch_table.GetFramebufferTilePropertiesQCOM(base->dispatch_handle, framebuffer__, pPropertiesCount, pProperties);
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
#ifdef NEEDS_UNWRAPPING_VkTilePropertiesQCOM
#warning TODO: Repack struct+array+out GetFramebufferTilePropertiesQCOM EntrypointParam(type='VkTilePropertiesQCOM', name='pProperties', decl='VkTilePropertiesQCOM* pProperties', len='pPropertiesCount', elem=<Element 'param' at 0x736889851440>, is_const=False, num_pointers=1)
#endif
    return result;
}

static VKAPI_ATTR VkResult VKAPI_CALL
wrapper_tramp_GetDynamicRenderingTilePropertiesQCOM(
    VkDevice device,
    const VkRenderingInfo* pRenderingInfo,
    VkTilePropertiesQCOM* pProperties)
{
    VK_FROM_HANDLE(wrapper_device, base, device);
const VkRenderingInfo* pRenderingInfo__ = pRenderingInfo;
#ifdef NEEDS_UNWRAPPING_VkRenderingInfo
    VkRenderingInfo _w_pRenderingInfo = { 0 };
    pRenderingInfo__ = &_w_pRenderingInfo;
    unwrap_VkRenderingInfo(base, (VkRenderingInfo *) pRenderingInfo__, pRenderingInfo);
#endif
    VkResult result = base->dispatch_table.GetDynamicRenderingTilePropertiesQCOM(base->dispatch_handle, pRenderingInfo__, pProperties);
#ifdef NEEDS_UNWRAPPING_VkTilePropertiesQCOM
#warning TODO: Repack struct+ptr+out GetDynamicRenderingTilePropertiesQCOM EntrypointParam(type='VkTilePropertiesQCOM', name='pProperties', decl='VkTilePropertiesQCOM* pProperties', len=None, elem=<Element 'param' at 0x7368898518a0>, is_const=False, num_pointers=1)
#endif
    return result;
}
    
static VKAPI_ATTR VkResult VKAPI_CALL
wrapper_tramp_CreateOpticalFlowSessionNV(
    VkDevice device,
    const VkOpticalFlowSessionCreateInfoNV* pCreateInfo,
    const VkAllocationCallbacks* pAllocator,
    VkOpticalFlowSessionNV* pSession)
{
    VK_FROM_HANDLE(wrapper_device, base, device);
const VkOpticalFlowSessionCreateInfoNV* pCreateInfo__ = pCreateInfo;
#ifdef NEEDS_UNWRAPPING_VkOpticalFlowSessionCreateInfoNV
    VkOpticalFlowSessionCreateInfoNV _w_pCreateInfo = { 0 };
    pCreateInfo__ = &_w_pCreateInfo;
    unwrap_VkOpticalFlowSessionCreateInfoNV(base, (VkOpticalFlowSessionCreateInfoNV *) pCreateInfo__, pCreateInfo);
#endif
const VkAllocationCallbacks* pAllocator__ = pAllocator;
#ifdef NEEDS_UNWRAPPING_VkAllocationCallbacks
    VkAllocationCallbacks _w_pAllocator = { 0 };
    pAllocator__ = &_w_pAllocator;
    unwrap_VkAllocationCallbacks(base, (VkAllocationCallbacks *) pAllocator__, pAllocator);
#endif
    VkResult result = base->dispatch_table.CreateOpticalFlowSessionNV(base->dispatch_handle, pCreateInfo__, pAllocator__, pSession);
#ifdef NEEDS_UNWRAPPING_VkOpticalFlowSessionNV
#endif
    return result;
}

static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_DestroyOpticalFlowSessionNV(
    VkDevice device,
    VkOpticalFlowSessionNV session,
    const VkAllocationCallbacks* pAllocator)
{
    VK_FROM_HANDLE(wrapper_device, base, device);
VkOpticalFlowSessionNV session__ = session;
#ifdef NEEDS_UNWRAPPING_VkOpticalFlowSessionNV
#endif
const VkAllocationCallbacks* pAllocator__ = pAllocator;
#ifdef NEEDS_UNWRAPPING_VkAllocationCallbacks
    VkAllocationCallbacks _w_pAllocator = { 0 };
    pAllocator__ = &_w_pAllocator;
    unwrap_VkAllocationCallbacks(base, (VkAllocationCallbacks *) pAllocator__, pAllocator);
#endif
    base->dispatch_table.DestroyOpticalFlowSessionNV(base->dispatch_handle, session__, pAllocator__);

    return ;
}

static VKAPI_ATTR VkResult VKAPI_CALL
wrapper_tramp_BindOpticalFlowSessionImageNV(
    VkDevice device,
    VkOpticalFlowSessionNV session,
    VkOpticalFlowSessionBindingPointNV bindingPoint,
    VkImageView view,
    VkImageLayout layout)
{
    VK_FROM_HANDLE(wrapper_device, base, device);
VkOpticalFlowSessionNV session__ = session;
#ifdef NEEDS_UNWRAPPING_VkOpticalFlowSessionNV
#endif
VkOpticalFlowSessionBindingPointNV bindingPoint__ = bindingPoint;
#ifdef NEEDS_UNWRAPPING_VkOpticalFlowSessionBindingPointNV
#endif
VkImageView view__ = view;
#ifdef NEEDS_UNWRAPPING_VkImageView
#endif
VkImageLayout layout__ = layout;
#ifdef NEEDS_UNWRAPPING_VkImageLayout
#endif
    VkResult result = base->dispatch_table.BindOpticalFlowSessionImageNV(base->dispatch_handle, session__, bindingPoint__, view__, layout__);

    return result;
}

static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_CmdOpticalFlowExecuteNV(
    VkCommandBuffer commandBuffer,
    VkOpticalFlowSessionNV session,
    const VkOpticalFlowExecuteInfoNV* pExecuteInfo)
{
    VK_FROM_HANDLE(wrapper_command_buffer, base, commandBuffer);
VkOpticalFlowSessionNV session__ = session;
#ifdef NEEDS_UNWRAPPING_VkOpticalFlowSessionNV
#endif
const VkOpticalFlowExecuteInfoNV* pExecuteInfo__ = pExecuteInfo;
#ifdef NEEDS_UNWRAPPING_VkOpticalFlowExecuteInfoNV
    VkOpticalFlowExecuteInfoNV _w_pExecuteInfo = { 0 };
    pExecuteInfo__ = &_w_pExecuteInfo;
    unwrap_VkOpticalFlowExecuteInfoNV(base->device, (VkOpticalFlowExecuteInfoNV *) pExecuteInfo__, pExecuteInfo);
#endif
    base->device->dispatch_table.CmdOpticalFlowExecuteNV(base->dispatch_handle, session__, pExecuteInfo__);

    return ;
}

static VKAPI_ATTR VkResult VKAPI_CALL
wrapper_tramp_GetDeviceFaultInfoEXT(
    VkDevice device,
    VkDeviceFaultCountsEXT* pFaultCounts,
    VkDeviceFaultInfoEXT* pFaultInfo)
{
    VK_FROM_HANDLE(wrapper_device, base, device);
    VkResult result = base->dispatch_table.GetDeviceFaultInfoEXT(base->dispatch_handle, pFaultCounts, pFaultInfo);
#ifdef NEEDS_UNWRAPPING_VkDeviceFaultCountsEXT
#warning TODO: Repack struct+ptr+out GetDeviceFaultInfoEXT EntrypointParam(type='VkDeviceFaultCountsEXT', name='pFaultCounts', decl='VkDeviceFaultCountsEXT* pFaultCounts', len=None, elem=<Element 'param' at 0x7368898537e0>, is_const=False, num_pointers=1)
#endif
#ifdef NEEDS_UNWRAPPING_VkDeviceFaultInfoEXT
#warning TODO: Repack struct+ptr+out GetDeviceFaultInfoEXT EntrypointParam(type='VkDeviceFaultInfoEXT', name='pFaultInfo', decl='VkDeviceFaultInfoEXT* pFaultInfo', len=None, elem=<Element 'param' at 0x7368898538d0>, is_const=False, num_pointers=1)
#endif
    return result;
}

static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_CmdSetDepthBias2EXT(
    VkCommandBuffer commandBuffer,
    const VkDepthBiasInfoEXT*         pDepthBiasInfo)
{
    VK_FROM_HANDLE(wrapper_command_buffer, base, commandBuffer);
const VkDepthBiasInfoEXT*         pDepthBiasInfo__ = pDepthBiasInfo;
#ifdef NEEDS_UNWRAPPING_VkDepthBiasInfoEXT
    VkDepthBiasInfoEXT _w_pDepthBiasInfo = { 0 };
    pDepthBiasInfo__ = &_w_pDepthBiasInfo;
    unwrap_VkDepthBiasInfoEXT(base->device, (VkDepthBiasInfoEXT *) pDepthBiasInfo__, pDepthBiasInfo);
#endif
    base->device->dispatch_table.CmdSetDepthBias2EXT(base->dispatch_handle, pDepthBiasInfo__);

    return ;
}

static VKAPI_ATTR VkResult VKAPI_CALL
wrapper_tramp_ReleaseSwapchainImagesEXT(
    VkDevice device,
    const VkReleaseSwapchainImagesInfoEXT* pReleaseInfo)
{
    VK_FROM_HANDLE(wrapper_device, base, device);
const VkReleaseSwapchainImagesInfoEXT* pReleaseInfo__ = pReleaseInfo;
#ifdef NEEDS_UNWRAPPING_VkReleaseSwapchainImagesInfoEXT
    VkReleaseSwapchainImagesInfoEXT _w_pReleaseInfo = { 0 };
    pReleaseInfo__ = &_w_pReleaseInfo;
    unwrap_VkReleaseSwapchainImagesInfoEXT(base, (VkReleaseSwapchainImagesInfoEXT *) pReleaseInfo__, pReleaseInfo);
#endif
    VkResult result = base->dispatch_table.ReleaseSwapchainImagesEXT(base->dispatch_handle, pReleaseInfo__);

    return result;
}

static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_GetDeviceImageSubresourceLayoutKHR(
    VkDevice device,
    const VkDeviceImageSubresourceInfoKHR* pInfo,
    VkSubresourceLayout2KHR* pLayout)
{
    VK_FROM_HANDLE(wrapper_device, base, device);
const VkDeviceImageSubresourceInfoKHR* pInfo__ = pInfo;
#ifdef NEEDS_UNWRAPPING_VkDeviceImageSubresourceInfoKHR
    VkDeviceImageSubresourceInfoKHR _w_pInfo = { 0 };
    pInfo__ = &_w_pInfo;
    unwrap_VkDeviceImageSubresourceInfoKHR(base, (VkDeviceImageSubresourceInfoKHR *) pInfo__, pInfo);
#endif
    base->dispatch_table.GetDeviceImageSubresourceLayoutKHR(base->dispatch_handle, pInfo__, pLayout);
#ifdef NEEDS_UNWRAPPING_VkSubresourceLayout2KHR
#warning TODO: Repack struct+ptr+out GetDeviceImageSubresourceLayoutKHR EntrypointParam(type='VkSubresourceLayout2KHR', name='pLayout', decl='VkSubresourceLayout2KHR* pLayout', len=None, elem=<Element 'param' at 0x73688985c4f0>, is_const=False, num_pointers=1)
#endif
    return ;
}

static VKAPI_ATTR VkResult VKAPI_CALL
wrapper_tramp_MapMemory2KHR(
    VkDevice device,
    const VkMemoryMapInfoKHR* pMemoryMapInfo,
    void** ppData)
{
    VK_FROM_HANDLE(wrapper_device, base, device);
const VkMemoryMapInfoKHR* pMemoryMapInfo__ = pMemoryMapInfo;
#ifdef NEEDS_UNWRAPPING_VkMemoryMapInfoKHR
    VkMemoryMapInfoKHR _w_pMemoryMapInfo = { 0 };
    pMemoryMapInfo__ = &_w_pMemoryMapInfo;
    unwrap_VkMemoryMapInfoKHR(base, (VkMemoryMapInfoKHR *) pMemoryMapInfo__, pMemoryMapInfo);
#endif
    VkResult result = base->dispatch_table.MapMemory2KHR(base->dispatch_handle, pMemoryMapInfo__, ppData);
#ifdef NEEDS_UNWRAPPING_void
#endif
    return result;
}

static VKAPI_ATTR VkResult VKAPI_CALL
wrapper_tramp_UnmapMemory2KHR(
    VkDevice device,
    const VkMemoryUnmapInfoKHR* pMemoryUnmapInfo)
{
    VK_FROM_HANDLE(wrapper_device, base, device);
const VkMemoryUnmapInfoKHR* pMemoryUnmapInfo__ = pMemoryUnmapInfo;
#ifdef NEEDS_UNWRAPPING_VkMemoryUnmapInfoKHR
    VkMemoryUnmapInfoKHR _w_pMemoryUnmapInfo = { 0 };
    pMemoryUnmapInfo__ = &_w_pMemoryUnmapInfo;
    unwrap_VkMemoryUnmapInfoKHR(base, (VkMemoryUnmapInfoKHR *) pMemoryUnmapInfo__, pMemoryUnmapInfo);
#endif
    VkResult result = base->dispatch_table.UnmapMemory2KHR(base->dispatch_handle, pMemoryUnmapInfo__);

    return result;
}

static VKAPI_ATTR VkResult VKAPI_CALL
wrapper_tramp_CreateShadersEXT(
    VkDevice device,
    uint32_t createInfoCount,
    const VkShaderCreateInfoEXT* pCreateInfos,
    const VkAllocationCallbacks* pAllocator,
    VkShaderEXT* pShaders)
{
    VK_FROM_HANDLE(wrapper_device, base, device);
uint32_t createInfoCount__ = createInfoCount;
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
const VkShaderCreateInfoEXT* pCreateInfos__ = pCreateInfos;
#ifdef NEEDS_UNWRAPPING_VkShaderCreateInfoEXT
    pCreateInfos__ = alloca(createInfoCount * sizeof(VkShaderCreateInfoEXT));
    for (int i = 0; i < createInfoCount; i++)
        unwrap_VkShaderCreateInfoEXT(base, (VkShaderCreateInfoEXT *) &pCreateInfos__[i], &pCreateInfos[i]);
#endif
const VkAllocationCallbacks* pAllocator__ = pAllocator;
#ifdef NEEDS_UNWRAPPING_VkAllocationCallbacks
    VkAllocationCallbacks _w_pAllocator = { 0 };
    pAllocator__ = &_w_pAllocator;
    unwrap_VkAllocationCallbacks(base, (VkAllocationCallbacks *) pAllocator__, pAllocator);
#endif
    VkResult result = base->dispatch_table.CreateShadersEXT(base->dispatch_handle, createInfoCount__, pCreateInfos__, pAllocator__, pShaders);
#ifdef NEEDS_UNWRAPPING_VkShaderEXT
#endif
    return result;
}

static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_DestroyShaderEXT(
    VkDevice device,
    VkShaderEXT shader,
    const VkAllocationCallbacks* pAllocator)
{
    VK_FROM_HANDLE(wrapper_device, base, device);
VkShaderEXT shader__ = shader;
#ifdef NEEDS_UNWRAPPING_VkShaderEXT
#endif
const VkAllocationCallbacks* pAllocator__ = pAllocator;
#ifdef NEEDS_UNWRAPPING_VkAllocationCallbacks
    VkAllocationCallbacks _w_pAllocator = { 0 };
    pAllocator__ = &_w_pAllocator;
    unwrap_VkAllocationCallbacks(base, (VkAllocationCallbacks *) pAllocator__, pAllocator);
#endif
    base->dispatch_table.DestroyShaderEXT(base->dispatch_handle, shader__, pAllocator__);

    return ;
}

static VKAPI_ATTR VkResult VKAPI_CALL
wrapper_tramp_GetShaderBinaryDataEXT(
    VkDevice device,
    VkShaderEXT shader,
    size_t* pDataSize,
    void* pData)
{
    VK_FROM_HANDLE(wrapper_device, base, device);
VkShaderEXT shader__ = shader;
#ifdef NEEDS_UNWRAPPING_VkShaderEXT
#endif
    VkResult result = base->dispatch_table.GetShaderBinaryDataEXT(base->dispatch_handle, shader__, pDataSize, pData);
#ifdef NEEDS_UNWRAPPING_size_t
#endif
#ifdef NEEDS_UNWRAPPING_void
#endif
    return result;
}

static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_CmdBindShadersEXT(
    VkCommandBuffer commandBuffer,
    uint32_t stageCount,
    const VkShaderStageFlagBits* pStages,
    const VkShaderEXT* pShaders)
{
    VK_FROM_HANDLE(wrapper_command_buffer, base, commandBuffer);
uint32_t stageCount__ = stageCount;
#ifdef NEEDS_UNWRAPPING_uint32_t
#endif
const VkShaderStageFlagBits* pStages__ = pStages;
#ifdef NEEDS_UNWRAPPING_VkShaderStageFlagBits
#endif
const VkShaderEXT* pShaders__ = pShaders;
#ifdef NEEDS_UNWRAPPING_VkShaderEXT
#endif
    base->device->dispatch_table.CmdBindShadersEXT(base->dispatch_handle, stageCount__, pStages__, pShaders__);

    return ;
}
#ifdef VK_USE_PLATFORM_SCREEN_QNX

static VKAPI_ATTR VkResult VKAPI_CALL
wrapper_tramp_GetScreenBufferPropertiesQNX(
    VkDevice device,
    const struct _screen_buffer* buffer,
    VkScreenBufferPropertiesQNX* pProperties)
{
    VK_FROM_HANDLE(wrapper_device, base, device);
const struct _screen_buffer* buffer__ = buffer;
#ifdef NEEDS_UNWRAPPING__screen_buffer
#endif
    VkResult result = base->dispatch_table.GetScreenBufferPropertiesQNX(base->dispatch_handle, buffer__, pProperties);
#ifdef NEEDS_UNWRAPPING_VkScreenBufferPropertiesQNX
#warning TODO: Repack struct+ptr+out GetScreenBufferPropertiesQNX EntrypointParam(type='VkScreenBufferPropertiesQNX', name='pProperties', decl='VkScreenBufferPropertiesQNX* pProperties', len=None, elem=<Element 'param' at 0x73688985e570>, is_const=False, num_pointers=1)
#endif
    return result;
}
#endif
    
static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_CmdBindDescriptorSets2KHR(
    VkCommandBuffer commandBuffer,
    const VkBindDescriptorSetsInfoKHR* pBindDescriptorSetsInfo)
{
    VK_FROM_HANDLE(wrapper_command_buffer, base, commandBuffer);
const VkBindDescriptorSetsInfoKHR* pBindDescriptorSetsInfo__ = pBindDescriptorSetsInfo;
#ifdef NEEDS_UNWRAPPING_VkBindDescriptorSetsInfoKHR
    VkBindDescriptorSetsInfoKHR _w_pBindDescriptorSetsInfo = { 0 };
    pBindDescriptorSetsInfo__ = &_w_pBindDescriptorSetsInfo;
    unwrap_VkBindDescriptorSetsInfoKHR(base->device, (VkBindDescriptorSetsInfoKHR *) pBindDescriptorSetsInfo__, pBindDescriptorSetsInfo);
#endif
    base->device->dispatch_table.CmdBindDescriptorSets2KHR(base->dispatch_handle, pBindDescriptorSetsInfo__);

    return ;
}

static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_CmdPushConstants2KHR(
    VkCommandBuffer commandBuffer,
    const VkPushConstantsInfoKHR* pPushConstantsInfo)
{
    VK_FROM_HANDLE(wrapper_command_buffer, base, commandBuffer);
const VkPushConstantsInfoKHR* pPushConstantsInfo__ = pPushConstantsInfo;
#ifdef NEEDS_UNWRAPPING_VkPushConstantsInfoKHR
    VkPushConstantsInfoKHR _w_pPushConstantsInfo = { 0 };
    pPushConstantsInfo__ = &_w_pPushConstantsInfo;
    unwrap_VkPushConstantsInfoKHR(base->device, (VkPushConstantsInfoKHR *) pPushConstantsInfo__, pPushConstantsInfo);
#endif
    base->device->dispatch_table.CmdPushConstants2KHR(base->dispatch_handle, pPushConstantsInfo__);

    return ;
}

static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_CmdPushDescriptorSet2KHR(
    VkCommandBuffer commandBuffer,
    const VkPushDescriptorSetInfoKHR* pPushDescriptorSetInfo)
{
    VK_FROM_HANDLE(wrapper_command_buffer, base, commandBuffer);
const VkPushDescriptorSetInfoKHR* pPushDescriptorSetInfo__ = pPushDescriptorSetInfo;
#ifdef NEEDS_UNWRAPPING_VkPushDescriptorSetInfoKHR
    VkPushDescriptorSetInfoKHR _w_pPushDescriptorSetInfo = { 0 };
    pPushDescriptorSetInfo__ = &_w_pPushDescriptorSetInfo;
    unwrap_VkPushDescriptorSetInfoKHR(base->device, (VkPushDescriptorSetInfoKHR *) pPushDescriptorSetInfo__, pPushDescriptorSetInfo);
#endif
    base->device->dispatch_table.CmdPushDescriptorSet2KHR(base->dispatch_handle, pPushDescriptorSetInfo__);

    return ;
}

static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_CmdPushDescriptorSetWithTemplate2KHR(
    VkCommandBuffer commandBuffer,
    const VkPushDescriptorSetWithTemplateInfoKHR* pPushDescriptorSetWithTemplateInfo)
{
    VK_FROM_HANDLE(wrapper_command_buffer, base, commandBuffer);
const VkPushDescriptorSetWithTemplateInfoKHR* pPushDescriptorSetWithTemplateInfo__ = pPushDescriptorSetWithTemplateInfo;
#ifdef NEEDS_UNWRAPPING_VkPushDescriptorSetWithTemplateInfoKHR
    VkPushDescriptorSetWithTemplateInfoKHR _w_pPushDescriptorSetWithTemplateInfo = { 0 };
    pPushDescriptorSetWithTemplateInfo__ = &_w_pPushDescriptorSetWithTemplateInfo;
    unwrap_VkPushDescriptorSetWithTemplateInfoKHR(base->device, (VkPushDescriptorSetWithTemplateInfoKHR *) pPushDescriptorSetWithTemplateInfo__, pPushDescriptorSetWithTemplateInfo);
#endif
    base->device->dispatch_table.CmdPushDescriptorSetWithTemplate2KHR(base->dispatch_handle, pPushDescriptorSetWithTemplateInfo__);

    return ;
}

static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_CmdSetDescriptorBufferOffsets2EXT(
    VkCommandBuffer commandBuffer,
    const VkSetDescriptorBufferOffsetsInfoEXT* pSetDescriptorBufferOffsetsInfo)
{
    VK_FROM_HANDLE(wrapper_command_buffer, base, commandBuffer);
const VkSetDescriptorBufferOffsetsInfoEXT* pSetDescriptorBufferOffsetsInfo__ = pSetDescriptorBufferOffsetsInfo;
#ifdef NEEDS_UNWRAPPING_VkSetDescriptorBufferOffsetsInfoEXT
    VkSetDescriptorBufferOffsetsInfoEXT _w_pSetDescriptorBufferOffsetsInfo = { 0 };
    pSetDescriptorBufferOffsetsInfo__ = &_w_pSetDescriptorBufferOffsetsInfo;
    unwrap_VkSetDescriptorBufferOffsetsInfoEXT(base->device, (VkSetDescriptorBufferOffsetsInfoEXT *) pSetDescriptorBufferOffsetsInfo__, pSetDescriptorBufferOffsetsInfo);
#endif
    base->device->dispatch_table.CmdSetDescriptorBufferOffsets2EXT(base->dispatch_handle, pSetDescriptorBufferOffsetsInfo__);

    return ;
}

static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_CmdBindDescriptorBufferEmbeddedSamplers2EXT(
    VkCommandBuffer commandBuffer,
    const VkBindDescriptorBufferEmbeddedSamplersInfoEXT* pBindDescriptorBufferEmbeddedSamplersInfo)
{
    VK_FROM_HANDLE(wrapper_command_buffer, base, commandBuffer);
const VkBindDescriptorBufferEmbeddedSamplersInfoEXT* pBindDescriptorBufferEmbeddedSamplersInfo__ = pBindDescriptorBufferEmbeddedSamplersInfo;
#ifdef NEEDS_UNWRAPPING_VkBindDescriptorBufferEmbeddedSamplersInfoEXT
    VkBindDescriptorBufferEmbeddedSamplersInfoEXT _w_pBindDescriptorBufferEmbeddedSamplersInfo = { 0 };
    pBindDescriptorBufferEmbeddedSamplersInfo__ = &_w_pBindDescriptorBufferEmbeddedSamplersInfo;
    unwrap_VkBindDescriptorBufferEmbeddedSamplersInfoEXT(base->device, (VkBindDescriptorBufferEmbeddedSamplersInfoEXT *) pBindDescriptorBufferEmbeddedSamplersInfo__, pBindDescriptorBufferEmbeddedSamplersInfo);
#endif
    base->device->dispatch_table.CmdBindDescriptorBufferEmbeddedSamplers2EXT(base->dispatch_handle, pBindDescriptorBufferEmbeddedSamplersInfo__);

    return ;
}

static VKAPI_ATTR VkResult VKAPI_CALL
wrapper_tramp_SetLatencySleepModeNV(
    VkDevice device,
    VkSwapchainKHR swapchain,
    const VkLatencySleepModeInfoNV* pSleepModeInfo)
{
    VK_FROM_HANDLE(wrapper_device, base, device);
VkSwapchainKHR swapchain__ = swapchain;
#ifdef NEEDS_UNWRAPPING_VkSwapchainKHR
#endif
const VkLatencySleepModeInfoNV* pSleepModeInfo__ = pSleepModeInfo;
#ifdef NEEDS_UNWRAPPING_VkLatencySleepModeInfoNV
    VkLatencySleepModeInfoNV _w_pSleepModeInfo = { 0 };
    pSleepModeInfo__ = &_w_pSleepModeInfo;
    unwrap_VkLatencySleepModeInfoNV(base, (VkLatencySleepModeInfoNV *) pSleepModeInfo__, pSleepModeInfo);
#endif
    VkResult result = base->dispatch_table.SetLatencySleepModeNV(base->dispatch_handle, swapchain__, pSleepModeInfo__);

    return result;
}

static VKAPI_ATTR VkResult VKAPI_CALL
wrapper_tramp_LatencySleepNV(
    VkDevice device,
    VkSwapchainKHR swapchain,
    const VkLatencySleepInfoNV* pSleepInfo)
{
    VK_FROM_HANDLE(wrapper_device, base, device);
VkSwapchainKHR swapchain__ = swapchain;
#ifdef NEEDS_UNWRAPPING_VkSwapchainKHR
#endif
const VkLatencySleepInfoNV* pSleepInfo__ = pSleepInfo;
#ifdef NEEDS_UNWRAPPING_VkLatencySleepInfoNV
    VkLatencySleepInfoNV _w_pSleepInfo = { 0 };
    pSleepInfo__ = &_w_pSleepInfo;
    unwrap_VkLatencySleepInfoNV(base, (VkLatencySleepInfoNV *) pSleepInfo__, pSleepInfo);
#endif
    VkResult result = base->dispatch_table.LatencySleepNV(base->dispatch_handle, swapchain__, pSleepInfo__);

    return result;
}

static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_SetLatencyMarkerNV(
    VkDevice device,
    VkSwapchainKHR swapchain,
    const VkSetLatencyMarkerInfoNV* pLatencyMarkerInfo)
{
    VK_FROM_HANDLE(wrapper_device, base, device);
VkSwapchainKHR swapchain__ = swapchain;
#ifdef NEEDS_UNWRAPPING_VkSwapchainKHR
#endif
const VkSetLatencyMarkerInfoNV* pLatencyMarkerInfo__ = pLatencyMarkerInfo;
#ifdef NEEDS_UNWRAPPING_VkSetLatencyMarkerInfoNV
    VkSetLatencyMarkerInfoNV _w_pLatencyMarkerInfo = { 0 };
    pLatencyMarkerInfo__ = &_w_pLatencyMarkerInfo;
    unwrap_VkSetLatencyMarkerInfoNV(base, (VkSetLatencyMarkerInfoNV *) pLatencyMarkerInfo__, pLatencyMarkerInfo);
#endif
    base->dispatch_table.SetLatencyMarkerNV(base->dispatch_handle, swapchain__, pLatencyMarkerInfo__);

    return ;
}

static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_GetLatencyTimingsNV(
    VkDevice device,
    VkSwapchainKHR swapchain,
    VkGetLatencyMarkerInfoNV* pLatencyMarkerInfo)
{
    VK_FROM_HANDLE(wrapper_device, base, device);
VkSwapchainKHR swapchain__ = swapchain;
#ifdef NEEDS_UNWRAPPING_VkSwapchainKHR
#endif
    base->dispatch_table.GetLatencyTimingsNV(base->dispatch_handle, swapchain__, pLatencyMarkerInfo);
#ifdef NEEDS_UNWRAPPING_VkGetLatencyMarkerInfoNV
#warning TODO: Repack struct+ptr+out GetLatencyTimingsNV EntrypointParam(type='VkGetLatencyMarkerInfoNV', name='pLatencyMarkerInfo', decl='VkGetLatencyMarkerInfoNV* pLatencyMarkerInfo', len=None, elem=<Element 'param' at 0x7368898677e0>, is_const=False, num_pointers=1)
#endif
    return ;
}

static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_QueueNotifyOutOfBandNV(
    VkQueue queue,
    const VkOutOfBandQueueTypeInfoNV* pQueueTypeInfo)
{
    VK_FROM_HANDLE(wrapper_queue, base, queue);
const VkOutOfBandQueueTypeInfoNV* pQueueTypeInfo__ = pQueueTypeInfo;
#ifdef NEEDS_UNWRAPPING_VkOutOfBandQueueTypeInfoNV
    VkOutOfBandQueueTypeInfoNV _w_pQueueTypeInfo = { 0 };
    pQueueTypeInfo__ = &_w_pQueueTypeInfo;
    unwrap_VkOutOfBandQueueTypeInfoNV(base->device, (VkOutOfBandQueueTypeInfoNV *) pQueueTypeInfo__, pQueueTypeInfo);
#endif
    base->device->dispatch_table.QueueNotifyOutOfBandNV(base->dispatch_handle, pQueueTypeInfo__);

    return ;
}

static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_CmdSetRenderingAttachmentLocationsKHR(
    VkCommandBuffer commandBuffer,
    const VkRenderingAttachmentLocationInfoKHR* pLocationInfo)
{
    VK_FROM_HANDLE(wrapper_command_buffer, base, commandBuffer);
const VkRenderingAttachmentLocationInfoKHR* pLocationInfo__ = pLocationInfo;
#ifdef NEEDS_UNWRAPPING_VkRenderingAttachmentLocationInfoKHR
    VkRenderingAttachmentLocationInfoKHR _w_pLocationInfo = { 0 };
    pLocationInfo__ = &_w_pLocationInfo;
    unwrap_VkRenderingAttachmentLocationInfoKHR(base->device, (VkRenderingAttachmentLocationInfoKHR *) pLocationInfo__, pLocationInfo);
#endif
    base->device->dispatch_table.CmdSetRenderingAttachmentLocationsKHR(base->dispatch_handle, pLocationInfo__);

    return ;
}

static VKAPI_ATTR void VKAPI_CALL
wrapper_tramp_CmdSetRenderingInputAttachmentIndicesKHR(
    VkCommandBuffer commandBuffer,
    const VkRenderingInputAttachmentIndexInfoKHR* pInputAttachmentIndexInfo)
{
    VK_FROM_HANDLE(wrapper_command_buffer, base, commandBuffer);
const VkRenderingInputAttachmentIndexInfoKHR* pInputAttachmentIndexInfo__ = pInputAttachmentIndexInfo;
#ifdef NEEDS_UNWRAPPING_VkRenderingInputAttachmentIndexInfoKHR
    VkRenderingInputAttachmentIndexInfoKHR _w_pInputAttachmentIndexInfo = { 0 };
    pInputAttachmentIndexInfo__ = &_w_pInputAttachmentIndexInfo;
    unwrap_VkRenderingInputAttachmentIndexInfoKHR(base->device, (VkRenderingInputAttachmentIndexInfoKHR *) pInputAttachmentIndexInfo__, pInputAttachmentIndexInfo);
#endif
    base->device->dispatch_table.CmdSetRenderingInputAttachmentIndicesKHR(base->dispatch_handle, pInputAttachmentIndexInfo__);

    return ;
}

struct vk_device_entrypoint_table wrapper_device_trampolines = {
                .GetDeviceProcAddr = wrapper_tramp_GetDeviceProcAddr,
                                    .DestroyDevice = wrapper_tramp_DestroyDevice,
                        .GetDeviceQueue = wrapper_tramp_GetDeviceQueue,
    .QueueSubmit = wrapper_tramp_QueueSubmit,
    .QueueWaitIdle = wrapper_tramp_QueueWaitIdle,
    .DeviceWaitIdle = wrapper_tramp_DeviceWaitIdle,
    .AllocateMemory = wrapper_tramp_AllocateMemory,
    .FreeMemory = wrapper_tramp_FreeMemory,
    .MapMemory = wrapper_tramp_MapMemory,
    .UnmapMemory = wrapper_tramp_UnmapMemory,
    .FlushMappedMemoryRanges = wrapper_tramp_FlushMappedMemoryRanges,
    .InvalidateMappedMemoryRanges = wrapper_tramp_InvalidateMappedMemoryRanges,
    .GetDeviceMemoryCommitment = wrapper_tramp_GetDeviceMemoryCommitment,
    .GetBufferMemoryRequirements = wrapper_tramp_GetBufferMemoryRequirements,
    .BindBufferMemory = wrapper_tramp_BindBufferMemory,
    .GetImageMemoryRequirements = wrapper_tramp_GetImageMemoryRequirements,
    .BindImageMemory = wrapper_tramp_BindImageMemory,
    .GetImageSparseMemoryRequirements = wrapper_tramp_GetImageSparseMemoryRequirements,
        .QueueBindSparse = wrapper_tramp_QueueBindSparse,
    .CreateFence = wrapper_tramp_CreateFence,
    .DestroyFence = wrapper_tramp_DestroyFence,
    .ResetFences = wrapper_tramp_ResetFences,
    .GetFenceStatus = wrapper_tramp_GetFenceStatus,
    .WaitForFences = wrapper_tramp_WaitForFences,
    .CreateSemaphore = wrapper_tramp_CreateSemaphore,
    .DestroySemaphore = wrapper_tramp_DestroySemaphore,
    .CreateEvent = wrapper_tramp_CreateEvent,
    .DestroyEvent = wrapper_tramp_DestroyEvent,
    .GetEventStatus = wrapper_tramp_GetEventStatus,
    .SetEvent = wrapper_tramp_SetEvent,
    .ResetEvent = wrapper_tramp_ResetEvent,
    .CreateQueryPool = wrapper_tramp_CreateQueryPool,
    .DestroyQueryPool = wrapper_tramp_DestroyQueryPool,
    .GetQueryPoolResults = wrapper_tramp_GetQueryPoolResults,
    .ResetQueryPool = wrapper_tramp_ResetQueryPool,
        .CreateBuffer = wrapper_tramp_CreateBuffer,
    .DestroyBuffer = wrapper_tramp_DestroyBuffer,
    .CreateBufferView = wrapper_tramp_CreateBufferView,
    .DestroyBufferView = wrapper_tramp_DestroyBufferView,
    .CreateImage = wrapper_tramp_CreateImage,
    .DestroyImage = wrapper_tramp_DestroyImage,
    .GetImageSubresourceLayout = wrapper_tramp_GetImageSubresourceLayout,
    .CreateImageView = wrapper_tramp_CreateImageView,
    .DestroyImageView = wrapper_tramp_DestroyImageView,
    .CreateShaderModule = wrapper_tramp_CreateShaderModule,
    .DestroyShaderModule = wrapper_tramp_DestroyShaderModule,
    .CreatePipelineCache = wrapper_tramp_CreatePipelineCache,
    .DestroyPipelineCache = wrapper_tramp_DestroyPipelineCache,
    .GetPipelineCacheData = wrapper_tramp_GetPipelineCacheData,
    .MergePipelineCaches = wrapper_tramp_MergePipelineCaches,
    .CreateGraphicsPipelines = wrapper_tramp_CreateGraphicsPipelines,
    .CreateComputePipelines = wrapper_tramp_CreateComputePipelines,
    .GetDeviceSubpassShadingMaxWorkgroupSizeHUAWEI = wrapper_tramp_GetDeviceSubpassShadingMaxWorkgroupSizeHUAWEI,
    .DestroyPipeline = wrapper_tramp_DestroyPipeline,
    .CreatePipelineLayout = wrapper_tramp_CreatePipelineLayout,
    .DestroyPipelineLayout = wrapper_tramp_DestroyPipelineLayout,
    .CreateSampler = wrapper_tramp_CreateSampler,
    .DestroySampler = wrapper_tramp_DestroySampler,
    .CreateDescriptorSetLayout = wrapper_tramp_CreateDescriptorSetLayout,
    .DestroyDescriptorSetLayout = wrapper_tramp_DestroyDescriptorSetLayout,
    .CreateDescriptorPool = wrapper_tramp_CreateDescriptorPool,
    .DestroyDescriptorPool = wrapper_tramp_DestroyDescriptorPool,
    .ResetDescriptorPool = wrapper_tramp_ResetDescriptorPool,
    .AllocateDescriptorSets = wrapper_tramp_AllocateDescriptorSets,
    .FreeDescriptorSets = wrapper_tramp_FreeDescriptorSets,
    .UpdateDescriptorSets = wrapper_tramp_UpdateDescriptorSets,
    .CreateFramebuffer = wrapper_tramp_CreateFramebuffer,
    .DestroyFramebuffer = wrapper_tramp_DestroyFramebuffer,
    .CreateRenderPass = wrapper_tramp_CreateRenderPass,
    .DestroyRenderPass = wrapper_tramp_DestroyRenderPass,
    .GetRenderAreaGranularity = wrapper_tramp_GetRenderAreaGranularity,
    .GetRenderingAreaGranularityKHR = wrapper_tramp_GetRenderingAreaGranularityKHR,
    .CreateCommandPool = wrapper_tramp_CreateCommandPool,
    .DestroyCommandPool = wrapper_tramp_DestroyCommandPool,
    .ResetCommandPool = wrapper_tramp_ResetCommandPool,
    .AllocateCommandBuffers = wrapper_tramp_AllocateCommandBuffers,
    .FreeCommandBuffers = wrapper_tramp_FreeCommandBuffers,
    .BeginCommandBuffer = wrapper_tramp_BeginCommandBuffer,
    .EndCommandBuffer = wrapper_tramp_EndCommandBuffer,
    .ResetCommandBuffer = wrapper_tramp_ResetCommandBuffer,
    .CmdBindPipeline = wrapper_tramp_CmdBindPipeline,
    .CmdSetAttachmentFeedbackLoopEnableEXT = wrapper_tramp_CmdSetAttachmentFeedbackLoopEnableEXT,
    .CmdSetViewport = wrapper_tramp_CmdSetViewport,
    .CmdSetScissor = wrapper_tramp_CmdSetScissor,
    .CmdSetLineWidth = wrapper_tramp_CmdSetLineWidth,
    .CmdSetDepthBias = wrapper_tramp_CmdSetDepthBias,
    .CmdSetBlendConstants = wrapper_tramp_CmdSetBlendConstants,
    .CmdSetDepthBounds = wrapper_tramp_CmdSetDepthBounds,
    .CmdSetStencilCompareMask = wrapper_tramp_CmdSetStencilCompareMask,
    .CmdSetStencilWriteMask = wrapper_tramp_CmdSetStencilWriteMask,
    .CmdSetStencilReference = wrapper_tramp_CmdSetStencilReference,
    .CmdBindDescriptorSets = wrapper_tramp_CmdBindDescriptorSets,
    .CmdBindIndexBuffer = wrapper_tramp_CmdBindIndexBuffer,
    .CmdBindVertexBuffers = wrapper_tramp_CmdBindVertexBuffers,
    .CmdDraw = wrapper_tramp_CmdDraw,
    .CmdDrawIndexed = wrapper_tramp_CmdDrawIndexed,
    .CmdDrawMultiEXT = wrapper_tramp_CmdDrawMultiEXT,
    .CmdDrawMultiIndexedEXT = wrapper_tramp_CmdDrawMultiIndexedEXT,
    .CmdDrawIndirect = wrapper_tramp_CmdDrawIndirect,
    .CmdDrawIndexedIndirect = wrapper_tramp_CmdDrawIndexedIndirect,
    .CmdDispatch = wrapper_tramp_CmdDispatch,
    .CmdDispatchIndirect = wrapper_tramp_CmdDispatchIndirect,
    .CmdSubpassShadingHUAWEI = wrapper_tramp_CmdSubpassShadingHUAWEI,
    .CmdDrawClusterHUAWEI = wrapper_tramp_CmdDrawClusterHUAWEI,
    .CmdDrawClusterIndirectHUAWEI = wrapper_tramp_CmdDrawClusterIndirectHUAWEI,
    .CmdUpdatePipelineIndirectBufferNV = wrapper_tramp_CmdUpdatePipelineIndirectBufferNV,
    .CmdCopyBuffer = wrapper_tramp_CmdCopyBuffer,
    .CmdCopyImage = wrapper_tramp_CmdCopyImage,
    .CmdBlitImage = wrapper_tramp_CmdBlitImage,
    .CmdCopyBufferToImage = wrapper_tramp_CmdCopyBufferToImage,
    .CmdCopyImageToBuffer = wrapper_tramp_CmdCopyImageToBuffer,
    .CmdCopyMemoryIndirectNV = wrapper_tramp_CmdCopyMemoryIndirectNV,
    .CmdCopyMemoryToImageIndirectNV = wrapper_tramp_CmdCopyMemoryToImageIndirectNV,
    .CmdUpdateBuffer = wrapper_tramp_CmdUpdateBuffer,
    .CmdFillBuffer = wrapper_tramp_CmdFillBuffer,
    .CmdClearColorImage = wrapper_tramp_CmdClearColorImage,
    .CmdClearDepthStencilImage = wrapper_tramp_CmdClearDepthStencilImage,
    .CmdClearAttachments = wrapper_tramp_CmdClearAttachments,
    .CmdResolveImage = wrapper_tramp_CmdResolveImage,
    .CmdSetEvent = wrapper_tramp_CmdSetEvent,
    .CmdResetEvent = wrapper_tramp_CmdResetEvent,
    .CmdWaitEvents = wrapper_tramp_CmdWaitEvents,
    .CmdPipelineBarrier = wrapper_tramp_CmdPipelineBarrier,
    .CmdBeginQuery = wrapper_tramp_CmdBeginQuery,
    .CmdEndQuery = wrapper_tramp_CmdEndQuery,
    .CmdBeginConditionalRenderingEXT = wrapper_tramp_CmdBeginConditionalRenderingEXT,
    .CmdEndConditionalRenderingEXT = wrapper_tramp_CmdEndConditionalRenderingEXT,
    .CmdResetQueryPool = wrapper_tramp_CmdResetQueryPool,
    .CmdWriteTimestamp = wrapper_tramp_CmdWriteTimestamp,
    .CmdCopyQueryPoolResults = wrapper_tramp_CmdCopyQueryPoolResults,
    .CmdPushConstants = wrapper_tramp_CmdPushConstants,
    .CmdBeginRenderPass = wrapper_tramp_CmdBeginRenderPass,
    .CmdNextSubpass = wrapper_tramp_CmdNextSubpass,
    .CmdEndRenderPass = wrapper_tramp_CmdEndRenderPass,
    .CmdExecuteCommands = wrapper_tramp_CmdExecuteCommands,
                                    .CreateSharedSwapchainsKHR = wrapper_tramp_CreateSharedSwapchainsKHR,
                        .CreateSwapchainKHR = wrapper_tramp_CreateSwapchainKHR,
    .DestroySwapchainKHR = wrapper_tramp_DestroySwapchainKHR,
    .GetSwapchainImagesKHR = wrapper_tramp_GetSwapchainImagesKHR,
    .AcquireNextImageKHR = wrapper_tramp_AcquireNextImageKHR,
    .QueuePresentKHR = wrapper_tramp_QueuePresentKHR,
                                                                            .DebugMarkerSetObjectNameEXT = wrapper_tramp_DebugMarkerSetObjectNameEXT,
    .DebugMarkerSetObjectTagEXT = wrapper_tramp_DebugMarkerSetObjectTagEXT,
    .CmdDebugMarkerBeginEXT = wrapper_tramp_CmdDebugMarkerBeginEXT,
    .CmdDebugMarkerEndEXT = wrapper_tramp_CmdDebugMarkerEndEXT,
    .CmdDebugMarkerInsertEXT = wrapper_tramp_CmdDebugMarkerInsertEXT,
    #ifdef VK_USE_PLATFORM_WIN32_KHR
    .GetMemoryWin32HandleNV = wrapper_tramp_GetMemoryWin32HandleNV,
#endif
    .CmdExecuteGeneratedCommandsNV = wrapper_tramp_CmdExecuteGeneratedCommandsNV,
    .CmdPreprocessGeneratedCommandsNV = wrapper_tramp_CmdPreprocessGeneratedCommandsNV,
    .CmdBindPipelineShaderGroupNV = wrapper_tramp_CmdBindPipelineShaderGroupNV,
    .GetGeneratedCommandsMemoryRequirementsNV = wrapper_tramp_GetGeneratedCommandsMemoryRequirementsNV,
    .CreateIndirectCommandsLayoutNV = wrapper_tramp_CreateIndirectCommandsLayoutNV,
    .DestroyIndirectCommandsLayoutNV = wrapper_tramp_DestroyIndirectCommandsLayoutNV,
                                                            .CmdPushDescriptorSetKHR = wrapper_tramp_CmdPushDescriptorSetKHR,
    .TrimCommandPool = wrapper_tramp_TrimCommandPool,
            #ifdef VK_USE_PLATFORM_WIN32_KHR
    .GetMemoryWin32HandleKHR = wrapper_tramp_GetMemoryWin32HandleKHR,
#endif
#ifdef VK_USE_PLATFORM_WIN32_KHR
    .GetMemoryWin32HandlePropertiesKHR = wrapper_tramp_GetMemoryWin32HandlePropertiesKHR,
#endif
    .GetMemoryFdKHR = wrapper_tramp_GetMemoryFdKHR,
    .GetMemoryFdPropertiesKHR = wrapper_tramp_GetMemoryFdPropertiesKHR,
#ifdef VK_USE_PLATFORM_FUCHSIA
    .GetMemoryZirconHandleFUCHSIA = wrapper_tramp_GetMemoryZirconHandleFUCHSIA,
#endif
#ifdef VK_USE_PLATFORM_FUCHSIA
    .GetMemoryZirconHandlePropertiesFUCHSIA = wrapper_tramp_GetMemoryZirconHandlePropertiesFUCHSIA,
#endif
    .GetMemoryRemoteAddressNV = wrapper_tramp_GetMemoryRemoteAddressNV,
        #ifdef VK_USE_PLATFORM_WIN32_KHR
    .GetSemaphoreWin32HandleKHR = wrapper_tramp_GetSemaphoreWin32HandleKHR,
#endif
#ifdef VK_USE_PLATFORM_WIN32_KHR
    .ImportSemaphoreWin32HandleKHR = wrapper_tramp_ImportSemaphoreWin32HandleKHR,
#endif
    .GetSemaphoreFdKHR = wrapper_tramp_GetSemaphoreFdKHR,
    .ImportSemaphoreFdKHR = wrapper_tramp_ImportSemaphoreFdKHR,
#ifdef VK_USE_PLATFORM_FUCHSIA
    .GetSemaphoreZirconHandleFUCHSIA = wrapper_tramp_GetSemaphoreZirconHandleFUCHSIA,
#endif
#ifdef VK_USE_PLATFORM_FUCHSIA
    .ImportSemaphoreZirconHandleFUCHSIA = wrapper_tramp_ImportSemaphoreZirconHandleFUCHSIA,
#endif
        #ifdef VK_USE_PLATFORM_WIN32_KHR
    .GetFenceWin32HandleKHR = wrapper_tramp_GetFenceWin32HandleKHR,
#endif
#ifdef VK_USE_PLATFORM_WIN32_KHR
    .ImportFenceWin32HandleKHR = wrapper_tramp_ImportFenceWin32HandleKHR,
#endif
    .GetFenceFdKHR = wrapper_tramp_GetFenceFdKHR,
    .ImportFenceFdKHR = wrapper_tramp_ImportFenceFdKHR,
                        .DisplayPowerControlEXT = wrapper_tramp_DisplayPowerControlEXT,
    .RegisterDeviceEventEXT = wrapper_tramp_RegisterDeviceEventEXT,
    .RegisterDisplayEventEXT = wrapper_tramp_RegisterDisplayEventEXT,
    .GetSwapchainCounterEXT = wrapper_tramp_GetSwapchainCounterEXT,
                .GetDeviceGroupPeerMemoryFeatures = wrapper_tramp_GetDeviceGroupPeerMemoryFeatures,
        .BindBufferMemory2 = wrapper_tramp_BindBufferMemory2,
        .BindImageMemory2 = wrapper_tramp_BindImageMemory2,
        .CmdSetDeviceMask = wrapper_tramp_CmdSetDeviceMask,
        .GetDeviceGroupPresentCapabilitiesKHR = wrapper_tramp_GetDeviceGroupPresentCapabilitiesKHR,
    .GetDeviceGroupSurfacePresentModesKHR = wrapper_tramp_GetDeviceGroupSurfacePresentModesKHR,
    .AcquireNextImage2KHR = wrapper_tramp_AcquireNextImage2KHR,
    .CmdDispatchBase = wrapper_tramp_CmdDispatchBase,
            .CreateDescriptorUpdateTemplate = wrapper_tramp_CreateDescriptorUpdateTemplate,
        .DestroyDescriptorUpdateTemplate = wrapper_tramp_DestroyDescriptorUpdateTemplate,
        .UpdateDescriptorSetWithTemplate = wrapper_tramp_UpdateDescriptorSetWithTemplate,
        .CmdPushDescriptorSetWithTemplateKHR = wrapper_tramp_CmdPushDescriptorSetWithTemplateKHR,
    .SetHdrMetadataEXT = wrapper_tramp_SetHdrMetadataEXT,
    .GetSwapchainStatusKHR = wrapper_tramp_GetSwapchainStatusKHR,
    .GetRefreshCycleDurationGOOGLE = wrapper_tramp_GetRefreshCycleDurationGOOGLE,
    .GetPastPresentationTimingGOOGLE = wrapper_tramp_GetPastPresentationTimingGOOGLE,
                .CmdSetViewportWScalingNV = wrapper_tramp_CmdSetViewportWScalingNV,
    .CmdSetDiscardRectangleEXT = wrapper_tramp_CmdSetDiscardRectangleEXT,
    .CmdSetDiscardRectangleEnableEXT = wrapper_tramp_CmdSetDiscardRectangleEnableEXT,
    .CmdSetDiscardRectangleModeEXT = wrapper_tramp_CmdSetDiscardRectangleModeEXT,
    .CmdSetSampleLocationsEXT = wrapper_tramp_CmdSetSampleLocationsEXT,
                                .GetBufferMemoryRequirements2 = wrapper_tramp_GetBufferMemoryRequirements2,
        .GetImageMemoryRequirements2 = wrapper_tramp_GetImageMemoryRequirements2,
        .GetImageSparseMemoryRequirements2 = wrapper_tramp_GetImageSparseMemoryRequirements2,
        .GetDeviceBufferMemoryRequirements = wrapper_tramp_GetDeviceBufferMemoryRequirements,
        .GetDeviceImageMemoryRequirements = wrapper_tramp_GetDeviceImageMemoryRequirements,
        .GetDeviceImageSparseMemoryRequirements = wrapper_tramp_GetDeviceImageSparseMemoryRequirements,
        .CreateSamplerYcbcrConversion = wrapper_tramp_CreateSamplerYcbcrConversion,
        .DestroySamplerYcbcrConversion = wrapper_tramp_DestroySamplerYcbcrConversion,
        .GetDeviceQueue2 = wrapper_tramp_GetDeviceQueue2,
    .CreateValidationCacheEXT = wrapper_tramp_CreateValidationCacheEXT,
    .DestroyValidationCacheEXT = wrapper_tramp_DestroyValidationCacheEXT,
    .GetValidationCacheDataEXT = wrapper_tramp_GetValidationCacheDataEXT,
    .MergeValidationCachesEXT = wrapper_tramp_MergeValidationCachesEXT,
    .GetDescriptorSetLayoutSupport = wrapper_tramp_GetDescriptorSetLayoutSupport,
    #ifdef VK_USE_PLATFORM_ANDROID_KHR
    .GetSwapchainGrallocUsageANDROID = wrapper_tramp_GetSwapchainGrallocUsageANDROID,
#endif
#ifdef VK_USE_PLATFORM_ANDROID_KHR
    .GetSwapchainGrallocUsage2ANDROID = wrapper_tramp_GetSwapchainGrallocUsage2ANDROID,
#endif
#ifdef VK_USE_PLATFORM_ANDROID_KHR
    .AcquireImageANDROID = wrapper_tramp_AcquireImageANDROID,
#endif
#ifdef VK_USE_PLATFORM_ANDROID_KHR
    .QueueSignalReleaseImageANDROID = wrapper_tramp_QueueSignalReleaseImageANDROID,
#endif
    .GetShaderInfoAMD = wrapper_tramp_GetShaderInfoAMD,
    .SetLocalDimmingAMD = wrapper_tramp_SetLocalDimmingAMD,
            .GetCalibratedTimestampsKHR = wrapper_tramp_GetCalibratedTimestampsKHR,
        .SetDebugUtilsObjectNameEXT = wrapper_tramp_SetDebugUtilsObjectNameEXT,
    .SetDebugUtilsObjectTagEXT = wrapper_tramp_SetDebugUtilsObjectTagEXT,
    .QueueBeginDebugUtilsLabelEXT = wrapper_tramp_QueueBeginDebugUtilsLabelEXT,
    .QueueEndDebugUtilsLabelEXT = wrapper_tramp_QueueEndDebugUtilsLabelEXT,
    .QueueInsertDebugUtilsLabelEXT = wrapper_tramp_QueueInsertDebugUtilsLabelEXT,
    .CmdBeginDebugUtilsLabelEXT = wrapper_tramp_CmdBeginDebugUtilsLabelEXT,
    .CmdEndDebugUtilsLabelEXT = wrapper_tramp_CmdEndDebugUtilsLabelEXT,
    .CmdInsertDebugUtilsLabelEXT = wrapper_tramp_CmdInsertDebugUtilsLabelEXT,
                .GetMemoryHostPointerPropertiesEXT = wrapper_tramp_GetMemoryHostPointerPropertiesEXT,
    .CmdWriteBufferMarkerAMD = wrapper_tramp_CmdWriteBufferMarkerAMD,
    .CreateRenderPass2 = wrapper_tramp_CreateRenderPass2,
        .CmdBeginRenderPass2 = wrapper_tramp_CmdBeginRenderPass2,
        .CmdNextSubpass2 = wrapper_tramp_CmdNextSubpass2,
        .CmdEndRenderPass2 = wrapper_tramp_CmdEndRenderPass2,
        .GetSemaphoreCounterValue = wrapper_tramp_GetSemaphoreCounterValue,
        .WaitSemaphores = wrapper_tramp_WaitSemaphores,
        .SignalSemaphore = wrapper_tramp_SignalSemaphore,
    #ifdef VK_USE_PLATFORM_ANDROID_KHR
    .GetAndroidHardwareBufferPropertiesANDROID = wrapper_tramp_GetAndroidHardwareBufferPropertiesANDROID,
#endif
#ifdef VK_USE_PLATFORM_ANDROID_KHR
    .GetMemoryAndroidHardwareBufferANDROID = wrapper_tramp_GetMemoryAndroidHardwareBufferANDROID,
#endif
    .CmdDrawIndirectCount = wrapper_tramp_CmdDrawIndirectCount,
            .CmdDrawIndexedIndirectCount = wrapper_tramp_CmdDrawIndexedIndirectCount,
            .CmdSetCheckpointNV = wrapper_tramp_CmdSetCheckpointNV,
    .GetQueueCheckpointDataNV = wrapper_tramp_GetQueueCheckpointDataNV,
    .CmdBindTransformFeedbackBuffersEXT = wrapper_tramp_CmdBindTransformFeedbackBuffersEXT,
    .CmdBeginTransformFeedbackEXT = wrapper_tramp_CmdBeginTransformFeedbackEXT,
    .CmdEndTransformFeedbackEXT = wrapper_tramp_CmdEndTransformFeedbackEXT,
    .CmdBeginQueryIndexedEXT = wrapper_tramp_CmdBeginQueryIndexedEXT,
    .CmdEndQueryIndexedEXT = wrapper_tramp_CmdEndQueryIndexedEXT,
    .CmdDrawIndirectByteCountEXT = wrapper_tramp_CmdDrawIndirectByteCountEXT,
    .CmdSetExclusiveScissorNV = wrapper_tramp_CmdSetExclusiveScissorNV,
    .CmdSetExclusiveScissorEnableNV = wrapper_tramp_CmdSetExclusiveScissorEnableNV,
    .CmdBindShadingRateImageNV = wrapper_tramp_CmdBindShadingRateImageNV,
    .CmdSetViewportShadingRatePaletteNV = wrapper_tramp_CmdSetViewportShadingRatePaletteNV,
    .CmdSetCoarseSampleOrderNV = wrapper_tramp_CmdSetCoarseSampleOrderNV,
    .CmdDrawMeshTasksNV = wrapper_tramp_CmdDrawMeshTasksNV,
    .CmdDrawMeshTasksIndirectNV = wrapper_tramp_CmdDrawMeshTasksIndirectNV,
    .CmdDrawMeshTasksIndirectCountNV = wrapper_tramp_CmdDrawMeshTasksIndirectCountNV,
    .CmdDrawMeshTasksEXT = wrapper_tramp_CmdDrawMeshTasksEXT,
    .CmdDrawMeshTasksIndirectEXT = wrapper_tramp_CmdDrawMeshTasksIndirectEXT,
    .CmdDrawMeshTasksIndirectCountEXT = wrapper_tramp_CmdDrawMeshTasksIndirectCountEXT,
    .CompileDeferredNV = wrapper_tramp_CompileDeferredNV,
    .CreateAccelerationStructureNV = wrapper_tramp_CreateAccelerationStructureNV,
    .CmdBindInvocationMaskHUAWEI = wrapper_tramp_CmdBindInvocationMaskHUAWEI,
    .DestroyAccelerationStructureKHR = wrapper_tramp_DestroyAccelerationStructureKHR,
    .DestroyAccelerationStructureNV = wrapper_tramp_DestroyAccelerationStructureNV,
    .GetAccelerationStructureMemoryRequirementsNV = wrapper_tramp_GetAccelerationStructureMemoryRequirementsNV,
    .BindAccelerationStructureMemoryNV = wrapper_tramp_BindAccelerationStructureMemoryNV,
    .CmdCopyAccelerationStructureNV = wrapper_tramp_CmdCopyAccelerationStructureNV,
    .CmdCopyAccelerationStructureKHR = wrapper_tramp_CmdCopyAccelerationStructureKHR,
    .CopyAccelerationStructureKHR = wrapper_tramp_CopyAccelerationStructureKHR,
    .CmdCopyAccelerationStructureToMemoryKHR = wrapper_tramp_CmdCopyAccelerationStructureToMemoryKHR,
    .CopyAccelerationStructureToMemoryKHR = wrapper_tramp_CopyAccelerationStructureToMemoryKHR,
    .CmdCopyMemoryToAccelerationStructureKHR = wrapper_tramp_CmdCopyMemoryToAccelerationStructureKHR,
    .CopyMemoryToAccelerationStructureKHR = wrapper_tramp_CopyMemoryToAccelerationStructureKHR,
    .CmdWriteAccelerationStructuresPropertiesKHR = wrapper_tramp_CmdWriteAccelerationStructuresPropertiesKHR,
    .CmdWriteAccelerationStructuresPropertiesNV = wrapper_tramp_CmdWriteAccelerationStructuresPropertiesNV,
    .CmdBuildAccelerationStructureNV = wrapper_tramp_CmdBuildAccelerationStructureNV,
    .WriteAccelerationStructuresPropertiesKHR = wrapper_tramp_WriteAccelerationStructuresPropertiesKHR,
    .CmdTraceRaysKHR = wrapper_tramp_CmdTraceRaysKHR,
    .CmdTraceRaysNV = wrapper_tramp_CmdTraceRaysNV,
    .GetRayTracingShaderGroupHandlesKHR = wrapper_tramp_GetRayTracingShaderGroupHandlesKHR,
        .GetRayTracingCaptureReplayShaderGroupHandlesKHR = wrapper_tramp_GetRayTracingCaptureReplayShaderGroupHandlesKHR,
    .GetAccelerationStructureHandleNV = wrapper_tramp_GetAccelerationStructureHandleNV,
    .CreateRayTracingPipelinesNV = wrapper_tramp_CreateRayTracingPipelinesNV,
    .CreateRayTracingPipelinesKHR = wrapper_tramp_CreateRayTracingPipelinesKHR,
        .CmdTraceRaysIndirectKHR = wrapper_tramp_CmdTraceRaysIndirectKHR,
    .CmdTraceRaysIndirect2KHR = wrapper_tramp_CmdTraceRaysIndirect2KHR,
    .GetDeviceAccelerationStructureCompatibilityKHR = wrapper_tramp_GetDeviceAccelerationStructureCompatibilityKHR,
    .GetRayTracingShaderGroupStackSizeKHR = wrapper_tramp_GetRayTracingShaderGroupStackSizeKHR,
    .CmdSetRayTracingPipelineStackSizeKHR = wrapper_tramp_CmdSetRayTracingPipelineStackSizeKHR,
    .GetImageViewHandleNVX = wrapper_tramp_GetImageViewHandleNVX,
    .GetImageViewAddressNVX = wrapper_tramp_GetImageViewAddressNVX,
    #ifdef VK_USE_PLATFORM_WIN32_KHR
    .GetDeviceGroupSurfacePresentModes2EXT = wrapper_tramp_GetDeviceGroupSurfacePresentModes2EXT,
#endif
#ifdef VK_USE_PLATFORM_WIN32_KHR
    .AcquireFullScreenExclusiveModeEXT = wrapper_tramp_AcquireFullScreenExclusiveModeEXT,
#endif
#ifdef VK_USE_PLATFORM_WIN32_KHR
    .ReleaseFullScreenExclusiveModeEXT = wrapper_tramp_ReleaseFullScreenExclusiveModeEXT,
#endif
            .AcquireProfilingLockKHR = wrapper_tramp_AcquireProfilingLockKHR,
    .ReleaseProfilingLockKHR = wrapper_tramp_ReleaseProfilingLockKHR,
    .GetImageDrmFormatModifierPropertiesEXT = wrapper_tramp_GetImageDrmFormatModifierPropertiesEXT,
    .GetBufferOpaqueCaptureAddress = wrapper_tramp_GetBufferOpaqueCaptureAddress,
        .GetBufferDeviceAddress = wrapper_tramp_GetBufferDeviceAddress,
                    .InitializePerformanceApiINTEL = wrapper_tramp_InitializePerformanceApiINTEL,
    .UninitializePerformanceApiINTEL = wrapper_tramp_UninitializePerformanceApiINTEL,
    .CmdSetPerformanceMarkerINTEL = wrapper_tramp_CmdSetPerformanceMarkerINTEL,
    .CmdSetPerformanceStreamMarkerINTEL = wrapper_tramp_CmdSetPerformanceStreamMarkerINTEL,
    .CmdSetPerformanceOverrideINTEL = wrapper_tramp_CmdSetPerformanceOverrideINTEL,
    .AcquirePerformanceConfigurationINTEL = wrapper_tramp_AcquirePerformanceConfigurationINTEL,
    .ReleasePerformanceConfigurationINTEL = wrapper_tramp_ReleasePerformanceConfigurationINTEL,
    .QueueSetPerformanceConfigurationINTEL = wrapper_tramp_QueueSetPerformanceConfigurationINTEL,
    .GetPerformanceParameterINTEL = wrapper_tramp_GetPerformanceParameterINTEL,
    .GetDeviceMemoryOpaqueCaptureAddress = wrapper_tramp_GetDeviceMemoryOpaqueCaptureAddress,
        .GetPipelineExecutablePropertiesKHR = wrapper_tramp_GetPipelineExecutablePropertiesKHR,
    .GetPipelineExecutableStatisticsKHR = wrapper_tramp_GetPipelineExecutableStatisticsKHR,
    .GetPipelineExecutableInternalRepresentationsKHR = wrapper_tramp_GetPipelineExecutableInternalRepresentationsKHR,
    .CmdSetLineStippleKHR = wrapper_tramp_CmdSetLineStippleKHR,
                .CreateAccelerationStructureKHR = wrapper_tramp_CreateAccelerationStructureKHR,
    .CmdBuildAccelerationStructuresKHR = wrapper_tramp_CmdBuildAccelerationStructuresKHR,
    .CmdBuildAccelerationStructuresIndirectKHR = wrapper_tramp_CmdBuildAccelerationStructuresIndirectKHR,
    .BuildAccelerationStructuresKHR = wrapper_tramp_BuildAccelerationStructuresKHR,
    .GetAccelerationStructureDeviceAddressKHR = wrapper_tramp_GetAccelerationStructureDeviceAddressKHR,
    .CreateDeferredOperationKHR = wrapper_tramp_CreateDeferredOperationKHR,
    .DestroyDeferredOperationKHR = wrapper_tramp_DestroyDeferredOperationKHR,
    .GetDeferredOperationMaxConcurrencyKHR = wrapper_tramp_GetDeferredOperationMaxConcurrencyKHR,
    .GetDeferredOperationResultKHR = wrapper_tramp_GetDeferredOperationResultKHR,
    .DeferredOperationJoinKHR = wrapper_tramp_DeferredOperationJoinKHR,
    .GetPipelineIndirectMemoryRequirementsNV = wrapper_tramp_GetPipelineIndirectMemoryRequirementsNV,
    .GetPipelineIndirectDeviceAddressNV = wrapper_tramp_GetPipelineIndirectDeviceAddressNV,
    .CmdSetCullMode = wrapper_tramp_CmdSetCullMode,
        .CmdSetFrontFace = wrapper_tramp_CmdSetFrontFace,
        .CmdSetPrimitiveTopology = wrapper_tramp_CmdSetPrimitiveTopology,
        .CmdSetViewportWithCount = wrapper_tramp_CmdSetViewportWithCount,
        .CmdSetScissorWithCount = wrapper_tramp_CmdSetScissorWithCount,
        .CmdBindIndexBuffer2KHR = wrapper_tramp_CmdBindIndexBuffer2KHR,
    .CmdBindVertexBuffers2 = wrapper_tramp_CmdBindVertexBuffers2,
        .CmdSetDepthTestEnable = wrapper_tramp_CmdSetDepthTestEnable,
        .CmdSetDepthWriteEnable = wrapper_tramp_CmdSetDepthWriteEnable,
        .CmdSetDepthCompareOp = wrapper_tramp_CmdSetDepthCompareOp,
        .CmdSetDepthBoundsTestEnable = wrapper_tramp_CmdSetDepthBoundsTestEnable,
        .CmdSetStencilTestEnable = wrapper_tramp_CmdSetStencilTestEnable,
        .CmdSetStencilOp = wrapper_tramp_CmdSetStencilOp,
        .CmdSetPatchControlPointsEXT = wrapper_tramp_CmdSetPatchControlPointsEXT,
    .CmdSetRasterizerDiscardEnable = wrapper_tramp_CmdSetRasterizerDiscardEnable,
        .CmdSetDepthBiasEnable = wrapper_tramp_CmdSetDepthBiasEnable,
        .CmdSetLogicOpEXT = wrapper_tramp_CmdSetLogicOpEXT,
    .CmdSetPrimitiveRestartEnable = wrapper_tramp_CmdSetPrimitiveRestartEnable,
        .CmdSetTessellationDomainOriginEXT = wrapper_tramp_CmdSetTessellationDomainOriginEXT,
    .CmdSetDepthClampEnableEXT = wrapper_tramp_CmdSetDepthClampEnableEXT,
    .CmdSetPolygonModeEXT = wrapper_tramp_CmdSetPolygonModeEXT,
    .CmdSetRasterizationSamplesEXT = wrapper_tramp_CmdSetRasterizationSamplesEXT,
    .CmdSetSampleMaskEXT = wrapper_tramp_CmdSetSampleMaskEXT,
    .CmdSetAlphaToCoverageEnableEXT = wrapper_tramp_CmdSetAlphaToCoverageEnableEXT,
    .CmdSetAlphaToOneEnableEXT = wrapper_tramp_CmdSetAlphaToOneEnableEXT,
    .CmdSetLogicOpEnableEXT = wrapper_tramp_CmdSetLogicOpEnableEXT,
    .CmdSetColorBlendEnableEXT = wrapper_tramp_CmdSetColorBlendEnableEXT,
    .CmdSetColorBlendEquationEXT = wrapper_tramp_CmdSetColorBlendEquationEXT,
    .CmdSetColorWriteMaskEXT = wrapper_tramp_CmdSetColorWriteMaskEXT,
    .CmdSetRasterizationStreamEXT = wrapper_tramp_CmdSetRasterizationStreamEXT,
    .CmdSetConservativeRasterizationModeEXT = wrapper_tramp_CmdSetConservativeRasterizationModeEXT,
    .CmdSetExtraPrimitiveOverestimationSizeEXT = wrapper_tramp_CmdSetExtraPrimitiveOverestimationSizeEXT,
    .CmdSetDepthClipEnableEXT = wrapper_tramp_CmdSetDepthClipEnableEXT,
    .CmdSetSampleLocationsEnableEXT = wrapper_tramp_CmdSetSampleLocationsEnableEXT,
    .CmdSetColorBlendAdvancedEXT = wrapper_tramp_CmdSetColorBlendAdvancedEXT,
    .CmdSetProvokingVertexModeEXT = wrapper_tramp_CmdSetProvokingVertexModeEXT,
    .CmdSetLineRasterizationModeEXT = wrapper_tramp_CmdSetLineRasterizationModeEXT,
    .CmdSetLineStippleEnableEXT = wrapper_tramp_CmdSetLineStippleEnableEXT,
    .CmdSetDepthClipNegativeOneToOneEXT = wrapper_tramp_CmdSetDepthClipNegativeOneToOneEXT,
    .CmdSetViewportWScalingEnableNV = wrapper_tramp_CmdSetViewportWScalingEnableNV,
    .CmdSetViewportSwizzleNV = wrapper_tramp_CmdSetViewportSwizzleNV,
    .CmdSetCoverageToColorEnableNV = wrapper_tramp_CmdSetCoverageToColorEnableNV,
    .CmdSetCoverageToColorLocationNV = wrapper_tramp_CmdSetCoverageToColorLocationNV,
    .CmdSetCoverageModulationModeNV = wrapper_tramp_CmdSetCoverageModulationModeNV,
    .CmdSetCoverageModulationTableEnableNV = wrapper_tramp_CmdSetCoverageModulationTableEnableNV,
    .CmdSetCoverageModulationTableNV = wrapper_tramp_CmdSetCoverageModulationTableNV,
    .CmdSetShadingRateImageEnableNV = wrapper_tramp_CmdSetShadingRateImageEnableNV,
    .CmdSetCoverageReductionModeNV = wrapper_tramp_CmdSetCoverageReductionModeNV,
    .CmdSetRepresentativeFragmentTestEnableNV = wrapper_tramp_CmdSetRepresentativeFragmentTestEnableNV,
    .CreatePrivateDataSlot = wrapper_tramp_CreatePrivateDataSlot,
        .DestroyPrivateDataSlot = wrapper_tramp_DestroyPrivateDataSlot,
        .SetPrivateData = wrapper_tramp_SetPrivateData,
        .GetPrivateData = wrapper_tramp_GetPrivateData,
        .CmdCopyBuffer2 = wrapper_tramp_CmdCopyBuffer2,
        .CmdCopyImage2 = wrapper_tramp_CmdCopyImage2,
        .CmdBlitImage2 = wrapper_tramp_CmdBlitImage2,
        .CmdCopyBufferToImage2 = wrapper_tramp_CmdCopyBufferToImage2,
        .CmdCopyImageToBuffer2 = wrapper_tramp_CmdCopyImageToBuffer2,
        .CmdResolveImage2 = wrapper_tramp_CmdResolveImage2,
        .CmdSetFragmentShadingRateKHR = wrapper_tramp_CmdSetFragmentShadingRateKHR,
        .CmdSetFragmentShadingRateEnumNV = wrapper_tramp_CmdSetFragmentShadingRateEnumNV,
    .GetAccelerationStructureBuildSizesKHR = wrapper_tramp_GetAccelerationStructureBuildSizesKHR,
    .CmdSetVertexInputEXT = wrapper_tramp_CmdSetVertexInputEXT,
    .CmdSetColorWriteEnableEXT = wrapper_tramp_CmdSetColorWriteEnableEXT,
    .CmdSetEvent2 = wrapper_tramp_CmdSetEvent2,
        .CmdResetEvent2 = wrapper_tramp_CmdResetEvent2,
        .CmdWaitEvents2 = wrapper_tramp_CmdWaitEvents2,
        .CmdPipelineBarrier2 = wrapper_tramp_CmdPipelineBarrier2,
        .QueueSubmit2 = wrapper_tramp_QueueSubmit2,
        .CmdWriteTimestamp2 = wrapper_tramp_CmdWriteTimestamp2,
        .CmdWriteBufferMarker2AMD = wrapper_tramp_CmdWriteBufferMarker2AMD,
    .GetQueueCheckpointData2NV = wrapper_tramp_GetQueueCheckpointData2NV,
    .CopyMemoryToImageEXT = wrapper_tramp_CopyMemoryToImageEXT,
    .CopyImageToMemoryEXT = wrapper_tramp_CopyImageToMemoryEXT,
    .CopyImageToImageEXT = wrapper_tramp_CopyImageToImageEXT,
    .TransitionImageLayoutEXT = wrapper_tramp_TransitionImageLayoutEXT,
                .CreateVideoSessionKHR = wrapper_tramp_CreateVideoSessionKHR,
    .DestroyVideoSessionKHR = wrapper_tramp_DestroyVideoSessionKHR,
    .CreateVideoSessionParametersKHR = wrapper_tramp_CreateVideoSessionParametersKHR,
    .UpdateVideoSessionParametersKHR = wrapper_tramp_UpdateVideoSessionParametersKHR,
    .GetEncodedVideoSessionParametersKHR = wrapper_tramp_GetEncodedVideoSessionParametersKHR,
    .DestroyVideoSessionParametersKHR = wrapper_tramp_DestroyVideoSessionParametersKHR,
    .GetVideoSessionMemoryRequirementsKHR = wrapper_tramp_GetVideoSessionMemoryRequirementsKHR,
    .BindVideoSessionMemoryKHR = wrapper_tramp_BindVideoSessionMemoryKHR,
    .CmdDecodeVideoKHR = wrapper_tramp_CmdDecodeVideoKHR,
    .CmdBeginVideoCodingKHR = wrapper_tramp_CmdBeginVideoCodingKHR,
    .CmdControlVideoCodingKHR = wrapper_tramp_CmdControlVideoCodingKHR,
    .CmdEndVideoCodingKHR = wrapper_tramp_CmdEndVideoCodingKHR,
    .CmdEncodeVideoKHR = wrapper_tramp_CmdEncodeVideoKHR,
    .CmdDecompressMemoryNV = wrapper_tramp_CmdDecompressMemoryNV,
    .CmdDecompressMemoryIndirectCountNV = wrapper_tramp_CmdDecompressMemoryIndirectCountNV,
    .CreateCuModuleNVX = wrapper_tramp_CreateCuModuleNVX,
    .CreateCuFunctionNVX = wrapper_tramp_CreateCuFunctionNVX,
    .DestroyCuModuleNVX = wrapper_tramp_DestroyCuModuleNVX,
    .DestroyCuFunctionNVX = wrapper_tramp_DestroyCuFunctionNVX,
    .CmdCuLaunchKernelNVX = wrapper_tramp_CmdCuLaunchKernelNVX,
    .GetDescriptorSetLayoutSizeEXT = wrapper_tramp_GetDescriptorSetLayoutSizeEXT,
    .GetDescriptorSetLayoutBindingOffsetEXT = wrapper_tramp_GetDescriptorSetLayoutBindingOffsetEXT,
    .GetDescriptorEXT = wrapper_tramp_GetDescriptorEXT,
    .CmdBindDescriptorBuffersEXT = wrapper_tramp_CmdBindDescriptorBuffersEXT,
    .CmdSetDescriptorBufferOffsetsEXT = wrapper_tramp_CmdSetDescriptorBufferOffsetsEXT,
    .CmdBindDescriptorBufferEmbeddedSamplersEXT = wrapper_tramp_CmdBindDescriptorBufferEmbeddedSamplersEXT,
    .GetBufferOpaqueCaptureDescriptorDataEXT = wrapper_tramp_GetBufferOpaqueCaptureDescriptorDataEXT,
    .GetImageOpaqueCaptureDescriptorDataEXT = wrapper_tramp_GetImageOpaqueCaptureDescriptorDataEXT,
    .GetImageViewOpaqueCaptureDescriptorDataEXT = wrapper_tramp_GetImageViewOpaqueCaptureDescriptorDataEXT,
    .GetSamplerOpaqueCaptureDescriptorDataEXT = wrapper_tramp_GetSamplerOpaqueCaptureDescriptorDataEXT,
    .GetAccelerationStructureOpaqueCaptureDescriptorDataEXT = wrapper_tramp_GetAccelerationStructureOpaqueCaptureDescriptorDataEXT,
    .SetDeviceMemoryPriorityEXT = wrapper_tramp_SetDeviceMemoryPriorityEXT,
            .WaitForPresentKHR = wrapper_tramp_WaitForPresentKHR,
#ifdef VK_USE_PLATFORM_FUCHSIA
    .CreateBufferCollectionFUCHSIA = wrapper_tramp_CreateBufferCollectionFUCHSIA,
#endif
#ifdef VK_USE_PLATFORM_FUCHSIA
    .SetBufferCollectionBufferConstraintsFUCHSIA = wrapper_tramp_SetBufferCollectionBufferConstraintsFUCHSIA,
#endif
#ifdef VK_USE_PLATFORM_FUCHSIA
    .SetBufferCollectionImageConstraintsFUCHSIA = wrapper_tramp_SetBufferCollectionImageConstraintsFUCHSIA,
#endif
#ifdef VK_USE_PLATFORM_FUCHSIA
    .DestroyBufferCollectionFUCHSIA = wrapper_tramp_DestroyBufferCollectionFUCHSIA,
#endif
#ifdef VK_USE_PLATFORM_FUCHSIA
    .GetBufferCollectionPropertiesFUCHSIA = wrapper_tramp_GetBufferCollectionPropertiesFUCHSIA,
#endif
    .CmdBeginRendering = wrapper_tramp_CmdBeginRendering,
        .CmdEndRendering = wrapper_tramp_CmdEndRendering,
        .GetDescriptorSetLayoutHostMappingInfoVALVE = wrapper_tramp_GetDescriptorSetLayoutHostMappingInfoVALVE,
    .GetDescriptorSetHostMappingVALVE = wrapper_tramp_GetDescriptorSetHostMappingVALVE,
    .CreateMicromapEXT = wrapper_tramp_CreateMicromapEXT,
    .CmdBuildMicromapsEXT = wrapper_tramp_CmdBuildMicromapsEXT,
    .BuildMicromapsEXT = wrapper_tramp_BuildMicromapsEXT,
    .DestroyMicromapEXT = wrapper_tramp_DestroyMicromapEXT,
    .CmdCopyMicromapEXT = wrapper_tramp_CmdCopyMicromapEXT,
    .CopyMicromapEXT = wrapper_tramp_CopyMicromapEXT,
    .CmdCopyMicromapToMemoryEXT = wrapper_tramp_CmdCopyMicromapToMemoryEXT,
    .CopyMicromapToMemoryEXT = wrapper_tramp_CopyMicromapToMemoryEXT,
    .CmdCopyMemoryToMicromapEXT = wrapper_tramp_CmdCopyMemoryToMicromapEXT,
    .CopyMemoryToMicromapEXT = wrapper_tramp_CopyMemoryToMicromapEXT,
    .CmdWriteMicromapsPropertiesEXT = wrapper_tramp_CmdWriteMicromapsPropertiesEXT,
    .WriteMicromapsPropertiesEXT = wrapper_tramp_WriteMicromapsPropertiesEXT,
    .GetDeviceMicromapCompatibilityEXT = wrapper_tramp_GetDeviceMicromapCompatibilityEXT,
    .GetMicromapBuildSizesEXT = wrapper_tramp_GetMicromapBuildSizesEXT,
    .GetShaderModuleIdentifierEXT = wrapper_tramp_GetShaderModuleIdentifierEXT,
    .GetShaderModuleCreateInfoIdentifierEXT = wrapper_tramp_GetShaderModuleCreateInfoIdentifierEXT,
    .GetImageSubresourceLayout2KHR = wrapper_tramp_GetImageSubresourceLayout2KHR,
        .GetPipelinePropertiesEXT = wrapper_tramp_GetPipelinePropertiesEXT,
#ifdef VK_USE_PLATFORM_METAL_EXT
    .ExportMetalObjectsEXT = wrapper_tramp_ExportMetalObjectsEXT,
#endif
    .GetFramebufferTilePropertiesQCOM = wrapper_tramp_GetFramebufferTilePropertiesQCOM,
    .GetDynamicRenderingTilePropertiesQCOM = wrapper_tramp_GetDynamicRenderingTilePropertiesQCOM,
        .CreateOpticalFlowSessionNV = wrapper_tramp_CreateOpticalFlowSessionNV,
    .DestroyOpticalFlowSessionNV = wrapper_tramp_DestroyOpticalFlowSessionNV,
    .BindOpticalFlowSessionImageNV = wrapper_tramp_BindOpticalFlowSessionImageNV,
    .CmdOpticalFlowExecuteNV = wrapper_tramp_CmdOpticalFlowExecuteNV,
    .GetDeviceFaultInfoEXT = wrapper_tramp_GetDeviceFaultInfoEXT,
    .CmdSetDepthBias2EXT = wrapper_tramp_CmdSetDepthBias2EXT,
    .ReleaseSwapchainImagesEXT = wrapper_tramp_ReleaseSwapchainImagesEXT,
    .GetDeviceImageSubresourceLayoutKHR = wrapper_tramp_GetDeviceImageSubresourceLayoutKHR,
    .MapMemory2KHR = wrapper_tramp_MapMemory2KHR,
    .UnmapMemory2KHR = wrapper_tramp_UnmapMemory2KHR,
    .CreateShadersEXT = wrapper_tramp_CreateShadersEXT,
    .DestroyShaderEXT = wrapper_tramp_DestroyShaderEXT,
    .GetShaderBinaryDataEXT = wrapper_tramp_GetShaderBinaryDataEXT,
    .CmdBindShadersEXT = wrapper_tramp_CmdBindShadersEXT,
#ifdef VK_USE_PLATFORM_SCREEN_QNX
    .GetScreenBufferPropertiesQNX = wrapper_tramp_GetScreenBufferPropertiesQNX,
#endif
        .CmdBindDescriptorSets2KHR = wrapper_tramp_CmdBindDescriptorSets2KHR,
    .CmdPushConstants2KHR = wrapper_tramp_CmdPushConstants2KHR,
    .CmdPushDescriptorSet2KHR = wrapper_tramp_CmdPushDescriptorSet2KHR,
    .CmdPushDescriptorSetWithTemplate2KHR = wrapper_tramp_CmdPushDescriptorSetWithTemplate2KHR,
    .CmdSetDescriptorBufferOffsets2EXT = wrapper_tramp_CmdSetDescriptorBufferOffsets2EXT,
    .CmdBindDescriptorBufferEmbeddedSamplers2EXT = wrapper_tramp_CmdBindDescriptorBufferEmbeddedSamplers2EXT,
    .SetLatencySleepModeNV = wrapper_tramp_SetLatencySleepModeNV,
    .LatencySleepNV = wrapper_tramp_LatencySleepNV,
    .SetLatencyMarkerNV = wrapper_tramp_SetLatencyMarkerNV,
    .GetLatencyTimingsNV = wrapper_tramp_GetLatencyTimingsNV,
    .QueueNotifyOutOfBandNV = wrapper_tramp_QueueNotifyOutOfBandNV,
    .CmdSetRenderingAttachmentLocationsKHR = wrapper_tramp_CmdSetRenderingAttachmentLocationsKHR,
    .CmdSetRenderingInputAttachmentIndicesKHR = wrapper_tramp_CmdSetRenderingInputAttachmentIndicesKHR,
};
