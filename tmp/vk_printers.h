

#ifndef VK_PRINTER_H
#define VK_PRINTER_H

#include <sys/time.h>
#include "wrapper_private.h"
#include "vulkan/util/vk_alloc.h"

#ifdef __cplusplus
extern "C" {
#endif


static FILE* __vk_print_fd;
static int64_t __vk_start_ms;


static bool __cmd_log_initialized;
static int __cmd_log_level;
static FILE* __cmd_log_fd;

#define VK_CMD_ALL 2
#define VK_CMD_NAME 1
#define VK_CMD_NONE 0
#define VK_CMD_FD __cmd_log_fd

static int __should_log_cmd() {
   if (__cmd_log_initialized) {
      return __cmd_log_level;
   }

   const char *log_level = getenv("WRAPPER_CMD_LOG_LEVEL");
   if (!log_level) {
      __cmd_log_level = VK_CMD_NONE;
   } else if (strcmp(log_level, "all") == 0) {
      __cmd_log_level = VK_CMD_ALL;
   } else if (strcmp(log_level, "name") == 0) {
      __cmd_log_level = VK_CMD_NAME;
   } else {
      __cmd_log_level = VK_CMD_NONE;
   }

   char time_str[20];
   get_current_time_string(time_str, sizeof(time_str));
   char path[256];
   sprintf(path, "/sdcard/Documents/Wrapper/wrapper_cmds_%s.%d.txt", time_str, getpid());
   __cmd_log_fd = fopen(path, "w");
   if (!__cmd_log_fd) {
      __log_level = 0;
   }
   __cmd_log_initialized = true;
   return __cmd_log_level;
}


#define VK_CMD_CAN_LOG_LEVEL __should_log_cmd()

#define __VK_CMD_LOG(can_log_level, level, fd, ...) { if (can_log_level >= level) __vk_println(fd, __VA_ARGS__); }
#define VK_CMD_LOG(...) __VK_CMD_LOG(VK_CMD_CAN_LOG_LEVEL, VK_CMD_NAME, __cmd_log_fd, __VA_ARGS__)
#define VK_CMD_LOGA(...) __VK_CMD_LOG(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, __VA_ARGS__)
#define VK_CMD_FLUSH() { if (VK_CMD_CAN_LOG_LEVEL >= VK_CMD_NAME) __vk_flush(__cmd_log_fd); }

#define VK_CMD_LOG_FD(fd, ...) __vk_println(fd, __VA_ARGS__)

static void __vk_println(FILE* fd, const char* fmt, ...) {
   if (!fd) {
      return;
   }
   va_list args;
   va_start(args, fmt);
   vfprintf(fd, fmt, args);
   va_end(args);
   fprintf(fd, "\n");
   // fflush(fd);
}

static void __vk_flush(FILE* fd) {
   if (!fd) {
      return;
   }
   fflush(fd);
}

void vk_print_VkBaseOutStructure(int can_log_level, int log_level, FILE*, const char* prefix, const VkBaseOutStructure *in_info);
#define VK_PRINT_VkBaseOutStructure(prefix, in_info) vk_print_VkBaseOutStructure(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkBaseInStructure(int can_log_level, int log_level, FILE*, const char* prefix, const VkBaseInStructure *in_info);
#define VK_PRINT_VkBaseInStructure(prefix, in_info) vk_print_VkBaseInStructure(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkOffset2D(int can_log_level, int log_level, FILE*, const char* prefix, const VkOffset2D *in_info);
#define VK_PRINT_VkOffset2D(prefix, in_info) vk_print_VkOffset2D(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkOffset3D(int can_log_level, int log_level, FILE*, const char* prefix, const VkOffset3D *in_info);
#define VK_PRINT_VkOffset3D(prefix, in_info) vk_print_VkOffset3D(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkExtent2D(int can_log_level, int log_level, FILE*, const char* prefix, const VkExtent2D *in_info);
#define VK_PRINT_VkExtent2D(prefix, in_info) vk_print_VkExtent2D(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkExtent3D(int can_log_level, int log_level, FILE*, const char* prefix, const VkExtent3D *in_info);
#define VK_PRINT_VkExtent3D(prefix, in_info) vk_print_VkExtent3D(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkViewport(int can_log_level, int log_level, FILE*, const char* prefix, const VkViewport *in_info);
#define VK_PRINT_VkViewport(prefix, in_info) vk_print_VkViewport(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkRect2D(int can_log_level, int log_level, FILE*, const char* prefix, const VkRect2D *in_info);
#define VK_PRINT_VkRect2D(prefix, in_info) vk_print_VkRect2D(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkClearRect(int can_log_level, int log_level, FILE*, const char* prefix, const VkClearRect *in_info);
#define VK_PRINT_VkClearRect(prefix, in_info) vk_print_VkClearRect(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkComponentMapping(int can_log_level, int log_level, FILE*, const char* prefix, const VkComponentMapping *in_info);
#define VK_PRINT_VkComponentMapping(prefix, in_info) vk_print_VkComponentMapping(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceProperties(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceProperties *in_info);
#define VK_PRINT_VkPhysicalDeviceProperties(prefix, in_info) vk_print_VkPhysicalDeviceProperties(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkExtensionProperties(int can_log_level, int log_level, FILE*, const char* prefix, const VkExtensionProperties *in_info);
#define VK_PRINT_VkExtensionProperties(prefix, in_info) vk_print_VkExtensionProperties(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkLayerProperties(int can_log_level, int log_level, FILE*, const char* prefix, const VkLayerProperties *in_info);
#define VK_PRINT_VkLayerProperties(prefix, in_info) vk_print_VkLayerProperties(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkApplicationInfo(int can_log_level, int log_level, FILE*, const char* prefix, const VkApplicationInfo *in_info);
#define VK_PRINT_VkApplicationInfo(prefix, in_info) vk_print_VkApplicationInfo(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkAllocationCallbacks(int can_log_level, int log_level, FILE*, const char* prefix, const VkAllocationCallbacks *in_info);
#define VK_PRINT_VkAllocationCallbacks(prefix, in_info) vk_print_VkAllocationCallbacks(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkDeviceQueueCreateInfo(int can_log_level, int log_level, FILE*, const char* prefix, const VkDeviceQueueCreateInfo *in_info);
#define VK_PRINT_VkDeviceQueueCreateInfo(prefix, in_info) vk_print_VkDeviceQueueCreateInfo(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkDeviceCreateInfo(int can_log_level, int log_level, FILE*, const char* prefix, const VkDeviceCreateInfo *in_info);
#define VK_PRINT_VkDeviceCreateInfo(prefix, in_info) vk_print_VkDeviceCreateInfo(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkQueueFamilyProperties(int can_log_level, int log_level, FILE*, const char* prefix, const VkQueueFamilyProperties *in_info);
#define VK_PRINT_VkQueueFamilyProperties(prefix, in_info) vk_print_VkQueueFamilyProperties(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceMemoryProperties(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceMemoryProperties *in_info);
#define VK_PRINT_VkPhysicalDeviceMemoryProperties(prefix, in_info) vk_print_VkPhysicalDeviceMemoryProperties(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkMemoryAllocateInfo(int can_log_level, int log_level, FILE*, const char* prefix, const VkMemoryAllocateInfo *in_info);
#define VK_PRINT_VkMemoryAllocateInfo(prefix, in_info) vk_print_VkMemoryAllocateInfo(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkMemoryRequirements(int can_log_level, int log_level, FILE*, const char* prefix, const VkMemoryRequirements *in_info);
#define VK_PRINT_VkMemoryRequirements(prefix, in_info) vk_print_VkMemoryRequirements(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkSparseImageFormatProperties(int can_log_level, int log_level, FILE*, const char* prefix, const VkSparseImageFormatProperties *in_info);
#define VK_PRINT_VkSparseImageFormatProperties(prefix, in_info) vk_print_VkSparseImageFormatProperties(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkSparseImageMemoryRequirements(int can_log_level, int log_level, FILE*, const char* prefix, const VkSparseImageMemoryRequirements *in_info);
#define VK_PRINT_VkSparseImageMemoryRequirements(prefix, in_info) vk_print_VkSparseImageMemoryRequirements(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkMemoryType(int can_log_level, int log_level, FILE*, const char* prefix, const VkMemoryType *in_info);
#define VK_PRINT_VkMemoryType(prefix, in_info) vk_print_VkMemoryType(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkMemoryHeap(int can_log_level, int log_level, FILE*, const char* prefix, const VkMemoryHeap *in_info);
#define VK_PRINT_VkMemoryHeap(prefix, in_info) vk_print_VkMemoryHeap(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkMappedMemoryRange(int can_log_level, int log_level, FILE*, const char* prefix, const VkMappedMemoryRange *in_info);
#define VK_PRINT_VkMappedMemoryRange(prefix, in_info) vk_print_VkMappedMemoryRange(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkFormatProperties(int can_log_level, int log_level, FILE*, const char* prefix, const VkFormatProperties *in_info);
#define VK_PRINT_VkFormatProperties(prefix, in_info) vk_print_VkFormatProperties(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkImageFormatProperties(int can_log_level, int log_level, FILE*, const char* prefix, const VkImageFormatProperties *in_info);
#define VK_PRINT_VkImageFormatProperties(prefix, in_info) vk_print_VkImageFormatProperties(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkDescriptorBufferInfo(int can_log_level, int log_level, FILE*, const char* prefix, const VkDescriptorBufferInfo *in_info);
#define VK_PRINT_VkDescriptorBufferInfo(prefix, in_info) vk_print_VkDescriptorBufferInfo(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkDescriptorImageInfo(int can_log_level, int log_level, FILE*, const char* prefix, const VkDescriptorImageInfo *in_info);
#define VK_PRINT_VkDescriptorImageInfo(prefix, in_info) vk_print_VkDescriptorImageInfo(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkWriteDescriptorSet(int can_log_level, int log_level, FILE*, const char* prefix, const VkWriteDescriptorSet *in_info);
#define VK_PRINT_VkWriteDescriptorSet(prefix, in_info) vk_print_VkWriteDescriptorSet(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkCopyDescriptorSet(int can_log_level, int log_level, FILE*, const char* prefix, const VkCopyDescriptorSet *in_info);
#define VK_PRINT_VkCopyDescriptorSet(prefix, in_info) vk_print_VkCopyDescriptorSet(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkBufferUsageFlags2CreateInfoKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkBufferUsageFlags2CreateInfoKHR *in_info);
#define VK_PRINT_VkBufferUsageFlags2CreateInfoKHR(prefix, in_info) vk_print_VkBufferUsageFlags2CreateInfoKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkBufferCreateInfo(int can_log_level, int log_level, FILE*, const char* prefix, const VkBufferCreateInfo *in_info);
#define VK_PRINT_VkBufferCreateInfo(prefix, in_info) vk_print_VkBufferCreateInfo(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkBufferViewCreateInfo(int can_log_level, int log_level, FILE*, const char* prefix, const VkBufferViewCreateInfo *in_info);
#define VK_PRINT_VkBufferViewCreateInfo(prefix, in_info) vk_print_VkBufferViewCreateInfo(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkImageSubresource(int can_log_level, int log_level, FILE*, const char* prefix, const VkImageSubresource *in_info);
#define VK_PRINT_VkImageSubresource(prefix, in_info) vk_print_VkImageSubresource(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkImageSubresourceLayers(int can_log_level, int log_level, FILE*, const char* prefix, const VkImageSubresourceLayers *in_info);
#define VK_PRINT_VkImageSubresourceLayers(prefix, in_info) vk_print_VkImageSubresourceLayers(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkImageSubresourceRange(int can_log_level, int log_level, FILE*, const char* prefix, const VkImageSubresourceRange *in_info);
#define VK_PRINT_VkImageSubresourceRange(prefix, in_info) vk_print_VkImageSubresourceRange(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkMemoryBarrier(int can_log_level, int log_level, FILE*, const char* prefix, const VkMemoryBarrier *in_info);
#define VK_PRINT_VkMemoryBarrier(prefix, in_info) vk_print_VkMemoryBarrier(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkBufferMemoryBarrier(int can_log_level, int log_level, FILE*, const char* prefix, const VkBufferMemoryBarrier *in_info);
#define VK_PRINT_VkBufferMemoryBarrier(prefix, in_info) vk_print_VkBufferMemoryBarrier(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkImageMemoryBarrier(int can_log_level, int log_level, FILE*, const char* prefix, const VkImageMemoryBarrier *in_info);
#define VK_PRINT_VkImageMemoryBarrier(prefix, in_info) vk_print_VkImageMemoryBarrier(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkImageCreateInfo(int can_log_level, int log_level, FILE*, const char* prefix, const VkImageCreateInfo *in_info);
#define VK_PRINT_VkImageCreateInfo(prefix, in_info) vk_print_VkImageCreateInfo(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkSubresourceLayout(int can_log_level, int log_level, FILE*, const char* prefix, const VkSubresourceLayout *in_info);
#define VK_PRINT_VkSubresourceLayout(prefix, in_info) vk_print_VkSubresourceLayout(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkImageViewCreateInfo(int can_log_level, int log_level, FILE*, const char* prefix, const VkImageViewCreateInfo *in_info);
#define VK_PRINT_VkImageViewCreateInfo(prefix, in_info) vk_print_VkImageViewCreateInfo(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkBufferCopy(int can_log_level, int log_level, FILE*, const char* prefix, const VkBufferCopy *in_info);
#define VK_PRINT_VkBufferCopy(prefix, in_info) vk_print_VkBufferCopy(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkSparseMemoryBind(int can_log_level, int log_level, FILE*, const char* prefix, const VkSparseMemoryBind *in_info);
#define VK_PRINT_VkSparseMemoryBind(prefix, in_info) vk_print_VkSparseMemoryBind(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkSparseImageMemoryBind(int can_log_level, int log_level, FILE*, const char* prefix, const VkSparseImageMemoryBind *in_info);
#define VK_PRINT_VkSparseImageMemoryBind(prefix, in_info) vk_print_VkSparseImageMemoryBind(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkSparseBufferMemoryBindInfo(int can_log_level, int log_level, FILE*, const char* prefix, const VkSparseBufferMemoryBindInfo *in_info);
#define VK_PRINT_VkSparseBufferMemoryBindInfo(prefix, in_info) vk_print_VkSparseBufferMemoryBindInfo(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkSparseImageOpaqueMemoryBindInfo(int can_log_level, int log_level, FILE*, const char* prefix, const VkSparseImageOpaqueMemoryBindInfo *in_info);
#define VK_PRINT_VkSparseImageOpaqueMemoryBindInfo(prefix, in_info) vk_print_VkSparseImageOpaqueMemoryBindInfo(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkSparseImageMemoryBindInfo(int can_log_level, int log_level, FILE*, const char* prefix, const VkSparseImageMemoryBindInfo *in_info);
#define VK_PRINT_VkSparseImageMemoryBindInfo(prefix, in_info) vk_print_VkSparseImageMemoryBindInfo(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkBindSparseInfo(int can_log_level, int log_level, FILE*, const char* prefix, const VkBindSparseInfo *in_info);
#define VK_PRINT_VkBindSparseInfo(prefix, in_info) vk_print_VkBindSparseInfo(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkImageCopy(int can_log_level, int log_level, FILE*, const char* prefix, const VkImageCopy *in_info);
#define VK_PRINT_VkImageCopy(prefix, in_info) vk_print_VkImageCopy(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkImageBlit(int can_log_level, int log_level, FILE*, const char* prefix, const VkImageBlit *in_info);
#define VK_PRINT_VkImageBlit(prefix, in_info) vk_print_VkImageBlit(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkBufferImageCopy(int can_log_level, int log_level, FILE*, const char* prefix, const VkBufferImageCopy *in_info);
#define VK_PRINT_VkBufferImageCopy(prefix, in_info) vk_print_VkBufferImageCopy(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkCopyMemoryIndirectCommandNV(int can_log_level, int log_level, FILE*, const char* prefix, const VkCopyMemoryIndirectCommandNV *in_info);
#define VK_PRINT_VkCopyMemoryIndirectCommandNV(prefix, in_info) vk_print_VkCopyMemoryIndirectCommandNV(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkCopyMemoryToImageIndirectCommandNV(int can_log_level, int log_level, FILE*, const char* prefix, const VkCopyMemoryToImageIndirectCommandNV *in_info);
#define VK_PRINT_VkCopyMemoryToImageIndirectCommandNV(prefix, in_info) vk_print_VkCopyMemoryToImageIndirectCommandNV(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkImageResolve(int can_log_level, int log_level, FILE*, const char* prefix, const VkImageResolve *in_info);
#define VK_PRINT_VkImageResolve(prefix, in_info) vk_print_VkImageResolve(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkShaderModuleCreateInfo(int can_log_level, int log_level, FILE*, const char* prefix, const VkShaderModuleCreateInfo *in_info);
#define VK_PRINT_VkShaderModuleCreateInfo(prefix, in_info) vk_print_VkShaderModuleCreateInfo(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkDescriptorSetLayoutBinding(int can_log_level, int log_level, FILE*, const char* prefix, const VkDescriptorSetLayoutBinding *in_info);
#define VK_PRINT_VkDescriptorSetLayoutBinding(prefix, in_info) vk_print_VkDescriptorSetLayoutBinding(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkDescriptorSetLayoutCreateInfo(int can_log_level, int log_level, FILE*, const char* prefix, const VkDescriptorSetLayoutCreateInfo *in_info);
#define VK_PRINT_VkDescriptorSetLayoutCreateInfo(prefix, in_info) vk_print_VkDescriptorSetLayoutCreateInfo(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkDescriptorPoolSize(int can_log_level, int log_level, FILE*, const char* prefix, const VkDescriptorPoolSize *in_info);
#define VK_PRINT_VkDescriptorPoolSize(prefix, in_info) vk_print_VkDescriptorPoolSize(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkDescriptorPoolCreateInfo(int can_log_level, int log_level, FILE*, const char* prefix, const VkDescriptorPoolCreateInfo *in_info);
#define VK_PRINT_VkDescriptorPoolCreateInfo(prefix, in_info) vk_print_VkDescriptorPoolCreateInfo(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkDescriptorSetAllocateInfo(int can_log_level, int log_level, FILE*, const char* prefix, const VkDescriptorSetAllocateInfo *in_info);
#define VK_PRINT_VkDescriptorSetAllocateInfo(prefix, in_info) vk_print_VkDescriptorSetAllocateInfo(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkSpecializationMapEntry(int can_log_level, int log_level, FILE*, const char* prefix, const VkSpecializationMapEntry *in_info);
#define VK_PRINT_VkSpecializationMapEntry(prefix, in_info) vk_print_VkSpecializationMapEntry(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkSpecializationInfo(int can_log_level, int log_level, FILE*, const char* prefix, const VkSpecializationInfo *in_info);
#define VK_PRINT_VkSpecializationInfo(prefix, in_info) vk_print_VkSpecializationInfo(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPipelineShaderStageCreateInfo(int can_log_level, int log_level, FILE*, const char* prefix, const VkPipelineShaderStageCreateInfo *in_info);
#define VK_PRINT_VkPipelineShaderStageCreateInfo(prefix, in_info) vk_print_VkPipelineShaderStageCreateInfo(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkComputePipelineCreateInfo(int can_log_level, int log_level, FILE*, const char* prefix, const VkComputePipelineCreateInfo *in_info);
#define VK_PRINT_VkComputePipelineCreateInfo(prefix, in_info) vk_print_VkComputePipelineCreateInfo(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkComputePipelineIndirectBufferInfoNV(int can_log_level, int log_level, FILE*, const char* prefix, const VkComputePipelineIndirectBufferInfoNV *in_info);
#define VK_PRINT_VkComputePipelineIndirectBufferInfoNV(prefix, in_info) vk_print_VkComputePipelineIndirectBufferInfoNV(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPipelineCreateFlags2CreateInfoKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkPipelineCreateFlags2CreateInfoKHR *in_info);
#define VK_PRINT_VkPipelineCreateFlags2CreateInfoKHR(prefix, in_info) vk_print_VkPipelineCreateFlags2CreateInfoKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkVertexInputBindingDescription(int can_log_level, int log_level, FILE*, const char* prefix, const VkVertexInputBindingDescription *in_info);
#define VK_PRINT_VkVertexInputBindingDescription(prefix, in_info) vk_print_VkVertexInputBindingDescription(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkVertexInputAttributeDescription(int can_log_level, int log_level, FILE*, const char* prefix, const VkVertexInputAttributeDescription *in_info);
#define VK_PRINT_VkVertexInputAttributeDescription(prefix, in_info) vk_print_VkVertexInputAttributeDescription(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPipelineVertexInputStateCreateInfo(int can_log_level, int log_level, FILE*, const char* prefix, const VkPipelineVertexInputStateCreateInfo *in_info);
#define VK_PRINT_VkPipelineVertexInputStateCreateInfo(prefix, in_info) vk_print_VkPipelineVertexInputStateCreateInfo(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPipelineInputAssemblyStateCreateInfo(int can_log_level, int log_level, FILE*, const char* prefix, const VkPipelineInputAssemblyStateCreateInfo *in_info);
#define VK_PRINT_VkPipelineInputAssemblyStateCreateInfo(prefix, in_info) vk_print_VkPipelineInputAssemblyStateCreateInfo(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPipelineTessellationStateCreateInfo(int can_log_level, int log_level, FILE*, const char* prefix, const VkPipelineTessellationStateCreateInfo *in_info);
#define VK_PRINT_VkPipelineTessellationStateCreateInfo(prefix, in_info) vk_print_VkPipelineTessellationStateCreateInfo(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPipelineViewportStateCreateInfo(int can_log_level, int log_level, FILE*, const char* prefix, const VkPipelineViewportStateCreateInfo *in_info);
#define VK_PRINT_VkPipelineViewportStateCreateInfo(prefix, in_info) vk_print_VkPipelineViewportStateCreateInfo(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPipelineRasterizationStateCreateInfo(int can_log_level, int log_level, FILE*, const char* prefix, const VkPipelineRasterizationStateCreateInfo *in_info);
#define VK_PRINT_VkPipelineRasterizationStateCreateInfo(prefix, in_info) vk_print_VkPipelineRasterizationStateCreateInfo(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPipelineColorBlendAttachmentState(int can_log_level, int log_level, FILE*, const char* prefix, const VkPipelineColorBlendAttachmentState *in_info);
#define VK_PRINT_VkPipelineColorBlendAttachmentState(prefix, in_info) vk_print_VkPipelineColorBlendAttachmentState(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPipelineColorBlendStateCreateInfo(int can_log_level, int log_level, FILE*, const char* prefix, const VkPipelineColorBlendStateCreateInfo *in_info);
#define VK_PRINT_VkPipelineColorBlendStateCreateInfo(prefix, in_info) vk_print_VkPipelineColorBlendStateCreateInfo(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPipelineDynamicStateCreateInfo(int can_log_level, int log_level, FILE*, const char* prefix, const VkPipelineDynamicStateCreateInfo *in_info);
#define VK_PRINT_VkPipelineDynamicStateCreateInfo(prefix, in_info) vk_print_VkPipelineDynamicStateCreateInfo(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkStencilOpState(int can_log_level, int log_level, FILE*, const char* prefix, const VkStencilOpState *in_info);
#define VK_PRINT_VkStencilOpState(prefix, in_info) vk_print_VkStencilOpState(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPipelineDepthStencilStateCreateInfo(int can_log_level, int log_level, FILE*, const char* prefix, const VkPipelineDepthStencilStateCreateInfo *in_info);
#define VK_PRINT_VkPipelineDepthStencilStateCreateInfo(prefix, in_info) vk_print_VkPipelineDepthStencilStateCreateInfo(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkGraphicsPipelineCreateInfo(int can_log_level, int log_level, FILE*, const char* prefix, const VkGraphicsPipelineCreateInfo *in_info);
#define VK_PRINT_VkGraphicsPipelineCreateInfo(prefix, in_info) vk_print_VkGraphicsPipelineCreateInfo(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPipelineCacheCreateInfo(int can_log_level, int log_level, FILE*, const char* prefix, const VkPipelineCacheCreateInfo *in_info);
#define VK_PRINT_VkPipelineCacheCreateInfo(prefix, in_info) vk_print_VkPipelineCacheCreateInfo(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPipelineCacheHeaderVersionOne(int can_log_level, int log_level, FILE*, const char* prefix, const VkPipelineCacheHeaderVersionOne *in_info);
#define VK_PRINT_VkPipelineCacheHeaderVersionOne(prefix, in_info) vk_print_VkPipelineCacheHeaderVersionOne(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPushConstantRange(int can_log_level, int log_level, FILE*, const char* prefix, const VkPushConstantRange *in_info);
#define VK_PRINT_VkPushConstantRange(prefix, in_info) vk_print_VkPushConstantRange(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPipelineLayoutCreateInfo(int can_log_level, int log_level, FILE*, const char* prefix, const VkPipelineLayoutCreateInfo *in_info);
#define VK_PRINT_VkPipelineLayoutCreateInfo(prefix, in_info) vk_print_VkPipelineLayoutCreateInfo(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkSamplerCreateInfo(int can_log_level, int log_level, FILE*, const char* prefix, const VkSamplerCreateInfo *in_info);
#define VK_PRINT_VkSamplerCreateInfo(prefix, in_info) vk_print_VkSamplerCreateInfo(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkCommandPoolCreateInfo(int can_log_level, int log_level, FILE*, const char* prefix, const VkCommandPoolCreateInfo *in_info);
#define VK_PRINT_VkCommandPoolCreateInfo(prefix, in_info) vk_print_VkCommandPoolCreateInfo(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkCommandBufferAllocateInfo(int can_log_level, int log_level, FILE*, const char* prefix, const VkCommandBufferAllocateInfo *in_info);
#define VK_PRINT_VkCommandBufferAllocateInfo(prefix, in_info) vk_print_VkCommandBufferAllocateInfo(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkCommandBufferInheritanceInfo(int can_log_level, int log_level, FILE*, const char* prefix, const VkCommandBufferInheritanceInfo *in_info);
#define VK_PRINT_VkCommandBufferInheritanceInfo(prefix, in_info) vk_print_VkCommandBufferInheritanceInfo(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkCommandBufferBeginInfo(int can_log_level, int log_level, FILE*, const char* prefix, const VkCommandBufferBeginInfo *in_info);
#define VK_PRINT_VkCommandBufferBeginInfo(prefix, in_info) vk_print_VkCommandBufferBeginInfo(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkRenderPassBeginInfo(int can_log_level, int log_level, FILE*, const char* prefix, const VkRenderPassBeginInfo *in_info);
#define VK_PRINT_VkRenderPassBeginInfo(prefix, in_info) vk_print_VkRenderPassBeginInfo(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkClearColorValue(int can_log_level, int log_level, FILE*, const char* prefix, const VkClearColorValue *in_info);
#define VK_PRINT_VkClearColorValue(prefix, in_info) vk_print_VkClearColorValue(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkClearDepthStencilValue(int can_log_level, int log_level, FILE*, const char* prefix, const VkClearDepthStencilValue *in_info);
#define VK_PRINT_VkClearDepthStencilValue(prefix, in_info) vk_print_VkClearDepthStencilValue(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkClearValue(int can_log_level, int log_level, FILE*, const char* prefix, const VkClearValue *in_info);
#define VK_PRINT_VkClearValue(prefix, in_info) vk_print_VkClearValue(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkClearAttachment(int can_log_level, int log_level, FILE*, const char* prefix, const VkClearAttachment *in_info);
#define VK_PRINT_VkClearAttachment(prefix, in_info) vk_print_VkClearAttachment(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkAttachmentDescription(int can_log_level, int log_level, FILE*, const char* prefix, const VkAttachmentDescription *in_info);
#define VK_PRINT_VkAttachmentDescription(prefix, in_info) vk_print_VkAttachmentDescription(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkAttachmentReference(int can_log_level, int log_level, FILE*, const char* prefix, const VkAttachmentReference *in_info);
#define VK_PRINT_VkAttachmentReference(prefix, in_info) vk_print_VkAttachmentReference(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkSubpassDescription(int can_log_level, int log_level, FILE*, const char* prefix, const VkSubpassDescription *in_info);
#define VK_PRINT_VkSubpassDescription(prefix, in_info) vk_print_VkSubpassDescription(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkSubpassDependency(int can_log_level, int log_level, FILE*, const char* prefix, const VkSubpassDependency *in_info);
#define VK_PRINT_VkSubpassDependency(prefix, in_info) vk_print_VkSubpassDependency(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkRenderPassCreateInfo(int can_log_level, int log_level, FILE*, const char* prefix, const VkRenderPassCreateInfo *in_info);
#define VK_PRINT_VkRenderPassCreateInfo(prefix, in_info) vk_print_VkRenderPassCreateInfo(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkEventCreateInfo(int can_log_level, int log_level, FILE*, const char* prefix, const VkEventCreateInfo *in_info);
#define VK_PRINT_VkEventCreateInfo(prefix, in_info) vk_print_VkEventCreateInfo(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkFenceCreateInfo(int can_log_level, int log_level, FILE*, const char* prefix, const VkFenceCreateInfo *in_info);
#define VK_PRINT_VkFenceCreateInfo(prefix, in_info) vk_print_VkFenceCreateInfo(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceFeatures(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceFeatures *in_info);
#define VK_PRINT_VkPhysicalDeviceFeatures(prefix, in_info) vk_print_VkPhysicalDeviceFeatures(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceSparseProperties(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceSparseProperties *in_info);
#define VK_PRINT_VkPhysicalDeviceSparseProperties(prefix, in_info) vk_print_VkPhysicalDeviceSparseProperties(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceLimits(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceLimits *in_info);
#define VK_PRINT_VkPhysicalDeviceLimits(prefix, in_info) vk_print_VkPhysicalDeviceLimits(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkSemaphoreCreateInfo(int can_log_level, int log_level, FILE*, const char* prefix, const VkSemaphoreCreateInfo *in_info);
#define VK_PRINT_VkSemaphoreCreateInfo(prefix, in_info) vk_print_VkSemaphoreCreateInfo(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkQueryPoolCreateInfo(int can_log_level, int log_level, FILE*, const char* prefix, const VkQueryPoolCreateInfo *in_info);
#define VK_PRINT_VkQueryPoolCreateInfo(prefix, in_info) vk_print_VkQueryPoolCreateInfo(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkFramebufferCreateInfo(int can_log_level, int log_level, FILE*, const char* prefix, const VkFramebufferCreateInfo *in_info);
#define VK_PRINT_VkFramebufferCreateInfo(prefix, in_info) vk_print_VkFramebufferCreateInfo(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkDrawIndirectCommand(int can_log_level, int log_level, FILE*, const char* prefix, const VkDrawIndirectCommand *in_info);
#define VK_PRINT_VkDrawIndirectCommand(prefix, in_info) vk_print_VkDrawIndirectCommand(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkDrawIndexedIndirectCommand(int can_log_level, int log_level, FILE*, const char* prefix, const VkDrawIndexedIndirectCommand *in_info);
#define VK_PRINT_VkDrawIndexedIndirectCommand(prefix, in_info) vk_print_VkDrawIndexedIndirectCommand(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkDispatchIndirectCommand(int can_log_level, int log_level, FILE*, const char* prefix, const VkDispatchIndirectCommand *in_info);
#define VK_PRINT_VkDispatchIndirectCommand(prefix, in_info) vk_print_VkDispatchIndirectCommand(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkMultiDrawInfoEXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkMultiDrawInfoEXT *in_info);
#define VK_PRINT_VkMultiDrawInfoEXT(prefix, in_info) vk_print_VkMultiDrawInfoEXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkMultiDrawIndexedInfoEXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkMultiDrawIndexedInfoEXT *in_info);
#define VK_PRINT_VkMultiDrawIndexedInfoEXT(prefix, in_info) vk_print_VkMultiDrawIndexedInfoEXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkSubmitInfo(int can_log_level, int log_level, FILE*, const char* prefix, const VkSubmitInfo *in_info);
#define VK_PRINT_VkSubmitInfo(prefix, in_info) vk_print_VkSubmitInfo(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkDisplayPropertiesKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkDisplayPropertiesKHR *in_info);
#define VK_PRINT_VkDisplayPropertiesKHR(prefix, in_info) vk_print_VkDisplayPropertiesKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkDisplayPlanePropertiesKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkDisplayPlanePropertiesKHR *in_info);
#define VK_PRINT_VkDisplayPlanePropertiesKHR(prefix, in_info) vk_print_VkDisplayPlanePropertiesKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkDisplayModeParametersKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkDisplayModeParametersKHR *in_info);
#define VK_PRINT_VkDisplayModeParametersKHR(prefix, in_info) vk_print_VkDisplayModeParametersKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkDisplayModePropertiesKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkDisplayModePropertiesKHR *in_info);
#define VK_PRINT_VkDisplayModePropertiesKHR(prefix, in_info) vk_print_VkDisplayModePropertiesKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkDisplayModeCreateInfoKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkDisplayModeCreateInfoKHR *in_info);
#define VK_PRINT_VkDisplayModeCreateInfoKHR(prefix, in_info) vk_print_VkDisplayModeCreateInfoKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkDisplayPlaneCapabilitiesKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkDisplayPlaneCapabilitiesKHR *in_info);
#define VK_PRINT_VkDisplayPlaneCapabilitiesKHR(prefix, in_info) vk_print_VkDisplayPlaneCapabilitiesKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkDisplaySurfaceCreateInfoKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkDisplaySurfaceCreateInfoKHR *in_info);
#define VK_PRINT_VkDisplaySurfaceCreateInfoKHR(prefix, in_info) vk_print_VkDisplaySurfaceCreateInfoKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkDisplayPresentInfoKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkDisplayPresentInfoKHR *in_info);
#define VK_PRINT_VkDisplayPresentInfoKHR(prefix, in_info) vk_print_VkDisplayPresentInfoKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkSurfaceCapabilitiesKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkSurfaceCapabilitiesKHR *in_info);
#define VK_PRINT_VkSurfaceCapabilitiesKHR(prefix, in_info) vk_print_VkSurfaceCapabilitiesKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkAndroidSurfaceCreateInfoKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkAndroidSurfaceCreateInfoKHR *in_info);
#define VK_PRINT_VkAndroidSurfaceCreateInfoKHR(prefix, in_info) vk_print_VkAndroidSurfaceCreateInfoKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkXlibSurfaceCreateInfoKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkXlibSurfaceCreateInfoKHR *in_info);
#define VK_PRINT_VkXlibSurfaceCreateInfoKHR(prefix, in_info) vk_print_VkXlibSurfaceCreateInfoKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkXcbSurfaceCreateInfoKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkXcbSurfaceCreateInfoKHR *in_info);
#define VK_PRINT_VkXcbSurfaceCreateInfoKHR(prefix, in_info) vk_print_VkXcbSurfaceCreateInfoKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkSurfaceFormatKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkSurfaceFormatKHR *in_info);
#define VK_PRINT_VkSurfaceFormatKHR(prefix, in_info) vk_print_VkSurfaceFormatKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkSwapchainCreateInfoKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkSwapchainCreateInfoKHR *in_info);
#define VK_PRINT_VkSwapchainCreateInfoKHR(prefix, in_info) vk_print_VkSwapchainCreateInfoKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPresentInfoKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkPresentInfoKHR *in_info);
#define VK_PRINT_VkPresentInfoKHR(prefix, in_info) vk_print_VkPresentInfoKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkDebugReportCallbackCreateInfoEXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkDebugReportCallbackCreateInfoEXT *in_info);
#define VK_PRINT_VkDebugReportCallbackCreateInfoEXT(prefix, in_info) vk_print_VkDebugReportCallbackCreateInfoEXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkValidationFlagsEXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkValidationFlagsEXT *in_info);
#define VK_PRINT_VkValidationFlagsEXT(prefix, in_info) vk_print_VkValidationFlagsEXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkValidationFeaturesEXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkValidationFeaturesEXT *in_info);
#define VK_PRINT_VkValidationFeaturesEXT(prefix, in_info) vk_print_VkValidationFeaturesEXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkLayerSettingsCreateInfoEXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkLayerSettingsCreateInfoEXT *in_info);
#define VK_PRINT_VkLayerSettingsCreateInfoEXT(prefix, in_info) vk_print_VkLayerSettingsCreateInfoEXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkLayerSettingEXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkLayerSettingEXT *in_info);
#define VK_PRINT_VkLayerSettingEXT(prefix, in_info) vk_print_VkLayerSettingEXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPipelineRasterizationStateRasterizationOrderAMD(int can_log_level, int log_level, FILE*, const char* prefix, const VkPipelineRasterizationStateRasterizationOrderAMD *in_info);
#define VK_PRINT_VkPipelineRasterizationStateRasterizationOrderAMD(prefix, in_info) vk_print_VkPipelineRasterizationStateRasterizationOrderAMD(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkDebugMarkerObjectNameInfoEXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkDebugMarkerObjectNameInfoEXT *in_info);
#define VK_PRINT_VkDebugMarkerObjectNameInfoEXT(prefix, in_info) vk_print_VkDebugMarkerObjectNameInfoEXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkDebugMarkerObjectTagInfoEXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkDebugMarkerObjectTagInfoEXT *in_info);
#define VK_PRINT_VkDebugMarkerObjectTagInfoEXT(prefix, in_info) vk_print_VkDebugMarkerObjectTagInfoEXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkDebugMarkerMarkerInfoEXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkDebugMarkerMarkerInfoEXT *in_info);
#define VK_PRINT_VkDebugMarkerMarkerInfoEXT(prefix, in_info) vk_print_VkDebugMarkerMarkerInfoEXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkDedicatedAllocationImageCreateInfoNV(int can_log_level, int log_level, FILE*, const char* prefix, const VkDedicatedAllocationImageCreateInfoNV *in_info);
#define VK_PRINT_VkDedicatedAllocationImageCreateInfoNV(prefix, in_info) vk_print_VkDedicatedAllocationImageCreateInfoNV(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkDedicatedAllocationBufferCreateInfoNV(int can_log_level, int log_level, FILE*, const char* prefix, const VkDedicatedAllocationBufferCreateInfoNV *in_info);
#define VK_PRINT_VkDedicatedAllocationBufferCreateInfoNV(prefix, in_info) vk_print_VkDedicatedAllocationBufferCreateInfoNV(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkDedicatedAllocationMemoryAllocateInfoNV(int can_log_level, int log_level, FILE*, const char* prefix, const VkDedicatedAllocationMemoryAllocateInfoNV *in_info);
#define VK_PRINT_VkDedicatedAllocationMemoryAllocateInfoNV(prefix, in_info) vk_print_VkDedicatedAllocationMemoryAllocateInfoNV(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkExternalImageFormatPropertiesNV(int can_log_level, int log_level, FILE*, const char* prefix, const VkExternalImageFormatPropertiesNV *in_info);
#define VK_PRINT_VkExternalImageFormatPropertiesNV(prefix, in_info) vk_print_VkExternalImageFormatPropertiesNV(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkExternalMemoryImageCreateInfoNV(int can_log_level, int log_level, FILE*, const char* prefix, const VkExternalMemoryImageCreateInfoNV *in_info);
#define VK_PRINT_VkExternalMemoryImageCreateInfoNV(prefix, in_info) vk_print_VkExternalMemoryImageCreateInfoNV(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkExportMemoryAllocateInfoNV(int can_log_level, int log_level, FILE*, const char* prefix, const VkExportMemoryAllocateInfoNV *in_info);
#define VK_PRINT_VkExportMemoryAllocateInfoNV(prefix, in_info) vk_print_VkExportMemoryAllocateInfoNV(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceDeviceGeneratedCommandsFeaturesNV(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceDeviceGeneratedCommandsFeaturesNV *in_info);
#define VK_PRINT_VkPhysicalDeviceDeviceGeneratedCommandsFeaturesNV(prefix, in_info) vk_print_VkPhysicalDeviceDeviceGeneratedCommandsFeaturesNV(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceDeviceGeneratedCommandsComputeFeaturesNV(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceDeviceGeneratedCommandsComputeFeaturesNV *in_info);
#define VK_PRINT_VkPhysicalDeviceDeviceGeneratedCommandsComputeFeaturesNV(prefix, in_info) vk_print_VkPhysicalDeviceDeviceGeneratedCommandsComputeFeaturesNV(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkDevicePrivateDataCreateInfo(int can_log_level, int log_level, FILE*, const char* prefix, const VkDevicePrivateDataCreateInfo *in_info);
#define VK_PRINT_VkDevicePrivateDataCreateInfo(prefix, in_info) vk_print_VkDevicePrivateDataCreateInfo(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkDevicePrivateDataCreateInfoEXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkDevicePrivateDataCreateInfoEXT *in_info);
#define VK_PRINT_VkDevicePrivateDataCreateInfoEXT(prefix, in_info) vk_print_VkDevicePrivateDataCreateInfoEXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPrivateDataSlotCreateInfo(int can_log_level, int log_level, FILE*, const char* prefix, const VkPrivateDataSlotCreateInfo *in_info);
#define VK_PRINT_VkPrivateDataSlotCreateInfo(prefix, in_info) vk_print_VkPrivateDataSlotCreateInfo(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPrivateDataSlotCreateInfoEXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkPrivateDataSlotCreateInfoEXT *in_info);
#define VK_PRINT_VkPrivateDataSlotCreateInfoEXT(prefix, in_info) vk_print_VkPrivateDataSlotCreateInfoEXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDevicePrivateDataFeatures(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDevicePrivateDataFeatures *in_info);
#define VK_PRINT_VkPhysicalDevicePrivateDataFeatures(prefix, in_info) vk_print_VkPhysicalDevicePrivateDataFeatures(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDevicePrivateDataFeaturesEXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDevicePrivateDataFeaturesEXT *in_info);
#define VK_PRINT_VkPhysicalDevicePrivateDataFeaturesEXT(prefix, in_info) vk_print_VkPhysicalDevicePrivateDataFeaturesEXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceDeviceGeneratedCommandsPropertiesNV(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceDeviceGeneratedCommandsPropertiesNV *in_info);
#define VK_PRINT_VkPhysicalDeviceDeviceGeneratedCommandsPropertiesNV(prefix, in_info) vk_print_VkPhysicalDeviceDeviceGeneratedCommandsPropertiesNV(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceMultiDrawPropertiesEXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceMultiDrawPropertiesEXT *in_info);
#define VK_PRINT_VkPhysicalDeviceMultiDrawPropertiesEXT(prefix, in_info) vk_print_VkPhysicalDeviceMultiDrawPropertiesEXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkGraphicsShaderGroupCreateInfoNV(int can_log_level, int log_level, FILE*, const char* prefix, const VkGraphicsShaderGroupCreateInfoNV *in_info);
#define VK_PRINT_VkGraphicsShaderGroupCreateInfoNV(prefix, in_info) vk_print_VkGraphicsShaderGroupCreateInfoNV(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkGraphicsPipelineShaderGroupsCreateInfoNV(int can_log_level, int log_level, FILE*, const char* prefix, const VkGraphicsPipelineShaderGroupsCreateInfoNV *in_info);
#define VK_PRINT_VkGraphicsPipelineShaderGroupsCreateInfoNV(prefix, in_info) vk_print_VkGraphicsPipelineShaderGroupsCreateInfoNV(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkBindShaderGroupIndirectCommandNV(int can_log_level, int log_level, FILE*, const char* prefix, const VkBindShaderGroupIndirectCommandNV *in_info);
#define VK_PRINT_VkBindShaderGroupIndirectCommandNV(prefix, in_info) vk_print_VkBindShaderGroupIndirectCommandNV(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkBindIndexBufferIndirectCommandNV(int can_log_level, int log_level, FILE*, const char* prefix, const VkBindIndexBufferIndirectCommandNV *in_info);
#define VK_PRINT_VkBindIndexBufferIndirectCommandNV(prefix, in_info) vk_print_VkBindIndexBufferIndirectCommandNV(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkBindVertexBufferIndirectCommandNV(int can_log_level, int log_level, FILE*, const char* prefix, const VkBindVertexBufferIndirectCommandNV *in_info);
#define VK_PRINT_VkBindVertexBufferIndirectCommandNV(prefix, in_info) vk_print_VkBindVertexBufferIndirectCommandNV(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkSetStateFlagsIndirectCommandNV(int can_log_level, int log_level, FILE*, const char* prefix, const VkSetStateFlagsIndirectCommandNV *in_info);
#define VK_PRINT_VkSetStateFlagsIndirectCommandNV(prefix, in_info) vk_print_VkSetStateFlagsIndirectCommandNV(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkIndirectCommandsStreamNV(int can_log_level, int log_level, FILE*, const char* prefix, const VkIndirectCommandsStreamNV *in_info);
#define VK_PRINT_VkIndirectCommandsStreamNV(prefix, in_info) vk_print_VkIndirectCommandsStreamNV(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkIndirectCommandsLayoutTokenNV(int can_log_level, int log_level, FILE*, const char* prefix, const VkIndirectCommandsLayoutTokenNV *in_info);
#define VK_PRINT_VkIndirectCommandsLayoutTokenNV(prefix, in_info) vk_print_VkIndirectCommandsLayoutTokenNV(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkIndirectCommandsLayoutCreateInfoNV(int can_log_level, int log_level, FILE*, const char* prefix, const VkIndirectCommandsLayoutCreateInfoNV *in_info);
#define VK_PRINT_VkIndirectCommandsLayoutCreateInfoNV(prefix, in_info) vk_print_VkIndirectCommandsLayoutCreateInfoNV(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkGeneratedCommandsInfoNV(int can_log_level, int log_level, FILE*, const char* prefix, const VkGeneratedCommandsInfoNV *in_info);
#define VK_PRINT_VkGeneratedCommandsInfoNV(prefix, in_info) vk_print_VkGeneratedCommandsInfoNV(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkGeneratedCommandsMemoryRequirementsInfoNV(int can_log_level, int log_level, FILE*, const char* prefix, const VkGeneratedCommandsMemoryRequirementsInfoNV *in_info);
#define VK_PRINT_VkGeneratedCommandsMemoryRequirementsInfoNV(prefix, in_info) vk_print_VkGeneratedCommandsMemoryRequirementsInfoNV(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPipelineIndirectDeviceAddressInfoNV(int can_log_level, int log_level, FILE*, const char* prefix, const VkPipelineIndirectDeviceAddressInfoNV *in_info);
#define VK_PRINT_VkPipelineIndirectDeviceAddressInfoNV(prefix, in_info) vk_print_VkPipelineIndirectDeviceAddressInfoNV(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkBindPipelineIndirectCommandNV(int can_log_level, int log_level, FILE*, const char* prefix, const VkBindPipelineIndirectCommandNV *in_info);
#define VK_PRINT_VkBindPipelineIndirectCommandNV(prefix, in_info) vk_print_VkBindPipelineIndirectCommandNV(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceFeatures2(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceFeatures2 *in_info);
#define VK_PRINT_VkPhysicalDeviceFeatures2(prefix, in_info) vk_print_VkPhysicalDeviceFeatures2(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceFeatures2KHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceFeatures2KHR *in_info);
#define VK_PRINT_VkPhysicalDeviceFeatures2KHR(prefix, in_info) vk_print_VkPhysicalDeviceFeatures2KHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceProperties2(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceProperties2 *in_info);
#define VK_PRINT_VkPhysicalDeviceProperties2(prefix, in_info) vk_print_VkPhysicalDeviceProperties2(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceProperties2KHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceProperties2KHR *in_info);
#define VK_PRINT_VkPhysicalDeviceProperties2KHR(prefix, in_info) vk_print_VkPhysicalDeviceProperties2KHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkFormatProperties2(int can_log_level, int log_level, FILE*, const char* prefix, const VkFormatProperties2 *in_info);
#define VK_PRINT_VkFormatProperties2(prefix, in_info) vk_print_VkFormatProperties2(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkFormatProperties2KHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkFormatProperties2KHR *in_info);
#define VK_PRINT_VkFormatProperties2KHR(prefix, in_info) vk_print_VkFormatProperties2KHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkImageFormatProperties2(int can_log_level, int log_level, FILE*, const char* prefix, const VkImageFormatProperties2 *in_info);
#define VK_PRINT_VkImageFormatProperties2(prefix, in_info) vk_print_VkImageFormatProperties2(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkImageFormatProperties2KHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkImageFormatProperties2KHR *in_info);
#define VK_PRINT_VkImageFormatProperties2KHR(prefix, in_info) vk_print_VkImageFormatProperties2KHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceImageFormatInfo2(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceImageFormatInfo2 *in_info);
#define VK_PRINT_VkPhysicalDeviceImageFormatInfo2(prefix, in_info) vk_print_VkPhysicalDeviceImageFormatInfo2(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceImageFormatInfo2KHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceImageFormatInfo2KHR *in_info);
#define VK_PRINT_VkPhysicalDeviceImageFormatInfo2KHR(prefix, in_info) vk_print_VkPhysicalDeviceImageFormatInfo2KHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkQueueFamilyProperties2(int can_log_level, int log_level, FILE*, const char* prefix, const VkQueueFamilyProperties2 *in_info);
#define VK_PRINT_VkQueueFamilyProperties2(prefix, in_info) vk_print_VkQueueFamilyProperties2(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkQueueFamilyProperties2KHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkQueueFamilyProperties2KHR *in_info);
#define VK_PRINT_VkQueueFamilyProperties2KHR(prefix, in_info) vk_print_VkQueueFamilyProperties2KHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceMemoryProperties2(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceMemoryProperties2 *in_info);
#define VK_PRINT_VkPhysicalDeviceMemoryProperties2(prefix, in_info) vk_print_VkPhysicalDeviceMemoryProperties2(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceMemoryProperties2KHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceMemoryProperties2KHR *in_info);
#define VK_PRINT_VkPhysicalDeviceMemoryProperties2KHR(prefix, in_info) vk_print_VkPhysicalDeviceMemoryProperties2KHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkSparseImageFormatProperties2(int can_log_level, int log_level, FILE*, const char* prefix, const VkSparseImageFormatProperties2 *in_info);
#define VK_PRINT_VkSparseImageFormatProperties2(prefix, in_info) vk_print_VkSparseImageFormatProperties2(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkSparseImageFormatProperties2KHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkSparseImageFormatProperties2KHR *in_info);
#define VK_PRINT_VkSparseImageFormatProperties2KHR(prefix, in_info) vk_print_VkSparseImageFormatProperties2KHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceSparseImageFormatInfo2(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceSparseImageFormatInfo2 *in_info);
#define VK_PRINT_VkPhysicalDeviceSparseImageFormatInfo2(prefix, in_info) vk_print_VkPhysicalDeviceSparseImageFormatInfo2(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceSparseImageFormatInfo2KHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceSparseImageFormatInfo2KHR *in_info);
#define VK_PRINT_VkPhysicalDeviceSparseImageFormatInfo2KHR(prefix, in_info) vk_print_VkPhysicalDeviceSparseImageFormatInfo2KHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDevicePushDescriptorPropertiesKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDevicePushDescriptorPropertiesKHR *in_info);
#define VK_PRINT_VkPhysicalDevicePushDescriptorPropertiesKHR(prefix, in_info) vk_print_VkPhysicalDevicePushDescriptorPropertiesKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkConformanceVersion(int can_log_level, int log_level, FILE*, const char* prefix, const VkConformanceVersion *in_info);
#define VK_PRINT_VkConformanceVersion(prefix, in_info) vk_print_VkConformanceVersion(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkConformanceVersionKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkConformanceVersionKHR *in_info);
#define VK_PRINT_VkConformanceVersionKHR(prefix, in_info) vk_print_VkConformanceVersionKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceDriverProperties(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceDriverProperties *in_info);
#define VK_PRINT_VkPhysicalDeviceDriverProperties(prefix, in_info) vk_print_VkPhysicalDeviceDriverProperties(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceDriverPropertiesKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceDriverPropertiesKHR *in_info);
#define VK_PRINT_VkPhysicalDeviceDriverPropertiesKHR(prefix, in_info) vk_print_VkPhysicalDeviceDriverPropertiesKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPresentRegionsKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkPresentRegionsKHR *in_info);
#define VK_PRINT_VkPresentRegionsKHR(prefix, in_info) vk_print_VkPresentRegionsKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPresentRegionKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkPresentRegionKHR *in_info);
#define VK_PRINT_VkPresentRegionKHR(prefix, in_info) vk_print_VkPresentRegionKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkRectLayerKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkRectLayerKHR *in_info);
#define VK_PRINT_VkRectLayerKHR(prefix, in_info) vk_print_VkRectLayerKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceVariablePointersFeatures(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceVariablePointersFeatures *in_info);
#define VK_PRINT_VkPhysicalDeviceVariablePointersFeatures(prefix, in_info) vk_print_VkPhysicalDeviceVariablePointersFeatures(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceVariablePointersFeaturesKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceVariablePointersFeaturesKHR *in_info);
#define VK_PRINT_VkPhysicalDeviceVariablePointersFeaturesKHR(prefix, in_info) vk_print_VkPhysicalDeviceVariablePointersFeaturesKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceVariablePointerFeaturesKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceVariablePointerFeaturesKHR *in_info);
#define VK_PRINT_VkPhysicalDeviceVariablePointerFeaturesKHR(prefix, in_info) vk_print_VkPhysicalDeviceVariablePointerFeaturesKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceVariablePointerFeatures(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceVariablePointerFeatures *in_info);
#define VK_PRINT_VkPhysicalDeviceVariablePointerFeatures(prefix, in_info) vk_print_VkPhysicalDeviceVariablePointerFeatures(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkExternalMemoryProperties(int can_log_level, int log_level, FILE*, const char* prefix, const VkExternalMemoryProperties *in_info);
#define VK_PRINT_VkExternalMemoryProperties(prefix, in_info) vk_print_VkExternalMemoryProperties(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkExternalMemoryPropertiesKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkExternalMemoryPropertiesKHR *in_info);
#define VK_PRINT_VkExternalMemoryPropertiesKHR(prefix, in_info) vk_print_VkExternalMemoryPropertiesKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceExternalImageFormatInfo(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceExternalImageFormatInfo *in_info);
#define VK_PRINT_VkPhysicalDeviceExternalImageFormatInfo(prefix, in_info) vk_print_VkPhysicalDeviceExternalImageFormatInfo(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceExternalImageFormatInfoKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceExternalImageFormatInfoKHR *in_info);
#define VK_PRINT_VkPhysicalDeviceExternalImageFormatInfoKHR(prefix, in_info) vk_print_VkPhysicalDeviceExternalImageFormatInfoKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkExternalImageFormatProperties(int can_log_level, int log_level, FILE*, const char* prefix, const VkExternalImageFormatProperties *in_info);
#define VK_PRINT_VkExternalImageFormatProperties(prefix, in_info) vk_print_VkExternalImageFormatProperties(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkExternalImageFormatPropertiesKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkExternalImageFormatPropertiesKHR *in_info);
#define VK_PRINT_VkExternalImageFormatPropertiesKHR(prefix, in_info) vk_print_VkExternalImageFormatPropertiesKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceExternalBufferInfo(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceExternalBufferInfo *in_info);
#define VK_PRINT_VkPhysicalDeviceExternalBufferInfo(prefix, in_info) vk_print_VkPhysicalDeviceExternalBufferInfo(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceExternalBufferInfoKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceExternalBufferInfoKHR *in_info);
#define VK_PRINT_VkPhysicalDeviceExternalBufferInfoKHR(prefix, in_info) vk_print_VkPhysicalDeviceExternalBufferInfoKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkExternalBufferProperties(int can_log_level, int log_level, FILE*, const char* prefix, const VkExternalBufferProperties *in_info);
#define VK_PRINT_VkExternalBufferProperties(prefix, in_info) vk_print_VkExternalBufferProperties(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkExternalBufferPropertiesKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkExternalBufferPropertiesKHR *in_info);
#define VK_PRINT_VkExternalBufferPropertiesKHR(prefix, in_info) vk_print_VkExternalBufferPropertiesKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceIDProperties(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceIDProperties *in_info);
#define VK_PRINT_VkPhysicalDeviceIDProperties(prefix, in_info) vk_print_VkPhysicalDeviceIDProperties(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceIDPropertiesKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceIDPropertiesKHR *in_info);
#define VK_PRINT_VkPhysicalDeviceIDPropertiesKHR(prefix, in_info) vk_print_VkPhysicalDeviceIDPropertiesKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkExternalMemoryImageCreateInfo(int can_log_level, int log_level, FILE*, const char* prefix, const VkExternalMemoryImageCreateInfo *in_info);
#define VK_PRINT_VkExternalMemoryImageCreateInfo(prefix, in_info) vk_print_VkExternalMemoryImageCreateInfo(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkExternalMemoryImageCreateInfoKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkExternalMemoryImageCreateInfoKHR *in_info);
#define VK_PRINT_VkExternalMemoryImageCreateInfoKHR(prefix, in_info) vk_print_VkExternalMemoryImageCreateInfoKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkExternalMemoryBufferCreateInfo(int can_log_level, int log_level, FILE*, const char* prefix, const VkExternalMemoryBufferCreateInfo *in_info);
#define VK_PRINT_VkExternalMemoryBufferCreateInfo(prefix, in_info) vk_print_VkExternalMemoryBufferCreateInfo(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkExternalMemoryBufferCreateInfoKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkExternalMemoryBufferCreateInfoKHR *in_info);
#define VK_PRINT_VkExternalMemoryBufferCreateInfoKHR(prefix, in_info) vk_print_VkExternalMemoryBufferCreateInfoKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkExportMemoryAllocateInfo(int can_log_level, int log_level, FILE*, const char* prefix, const VkExportMemoryAllocateInfo *in_info);
#define VK_PRINT_VkExportMemoryAllocateInfo(prefix, in_info) vk_print_VkExportMemoryAllocateInfo(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkExportMemoryAllocateInfoKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkExportMemoryAllocateInfoKHR *in_info);
#define VK_PRINT_VkExportMemoryAllocateInfoKHR(prefix, in_info) vk_print_VkExportMemoryAllocateInfoKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkImportMemoryFdInfoKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkImportMemoryFdInfoKHR *in_info);
#define VK_PRINT_VkImportMemoryFdInfoKHR(prefix, in_info) vk_print_VkImportMemoryFdInfoKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkMemoryFdPropertiesKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkMemoryFdPropertiesKHR *in_info);
#define VK_PRINT_VkMemoryFdPropertiesKHR(prefix, in_info) vk_print_VkMemoryFdPropertiesKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkMemoryGetFdInfoKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkMemoryGetFdInfoKHR *in_info);
#define VK_PRINT_VkMemoryGetFdInfoKHR(prefix, in_info) vk_print_VkMemoryGetFdInfoKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceExternalSemaphoreInfo(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceExternalSemaphoreInfo *in_info);
#define VK_PRINT_VkPhysicalDeviceExternalSemaphoreInfo(prefix, in_info) vk_print_VkPhysicalDeviceExternalSemaphoreInfo(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceExternalSemaphoreInfoKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceExternalSemaphoreInfoKHR *in_info);
#define VK_PRINT_VkPhysicalDeviceExternalSemaphoreInfoKHR(prefix, in_info) vk_print_VkPhysicalDeviceExternalSemaphoreInfoKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkExternalSemaphoreProperties(int can_log_level, int log_level, FILE*, const char* prefix, const VkExternalSemaphoreProperties *in_info);
#define VK_PRINT_VkExternalSemaphoreProperties(prefix, in_info) vk_print_VkExternalSemaphoreProperties(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkExternalSemaphorePropertiesKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkExternalSemaphorePropertiesKHR *in_info);
#define VK_PRINT_VkExternalSemaphorePropertiesKHR(prefix, in_info) vk_print_VkExternalSemaphorePropertiesKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkExportSemaphoreCreateInfo(int can_log_level, int log_level, FILE*, const char* prefix, const VkExportSemaphoreCreateInfo *in_info);
#define VK_PRINT_VkExportSemaphoreCreateInfo(prefix, in_info) vk_print_VkExportSemaphoreCreateInfo(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkExportSemaphoreCreateInfoKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkExportSemaphoreCreateInfoKHR *in_info);
#define VK_PRINT_VkExportSemaphoreCreateInfoKHR(prefix, in_info) vk_print_VkExportSemaphoreCreateInfoKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkImportSemaphoreFdInfoKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkImportSemaphoreFdInfoKHR *in_info);
#define VK_PRINT_VkImportSemaphoreFdInfoKHR(prefix, in_info) vk_print_VkImportSemaphoreFdInfoKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkSemaphoreGetFdInfoKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkSemaphoreGetFdInfoKHR *in_info);
#define VK_PRINT_VkSemaphoreGetFdInfoKHR(prefix, in_info) vk_print_VkSemaphoreGetFdInfoKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceExternalFenceInfo(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceExternalFenceInfo *in_info);
#define VK_PRINT_VkPhysicalDeviceExternalFenceInfo(prefix, in_info) vk_print_VkPhysicalDeviceExternalFenceInfo(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceExternalFenceInfoKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceExternalFenceInfoKHR *in_info);
#define VK_PRINT_VkPhysicalDeviceExternalFenceInfoKHR(prefix, in_info) vk_print_VkPhysicalDeviceExternalFenceInfoKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkExternalFenceProperties(int can_log_level, int log_level, FILE*, const char* prefix, const VkExternalFenceProperties *in_info);
#define VK_PRINT_VkExternalFenceProperties(prefix, in_info) vk_print_VkExternalFenceProperties(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkExternalFencePropertiesKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkExternalFencePropertiesKHR *in_info);
#define VK_PRINT_VkExternalFencePropertiesKHR(prefix, in_info) vk_print_VkExternalFencePropertiesKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkExportFenceCreateInfo(int can_log_level, int log_level, FILE*, const char* prefix, const VkExportFenceCreateInfo *in_info);
#define VK_PRINT_VkExportFenceCreateInfo(prefix, in_info) vk_print_VkExportFenceCreateInfo(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkExportFenceCreateInfoKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkExportFenceCreateInfoKHR *in_info);
#define VK_PRINT_VkExportFenceCreateInfoKHR(prefix, in_info) vk_print_VkExportFenceCreateInfoKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkImportFenceFdInfoKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkImportFenceFdInfoKHR *in_info);
#define VK_PRINT_VkImportFenceFdInfoKHR(prefix, in_info) vk_print_VkImportFenceFdInfoKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkFenceGetFdInfoKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkFenceGetFdInfoKHR *in_info);
#define VK_PRINT_VkFenceGetFdInfoKHR(prefix, in_info) vk_print_VkFenceGetFdInfoKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceMultiviewFeatures(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceMultiviewFeatures *in_info);
#define VK_PRINT_VkPhysicalDeviceMultiviewFeatures(prefix, in_info) vk_print_VkPhysicalDeviceMultiviewFeatures(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceMultiviewFeaturesKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceMultiviewFeaturesKHR *in_info);
#define VK_PRINT_VkPhysicalDeviceMultiviewFeaturesKHR(prefix, in_info) vk_print_VkPhysicalDeviceMultiviewFeaturesKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceMultiviewProperties(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceMultiviewProperties *in_info);
#define VK_PRINT_VkPhysicalDeviceMultiviewProperties(prefix, in_info) vk_print_VkPhysicalDeviceMultiviewProperties(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceMultiviewPropertiesKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceMultiviewPropertiesKHR *in_info);
#define VK_PRINT_VkPhysicalDeviceMultiviewPropertiesKHR(prefix, in_info) vk_print_VkPhysicalDeviceMultiviewPropertiesKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkRenderPassMultiviewCreateInfo(int can_log_level, int log_level, FILE*, const char* prefix, const VkRenderPassMultiviewCreateInfo *in_info);
#define VK_PRINT_VkRenderPassMultiviewCreateInfo(prefix, in_info) vk_print_VkRenderPassMultiviewCreateInfo(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkRenderPassMultiviewCreateInfoKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkRenderPassMultiviewCreateInfoKHR *in_info);
#define VK_PRINT_VkRenderPassMultiviewCreateInfoKHR(prefix, in_info) vk_print_VkRenderPassMultiviewCreateInfoKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkSurfaceCapabilities2EXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkSurfaceCapabilities2EXT *in_info);
#define VK_PRINT_VkSurfaceCapabilities2EXT(prefix, in_info) vk_print_VkSurfaceCapabilities2EXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkDisplayPowerInfoEXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkDisplayPowerInfoEXT *in_info);
#define VK_PRINT_VkDisplayPowerInfoEXT(prefix, in_info) vk_print_VkDisplayPowerInfoEXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkDeviceEventInfoEXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkDeviceEventInfoEXT *in_info);
#define VK_PRINT_VkDeviceEventInfoEXT(prefix, in_info) vk_print_VkDeviceEventInfoEXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkDisplayEventInfoEXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkDisplayEventInfoEXT *in_info);
#define VK_PRINT_VkDisplayEventInfoEXT(prefix, in_info) vk_print_VkDisplayEventInfoEXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkSwapchainCounterCreateInfoEXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkSwapchainCounterCreateInfoEXT *in_info);
#define VK_PRINT_VkSwapchainCounterCreateInfoEXT(prefix, in_info) vk_print_VkSwapchainCounterCreateInfoEXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceGroupPropertiesKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceGroupPropertiesKHR *in_info);
#define VK_PRINT_VkPhysicalDeviceGroupPropertiesKHR(prefix, in_info) vk_print_VkPhysicalDeviceGroupPropertiesKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkMemoryAllocateFlagsInfo(int can_log_level, int log_level, FILE*, const char* prefix, const VkMemoryAllocateFlagsInfo *in_info);
#define VK_PRINT_VkMemoryAllocateFlagsInfo(prefix, in_info) vk_print_VkMemoryAllocateFlagsInfo(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkMemoryAllocateFlagsInfoKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkMemoryAllocateFlagsInfoKHR *in_info);
#define VK_PRINT_VkMemoryAllocateFlagsInfoKHR(prefix, in_info) vk_print_VkMemoryAllocateFlagsInfoKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkBindBufferMemoryInfo(int can_log_level, int log_level, FILE*, const char* prefix, const VkBindBufferMemoryInfo *in_info);
#define VK_PRINT_VkBindBufferMemoryInfo(prefix, in_info) vk_print_VkBindBufferMemoryInfo(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkBindBufferMemoryInfoKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkBindBufferMemoryInfoKHR *in_info);
#define VK_PRINT_VkBindBufferMemoryInfoKHR(prefix, in_info) vk_print_VkBindBufferMemoryInfoKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkBindBufferMemoryDeviceGroupInfo(int can_log_level, int log_level, FILE*, const char* prefix, const VkBindBufferMemoryDeviceGroupInfo *in_info);
#define VK_PRINT_VkBindBufferMemoryDeviceGroupInfo(prefix, in_info) vk_print_VkBindBufferMemoryDeviceGroupInfo(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkBindBufferMemoryDeviceGroupInfoKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkBindBufferMemoryDeviceGroupInfoKHR *in_info);
#define VK_PRINT_VkBindBufferMemoryDeviceGroupInfoKHR(prefix, in_info) vk_print_VkBindBufferMemoryDeviceGroupInfoKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkBindImageMemoryInfo(int can_log_level, int log_level, FILE*, const char* prefix, const VkBindImageMemoryInfo *in_info);
#define VK_PRINT_VkBindImageMemoryInfo(prefix, in_info) vk_print_VkBindImageMemoryInfo(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkBindImageMemoryInfoKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkBindImageMemoryInfoKHR *in_info);
#define VK_PRINT_VkBindImageMemoryInfoKHR(prefix, in_info) vk_print_VkBindImageMemoryInfoKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkBindImageMemoryDeviceGroupInfo(int can_log_level, int log_level, FILE*, const char* prefix, const VkBindImageMemoryDeviceGroupInfo *in_info);
#define VK_PRINT_VkBindImageMemoryDeviceGroupInfo(prefix, in_info) vk_print_VkBindImageMemoryDeviceGroupInfo(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkBindImageMemoryDeviceGroupInfoKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkBindImageMemoryDeviceGroupInfoKHR *in_info);
#define VK_PRINT_VkBindImageMemoryDeviceGroupInfoKHR(prefix, in_info) vk_print_VkBindImageMemoryDeviceGroupInfoKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkDeviceGroupRenderPassBeginInfo(int can_log_level, int log_level, FILE*, const char* prefix, const VkDeviceGroupRenderPassBeginInfo *in_info);
#define VK_PRINT_VkDeviceGroupRenderPassBeginInfo(prefix, in_info) vk_print_VkDeviceGroupRenderPassBeginInfo(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkDeviceGroupRenderPassBeginInfoKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkDeviceGroupRenderPassBeginInfoKHR *in_info);
#define VK_PRINT_VkDeviceGroupRenderPassBeginInfoKHR(prefix, in_info) vk_print_VkDeviceGroupRenderPassBeginInfoKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkDeviceGroupCommandBufferBeginInfo(int can_log_level, int log_level, FILE*, const char* prefix, const VkDeviceGroupCommandBufferBeginInfo *in_info);
#define VK_PRINT_VkDeviceGroupCommandBufferBeginInfo(prefix, in_info) vk_print_VkDeviceGroupCommandBufferBeginInfo(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkDeviceGroupCommandBufferBeginInfoKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkDeviceGroupCommandBufferBeginInfoKHR *in_info);
#define VK_PRINT_VkDeviceGroupCommandBufferBeginInfoKHR(prefix, in_info) vk_print_VkDeviceGroupCommandBufferBeginInfoKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkDeviceGroupSubmitInfo(int can_log_level, int log_level, FILE*, const char* prefix, const VkDeviceGroupSubmitInfo *in_info);
#define VK_PRINT_VkDeviceGroupSubmitInfo(prefix, in_info) vk_print_VkDeviceGroupSubmitInfo(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkDeviceGroupSubmitInfoKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkDeviceGroupSubmitInfoKHR *in_info);
#define VK_PRINT_VkDeviceGroupSubmitInfoKHR(prefix, in_info) vk_print_VkDeviceGroupSubmitInfoKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkDeviceGroupBindSparseInfo(int can_log_level, int log_level, FILE*, const char* prefix, const VkDeviceGroupBindSparseInfo *in_info);
#define VK_PRINT_VkDeviceGroupBindSparseInfo(prefix, in_info) vk_print_VkDeviceGroupBindSparseInfo(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkDeviceGroupBindSparseInfoKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkDeviceGroupBindSparseInfoKHR *in_info);
#define VK_PRINT_VkDeviceGroupBindSparseInfoKHR(prefix, in_info) vk_print_VkDeviceGroupBindSparseInfoKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkDeviceGroupPresentCapabilitiesKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkDeviceGroupPresentCapabilitiesKHR *in_info);
#define VK_PRINT_VkDeviceGroupPresentCapabilitiesKHR(prefix, in_info) vk_print_VkDeviceGroupPresentCapabilitiesKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkImageSwapchainCreateInfoKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkImageSwapchainCreateInfoKHR *in_info);
#define VK_PRINT_VkImageSwapchainCreateInfoKHR(prefix, in_info) vk_print_VkImageSwapchainCreateInfoKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkBindImageMemorySwapchainInfoKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkBindImageMemorySwapchainInfoKHR *in_info);
#define VK_PRINT_VkBindImageMemorySwapchainInfoKHR(prefix, in_info) vk_print_VkBindImageMemorySwapchainInfoKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkAcquireNextImageInfoKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkAcquireNextImageInfoKHR *in_info);
#define VK_PRINT_VkAcquireNextImageInfoKHR(prefix, in_info) vk_print_VkAcquireNextImageInfoKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkDeviceGroupPresentInfoKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkDeviceGroupPresentInfoKHR *in_info);
#define VK_PRINT_VkDeviceGroupPresentInfoKHR(prefix, in_info) vk_print_VkDeviceGroupPresentInfoKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkDeviceGroupDeviceCreateInfo(int can_log_level, int log_level, FILE*, const char* prefix, const VkDeviceGroupDeviceCreateInfo *in_info);
#define VK_PRINT_VkDeviceGroupDeviceCreateInfo(prefix, in_info) vk_print_VkDeviceGroupDeviceCreateInfo(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkDeviceGroupDeviceCreateInfoKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkDeviceGroupDeviceCreateInfoKHR *in_info);
#define VK_PRINT_VkDeviceGroupDeviceCreateInfoKHR(prefix, in_info) vk_print_VkDeviceGroupDeviceCreateInfoKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkDeviceGroupSwapchainCreateInfoKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkDeviceGroupSwapchainCreateInfoKHR *in_info);
#define VK_PRINT_VkDeviceGroupSwapchainCreateInfoKHR(prefix, in_info) vk_print_VkDeviceGroupSwapchainCreateInfoKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkDescriptorUpdateTemplateEntry(int can_log_level, int log_level, FILE*, const char* prefix, const VkDescriptorUpdateTemplateEntry *in_info);
#define VK_PRINT_VkDescriptorUpdateTemplateEntry(prefix, in_info) vk_print_VkDescriptorUpdateTemplateEntry(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkDescriptorUpdateTemplateEntryKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkDescriptorUpdateTemplateEntryKHR *in_info);
#define VK_PRINT_VkDescriptorUpdateTemplateEntryKHR(prefix, in_info) vk_print_VkDescriptorUpdateTemplateEntryKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkDescriptorUpdateTemplateCreateInfo(int can_log_level, int log_level, FILE*, const char* prefix, const VkDescriptorUpdateTemplateCreateInfo *in_info);
#define VK_PRINT_VkDescriptorUpdateTemplateCreateInfo(prefix, in_info) vk_print_VkDescriptorUpdateTemplateCreateInfo(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkDescriptorUpdateTemplateCreateInfoKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkDescriptorUpdateTemplateCreateInfoKHR *in_info);
#define VK_PRINT_VkDescriptorUpdateTemplateCreateInfoKHR(prefix, in_info) vk_print_VkDescriptorUpdateTemplateCreateInfoKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkXYColorEXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkXYColorEXT *in_info);
#define VK_PRINT_VkXYColorEXT(prefix, in_info) vk_print_VkXYColorEXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDevicePresentIdFeaturesKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDevicePresentIdFeaturesKHR *in_info);
#define VK_PRINT_VkPhysicalDevicePresentIdFeaturesKHR(prefix, in_info) vk_print_VkPhysicalDevicePresentIdFeaturesKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPresentIdKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkPresentIdKHR *in_info);
#define VK_PRINT_VkPresentIdKHR(prefix, in_info) vk_print_VkPresentIdKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDevicePresentWaitFeaturesKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDevicePresentWaitFeaturesKHR *in_info);
#define VK_PRINT_VkPhysicalDevicePresentWaitFeaturesKHR(prefix, in_info) vk_print_VkPhysicalDevicePresentWaitFeaturesKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkHdrMetadataEXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkHdrMetadataEXT *in_info);
#define VK_PRINT_VkHdrMetadataEXT(prefix, in_info) vk_print_VkHdrMetadataEXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkDisplayNativeHdrSurfaceCapabilitiesAMD(int can_log_level, int log_level, FILE*, const char* prefix, const VkDisplayNativeHdrSurfaceCapabilitiesAMD *in_info);
#define VK_PRINT_VkDisplayNativeHdrSurfaceCapabilitiesAMD(prefix, in_info) vk_print_VkDisplayNativeHdrSurfaceCapabilitiesAMD(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkSwapchainDisplayNativeHdrCreateInfoAMD(int can_log_level, int log_level, FILE*, const char* prefix, const VkSwapchainDisplayNativeHdrCreateInfoAMD *in_info);
#define VK_PRINT_VkSwapchainDisplayNativeHdrCreateInfoAMD(prefix, in_info) vk_print_VkSwapchainDisplayNativeHdrCreateInfoAMD(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkRefreshCycleDurationGOOGLE(int can_log_level, int log_level, FILE*, const char* prefix, const VkRefreshCycleDurationGOOGLE *in_info);
#define VK_PRINT_VkRefreshCycleDurationGOOGLE(prefix, in_info) vk_print_VkRefreshCycleDurationGOOGLE(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPastPresentationTimingGOOGLE(int can_log_level, int log_level, FILE*, const char* prefix, const VkPastPresentationTimingGOOGLE *in_info);
#define VK_PRINT_VkPastPresentationTimingGOOGLE(prefix, in_info) vk_print_VkPastPresentationTimingGOOGLE(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPresentTimesInfoGOOGLE(int can_log_level, int log_level, FILE*, const char* prefix, const VkPresentTimesInfoGOOGLE *in_info);
#define VK_PRINT_VkPresentTimesInfoGOOGLE(prefix, in_info) vk_print_VkPresentTimesInfoGOOGLE(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPresentTimeGOOGLE(int can_log_level, int log_level, FILE*, const char* prefix, const VkPresentTimeGOOGLE *in_info);
#define VK_PRINT_VkPresentTimeGOOGLE(prefix, in_info) vk_print_VkPresentTimeGOOGLE(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkViewportWScalingNV(int can_log_level, int log_level, FILE*, const char* prefix, const VkViewportWScalingNV *in_info);
#define VK_PRINT_VkViewportWScalingNV(prefix, in_info) vk_print_VkViewportWScalingNV(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPipelineViewportWScalingStateCreateInfoNV(int can_log_level, int log_level, FILE*, const char* prefix, const VkPipelineViewportWScalingStateCreateInfoNV *in_info);
#define VK_PRINT_VkPipelineViewportWScalingStateCreateInfoNV(prefix, in_info) vk_print_VkPipelineViewportWScalingStateCreateInfoNV(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkViewportSwizzleNV(int can_log_level, int log_level, FILE*, const char* prefix, const VkViewportSwizzleNV *in_info);
#define VK_PRINT_VkViewportSwizzleNV(prefix, in_info) vk_print_VkViewportSwizzleNV(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPipelineViewportSwizzleStateCreateInfoNV(int can_log_level, int log_level, FILE*, const char* prefix, const VkPipelineViewportSwizzleStateCreateInfoNV *in_info);
#define VK_PRINT_VkPipelineViewportSwizzleStateCreateInfoNV(prefix, in_info) vk_print_VkPipelineViewportSwizzleStateCreateInfoNV(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceDiscardRectanglePropertiesEXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceDiscardRectanglePropertiesEXT *in_info);
#define VK_PRINT_VkPhysicalDeviceDiscardRectanglePropertiesEXT(prefix, in_info) vk_print_VkPhysicalDeviceDiscardRectanglePropertiesEXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPipelineDiscardRectangleStateCreateInfoEXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkPipelineDiscardRectangleStateCreateInfoEXT *in_info);
#define VK_PRINT_VkPipelineDiscardRectangleStateCreateInfoEXT(prefix, in_info) vk_print_VkPipelineDiscardRectangleStateCreateInfoEXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX *in_info);
#define VK_PRINT_VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX(prefix, in_info) vk_print_VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkInputAttachmentAspectReference(int can_log_level, int log_level, FILE*, const char* prefix, const VkInputAttachmentAspectReference *in_info);
#define VK_PRINT_VkInputAttachmentAspectReference(prefix, in_info) vk_print_VkInputAttachmentAspectReference(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkInputAttachmentAspectReferenceKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkInputAttachmentAspectReferenceKHR *in_info);
#define VK_PRINT_VkInputAttachmentAspectReferenceKHR(prefix, in_info) vk_print_VkInputAttachmentAspectReferenceKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkRenderPassInputAttachmentAspectCreateInfo(int can_log_level, int log_level, FILE*, const char* prefix, const VkRenderPassInputAttachmentAspectCreateInfo *in_info);
#define VK_PRINT_VkRenderPassInputAttachmentAspectCreateInfo(prefix, in_info) vk_print_VkRenderPassInputAttachmentAspectCreateInfo(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkRenderPassInputAttachmentAspectCreateInfoKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkRenderPassInputAttachmentAspectCreateInfoKHR *in_info);
#define VK_PRINT_VkRenderPassInputAttachmentAspectCreateInfoKHR(prefix, in_info) vk_print_VkRenderPassInputAttachmentAspectCreateInfoKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceSurfaceInfo2KHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceSurfaceInfo2KHR *in_info);
#define VK_PRINT_VkPhysicalDeviceSurfaceInfo2KHR(prefix, in_info) vk_print_VkPhysicalDeviceSurfaceInfo2KHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkSurfaceCapabilities2KHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkSurfaceCapabilities2KHR *in_info);
#define VK_PRINT_VkSurfaceCapabilities2KHR(prefix, in_info) vk_print_VkSurfaceCapabilities2KHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkSurfaceFormat2KHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkSurfaceFormat2KHR *in_info);
#define VK_PRINT_VkSurfaceFormat2KHR(prefix, in_info) vk_print_VkSurfaceFormat2KHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkDisplayProperties2KHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkDisplayProperties2KHR *in_info);
#define VK_PRINT_VkDisplayProperties2KHR(prefix, in_info) vk_print_VkDisplayProperties2KHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkDisplayPlaneProperties2KHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkDisplayPlaneProperties2KHR *in_info);
#define VK_PRINT_VkDisplayPlaneProperties2KHR(prefix, in_info) vk_print_VkDisplayPlaneProperties2KHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkDisplayModeProperties2KHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkDisplayModeProperties2KHR *in_info);
#define VK_PRINT_VkDisplayModeProperties2KHR(prefix, in_info) vk_print_VkDisplayModeProperties2KHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkDisplayPlaneInfo2KHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkDisplayPlaneInfo2KHR *in_info);
#define VK_PRINT_VkDisplayPlaneInfo2KHR(prefix, in_info) vk_print_VkDisplayPlaneInfo2KHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkDisplayPlaneCapabilities2KHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkDisplayPlaneCapabilities2KHR *in_info);
#define VK_PRINT_VkDisplayPlaneCapabilities2KHR(prefix, in_info) vk_print_VkDisplayPlaneCapabilities2KHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkSharedPresentSurfaceCapabilitiesKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkSharedPresentSurfaceCapabilitiesKHR *in_info);
#define VK_PRINT_VkSharedPresentSurfaceCapabilitiesKHR(prefix, in_info) vk_print_VkSharedPresentSurfaceCapabilitiesKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDevice16BitStorageFeatures(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDevice16BitStorageFeatures *in_info);
#define VK_PRINT_VkPhysicalDevice16BitStorageFeatures(prefix, in_info) vk_print_VkPhysicalDevice16BitStorageFeatures(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDevice16BitStorageFeaturesKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDevice16BitStorageFeaturesKHR *in_info);
#define VK_PRINT_VkPhysicalDevice16BitStorageFeaturesKHR(prefix, in_info) vk_print_VkPhysicalDevice16BitStorageFeaturesKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceSubgroupProperties(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceSubgroupProperties *in_info);
#define VK_PRINT_VkPhysicalDeviceSubgroupProperties(prefix, in_info) vk_print_VkPhysicalDeviceSubgroupProperties(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceShaderSubgroupExtendedTypesFeatures(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceShaderSubgroupExtendedTypesFeatures *in_info);
#define VK_PRINT_VkPhysicalDeviceShaderSubgroupExtendedTypesFeatures(prefix, in_info) vk_print_VkPhysicalDeviceShaderSubgroupExtendedTypesFeatures(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceShaderSubgroupExtendedTypesFeaturesKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceShaderSubgroupExtendedTypesFeaturesKHR *in_info);
#define VK_PRINT_VkPhysicalDeviceShaderSubgroupExtendedTypesFeaturesKHR(prefix, in_info) vk_print_VkPhysicalDeviceShaderSubgroupExtendedTypesFeaturesKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkBufferMemoryRequirementsInfo2(int can_log_level, int log_level, FILE*, const char* prefix, const VkBufferMemoryRequirementsInfo2 *in_info);
#define VK_PRINT_VkBufferMemoryRequirementsInfo2(prefix, in_info) vk_print_VkBufferMemoryRequirementsInfo2(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkBufferMemoryRequirementsInfo2KHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkBufferMemoryRequirementsInfo2KHR *in_info);
#define VK_PRINT_VkBufferMemoryRequirementsInfo2KHR(prefix, in_info) vk_print_VkBufferMemoryRequirementsInfo2KHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkDeviceBufferMemoryRequirements(int can_log_level, int log_level, FILE*, const char* prefix, const VkDeviceBufferMemoryRequirements *in_info);
#define VK_PRINT_VkDeviceBufferMemoryRequirements(prefix, in_info) vk_print_VkDeviceBufferMemoryRequirements(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkDeviceBufferMemoryRequirementsKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkDeviceBufferMemoryRequirementsKHR *in_info);
#define VK_PRINT_VkDeviceBufferMemoryRequirementsKHR(prefix, in_info) vk_print_VkDeviceBufferMemoryRequirementsKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkImageMemoryRequirementsInfo2(int can_log_level, int log_level, FILE*, const char* prefix, const VkImageMemoryRequirementsInfo2 *in_info);
#define VK_PRINT_VkImageMemoryRequirementsInfo2(prefix, in_info) vk_print_VkImageMemoryRequirementsInfo2(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkImageMemoryRequirementsInfo2KHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkImageMemoryRequirementsInfo2KHR *in_info);
#define VK_PRINT_VkImageMemoryRequirementsInfo2KHR(prefix, in_info) vk_print_VkImageMemoryRequirementsInfo2KHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkImageSparseMemoryRequirementsInfo2(int can_log_level, int log_level, FILE*, const char* prefix, const VkImageSparseMemoryRequirementsInfo2 *in_info);
#define VK_PRINT_VkImageSparseMemoryRequirementsInfo2(prefix, in_info) vk_print_VkImageSparseMemoryRequirementsInfo2(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkImageSparseMemoryRequirementsInfo2KHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkImageSparseMemoryRequirementsInfo2KHR *in_info);
#define VK_PRINT_VkImageSparseMemoryRequirementsInfo2KHR(prefix, in_info) vk_print_VkImageSparseMemoryRequirementsInfo2KHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkDeviceImageMemoryRequirements(int can_log_level, int log_level, FILE*, const char* prefix, const VkDeviceImageMemoryRequirements *in_info);
#define VK_PRINT_VkDeviceImageMemoryRequirements(prefix, in_info) vk_print_VkDeviceImageMemoryRequirements(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkDeviceImageMemoryRequirementsKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkDeviceImageMemoryRequirementsKHR *in_info);
#define VK_PRINT_VkDeviceImageMemoryRequirementsKHR(prefix, in_info) vk_print_VkDeviceImageMemoryRequirementsKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkMemoryRequirements2(int can_log_level, int log_level, FILE*, const char* prefix, const VkMemoryRequirements2 *in_info);
#define VK_PRINT_VkMemoryRequirements2(prefix, in_info) vk_print_VkMemoryRequirements2(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkMemoryRequirements2KHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkMemoryRequirements2KHR *in_info);
#define VK_PRINT_VkMemoryRequirements2KHR(prefix, in_info) vk_print_VkMemoryRequirements2KHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkSparseImageMemoryRequirements2(int can_log_level, int log_level, FILE*, const char* prefix, const VkSparseImageMemoryRequirements2 *in_info);
#define VK_PRINT_VkSparseImageMemoryRequirements2(prefix, in_info) vk_print_VkSparseImageMemoryRequirements2(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkSparseImageMemoryRequirements2KHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkSparseImageMemoryRequirements2KHR *in_info);
#define VK_PRINT_VkSparseImageMemoryRequirements2KHR(prefix, in_info) vk_print_VkSparseImageMemoryRequirements2KHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDevicePointClippingProperties(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDevicePointClippingProperties *in_info);
#define VK_PRINT_VkPhysicalDevicePointClippingProperties(prefix, in_info) vk_print_VkPhysicalDevicePointClippingProperties(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDevicePointClippingPropertiesKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDevicePointClippingPropertiesKHR *in_info);
#define VK_PRINT_VkPhysicalDevicePointClippingPropertiesKHR(prefix, in_info) vk_print_VkPhysicalDevicePointClippingPropertiesKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkMemoryDedicatedRequirements(int can_log_level, int log_level, FILE*, const char* prefix, const VkMemoryDedicatedRequirements *in_info);
#define VK_PRINT_VkMemoryDedicatedRequirements(prefix, in_info) vk_print_VkMemoryDedicatedRequirements(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkMemoryDedicatedRequirementsKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkMemoryDedicatedRequirementsKHR *in_info);
#define VK_PRINT_VkMemoryDedicatedRequirementsKHR(prefix, in_info) vk_print_VkMemoryDedicatedRequirementsKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkMemoryDedicatedAllocateInfo(int can_log_level, int log_level, FILE*, const char* prefix, const VkMemoryDedicatedAllocateInfo *in_info);
#define VK_PRINT_VkMemoryDedicatedAllocateInfo(prefix, in_info) vk_print_VkMemoryDedicatedAllocateInfo(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkMemoryDedicatedAllocateInfoKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkMemoryDedicatedAllocateInfoKHR *in_info);
#define VK_PRINT_VkMemoryDedicatedAllocateInfoKHR(prefix, in_info) vk_print_VkMemoryDedicatedAllocateInfoKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkImageViewUsageCreateInfo(int can_log_level, int log_level, FILE*, const char* prefix, const VkImageViewUsageCreateInfo *in_info);
#define VK_PRINT_VkImageViewUsageCreateInfo(prefix, in_info) vk_print_VkImageViewUsageCreateInfo(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkImageViewSlicedCreateInfoEXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkImageViewSlicedCreateInfoEXT *in_info);
#define VK_PRINT_VkImageViewSlicedCreateInfoEXT(prefix, in_info) vk_print_VkImageViewSlicedCreateInfoEXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkImageViewUsageCreateInfoKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkImageViewUsageCreateInfoKHR *in_info);
#define VK_PRINT_VkImageViewUsageCreateInfoKHR(prefix, in_info) vk_print_VkImageViewUsageCreateInfoKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPipelineTessellationDomainOriginStateCreateInfo(int can_log_level, int log_level, FILE*, const char* prefix, const VkPipelineTessellationDomainOriginStateCreateInfo *in_info);
#define VK_PRINT_VkPipelineTessellationDomainOriginStateCreateInfo(prefix, in_info) vk_print_VkPipelineTessellationDomainOriginStateCreateInfo(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPipelineTessellationDomainOriginStateCreateInfoKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkPipelineTessellationDomainOriginStateCreateInfoKHR *in_info);
#define VK_PRINT_VkPipelineTessellationDomainOriginStateCreateInfoKHR(prefix, in_info) vk_print_VkPipelineTessellationDomainOriginStateCreateInfoKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkSamplerYcbcrConversionInfo(int can_log_level, int log_level, FILE*, const char* prefix, const VkSamplerYcbcrConversionInfo *in_info);
#define VK_PRINT_VkSamplerYcbcrConversionInfo(prefix, in_info) vk_print_VkSamplerYcbcrConversionInfo(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkSamplerYcbcrConversionInfoKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkSamplerYcbcrConversionInfoKHR *in_info);
#define VK_PRINT_VkSamplerYcbcrConversionInfoKHR(prefix, in_info) vk_print_VkSamplerYcbcrConversionInfoKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkSamplerYcbcrConversionCreateInfo(int can_log_level, int log_level, FILE*, const char* prefix, const VkSamplerYcbcrConversionCreateInfo *in_info);
#define VK_PRINT_VkSamplerYcbcrConversionCreateInfo(prefix, in_info) vk_print_VkSamplerYcbcrConversionCreateInfo(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkSamplerYcbcrConversionCreateInfoKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkSamplerYcbcrConversionCreateInfoKHR *in_info);
#define VK_PRINT_VkSamplerYcbcrConversionCreateInfoKHR(prefix, in_info) vk_print_VkSamplerYcbcrConversionCreateInfoKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkBindImagePlaneMemoryInfo(int can_log_level, int log_level, FILE*, const char* prefix, const VkBindImagePlaneMemoryInfo *in_info);
#define VK_PRINT_VkBindImagePlaneMemoryInfo(prefix, in_info) vk_print_VkBindImagePlaneMemoryInfo(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkBindImagePlaneMemoryInfoKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkBindImagePlaneMemoryInfoKHR *in_info);
#define VK_PRINT_VkBindImagePlaneMemoryInfoKHR(prefix, in_info) vk_print_VkBindImagePlaneMemoryInfoKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkImagePlaneMemoryRequirementsInfo(int can_log_level, int log_level, FILE*, const char* prefix, const VkImagePlaneMemoryRequirementsInfo *in_info);
#define VK_PRINT_VkImagePlaneMemoryRequirementsInfo(prefix, in_info) vk_print_VkImagePlaneMemoryRequirementsInfo(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkImagePlaneMemoryRequirementsInfoKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkImagePlaneMemoryRequirementsInfoKHR *in_info);
#define VK_PRINT_VkImagePlaneMemoryRequirementsInfoKHR(prefix, in_info) vk_print_VkImagePlaneMemoryRequirementsInfoKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceSamplerYcbcrConversionFeatures(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceSamplerYcbcrConversionFeatures *in_info);
#define VK_PRINT_VkPhysicalDeviceSamplerYcbcrConversionFeatures(prefix, in_info) vk_print_VkPhysicalDeviceSamplerYcbcrConversionFeatures(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceSamplerYcbcrConversionFeaturesKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceSamplerYcbcrConversionFeaturesKHR *in_info);
#define VK_PRINT_VkPhysicalDeviceSamplerYcbcrConversionFeaturesKHR(prefix, in_info) vk_print_VkPhysicalDeviceSamplerYcbcrConversionFeaturesKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkSamplerYcbcrConversionImageFormatProperties(int can_log_level, int log_level, FILE*, const char* prefix, const VkSamplerYcbcrConversionImageFormatProperties *in_info);
#define VK_PRINT_VkSamplerYcbcrConversionImageFormatProperties(prefix, in_info) vk_print_VkSamplerYcbcrConversionImageFormatProperties(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkSamplerYcbcrConversionImageFormatPropertiesKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkSamplerYcbcrConversionImageFormatPropertiesKHR *in_info);
#define VK_PRINT_VkSamplerYcbcrConversionImageFormatPropertiesKHR(prefix, in_info) vk_print_VkSamplerYcbcrConversionImageFormatPropertiesKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkTextureLODGatherFormatPropertiesAMD(int can_log_level, int log_level, FILE*, const char* prefix, const VkTextureLODGatherFormatPropertiesAMD *in_info);
#define VK_PRINT_VkTextureLODGatherFormatPropertiesAMD(prefix, in_info) vk_print_VkTextureLODGatherFormatPropertiesAMD(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkConditionalRenderingBeginInfoEXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkConditionalRenderingBeginInfoEXT *in_info);
#define VK_PRINT_VkConditionalRenderingBeginInfoEXT(prefix, in_info) vk_print_VkConditionalRenderingBeginInfoEXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkProtectedSubmitInfo(int can_log_level, int log_level, FILE*, const char* prefix, const VkProtectedSubmitInfo *in_info);
#define VK_PRINT_VkProtectedSubmitInfo(prefix, in_info) vk_print_VkProtectedSubmitInfo(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceProtectedMemoryFeatures(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceProtectedMemoryFeatures *in_info);
#define VK_PRINT_VkPhysicalDeviceProtectedMemoryFeatures(prefix, in_info) vk_print_VkPhysicalDeviceProtectedMemoryFeatures(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceProtectedMemoryProperties(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceProtectedMemoryProperties *in_info);
#define VK_PRINT_VkPhysicalDeviceProtectedMemoryProperties(prefix, in_info) vk_print_VkPhysicalDeviceProtectedMemoryProperties(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkDeviceQueueInfo2(int can_log_level, int log_level, FILE*, const char* prefix, const VkDeviceQueueInfo2 *in_info);
#define VK_PRINT_VkDeviceQueueInfo2(prefix, in_info) vk_print_VkDeviceQueueInfo2(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPipelineCoverageToColorStateCreateInfoNV(int can_log_level, int log_level, FILE*, const char* prefix, const VkPipelineCoverageToColorStateCreateInfoNV *in_info);
#define VK_PRINT_VkPipelineCoverageToColorStateCreateInfoNV(prefix, in_info) vk_print_VkPipelineCoverageToColorStateCreateInfoNV(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceSamplerFilterMinmaxProperties(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceSamplerFilterMinmaxProperties *in_info);
#define VK_PRINT_VkPhysicalDeviceSamplerFilterMinmaxProperties(prefix, in_info) vk_print_VkPhysicalDeviceSamplerFilterMinmaxProperties(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceSamplerFilterMinmaxPropertiesEXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceSamplerFilterMinmaxPropertiesEXT *in_info);
#define VK_PRINT_VkPhysicalDeviceSamplerFilterMinmaxPropertiesEXT(prefix, in_info) vk_print_VkPhysicalDeviceSamplerFilterMinmaxPropertiesEXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkSampleLocationEXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkSampleLocationEXT *in_info);
#define VK_PRINT_VkSampleLocationEXT(prefix, in_info) vk_print_VkSampleLocationEXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkSampleLocationsInfoEXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkSampleLocationsInfoEXT *in_info);
#define VK_PRINT_VkSampleLocationsInfoEXT(prefix, in_info) vk_print_VkSampleLocationsInfoEXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkAttachmentSampleLocationsEXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkAttachmentSampleLocationsEXT *in_info);
#define VK_PRINT_VkAttachmentSampleLocationsEXT(prefix, in_info) vk_print_VkAttachmentSampleLocationsEXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkSubpassSampleLocationsEXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkSubpassSampleLocationsEXT *in_info);
#define VK_PRINT_VkSubpassSampleLocationsEXT(prefix, in_info) vk_print_VkSubpassSampleLocationsEXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkRenderPassSampleLocationsBeginInfoEXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkRenderPassSampleLocationsBeginInfoEXT *in_info);
#define VK_PRINT_VkRenderPassSampleLocationsBeginInfoEXT(prefix, in_info) vk_print_VkRenderPassSampleLocationsBeginInfoEXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPipelineSampleLocationsStateCreateInfoEXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkPipelineSampleLocationsStateCreateInfoEXT *in_info);
#define VK_PRINT_VkPipelineSampleLocationsStateCreateInfoEXT(prefix, in_info) vk_print_VkPipelineSampleLocationsStateCreateInfoEXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceSampleLocationsPropertiesEXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceSampleLocationsPropertiesEXT *in_info);
#define VK_PRINT_VkPhysicalDeviceSampleLocationsPropertiesEXT(prefix, in_info) vk_print_VkPhysicalDeviceSampleLocationsPropertiesEXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkMultisamplePropertiesEXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkMultisamplePropertiesEXT *in_info);
#define VK_PRINT_VkMultisamplePropertiesEXT(prefix, in_info) vk_print_VkMultisamplePropertiesEXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkSamplerReductionModeCreateInfo(int can_log_level, int log_level, FILE*, const char* prefix, const VkSamplerReductionModeCreateInfo *in_info);
#define VK_PRINT_VkSamplerReductionModeCreateInfo(prefix, in_info) vk_print_VkSamplerReductionModeCreateInfo(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkSamplerReductionModeCreateInfoEXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkSamplerReductionModeCreateInfoEXT *in_info);
#define VK_PRINT_VkSamplerReductionModeCreateInfoEXT(prefix, in_info) vk_print_VkSamplerReductionModeCreateInfoEXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT *in_info);
#define VK_PRINT_VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT(prefix, in_info) vk_print_VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceMultiDrawFeaturesEXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceMultiDrawFeaturesEXT *in_info);
#define VK_PRINT_VkPhysicalDeviceMultiDrawFeaturesEXT(prefix, in_info) vk_print_VkPhysicalDeviceMultiDrawFeaturesEXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT *in_info);
#define VK_PRINT_VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT(prefix, in_info) vk_print_VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPipelineColorBlendAdvancedStateCreateInfoEXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkPipelineColorBlendAdvancedStateCreateInfoEXT *in_info);
#define VK_PRINT_VkPipelineColorBlendAdvancedStateCreateInfoEXT(prefix, in_info) vk_print_VkPipelineColorBlendAdvancedStateCreateInfoEXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceInlineUniformBlockFeatures(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceInlineUniformBlockFeatures *in_info);
#define VK_PRINT_VkPhysicalDeviceInlineUniformBlockFeatures(prefix, in_info) vk_print_VkPhysicalDeviceInlineUniformBlockFeatures(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceInlineUniformBlockFeaturesEXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceInlineUniformBlockFeaturesEXT *in_info);
#define VK_PRINT_VkPhysicalDeviceInlineUniformBlockFeaturesEXT(prefix, in_info) vk_print_VkPhysicalDeviceInlineUniformBlockFeaturesEXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceInlineUniformBlockProperties(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceInlineUniformBlockProperties *in_info);
#define VK_PRINT_VkPhysicalDeviceInlineUniformBlockProperties(prefix, in_info) vk_print_VkPhysicalDeviceInlineUniformBlockProperties(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceInlineUniformBlockPropertiesEXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceInlineUniformBlockPropertiesEXT *in_info);
#define VK_PRINT_VkPhysicalDeviceInlineUniformBlockPropertiesEXT(prefix, in_info) vk_print_VkPhysicalDeviceInlineUniformBlockPropertiesEXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkWriteDescriptorSetInlineUniformBlock(int can_log_level, int log_level, FILE*, const char* prefix, const VkWriteDescriptorSetInlineUniformBlock *in_info);
#define VK_PRINT_VkWriteDescriptorSetInlineUniformBlock(prefix, in_info) vk_print_VkWriteDescriptorSetInlineUniformBlock(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkWriteDescriptorSetInlineUniformBlockEXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkWriteDescriptorSetInlineUniformBlockEXT *in_info);
#define VK_PRINT_VkWriteDescriptorSetInlineUniformBlockEXT(prefix, in_info) vk_print_VkWriteDescriptorSetInlineUniformBlockEXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkDescriptorPoolInlineUniformBlockCreateInfo(int can_log_level, int log_level, FILE*, const char* prefix, const VkDescriptorPoolInlineUniformBlockCreateInfo *in_info);
#define VK_PRINT_VkDescriptorPoolInlineUniformBlockCreateInfo(prefix, in_info) vk_print_VkDescriptorPoolInlineUniformBlockCreateInfo(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkDescriptorPoolInlineUniformBlockCreateInfoEXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkDescriptorPoolInlineUniformBlockCreateInfoEXT *in_info);
#define VK_PRINT_VkDescriptorPoolInlineUniformBlockCreateInfoEXT(prefix, in_info) vk_print_VkDescriptorPoolInlineUniformBlockCreateInfoEXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPipelineCoverageModulationStateCreateInfoNV(int can_log_level, int log_level, FILE*, const char* prefix, const VkPipelineCoverageModulationStateCreateInfoNV *in_info);
#define VK_PRINT_VkPipelineCoverageModulationStateCreateInfoNV(prefix, in_info) vk_print_VkPipelineCoverageModulationStateCreateInfoNV(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkImageFormatListCreateInfo(int can_log_level, int log_level, FILE*, const char* prefix, const VkImageFormatListCreateInfo *in_info);
#define VK_PRINT_VkImageFormatListCreateInfo(prefix, in_info) vk_print_VkImageFormatListCreateInfo(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkImageFormatListCreateInfoKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkImageFormatListCreateInfoKHR *in_info);
#define VK_PRINT_VkImageFormatListCreateInfoKHR(prefix, in_info) vk_print_VkImageFormatListCreateInfoKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkValidationCacheCreateInfoEXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkValidationCacheCreateInfoEXT *in_info);
#define VK_PRINT_VkValidationCacheCreateInfoEXT(prefix, in_info) vk_print_VkValidationCacheCreateInfoEXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkShaderModuleValidationCacheCreateInfoEXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkShaderModuleValidationCacheCreateInfoEXT *in_info);
#define VK_PRINT_VkShaderModuleValidationCacheCreateInfoEXT(prefix, in_info) vk_print_VkShaderModuleValidationCacheCreateInfoEXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceMaintenance3Properties(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceMaintenance3Properties *in_info);
#define VK_PRINT_VkPhysicalDeviceMaintenance3Properties(prefix, in_info) vk_print_VkPhysicalDeviceMaintenance3Properties(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceMaintenance3PropertiesKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceMaintenance3PropertiesKHR *in_info);
#define VK_PRINT_VkPhysicalDeviceMaintenance3PropertiesKHR(prefix, in_info) vk_print_VkPhysicalDeviceMaintenance3PropertiesKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceMaintenance4Features(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceMaintenance4Features *in_info);
#define VK_PRINT_VkPhysicalDeviceMaintenance4Features(prefix, in_info) vk_print_VkPhysicalDeviceMaintenance4Features(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceMaintenance4FeaturesKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceMaintenance4FeaturesKHR *in_info);
#define VK_PRINT_VkPhysicalDeviceMaintenance4FeaturesKHR(prefix, in_info) vk_print_VkPhysicalDeviceMaintenance4FeaturesKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceMaintenance4Properties(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceMaintenance4Properties *in_info);
#define VK_PRINT_VkPhysicalDeviceMaintenance4Properties(prefix, in_info) vk_print_VkPhysicalDeviceMaintenance4Properties(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceMaintenance4PropertiesKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceMaintenance4PropertiesKHR *in_info);
#define VK_PRINT_VkPhysicalDeviceMaintenance4PropertiesKHR(prefix, in_info) vk_print_VkPhysicalDeviceMaintenance4PropertiesKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceMaintenance5FeaturesKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceMaintenance5FeaturesKHR *in_info);
#define VK_PRINT_VkPhysicalDeviceMaintenance5FeaturesKHR(prefix, in_info) vk_print_VkPhysicalDeviceMaintenance5FeaturesKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceMaintenance5PropertiesKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceMaintenance5PropertiesKHR *in_info);
#define VK_PRINT_VkPhysicalDeviceMaintenance5PropertiesKHR(prefix, in_info) vk_print_VkPhysicalDeviceMaintenance5PropertiesKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceMaintenance6FeaturesKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceMaintenance6FeaturesKHR *in_info);
#define VK_PRINT_VkPhysicalDeviceMaintenance6FeaturesKHR(prefix, in_info) vk_print_VkPhysicalDeviceMaintenance6FeaturesKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceMaintenance6PropertiesKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceMaintenance6PropertiesKHR *in_info);
#define VK_PRINT_VkPhysicalDeviceMaintenance6PropertiesKHR(prefix, in_info) vk_print_VkPhysicalDeviceMaintenance6PropertiesKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceMaintenance7FeaturesKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceMaintenance7FeaturesKHR *in_info);
#define VK_PRINT_VkPhysicalDeviceMaintenance7FeaturesKHR(prefix, in_info) vk_print_VkPhysicalDeviceMaintenance7FeaturesKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceMaintenance7PropertiesKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceMaintenance7PropertiesKHR *in_info);
#define VK_PRINT_VkPhysicalDeviceMaintenance7PropertiesKHR(prefix, in_info) vk_print_VkPhysicalDeviceMaintenance7PropertiesKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceLayeredApiPropertiesListKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceLayeredApiPropertiesListKHR *in_info);
#define VK_PRINT_VkPhysicalDeviceLayeredApiPropertiesListKHR(prefix, in_info) vk_print_VkPhysicalDeviceLayeredApiPropertiesListKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceLayeredApiPropertiesKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceLayeredApiPropertiesKHR *in_info);
#define VK_PRINT_VkPhysicalDeviceLayeredApiPropertiesKHR(prefix, in_info) vk_print_VkPhysicalDeviceLayeredApiPropertiesKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceLayeredApiVulkanPropertiesKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceLayeredApiVulkanPropertiesKHR *in_info);
#define VK_PRINT_VkPhysicalDeviceLayeredApiVulkanPropertiesKHR(prefix, in_info) vk_print_VkPhysicalDeviceLayeredApiVulkanPropertiesKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkRenderingAreaInfoKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkRenderingAreaInfoKHR *in_info);
#define VK_PRINT_VkRenderingAreaInfoKHR(prefix, in_info) vk_print_VkRenderingAreaInfoKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkDescriptorSetLayoutSupport(int can_log_level, int log_level, FILE*, const char* prefix, const VkDescriptorSetLayoutSupport *in_info);
#define VK_PRINT_VkDescriptorSetLayoutSupport(prefix, in_info) vk_print_VkDescriptorSetLayoutSupport(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkDescriptorSetLayoutSupportKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkDescriptorSetLayoutSupportKHR *in_info);
#define VK_PRINT_VkDescriptorSetLayoutSupportKHR(prefix, in_info) vk_print_VkDescriptorSetLayoutSupportKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceShaderDrawParametersFeatures(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceShaderDrawParametersFeatures *in_info);
#define VK_PRINT_VkPhysicalDeviceShaderDrawParametersFeatures(prefix, in_info) vk_print_VkPhysicalDeviceShaderDrawParametersFeatures(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceShaderDrawParameterFeatures(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceShaderDrawParameterFeatures *in_info);
#define VK_PRINT_VkPhysicalDeviceShaderDrawParameterFeatures(prefix, in_info) vk_print_VkPhysicalDeviceShaderDrawParameterFeatures(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceShaderFloat16Int8Features(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceShaderFloat16Int8Features *in_info);
#define VK_PRINT_VkPhysicalDeviceShaderFloat16Int8Features(prefix, in_info) vk_print_VkPhysicalDeviceShaderFloat16Int8Features(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceShaderFloat16Int8FeaturesKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceShaderFloat16Int8FeaturesKHR *in_info);
#define VK_PRINT_VkPhysicalDeviceShaderFloat16Int8FeaturesKHR(prefix, in_info) vk_print_VkPhysicalDeviceShaderFloat16Int8FeaturesKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceFloat16Int8FeaturesKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceFloat16Int8FeaturesKHR *in_info);
#define VK_PRINT_VkPhysicalDeviceFloat16Int8FeaturesKHR(prefix, in_info) vk_print_VkPhysicalDeviceFloat16Int8FeaturesKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceFloatControlsProperties(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceFloatControlsProperties *in_info);
#define VK_PRINT_VkPhysicalDeviceFloatControlsProperties(prefix, in_info) vk_print_VkPhysicalDeviceFloatControlsProperties(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceFloatControlsPropertiesKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceFloatControlsPropertiesKHR *in_info);
#define VK_PRINT_VkPhysicalDeviceFloatControlsPropertiesKHR(prefix, in_info) vk_print_VkPhysicalDeviceFloatControlsPropertiesKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceHostQueryResetFeatures(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceHostQueryResetFeatures *in_info);
#define VK_PRINT_VkPhysicalDeviceHostQueryResetFeatures(prefix, in_info) vk_print_VkPhysicalDeviceHostQueryResetFeatures(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceHostQueryResetFeaturesEXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceHostQueryResetFeaturesEXT *in_info);
#define VK_PRINT_VkPhysicalDeviceHostQueryResetFeaturesEXT(prefix, in_info) vk_print_VkPhysicalDeviceHostQueryResetFeaturesEXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkNativeBufferUsage2ANDROID(int can_log_level, int log_level, FILE*, const char* prefix, const VkNativeBufferUsage2ANDROID *in_info);
#define VK_PRINT_VkNativeBufferUsage2ANDROID(prefix, in_info) vk_print_VkNativeBufferUsage2ANDROID(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkNativeBufferANDROID(int can_log_level, int log_level, FILE*, const char* prefix, const VkNativeBufferANDROID *in_info);
#define VK_PRINT_VkNativeBufferANDROID(prefix, in_info) vk_print_VkNativeBufferANDROID(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkSwapchainImageCreateInfoANDROID(int can_log_level, int log_level, FILE*, const char* prefix, const VkSwapchainImageCreateInfoANDROID *in_info);
#define VK_PRINT_VkSwapchainImageCreateInfoANDROID(prefix, in_info) vk_print_VkSwapchainImageCreateInfoANDROID(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDevicePresentationPropertiesANDROID(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDevicePresentationPropertiesANDROID *in_info);
#define VK_PRINT_VkPhysicalDevicePresentationPropertiesANDROID(prefix, in_info) vk_print_VkPhysicalDevicePresentationPropertiesANDROID(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkShaderResourceUsageAMD(int can_log_level, int log_level, FILE*, const char* prefix, const VkShaderResourceUsageAMD *in_info);
#define VK_PRINT_VkShaderResourceUsageAMD(prefix, in_info) vk_print_VkShaderResourceUsageAMD(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkShaderStatisticsInfoAMD(int can_log_level, int log_level, FILE*, const char* prefix, const VkShaderStatisticsInfoAMD *in_info);
#define VK_PRINT_VkShaderStatisticsInfoAMD(prefix, in_info) vk_print_VkShaderStatisticsInfoAMD(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkDeviceQueueGlobalPriorityCreateInfoKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkDeviceQueueGlobalPriorityCreateInfoKHR *in_info);
#define VK_PRINT_VkDeviceQueueGlobalPriorityCreateInfoKHR(prefix, in_info) vk_print_VkDeviceQueueGlobalPriorityCreateInfoKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkDeviceQueueGlobalPriorityCreateInfoEXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkDeviceQueueGlobalPriorityCreateInfoEXT *in_info);
#define VK_PRINT_VkDeviceQueueGlobalPriorityCreateInfoEXT(prefix, in_info) vk_print_VkDeviceQueueGlobalPriorityCreateInfoEXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceGlobalPriorityQueryFeaturesKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceGlobalPriorityQueryFeaturesKHR *in_info);
#define VK_PRINT_VkPhysicalDeviceGlobalPriorityQueryFeaturesKHR(prefix, in_info) vk_print_VkPhysicalDeviceGlobalPriorityQueryFeaturesKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceGlobalPriorityQueryFeaturesEXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceGlobalPriorityQueryFeaturesEXT *in_info);
#define VK_PRINT_VkPhysicalDeviceGlobalPriorityQueryFeaturesEXT(prefix, in_info) vk_print_VkPhysicalDeviceGlobalPriorityQueryFeaturesEXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkQueueFamilyGlobalPriorityPropertiesKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkQueueFamilyGlobalPriorityPropertiesKHR *in_info);
#define VK_PRINT_VkQueueFamilyGlobalPriorityPropertiesKHR(prefix, in_info) vk_print_VkQueueFamilyGlobalPriorityPropertiesKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkQueueFamilyGlobalPriorityPropertiesEXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkQueueFamilyGlobalPriorityPropertiesEXT *in_info);
#define VK_PRINT_VkQueueFamilyGlobalPriorityPropertiesEXT(prefix, in_info) vk_print_VkQueueFamilyGlobalPriorityPropertiesEXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkDebugUtilsObjectNameInfoEXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkDebugUtilsObjectNameInfoEXT *in_info);
#define VK_PRINT_VkDebugUtilsObjectNameInfoEXT(prefix, in_info) vk_print_VkDebugUtilsObjectNameInfoEXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkDebugUtilsObjectTagInfoEXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkDebugUtilsObjectTagInfoEXT *in_info);
#define VK_PRINT_VkDebugUtilsObjectTagInfoEXT(prefix, in_info) vk_print_VkDebugUtilsObjectTagInfoEXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkDebugUtilsLabelEXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkDebugUtilsLabelEXT *in_info);
#define VK_PRINT_VkDebugUtilsLabelEXT(prefix, in_info) vk_print_VkDebugUtilsLabelEXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkDebugUtilsMessengerCreateInfoEXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkDebugUtilsMessengerCreateInfoEXT *in_info);
#define VK_PRINT_VkDebugUtilsMessengerCreateInfoEXT(prefix, in_info) vk_print_VkDebugUtilsMessengerCreateInfoEXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkDebugUtilsMessengerCallbackDataEXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkDebugUtilsMessengerCallbackDataEXT *in_info);
#define VK_PRINT_VkDebugUtilsMessengerCallbackDataEXT(prefix, in_info) vk_print_VkDebugUtilsMessengerCallbackDataEXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceDeviceMemoryReportFeaturesEXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceDeviceMemoryReportFeaturesEXT *in_info);
#define VK_PRINT_VkPhysicalDeviceDeviceMemoryReportFeaturesEXT(prefix, in_info) vk_print_VkPhysicalDeviceDeviceMemoryReportFeaturesEXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkDeviceDeviceMemoryReportCreateInfoEXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkDeviceDeviceMemoryReportCreateInfoEXT *in_info);
#define VK_PRINT_VkDeviceDeviceMemoryReportCreateInfoEXT(prefix, in_info) vk_print_VkDeviceDeviceMemoryReportCreateInfoEXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkDeviceMemoryReportCallbackDataEXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkDeviceMemoryReportCallbackDataEXT *in_info);
#define VK_PRINT_VkDeviceMemoryReportCallbackDataEXT(prefix, in_info) vk_print_VkDeviceMemoryReportCallbackDataEXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkImportMemoryHostPointerInfoEXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkImportMemoryHostPointerInfoEXT *in_info);
#define VK_PRINT_VkImportMemoryHostPointerInfoEXT(prefix, in_info) vk_print_VkImportMemoryHostPointerInfoEXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkMemoryHostPointerPropertiesEXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkMemoryHostPointerPropertiesEXT *in_info);
#define VK_PRINT_VkMemoryHostPointerPropertiesEXT(prefix, in_info) vk_print_VkMemoryHostPointerPropertiesEXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceExternalMemoryHostPropertiesEXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceExternalMemoryHostPropertiesEXT *in_info);
#define VK_PRINT_VkPhysicalDeviceExternalMemoryHostPropertiesEXT(prefix, in_info) vk_print_VkPhysicalDeviceExternalMemoryHostPropertiesEXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceConservativeRasterizationPropertiesEXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceConservativeRasterizationPropertiesEXT *in_info);
#define VK_PRINT_VkPhysicalDeviceConservativeRasterizationPropertiesEXT(prefix, in_info) vk_print_VkPhysicalDeviceConservativeRasterizationPropertiesEXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkCalibratedTimestampInfoKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkCalibratedTimestampInfoKHR *in_info);
#define VK_PRINT_VkCalibratedTimestampInfoKHR(prefix, in_info) vk_print_VkCalibratedTimestampInfoKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkCalibratedTimestampInfoEXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkCalibratedTimestampInfoEXT *in_info);
#define VK_PRINT_VkCalibratedTimestampInfoEXT(prefix, in_info) vk_print_VkCalibratedTimestampInfoEXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceShaderCorePropertiesAMD(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceShaderCorePropertiesAMD *in_info);
#define VK_PRINT_VkPhysicalDeviceShaderCorePropertiesAMD(prefix, in_info) vk_print_VkPhysicalDeviceShaderCorePropertiesAMD(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceShaderCoreProperties2AMD(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceShaderCoreProperties2AMD *in_info);
#define VK_PRINT_VkPhysicalDeviceShaderCoreProperties2AMD(prefix, in_info) vk_print_VkPhysicalDeviceShaderCoreProperties2AMD(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPipelineRasterizationConservativeStateCreateInfoEXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkPipelineRasterizationConservativeStateCreateInfoEXT *in_info);
#define VK_PRINT_VkPipelineRasterizationConservativeStateCreateInfoEXT(prefix, in_info) vk_print_VkPipelineRasterizationConservativeStateCreateInfoEXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceDescriptorIndexingFeatures(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceDescriptorIndexingFeatures *in_info);
#define VK_PRINT_VkPhysicalDeviceDescriptorIndexingFeatures(prefix, in_info) vk_print_VkPhysicalDeviceDescriptorIndexingFeatures(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceDescriptorIndexingFeaturesEXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceDescriptorIndexingFeaturesEXT *in_info);
#define VK_PRINT_VkPhysicalDeviceDescriptorIndexingFeaturesEXT(prefix, in_info) vk_print_VkPhysicalDeviceDescriptorIndexingFeaturesEXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceDescriptorIndexingProperties(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceDescriptorIndexingProperties *in_info);
#define VK_PRINT_VkPhysicalDeviceDescriptorIndexingProperties(prefix, in_info) vk_print_VkPhysicalDeviceDescriptorIndexingProperties(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceDescriptorIndexingPropertiesEXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceDescriptorIndexingPropertiesEXT *in_info);
#define VK_PRINT_VkPhysicalDeviceDescriptorIndexingPropertiesEXT(prefix, in_info) vk_print_VkPhysicalDeviceDescriptorIndexingPropertiesEXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkDescriptorSetLayoutBindingFlagsCreateInfo(int can_log_level, int log_level, FILE*, const char* prefix, const VkDescriptorSetLayoutBindingFlagsCreateInfo *in_info);
#define VK_PRINT_VkDescriptorSetLayoutBindingFlagsCreateInfo(prefix, in_info) vk_print_VkDescriptorSetLayoutBindingFlagsCreateInfo(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkDescriptorSetLayoutBindingFlagsCreateInfoEXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkDescriptorSetLayoutBindingFlagsCreateInfoEXT *in_info);
#define VK_PRINT_VkDescriptorSetLayoutBindingFlagsCreateInfoEXT(prefix, in_info) vk_print_VkDescriptorSetLayoutBindingFlagsCreateInfoEXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkDescriptorSetVariableDescriptorCountAllocateInfo(int can_log_level, int log_level, FILE*, const char* prefix, const VkDescriptorSetVariableDescriptorCountAllocateInfo *in_info);
#define VK_PRINT_VkDescriptorSetVariableDescriptorCountAllocateInfo(prefix, in_info) vk_print_VkDescriptorSetVariableDescriptorCountAllocateInfo(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkDescriptorSetVariableDescriptorCountAllocateInfoEXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkDescriptorSetVariableDescriptorCountAllocateInfoEXT *in_info);
#define VK_PRINT_VkDescriptorSetVariableDescriptorCountAllocateInfoEXT(prefix, in_info) vk_print_VkDescriptorSetVariableDescriptorCountAllocateInfoEXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkDescriptorSetVariableDescriptorCountLayoutSupport(int can_log_level, int log_level, FILE*, const char* prefix, const VkDescriptorSetVariableDescriptorCountLayoutSupport *in_info);
#define VK_PRINT_VkDescriptorSetVariableDescriptorCountLayoutSupport(prefix, in_info) vk_print_VkDescriptorSetVariableDescriptorCountLayoutSupport(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkDescriptorSetVariableDescriptorCountLayoutSupportEXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkDescriptorSetVariableDescriptorCountLayoutSupportEXT *in_info);
#define VK_PRINT_VkDescriptorSetVariableDescriptorCountLayoutSupportEXT(prefix, in_info) vk_print_VkDescriptorSetVariableDescriptorCountLayoutSupportEXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkAttachmentDescription2(int can_log_level, int log_level, FILE*, const char* prefix, const VkAttachmentDescription2 *in_info);
#define VK_PRINT_VkAttachmentDescription2(prefix, in_info) vk_print_VkAttachmentDescription2(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkAttachmentDescription2KHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkAttachmentDescription2KHR *in_info);
#define VK_PRINT_VkAttachmentDescription2KHR(prefix, in_info) vk_print_VkAttachmentDescription2KHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkAttachmentReference2(int can_log_level, int log_level, FILE*, const char* prefix, const VkAttachmentReference2 *in_info);
#define VK_PRINT_VkAttachmentReference2(prefix, in_info) vk_print_VkAttachmentReference2(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkAttachmentReference2KHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkAttachmentReference2KHR *in_info);
#define VK_PRINT_VkAttachmentReference2KHR(prefix, in_info) vk_print_VkAttachmentReference2KHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkSubpassDescription2(int can_log_level, int log_level, FILE*, const char* prefix, const VkSubpassDescription2 *in_info);
#define VK_PRINT_VkSubpassDescription2(prefix, in_info) vk_print_VkSubpassDescription2(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkSubpassDescription2KHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkSubpassDescription2KHR *in_info);
#define VK_PRINT_VkSubpassDescription2KHR(prefix, in_info) vk_print_VkSubpassDescription2KHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkSubpassDependency2(int can_log_level, int log_level, FILE*, const char* prefix, const VkSubpassDependency2 *in_info);
#define VK_PRINT_VkSubpassDependency2(prefix, in_info) vk_print_VkSubpassDependency2(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkSubpassDependency2KHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkSubpassDependency2KHR *in_info);
#define VK_PRINT_VkSubpassDependency2KHR(prefix, in_info) vk_print_VkSubpassDependency2KHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkRenderPassCreateInfo2(int can_log_level, int log_level, FILE*, const char* prefix, const VkRenderPassCreateInfo2 *in_info);
#define VK_PRINT_VkRenderPassCreateInfo2(prefix, in_info) vk_print_VkRenderPassCreateInfo2(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkRenderPassCreateInfo2KHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkRenderPassCreateInfo2KHR *in_info);
#define VK_PRINT_VkRenderPassCreateInfo2KHR(prefix, in_info) vk_print_VkRenderPassCreateInfo2KHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkSubpassBeginInfo(int can_log_level, int log_level, FILE*, const char* prefix, const VkSubpassBeginInfo *in_info);
#define VK_PRINT_VkSubpassBeginInfo(prefix, in_info) vk_print_VkSubpassBeginInfo(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkSubpassBeginInfoKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkSubpassBeginInfoKHR *in_info);
#define VK_PRINT_VkSubpassBeginInfoKHR(prefix, in_info) vk_print_VkSubpassBeginInfoKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkSubpassEndInfo(int can_log_level, int log_level, FILE*, const char* prefix, const VkSubpassEndInfo *in_info);
#define VK_PRINT_VkSubpassEndInfo(prefix, in_info) vk_print_VkSubpassEndInfo(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkSubpassEndInfoKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkSubpassEndInfoKHR *in_info);
#define VK_PRINT_VkSubpassEndInfoKHR(prefix, in_info) vk_print_VkSubpassEndInfoKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceTimelineSemaphoreFeatures(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceTimelineSemaphoreFeatures *in_info);
#define VK_PRINT_VkPhysicalDeviceTimelineSemaphoreFeatures(prefix, in_info) vk_print_VkPhysicalDeviceTimelineSemaphoreFeatures(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceTimelineSemaphoreFeaturesKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceTimelineSemaphoreFeaturesKHR *in_info);
#define VK_PRINT_VkPhysicalDeviceTimelineSemaphoreFeaturesKHR(prefix, in_info) vk_print_VkPhysicalDeviceTimelineSemaphoreFeaturesKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceTimelineSemaphoreProperties(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceTimelineSemaphoreProperties *in_info);
#define VK_PRINT_VkPhysicalDeviceTimelineSemaphoreProperties(prefix, in_info) vk_print_VkPhysicalDeviceTimelineSemaphoreProperties(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceTimelineSemaphorePropertiesKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceTimelineSemaphorePropertiesKHR *in_info);
#define VK_PRINT_VkPhysicalDeviceTimelineSemaphorePropertiesKHR(prefix, in_info) vk_print_VkPhysicalDeviceTimelineSemaphorePropertiesKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkSemaphoreTypeCreateInfo(int can_log_level, int log_level, FILE*, const char* prefix, const VkSemaphoreTypeCreateInfo *in_info);
#define VK_PRINT_VkSemaphoreTypeCreateInfo(prefix, in_info) vk_print_VkSemaphoreTypeCreateInfo(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkSemaphoreTypeCreateInfoKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkSemaphoreTypeCreateInfoKHR *in_info);
#define VK_PRINT_VkSemaphoreTypeCreateInfoKHR(prefix, in_info) vk_print_VkSemaphoreTypeCreateInfoKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkTimelineSemaphoreSubmitInfo(int can_log_level, int log_level, FILE*, const char* prefix, const VkTimelineSemaphoreSubmitInfo *in_info);
#define VK_PRINT_VkTimelineSemaphoreSubmitInfo(prefix, in_info) vk_print_VkTimelineSemaphoreSubmitInfo(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkTimelineSemaphoreSubmitInfoKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkTimelineSemaphoreSubmitInfoKHR *in_info);
#define VK_PRINT_VkTimelineSemaphoreSubmitInfoKHR(prefix, in_info) vk_print_VkTimelineSemaphoreSubmitInfoKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkSemaphoreWaitInfo(int can_log_level, int log_level, FILE*, const char* prefix, const VkSemaphoreWaitInfo *in_info);
#define VK_PRINT_VkSemaphoreWaitInfo(prefix, in_info) vk_print_VkSemaphoreWaitInfo(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkSemaphoreWaitInfoKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkSemaphoreWaitInfoKHR *in_info);
#define VK_PRINT_VkSemaphoreWaitInfoKHR(prefix, in_info) vk_print_VkSemaphoreWaitInfoKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkSemaphoreSignalInfo(int can_log_level, int log_level, FILE*, const char* prefix, const VkSemaphoreSignalInfo *in_info);
#define VK_PRINT_VkSemaphoreSignalInfo(prefix, in_info) vk_print_VkSemaphoreSignalInfo(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkSemaphoreSignalInfoKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkSemaphoreSignalInfoKHR *in_info);
#define VK_PRINT_VkSemaphoreSignalInfoKHR(prefix, in_info) vk_print_VkSemaphoreSignalInfoKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkVertexInputBindingDivisorDescriptionKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkVertexInputBindingDivisorDescriptionKHR *in_info);
#define VK_PRINT_VkVertexInputBindingDivisorDescriptionKHR(prefix, in_info) vk_print_VkVertexInputBindingDivisorDescriptionKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkVertexInputBindingDivisorDescriptionEXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkVertexInputBindingDivisorDescriptionEXT *in_info);
#define VK_PRINT_VkVertexInputBindingDivisorDescriptionEXT(prefix, in_info) vk_print_VkVertexInputBindingDivisorDescriptionEXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPipelineVertexInputDivisorStateCreateInfoKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkPipelineVertexInputDivisorStateCreateInfoKHR *in_info);
#define VK_PRINT_VkPipelineVertexInputDivisorStateCreateInfoKHR(prefix, in_info) vk_print_VkPipelineVertexInputDivisorStateCreateInfoKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPipelineVertexInputDivisorStateCreateInfoEXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkPipelineVertexInputDivisorStateCreateInfoEXT *in_info);
#define VK_PRINT_VkPipelineVertexInputDivisorStateCreateInfoEXT(prefix, in_info) vk_print_VkPipelineVertexInputDivisorStateCreateInfoEXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT *in_info);
#define VK_PRINT_VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT(prefix, in_info) vk_print_VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceVertexAttributeDivisorPropertiesKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceVertexAttributeDivisorPropertiesKHR *in_info);
#define VK_PRINT_VkPhysicalDeviceVertexAttributeDivisorPropertiesKHR(prefix, in_info) vk_print_VkPhysicalDeviceVertexAttributeDivisorPropertiesKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDevicePCIBusInfoPropertiesEXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDevicePCIBusInfoPropertiesEXT *in_info);
#define VK_PRINT_VkPhysicalDevicePCIBusInfoPropertiesEXT(prefix, in_info) vk_print_VkPhysicalDevicePCIBusInfoPropertiesEXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkImportAndroidHardwareBufferInfoANDROID(int can_log_level, int log_level, FILE*, const char* prefix, const VkImportAndroidHardwareBufferInfoANDROID *in_info);
#define VK_PRINT_VkImportAndroidHardwareBufferInfoANDROID(prefix, in_info) vk_print_VkImportAndroidHardwareBufferInfoANDROID(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkAndroidHardwareBufferUsageANDROID(int can_log_level, int log_level, FILE*, const char* prefix, const VkAndroidHardwareBufferUsageANDROID *in_info);
#define VK_PRINT_VkAndroidHardwareBufferUsageANDROID(prefix, in_info) vk_print_VkAndroidHardwareBufferUsageANDROID(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkAndroidHardwareBufferPropertiesANDROID(int can_log_level, int log_level, FILE*, const char* prefix, const VkAndroidHardwareBufferPropertiesANDROID *in_info);
#define VK_PRINT_VkAndroidHardwareBufferPropertiesANDROID(prefix, in_info) vk_print_VkAndroidHardwareBufferPropertiesANDROID(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkMemoryGetAndroidHardwareBufferInfoANDROID(int can_log_level, int log_level, FILE*, const char* prefix, const VkMemoryGetAndroidHardwareBufferInfoANDROID *in_info);
#define VK_PRINT_VkMemoryGetAndroidHardwareBufferInfoANDROID(prefix, in_info) vk_print_VkMemoryGetAndroidHardwareBufferInfoANDROID(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkAndroidHardwareBufferFormatPropertiesANDROID(int can_log_level, int log_level, FILE*, const char* prefix, const VkAndroidHardwareBufferFormatPropertiesANDROID *in_info);
#define VK_PRINT_VkAndroidHardwareBufferFormatPropertiesANDROID(prefix, in_info) vk_print_VkAndroidHardwareBufferFormatPropertiesANDROID(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkCommandBufferInheritanceConditionalRenderingInfoEXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkCommandBufferInheritanceConditionalRenderingInfoEXT *in_info);
#define VK_PRINT_VkCommandBufferInheritanceConditionalRenderingInfoEXT(prefix, in_info) vk_print_VkCommandBufferInheritanceConditionalRenderingInfoEXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkExternalFormatANDROID(int can_log_level, int log_level, FILE*, const char* prefix, const VkExternalFormatANDROID *in_info);
#define VK_PRINT_VkExternalFormatANDROID(prefix, in_info) vk_print_VkExternalFormatANDROID(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDevice8BitStorageFeatures(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDevice8BitStorageFeatures *in_info);
#define VK_PRINT_VkPhysicalDevice8BitStorageFeatures(prefix, in_info) vk_print_VkPhysicalDevice8BitStorageFeatures(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDevice8BitStorageFeaturesKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDevice8BitStorageFeaturesKHR *in_info);
#define VK_PRINT_VkPhysicalDevice8BitStorageFeaturesKHR(prefix, in_info) vk_print_VkPhysicalDevice8BitStorageFeaturesKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceConditionalRenderingFeaturesEXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceConditionalRenderingFeaturesEXT *in_info);
#define VK_PRINT_VkPhysicalDeviceConditionalRenderingFeaturesEXT(prefix, in_info) vk_print_VkPhysicalDeviceConditionalRenderingFeaturesEXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceVulkanMemoryModelFeatures(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceVulkanMemoryModelFeatures *in_info);
#define VK_PRINT_VkPhysicalDeviceVulkanMemoryModelFeatures(prefix, in_info) vk_print_VkPhysicalDeviceVulkanMemoryModelFeatures(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceVulkanMemoryModelFeaturesKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceVulkanMemoryModelFeaturesKHR *in_info);
#define VK_PRINT_VkPhysicalDeviceVulkanMemoryModelFeaturesKHR(prefix, in_info) vk_print_VkPhysicalDeviceVulkanMemoryModelFeaturesKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceShaderAtomicInt64Features(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceShaderAtomicInt64Features *in_info);
#define VK_PRINT_VkPhysicalDeviceShaderAtomicInt64Features(prefix, in_info) vk_print_VkPhysicalDeviceShaderAtomicInt64Features(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceShaderAtomicInt64FeaturesKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceShaderAtomicInt64FeaturesKHR *in_info);
#define VK_PRINT_VkPhysicalDeviceShaderAtomicInt64FeaturesKHR(prefix, in_info) vk_print_VkPhysicalDeviceShaderAtomicInt64FeaturesKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceShaderAtomicFloatFeaturesEXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceShaderAtomicFloatFeaturesEXT *in_info);
#define VK_PRINT_VkPhysicalDeviceShaderAtomicFloatFeaturesEXT(prefix, in_info) vk_print_VkPhysicalDeviceShaderAtomicFloatFeaturesEXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceShaderAtomicFloat2FeaturesEXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceShaderAtomicFloat2FeaturesEXT *in_info);
#define VK_PRINT_VkPhysicalDeviceShaderAtomicFloat2FeaturesEXT(prefix, in_info) vk_print_VkPhysicalDeviceShaderAtomicFloat2FeaturesEXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceVertexAttributeDivisorFeaturesKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceVertexAttributeDivisorFeaturesKHR *in_info);
#define VK_PRINT_VkPhysicalDeviceVertexAttributeDivisorFeaturesKHR(prefix, in_info) vk_print_VkPhysicalDeviceVertexAttributeDivisorFeaturesKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceVertexAttributeDivisorFeaturesEXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceVertexAttributeDivisorFeaturesEXT *in_info);
#define VK_PRINT_VkPhysicalDeviceVertexAttributeDivisorFeaturesEXT(prefix, in_info) vk_print_VkPhysicalDeviceVertexAttributeDivisorFeaturesEXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkQueueFamilyCheckpointPropertiesNV(int can_log_level, int log_level, FILE*, const char* prefix, const VkQueueFamilyCheckpointPropertiesNV *in_info);
#define VK_PRINT_VkQueueFamilyCheckpointPropertiesNV(prefix, in_info) vk_print_VkQueueFamilyCheckpointPropertiesNV(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkCheckpointDataNV(int can_log_level, int log_level, FILE*, const char* prefix, const VkCheckpointDataNV *in_info);
#define VK_PRINT_VkCheckpointDataNV(prefix, in_info) vk_print_VkCheckpointDataNV(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceDepthStencilResolveProperties(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceDepthStencilResolveProperties *in_info);
#define VK_PRINT_VkPhysicalDeviceDepthStencilResolveProperties(prefix, in_info) vk_print_VkPhysicalDeviceDepthStencilResolveProperties(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceDepthStencilResolvePropertiesKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceDepthStencilResolvePropertiesKHR *in_info);
#define VK_PRINT_VkPhysicalDeviceDepthStencilResolvePropertiesKHR(prefix, in_info) vk_print_VkPhysicalDeviceDepthStencilResolvePropertiesKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkSubpassDescriptionDepthStencilResolve(int can_log_level, int log_level, FILE*, const char* prefix, const VkSubpassDescriptionDepthStencilResolve *in_info);
#define VK_PRINT_VkSubpassDescriptionDepthStencilResolve(prefix, in_info) vk_print_VkSubpassDescriptionDepthStencilResolve(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkSubpassDescriptionDepthStencilResolveKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkSubpassDescriptionDepthStencilResolveKHR *in_info);
#define VK_PRINT_VkSubpassDescriptionDepthStencilResolveKHR(prefix, in_info) vk_print_VkSubpassDescriptionDepthStencilResolveKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkImageViewASTCDecodeModeEXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkImageViewASTCDecodeModeEXT *in_info);
#define VK_PRINT_VkImageViewASTCDecodeModeEXT(prefix, in_info) vk_print_VkImageViewASTCDecodeModeEXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceASTCDecodeFeaturesEXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceASTCDecodeFeaturesEXT *in_info);
#define VK_PRINT_VkPhysicalDeviceASTCDecodeFeaturesEXT(prefix, in_info) vk_print_VkPhysicalDeviceASTCDecodeFeaturesEXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceTransformFeedbackFeaturesEXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceTransformFeedbackFeaturesEXT *in_info);
#define VK_PRINT_VkPhysicalDeviceTransformFeedbackFeaturesEXT(prefix, in_info) vk_print_VkPhysicalDeviceTransformFeedbackFeaturesEXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceTransformFeedbackPropertiesEXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceTransformFeedbackPropertiesEXT *in_info);
#define VK_PRINT_VkPhysicalDeviceTransformFeedbackPropertiesEXT(prefix, in_info) vk_print_VkPhysicalDeviceTransformFeedbackPropertiesEXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPipelineRasterizationStateStreamCreateInfoEXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkPipelineRasterizationStateStreamCreateInfoEXT *in_info);
#define VK_PRINT_VkPipelineRasterizationStateStreamCreateInfoEXT(prefix, in_info) vk_print_VkPipelineRasterizationStateStreamCreateInfoEXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV *in_info);
#define VK_PRINT_VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV(prefix, in_info) vk_print_VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPipelineRepresentativeFragmentTestStateCreateInfoNV(int can_log_level, int log_level, FILE*, const char* prefix, const VkPipelineRepresentativeFragmentTestStateCreateInfoNV *in_info);
#define VK_PRINT_VkPipelineRepresentativeFragmentTestStateCreateInfoNV(prefix, in_info) vk_print_VkPipelineRepresentativeFragmentTestStateCreateInfoNV(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceExclusiveScissorFeaturesNV(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceExclusiveScissorFeaturesNV *in_info);
#define VK_PRINT_VkPhysicalDeviceExclusiveScissorFeaturesNV(prefix, in_info) vk_print_VkPhysicalDeviceExclusiveScissorFeaturesNV(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPipelineViewportExclusiveScissorStateCreateInfoNV(int can_log_level, int log_level, FILE*, const char* prefix, const VkPipelineViewportExclusiveScissorStateCreateInfoNV *in_info);
#define VK_PRINT_VkPipelineViewportExclusiveScissorStateCreateInfoNV(prefix, in_info) vk_print_VkPipelineViewportExclusiveScissorStateCreateInfoNV(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceCornerSampledImageFeaturesNV(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceCornerSampledImageFeaturesNV *in_info);
#define VK_PRINT_VkPhysicalDeviceCornerSampledImageFeaturesNV(prefix, in_info) vk_print_VkPhysicalDeviceCornerSampledImageFeaturesNV(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceComputeShaderDerivativesFeaturesNV(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceComputeShaderDerivativesFeaturesNV *in_info);
#define VK_PRINT_VkPhysicalDeviceComputeShaderDerivativesFeaturesNV(prefix, in_info) vk_print_VkPhysicalDeviceComputeShaderDerivativesFeaturesNV(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceFragmentShaderBarycentricFeaturesNV(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceFragmentShaderBarycentricFeaturesNV *in_info);
#define VK_PRINT_VkPhysicalDeviceFragmentShaderBarycentricFeaturesNV(prefix, in_info) vk_print_VkPhysicalDeviceFragmentShaderBarycentricFeaturesNV(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceShaderImageFootprintFeaturesNV(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceShaderImageFootprintFeaturesNV *in_info);
#define VK_PRINT_VkPhysicalDeviceShaderImageFootprintFeaturesNV(prefix, in_info) vk_print_VkPhysicalDeviceShaderImageFootprintFeaturesNV(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV *in_info);
#define VK_PRINT_VkPhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV(prefix, in_info) vk_print_VkPhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceCopyMemoryIndirectFeaturesNV(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceCopyMemoryIndirectFeaturesNV *in_info);
#define VK_PRINT_VkPhysicalDeviceCopyMemoryIndirectFeaturesNV(prefix, in_info) vk_print_VkPhysicalDeviceCopyMemoryIndirectFeaturesNV(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceCopyMemoryIndirectPropertiesNV(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceCopyMemoryIndirectPropertiesNV *in_info);
#define VK_PRINT_VkPhysicalDeviceCopyMemoryIndirectPropertiesNV(prefix, in_info) vk_print_VkPhysicalDeviceCopyMemoryIndirectPropertiesNV(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceMemoryDecompressionFeaturesNV(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceMemoryDecompressionFeaturesNV *in_info);
#define VK_PRINT_VkPhysicalDeviceMemoryDecompressionFeaturesNV(prefix, in_info) vk_print_VkPhysicalDeviceMemoryDecompressionFeaturesNV(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceMemoryDecompressionPropertiesNV(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceMemoryDecompressionPropertiesNV *in_info);
#define VK_PRINT_VkPhysicalDeviceMemoryDecompressionPropertiesNV(prefix, in_info) vk_print_VkPhysicalDeviceMemoryDecompressionPropertiesNV(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkShadingRatePaletteNV(int can_log_level, int log_level, FILE*, const char* prefix, const VkShadingRatePaletteNV *in_info);
#define VK_PRINT_VkShadingRatePaletteNV(prefix, in_info) vk_print_VkShadingRatePaletteNV(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPipelineViewportShadingRateImageStateCreateInfoNV(int can_log_level, int log_level, FILE*, const char* prefix, const VkPipelineViewportShadingRateImageStateCreateInfoNV *in_info);
#define VK_PRINT_VkPipelineViewportShadingRateImageStateCreateInfoNV(prefix, in_info) vk_print_VkPipelineViewportShadingRateImageStateCreateInfoNV(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceShadingRateImageFeaturesNV(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceShadingRateImageFeaturesNV *in_info);
#define VK_PRINT_VkPhysicalDeviceShadingRateImageFeaturesNV(prefix, in_info) vk_print_VkPhysicalDeviceShadingRateImageFeaturesNV(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceShadingRateImagePropertiesNV(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceShadingRateImagePropertiesNV *in_info);
#define VK_PRINT_VkPhysicalDeviceShadingRateImagePropertiesNV(prefix, in_info) vk_print_VkPhysicalDeviceShadingRateImagePropertiesNV(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceInvocationMaskFeaturesHUAWEI(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceInvocationMaskFeaturesHUAWEI *in_info);
#define VK_PRINT_VkPhysicalDeviceInvocationMaskFeaturesHUAWEI(prefix, in_info) vk_print_VkPhysicalDeviceInvocationMaskFeaturesHUAWEI(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkCoarseSampleLocationNV(int can_log_level, int log_level, FILE*, const char* prefix, const VkCoarseSampleLocationNV *in_info);
#define VK_PRINT_VkCoarseSampleLocationNV(prefix, in_info) vk_print_VkCoarseSampleLocationNV(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkCoarseSampleOrderCustomNV(int can_log_level, int log_level, FILE*, const char* prefix, const VkCoarseSampleOrderCustomNV *in_info);
#define VK_PRINT_VkCoarseSampleOrderCustomNV(prefix, in_info) vk_print_VkCoarseSampleOrderCustomNV(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPipelineViewportCoarseSampleOrderStateCreateInfoNV(int can_log_level, int log_level, FILE*, const char* prefix, const VkPipelineViewportCoarseSampleOrderStateCreateInfoNV *in_info);
#define VK_PRINT_VkPipelineViewportCoarseSampleOrderStateCreateInfoNV(prefix, in_info) vk_print_VkPipelineViewportCoarseSampleOrderStateCreateInfoNV(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceMeshShaderFeaturesNV(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceMeshShaderFeaturesNV *in_info);
#define VK_PRINT_VkPhysicalDeviceMeshShaderFeaturesNV(prefix, in_info) vk_print_VkPhysicalDeviceMeshShaderFeaturesNV(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceMeshShaderPropertiesNV(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceMeshShaderPropertiesNV *in_info);
#define VK_PRINT_VkPhysicalDeviceMeshShaderPropertiesNV(prefix, in_info) vk_print_VkPhysicalDeviceMeshShaderPropertiesNV(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkDrawMeshTasksIndirectCommandNV(int can_log_level, int log_level, FILE*, const char* prefix, const VkDrawMeshTasksIndirectCommandNV *in_info);
#define VK_PRINT_VkDrawMeshTasksIndirectCommandNV(prefix, in_info) vk_print_VkDrawMeshTasksIndirectCommandNV(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceMeshShaderFeaturesEXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceMeshShaderFeaturesEXT *in_info);
#define VK_PRINT_VkPhysicalDeviceMeshShaderFeaturesEXT(prefix, in_info) vk_print_VkPhysicalDeviceMeshShaderFeaturesEXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceMeshShaderPropertiesEXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceMeshShaderPropertiesEXT *in_info);
#define VK_PRINT_VkPhysicalDeviceMeshShaderPropertiesEXT(prefix, in_info) vk_print_VkPhysicalDeviceMeshShaderPropertiesEXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkDrawMeshTasksIndirectCommandEXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkDrawMeshTasksIndirectCommandEXT *in_info);
#define VK_PRINT_VkDrawMeshTasksIndirectCommandEXT(prefix, in_info) vk_print_VkDrawMeshTasksIndirectCommandEXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkRayTracingShaderGroupCreateInfoNV(int can_log_level, int log_level, FILE*, const char* prefix, const VkRayTracingShaderGroupCreateInfoNV *in_info);
#define VK_PRINT_VkRayTracingShaderGroupCreateInfoNV(prefix, in_info) vk_print_VkRayTracingShaderGroupCreateInfoNV(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkRayTracingShaderGroupCreateInfoKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkRayTracingShaderGroupCreateInfoKHR *in_info);
#define VK_PRINT_VkRayTracingShaderGroupCreateInfoKHR(prefix, in_info) vk_print_VkRayTracingShaderGroupCreateInfoKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkRayTracingPipelineCreateInfoNV(int can_log_level, int log_level, FILE*, const char* prefix, const VkRayTracingPipelineCreateInfoNV *in_info);
#define VK_PRINT_VkRayTracingPipelineCreateInfoNV(prefix, in_info) vk_print_VkRayTracingPipelineCreateInfoNV(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkRayTracingPipelineCreateInfoKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkRayTracingPipelineCreateInfoKHR *in_info);
#define VK_PRINT_VkRayTracingPipelineCreateInfoKHR(prefix, in_info) vk_print_VkRayTracingPipelineCreateInfoKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkGeometryTrianglesNV(int can_log_level, int log_level, FILE*, const char* prefix, const VkGeometryTrianglesNV *in_info);
#define VK_PRINT_VkGeometryTrianglesNV(prefix, in_info) vk_print_VkGeometryTrianglesNV(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkGeometryAABBNV(int can_log_level, int log_level, FILE*, const char* prefix, const VkGeometryAABBNV *in_info);
#define VK_PRINT_VkGeometryAABBNV(prefix, in_info) vk_print_VkGeometryAABBNV(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkGeometryDataNV(int can_log_level, int log_level, FILE*, const char* prefix, const VkGeometryDataNV *in_info);
#define VK_PRINT_VkGeometryDataNV(prefix, in_info) vk_print_VkGeometryDataNV(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkGeometryNV(int can_log_level, int log_level, FILE*, const char* prefix, const VkGeometryNV *in_info);
#define VK_PRINT_VkGeometryNV(prefix, in_info) vk_print_VkGeometryNV(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkAccelerationStructureInfoNV(int can_log_level, int log_level, FILE*, const char* prefix, const VkAccelerationStructureInfoNV *in_info);
#define VK_PRINT_VkAccelerationStructureInfoNV(prefix, in_info) vk_print_VkAccelerationStructureInfoNV(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkAccelerationStructureCreateInfoNV(int can_log_level, int log_level, FILE*, const char* prefix, const VkAccelerationStructureCreateInfoNV *in_info);
#define VK_PRINT_VkAccelerationStructureCreateInfoNV(prefix, in_info) vk_print_VkAccelerationStructureCreateInfoNV(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkBindAccelerationStructureMemoryInfoNV(int can_log_level, int log_level, FILE*, const char* prefix, const VkBindAccelerationStructureMemoryInfoNV *in_info);
#define VK_PRINT_VkBindAccelerationStructureMemoryInfoNV(prefix, in_info) vk_print_VkBindAccelerationStructureMemoryInfoNV(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkWriteDescriptorSetAccelerationStructureKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkWriteDescriptorSetAccelerationStructureKHR *in_info);
#define VK_PRINT_VkWriteDescriptorSetAccelerationStructureKHR(prefix, in_info) vk_print_VkWriteDescriptorSetAccelerationStructureKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkWriteDescriptorSetAccelerationStructureNV(int can_log_level, int log_level, FILE*, const char* prefix, const VkWriteDescriptorSetAccelerationStructureNV *in_info);
#define VK_PRINT_VkWriteDescriptorSetAccelerationStructureNV(prefix, in_info) vk_print_VkWriteDescriptorSetAccelerationStructureNV(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkAccelerationStructureMemoryRequirementsInfoNV(int can_log_level, int log_level, FILE*, const char* prefix, const VkAccelerationStructureMemoryRequirementsInfoNV *in_info);
#define VK_PRINT_VkAccelerationStructureMemoryRequirementsInfoNV(prefix, in_info) vk_print_VkAccelerationStructureMemoryRequirementsInfoNV(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceAccelerationStructureFeaturesKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceAccelerationStructureFeaturesKHR *in_info);
#define VK_PRINT_VkPhysicalDeviceAccelerationStructureFeaturesKHR(prefix, in_info) vk_print_VkPhysicalDeviceAccelerationStructureFeaturesKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceRayTracingPipelineFeaturesKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceRayTracingPipelineFeaturesKHR *in_info);
#define VK_PRINT_VkPhysicalDeviceRayTracingPipelineFeaturesKHR(prefix, in_info) vk_print_VkPhysicalDeviceRayTracingPipelineFeaturesKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceRayQueryFeaturesKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceRayQueryFeaturesKHR *in_info);
#define VK_PRINT_VkPhysicalDeviceRayQueryFeaturesKHR(prefix, in_info) vk_print_VkPhysicalDeviceRayQueryFeaturesKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceAccelerationStructurePropertiesKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceAccelerationStructurePropertiesKHR *in_info);
#define VK_PRINT_VkPhysicalDeviceAccelerationStructurePropertiesKHR(prefix, in_info) vk_print_VkPhysicalDeviceAccelerationStructurePropertiesKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceRayTracingPipelinePropertiesKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceRayTracingPipelinePropertiesKHR *in_info);
#define VK_PRINT_VkPhysicalDeviceRayTracingPipelinePropertiesKHR(prefix, in_info) vk_print_VkPhysicalDeviceRayTracingPipelinePropertiesKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceRayTracingPropertiesNV(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceRayTracingPropertiesNV *in_info);
#define VK_PRINT_VkPhysicalDeviceRayTracingPropertiesNV(prefix, in_info) vk_print_VkPhysicalDeviceRayTracingPropertiesNV(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkStridedDeviceAddressRegionKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkStridedDeviceAddressRegionKHR *in_info);
#define VK_PRINT_VkStridedDeviceAddressRegionKHR(prefix, in_info) vk_print_VkStridedDeviceAddressRegionKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkTraceRaysIndirectCommandKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkTraceRaysIndirectCommandKHR *in_info);
#define VK_PRINT_VkTraceRaysIndirectCommandKHR(prefix, in_info) vk_print_VkTraceRaysIndirectCommandKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkTraceRaysIndirectCommand2KHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkTraceRaysIndirectCommand2KHR *in_info);
#define VK_PRINT_VkTraceRaysIndirectCommand2KHR(prefix, in_info) vk_print_VkTraceRaysIndirectCommand2KHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceRayTracingMaintenance1FeaturesKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceRayTracingMaintenance1FeaturesKHR *in_info);
#define VK_PRINT_VkPhysicalDeviceRayTracingMaintenance1FeaturesKHR(prefix, in_info) vk_print_VkPhysicalDeviceRayTracingMaintenance1FeaturesKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkDrmFormatModifierPropertiesListEXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkDrmFormatModifierPropertiesListEXT *in_info);
#define VK_PRINT_VkDrmFormatModifierPropertiesListEXT(prefix, in_info) vk_print_VkDrmFormatModifierPropertiesListEXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkDrmFormatModifierPropertiesEXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkDrmFormatModifierPropertiesEXT *in_info);
#define VK_PRINT_VkDrmFormatModifierPropertiesEXT(prefix, in_info) vk_print_VkDrmFormatModifierPropertiesEXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceImageDrmFormatModifierInfoEXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceImageDrmFormatModifierInfoEXT *in_info);
#define VK_PRINT_VkPhysicalDeviceImageDrmFormatModifierInfoEXT(prefix, in_info) vk_print_VkPhysicalDeviceImageDrmFormatModifierInfoEXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkImageDrmFormatModifierListCreateInfoEXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkImageDrmFormatModifierListCreateInfoEXT *in_info);
#define VK_PRINT_VkImageDrmFormatModifierListCreateInfoEXT(prefix, in_info) vk_print_VkImageDrmFormatModifierListCreateInfoEXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkImageDrmFormatModifierExplicitCreateInfoEXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkImageDrmFormatModifierExplicitCreateInfoEXT *in_info);
#define VK_PRINT_VkImageDrmFormatModifierExplicitCreateInfoEXT(prefix, in_info) vk_print_VkImageDrmFormatModifierExplicitCreateInfoEXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkImageDrmFormatModifierPropertiesEXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkImageDrmFormatModifierPropertiesEXT *in_info);
#define VK_PRINT_VkImageDrmFormatModifierPropertiesEXT(prefix, in_info) vk_print_VkImageDrmFormatModifierPropertiesEXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkImageStencilUsageCreateInfo(int can_log_level, int log_level, FILE*, const char* prefix, const VkImageStencilUsageCreateInfo *in_info);
#define VK_PRINT_VkImageStencilUsageCreateInfo(prefix, in_info) vk_print_VkImageStencilUsageCreateInfo(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkImageStencilUsageCreateInfoEXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkImageStencilUsageCreateInfoEXT *in_info);
#define VK_PRINT_VkImageStencilUsageCreateInfoEXT(prefix, in_info) vk_print_VkImageStencilUsageCreateInfoEXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkDeviceMemoryOverallocationCreateInfoAMD(int can_log_level, int log_level, FILE*, const char* prefix, const VkDeviceMemoryOverallocationCreateInfoAMD *in_info);
#define VK_PRINT_VkDeviceMemoryOverallocationCreateInfoAMD(prefix, in_info) vk_print_VkDeviceMemoryOverallocationCreateInfoAMD(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceFragmentDensityMapFeaturesEXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceFragmentDensityMapFeaturesEXT *in_info);
#define VK_PRINT_VkPhysicalDeviceFragmentDensityMapFeaturesEXT(prefix, in_info) vk_print_VkPhysicalDeviceFragmentDensityMapFeaturesEXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceFragmentDensityMap2FeaturesEXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceFragmentDensityMap2FeaturesEXT *in_info);
#define VK_PRINT_VkPhysicalDeviceFragmentDensityMap2FeaturesEXT(prefix, in_info) vk_print_VkPhysicalDeviceFragmentDensityMap2FeaturesEXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceFragmentDensityMapOffsetFeaturesQCOM(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceFragmentDensityMapOffsetFeaturesQCOM *in_info);
#define VK_PRINT_VkPhysicalDeviceFragmentDensityMapOffsetFeaturesQCOM(prefix, in_info) vk_print_VkPhysicalDeviceFragmentDensityMapOffsetFeaturesQCOM(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceFragmentDensityMapPropertiesEXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceFragmentDensityMapPropertiesEXT *in_info);
#define VK_PRINT_VkPhysicalDeviceFragmentDensityMapPropertiesEXT(prefix, in_info) vk_print_VkPhysicalDeviceFragmentDensityMapPropertiesEXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceFragmentDensityMap2PropertiesEXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceFragmentDensityMap2PropertiesEXT *in_info);
#define VK_PRINT_VkPhysicalDeviceFragmentDensityMap2PropertiesEXT(prefix, in_info) vk_print_VkPhysicalDeviceFragmentDensityMap2PropertiesEXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceFragmentDensityMapOffsetPropertiesQCOM(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceFragmentDensityMapOffsetPropertiesQCOM *in_info);
#define VK_PRINT_VkPhysicalDeviceFragmentDensityMapOffsetPropertiesQCOM(prefix, in_info) vk_print_VkPhysicalDeviceFragmentDensityMapOffsetPropertiesQCOM(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkRenderPassFragmentDensityMapCreateInfoEXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkRenderPassFragmentDensityMapCreateInfoEXT *in_info);
#define VK_PRINT_VkRenderPassFragmentDensityMapCreateInfoEXT(prefix, in_info) vk_print_VkRenderPassFragmentDensityMapCreateInfoEXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkSubpassFragmentDensityMapOffsetEndInfoQCOM(int can_log_level, int log_level, FILE*, const char* prefix, const VkSubpassFragmentDensityMapOffsetEndInfoQCOM *in_info);
#define VK_PRINT_VkSubpassFragmentDensityMapOffsetEndInfoQCOM(prefix, in_info) vk_print_VkSubpassFragmentDensityMapOffsetEndInfoQCOM(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceScalarBlockLayoutFeatures(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceScalarBlockLayoutFeatures *in_info);
#define VK_PRINT_VkPhysicalDeviceScalarBlockLayoutFeatures(prefix, in_info) vk_print_VkPhysicalDeviceScalarBlockLayoutFeatures(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceScalarBlockLayoutFeaturesEXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceScalarBlockLayoutFeaturesEXT *in_info);
#define VK_PRINT_VkPhysicalDeviceScalarBlockLayoutFeaturesEXT(prefix, in_info) vk_print_VkPhysicalDeviceScalarBlockLayoutFeaturesEXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkSurfaceProtectedCapabilitiesKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkSurfaceProtectedCapabilitiesKHR *in_info);
#define VK_PRINT_VkSurfaceProtectedCapabilitiesKHR(prefix, in_info) vk_print_VkSurfaceProtectedCapabilitiesKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceUniformBufferStandardLayoutFeatures(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceUniformBufferStandardLayoutFeatures *in_info);
#define VK_PRINT_VkPhysicalDeviceUniformBufferStandardLayoutFeatures(prefix, in_info) vk_print_VkPhysicalDeviceUniformBufferStandardLayoutFeatures(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceUniformBufferStandardLayoutFeaturesKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceUniformBufferStandardLayoutFeaturesKHR *in_info);
#define VK_PRINT_VkPhysicalDeviceUniformBufferStandardLayoutFeaturesKHR(prefix, in_info) vk_print_VkPhysicalDeviceUniformBufferStandardLayoutFeaturesKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceDepthClipEnableFeaturesEXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceDepthClipEnableFeaturesEXT *in_info);
#define VK_PRINT_VkPhysicalDeviceDepthClipEnableFeaturesEXT(prefix, in_info) vk_print_VkPhysicalDeviceDepthClipEnableFeaturesEXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPipelineRasterizationDepthClipStateCreateInfoEXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkPipelineRasterizationDepthClipStateCreateInfoEXT *in_info);
#define VK_PRINT_VkPipelineRasterizationDepthClipStateCreateInfoEXT(prefix, in_info) vk_print_VkPipelineRasterizationDepthClipStateCreateInfoEXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceMemoryBudgetPropertiesEXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceMemoryBudgetPropertiesEXT *in_info);
#define VK_PRINT_VkPhysicalDeviceMemoryBudgetPropertiesEXT(prefix, in_info) vk_print_VkPhysicalDeviceMemoryBudgetPropertiesEXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceMemoryPriorityFeaturesEXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceMemoryPriorityFeaturesEXT *in_info);
#define VK_PRINT_VkPhysicalDeviceMemoryPriorityFeaturesEXT(prefix, in_info) vk_print_VkPhysicalDeviceMemoryPriorityFeaturesEXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkMemoryPriorityAllocateInfoEXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkMemoryPriorityAllocateInfoEXT *in_info);
#define VK_PRINT_VkMemoryPriorityAllocateInfoEXT(prefix, in_info) vk_print_VkMemoryPriorityAllocateInfoEXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDevicePageableDeviceLocalMemoryFeaturesEXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDevicePageableDeviceLocalMemoryFeaturesEXT *in_info);
#define VK_PRINT_VkPhysicalDevicePageableDeviceLocalMemoryFeaturesEXT(prefix, in_info) vk_print_VkPhysicalDevicePageableDeviceLocalMemoryFeaturesEXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceBufferDeviceAddressFeatures(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceBufferDeviceAddressFeatures *in_info);
#define VK_PRINT_VkPhysicalDeviceBufferDeviceAddressFeatures(prefix, in_info) vk_print_VkPhysicalDeviceBufferDeviceAddressFeatures(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceBufferDeviceAddressFeaturesKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceBufferDeviceAddressFeaturesKHR *in_info);
#define VK_PRINT_VkPhysicalDeviceBufferDeviceAddressFeaturesKHR(prefix, in_info) vk_print_VkPhysicalDeviceBufferDeviceAddressFeaturesKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceBufferDeviceAddressFeaturesEXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceBufferDeviceAddressFeaturesEXT *in_info);
#define VK_PRINT_VkPhysicalDeviceBufferDeviceAddressFeaturesEXT(prefix, in_info) vk_print_VkPhysicalDeviceBufferDeviceAddressFeaturesEXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceBufferAddressFeaturesEXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceBufferAddressFeaturesEXT *in_info);
#define VK_PRINT_VkPhysicalDeviceBufferAddressFeaturesEXT(prefix, in_info) vk_print_VkPhysicalDeviceBufferAddressFeaturesEXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkBufferDeviceAddressInfo(int can_log_level, int log_level, FILE*, const char* prefix, const VkBufferDeviceAddressInfo *in_info);
#define VK_PRINT_VkBufferDeviceAddressInfo(prefix, in_info) vk_print_VkBufferDeviceAddressInfo(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkBufferDeviceAddressInfoKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkBufferDeviceAddressInfoKHR *in_info);
#define VK_PRINT_VkBufferDeviceAddressInfoKHR(prefix, in_info) vk_print_VkBufferDeviceAddressInfoKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkBufferDeviceAddressInfoEXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkBufferDeviceAddressInfoEXT *in_info);
#define VK_PRINT_VkBufferDeviceAddressInfoEXT(prefix, in_info) vk_print_VkBufferDeviceAddressInfoEXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkBufferOpaqueCaptureAddressCreateInfo(int can_log_level, int log_level, FILE*, const char* prefix, const VkBufferOpaqueCaptureAddressCreateInfo *in_info);
#define VK_PRINT_VkBufferOpaqueCaptureAddressCreateInfo(prefix, in_info) vk_print_VkBufferOpaqueCaptureAddressCreateInfo(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkBufferOpaqueCaptureAddressCreateInfoKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkBufferOpaqueCaptureAddressCreateInfoKHR *in_info);
#define VK_PRINT_VkBufferOpaqueCaptureAddressCreateInfoKHR(prefix, in_info) vk_print_VkBufferOpaqueCaptureAddressCreateInfoKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkBufferDeviceAddressCreateInfoEXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkBufferDeviceAddressCreateInfoEXT *in_info);
#define VK_PRINT_VkBufferDeviceAddressCreateInfoEXT(prefix, in_info) vk_print_VkBufferDeviceAddressCreateInfoEXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceImageViewImageFormatInfoEXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceImageViewImageFormatInfoEXT *in_info);
#define VK_PRINT_VkPhysicalDeviceImageViewImageFormatInfoEXT(prefix, in_info) vk_print_VkPhysicalDeviceImageViewImageFormatInfoEXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkFilterCubicImageViewImageFormatPropertiesEXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkFilterCubicImageViewImageFormatPropertiesEXT *in_info);
#define VK_PRINT_VkFilterCubicImageViewImageFormatPropertiesEXT(prefix, in_info) vk_print_VkFilterCubicImageViewImageFormatPropertiesEXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceImagelessFramebufferFeatures(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceImagelessFramebufferFeatures *in_info);
#define VK_PRINT_VkPhysicalDeviceImagelessFramebufferFeatures(prefix, in_info) vk_print_VkPhysicalDeviceImagelessFramebufferFeatures(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceImagelessFramebufferFeaturesKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceImagelessFramebufferFeaturesKHR *in_info);
#define VK_PRINT_VkPhysicalDeviceImagelessFramebufferFeaturesKHR(prefix, in_info) vk_print_VkPhysicalDeviceImagelessFramebufferFeaturesKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkFramebufferAttachmentsCreateInfo(int can_log_level, int log_level, FILE*, const char* prefix, const VkFramebufferAttachmentsCreateInfo *in_info);
#define VK_PRINT_VkFramebufferAttachmentsCreateInfo(prefix, in_info) vk_print_VkFramebufferAttachmentsCreateInfo(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkFramebufferAttachmentsCreateInfoKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkFramebufferAttachmentsCreateInfoKHR *in_info);
#define VK_PRINT_VkFramebufferAttachmentsCreateInfoKHR(prefix, in_info) vk_print_VkFramebufferAttachmentsCreateInfoKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkFramebufferAttachmentImageInfo(int can_log_level, int log_level, FILE*, const char* prefix, const VkFramebufferAttachmentImageInfo *in_info);
#define VK_PRINT_VkFramebufferAttachmentImageInfo(prefix, in_info) vk_print_VkFramebufferAttachmentImageInfo(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkFramebufferAttachmentImageInfoKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkFramebufferAttachmentImageInfoKHR *in_info);
#define VK_PRINT_VkFramebufferAttachmentImageInfoKHR(prefix, in_info) vk_print_VkFramebufferAttachmentImageInfoKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkRenderPassAttachmentBeginInfo(int can_log_level, int log_level, FILE*, const char* prefix, const VkRenderPassAttachmentBeginInfo *in_info);
#define VK_PRINT_VkRenderPassAttachmentBeginInfo(prefix, in_info) vk_print_VkRenderPassAttachmentBeginInfo(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkRenderPassAttachmentBeginInfoKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkRenderPassAttachmentBeginInfoKHR *in_info);
#define VK_PRINT_VkRenderPassAttachmentBeginInfoKHR(prefix, in_info) vk_print_VkRenderPassAttachmentBeginInfoKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceTextureCompressionASTCHDRFeatures(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceTextureCompressionASTCHDRFeatures *in_info);
#define VK_PRINT_VkPhysicalDeviceTextureCompressionASTCHDRFeatures(prefix, in_info) vk_print_VkPhysicalDeviceTextureCompressionASTCHDRFeatures(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceTextureCompressionASTCHDRFeaturesEXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceTextureCompressionASTCHDRFeaturesEXT *in_info);
#define VK_PRINT_VkPhysicalDeviceTextureCompressionASTCHDRFeaturesEXT(prefix, in_info) vk_print_VkPhysicalDeviceTextureCompressionASTCHDRFeaturesEXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceCooperativeMatrixFeaturesNV(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceCooperativeMatrixFeaturesNV *in_info);
#define VK_PRINT_VkPhysicalDeviceCooperativeMatrixFeaturesNV(prefix, in_info) vk_print_VkPhysicalDeviceCooperativeMatrixFeaturesNV(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceCooperativeMatrixPropertiesNV(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceCooperativeMatrixPropertiesNV *in_info);
#define VK_PRINT_VkPhysicalDeviceCooperativeMatrixPropertiesNV(prefix, in_info) vk_print_VkPhysicalDeviceCooperativeMatrixPropertiesNV(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkCooperativeMatrixPropertiesNV(int can_log_level, int log_level, FILE*, const char* prefix, const VkCooperativeMatrixPropertiesNV *in_info);
#define VK_PRINT_VkCooperativeMatrixPropertiesNV(prefix, in_info) vk_print_VkCooperativeMatrixPropertiesNV(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceYcbcrImageArraysFeaturesEXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceYcbcrImageArraysFeaturesEXT *in_info);
#define VK_PRINT_VkPhysicalDeviceYcbcrImageArraysFeaturesEXT(prefix, in_info) vk_print_VkPhysicalDeviceYcbcrImageArraysFeaturesEXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkImageViewHandleInfoNVX(int can_log_level, int log_level, FILE*, const char* prefix, const VkImageViewHandleInfoNVX *in_info);
#define VK_PRINT_VkImageViewHandleInfoNVX(prefix, in_info) vk_print_VkImageViewHandleInfoNVX(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkImageViewAddressPropertiesNVX(int can_log_level, int log_level, FILE*, const char* prefix, const VkImageViewAddressPropertiesNVX *in_info);
#define VK_PRINT_VkImageViewAddressPropertiesNVX(prefix, in_info) vk_print_VkImageViewAddressPropertiesNVX(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPipelineCreationFeedback(int can_log_level, int log_level, FILE*, const char* prefix, const VkPipelineCreationFeedback *in_info);
#define VK_PRINT_VkPipelineCreationFeedback(prefix, in_info) vk_print_VkPipelineCreationFeedback(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPipelineCreationFeedbackEXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkPipelineCreationFeedbackEXT *in_info);
#define VK_PRINT_VkPipelineCreationFeedbackEXT(prefix, in_info) vk_print_VkPipelineCreationFeedbackEXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPipelineCreationFeedbackCreateInfoEXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkPipelineCreationFeedbackCreateInfoEXT *in_info);
#define VK_PRINT_VkPipelineCreationFeedbackCreateInfoEXT(prefix, in_info) vk_print_VkPipelineCreationFeedbackCreateInfoEXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDevicePresentBarrierFeaturesNV(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDevicePresentBarrierFeaturesNV *in_info);
#define VK_PRINT_VkPhysicalDevicePresentBarrierFeaturesNV(prefix, in_info) vk_print_VkPhysicalDevicePresentBarrierFeaturesNV(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkSurfaceCapabilitiesPresentBarrierNV(int can_log_level, int log_level, FILE*, const char* prefix, const VkSurfaceCapabilitiesPresentBarrierNV *in_info);
#define VK_PRINT_VkSurfaceCapabilitiesPresentBarrierNV(prefix, in_info) vk_print_VkSurfaceCapabilitiesPresentBarrierNV(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkSwapchainPresentBarrierCreateInfoNV(int can_log_level, int log_level, FILE*, const char* prefix, const VkSwapchainPresentBarrierCreateInfoNV *in_info);
#define VK_PRINT_VkSwapchainPresentBarrierCreateInfoNV(prefix, in_info) vk_print_VkSwapchainPresentBarrierCreateInfoNV(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDevicePerformanceQueryFeaturesKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDevicePerformanceQueryFeaturesKHR *in_info);
#define VK_PRINT_VkPhysicalDevicePerformanceQueryFeaturesKHR(prefix, in_info) vk_print_VkPhysicalDevicePerformanceQueryFeaturesKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDevicePerformanceQueryPropertiesKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDevicePerformanceQueryPropertiesKHR *in_info);
#define VK_PRINT_VkPhysicalDevicePerformanceQueryPropertiesKHR(prefix, in_info) vk_print_VkPhysicalDevicePerformanceQueryPropertiesKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPerformanceCounterKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkPerformanceCounterKHR *in_info);
#define VK_PRINT_VkPerformanceCounterKHR(prefix, in_info) vk_print_VkPerformanceCounterKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPerformanceCounterDescriptionKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkPerformanceCounterDescriptionKHR *in_info);
#define VK_PRINT_VkPerformanceCounterDescriptionKHR(prefix, in_info) vk_print_VkPerformanceCounterDescriptionKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkQueryPoolPerformanceCreateInfoKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkQueryPoolPerformanceCreateInfoKHR *in_info);
#define VK_PRINT_VkQueryPoolPerformanceCreateInfoKHR(prefix, in_info) vk_print_VkQueryPoolPerformanceCreateInfoKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPerformanceCounterResultKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkPerformanceCounterResultKHR *in_info);
#define VK_PRINT_VkPerformanceCounterResultKHR(prefix, in_info) vk_print_VkPerformanceCounterResultKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkAcquireProfilingLockInfoKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkAcquireProfilingLockInfoKHR *in_info);
#define VK_PRINT_VkAcquireProfilingLockInfoKHR(prefix, in_info) vk_print_VkAcquireProfilingLockInfoKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPerformanceQuerySubmitInfoKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkPerformanceQuerySubmitInfoKHR *in_info);
#define VK_PRINT_VkPerformanceQuerySubmitInfoKHR(prefix, in_info) vk_print_VkPerformanceQuerySubmitInfoKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkHeadlessSurfaceCreateInfoEXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkHeadlessSurfaceCreateInfoEXT *in_info);
#define VK_PRINT_VkHeadlessSurfaceCreateInfoEXT(prefix, in_info) vk_print_VkHeadlessSurfaceCreateInfoEXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceCoverageReductionModeFeaturesNV(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceCoverageReductionModeFeaturesNV *in_info);
#define VK_PRINT_VkPhysicalDeviceCoverageReductionModeFeaturesNV(prefix, in_info) vk_print_VkPhysicalDeviceCoverageReductionModeFeaturesNV(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPipelineCoverageReductionStateCreateInfoNV(int can_log_level, int log_level, FILE*, const char* prefix, const VkPipelineCoverageReductionStateCreateInfoNV *in_info);
#define VK_PRINT_VkPipelineCoverageReductionStateCreateInfoNV(prefix, in_info) vk_print_VkPipelineCoverageReductionStateCreateInfoNV(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkFramebufferMixedSamplesCombinationNV(int can_log_level, int log_level, FILE*, const char* prefix, const VkFramebufferMixedSamplesCombinationNV *in_info);
#define VK_PRINT_VkFramebufferMixedSamplesCombinationNV(prefix, in_info) vk_print_VkFramebufferMixedSamplesCombinationNV(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceShaderIntegerFunctions2FeaturesINTEL(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceShaderIntegerFunctions2FeaturesINTEL *in_info);
#define VK_PRINT_VkPhysicalDeviceShaderIntegerFunctions2FeaturesINTEL(prefix, in_info) vk_print_VkPhysicalDeviceShaderIntegerFunctions2FeaturesINTEL(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPerformanceValueDataINTEL(int can_log_level, int log_level, FILE*, const char* prefix, const VkPerformanceValueDataINTEL *in_info);
#define VK_PRINT_VkPerformanceValueDataINTEL(prefix, in_info) vk_print_VkPerformanceValueDataINTEL(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPerformanceValueINTEL(int can_log_level, int log_level, FILE*, const char* prefix, const VkPerformanceValueINTEL *in_info);
#define VK_PRINT_VkPerformanceValueINTEL(prefix, in_info) vk_print_VkPerformanceValueINTEL(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkInitializePerformanceApiInfoINTEL(int can_log_level, int log_level, FILE*, const char* prefix, const VkInitializePerformanceApiInfoINTEL *in_info);
#define VK_PRINT_VkInitializePerformanceApiInfoINTEL(prefix, in_info) vk_print_VkInitializePerformanceApiInfoINTEL(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkQueryPoolPerformanceQueryCreateInfoINTEL(int can_log_level, int log_level, FILE*, const char* prefix, const VkQueryPoolPerformanceQueryCreateInfoINTEL *in_info);
#define VK_PRINT_VkQueryPoolPerformanceQueryCreateInfoINTEL(prefix, in_info) vk_print_VkQueryPoolPerformanceQueryCreateInfoINTEL(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkQueryPoolCreateInfoINTEL(int can_log_level, int log_level, FILE*, const char* prefix, const VkQueryPoolCreateInfoINTEL *in_info);
#define VK_PRINT_VkQueryPoolCreateInfoINTEL(prefix, in_info) vk_print_VkQueryPoolCreateInfoINTEL(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPerformanceMarkerInfoINTEL(int can_log_level, int log_level, FILE*, const char* prefix, const VkPerformanceMarkerInfoINTEL *in_info);
#define VK_PRINT_VkPerformanceMarkerInfoINTEL(prefix, in_info) vk_print_VkPerformanceMarkerInfoINTEL(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPerformanceStreamMarkerInfoINTEL(int can_log_level, int log_level, FILE*, const char* prefix, const VkPerformanceStreamMarkerInfoINTEL *in_info);
#define VK_PRINT_VkPerformanceStreamMarkerInfoINTEL(prefix, in_info) vk_print_VkPerformanceStreamMarkerInfoINTEL(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPerformanceOverrideInfoINTEL(int can_log_level, int log_level, FILE*, const char* prefix, const VkPerformanceOverrideInfoINTEL *in_info);
#define VK_PRINT_VkPerformanceOverrideInfoINTEL(prefix, in_info) vk_print_VkPerformanceOverrideInfoINTEL(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPerformanceConfigurationAcquireInfoINTEL(int can_log_level, int log_level, FILE*, const char* prefix, const VkPerformanceConfigurationAcquireInfoINTEL *in_info);
#define VK_PRINT_VkPerformanceConfigurationAcquireInfoINTEL(prefix, in_info) vk_print_VkPerformanceConfigurationAcquireInfoINTEL(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceShaderClockFeaturesKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceShaderClockFeaturesKHR *in_info);
#define VK_PRINT_VkPhysicalDeviceShaderClockFeaturesKHR(prefix, in_info) vk_print_VkPhysicalDeviceShaderClockFeaturesKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceIndexTypeUint8FeaturesKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceIndexTypeUint8FeaturesKHR *in_info);
#define VK_PRINT_VkPhysicalDeviceIndexTypeUint8FeaturesKHR(prefix, in_info) vk_print_VkPhysicalDeviceIndexTypeUint8FeaturesKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceIndexTypeUint8FeaturesEXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceIndexTypeUint8FeaturesEXT *in_info);
#define VK_PRINT_VkPhysicalDeviceIndexTypeUint8FeaturesEXT(prefix, in_info) vk_print_VkPhysicalDeviceIndexTypeUint8FeaturesEXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceShaderSMBuiltinsPropertiesNV(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceShaderSMBuiltinsPropertiesNV *in_info);
#define VK_PRINT_VkPhysicalDeviceShaderSMBuiltinsPropertiesNV(prefix, in_info) vk_print_VkPhysicalDeviceShaderSMBuiltinsPropertiesNV(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceShaderSMBuiltinsFeaturesNV(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceShaderSMBuiltinsFeaturesNV *in_info);
#define VK_PRINT_VkPhysicalDeviceShaderSMBuiltinsFeaturesNV(prefix, in_info) vk_print_VkPhysicalDeviceShaderSMBuiltinsFeaturesNV(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceFragmentShaderInterlockFeaturesEXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceFragmentShaderInterlockFeaturesEXT *in_info);
#define VK_PRINT_VkPhysicalDeviceFragmentShaderInterlockFeaturesEXT(prefix, in_info) vk_print_VkPhysicalDeviceFragmentShaderInterlockFeaturesEXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceSeparateDepthStencilLayoutsFeatures(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceSeparateDepthStencilLayoutsFeatures *in_info);
#define VK_PRINT_VkPhysicalDeviceSeparateDepthStencilLayoutsFeatures(prefix, in_info) vk_print_VkPhysicalDeviceSeparateDepthStencilLayoutsFeatures(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceSeparateDepthStencilLayoutsFeaturesKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceSeparateDepthStencilLayoutsFeaturesKHR *in_info);
#define VK_PRINT_VkPhysicalDeviceSeparateDepthStencilLayoutsFeaturesKHR(prefix, in_info) vk_print_VkPhysicalDeviceSeparateDepthStencilLayoutsFeaturesKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkAttachmentReferenceStencilLayout(int can_log_level, int log_level, FILE*, const char* prefix, const VkAttachmentReferenceStencilLayout *in_info);
#define VK_PRINT_VkAttachmentReferenceStencilLayout(prefix, in_info) vk_print_VkAttachmentReferenceStencilLayout(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDevicePrimitiveTopologyListRestartFeaturesEXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDevicePrimitiveTopologyListRestartFeaturesEXT *in_info);
#define VK_PRINT_VkPhysicalDevicePrimitiveTopologyListRestartFeaturesEXT(prefix, in_info) vk_print_VkPhysicalDevicePrimitiveTopologyListRestartFeaturesEXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkAttachmentReferenceStencilLayoutKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkAttachmentReferenceStencilLayoutKHR *in_info);
#define VK_PRINT_VkAttachmentReferenceStencilLayoutKHR(prefix, in_info) vk_print_VkAttachmentReferenceStencilLayoutKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkAttachmentDescriptionStencilLayout(int can_log_level, int log_level, FILE*, const char* prefix, const VkAttachmentDescriptionStencilLayout *in_info);
#define VK_PRINT_VkAttachmentDescriptionStencilLayout(prefix, in_info) vk_print_VkAttachmentDescriptionStencilLayout(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkAttachmentDescriptionStencilLayoutKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkAttachmentDescriptionStencilLayoutKHR *in_info);
#define VK_PRINT_VkAttachmentDescriptionStencilLayoutKHR(prefix, in_info) vk_print_VkAttachmentDescriptionStencilLayoutKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDevicePipelineExecutablePropertiesFeaturesKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDevicePipelineExecutablePropertiesFeaturesKHR *in_info);
#define VK_PRINT_VkPhysicalDevicePipelineExecutablePropertiesFeaturesKHR(prefix, in_info) vk_print_VkPhysicalDevicePipelineExecutablePropertiesFeaturesKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPipelineInfoKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkPipelineInfoKHR *in_info);
#define VK_PRINT_VkPipelineInfoKHR(prefix, in_info) vk_print_VkPipelineInfoKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPipelineInfoEXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkPipelineInfoEXT *in_info);
#define VK_PRINT_VkPipelineInfoEXT(prefix, in_info) vk_print_VkPipelineInfoEXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPipelineExecutablePropertiesKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkPipelineExecutablePropertiesKHR *in_info);
#define VK_PRINT_VkPipelineExecutablePropertiesKHR(prefix, in_info) vk_print_VkPipelineExecutablePropertiesKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPipelineExecutableInfoKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkPipelineExecutableInfoKHR *in_info);
#define VK_PRINT_VkPipelineExecutableInfoKHR(prefix, in_info) vk_print_VkPipelineExecutableInfoKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPipelineExecutableStatisticValueKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkPipelineExecutableStatisticValueKHR *in_info);
#define VK_PRINT_VkPipelineExecutableStatisticValueKHR(prefix, in_info) vk_print_VkPipelineExecutableStatisticValueKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPipelineExecutableStatisticKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkPipelineExecutableStatisticKHR *in_info);
#define VK_PRINT_VkPipelineExecutableStatisticKHR(prefix, in_info) vk_print_VkPipelineExecutableStatisticKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPipelineExecutableInternalRepresentationKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkPipelineExecutableInternalRepresentationKHR *in_info);
#define VK_PRINT_VkPipelineExecutableInternalRepresentationKHR(prefix, in_info) vk_print_VkPipelineExecutableInternalRepresentationKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceShaderDemoteToHelperInvocationFeatures(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceShaderDemoteToHelperInvocationFeatures *in_info);
#define VK_PRINT_VkPhysicalDeviceShaderDemoteToHelperInvocationFeatures(prefix, in_info) vk_print_VkPhysicalDeviceShaderDemoteToHelperInvocationFeatures(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceShaderDemoteToHelperInvocationFeaturesEXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceShaderDemoteToHelperInvocationFeaturesEXT *in_info);
#define VK_PRINT_VkPhysicalDeviceShaderDemoteToHelperInvocationFeaturesEXT(prefix, in_info) vk_print_VkPhysicalDeviceShaderDemoteToHelperInvocationFeaturesEXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceTexelBufferAlignmentFeaturesEXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceTexelBufferAlignmentFeaturesEXT *in_info);
#define VK_PRINT_VkPhysicalDeviceTexelBufferAlignmentFeaturesEXT(prefix, in_info) vk_print_VkPhysicalDeviceTexelBufferAlignmentFeaturesEXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceTexelBufferAlignmentProperties(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceTexelBufferAlignmentProperties *in_info);
#define VK_PRINT_VkPhysicalDeviceTexelBufferAlignmentProperties(prefix, in_info) vk_print_VkPhysicalDeviceTexelBufferAlignmentProperties(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceTexelBufferAlignmentPropertiesEXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceTexelBufferAlignmentPropertiesEXT *in_info);
#define VK_PRINT_VkPhysicalDeviceTexelBufferAlignmentPropertiesEXT(prefix, in_info) vk_print_VkPhysicalDeviceTexelBufferAlignmentPropertiesEXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceSubgroupSizeControlFeatures(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceSubgroupSizeControlFeatures *in_info);
#define VK_PRINT_VkPhysicalDeviceSubgroupSizeControlFeatures(prefix, in_info) vk_print_VkPhysicalDeviceSubgroupSizeControlFeatures(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceSubgroupSizeControlFeaturesEXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceSubgroupSizeControlFeaturesEXT *in_info);
#define VK_PRINT_VkPhysicalDeviceSubgroupSizeControlFeaturesEXT(prefix, in_info) vk_print_VkPhysicalDeviceSubgroupSizeControlFeaturesEXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceSubgroupSizeControlProperties(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceSubgroupSizeControlProperties *in_info);
#define VK_PRINT_VkPhysicalDeviceSubgroupSizeControlProperties(prefix, in_info) vk_print_VkPhysicalDeviceSubgroupSizeControlProperties(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceSubgroupSizeControlPropertiesEXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceSubgroupSizeControlPropertiesEXT *in_info);
#define VK_PRINT_VkPhysicalDeviceSubgroupSizeControlPropertiesEXT(prefix, in_info) vk_print_VkPhysicalDeviceSubgroupSizeControlPropertiesEXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPipelineShaderStageRequiredSubgroupSizeCreateInfo(int can_log_level, int log_level, FILE*, const char* prefix, const VkPipelineShaderStageRequiredSubgroupSizeCreateInfo *in_info);
#define VK_PRINT_VkPipelineShaderStageRequiredSubgroupSizeCreateInfo(prefix, in_info) vk_print_VkPipelineShaderStageRequiredSubgroupSizeCreateInfo(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPipelineShaderStageRequiredSubgroupSizeCreateInfoEXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkPipelineShaderStageRequiredSubgroupSizeCreateInfoEXT *in_info);
#define VK_PRINT_VkPipelineShaderStageRequiredSubgroupSizeCreateInfoEXT(prefix, in_info) vk_print_VkPipelineShaderStageRequiredSubgroupSizeCreateInfoEXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkShaderRequiredSubgroupSizeCreateInfoEXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkShaderRequiredSubgroupSizeCreateInfoEXT *in_info);
#define VK_PRINT_VkShaderRequiredSubgroupSizeCreateInfoEXT(prefix, in_info) vk_print_VkShaderRequiredSubgroupSizeCreateInfoEXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkSubpassShadingPipelineCreateInfoHUAWEI(int can_log_level, int log_level, FILE*, const char* prefix, const VkSubpassShadingPipelineCreateInfoHUAWEI *in_info);
#define VK_PRINT_VkSubpassShadingPipelineCreateInfoHUAWEI(prefix, in_info) vk_print_VkSubpassShadingPipelineCreateInfoHUAWEI(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceSubpassShadingPropertiesHUAWEI(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceSubpassShadingPropertiesHUAWEI *in_info);
#define VK_PRINT_VkPhysicalDeviceSubpassShadingPropertiesHUAWEI(prefix, in_info) vk_print_VkPhysicalDeviceSubpassShadingPropertiesHUAWEI(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceClusterCullingShaderPropertiesHUAWEI(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceClusterCullingShaderPropertiesHUAWEI *in_info);
#define VK_PRINT_VkPhysicalDeviceClusterCullingShaderPropertiesHUAWEI(prefix, in_info) vk_print_VkPhysicalDeviceClusterCullingShaderPropertiesHUAWEI(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkMemoryOpaqueCaptureAddressAllocateInfo(int can_log_level, int log_level, FILE*, const char* prefix, const VkMemoryOpaqueCaptureAddressAllocateInfo *in_info);
#define VK_PRINT_VkMemoryOpaqueCaptureAddressAllocateInfo(prefix, in_info) vk_print_VkMemoryOpaqueCaptureAddressAllocateInfo(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkMemoryOpaqueCaptureAddressAllocateInfoKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkMemoryOpaqueCaptureAddressAllocateInfoKHR *in_info);
#define VK_PRINT_VkMemoryOpaqueCaptureAddressAllocateInfoKHR(prefix, in_info) vk_print_VkMemoryOpaqueCaptureAddressAllocateInfoKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkDeviceMemoryOpaqueCaptureAddressInfo(int can_log_level, int log_level, FILE*, const char* prefix, const VkDeviceMemoryOpaqueCaptureAddressInfo *in_info);
#define VK_PRINT_VkDeviceMemoryOpaqueCaptureAddressInfo(prefix, in_info) vk_print_VkDeviceMemoryOpaqueCaptureAddressInfo(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkDeviceMemoryOpaqueCaptureAddressInfoKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkDeviceMemoryOpaqueCaptureAddressInfoKHR *in_info);
#define VK_PRINT_VkDeviceMemoryOpaqueCaptureAddressInfoKHR(prefix, in_info) vk_print_VkDeviceMemoryOpaqueCaptureAddressInfoKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceLineRasterizationFeaturesKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceLineRasterizationFeaturesKHR *in_info);
#define VK_PRINT_VkPhysicalDeviceLineRasterizationFeaturesKHR(prefix, in_info) vk_print_VkPhysicalDeviceLineRasterizationFeaturesKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceLineRasterizationFeaturesEXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceLineRasterizationFeaturesEXT *in_info);
#define VK_PRINT_VkPhysicalDeviceLineRasterizationFeaturesEXT(prefix, in_info) vk_print_VkPhysicalDeviceLineRasterizationFeaturesEXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceLineRasterizationPropertiesKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceLineRasterizationPropertiesKHR *in_info);
#define VK_PRINT_VkPhysicalDeviceLineRasterizationPropertiesKHR(prefix, in_info) vk_print_VkPhysicalDeviceLineRasterizationPropertiesKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceLineRasterizationPropertiesEXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceLineRasterizationPropertiesEXT *in_info);
#define VK_PRINT_VkPhysicalDeviceLineRasterizationPropertiesEXT(prefix, in_info) vk_print_VkPhysicalDeviceLineRasterizationPropertiesEXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPipelineRasterizationLineStateCreateInfoKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkPipelineRasterizationLineStateCreateInfoKHR *in_info);
#define VK_PRINT_VkPipelineRasterizationLineStateCreateInfoKHR(prefix, in_info) vk_print_VkPipelineRasterizationLineStateCreateInfoKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPipelineRasterizationLineStateCreateInfoEXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkPipelineRasterizationLineStateCreateInfoEXT *in_info);
#define VK_PRINT_VkPipelineRasterizationLineStateCreateInfoEXT(prefix, in_info) vk_print_VkPipelineRasterizationLineStateCreateInfoEXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDevicePipelineCreationCacheControlFeatures(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDevicePipelineCreationCacheControlFeatures *in_info);
#define VK_PRINT_VkPhysicalDevicePipelineCreationCacheControlFeatures(prefix, in_info) vk_print_VkPhysicalDevicePipelineCreationCacheControlFeatures(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDevicePipelineCreationCacheControlFeaturesEXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDevicePipelineCreationCacheControlFeaturesEXT *in_info);
#define VK_PRINT_VkPhysicalDevicePipelineCreationCacheControlFeaturesEXT(prefix, in_info) vk_print_VkPhysicalDevicePipelineCreationCacheControlFeaturesEXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceVulkan11Features(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceVulkan11Features *in_info);
#define VK_PRINT_VkPhysicalDeviceVulkan11Features(prefix, in_info) vk_print_VkPhysicalDeviceVulkan11Features(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceVulkan11Properties(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceVulkan11Properties *in_info);
#define VK_PRINT_VkPhysicalDeviceVulkan11Properties(prefix, in_info) vk_print_VkPhysicalDeviceVulkan11Properties(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceVulkan12Features(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceVulkan12Features *in_info);
#define VK_PRINT_VkPhysicalDeviceVulkan12Features(prefix, in_info) vk_print_VkPhysicalDeviceVulkan12Features(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceVulkan12Properties(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceVulkan12Properties *in_info);
#define VK_PRINT_VkPhysicalDeviceVulkan12Properties(prefix, in_info) vk_print_VkPhysicalDeviceVulkan12Properties(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceVulkan13Features(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceVulkan13Features *in_info);
#define VK_PRINT_VkPhysicalDeviceVulkan13Features(prefix, in_info) vk_print_VkPhysicalDeviceVulkan13Features(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceVulkan13Properties(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceVulkan13Properties *in_info);
#define VK_PRINT_VkPhysicalDeviceVulkan13Properties(prefix, in_info) vk_print_VkPhysicalDeviceVulkan13Properties(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPipelineCompilerControlCreateInfoAMD(int can_log_level, int log_level, FILE*, const char* prefix, const VkPipelineCompilerControlCreateInfoAMD *in_info);
#define VK_PRINT_VkPipelineCompilerControlCreateInfoAMD(prefix, in_info) vk_print_VkPipelineCompilerControlCreateInfoAMD(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceCoherentMemoryFeaturesAMD(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceCoherentMemoryFeaturesAMD *in_info);
#define VK_PRINT_VkPhysicalDeviceCoherentMemoryFeaturesAMD(prefix, in_info) vk_print_VkPhysicalDeviceCoherentMemoryFeaturesAMD(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceToolProperties(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceToolProperties *in_info);
#define VK_PRINT_VkPhysicalDeviceToolProperties(prefix, in_info) vk_print_VkPhysicalDeviceToolProperties(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceToolPropertiesEXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceToolPropertiesEXT *in_info);
#define VK_PRINT_VkPhysicalDeviceToolPropertiesEXT(prefix, in_info) vk_print_VkPhysicalDeviceToolPropertiesEXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkSamplerCustomBorderColorCreateInfoEXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkSamplerCustomBorderColorCreateInfoEXT *in_info);
#define VK_PRINT_VkSamplerCustomBorderColorCreateInfoEXT(prefix, in_info) vk_print_VkSamplerCustomBorderColorCreateInfoEXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceCustomBorderColorPropertiesEXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceCustomBorderColorPropertiesEXT *in_info);
#define VK_PRINT_VkPhysicalDeviceCustomBorderColorPropertiesEXT(prefix, in_info) vk_print_VkPhysicalDeviceCustomBorderColorPropertiesEXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceCustomBorderColorFeaturesEXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceCustomBorderColorFeaturesEXT *in_info);
#define VK_PRINT_VkPhysicalDeviceCustomBorderColorFeaturesEXT(prefix, in_info) vk_print_VkPhysicalDeviceCustomBorderColorFeaturesEXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkSamplerBorderColorComponentMappingCreateInfoEXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkSamplerBorderColorComponentMappingCreateInfoEXT *in_info);
#define VK_PRINT_VkSamplerBorderColorComponentMappingCreateInfoEXT(prefix, in_info) vk_print_VkSamplerBorderColorComponentMappingCreateInfoEXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceBorderColorSwizzleFeaturesEXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceBorderColorSwizzleFeaturesEXT *in_info);
#define VK_PRINT_VkPhysicalDeviceBorderColorSwizzleFeaturesEXT(prefix, in_info) vk_print_VkPhysicalDeviceBorderColorSwizzleFeaturesEXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkDeviceOrHostAddressKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkDeviceOrHostAddressKHR *in_info);
#define VK_PRINT_VkDeviceOrHostAddressKHR(prefix, in_info) vk_print_VkDeviceOrHostAddressKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkDeviceOrHostAddressConstKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkDeviceOrHostAddressConstKHR *in_info);
#define VK_PRINT_VkDeviceOrHostAddressConstKHR(prefix, in_info) vk_print_VkDeviceOrHostAddressConstKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkAccelerationStructureGeometryTrianglesDataKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkAccelerationStructureGeometryTrianglesDataKHR *in_info);
#define VK_PRINT_VkAccelerationStructureGeometryTrianglesDataKHR(prefix, in_info) vk_print_VkAccelerationStructureGeometryTrianglesDataKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkAccelerationStructureGeometryAabbsDataKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkAccelerationStructureGeometryAabbsDataKHR *in_info);
#define VK_PRINT_VkAccelerationStructureGeometryAabbsDataKHR(prefix, in_info) vk_print_VkAccelerationStructureGeometryAabbsDataKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkAccelerationStructureGeometryInstancesDataKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkAccelerationStructureGeometryInstancesDataKHR *in_info);
#define VK_PRINT_VkAccelerationStructureGeometryInstancesDataKHR(prefix, in_info) vk_print_VkAccelerationStructureGeometryInstancesDataKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkAccelerationStructureGeometryDataKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkAccelerationStructureGeometryDataKHR *in_info);
#define VK_PRINT_VkAccelerationStructureGeometryDataKHR(prefix, in_info) vk_print_VkAccelerationStructureGeometryDataKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkAccelerationStructureGeometryKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkAccelerationStructureGeometryKHR *in_info);
#define VK_PRINT_VkAccelerationStructureGeometryKHR(prefix, in_info) vk_print_VkAccelerationStructureGeometryKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkAccelerationStructureBuildRangeInfoKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkAccelerationStructureBuildRangeInfoKHR *in_info);
#define VK_PRINT_VkAccelerationStructureBuildRangeInfoKHR(prefix, in_info) vk_print_VkAccelerationStructureBuildRangeInfoKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkAccelerationStructureCreateInfoKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkAccelerationStructureCreateInfoKHR *in_info);
#define VK_PRINT_VkAccelerationStructureCreateInfoKHR(prefix, in_info) vk_print_VkAccelerationStructureCreateInfoKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkAabbPositionsKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkAabbPositionsKHR *in_info);
#define VK_PRINT_VkAabbPositionsKHR(prefix, in_info) vk_print_VkAabbPositionsKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkAabbPositionsNV(int can_log_level, int log_level, FILE*, const char* prefix, const VkAabbPositionsNV *in_info);
#define VK_PRINT_VkAabbPositionsNV(prefix, in_info) vk_print_VkAabbPositionsNV(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkTransformMatrixKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkTransformMatrixKHR *in_info);
#define VK_PRINT_VkTransformMatrixKHR(prefix, in_info) vk_print_VkTransformMatrixKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkTransformMatrixNV(int can_log_level, int log_level, FILE*, const char* prefix, const VkTransformMatrixNV *in_info);
#define VK_PRINT_VkTransformMatrixNV(prefix, in_info) vk_print_VkTransformMatrixNV(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkAccelerationStructureInstanceKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkAccelerationStructureInstanceKHR *in_info);
#define VK_PRINT_VkAccelerationStructureInstanceKHR(prefix, in_info) vk_print_VkAccelerationStructureInstanceKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkAccelerationStructureInstanceNV(int can_log_level, int log_level, FILE*, const char* prefix, const VkAccelerationStructureInstanceNV *in_info);
#define VK_PRINT_VkAccelerationStructureInstanceNV(prefix, in_info) vk_print_VkAccelerationStructureInstanceNV(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkAccelerationStructureDeviceAddressInfoKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkAccelerationStructureDeviceAddressInfoKHR *in_info);
#define VK_PRINT_VkAccelerationStructureDeviceAddressInfoKHR(prefix, in_info) vk_print_VkAccelerationStructureDeviceAddressInfoKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkCopyAccelerationStructureInfoKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkCopyAccelerationStructureInfoKHR *in_info);
#define VK_PRINT_VkCopyAccelerationStructureInfoKHR(prefix, in_info) vk_print_VkCopyAccelerationStructureInfoKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkCopyAccelerationStructureToMemoryInfoKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkCopyAccelerationStructureToMemoryInfoKHR *in_info);
#define VK_PRINT_VkCopyAccelerationStructureToMemoryInfoKHR(prefix, in_info) vk_print_VkCopyAccelerationStructureToMemoryInfoKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkCopyMemoryToAccelerationStructureInfoKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkCopyMemoryToAccelerationStructureInfoKHR *in_info);
#define VK_PRINT_VkCopyMemoryToAccelerationStructureInfoKHR(prefix, in_info) vk_print_VkCopyMemoryToAccelerationStructureInfoKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkRayTracingPipelineInterfaceCreateInfoKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkRayTracingPipelineInterfaceCreateInfoKHR *in_info);
#define VK_PRINT_VkRayTracingPipelineInterfaceCreateInfoKHR(prefix, in_info) vk_print_VkRayTracingPipelineInterfaceCreateInfoKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPipelineLibraryCreateInfoKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkPipelineLibraryCreateInfoKHR *in_info);
#define VK_PRINT_VkPipelineLibraryCreateInfoKHR(prefix, in_info) vk_print_VkPipelineLibraryCreateInfoKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceExtendedDynamicStateFeaturesEXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceExtendedDynamicStateFeaturesEXT *in_info);
#define VK_PRINT_VkPhysicalDeviceExtendedDynamicStateFeaturesEXT(prefix, in_info) vk_print_VkPhysicalDeviceExtendedDynamicStateFeaturesEXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceExtendedDynamicState2FeaturesEXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceExtendedDynamicState2FeaturesEXT *in_info);
#define VK_PRINT_VkPhysicalDeviceExtendedDynamicState2FeaturesEXT(prefix, in_info) vk_print_VkPhysicalDeviceExtendedDynamicState2FeaturesEXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceExtendedDynamicState3FeaturesEXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceExtendedDynamicState3FeaturesEXT *in_info);
#define VK_PRINT_VkPhysicalDeviceExtendedDynamicState3FeaturesEXT(prefix, in_info) vk_print_VkPhysicalDeviceExtendedDynamicState3FeaturesEXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceExtendedDynamicState3PropertiesEXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceExtendedDynamicState3PropertiesEXT *in_info);
#define VK_PRINT_VkPhysicalDeviceExtendedDynamicState3PropertiesEXT(prefix, in_info) vk_print_VkPhysicalDeviceExtendedDynamicState3PropertiesEXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkColorBlendEquationEXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkColorBlendEquationEXT *in_info);
#define VK_PRINT_VkColorBlendEquationEXT(prefix, in_info) vk_print_VkColorBlendEquationEXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkColorBlendAdvancedEXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkColorBlendAdvancedEXT *in_info);
#define VK_PRINT_VkColorBlendAdvancedEXT(prefix, in_info) vk_print_VkColorBlendAdvancedEXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkRenderPassTransformBeginInfoQCOM(int can_log_level, int log_level, FILE*, const char* prefix, const VkRenderPassTransformBeginInfoQCOM *in_info);
#define VK_PRINT_VkRenderPassTransformBeginInfoQCOM(prefix, in_info) vk_print_VkRenderPassTransformBeginInfoQCOM(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkCopyCommandTransformInfoQCOM(int can_log_level, int log_level, FILE*, const char* prefix, const VkCopyCommandTransformInfoQCOM *in_info);
#define VK_PRINT_VkCopyCommandTransformInfoQCOM(prefix, in_info) vk_print_VkCopyCommandTransformInfoQCOM(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkCommandBufferInheritanceRenderPassTransformInfoQCOM(int can_log_level, int log_level, FILE*, const char* prefix, const VkCommandBufferInheritanceRenderPassTransformInfoQCOM *in_info);
#define VK_PRINT_VkCommandBufferInheritanceRenderPassTransformInfoQCOM(prefix, in_info) vk_print_VkCommandBufferInheritanceRenderPassTransformInfoQCOM(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceDiagnosticsConfigFeaturesNV(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceDiagnosticsConfigFeaturesNV *in_info);
#define VK_PRINT_VkPhysicalDeviceDiagnosticsConfigFeaturesNV(prefix, in_info) vk_print_VkPhysicalDeviceDiagnosticsConfigFeaturesNV(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkDeviceDiagnosticsConfigCreateInfoNV(int can_log_level, int log_level, FILE*, const char* prefix, const VkDeviceDiagnosticsConfigCreateInfoNV *in_info);
#define VK_PRINT_VkDeviceDiagnosticsConfigCreateInfoNV(prefix, in_info) vk_print_VkDeviceDiagnosticsConfigCreateInfoNV(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceZeroInitializeWorkgroupMemoryFeatures(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceZeroInitializeWorkgroupMemoryFeatures *in_info);
#define VK_PRINT_VkPhysicalDeviceZeroInitializeWorkgroupMemoryFeatures(prefix, in_info) vk_print_VkPhysicalDeviceZeroInitializeWorkgroupMemoryFeatures(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceZeroInitializeWorkgroupMemoryFeaturesKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceZeroInitializeWorkgroupMemoryFeaturesKHR *in_info);
#define VK_PRINT_VkPhysicalDeviceZeroInitializeWorkgroupMemoryFeaturesKHR(prefix, in_info) vk_print_VkPhysicalDeviceZeroInitializeWorkgroupMemoryFeaturesKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceShaderSubgroupUniformControlFlowFeaturesKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceShaderSubgroupUniformControlFlowFeaturesKHR *in_info);
#define VK_PRINT_VkPhysicalDeviceShaderSubgroupUniformControlFlowFeaturesKHR(prefix, in_info) vk_print_VkPhysicalDeviceShaderSubgroupUniformControlFlowFeaturesKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceRobustness2FeaturesEXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceRobustness2FeaturesEXT *in_info);
#define VK_PRINT_VkPhysicalDeviceRobustness2FeaturesEXT(prefix, in_info) vk_print_VkPhysicalDeviceRobustness2FeaturesEXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceRobustness2PropertiesEXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceRobustness2PropertiesEXT *in_info);
#define VK_PRINT_VkPhysicalDeviceRobustness2PropertiesEXT(prefix, in_info) vk_print_VkPhysicalDeviceRobustness2PropertiesEXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceImageRobustnessFeatures(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceImageRobustnessFeatures *in_info);
#define VK_PRINT_VkPhysicalDeviceImageRobustnessFeatures(prefix, in_info) vk_print_VkPhysicalDeviceImageRobustnessFeatures(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceImageRobustnessFeaturesEXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceImageRobustnessFeaturesEXT *in_info);
#define VK_PRINT_VkPhysicalDeviceImageRobustnessFeaturesEXT(prefix, in_info) vk_print_VkPhysicalDeviceImageRobustnessFeaturesEXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceWorkgroupMemoryExplicitLayoutFeaturesKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceWorkgroupMemoryExplicitLayoutFeaturesKHR *in_info);
#define VK_PRINT_VkPhysicalDeviceWorkgroupMemoryExplicitLayoutFeaturesKHR(prefix, in_info) vk_print_VkPhysicalDeviceWorkgroupMemoryExplicitLayoutFeaturesKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDevice4444FormatsFeaturesEXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDevice4444FormatsFeaturesEXT *in_info);
#define VK_PRINT_VkPhysicalDevice4444FormatsFeaturesEXT(prefix, in_info) vk_print_VkPhysicalDevice4444FormatsFeaturesEXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceSubpassShadingFeaturesHUAWEI(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceSubpassShadingFeaturesHUAWEI *in_info);
#define VK_PRINT_VkPhysicalDeviceSubpassShadingFeaturesHUAWEI(prefix, in_info) vk_print_VkPhysicalDeviceSubpassShadingFeaturesHUAWEI(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceClusterCullingShaderFeaturesHUAWEI(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceClusterCullingShaderFeaturesHUAWEI *in_info);
#define VK_PRINT_VkPhysicalDeviceClusterCullingShaderFeaturesHUAWEI(prefix, in_info) vk_print_VkPhysicalDeviceClusterCullingShaderFeaturesHUAWEI(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceClusterCullingShaderVrsFeaturesHUAWEI(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceClusterCullingShaderVrsFeaturesHUAWEI *in_info);
#define VK_PRINT_VkPhysicalDeviceClusterCullingShaderVrsFeaturesHUAWEI(prefix, in_info) vk_print_VkPhysicalDeviceClusterCullingShaderVrsFeaturesHUAWEI(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkBufferCopy2(int can_log_level, int log_level, FILE*, const char* prefix, const VkBufferCopy2 *in_info);
#define VK_PRINT_VkBufferCopy2(prefix, in_info) vk_print_VkBufferCopy2(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkBufferCopy2KHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkBufferCopy2KHR *in_info);
#define VK_PRINT_VkBufferCopy2KHR(prefix, in_info) vk_print_VkBufferCopy2KHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkImageCopy2(int can_log_level, int log_level, FILE*, const char* prefix, const VkImageCopy2 *in_info);
#define VK_PRINT_VkImageCopy2(prefix, in_info) vk_print_VkImageCopy2(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkImageCopy2KHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkImageCopy2KHR *in_info);
#define VK_PRINT_VkImageCopy2KHR(prefix, in_info) vk_print_VkImageCopy2KHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkImageBlit2(int can_log_level, int log_level, FILE*, const char* prefix, const VkImageBlit2 *in_info);
#define VK_PRINT_VkImageBlit2(prefix, in_info) vk_print_VkImageBlit2(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkImageBlit2KHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkImageBlit2KHR *in_info);
#define VK_PRINT_VkImageBlit2KHR(prefix, in_info) vk_print_VkImageBlit2KHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkBufferImageCopy2(int can_log_level, int log_level, FILE*, const char* prefix, const VkBufferImageCopy2 *in_info);
#define VK_PRINT_VkBufferImageCopy2(prefix, in_info) vk_print_VkBufferImageCopy2(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkBufferImageCopy2KHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkBufferImageCopy2KHR *in_info);
#define VK_PRINT_VkBufferImageCopy2KHR(prefix, in_info) vk_print_VkBufferImageCopy2KHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkImageResolve2(int can_log_level, int log_level, FILE*, const char* prefix, const VkImageResolve2 *in_info);
#define VK_PRINT_VkImageResolve2(prefix, in_info) vk_print_VkImageResolve2(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkImageResolve2KHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkImageResolve2KHR *in_info);
#define VK_PRINT_VkImageResolve2KHR(prefix, in_info) vk_print_VkImageResolve2KHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkCopyBufferInfo2(int can_log_level, int log_level, FILE*, const char* prefix, const VkCopyBufferInfo2 *in_info);
#define VK_PRINT_VkCopyBufferInfo2(prefix, in_info) vk_print_VkCopyBufferInfo2(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkCopyBufferInfo2KHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkCopyBufferInfo2KHR *in_info);
#define VK_PRINT_VkCopyBufferInfo2KHR(prefix, in_info) vk_print_VkCopyBufferInfo2KHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkCopyImageInfo2(int can_log_level, int log_level, FILE*, const char* prefix, const VkCopyImageInfo2 *in_info);
#define VK_PRINT_VkCopyImageInfo2(prefix, in_info) vk_print_VkCopyImageInfo2(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkCopyImageInfo2KHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkCopyImageInfo2KHR *in_info);
#define VK_PRINT_VkCopyImageInfo2KHR(prefix, in_info) vk_print_VkCopyImageInfo2KHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkBlitImageInfo2(int can_log_level, int log_level, FILE*, const char* prefix, const VkBlitImageInfo2 *in_info);
#define VK_PRINT_VkBlitImageInfo2(prefix, in_info) vk_print_VkBlitImageInfo2(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkBlitImageInfo2KHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkBlitImageInfo2KHR *in_info);
#define VK_PRINT_VkBlitImageInfo2KHR(prefix, in_info) vk_print_VkBlitImageInfo2KHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkCopyBufferToImageInfo2(int can_log_level, int log_level, FILE*, const char* prefix, const VkCopyBufferToImageInfo2 *in_info);
#define VK_PRINT_VkCopyBufferToImageInfo2(prefix, in_info) vk_print_VkCopyBufferToImageInfo2(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkCopyBufferToImageInfo2KHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkCopyBufferToImageInfo2KHR *in_info);
#define VK_PRINT_VkCopyBufferToImageInfo2KHR(prefix, in_info) vk_print_VkCopyBufferToImageInfo2KHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkCopyImageToBufferInfo2(int can_log_level, int log_level, FILE*, const char* prefix, const VkCopyImageToBufferInfo2 *in_info);
#define VK_PRINT_VkCopyImageToBufferInfo2(prefix, in_info) vk_print_VkCopyImageToBufferInfo2(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkCopyImageToBufferInfo2KHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkCopyImageToBufferInfo2KHR *in_info);
#define VK_PRINT_VkCopyImageToBufferInfo2KHR(prefix, in_info) vk_print_VkCopyImageToBufferInfo2KHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkResolveImageInfo2(int can_log_level, int log_level, FILE*, const char* prefix, const VkResolveImageInfo2 *in_info);
#define VK_PRINT_VkResolveImageInfo2(prefix, in_info) vk_print_VkResolveImageInfo2(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkResolveImageInfo2KHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkResolveImageInfo2KHR *in_info);
#define VK_PRINT_VkResolveImageInfo2KHR(prefix, in_info) vk_print_VkResolveImageInfo2KHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceShaderImageAtomicInt64FeaturesEXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceShaderImageAtomicInt64FeaturesEXT *in_info);
#define VK_PRINT_VkPhysicalDeviceShaderImageAtomicInt64FeaturesEXT(prefix, in_info) vk_print_VkPhysicalDeviceShaderImageAtomicInt64FeaturesEXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkFragmentShadingRateAttachmentInfoKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkFragmentShadingRateAttachmentInfoKHR *in_info);
#define VK_PRINT_VkFragmentShadingRateAttachmentInfoKHR(prefix, in_info) vk_print_VkFragmentShadingRateAttachmentInfoKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPipelineFragmentShadingRateStateCreateInfoKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkPipelineFragmentShadingRateStateCreateInfoKHR *in_info);
#define VK_PRINT_VkPipelineFragmentShadingRateStateCreateInfoKHR(prefix, in_info) vk_print_VkPipelineFragmentShadingRateStateCreateInfoKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceFragmentShadingRateFeaturesKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceFragmentShadingRateFeaturesKHR *in_info);
#define VK_PRINT_VkPhysicalDeviceFragmentShadingRateFeaturesKHR(prefix, in_info) vk_print_VkPhysicalDeviceFragmentShadingRateFeaturesKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceFragmentShadingRatePropertiesKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceFragmentShadingRatePropertiesKHR *in_info);
#define VK_PRINT_VkPhysicalDeviceFragmentShadingRatePropertiesKHR(prefix, in_info) vk_print_VkPhysicalDeviceFragmentShadingRatePropertiesKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceFragmentShadingRateKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceFragmentShadingRateKHR *in_info);
#define VK_PRINT_VkPhysicalDeviceFragmentShadingRateKHR(prefix, in_info) vk_print_VkPhysicalDeviceFragmentShadingRateKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceShaderTerminateInvocationFeatures(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceShaderTerminateInvocationFeatures *in_info);
#define VK_PRINT_VkPhysicalDeviceShaderTerminateInvocationFeatures(prefix, in_info) vk_print_VkPhysicalDeviceShaderTerminateInvocationFeatures(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceShaderTerminateInvocationFeaturesKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceShaderTerminateInvocationFeaturesKHR *in_info);
#define VK_PRINT_VkPhysicalDeviceShaderTerminateInvocationFeaturesKHR(prefix, in_info) vk_print_VkPhysicalDeviceShaderTerminateInvocationFeaturesKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceFragmentShadingRateEnumsFeaturesNV(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceFragmentShadingRateEnumsFeaturesNV *in_info);
#define VK_PRINT_VkPhysicalDeviceFragmentShadingRateEnumsFeaturesNV(prefix, in_info) vk_print_VkPhysicalDeviceFragmentShadingRateEnumsFeaturesNV(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceFragmentShadingRateEnumsPropertiesNV(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceFragmentShadingRateEnumsPropertiesNV *in_info);
#define VK_PRINT_VkPhysicalDeviceFragmentShadingRateEnumsPropertiesNV(prefix, in_info) vk_print_VkPhysicalDeviceFragmentShadingRateEnumsPropertiesNV(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPipelineFragmentShadingRateEnumStateCreateInfoNV(int can_log_level, int log_level, FILE*, const char* prefix, const VkPipelineFragmentShadingRateEnumStateCreateInfoNV *in_info);
#define VK_PRINT_VkPipelineFragmentShadingRateEnumStateCreateInfoNV(prefix, in_info) vk_print_VkPipelineFragmentShadingRateEnumStateCreateInfoNV(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkAccelerationStructureBuildSizesInfoKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkAccelerationStructureBuildSizesInfoKHR *in_info);
#define VK_PRINT_VkAccelerationStructureBuildSizesInfoKHR(prefix, in_info) vk_print_VkAccelerationStructureBuildSizesInfoKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceImage2DViewOf3DFeaturesEXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceImage2DViewOf3DFeaturesEXT *in_info);
#define VK_PRINT_VkPhysicalDeviceImage2DViewOf3DFeaturesEXT(prefix, in_info) vk_print_VkPhysicalDeviceImage2DViewOf3DFeaturesEXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceImageSlicedViewOf3DFeaturesEXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceImageSlicedViewOf3DFeaturesEXT *in_info);
#define VK_PRINT_VkPhysicalDeviceImageSlicedViewOf3DFeaturesEXT(prefix, in_info) vk_print_VkPhysicalDeviceImageSlicedViewOf3DFeaturesEXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceAttachmentFeedbackLoopDynamicStateFeaturesEXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceAttachmentFeedbackLoopDynamicStateFeaturesEXT *in_info);
#define VK_PRINT_VkPhysicalDeviceAttachmentFeedbackLoopDynamicStateFeaturesEXT(prefix, in_info) vk_print_VkPhysicalDeviceAttachmentFeedbackLoopDynamicStateFeaturesEXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceLegacyVertexAttributesFeaturesEXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceLegacyVertexAttributesFeaturesEXT *in_info);
#define VK_PRINT_VkPhysicalDeviceLegacyVertexAttributesFeaturesEXT(prefix, in_info) vk_print_VkPhysicalDeviceLegacyVertexAttributesFeaturesEXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceLegacyVertexAttributesPropertiesEXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceLegacyVertexAttributesPropertiesEXT *in_info);
#define VK_PRINT_VkPhysicalDeviceLegacyVertexAttributesPropertiesEXT(prefix, in_info) vk_print_VkPhysicalDeviceLegacyVertexAttributesPropertiesEXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceMutableDescriptorTypeFeaturesEXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceMutableDescriptorTypeFeaturesEXT *in_info);
#define VK_PRINT_VkPhysicalDeviceMutableDescriptorTypeFeaturesEXT(prefix, in_info) vk_print_VkPhysicalDeviceMutableDescriptorTypeFeaturesEXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceMutableDescriptorTypeFeaturesVALVE(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceMutableDescriptorTypeFeaturesVALVE *in_info);
#define VK_PRINT_VkPhysicalDeviceMutableDescriptorTypeFeaturesVALVE(prefix, in_info) vk_print_VkPhysicalDeviceMutableDescriptorTypeFeaturesVALVE(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkMutableDescriptorTypeListEXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkMutableDescriptorTypeListEXT *in_info);
#define VK_PRINT_VkMutableDescriptorTypeListEXT(prefix, in_info) vk_print_VkMutableDescriptorTypeListEXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkMutableDescriptorTypeListVALVE(int can_log_level, int log_level, FILE*, const char* prefix, const VkMutableDescriptorTypeListVALVE *in_info);
#define VK_PRINT_VkMutableDescriptorTypeListVALVE(prefix, in_info) vk_print_VkMutableDescriptorTypeListVALVE(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkMutableDescriptorTypeCreateInfoEXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkMutableDescriptorTypeCreateInfoEXT *in_info);
#define VK_PRINT_VkMutableDescriptorTypeCreateInfoEXT(prefix, in_info) vk_print_VkMutableDescriptorTypeCreateInfoEXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkMutableDescriptorTypeCreateInfoVALVE(int can_log_level, int log_level, FILE*, const char* prefix, const VkMutableDescriptorTypeCreateInfoVALVE *in_info);
#define VK_PRINT_VkMutableDescriptorTypeCreateInfoVALVE(prefix, in_info) vk_print_VkMutableDescriptorTypeCreateInfoVALVE(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceDepthClipControlFeaturesEXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceDepthClipControlFeaturesEXT *in_info);
#define VK_PRINT_VkPhysicalDeviceDepthClipControlFeaturesEXT(prefix, in_info) vk_print_VkPhysicalDeviceDepthClipControlFeaturesEXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPipelineViewportDepthClipControlCreateInfoEXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkPipelineViewportDepthClipControlCreateInfoEXT *in_info);
#define VK_PRINT_VkPipelineViewportDepthClipControlCreateInfoEXT(prefix, in_info) vk_print_VkPipelineViewportDepthClipControlCreateInfoEXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceVertexInputDynamicStateFeaturesEXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceVertexInputDynamicStateFeaturesEXT *in_info);
#define VK_PRINT_VkPhysicalDeviceVertexInputDynamicStateFeaturesEXT(prefix, in_info) vk_print_VkPhysicalDeviceVertexInputDynamicStateFeaturesEXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceExternalMemoryRDMAFeaturesNV(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceExternalMemoryRDMAFeaturesNV *in_info);
#define VK_PRINT_VkPhysicalDeviceExternalMemoryRDMAFeaturesNV(prefix, in_info) vk_print_VkPhysicalDeviceExternalMemoryRDMAFeaturesNV(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceShaderRelaxedExtendedInstructionFeaturesKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceShaderRelaxedExtendedInstructionFeaturesKHR *in_info);
#define VK_PRINT_VkPhysicalDeviceShaderRelaxedExtendedInstructionFeaturesKHR(prefix, in_info) vk_print_VkPhysicalDeviceShaderRelaxedExtendedInstructionFeaturesKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkVertexInputBindingDescription2EXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkVertexInputBindingDescription2EXT *in_info);
#define VK_PRINT_VkVertexInputBindingDescription2EXT(prefix, in_info) vk_print_VkVertexInputBindingDescription2EXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkVertexInputAttributeDescription2EXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkVertexInputAttributeDescription2EXT *in_info);
#define VK_PRINT_VkVertexInputAttributeDescription2EXT(prefix, in_info) vk_print_VkVertexInputAttributeDescription2EXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceColorWriteEnableFeaturesEXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceColorWriteEnableFeaturesEXT *in_info);
#define VK_PRINT_VkPhysicalDeviceColorWriteEnableFeaturesEXT(prefix, in_info) vk_print_VkPhysicalDeviceColorWriteEnableFeaturesEXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPipelineColorWriteCreateInfoEXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkPipelineColorWriteCreateInfoEXT *in_info);
#define VK_PRINT_VkPipelineColorWriteCreateInfoEXT(prefix, in_info) vk_print_VkPipelineColorWriteCreateInfoEXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkMemoryBarrier2(int can_log_level, int log_level, FILE*, const char* prefix, const VkMemoryBarrier2 *in_info);
#define VK_PRINT_VkMemoryBarrier2(prefix, in_info) vk_print_VkMemoryBarrier2(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkMemoryBarrier2KHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkMemoryBarrier2KHR *in_info);
#define VK_PRINT_VkMemoryBarrier2KHR(prefix, in_info) vk_print_VkMemoryBarrier2KHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkImageMemoryBarrier2(int can_log_level, int log_level, FILE*, const char* prefix, const VkImageMemoryBarrier2 *in_info);
#define VK_PRINT_VkImageMemoryBarrier2(prefix, in_info) vk_print_VkImageMemoryBarrier2(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkImageMemoryBarrier2KHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkImageMemoryBarrier2KHR *in_info);
#define VK_PRINT_VkImageMemoryBarrier2KHR(prefix, in_info) vk_print_VkImageMemoryBarrier2KHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkBufferMemoryBarrier2(int can_log_level, int log_level, FILE*, const char* prefix, const VkBufferMemoryBarrier2 *in_info);
#define VK_PRINT_VkBufferMemoryBarrier2(prefix, in_info) vk_print_VkBufferMemoryBarrier2(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkBufferMemoryBarrier2KHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkBufferMemoryBarrier2KHR *in_info);
#define VK_PRINT_VkBufferMemoryBarrier2KHR(prefix, in_info) vk_print_VkBufferMemoryBarrier2KHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkDependencyInfo(int can_log_level, int log_level, FILE*, const char* prefix, const VkDependencyInfo *in_info);
#define VK_PRINT_VkDependencyInfo(prefix, in_info) vk_print_VkDependencyInfo(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkDependencyInfoKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkDependencyInfoKHR *in_info);
#define VK_PRINT_VkDependencyInfoKHR(prefix, in_info) vk_print_VkDependencyInfoKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkSemaphoreSubmitInfo(int can_log_level, int log_level, FILE*, const char* prefix, const VkSemaphoreSubmitInfo *in_info);
#define VK_PRINT_VkSemaphoreSubmitInfo(prefix, in_info) vk_print_VkSemaphoreSubmitInfo(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkSemaphoreSubmitInfoKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkSemaphoreSubmitInfoKHR *in_info);
#define VK_PRINT_VkSemaphoreSubmitInfoKHR(prefix, in_info) vk_print_VkSemaphoreSubmitInfoKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkCommandBufferSubmitInfo(int can_log_level, int log_level, FILE*, const char* prefix, const VkCommandBufferSubmitInfo *in_info);
#define VK_PRINT_VkCommandBufferSubmitInfo(prefix, in_info) vk_print_VkCommandBufferSubmitInfo(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkCommandBufferSubmitInfoKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkCommandBufferSubmitInfoKHR *in_info);
#define VK_PRINT_VkCommandBufferSubmitInfoKHR(prefix, in_info) vk_print_VkCommandBufferSubmitInfoKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkSubmitInfo2(int can_log_level, int log_level, FILE*, const char* prefix, const VkSubmitInfo2 *in_info);
#define VK_PRINT_VkSubmitInfo2(prefix, in_info) vk_print_VkSubmitInfo2(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkSubmitInfo2KHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkSubmitInfo2KHR *in_info);
#define VK_PRINT_VkSubmitInfo2KHR(prefix, in_info) vk_print_VkSubmitInfo2KHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkQueueFamilyCheckpointProperties2NV(int can_log_level, int log_level, FILE*, const char* prefix, const VkQueueFamilyCheckpointProperties2NV *in_info);
#define VK_PRINT_VkQueueFamilyCheckpointProperties2NV(prefix, in_info) vk_print_VkQueueFamilyCheckpointProperties2NV(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkCheckpointData2NV(int can_log_level, int log_level, FILE*, const char* prefix, const VkCheckpointData2NV *in_info);
#define VK_PRINT_VkCheckpointData2NV(prefix, in_info) vk_print_VkCheckpointData2NV(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceSynchronization2Features(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceSynchronization2Features *in_info);
#define VK_PRINT_VkPhysicalDeviceSynchronization2Features(prefix, in_info) vk_print_VkPhysicalDeviceSynchronization2Features(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceSynchronization2FeaturesKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceSynchronization2FeaturesKHR *in_info);
#define VK_PRINT_VkPhysicalDeviceSynchronization2FeaturesKHR(prefix, in_info) vk_print_VkPhysicalDeviceSynchronization2FeaturesKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceHostImageCopyFeaturesEXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceHostImageCopyFeaturesEXT *in_info);
#define VK_PRINT_VkPhysicalDeviceHostImageCopyFeaturesEXT(prefix, in_info) vk_print_VkPhysicalDeviceHostImageCopyFeaturesEXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceHostImageCopyPropertiesEXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceHostImageCopyPropertiesEXT *in_info);
#define VK_PRINT_VkPhysicalDeviceHostImageCopyPropertiesEXT(prefix, in_info) vk_print_VkPhysicalDeviceHostImageCopyPropertiesEXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkMemoryToImageCopyEXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkMemoryToImageCopyEXT *in_info);
#define VK_PRINT_VkMemoryToImageCopyEXT(prefix, in_info) vk_print_VkMemoryToImageCopyEXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkImageToMemoryCopyEXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkImageToMemoryCopyEXT *in_info);
#define VK_PRINT_VkImageToMemoryCopyEXT(prefix, in_info) vk_print_VkImageToMemoryCopyEXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkCopyMemoryToImageInfoEXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkCopyMemoryToImageInfoEXT *in_info);
#define VK_PRINT_VkCopyMemoryToImageInfoEXT(prefix, in_info) vk_print_VkCopyMemoryToImageInfoEXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkCopyImageToMemoryInfoEXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkCopyImageToMemoryInfoEXT *in_info);
#define VK_PRINT_VkCopyImageToMemoryInfoEXT(prefix, in_info) vk_print_VkCopyImageToMemoryInfoEXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkCopyImageToImageInfoEXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkCopyImageToImageInfoEXT *in_info);
#define VK_PRINT_VkCopyImageToImageInfoEXT(prefix, in_info) vk_print_VkCopyImageToImageInfoEXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkHostImageLayoutTransitionInfoEXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkHostImageLayoutTransitionInfoEXT *in_info);
#define VK_PRINT_VkHostImageLayoutTransitionInfoEXT(prefix, in_info) vk_print_VkHostImageLayoutTransitionInfoEXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkSubresourceHostMemcpySizeEXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkSubresourceHostMemcpySizeEXT *in_info);
#define VK_PRINT_VkSubresourceHostMemcpySizeEXT(prefix, in_info) vk_print_VkSubresourceHostMemcpySizeEXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkHostImageCopyDevicePerformanceQueryEXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkHostImageCopyDevicePerformanceQueryEXT *in_info);
#define VK_PRINT_VkHostImageCopyDevicePerformanceQueryEXT(prefix, in_info) vk_print_VkHostImageCopyDevicePerformanceQueryEXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDevicePrimitivesGeneratedQueryFeaturesEXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDevicePrimitivesGeneratedQueryFeaturesEXT *in_info);
#define VK_PRINT_VkPhysicalDevicePrimitivesGeneratedQueryFeaturesEXT(prefix, in_info) vk_print_VkPhysicalDevicePrimitivesGeneratedQueryFeaturesEXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceLegacyDitheringFeaturesEXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceLegacyDitheringFeaturesEXT *in_info);
#define VK_PRINT_VkPhysicalDeviceLegacyDitheringFeaturesEXT(prefix, in_info) vk_print_VkPhysicalDeviceLegacyDitheringFeaturesEXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceMultisampledRenderToSingleSampledFeaturesEXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceMultisampledRenderToSingleSampledFeaturesEXT *in_info);
#define VK_PRINT_VkPhysicalDeviceMultisampledRenderToSingleSampledFeaturesEXT(prefix, in_info) vk_print_VkPhysicalDeviceMultisampledRenderToSingleSampledFeaturesEXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkSubpassResolvePerformanceQueryEXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkSubpassResolvePerformanceQueryEXT *in_info);
#define VK_PRINT_VkSubpassResolvePerformanceQueryEXT(prefix, in_info) vk_print_VkSubpassResolvePerformanceQueryEXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkMultisampledRenderToSingleSampledInfoEXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkMultisampledRenderToSingleSampledInfoEXT *in_info);
#define VK_PRINT_VkMultisampledRenderToSingleSampledInfoEXT(prefix, in_info) vk_print_VkMultisampledRenderToSingleSampledInfoEXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDevicePipelineProtectedAccessFeaturesEXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDevicePipelineProtectedAccessFeaturesEXT *in_info);
#define VK_PRINT_VkPhysicalDevicePipelineProtectedAccessFeaturesEXT(prefix, in_info) vk_print_VkPhysicalDevicePipelineProtectedAccessFeaturesEXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkQueueFamilyVideoPropertiesKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkQueueFamilyVideoPropertiesKHR *in_info);
#define VK_PRINT_VkQueueFamilyVideoPropertiesKHR(prefix, in_info) vk_print_VkQueueFamilyVideoPropertiesKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkQueueFamilyQueryResultStatusPropertiesKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkQueueFamilyQueryResultStatusPropertiesKHR *in_info);
#define VK_PRINT_VkQueueFamilyQueryResultStatusPropertiesKHR(prefix, in_info) vk_print_VkQueueFamilyQueryResultStatusPropertiesKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkVideoProfileListInfoKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkVideoProfileListInfoKHR *in_info);
#define VK_PRINT_VkVideoProfileListInfoKHR(prefix, in_info) vk_print_VkVideoProfileListInfoKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceVideoFormatInfoKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceVideoFormatInfoKHR *in_info);
#define VK_PRINT_VkPhysicalDeviceVideoFormatInfoKHR(prefix, in_info) vk_print_VkPhysicalDeviceVideoFormatInfoKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkVideoFormatPropertiesKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkVideoFormatPropertiesKHR *in_info);
#define VK_PRINT_VkVideoFormatPropertiesKHR(prefix, in_info) vk_print_VkVideoFormatPropertiesKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkVideoProfileInfoKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkVideoProfileInfoKHR *in_info);
#define VK_PRINT_VkVideoProfileInfoKHR(prefix, in_info) vk_print_VkVideoProfileInfoKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkVideoCapabilitiesKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkVideoCapabilitiesKHR *in_info);
#define VK_PRINT_VkVideoCapabilitiesKHR(prefix, in_info) vk_print_VkVideoCapabilitiesKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkVideoSessionMemoryRequirementsKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkVideoSessionMemoryRequirementsKHR *in_info);
#define VK_PRINT_VkVideoSessionMemoryRequirementsKHR(prefix, in_info) vk_print_VkVideoSessionMemoryRequirementsKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkBindVideoSessionMemoryInfoKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkBindVideoSessionMemoryInfoKHR *in_info);
#define VK_PRINT_VkBindVideoSessionMemoryInfoKHR(prefix, in_info) vk_print_VkBindVideoSessionMemoryInfoKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkVideoPictureResourceInfoKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkVideoPictureResourceInfoKHR *in_info);
#define VK_PRINT_VkVideoPictureResourceInfoKHR(prefix, in_info) vk_print_VkVideoPictureResourceInfoKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkVideoReferenceSlotInfoKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkVideoReferenceSlotInfoKHR *in_info);
#define VK_PRINT_VkVideoReferenceSlotInfoKHR(prefix, in_info) vk_print_VkVideoReferenceSlotInfoKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkVideoDecodeCapabilitiesKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkVideoDecodeCapabilitiesKHR *in_info);
#define VK_PRINT_VkVideoDecodeCapabilitiesKHR(prefix, in_info) vk_print_VkVideoDecodeCapabilitiesKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkVideoDecodeUsageInfoKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkVideoDecodeUsageInfoKHR *in_info);
#define VK_PRINT_VkVideoDecodeUsageInfoKHR(prefix, in_info) vk_print_VkVideoDecodeUsageInfoKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkVideoDecodeInfoKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkVideoDecodeInfoKHR *in_info);
#define VK_PRINT_VkVideoDecodeInfoKHR(prefix, in_info) vk_print_VkVideoDecodeInfoKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceVideoMaintenance1FeaturesKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceVideoMaintenance1FeaturesKHR *in_info);
#define VK_PRINT_VkPhysicalDeviceVideoMaintenance1FeaturesKHR(prefix, in_info) vk_print_VkPhysicalDeviceVideoMaintenance1FeaturesKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkVideoInlineQueryInfoKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkVideoInlineQueryInfoKHR *in_info);
#define VK_PRINT_VkVideoInlineQueryInfoKHR(prefix, in_info) vk_print_VkVideoInlineQueryInfoKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkVideoDecodeH264ProfileInfoKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkVideoDecodeH264ProfileInfoKHR *in_info);
#define VK_PRINT_VkVideoDecodeH264ProfileInfoKHR(prefix, in_info) vk_print_VkVideoDecodeH264ProfileInfoKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkVideoDecodeH264CapabilitiesKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkVideoDecodeH264CapabilitiesKHR *in_info);
#define VK_PRINT_VkVideoDecodeH264CapabilitiesKHR(prefix, in_info) vk_print_VkVideoDecodeH264CapabilitiesKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkVideoDecodeH264SessionParametersAddInfoKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkVideoDecodeH264SessionParametersAddInfoKHR *in_info);
#define VK_PRINT_VkVideoDecodeH264SessionParametersAddInfoKHR(prefix, in_info) vk_print_VkVideoDecodeH264SessionParametersAddInfoKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkVideoDecodeH264SessionParametersCreateInfoKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkVideoDecodeH264SessionParametersCreateInfoKHR *in_info);
#define VK_PRINT_VkVideoDecodeH264SessionParametersCreateInfoKHR(prefix, in_info) vk_print_VkVideoDecodeH264SessionParametersCreateInfoKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkVideoDecodeH264PictureInfoKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkVideoDecodeH264PictureInfoKHR *in_info);
#define VK_PRINT_VkVideoDecodeH264PictureInfoKHR(prefix, in_info) vk_print_VkVideoDecodeH264PictureInfoKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkVideoDecodeH264DpbSlotInfoKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkVideoDecodeH264DpbSlotInfoKHR *in_info);
#define VK_PRINT_VkVideoDecodeH264DpbSlotInfoKHR(prefix, in_info) vk_print_VkVideoDecodeH264DpbSlotInfoKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkVideoDecodeH265ProfileInfoKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkVideoDecodeH265ProfileInfoKHR *in_info);
#define VK_PRINT_VkVideoDecodeH265ProfileInfoKHR(prefix, in_info) vk_print_VkVideoDecodeH265ProfileInfoKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkVideoDecodeH265CapabilitiesKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkVideoDecodeH265CapabilitiesKHR *in_info);
#define VK_PRINT_VkVideoDecodeH265CapabilitiesKHR(prefix, in_info) vk_print_VkVideoDecodeH265CapabilitiesKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkVideoDecodeH265SessionParametersAddInfoKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkVideoDecodeH265SessionParametersAddInfoKHR *in_info);
#define VK_PRINT_VkVideoDecodeH265SessionParametersAddInfoKHR(prefix, in_info) vk_print_VkVideoDecodeH265SessionParametersAddInfoKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkVideoDecodeH265SessionParametersCreateInfoKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkVideoDecodeH265SessionParametersCreateInfoKHR *in_info);
#define VK_PRINT_VkVideoDecodeH265SessionParametersCreateInfoKHR(prefix, in_info) vk_print_VkVideoDecodeH265SessionParametersCreateInfoKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkVideoDecodeH265PictureInfoKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkVideoDecodeH265PictureInfoKHR *in_info);
#define VK_PRINT_VkVideoDecodeH265PictureInfoKHR(prefix, in_info) vk_print_VkVideoDecodeH265PictureInfoKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkVideoDecodeH265DpbSlotInfoKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkVideoDecodeH265DpbSlotInfoKHR *in_info);
#define VK_PRINT_VkVideoDecodeH265DpbSlotInfoKHR(prefix, in_info) vk_print_VkVideoDecodeH265DpbSlotInfoKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkVideoDecodeAV1ProfileInfoKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkVideoDecodeAV1ProfileInfoKHR *in_info);
#define VK_PRINT_VkVideoDecodeAV1ProfileInfoKHR(prefix, in_info) vk_print_VkVideoDecodeAV1ProfileInfoKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkVideoDecodeAV1CapabilitiesKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkVideoDecodeAV1CapabilitiesKHR *in_info);
#define VK_PRINT_VkVideoDecodeAV1CapabilitiesKHR(prefix, in_info) vk_print_VkVideoDecodeAV1CapabilitiesKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkVideoDecodeAV1SessionParametersCreateInfoKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkVideoDecodeAV1SessionParametersCreateInfoKHR *in_info);
#define VK_PRINT_VkVideoDecodeAV1SessionParametersCreateInfoKHR(prefix, in_info) vk_print_VkVideoDecodeAV1SessionParametersCreateInfoKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkVideoDecodeAV1PictureInfoKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkVideoDecodeAV1PictureInfoKHR *in_info);
#define VK_PRINT_VkVideoDecodeAV1PictureInfoKHR(prefix, in_info) vk_print_VkVideoDecodeAV1PictureInfoKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkVideoDecodeAV1DpbSlotInfoKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkVideoDecodeAV1DpbSlotInfoKHR *in_info);
#define VK_PRINT_VkVideoDecodeAV1DpbSlotInfoKHR(prefix, in_info) vk_print_VkVideoDecodeAV1DpbSlotInfoKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkVideoSessionCreateInfoKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkVideoSessionCreateInfoKHR *in_info);
#define VK_PRINT_VkVideoSessionCreateInfoKHR(prefix, in_info) vk_print_VkVideoSessionCreateInfoKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkVideoSessionParametersCreateInfoKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkVideoSessionParametersCreateInfoKHR *in_info);
#define VK_PRINT_VkVideoSessionParametersCreateInfoKHR(prefix, in_info) vk_print_VkVideoSessionParametersCreateInfoKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkVideoSessionParametersUpdateInfoKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkVideoSessionParametersUpdateInfoKHR *in_info);
#define VK_PRINT_VkVideoSessionParametersUpdateInfoKHR(prefix, in_info) vk_print_VkVideoSessionParametersUpdateInfoKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkVideoEncodeSessionParametersGetInfoKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkVideoEncodeSessionParametersGetInfoKHR *in_info);
#define VK_PRINT_VkVideoEncodeSessionParametersGetInfoKHR(prefix, in_info) vk_print_VkVideoEncodeSessionParametersGetInfoKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkVideoEncodeSessionParametersFeedbackInfoKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkVideoEncodeSessionParametersFeedbackInfoKHR *in_info);
#define VK_PRINT_VkVideoEncodeSessionParametersFeedbackInfoKHR(prefix, in_info) vk_print_VkVideoEncodeSessionParametersFeedbackInfoKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkVideoBeginCodingInfoKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkVideoBeginCodingInfoKHR *in_info);
#define VK_PRINT_VkVideoBeginCodingInfoKHR(prefix, in_info) vk_print_VkVideoBeginCodingInfoKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkVideoEndCodingInfoKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkVideoEndCodingInfoKHR *in_info);
#define VK_PRINT_VkVideoEndCodingInfoKHR(prefix, in_info) vk_print_VkVideoEndCodingInfoKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkVideoCodingControlInfoKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkVideoCodingControlInfoKHR *in_info);
#define VK_PRINT_VkVideoCodingControlInfoKHR(prefix, in_info) vk_print_VkVideoCodingControlInfoKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkVideoEncodeUsageInfoKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkVideoEncodeUsageInfoKHR *in_info);
#define VK_PRINT_VkVideoEncodeUsageInfoKHR(prefix, in_info) vk_print_VkVideoEncodeUsageInfoKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkVideoEncodeInfoKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkVideoEncodeInfoKHR *in_info);
#define VK_PRINT_VkVideoEncodeInfoKHR(prefix, in_info) vk_print_VkVideoEncodeInfoKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkQueryPoolVideoEncodeFeedbackCreateInfoKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkQueryPoolVideoEncodeFeedbackCreateInfoKHR *in_info);
#define VK_PRINT_VkQueryPoolVideoEncodeFeedbackCreateInfoKHR(prefix, in_info) vk_print_VkQueryPoolVideoEncodeFeedbackCreateInfoKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkVideoEncodeQualityLevelInfoKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkVideoEncodeQualityLevelInfoKHR *in_info);
#define VK_PRINT_VkVideoEncodeQualityLevelInfoKHR(prefix, in_info) vk_print_VkVideoEncodeQualityLevelInfoKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceVideoEncodeQualityLevelInfoKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceVideoEncodeQualityLevelInfoKHR *in_info);
#define VK_PRINT_VkPhysicalDeviceVideoEncodeQualityLevelInfoKHR(prefix, in_info) vk_print_VkPhysicalDeviceVideoEncodeQualityLevelInfoKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkVideoEncodeQualityLevelPropertiesKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkVideoEncodeQualityLevelPropertiesKHR *in_info);
#define VK_PRINT_VkVideoEncodeQualityLevelPropertiesKHR(prefix, in_info) vk_print_VkVideoEncodeQualityLevelPropertiesKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkVideoEncodeRateControlInfoKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkVideoEncodeRateControlInfoKHR *in_info);
#define VK_PRINT_VkVideoEncodeRateControlInfoKHR(prefix, in_info) vk_print_VkVideoEncodeRateControlInfoKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkVideoEncodeRateControlLayerInfoKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkVideoEncodeRateControlLayerInfoKHR *in_info);
#define VK_PRINT_VkVideoEncodeRateControlLayerInfoKHR(prefix, in_info) vk_print_VkVideoEncodeRateControlLayerInfoKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkVideoEncodeCapabilitiesKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkVideoEncodeCapabilitiesKHR *in_info);
#define VK_PRINT_VkVideoEncodeCapabilitiesKHR(prefix, in_info) vk_print_VkVideoEncodeCapabilitiesKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkVideoEncodeH264CapabilitiesKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkVideoEncodeH264CapabilitiesKHR *in_info);
#define VK_PRINT_VkVideoEncodeH264CapabilitiesKHR(prefix, in_info) vk_print_VkVideoEncodeH264CapabilitiesKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkVideoEncodeH264QualityLevelPropertiesKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkVideoEncodeH264QualityLevelPropertiesKHR *in_info);
#define VK_PRINT_VkVideoEncodeH264QualityLevelPropertiesKHR(prefix, in_info) vk_print_VkVideoEncodeH264QualityLevelPropertiesKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkVideoEncodeH264SessionCreateInfoKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkVideoEncodeH264SessionCreateInfoKHR *in_info);
#define VK_PRINT_VkVideoEncodeH264SessionCreateInfoKHR(prefix, in_info) vk_print_VkVideoEncodeH264SessionCreateInfoKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkVideoEncodeH264SessionParametersAddInfoKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkVideoEncodeH264SessionParametersAddInfoKHR *in_info);
#define VK_PRINT_VkVideoEncodeH264SessionParametersAddInfoKHR(prefix, in_info) vk_print_VkVideoEncodeH264SessionParametersAddInfoKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkVideoEncodeH264SessionParametersCreateInfoKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkVideoEncodeH264SessionParametersCreateInfoKHR *in_info);
#define VK_PRINT_VkVideoEncodeH264SessionParametersCreateInfoKHR(prefix, in_info) vk_print_VkVideoEncodeH264SessionParametersCreateInfoKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkVideoEncodeH264SessionParametersGetInfoKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkVideoEncodeH264SessionParametersGetInfoKHR *in_info);
#define VK_PRINT_VkVideoEncodeH264SessionParametersGetInfoKHR(prefix, in_info) vk_print_VkVideoEncodeH264SessionParametersGetInfoKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkVideoEncodeH264SessionParametersFeedbackInfoKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkVideoEncodeH264SessionParametersFeedbackInfoKHR *in_info);
#define VK_PRINT_VkVideoEncodeH264SessionParametersFeedbackInfoKHR(prefix, in_info) vk_print_VkVideoEncodeH264SessionParametersFeedbackInfoKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkVideoEncodeH264DpbSlotInfoKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkVideoEncodeH264DpbSlotInfoKHR *in_info);
#define VK_PRINT_VkVideoEncodeH264DpbSlotInfoKHR(prefix, in_info) vk_print_VkVideoEncodeH264DpbSlotInfoKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkVideoEncodeH264PictureInfoKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkVideoEncodeH264PictureInfoKHR *in_info);
#define VK_PRINT_VkVideoEncodeH264PictureInfoKHR(prefix, in_info) vk_print_VkVideoEncodeH264PictureInfoKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkVideoEncodeH264ProfileInfoKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkVideoEncodeH264ProfileInfoKHR *in_info);
#define VK_PRINT_VkVideoEncodeH264ProfileInfoKHR(prefix, in_info) vk_print_VkVideoEncodeH264ProfileInfoKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkVideoEncodeH264NaluSliceInfoKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkVideoEncodeH264NaluSliceInfoKHR *in_info);
#define VK_PRINT_VkVideoEncodeH264NaluSliceInfoKHR(prefix, in_info) vk_print_VkVideoEncodeH264NaluSliceInfoKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkVideoEncodeH264RateControlInfoKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkVideoEncodeH264RateControlInfoKHR *in_info);
#define VK_PRINT_VkVideoEncodeH264RateControlInfoKHR(prefix, in_info) vk_print_VkVideoEncodeH264RateControlInfoKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkVideoEncodeH264QpKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkVideoEncodeH264QpKHR *in_info);
#define VK_PRINT_VkVideoEncodeH264QpKHR(prefix, in_info) vk_print_VkVideoEncodeH264QpKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkVideoEncodeH264FrameSizeKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkVideoEncodeH264FrameSizeKHR *in_info);
#define VK_PRINT_VkVideoEncodeH264FrameSizeKHR(prefix, in_info) vk_print_VkVideoEncodeH264FrameSizeKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkVideoEncodeH264GopRemainingFrameInfoKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkVideoEncodeH264GopRemainingFrameInfoKHR *in_info);
#define VK_PRINT_VkVideoEncodeH264GopRemainingFrameInfoKHR(prefix, in_info) vk_print_VkVideoEncodeH264GopRemainingFrameInfoKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkVideoEncodeH264RateControlLayerInfoKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkVideoEncodeH264RateControlLayerInfoKHR *in_info);
#define VK_PRINT_VkVideoEncodeH264RateControlLayerInfoKHR(prefix, in_info) vk_print_VkVideoEncodeH264RateControlLayerInfoKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkVideoEncodeH265CapabilitiesKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkVideoEncodeH265CapabilitiesKHR *in_info);
#define VK_PRINT_VkVideoEncodeH265CapabilitiesKHR(prefix, in_info) vk_print_VkVideoEncodeH265CapabilitiesKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkVideoEncodeH265QualityLevelPropertiesKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkVideoEncodeH265QualityLevelPropertiesKHR *in_info);
#define VK_PRINT_VkVideoEncodeH265QualityLevelPropertiesKHR(prefix, in_info) vk_print_VkVideoEncodeH265QualityLevelPropertiesKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkVideoEncodeH265SessionCreateInfoKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkVideoEncodeH265SessionCreateInfoKHR *in_info);
#define VK_PRINT_VkVideoEncodeH265SessionCreateInfoKHR(prefix, in_info) vk_print_VkVideoEncodeH265SessionCreateInfoKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkVideoEncodeH265SessionParametersAddInfoKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkVideoEncodeH265SessionParametersAddInfoKHR *in_info);
#define VK_PRINT_VkVideoEncodeH265SessionParametersAddInfoKHR(prefix, in_info) vk_print_VkVideoEncodeH265SessionParametersAddInfoKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkVideoEncodeH265SessionParametersCreateInfoKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkVideoEncodeH265SessionParametersCreateInfoKHR *in_info);
#define VK_PRINT_VkVideoEncodeH265SessionParametersCreateInfoKHR(prefix, in_info) vk_print_VkVideoEncodeH265SessionParametersCreateInfoKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkVideoEncodeH265SessionParametersGetInfoKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkVideoEncodeH265SessionParametersGetInfoKHR *in_info);
#define VK_PRINT_VkVideoEncodeH265SessionParametersGetInfoKHR(prefix, in_info) vk_print_VkVideoEncodeH265SessionParametersGetInfoKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkVideoEncodeH265SessionParametersFeedbackInfoKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkVideoEncodeH265SessionParametersFeedbackInfoKHR *in_info);
#define VK_PRINT_VkVideoEncodeH265SessionParametersFeedbackInfoKHR(prefix, in_info) vk_print_VkVideoEncodeH265SessionParametersFeedbackInfoKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkVideoEncodeH265PictureInfoKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkVideoEncodeH265PictureInfoKHR *in_info);
#define VK_PRINT_VkVideoEncodeH265PictureInfoKHR(prefix, in_info) vk_print_VkVideoEncodeH265PictureInfoKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkVideoEncodeH265NaluSliceSegmentInfoKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkVideoEncodeH265NaluSliceSegmentInfoKHR *in_info);
#define VK_PRINT_VkVideoEncodeH265NaluSliceSegmentInfoKHR(prefix, in_info) vk_print_VkVideoEncodeH265NaluSliceSegmentInfoKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkVideoEncodeH265RateControlInfoKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkVideoEncodeH265RateControlInfoKHR *in_info);
#define VK_PRINT_VkVideoEncodeH265RateControlInfoKHR(prefix, in_info) vk_print_VkVideoEncodeH265RateControlInfoKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkVideoEncodeH265QpKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkVideoEncodeH265QpKHR *in_info);
#define VK_PRINT_VkVideoEncodeH265QpKHR(prefix, in_info) vk_print_VkVideoEncodeH265QpKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkVideoEncodeH265FrameSizeKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkVideoEncodeH265FrameSizeKHR *in_info);
#define VK_PRINT_VkVideoEncodeH265FrameSizeKHR(prefix, in_info) vk_print_VkVideoEncodeH265FrameSizeKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkVideoEncodeH265GopRemainingFrameInfoKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkVideoEncodeH265GopRemainingFrameInfoKHR *in_info);
#define VK_PRINT_VkVideoEncodeH265GopRemainingFrameInfoKHR(prefix, in_info) vk_print_VkVideoEncodeH265GopRemainingFrameInfoKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkVideoEncodeH265RateControlLayerInfoKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkVideoEncodeH265RateControlLayerInfoKHR *in_info);
#define VK_PRINT_VkVideoEncodeH265RateControlLayerInfoKHR(prefix, in_info) vk_print_VkVideoEncodeH265RateControlLayerInfoKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkVideoEncodeH265ProfileInfoKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkVideoEncodeH265ProfileInfoKHR *in_info);
#define VK_PRINT_VkVideoEncodeH265ProfileInfoKHR(prefix, in_info) vk_print_VkVideoEncodeH265ProfileInfoKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkVideoEncodeH265DpbSlotInfoKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkVideoEncodeH265DpbSlotInfoKHR *in_info);
#define VK_PRINT_VkVideoEncodeH265DpbSlotInfoKHR(prefix, in_info) vk_print_VkVideoEncodeH265DpbSlotInfoKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceInheritedViewportScissorFeaturesNV(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceInheritedViewportScissorFeaturesNV *in_info);
#define VK_PRINT_VkPhysicalDeviceInheritedViewportScissorFeaturesNV(prefix, in_info) vk_print_VkPhysicalDeviceInheritedViewportScissorFeaturesNV(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkCommandBufferInheritanceViewportScissorInfoNV(int can_log_level, int log_level, FILE*, const char* prefix, const VkCommandBufferInheritanceViewportScissorInfoNV *in_info);
#define VK_PRINT_VkCommandBufferInheritanceViewportScissorInfoNV(prefix, in_info) vk_print_VkCommandBufferInheritanceViewportScissorInfoNV(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceYcbcr2Plane444FormatsFeaturesEXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceYcbcr2Plane444FormatsFeaturesEXT *in_info);
#define VK_PRINT_VkPhysicalDeviceYcbcr2Plane444FormatsFeaturesEXT(prefix, in_info) vk_print_VkPhysicalDeviceYcbcr2Plane444FormatsFeaturesEXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceProvokingVertexFeaturesEXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceProvokingVertexFeaturesEXT *in_info);
#define VK_PRINT_VkPhysicalDeviceProvokingVertexFeaturesEXT(prefix, in_info) vk_print_VkPhysicalDeviceProvokingVertexFeaturesEXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceProvokingVertexPropertiesEXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceProvokingVertexPropertiesEXT *in_info);
#define VK_PRINT_VkPhysicalDeviceProvokingVertexPropertiesEXT(prefix, in_info) vk_print_VkPhysicalDeviceProvokingVertexPropertiesEXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPipelineRasterizationProvokingVertexStateCreateInfoEXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkPipelineRasterizationProvokingVertexStateCreateInfoEXT *in_info);
#define VK_PRINT_VkPipelineRasterizationProvokingVertexStateCreateInfoEXT(prefix, in_info) vk_print_VkPipelineRasterizationProvokingVertexStateCreateInfoEXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkCuModuleCreateInfoNVX(int can_log_level, int log_level, FILE*, const char* prefix, const VkCuModuleCreateInfoNVX *in_info);
#define VK_PRINT_VkCuModuleCreateInfoNVX(prefix, in_info) vk_print_VkCuModuleCreateInfoNVX(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkCuFunctionCreateInfoNVX(int can_log_level, int log_level, FILE*, const char* prefix, const VkCuFunctionCreateInfoNVX *in_info);
#define VK_PRINT_VkCuFunctionCreateInfoNVX(prefix, in_info) vk_print_VkCuFunctionCreateInfoNVX(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceDescriptorBufferFeaturesEXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceDescriptorBufferFeaturesEXT *in_info);
#define VK_PRINT_VkPhysicalDeviceDescriptorBufferFeaturesEXT(prefix, in_info) vk_print_VkPhysicalDeviceDescriptorBufferFeaturesEXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceDescriptorBufferPropertiesEXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceDescriptorBufferPropertiesEXT *in_info);
#define VK_PRINT_VkPhysicalDeviceDescriptorBufferPropertiesEXT(prefix, in_info) vk_print_VkPhysicalDeviceDescriptorBufferPropertiesEXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceDescriptorBufferDensityMapPropertiesEXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceDescriptorBufferDensityMapPropertiesEXT *in_info);
#define VK_PRINT_VkPhysicalDeviceDescriptorBufferDensityMapPropertiesEXT(prefix, in_info) vk_print_VkPhysicalDeviceDescriptorBufferDensityMapPropertiesEXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkDescriptorAddressInfoEXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkDescriptorAddressInfoEXT *in_info);
#define VK_PRINT_VkDescriptorAddressInfoEXT(prefix, in_info) vk_print_VkDescriptorAddressInfoEXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkDescriptorBufferBindingInfoEXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkDescriptorBufferBindingInfoEXT *in_info);
#define VK_PRINT_VkDescriptorBufferBindingInfoEXT(prefix, in_info) vk_print_VkDescriptorBufferBindingInfoEXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkDescriptorBufferBindingPushDescriptorBufferHandleEXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkDescriptorBufferBindingPushDescriptorBufferHandleEXT *in_info);
#define VK_PRINT_VkDescriptorBufferBindingPushDescriptorBufferHandleEXT(prefix, in_info) vk_print_VkDescriptorBufferBindingPushDescriptorBufferHandleEXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkDescriptorDataEXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkDescriptorDataEXT *in_info);
#define VK_PRINT_VkDescriptorDataEXT(prefix, in_info) vk_print_VkDescriptorDataEXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkDescriptorGetInfoEXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkDescriptorGetInfoEXT *in_info);
#define VK_PRINT_VkDescriptorGetInfoEXT(prefix, in_info) vk_print_VkDescriptorGetInfoEXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkBufferCaptureDescriptorDataInfoEXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkBufferCaptureDescriptorDataInfoEXT *in_info);
#define VK_PRINT_VkBufferCaptureDescriptorDataInfoEXT(prefix, in_info) vk_print_VkBufferCaptureDescriptorDataInfoEXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkImageCaptureDescriptorDataInfoEXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkImageCaptureDescriptorDataInfoEXT *in_info);
#define VK_PRINT_VkImageCaptureDescriptorDataInfoEXT(prefix, in_info) vk_print_VkImageCaptureDescriptorDataInfoEXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkImageViewCaptureDescriptorDataInfoEXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkImageViewCaptureDescriptorDataInfoEXT *in_info);
#define VK_PRINT_VkImageViewCaptureDescriptorDataInfoEXT(prefix, in_info) vk_print_VkImageViewCaptureDescriptorDataInfoEXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkSamplerCaptureDescriptorDataInfoEXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkSamplerCaptureDescriptorDataInfoEXT *in_info);
#define VK_PRINT_VkSamplerCaptureDescriptorDataInfoEXT(prefix, in_info) vk_print_VkSamplerCaptureDescriptorDataInfoEXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkAccelerationStructureCaptureDescriptorDataInfoEXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkAccelerationStructureCaptureDescriptorDataInfoEXT *in_info);
#define VK_PRINT_VkAccelerationStructureCaptureDescriptorDataInfoEXT(prefix, in_info) vk_print_VkAccelerationStructureCaptureDescriptorDataInfoEXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkOpaqueCaptureDescriptorDataCreateInfoEXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkOpaqueCaptureDescriptorDataCreateInfoEXT *in_info);
#define VK_PRINT_VkOpaqueCaptureDescriptorDataCreateInfoEXT(prefix, in_info) vk_print_VkOpaqueCaptureDescriptorDataCreateInfoEXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceShaderIntegerDotProductFeatures(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceShaderIntegerDotProductFeatures *in_info);
#define VK_PRINT_VkPhysicalDeviceShaderIntegerDotProductFeatures(prefix, in_info) vk_print_VkPhysicalDeviceShaderIntegerDotProductFeatures(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceShaderIntegerDotProductFeaturesKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceShaderIntegerDotProductFeaturesKHR *in_info);
#define VK_PRINT_VkPhysicalDeviceShaderIntegerDotProductFeaturesKHR(prefix, in_info) vk_print_VkPhysicalDeviceShaderIntegerDotProductFeaturesKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceShaderIntegerDotProductProperties(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceShaderIntegerDotProductProperties *in_info);
#define VK_PRINT_VkPhysicalDeviceShaderIntegerDotProductProperties(prefix, in_info) vk_print_VkPhysicalDeviceShaderIntegerDotProductProperties(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceShaderIntegerDotProductPropertiesKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceShaderIntegerDotProductPropertiesKHR *in_info);
#define VK_PRINT_VkPhysicalDeviceShaderIntegerDotProductPropertiesKHR(prefix, in_info) vk_print_VkPhysicalDeviceShaderIntegerDotProductPropertiesKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceDrmPropertiesEXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceDrmPropertiesEXT *in_info);
#define VK_PRINT_VkPhysicalDeviceDrmPropertiesEXT(prefix, in_info) vk_print_VkPhysicalDeviceDrmPropertiesEXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceFragmentShaderBarycentricFeaturesKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceFragmentShaderBarycentricFeaturesKHR *in_info);
#define VK_PRINT_VkPhysicalDeviceFragmentShaderBarycentricFeaturesKHR(prefix, in_info) vk_print_VkPhysicalDeviceFragmentShaderBarycentricFeaturesKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceFragmentShaderBarycentricPropertiesKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceFragmentShaderBarycentricPropertiesKHR *in_info);
#define VK_PRINT_VkPhysicalDeviceFragmentShaderBarycentricPropertiesKHR(prefix, in_info) vk_print_VkPhysicalDeviceFragmentShaderBarycentricPropertiesKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceRayTracingMotionBlurFeaturesNV(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceRayTracingMotionBlurFeaturesNV *in_info);
#define VK_PRINT_VkPhysicalDeviceRayTracingMotionBlurFeaturesNV(prefix, in_info) vk_print_VkPhysicalDeviceRayTracingMotionBlurFeaturesNV(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceRayTracingValidationFeaturesNV(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceRayTracingValidationFeaturesNV *in_info);
#define VK_PRINT_VkPhysicalDeviceRayTracingValidationFeaturesNV(prefix, in_info) vk_print_VkPhysicalDeviceRayTracingValidationFeaturesNV(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkAccelerationStructureGeometryMotionTrianglesDataNV(int can_log_level, int log_level, FILE*, const char* prefix, const VkAccelerationStructureGeometryMotionTrianglesDataNV *in_info);
#define VK_PRINT_VkAccelerationStructureGeometryMotionTrianglesDataNV(prefix, in_info) vk_print_VkAccelerationStructureGeometryMotionTrianglesDataNV(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkAccelerationStructureMotionInfoNV(int can_log_level, int log_level, FILE*, const char* prefix, const VkAccelerationStructureMotionInfoNV *in_info);
#define VK_PRINT_VkAccelerationStructureMotionInfoNV(prefix, in_info) vk_print_VkAccelerationStructureMotionInfoNV(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkSRTDataNV(int can_log_level, int log_level, FILE*, const char* prefix, const VkSRTDataNV *in_info);
#define VK_PRINT_VkSRTDataNV(prefix, in_info) vk_print_VkSRTDataNV(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkAccelerationStructureSRTMotionInstanceNV(int can_log_level, int log_level, FILE*, const char* prefix, const VkAccelerationStructureSRTMotionInstanceNV *in_info);
#define VK_PRINT_VkAccelerationStructureSRTMotionInstanceNV(prefix, in_info) vk_print_VkAccelerationStructureSRTMotionInstanceNV(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkAccelerationStructureMatrixMotionInstanceNV(int can_log_level, int log_level, FILE*, const char* prefix, const VkAccelerationStructureMatrixMotionInstanceNV *in_info);
#define VK_PRINT_VkAccelerationStructureMatrixMotionInstanceNV(prefix, in_info) vk_print_VkAccelerationStructureMatrixMotionInstanceNV(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkAccelerationStructureMotionInstanceDataNV(int can_log_level, int log_level, FILE*, const char* prefix, const VkAccelerationStructureMotionInstanceDataNV *in_info);
#define VK_PRINT_VkAccelerationStructureMotionInstanceDataNV(prefix, in_info) vk_print_VkAccelerationStructureMotionInstanceDataNV(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkAccelerationStructureMotionInstanceNV(int can_log_level, int log_level, FILE*, const char* prefix, const VkAccelerationStructureMotionInstanceNV *in_info);
#define VK_PRINT_VkAccelerationStructureMotionInstanceNV(prefix, in_info) vk_print_VkAccelerationStructureMotionInstanceNV(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkMemoryGetRemoteAddressInfoNV(int can_log_level, int log_level, FILE*, const char* prefix, const VkMemoryGetRemoteAddressInfoNV *in_info);
#define VK_PRINT_VkMemoryGetRemoteAddressInfoNV(prefix, in_info) vk_print_VkMemoryGetRemoteAddressInfoNV(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkCudaModuleCreateInfoNV(int can_log_level, int log_level, FILE*, const char* prefix, const VkCudaModuleCreateInfoNV *in_info);
#define VK_PRINT_VkCudaModuleCreateInfoNV(prefix, in_info) vk_print_VkCudaModuleCreateInfoNV(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkCudaFunctionCreateInfoNV(int can_log_level, int log_level, FILE*, const char* prefix, const VkCudaFunctionCreateInfoNV *in_info);
#define VK_PRINT_VkCudaFunctionCreateInfoNV(prefix, in_info) vk_print_VkCudaFunctionCreateInfoNV(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceRGBA10X6FormatsFeaturesEXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceRGBA10X6FormatsFeaturesEXT *in_info);
#define VK_PRINT_VkPhysicalDeviceRGBA10X6FormatsFeaturesEXT(prefix, in_info) vk_print_VkPhysicalDeviceRGBA10X6FormatsFeaturesEXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkFormatProperties3(int can_log_level, int log_level, FILE*, const char* prefix, const VkFormatProperties3 *in_info);
#define VK_PRINT_VkFormatProperties3(prefix, in_info) vk_print_VkFormatProperties3(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkFormatProperties3KHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkFormatProperties3KHR *in_info);
#define VK_PRINT_VkFormatProperties3KHR(prefix, in_info) vk_print_VkFormatProperties3KHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkDrmFormatModifierPropertiesList2EXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkDrmFormatModifierPropertiesList2EXT *in_info);
#define VK_PRINT_VkDrmFormatModifierPropertiesList2EXT(prefix, in_info) vk_print_VkDrmFormatModifierPropertiesList2EXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkDrmFormatModifierProperties2EXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkDrmFormatModifierProperties2EXT *in_info);
#define VK_PRINT_VkDrmFormatModifierProperties2EXT(prefix, in_info) vk_print_VkDrmFormatModifierProperties2EXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkAndroidHardwareBufferFormatProperties2ANDROID(int can_log_level, int log_level, FILE*, const char* prefix, const VkAndroidHardwareBufferFormatProperties2ANDROID *in_info);
#define VK_PRINT_VkAndroidHardwareBufferFormatProperties2ANDROID(prefix, in_info) vk_print_VkAndroidHardwareBufferFormatProperties2ANDROID(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPipelineRenderingCreateInfo(int can_log_level, int log_level, FILE*, const char* prefix, const VkPipelineRenderingCreateInfo *in_info);
#define VK_PRINT_VkPipelineRenderingCreateInfo(prefix, in_info) vk_print_VkPipelineRenderingCreateInfo(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPipelineRenderingCreateInfoKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkPipelineRenderingCreateInfoKHR *in_info);
#define VK_PRINT_VkPipelineRenderingCreateInfoKHR(prefix, in_info) vk_print_VkPipelineRenderingCreateInfoKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkRenderingInfo(int can_log_level, int log_level, FILE*, const char* prefix, const VkRenderingInfo *in_info);
#define VK_PRINT_VkRenderingInfo(prefix, in_info) vk_print_VkRenderingInfo(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkRenderingInfoKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkRenderingInfoKHR *in_info);
#define VK_PRINT_VkRenderingInfoKHR(prefix, in_info) vk_print_VkRenderingInfoKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkRenderingAttachmentInfo(int can_log_level, int log_level, FILE*, const char* prefix, const VkRenderingAttachmentInfo *in_info);
#define VK_PRINT_VkRenderingAttachmentInfo(prefix, in_info) vk_print_VkRenderingAttachmentInfo(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkRenderingAttachmentInfoKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkRenderingAttachmentInfoKHR *in_info);
#define VK_PRINT_VkRenderingAttachmentInfoKHR(prefix, in_info) vk_print_VkRenderingAttachmentInfoKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkRenderingFragmentShadingRateAttachmentInfoKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkRenderingFragmentShadingRateAttachmentInfoKHR *in_info);
#define VK_PRINT_VkRenderingFragmentShadingRateAttachmentInfoKHR(prefix, in_info) vk_print_VkRenderingFragmentShadingRateAttachmentInfoKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkRenderingFragmentDensityMapAttachmentInfoEXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkRenderingFragmentDensityMapAttachmentInfoEXT *in_info);
#define VK_PRINT_VkRenderingFragmentDensityMapAttachmentInfoEXT(prefix, in_info) vk_print_VkRenderingFragmentDensityMapAttachmentInfoEXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceDynamicRenderingFeatures(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceDynamicRenderingFeatures *in_info);
#define VK_PRINT_VkPhysicalDeviceDynamicRenderingFeatures(prefix, in_info) vk_print_VkPhysicalDeviceDynamicRenderingFeatures(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceDynamicRenderingFeaturesKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceDynamicRenderingFeaturesKHR *in_info);
#define VK_PRINT_VkPhysicalDeviceDynamicRenderingFeaturesKHR(prefix, in_info) vk_print_VkPhysicalDeviceDynamicRenderingFeaturesKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkCommandBufferInheritanceRenderingInfo(int can_log_level, int log_level, FILE*, const char* prefix, const VkCommandBufferInheritanceRenderingInfo *in_info);
#define VK_PRINT_VkCommandBufferInheritanceRenderingInfo(prefix, in_info) vk_print_VkCommandBufferInheritanceRenderingInfo(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkCommandBufferInheritanceRenderingInfoKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkCommandBufferInheritanceRenderingInfoKHR *in_info);
#define VK_PRINT_VkCommandBufferInheritanceRenderingInfoKHR(prefix, in_info) vk_print_VkCommandBufferInheritanceRenderingInfoKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkAttachmentSampleCountInfoAMD(int can_log_level, int log_level, FILE*, const char* prefix, const VkAttachmentSampleCountInfoAMD *in_info);
#define VK_PRINT_VkAttachmentSampleCountInfoAMD(prefix, in_info) vk_print_VkAttachmentSampleCountInfoAMD(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkAttachmentSampleCountInfoNV(int can_log_level, int log_level, FILE*, const char* prefix, const VkAttachmentSampleCountInfoNV *in_info);
#define VK_PRINT_VkAttachmentSampleCountInfoNV(prefix, in_info) vk_print_VkAttachmentSampleCountInfoNV(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkMultiviewPerViewAttributesInfoNVX(int can_log_level, int log_level, FILE*, const char* prefix, const VkMultiviewPerViewAttributesInfoNVX *in_info);
#define VK_PRINT_VkMultiviewPerViewAttributesInfoNVX(prefix, in_info) vk_print_VkMultiviewPerViewAttributesInfoNVX(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceImageViewMinLodFeaturesEXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceImageViewMinLodFeaturesEXT *in_info);
#define VK_PRINT_VkPhysicalDeviceImageViewMinLodFeaturesEXT(prefix, in_info) vk_print_VkPhysicalDeviceImageViewMinLodFeaturesEXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkImageViewMinLodCreateInfoEXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkImageViewMinLodCreateInfoEXT *in_info);
#define VK_PRINT_VkImageViewMinLodCreateInfoEXT(prefix, in_info) vk_print_VkImageViewMinLodCreateInfoEXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceRasterizationOrderAttachmentAccessFeaturesEXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceRasterizationOrderAttachmentAccessFeaturesEXT *in_info);
#define VK_PRINT_VkPhysicalDeviceRasterizationOrderAttachmentAccessFeaturesEXT(prefix, in_info) vk_print_VkPhysicalDeviceRasterizationOrderAttachmentAccessFeaturesEXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceRasterizationOrderAttachmentAccessFeaturesARM(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceRasterizationOrderAttachmentAccessFeaturesARM *in_info);
#define VK_PRINT_VkPhysicalDeviceRasterizationOrderAttachmentAccessFeaturesARM(prefix, in_info) vk_print_VkPhysicalDeviceRasterizationOrderAttachmentAccessFeaturesARM(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceLinearColorAttachmentFeaturesNV(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceLinearColorAttachmentFeaturesNV *in_info);
#define VK_PRINT_VkPhysicalDeviceLinearColorAttachmentFeaturesNV(prefix, in_info) vk_print_VkPhysicalDeviceLinearColorAttachmentFeaturesNV(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceGraphicsPipelineLibraryFeaturesEXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceGraphicsPipelineLibraryFeaturesEXT *in_info);
#define VK_PRINT_VkPhysicalDeviceGraphicsPipelineLibraryFeaturesEXT(prefix, in_info) vk_print_VkPhysicalDeviceGraphicsPipelineLibraryFeaturesEXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceGraphicsPipelineLibraryPropertiesEXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceGraphicsPipelineLibraryPropertiesEXT *in_info);
#define VK_PRINT_VkPhysicalDeviceGraphicsPipelineLibraryPropertiesEXT(prefix, in_info) vk_print_VkPhysicalDeviceGraphicsPipelineLibraryPropertiesEXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkGraphicsPipelineLibraryCreateInfoEXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkGraphicsPipelineLibraryCreateInfoEXT *in_info);
#define VK_PRINT_VkGraphicsPipelineLibraryCreateInfoEXT(prefix, in_info) vk_print_VkGraphicsPipelineLibraryCreateInfoEXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceDescriptorSetHostMappingFeaturesVALVE(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceDescriptorSetHostMappingFeaturesVALVE *in_info);
#define VK_PRINT_VkPhysicalDeviceDescriptorSetHostMappingFeaturesVALVE(prefix, in_info) vk_print_VkPhysicalDeviceDescriptorSetHostMappingFeaturesVALVE(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkDescriptorSetBindingReferenceVALVE(int can_log_level, int log_level, FILE*, const char* prefix, const VkDescriptorSetBindingReferenceVALVE *in_info);
#define VK_PRINT_VkDescriptorSetBindingReferenceVALVE(prefix, in_info) vk_print_VkDescriptorSetBindingReferenceVALVE(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkDescriptorSetLayoutHostMappingInfoVALVE(int can_log_level, int log_level, FILE*, const char* prefix, const VkDescriptorSetLayoutHostMappingInfoVALVE *in_info);
#define VK_PRINT_VkDescriptorSetLayoutHostMappingInfoVALVE(prefix, in_info) vk_print_VkDescriptorSetLayoutHostMappingInfoVALVE(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceNestedCommandBufferFeaturesEXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceNestedCommandBufferFeaturesEXT *in_info);
#define VK_PRINT_VkPhysicalDeviceNestedCommandBufferFeaturesEXT(prefix, in_info) vk_print_VkPhysicalDeviceNestedCommandBufferFeaturesEXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceNestedCommandBufferPropertiesEXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceNestedCommandBufferPropertiesEXT *in_info);
#define VK_PRINT_VkPhysicalDeviceNestedCommandBufferPropertiesEXT(prefix, in_info) vk_print_VkPhysicalDeviceNestedCommandBufferPropertiesEXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceShaderModuleIdentifierFeaturesEXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceShaderModuleIdentifierFeaturesEXT *in_info);
#define VK_PRINT_VkPhysicalDeviceShaderModuleIdentifierFeaturesEXT(prefix, in_info) vk_print_VkPhysicalDeviceShaderModuleIdentifierFeaturesEXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceShaderModuleIdentifierPropertiesEXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceShaderModuleIdentifierPropertiesEXT *in_info);
#define VK_PRINT_VkPhysicalDeviceShaderModuleIdentifierPropertiesEXT(prefix, in_info) vk_print_VkPhysicalDeviceShaderModuleIdentifierPropertiesEXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPipelineShaderStageModuleIdentifierCreateInfoEXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkPipelineShaderStageModuleIdentifierCreateInfoEXT *in_info);
#define VK_PRINT_VkPipelineShaderStageModuleIdentifierCreateInfoEXT(prefix, in_info) vk_print_VkPipelineShaderStageModuleIdentifierCreateInfoEXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkShaderModuleIdentifierEXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkShaderModuleIdentifierEXT *in_info);
#define VK_PRINT_VkShaderModuleIdentifierEXT(prefix, in_info) vk_print_VkShaderModuleIdentifierEXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkImageCompressionControlEXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkImageCompressionControlEXT *in_info);
#define VK_PRINT_VkImageCompressionControlEXT(prefix, in_info) vk_print_VkImageCompressionControlEXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceImageCompressionControlFeaturesEXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceImageCompressionControlFeaturesEXT *in_info);
#define VK_PRINT_VkPhysicalDeviceImageCompressionControlFeaturesEXT(prefix, in_info) vk_print_VkPhysicalDeviceImageCompressionControlFeaturesEXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkImageCompressionPropertiesEXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkImageCompressionPropertiesEXT *in_info);
#define VK_PRINT_VkImageCompressionPropertiesEXT(prefix, in_info) vk_print_VkImageCompressionPropertiesEXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceImageCompressionControlSwapchainFeaturesEXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceImageCompressionControlSwapchainFeaturesEXT *in_info);
#define VK_PRINT_VkPhysicalDeviceImageCompressionControlSwapchainFeaturesEXT(prefix, in_info) vk_print_VkPhysicalDeviceImageCompressionControlSwapchainFeaturesEXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkImageSubresource2KHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkImageSubresource2KHR *in_info);
#define VK_PRINT_VkImageSubresource2KHR(prefix, in_info) vk_print_VkImageSubresource2KHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkImageSubresource2EXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkImageSubresource2EXT *in_info);
#define VK_PRINT_VkImageSubresource2EXT(prefix, in_info) vk_print_VkImageSubresource2EXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkSubresourceLayout2KHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkSubresourceLayout2KHR *in_info);
#define VK_PRINT_VkSubresourceLayout2KHR(prefix, in_info) vk_print_VkSubresourceLayout2KHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkSubresourceLayout2EXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkSubresourceLayout2EXT *in_info);
#define VK_PRINT_VkSubresourceLayout2EXT(prefix, in_info) vk_print_VkSubresourceLayout2EXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkRenderPassCreationControlEXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkRenderPassCreationControlEXT *in_info);
#define VK_PRINT_VkRenderPassCreationControlEXT(prefix, in_info) vk_print_VkRenderPassCreationControlEXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkRenderPassCreationFeedbackInfoEXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkRenderPassCreationFeedbackInfoEXT *in_info);
#define VK_PRINT_VkRenderPassCreationFeedbackInfoEXT(prefix, in_info) vk_print_VkRenderPassCreationFeedbackInfoEXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkRenderPassCreationFeedbackCreateInfoEXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkRenderPassCreationFeedbackCreateInfoEXT *in_info);
#define VK_PRINT_VkRenderPassCreationFeedbackCreateInfoEXT(prefix, in_info) vk_print_VkRenderPassCreationFeedbackCreateInfoEXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkRenderPassSubpassFeedbackInfoEXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkRenderPassSubpassFeedbackInfoEXT *in_info);
#define VK_PRINT_VkRenderPassSubpassFeedbackInfoEXT(prefix, in_info) vk_print_VkRenderPassSubpassFeedbackInfoEXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkRenderPassSubpassFeedbackCreateInfoEXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkRenderPassSubpassFeedbackCreateInfoEXT *in_info);
#define VK_PRINT_VkRenderPassSubpassFeedbackCreateInfoEXT(prefix, in_info) vk_print_VkRenderPassSubpassFeedbackCreateInfoEXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceSubpassMergeFeedbackFeaturesEXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceSubpassMergeFeedbackFeaturesEXT *in_info);
#define VK_PRINT_VkPhysicalDeviceSubpassMergeFeedbackFeaturesEXT(prefix, in_info) vk_print_VkPhysicalDeviceSubpassMergeFeedbackFeaturesEXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkMicromapCreateInfoEXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkMicromapCreateInfoEXT *in_info);
#define VK_PRINT_VkMicromapCreateInfoEXT(prefix, in_info) vk_print_VkMicromapCreateInfoEXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkCopyMicromapInfoEXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkCopyMicromapInfoEXT *in_info);
#define VK_PRINT_VkCopyMicromapInfoEXT(prefix, in_info) vk_print_VkCopyMicromapInfoEXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkCopyMicromapToMemoryInfoEXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkCopyMicromapToMemoryInfoEXT *in_info);
#define VK_PRINT_VkCopyMicromapToMemoryInfoEXT(prefix, in_info) vk_print_VkCopyMicromapToMemoryInfoEXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkCopyMemoryToMicromapInfoEXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkCopyMemoryToMicromapInfoEXT *in_info);
#define VK_PRINT_VkCopyMemoryToMicromapInfoEXT(prefix, in_info) vk_print_VkCopyMemoryToMicromapInfoEXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkMicromapBuildSizesInfoEXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkMicromapBuildSizesInfoEXT *in_info);
#define VK_PRINT_VkMicromapBuildSizesInfoEXT(prefix, in_info) vk_print_VkMicromapBuildSizesInfoEXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkMicromapUsageEXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkMicromapUsageEXT *in_info);
#define VK_PRINT_VkMicromapUsageEXT(prefix, in_info) vk_print_VkMicromapUsageEXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkMicromapTriangleEXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkMicromapTriangleEXT *in_info);
#define VK_PRINT_VkMicromapTriangleEXT(prefix, in_info) vk_print_VkMicromapTriangleEXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceOpacityMicromapFeaturesEXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceOpacityMicromapFeaturesEXT *in_info);
#define VK_PRINT_VkPhysicalDeviceOpacityMicromapFeaturesEXT(prefix, in_info) vk_print_VkPhysicalDeviceOpacityMicromapFeaturesEXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceOpacityMicromapPropertiesEXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceOpacityMicromapPropertiesEXT *in_info);
#define VK_PRINT_VkPhysicalDeviceOpacityMicromapPropertiesEXT(prefix, in_info) vk_print_VkPhysicalDeviceOpacityMicromapPropertiesEXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPipelinePropertiesIdentifierEXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkPipelinePropertiesIdentifierEXT *in_info);
#define VK_PRINT_VkPipelinePropertiesIdentifierEXT(prefix, in_info) vk_print_VkPipelinePropertiesIdentifierEXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDevicePipelinePropertiesFeaturesEXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDevicePipelinePropertiesFeaturesEXT *in_info);
#define VK_PRINT_VkPhysicalDevicePipelinePropertiesFeaturesEXT(prefix, in_info) vk_print_VkPhysicalDevicePipelinePropertiesFeaturesEXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceShaderEarlyAndLateFragmentTestsFeaturesAMD(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceShaderEarlyAndLateFragmentTestsFeaturesAMD *in_info);
#define VK_PRINT_VkPhysicalDeviceShaderEarlyAndLateFragmentTestsFeaturesAMD(prefix, in_info) vk_print_VkPhysicalDeviceShaderEarlyAndLateFragmentTestsFeaturesAMD(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkExternalMemoryAcquireUnmodifiedEXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkExternalMemoryAcquireUnmodifiedEXT *in_info);
#define VK_PRINT_VkExternalMemoryAcquireUnmodifiedEXT(prefix, in_info) vk_print_VkExternalMemoryAcquireUnmodifiedEXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceNonSeamlessCubeMapFeaturesEXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceNonSeamlessCubeMapFeaturesEXT *in_info);
#define VK_PRINT_VkPhysicalDeviceNonSeamlessCubeMapFeaturesEXT(prefix, in_info) vk_print_VkPhysicalDeviceNonSeamlessCubeMapFeaturesEXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDevicePipelineRobustnessFeaturesEXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDevicePipelineRobustnessFeaturesEXT *in_info);
#define VK_PRINT_VkPhysicalDevicePipelineRobustnessFeaturesEXT(prefix, in_info) vk_print_VkPhysicalDevicePipelineRobustnessFeaturesEXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPipelineRobustnessCreateInfoEXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkPipelineRobustnessCreateInfoEXT *in_info);
#define VK_PRINT_VkPipelineRobustnessCreateInfoEXT(prefix, in_info) vk_print_VkPipelineRobustnessCreateInfoEXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDevicePipelineRobustnessPropertiesEXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDevicePipelineRobustnessPropertiesEXT *in_info);
#define VK_PRINT_VkPhysicalDevicePipelineRobustnessPropertiesEXT(prefix, in_info) vk_print_VkPhysicalDevicePipelineRobustnessPropertiesEXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkImageViewSampleWeightCreateInfoQCOM(int can_log_level, int log_level, FILE*, const char* prefix, const VkImageViewSampleWeightCreateInfoQCOM *in_info);
#define VK_PRINT_VkImageViewSampleWeightCreateInfoQCOM(prefix, in_info) vk_print_VkImageViewSampleWeightCreateInfoQCOM(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceImageProcessingFeaturesQCOM(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceImageProcessingFeaturesQCOM *in_info);
#define VK_PRINT_VkPhysicalDeviceImageProcessingFeaturesQCOM(prefix, in_info) vk_print_VkPhysicalDeviceImageProcessingFeaturesQCOM(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceImageProcessingPropertiesQCOM(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceImageProcessingPropertiesQCOM *in_info);
#define VK_PRINT_VkPhysicalDeviceImageProcessingPropertiesQCOM(prefix, in_info) vk_print_VkPhysicalDeviceImageProcessingPropertiesQCOM(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceTilePropertiesFeaturesQCOM(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceTilePropertiesFeaturesQCOM *in_info);
#define VK_PRINT_VkPhysicalDeviceTilePropertiesFeaturesQCOM(prefix, in_info) vk_print_VkPhysicalDeviceTilePropertiesFeaturesQCOM(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkTilePropertiesQCOM(int can_log_level, int log_level, FILE*, const char* prefix, const VkTilePropertiesQCOM *in_info);
#define VK_PRINT_VkTilePropertiesQCOM(prefix, in_info) vk_print_VkTilePropertiesQCOM(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceAmigoProfilingFeaturesSEC(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceAmigoProfilingFeaturesSEC *in_info);
#define VK_PRINT_VkPhysicalDeviceAmigoProfilingFeaturesSEC(prefix, in_info) vk_print_VkPhysicalDeviceAmigoProfilingFeaturesSEC(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkAmigoProfilingSubmitInfoSEC(int can_log_level, int log_level, FILE*, const char* prefix, const VkAmigoProfilingSubmitInfoSEC *in_info);
#define VK_PRINT_VkAmigoProfilingSubmitInfoSEC(prefix, in_info) vk_print_VkAmigoProfilingSubmitInfoSEC(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceAttachmentFeedbackLoopLayoutFeaturesEXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceAttachmentFeedbackLoopLayoutFeaturesEXT *in_info);
#define VK_PRINT_VkPhysicalDeviceAttachmentFeedbackLoopLayoutFeaturesEXT(prefix, in_info) vk_print_VkPhysicalDeviceAttachmentFeedbackLoopLayoutFeaturesEXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceDepthClampZeroOneFeaturesEXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceDepthClampZeroOneFeaturesEXT *in_info);
#define VK_PRINT_VkPhysicalDeviceDepthClampZeroOneFeaturesEXT(prefix, in_info) vk_print_VkPhysicalDeviceDepthClampZeroOneFeaturesEXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceAddressBindingReportFeaturesEXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceAddressBindingReportFeaturesEXT *in_info);
#define VK_PRINT_VkPhysicalDeviceAddressBindingReportFeaturesEXT(prefix, in_info) vk_print_VkPhysicalDeviceAddressBindingReportFeaturesEXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkDeviceAddressBindingCallbackDataEXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkDeviceAddressBindingCallbackDataEXT *in_info);
#define VK_PRINT_VkDeviceAddressBindingCallbackDataEXT(prefix, in_info) vk_print_VkDeviceAddressBindingCallbackDataEXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceOpticalFlowFeaturesNV(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceOpticalFlowFeaturesNV *in_info);
#define VK_PRINT_VkPhysicalDeviceOpticalFlowFeaturesNV(prefix, in_info) vk_print_VkPhysicalDeviceOpticalFlowFeaturesNV(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceOpticalFlowPropertiesNV(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceOpticalFlowPropertiesNV *in_info);
#define VK_PRINT_VkPhysicalDeviceOpticalFlowPropertiesNV(prefix, in_info) vk_print_VkPhysicalDeviceOpticalFlowPropertiesNV(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkOpticalFlowImageFormatInfoNV(int can_log_level, int log_level, FILE*, const char* prefix, const VkOpticalFlowImageFormatInfoNV *in_info);
#define VK_PRINT_VkOpticalFlowImageFormatInfoNV(prefix, in_info) vk_print_VkOpticalFlowImageFormatInfoNV(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkOpticalFlowImageFormatPropertiesNV(int can_log_level, int log_level, FILE*, const char* prefix, const VkOpticalFlowImageFormatPropertiesNV *in_info);
#define VK_PRINT_VkOpticalFlowImageFormatPropertiesNV(prefix, in_info) vk_print_VkOpticalFlowImageFormatPropertiesNV(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkOpticalFlowSessionCreateInfoNV(int can_log_level, int log_level, FILE*, const char* prefix, const VkOpticalFlowSessionCreateInfoNV *in_info);
#define VK_PRINT_VkOpticalFlowSessionCreateInfoNV(prefix, in_info) vk_print_VkOpticalFlowSessionCreateInfoNV(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkOpticalFlowSessionCreatePrivateDataInfoNV(int can_log_level, int log_level, FILE*, const char* prefix, const VkOpticalFlowSessionCreatePrivateDataInfoNV *in_info);
#define VK_PRINT_VkOpticalFlowSessionCreatePrivateDataInfoNV(prefix, in_info) vk_print_VkOpticalFlowSessionCreatePrivateDataInfoNV(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkOpticalFlowExecuteInfoNV(int can_log_level, int log_level, FILE*, const char* prefix, const VkOpticalFlowExecuteInfoNV *in_info);
#define VK_PRINT_VkOpticalFlowExecuteInfoNV(prefix, in_info) vk_print_VkOpticalFlowExecuteInfoNV(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceFaultFeaturesEXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceFaultFeaturesEXT *in_info);
#define VK_PRINT_VkPhysicalDeviceFaultFeaturesEXT(prefix, in_info) vk_print_VkPhysicalDeviceFaultFeaturesEXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkDeviceFaultAddressInfoEXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkDeviceFaultAddressInfoEXT *in_info);
#define VK_PRINT_VkDeviceFaultAddressInfoEXT(prefix, in_info) vk_print_VkDeviceFaultAddressInfoEXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkDeviceFaultVendorInfoEXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkDeviceFaultVendorInfoEXT *in_info);
#define VK_PRINT_VkDeviceFaultVendorInfoEXT(prefix, in_info) vk_print_VkDeviceFaultVendorInfoEXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkDeviceFaultCountsEXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkDeviceFaultCountsEXT *in_info);
#define VK_PRINT_VkDeviceFaultCountsEXT(prefix, in_info) vk_print_VkDeviceFaultCountsEXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkDeviceFaultInfoEXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkDeviceFaultInfoEXT *in_info);
#define VK_PRINT_VkDeviceFaultInfoEXT(prefix, in_info) vk_print_VkDeviceFaultInfoEXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkDeviceFaultVendorBinaryHeaderVersionOneEXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkDeviceFaultVendorBinaryHeaderVersionOneEXT *in_info);
#define VK_PRINT_VkDeviceFaultVendorBinaryHeaderVersionOneEXT(prefix, in_info) vk_print_VkDeviceFaultVendorBinaryHeaderVersionOneEXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDevicePipelineLibraryGroupHandlesFeaturesEXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDevicePipelineLibraryGroupHandlesFeaturesEXT *in_info);
#define VK_PRINT_VkPhysicalDevicePipelineLibraryGroupHandlesFeaturesEXT(prefix, in_info) vk_print_VkPhysicalDevicePipelineLibraryGroupHandlesFeaturesEXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkDepthBiasInfoEXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkDepthBiasInfoEXT *in_info);
#define VK_PRINT_VkDepthBiasInfoEXT(prefix, in_info) vk_print_VkDepthBiasInfoEXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkDepthBiasRepresentationInfoEXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkDepthBiasRepresentationInfoEXT *in_info);
#define VK_PRINT_VkDepthBiasRepresentationInfoEXT(prefix, in_info) vk_print_VkDepthBiasRepresentationInfoEXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkDecompressMemoryRegionNV(int can_log_level, int log_level, FILE*, const char* prefix, const VkDecompressMemoryRegionNV *in_info);
#define VK_PRINT_VkDecompressMemoryRegionNV(prefix, in_info) vk_print_VkDecompressMemoryRegionNV(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceShaderCoreBuiltinsPropertiesARM(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceShaderCoreBuiltinsPropertiesARM *in_info);
#define VK_PRINT_VkPhysicalDeviceShaderCoreBuiltinsPropertiesARM(prefix, in_info) vk_print_VkPhysicalDeviceShaderCoreBuiltinsPropertiesARM(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceShaderCoreBuiltinsFeaturesARM(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceShaderCoreBuiltinsFeaturesARM *in_info);
#define VK_PRINT_VkPhysicalDeviceShaderCoreBuiltinsFeaturesARM(prefix, in_info) vk_print_VkPhysicalDeviceShaderCoreBuiltinsFeaturesARM(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkFrameBoundaryEXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkFrameBoundaryEXT *in_info);
#define VK_PRINT_VkFrameBoundaryEXT(prefix, in_info) vk_print_VkFrameBoundaryEXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceFrameBoundaryFeaturesEXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceFrameBoundaryFeaturesEXT *in_info);
#define VK_PRINT_VkPhysicalDeviceFrameBoundaryFeaturesEXT(prefix, in_info) vk_print_VkPhysicalDeviceFrameBoundaryFeaturesEXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceDynamicRenderingUnusedAttachmentsFeaturesEXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceDynamicRenderingUnusedAttachmentsFeaturesEXT *in_info);
#define VK_PRINT_VkPhysicalDeviceDynamicRenderingUnusedAttachmentsFeaturesEXT(prefix, in_info) vk_print_VkPhysicalDeviceDynamicRenderingUnusedAttachmentsFeaturesEXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkSurfacePresentModeEXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkSurfacePresentModeEXT *in_info);
#define VK_PRINT_VkSurfacePresentModeEXT(prefix, in_info) vk_print_VkSurfacePresentModeEXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkSurfacePresentScalingCapabilitiesEXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkSurfacePresentScalingCapabilitiesEXT *in_info);
#define VK_PRINT_VkSurfacePresentScalingCapabilitiesEXT(prefix, in_info) vk_print_VkSurfacePresentScalingCapabilitiesEXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkSurfacePresentModeCompatibilityEXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkSurfacePresentModeCompatibilityEXT *in_info);
#define VK_PRINT_VkSurfacePresentModeCompatibilityEXT(prefix, in_info) vk_print_VkSurfacePresentModeCompatibilityEXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceSwapchainMaintenance1FeaturesEXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceSwapchainMaintenance1FeaturesEXT *in_info);
#define VK_PRINT_VkPhysicalDeviceSwapchainMaintenance1FeaturesEXT(prefix, in_info) vk_print_VkPhysicalDeviceSwapchainMaintenance1FeaturesEXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkSwapchainPresentFenceInfoEXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkSwapchainPresentFenceInfoEXT *in_info);
#define VK_PRINT_VkSwapchainPresentFenceInfoEXT(prefix, in_info) vk_print_VkSwapchainPresentFenceInfoEXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkSwapchainPresentModesCreateInfoEXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkSwapchainPresentModesCreateInfoEXT *in_info);
#define VK_PRINT_VkSwapchainPresentModesCreateInfoEXT(prefix, in_info) vk_print_VkSwapchainPresentModesCreateInfoEXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkSwapchainPresentModeInfoEXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkSwapchainPresentModeInfoEXT *in_info);
#define VK_PRINT_VkSwapchainPresentModeInfoEXT(prefix, in_info) vk_print_VkSwapchainPresentModeInfoEXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkSwapchainPresentScalingCreateInfoEXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkSwapchainPresentScalingCreateInfoEXT *in_info);
#define VK_PRINT_VkSwapchainPresentScalingCreateInfoEXT(prefix, in_info) vk_print_VkSwapchainPresentScalingCreateInfoEXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkReleaseSwapchainImagesInfoEXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkReleaseSwapchainImagesInfoEXT *in_info);
#define VK_PRINT_VkReleaseSwapchainImagesInfoEXT(prefix, in_info) vk_print_VkReleaseSwapchainImagesInfoEXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceDepthBiasControlFeaturesEXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceDepthBiasControlFeaturesEXT *in_info);
#define VK_PRINT_VkPhysicalDeviceDepthBiasControlFeaturesEXT(prefix, in_info) vk_print_VkPhysicalDeviceDepthBiasControlFeaturesEXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceRayTracingInvocationReorderFeaturesNV(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceRayTracingInvocationReorderFeaturesNV *in_info);
#define VK_PRINT_VkPhysicalDeviceRayTracingInvocationReorderFeaturesNV(prefix, in_info) vk_print_VkPhysicalDeviceRayTracingInvocationReorderFeaturesNV(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceRayTracingInvocationReorderPropertiesNV(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceRayTracingInvocationReorderPropertiesNV *in_info);
#define VK_PRINT_VkPhysicalDeviceRayTracingInvocationReorderPropertiesNV(prefix, in_info) vk_print_VkPhysicalDeviceRayTracingInvocationReorderPropertiesNV(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceExtendedSparseAddressSpaceFeaturesNV(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceExtendedSparseAddressSpaceFeaturesNV *in_info);
#define VK_PRINT_VkPhysicalDeviceExtendedSparseAddressSpaceFeaturesNV(prefix, in_info) vk_print_VkPhysicalDeviceExtendedSparseAddressSpaceFeaturesNV(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceExtendedSparseAddressSpacePropertiesNV(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceExtendedSparseAddressSpacePropertiesNV *in_info);
#define VK_PRINT_VkPhysicalDeviceExtendedSparseAddressSpacePropertiesNV(prefix, in_info) vk_print_VkPhysicalDeviceExtendedSparseAddressSpacePropertiesNV(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkDirectDriverLoadingInfoLUNARG(int can_log_level, int log_level, FILE*, const char* prefix, const VkDirectDriverLoadingInfoLUNARG *in_info);
#define VK_PRINT_VkDirectDriverLoadingInfoLUNARG(prefix, in_info) vk_print_VkDirectDriverLoadingInfoLUNARG(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkDirectDriverLoadingListLUNARG(int can_log_level, int log_level, FILE*, const char* prefix, const VkDirectDriverLoadingListLUNARG *in_info);
#define VK_PRINT_VkDirectDriverLoadingListLUNARG(prefix, in_info) vk_print_VkDirectDriverLoadingListLUNARG(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceMultiviewPerViewViewportsFeaturesQCOM(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceMultiviewPerViewViewportsFeaturesQCOM *in_info);
#define VK_PRINT_VkPhysicalDeviceMultiviewPerViewViewportsFeaturesQCOM(prefix, in_info) vk_print_VkPhysicalDeviceMultiviewPerViewViewportsFeaturesQCOM(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceRayTracingPositionFetchFeaturesKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceRayTracingPositionFetchFeaturesKHR *in_info);
#define VK_PRINT_VkPhysicalDeviceRayTracingPositionFetchFeaturesKHR(prefix, in_info) vk_print_VkPhysicalDeviceRayTracingPositionFetchFeaturesKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkDeviceImageSubresourceInfoKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkDeviceImageSubresourceInfoKHR *in_info);
#define VK_PRINT_VkDeviceImageSubresourceInfoKHR(prefix, in_info) vk_print_VkDeviceImageSubresourceInfoKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceShaderCorePropertiesARM(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceShaderCorePropertiesARM *in_info);
#define VK_PRINT_VkPhysicalDeviceShaderCorePropertiesARM(prefix, in_info) vk_print_VkPhysicalDeviceShaderCorePropertiesARM(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceMultiviewPerViewRenderAreasFeaturesQCOM(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceMultiviewPerViewRenderAreasFeaturesQCOM *in_info);
#define VK_PRINT_VkPhysicalDeviceMultiviewPerViewRenderAreasFeaturesQCOM(prefix, in_info) vk_print_VkPhysicalDeviceMultiviewPerViewRenderAreasFeaturesQCOM(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkMultiviewPerViewRenderAreasRenderPassBeginInfoQCOM(int can_log_level, int log_level, FILE*, const char* prefix, const VkMultiviewPerViewRenderAreasRenderPassBeginInfoQCOM *in_info);
#define VK_PRINT_VkMultiviewPerViewRenderAreasRenderPassBeginInfoQCOM(prefix, in_info) vk_print_VkMultiviewPerViewRenderAreasRenderPassBeginInfoQCOM(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkQueryLowLatencySupportNV(int can_log_level, int log_level, FILE*, const char* prefix, const VkQueryLowLatencySupportNV *in_info);
#define VK_PRINT_VkQueryLowLatencySupportNV(prefix, in_info) vk_print_VkQueryLowLatencySupportNV(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkMemoryMapInfoKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkMemoryMapInfoKHR *in_info);
#define VK_PRINT_VkMemoryMapInfoKHR(prefix, in_info) vk_print_VkMemoryMapInfoKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkMemoryUnmapInfoKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkMemoryUnmapInfoKHR *in_info);
#define VK_PRINT_VkMemoryUnmapInfoKHR(prefix, in_info) vk_print_VkMemoryUnmapInfoKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceShaderObjectFeaturesEXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceShaderObjectFeaturesEXT *in_info);
#define VK_PRINT_VkPhysicalDeviceShaderObjectFeaturesEXT(prefix, in_info) vk_print_VkPhysicalDeviceShaderObjectFeaturesEXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceShaderObjectPropertiesEXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceShaderObjectPropertiesEXT *in_info);
#define VK_PRINT_VkPhysicalDeviceShaderObjectPropertiesEXT(prefix, in_info) vk_print_VkPhysicalDeviceShaderObjectPropertiesEXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkShaderCreateInfoEXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkShaderCreateInfoEXT *in_info);
#define VK_PRINT_VkShaderCreateInfoEXT(prefix, in_info) vk_print_VkShaderCreateInfoEXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceShaderTileImageFeaturesEXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceShaderTileImageFeaturesEXT *in_info);
#define VK_PRINT_VkPhysicalDeviceShaderTileImageFeaturesEXT(prefix, in_info) vk_print_VkPhysicalDeviceShaderTileImageFeaturesEXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceShaderTileImagePropertiesEXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceShaderTileImagePropertiesEXT *in_info);
#define VK_PRINT_VkPhysicalDeviceShaderTileImagePropertiesEXT(prefix, in_info) vk_print_VkPhysicalDeviceShaderTileImagePropertiesEXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceCooperativeMatrixFeaturesKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceCooperativeMatrixFeaturesKHR *in_info);
#define VK_PRINT_VkPhysicalDeviceCooperativeMatrixFeaturesKHR(prefix, in_info) vk_print_VkPhysicalDeviceCooperativeMatrixFeaturesKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkCooperativeMatrixPropertiesKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkCooperativeMatrixPropertiesKHR *in_info);
#define VK_PRINT_VkCooperativeMatrixPropertiesKHR(prefix, in_info) vk_print_VkCooperativeMatrixPropertiesKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceCooperativeMatrixPropertiesKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceCooperativeMatrixPropertiesKHR *in_info);
#define VK_PRINT_VkPhysicalDeviceCooperativeMatrixPropertiesKHR(prefix, in_info) vk_print_VkPhysicalDeviceCooperativeMatrixPropertiesKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkBindMemoryStatusKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkBindMemoryStatusKHR *in_info);
#define VK_PRINT_VkBindMemoryStatusKHR(prefix, in_info) vk_print_VkBindMemoryStatusKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkBindDescriptorSetsInfoKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkBindDescriptorSetsInfoKHR *in_info);
#define VK_PRINT_VkBindDescriptorSetsInfoKHR(prefix, in_info) vk_print_VkBindDescriptorSetsInfoKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPushConstantsInfoKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkPushConstantsInfoKHR *in_info);
#define VK_PRINT_VkPushConstantsInfoKHR(prefix, in_info) vk_print_VkPushConstantsInfoKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPushDescriptorSetInfoKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkPushDescriptorSetInfoKHR *in_info);
#define VK_PRINT_VkPushDescriptorSetInfoKHR(prefix, in_info) vk_print_VkPushDescriptorSetInfoKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPushDescriptorSetWithTemplateInfoKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkPushDescriptorSetWithTemplateInfoKHR *in_info);
#define VK_PRINT_VkPushDescriptorSetWithTemplateInfoKHR(prefix, in_info) vk_print_VkPushDescriptorSetWithTemplateInfoKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkSetDescriptorBufferOffsetsInfoEXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkSetDescriptorBufferOffsetsInfoEXT *in_info);
#define VK_PRINT_VkSetDescriptorBufferOffsetsInfoEXT(prefix, in_info) vk_print_VkSetDescriptorBufferOffsetsInfoEXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkBindDescriptorBufferEmbeddedSamplersInfoEXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkBindDescriptorBufferEmbeddedSamplersInfoEXT *in_info);
#define VK_PRINT_VkBindDescriptorBufferEmbeddedSamplersInfoEXT(prefix, in_info) vk_print_VkBindDescriptorBufferEmbeddedSamplersInfoEXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceCubicClampFeaturesQCOM(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceCubicClampFeaturesQCOM *in_info);
#define VK_PRINT_VkPhysicalDeviceCubicClampFeaturesQCOM(prefix, in_info) vk_print_VkPhysicalDeviceCubicClampFeaturesQCOM(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceYcbcrDegammaFeaturesQCOM(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceYcbcrDegammaFeaturesQCOM *in_info);
#define VK_PRINT_VkPhysicalDeviceYcbcrDegammaFeaturesQCOM(prefix, in_info) vk_print_VkPhysicalDeviceYcbcrDegammaFeaturesQCOM(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkSamplerYcbcrConversionYcbcrDegammaCreateInfoQCOM(int can_log_level, int log_level, FILE*, const char* prefix, const VkSamplerYcbcrConversionYcbcrDegammaCreateInfoQCOM *in_info);
#define VK_PRINT_VkSamplerYcbcrConversionYcbcrDegammaCreateInfoQCOM(prefix, in_info) vk_print_VkSamplerYcbcrConversionYcbcrDegammaCreateInfoQCOM(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceCubicWeightsFeaturesQCOM(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceCubicWeightsFeaturesQCOM *in_info);
#define VK_PRINT_VkPhysicalDeviceCubicWeightsFeaturesQCOM(prefix, in_info) vk_print_VkPhysicalDeviceCubicWeightsFeaturesQCOM(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkSamplerCubicWeightsCreateInfoQCOM(int can_log_level, int log_level, FILE*, const char* prefix, const VkSamplerCubicWeightsCreateInfoQCOM *in_info);
#define VK_PRINT_VkSamplerCubicWeightsCreateInfoQCOM(prefix, in_info) vk_print_VkSamplerCubicWeightsCreateInfoQCOM(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkBlitImageCubicWeightsInfoQCOM(int can_log_level, int log_level, FILE*, const char* prefix, const VkBlitImageCubicWeightsInfoQCOM *in_info);
#define VK_PRINT_VkBlitImageCubicWeightsInfoQCOM(prefix, in_info) vk_print_VkBlitImageCubicWeightsInfoQCOM(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceImageProcessing2FeaturesQCOM(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceImageProcessing2FeaturesQCOM *in_info);
#define VK_PRINT_VkPhysicalDeviceImageProcessing2FeaturesQCOM(prefix, in_info) vk_print_VkPhysicalDeviceImageProcessing2FeaturesQCOM(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceImageProcessing2PropertiesQCOM(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceImageProcessing2PropertiesQCOM *in_info);
#define VK_PRINT_VkPhysicalDeviceImageProcessing2PropertiesQCOM(prefix, in_info) vk_print_VkPhysicalDeviceImageProcessing2PropertiesQCOM(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkSamplerBlockMatchWindowCreateInfoQCOM(int can_log_level, int log_level, FILE*, const char* prefix, const VkSamplerBlockMatchWindowCreateInfoQCOM *in_info);
#define VK_PRINT_VkSamplerBlockMatchWindowCreateInfoQCOM(prefix, in_info) vk_print_VkSamplerBlockMatchWindowCreateInfoQCOM(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceDescriptorPoolOverallocationFeaturesNV(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceDescriptorPoolOverallocationFeaturesNV *in_info);
#define VK_PRINT_VkPhysicalDeviceDescriptorPoolOverallocationFeaturesNV(prefix, in_info) vk_print_VkPhysicalDeviceDescriptorPoolOverallocationFeaturesNV(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceLayeredDriverPropertiesMSFT(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceLayeredDriverPropertiesMSFT *in_info);
#define VK_PRINT_VkPhysicalDeviceLayeredDriverPropertiesMSFT(prefix, in_info) vk_print_VkPhysicalDeviceLayeredDriverPropertiesMSFT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDevicePerStageDescriptorSetFeaturesNV(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDevicePerStageDescriptorSetFeaturesNV *in_info);
#define VK_PRINT_VkPhysicalDevicePerStageDescriptorSetFeaturesNV(prefix, in_info) vk_print_VkPhysicalDevicePerStageDescriptorSetFeaturesNV(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceExternalFormatResolveFeaturesANDROID(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceExternalFormatResolveFeaturesANDROID *in_info);
#define VK_PRINT_VkPhysicalDeviceExternalFormatResolveFeaturesANDROID(prefix, in_info) vk_print_VkPhysicalDeviceExternalFormatResolveFeaturesANDROID(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceExternalFormatResolvePropertiesANDROID(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceExternalFormatResolvePropertiesANDROID *in_info);
#define VK_PRINT_VkPhysicalDeviceExternalFormatResolvePropertiesANDROID(prefix, in_info) vk_print_VkPhysicalDeviceExternalFormatResolvePropertiesANDROID(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkAndroidHardwareBufferFormatResolvePropertiesANDROID(int can_log_level, int log_level, FILE*, const char* prefix, const VkAndroidHardwareBufferFormatResolvePropertiesANDROID *in_info);
#define VK_PRINT_VkAndroidHardwareBufferFormatResolvePropertiesANDROID(prefix, in_info) vk_print_VkAndroidHardwareBufferFormatResolvePropertiesANDROID(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkLatencySleepModeInfoNV(int can_log_level, int log_level, FILE*, const char* prefix, const VkLatencySleepModeInfoNV *in_info);
#define VK_PRINT_VkLatencySleepModeInfoNV(prefix, in_info) vk_print_VkLatencySleepModeInfoNV(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkLatencySleepInfoNV(int can_log_level, int log_level, FILE*, const char* prefix, const VkLatencySleepInfoNV *in_info);
#define VK_PRINT_VkLatencySleepInfoNV(prefix, in_info) vk_print_VkLatencySleepInfoNV(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkSetLatencyMarkerInfoNV(int can_log_level, int log_level, FILE*, const char* prefix, const VkSetLatencyMarkerInfoNV *in_info);
#define VK_PRINT_VkSetLatencyMarkerInfoNV(prefix, in_info) vk_print_VkSetLatencyMarkerInfoNV(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkGetLatencyMarkerInfoNV(int can_log_level, int log_level, FILE*, const char* prefix, const VkGetLatencyMarkerInfoNV *in_info);
#define VK_PRINT_VkGetLatencyMarkerInfoNV(prefix, in_info) vk_print_VkGetLatencyMarkerInfoNV(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkLatencyTimingsFrameReportNV(int can_log_level, int log_level, FILE*, const char* prefix, const VkLatencyTimingsFrameReportNV *in_info);
#define VK_PRINT_VkLatencyTimingsFrameReportNV(prefix, in_info) vk_print_VkLatencyTimingsFrameReportNV(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkOutOfBandQueueTypeInfoNV(int can_log_level, int log_level, FILE*, const char* prefix, const VkOutOfBandQueueTypeInfoNV *in_info);
#define VK_PRINT_VkOutOfBandQueueTypeInfoNV(prefix, in_info) vk_print_VkOutOfBandQueueTypeInfoNV(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkLatencySubmissionPresentIdNV(int can_log_level, int log_level, FILE*, const char* prefix, const VkLatencySubmissionPresentIdNV *in_info);
#define VK_PRINT_VkLatencySubmissionPresentIdNV(prefix, in_info) vk_print_VkLatencySubmissionPresentIdNV(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkSwapchainLatencyCreateInfoNV(int can_log_level, int log_level, FILE*, const char* prefix, const VkSwapchainLatencyCreateInfoNV *in_info);
#define VK_PRINT_VkSwapchainLatencyCreateInfoNV(prefix, in_info) vk_print_VkSwapchainLatencyCreateInfoNV(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkLatencySurfaceCapabilitiesNV(int can_log_level, int log_level, FILE*, const char* prefix, const VkLatencySurfaceCapabilitiesNV *in_info);
#define VK_PRINT_VkLatencySurfaceCapabilitiesNV(prefix, in_info) vk_print_VkLatencySurfaceCapabilitiesNV(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceCudaKernelLaunchFeaturesNV(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceCudaKernelLaunchFeaturesNV *in_info);
#define VK_PRINT_VkPhysicalDeviceCudaKernelLaunchFeaturesNV(prefix, in_info) vk_print_VkPhysicalDeviceCudaKernelLaunchFeaturesNV(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceCudaKernelLaunchPropertiesNV(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceCudaKernelLaunchPropertiesNV *in_info);
#define VK_PRINT_VkPhysicalDeviceCudaKernelLaunchPropertiesNV(prefix, in_info) vk_print_VkPhysicalDeviceCudaKernelLaunchPropertiesNV(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkDeviceQueueShaderCoreControlCreateInfoARM(int can_log_level, int log_level, FILE*, const char* prefix, const VkDeviceQueueShaderCoreControlCreateInfoARM *in_info);
#define VK_PRINT_VkDeviceQueueShaderCoreControlCreateInfoARM(prefix, in_info) vk_print_VkDeviceQueueShaderCoreControlCreateInfoARM(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceSchedulingControlsFeaturesARM(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceSchedulingControlsFeaturesARM *in_info);
#define VK_PRINT_VkPhysicalDeviceSchedulingControlsFeaturesARM(prefix, in_info) vk_print_VkPhysicalDeviceSchedulingControlsFeaturesARM(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceSchedulingControlsPropertiesARM(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceSchedulingControlsPropertiesARM *in_info);
#define VK_PRINT_VkPhysicalDeviceSchedulingControlsPropertiesARM(prefix, in_info) vk_print_VkPhysicalDeviceSchedulingControlsPropertiesARM(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceRelaxedLineRasterizationFeaturesIMG(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceRelaxedLineRasterizationFeaturesIMG *in_info);
#define VK_PRINT_VkPhysicalDeviceRelaxedLineRasterizationFeaturesIMG(prefix, in_info) vk_print_VkPhysicalDeviceRelaxedLineRasterizationFeaturesIMG(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceRenderPassStripedFeaturesARM(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceRenderPassStripedFeaturesARM *in_info);
#define VK_PRINT_VkPhysicalDeviceRenderPassStripedFeaturesARM(prefix, in_info) vk_print_VkPhysicalDeviceRenderPassStripedFeaturesARM(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceRenderPassStripedPropertiesARM(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceRenderPassStripedPropertiesARM *in_info);
#define VK_PRINT_VkPhysicalDeviceRenderPassStripedPropertiesARM(prefix, in_info) vk_print_VkPhysicalDeviceRenderPassStripedPropertiesARM(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkRenderPassStripeInfoARM(int can_log_level, int log_level, FILE*, const char* prefix, const VkRenderPassStripeInfoARM *in_info);
#define VK_PRINT_VkRenderPassStripeInfoARM(prefix, in_info) vk_print_VkRenderPassStripeInfoARM(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkRenderPassStripeBeginInfoARM(int can_log_level, int log_level, FILE*, const char* prefix, const VkRenderPassStripeBeginInfoARM *in_info);
#define VK_PRINT_VkRenderPassStripeBeginInfoARM(prefix, in_info) vk_print_VkRenderPassStripeBeginInfoARM(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkRenderPassStripeSubmitInfoARM(int can_log_level, int log_level, FILE*, const char* prefix, const VkRenderPassStripeSubmitInfoARM *in_info);
#define VK_PRINT_VkRenderPassStripeSubmitInfoARM(prefix, in_info) vk_print_VkRenderPassStripeSubmitInfoARM(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceShaderMaximalReconvergenceFeaturesKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceShaderMaximalReconvergenceFeaturesKHR *in_info);
#define VK_PRINT_VkPhysicalDeviceShaderMaximalReconvergenceFeaturesKHR(prefix, in_info) vk_print_VkPhysicalDeviceShaderMaximalReconvergenceFeaturesKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceShaderSubgroupRotateFeaturesKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceShaderSubgroupRotateFeaturesKHR *in_info);
#define VK_PRINT_VkPhysicalDeviceShaderSubgroupRotateFeaturesKHR(prefix, in_info) vk_print_VkPhysicalDeviceShaderSubgroupRotateFeaturesKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceShaderExpectAssumeFeaturesKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceShaderExpectAssumeFeaturesKHR *in_info);
#define VK_PRINT_VkPhysicalDeviceShaderExpectAssumeFeaturesKHR(prefix, in_info) vk_print_VkPhysicalDeviceShaderExpectAssumeFeaturesKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceShaderFloatControls2FeaturesKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceShaderFloatControls2FeaturesKHR *in_info);
#define VK_PRINT_VkPhysicalDeviceShaderFloatControls2FeaturesKHR(prefix, in_info) vk_print_VkPhysicalDeviceShaderFloatControls2FeaturesKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceDynamicRenderingLocalReadFeaturesKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceDynamicRenderingLocalReadFeaturesKHR *in_info);
#define VK_PRINT_VkPhysicalDeviceDynamicRenderingLocalReadFeaturesKHR(prefix, in_info) vk_print_VkPhysicalDeviceDynamicRenderingLocalReadFeaturesKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkRenderingAttachmentLocationInfoKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkRenderingAttachmentLocationInfoKHR *in_info);
#define VK_PRINT_VkRenderingAttachmentLocationInfoKHR(prefix, in_info) vk_print_VkRenderingAttachmentLocationInfoKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkRenderingInputAttachmentIndexInfoKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkRenderingInputAttachmentIndexInfoKHR *in_info);
#define VK_PRINT_VkRenderingInputAttachmentIndexInfoKHR(prefix, in_info) vk_print_VkRenderingInputAttachmentIndexInfoKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceShaderQuadControlFeaturesKHR(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceShaderQuadControlFeaturesKHR *in_info);
#define VK_PRINT_VkPhysicalDeviceShaderQuadControlFeaturesKHR(prefix, in_info) vk_print_VkPhysicalDeviceShaderQuadControlFeaturesKHR(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceShaderAtomicFloat16VectorFeaturesNV(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceShaderAtomicFloat16VectorFeaturesNV *in_info);
#define VK_PRINT_VkPhysicalDeviceShaderAtomicFloat16VectorFeaturesNV(prefix, in_info) vk_print_VkPhysicalDeviceShaderAtomicFloat16VectorFeaturesNV(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceMapMemoryPlacedFeaturesEXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceMapMemoryPlacedFeaturesEXT *in_info);
#define VK_PRINT_VkPhysicalDeviceMapMemoryPlacedFeaturesEXT(prefix, in_info) vk_print_VkPhysicalDeviceMapMemoryPlacedFeaturesEXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceMapMemoryPlacedPropertiesEXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceMapMemoryPlacedPropertiesEXT *in_info);
#define VK_PRINT_VkPhysicalDeviceMapMemoryPlacedPropertiesEXT(prefix, in_info) vk_print_VkPhysicalDeviceMapMemoryPlacedPropertiesEXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkMemoryMapPlacedInfoEXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkMemoryMapPlacedInfoEXT *in_info);
#define VK_PRINT_VkMemoryMapPlacedInfoEXT(prefix, in_info) vk_print_VkMemoryMapPlacedInfoEXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceRawAccessChainsFeaturesNV(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceRawAccessChainsFeaturesNV *in_info);
#define VK_PRINT_VkPhysicalDeviceRawAccessChainsFeaturesNV(prefix, in_info) vk_print_VkPhysicalDeviceRawAccessChainsFeaturesNV(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceImageAlignmentControlFeaturesMESA(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceImageAlignmentControlFeaturesMESA *in_info);
#define VK_PRINT_VkPhysicalDeviceImageAlignmentControlFeaturesMESA(prefix, in_info) vk_print_VkPhysicalDeviceImageAlignmentControlFeaturesMESA(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceImageAlignmentControlPropertiesMESA(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceImageAlignmentControlPropertiesMESA *in_info);
#define VK_PRINT_VkPhysicalDeviceImageAlignmentControlPropertiesMESA(prefix, in_info) vk_print_VkPhysicalDeviceImageAlignmentControlPropertiesMESA(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkImageAlignmentControlCreateInfoMESA(int can_log_level, int log_level, FILE*, const char* prefix, const VkImageAlignmentControlCreateInfoMESA *in_info);
#define VK_PRINT_VkImageAlignmentControlCreateInfoMESA(prefix, in_info) vk_print_VkImageAlignmentControlCreateInfoMESA(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)
void vk_print_VkPhysicalDeviceShaderReplicatedCompositesFeaturesEXT(int can_log_level, int log_level, FILE*, const char* prefix, const VkPhysicalDeviceShaderReplicatedCompositesFeaturesEXT *in_info);
#define VK_PRINT_VkPhysicalDeviceShaderReplicatedCompositesFeaturesEXT(prefix, in_info) vk_print_VkPhysicalDeviceShaderReplicatedCompositesFeaturesEXT(VK_CMD_CAN_LOG_LEVEL, VK_CMD_ALL, __cmd_log_fd, prefix, in_info)

#ifdef __cplusplus
}
#endif

#endif /* VK_PRINTER_H */