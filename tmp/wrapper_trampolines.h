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

#ifndef WRAPPER_TRAMPOLINES_H
#define WRAPPER_TRAMPOLINES_H

#include "vk_dispatch_table.h"
#include "wrapper_checks.h"

#ifdef __cplusplus
extern "C" {
#endif

extern struct vk_physical_device_entrypoint_table wrapper_physical_device_trampolines;
extern struct vk_device_entrypoint_table wrapper_device_trampolines;

struct wrapper_entry_masks {
    uint64_t f0, f1, f2, f3, f4, f5, f6, f7, f8, f9, f10, f11, f12, f13, f14, f15;
};

extern struct wrapper_entry_masks wrapper_printer_masks;

#define VK_ID_CreateInstance 0
#define IS_VK_ID_CreateInstance_ON(masks) (((masks).f0 & (1ULL << (0))) != 0)
#define SET_VK_ID_CreateInstance_ON(masks) (masks).f0 |= (1ULL << (0))
#define VK_ID_CreateInstance_BIT (1ULL << (0))
#define VK_ID_CreateInstance_IDX (0)

#define PRINT_CreateInstance IS_VK_ID_CreateInstance_ON(wrapper_printer_masks)
#define TRY_CreateInstance(TRUE, FALSE) TRUE
#define has_device_wrapper_CreateInstance(...) (wrapper_device_entrypoints.CreateInstance)
#define has_physical_device_wrapper_CreateInstance(...) (wrapper_physical_device_entrypoints.CreateInstance)
#define name_of_wrapper_CreateInstance(...) "wrapper_CreateInstance"
#define VK_ID_DestroyInstance 1
#define IS_VK_ID_DestroyInstance_ON(masks) (((masks).f0 & (1ULL << (1))) != 0)
#define SET_VK_ID_DestroyInstance_ON(masks) (masks).f0 |= (1ULL << (1))
#define VK_ID_DestroyInstance_BIT (1ULL << (1))
#define VK_ID_DestroyInstance_IDX (0)

#define PRINT_DestroyInstance IS_VK_ID_DestroyInstance_ON(wrapper_printer_masks)
#define TRY_DestroyInstance(TRUE, FALSE) TRUE
#define has_device_wrapper_DestroyInstance(...) (wrapper_device_entrypoints.DestroyInstance)
#define has_physical_device_wrapper_DestroyInstance(...) (wrapper_physical_device_entrypoints.DestroyInstance)
#define name_of_wrapper_DestroyInstance(...) "wrapper_DestroyInstance"
#define VK_ID_EnumeratePhysicalDevices 2
#define IS_VK_ID_EnumeratePhysicalDevices_ON(masks) (((masks).f0 & (1ULL << (2))) != 0)
#define SET_VK_ID_EnumeratePhysicalDevices_ON(masks) (masks).f0 |= (1ULL << (2))
#define VK_ID_EnumeratePhysicalDevices_BIT (1ULL << (2))
#define VK_ID_EnumeratePhysicalDevices_IDX (0)

#define PRINT_EnumeratePhysicalDevices IS_VK_ID_EnumeratePhysicalDevices_ON(wrapper_printer_masks)
#define TRY_EnumeratePhysicalDevices(TRUE, FALSE) TRUE
#define has_device_wrapper_EnumeratePhysicalDevices(...) (wrapper_device_entrypoints.EnumeratePhysicalDevices)
#define has_physical_device_wrapper_EnumeratePhysicalDevices(...) (wrapper_physical_device_entrypoints.EnumeratePhysicalDevices)
#define name_of_wrapper_EnumeratePhysicalDevices(...) "wrapper_EnumeratePhysicalDevices"
#define VK_ID_GetDeviceProcAddr 3
#define IS_VK_ID_GetDeviceProcAddr_ON(masks) (((masks).f0 & (1ULL << (3))) != 0)
#define SET_VK_ID_GetDeviceProcAddr_ON(masks) (masks).f0 |= (1ULL << (3))
#define VK_ID_GetDeviceProcAddr_BIT (1ULL << (3))
#define VK_ID_GetDeviceProcAddr_IDX (0)

#define PRINT_GetDeviceProcAddr IS_VK_ID_GetDeviceProcAddr_ON(wrapper_printer_masks)
#define TRY_GetDeviceProcAddr(TRUE, FALSE) TRUE
#define has_device_wrapper_GetDeviceProcAddr(...) (wrapper_device_entrypoints.GetDeviceProcAddr)
#define has_physical_device_wrapper_GetDeviceProcAddr(...) (wrapper_physical_device_entrypoints.GetDeviceProcAddr)
#define name_of_wrapper_GetDeviceProcAddr(...) "wrapper_GetDeviceProcAddr"
#define VK_ID_GetInstanceProcAddr 4
#define IS_VK_ID_GetInstanceProcAddr_ON(masks) (((masks).f0 & (1ULL << (4))) != 0)
#define SET_VK_ID_GetInstanceProcAddr_ON(masks) (masks).f0 |= (1ULL << (4))
#define VK_ID_GetInstanceProcAddr_BIT (1ULL << (4))
#define VK_ID_GetInstanceProcAddr_IDX (0)

#define PRINT_GetInstanceProcAddr IS_VK_ID_GetInstanceProcAddr_ON(wrapper_printer_masks)
#define TRY_GetInstanceProcAddr(TRUE, FALSE) TRUE
#define has_device_wrapper_GetInstanceProcAddr(...) (wrapper_device_entrypoints.GetInstanceProcAddr)
#define has_physical_device_wrapper_GetInstanceProcAddr(...) (wrapper_physical_device_entrypoints.GetInstanceProcAddr)
#define name_of_wrapper_GetInstanceProcAddr(...) "wrapper_GetInstanceProcAddr"
#define VK_ID_GetPhysicalDeviceProperties 5
#define IS_VK_ID_GetPhysicalDeviceProperties_ON(masks) (((masks).f0 & (1ULL << (5))) != 0)
#define SET_VK_ID_GetPhysicalDeviceProperties_ON(masks) (masks).f0 |= (1ULL << (5))
#define VK_ID_GetPhysicalDeviceProperties_BIT (1ULL << (5))
#define VK_ID_GetPhysicalDeviceProperties_IDX (0)

#define PRINT_GetPhysicalDeviceProperties IS_VK_ID_GetPhysicalDeviceProperties_ON(wrapper_printer_masks)
#define TRY_GetPhysicalDeviceProperties(TRUE, FALSE) TRUE
#define has_device_wrapper_GetPhysicalDeviceProperties(...) (wrapper_device_entrypoints.GetPhysicalDeviceProperties)
#define has_physical_device_wrapper_GetPhysicalDeviceProperties(...) (wrapper_physical_device_entrypoints.GetPhysicalDeviceProperties)
#define name_of_wrapper_GetPhysicalDeviceProperties(...) "wrapper_GetPhysicalDeviceProperties"
#define VK_ID_GetPhysicalDeviceQueueFamilyProperties 6
#define IS_VK_ID_GetPhysicalDeviceQueueFamilyProperties_ON(masks) (((masks).f0 & (1ULL << (6))) != 0)
#define SET_VK_ID_GetPhysicalDeviceQueueFamilyProperties_ON(masks) (masks).f0 |= (1ULL << (6))
#define VK_ID_GetPhysicalDeviceQueueFamilyProperties_BIT (1ULL << (6))
#define VK_ID_GetPhysicalDeviceQueueFamilyProperties_IDX (0)

#define PRINT_GetPhysicalDeviceQueueFamilyProperties IS_VK_ID_GetPhysicalDeviceQueueFamilyProperties_ON(wrapper_printer_masks)
#define TRY_GetPhysicalDeviceQueueFamilyProperties(TRUE, FALSE) TRUE
#define has_device_wrapper_GetPhysicalDeviceQueueFamilyProperties(...) (wrapper_device_entrypoints.GetPhysicalDeviceQueueFamilyProperties)
#define has_physical_device_wrapper_GetPhysicalDeviceQueueFamilyProperties(...) (wrapper_physical_device_entrypoints.GetPhysicalDeviceQueueFamilyProperties)
#define name_of_wrapper_GetPhysicalDeviceQueueFamilyProperties(...) "wrapper_GetPhysicalDeviceQueueFamilyProperties"
#define VK_ID_GetPhysicalDeviceMemoryProperties 7
#define IS_VK_ID_GetPhysicalDeviceMemoryProperties_ON(masks) (((masks).f0 & (1ULL << (7))) != 0)
#define SET_VK_ID_GetPhysicalDeviceMemoryProperties_ON(masks) (masks).f0 |= (1ULL << (7))
#define VK_ID_GetPhysicalDeviceMemoryProperties_BIT (1ULL << (7))
#define VK_ID_GetPhysicalDeviceMemoryProperties_IDX (0)

#define PRINT_GetPhysicalDeviceMemoryProperties IS_VK_ID_GetPhysicalDeviceMemoryProperties_ON(wrapper_printer_masks)
#define TRY_GetPhysicalDeviceMemoryProperties(TRUE, FALSE) TRUE
#define has_device_wrapper_GetPhysicalDeviceMemoryProperties(...) (wrapper_device_entrypoints.GetPhysicalDeviceMemoryProperties)
#define has_physical_device_wrapper_GetPhysicalDeviceMemoryProperties(...) (wrapper_physical_device_entrypoints.GetPhysicalDeviceMemoryProperties)
#define name_of_wrapper_GetPhysicalDeviceMemoryProperties(...) "wrapper_GetPhysicalDeviceMemoryProperties"
#define VK_ID_GetPhysicalDeviceFeatures 8
#define IS_VK_ID_GetPhysicalDeviceFeatures_ON(masks) (((masks).f0 & (1ULL << (8))) != 0)
#define SET_VK_ID_GetPhysicalDeviceFeatures_ON(masks) (masks).f0 |= (1ULL << (8))
#define VK_ID_GetPhysicalDeviceFeatures_BIT (1ULL << (8))
#define VK_ID_GetPhysicalDeviceFeatures_IDX (0)

#define PRINT_GetPhysicalDeviceFeatures IS_VK_ID_GetPhysicalDeviceFeatures_ON(wrapper_printer_masks)
#define TRY_GetPhysicalDeviceFeatures(TRUE, FALSE) TRUE
#define has_device_wrapper_GetPhysicalDeviceFeatures(...) (wrapper_device_entrypoints.GetPhysicalDeviceFeatures)
#define has_physical_device_wrapper_GetPhysicalDeviceFeatures(...) (wrapper_physical_device_entrypoints.GetPhysicalDeviceFeatures)
#define name_of_wrapper_GetPhysicalDeviceFeatures(...) "wrapper_GetPhysicalDeviceFeatures"
#define VK_ID_GetPhysicalDeviceFormatProperties 9
#define IS_VK_ID_GetPhysicalDeviceFormatProperties_ON(masks) (((masks).f0 & (1ULL << (9))) != 0)
#define SET_VK_ID_GetPhysicalDeviceFormatProperties_ON(masks) (masks).f0 |= (1ULL << (9))
#define VK_ID_GetPhysicalDeviceFormatProperties_BIT (1ULL << (9))
#define VK_ID_GetPhysicalDeviceFormatProperties_IDX (0)

#define PRINT_GetPhysicalDeviceFormatProperties IS_VK_ID_GetPhysicalDeviceFormatProperties_ON(wrapper_printer_masks)
#define TRY_GetPhysicalDeviceFormatProperties(TRUE, FALSE) TRUE
#define has_device_wrapper_GetPhysicalDeviceFormatProperties(...) (wrapper_device_entrypoints.GetPhysicalDeviceFormatProperties)
#define has_physical_device_wrapper_GetPhysicalDeviceFormatProperties(...) (wrapper_physical_device_entrypoints.GetPhysicalDeviceFormatProperties)
#define name_of_wrapper_GetPhysicalDeviceFormatProperties(...) "wrapper_GetPhysicalDeviceFormatProperties"
#define VK_ID_GetPhysicalDeviceImageFormatProperties 10
#define IS_VK_ID_GetPhysicalDeviceImageFormatProperties_ON(masks) (((masks).f0 & (1ULL << (10))) != 0)
#define SET_VK_ID_GetPhysicalDeviceImageFormatProperties_ON(masks) (masks).f0 |= (1ULL << (10))
#define VK_ID_GetPhysicalDeviceImageFormatProperties_BIT (1ULL << (10))
#define VK_ID_GetPhysicalDeviceImageFormatProperties_IDX (0)

#define PRINT_GetPhysicalDeviceImageFormatProperties IS_VK_ID_GetPhysicalDeviceImageFormatProperties_ON(wrapper_printer_masks)
#define TRY_GetPhysicalDeviceImageFormatProperties(TRUE, FALSE) TRUE
#define has_device_wrapper_GetPhysicalDeviceImageFormatProperties(...) (wrapper_device_entrypoints.GetPhysicalDeviceImageFormatProperties)
#define has_physical_device_wrapper_GetPhysicalDeviceImageFormatProperties(...) (wrapper_physical_device_entrypoints.GetPhysicalDeviceImageFormatProperties)
#define name_of_wrapper_GetPhysicalDeviceImageFormatProperties(...) "wrapper_GetPhysicalDeviceImageFormatProperties"
#define VK_ID_CreateDevice 11
#define IS_VK_ID_CreateDevice_ON(masks) (((masks).f0 & (1ULL << (11))) != 0)
#define SET_VK_ID_CreateDevice_ON(masks) (masks).f0 |= (1ULL << (11))
#define VK_ID_CreateDevice_BIT (1ULL << (11))
#define VK_ID_CreateDevice_IDX (0)

#define PRINT_CreateDevice IS_VK_ID_CreateDevice_ON(wrapper_printer_masks)
#define TRY_CreateDevice(TRUE, FALSE) TRUE
#define has_device_wrapper_CreateDevice(...) (wrapper_device_entrypoints.CreateDevice)
#define has_physical_device_wrapper_CreateDevice(...) (wrapper_physical_device_entrypoints.CreateDevice)
#define name_of_wrapper_CreateDevice(...) "wrapper_CreateDevice"
#define VK_ID_DestroyDevice 12
#define IS_VK_ID_DestroyDevice_ON(masks) (((masks).f0 & (1ULL << (12))) != 0)
#define SET_VK_ID_DestroyDevice_ON(masks) (masks).f0 |= (1ULL << (12))
#define VK_ID_DestroyDevice_BIT (1ULL << (12))
#define VK_ID_DestroyDevice_IDX (0)

#define PRINT_DestroyDevice IS_VK_ID_DestroyDevice_ON(wrapper_printer_masks)
#define TRY_DestroyDevice(TRUE, FALSE) TRUE
#define has_device_wrapper_DestroyDevice(...) (wrapper_device_entrypoints.DestroyDevice)
#define has_physical_device_wrapper_DestroyDevice(...) (wrapper_physical_device_entrypoints.DestroyDevice)
#define name_of_wrapper_DestroyDevice(...) "wrapper_DestroyDevice"
#define VK_ID_EnumerateInstanceVersion 13
#define IS_VK_ID_EnumerateInstanceVersion_ON(masks) (((masks).f0 & (1ULL << (13))) != 0)
#define SET_VK_ID_EnumerateInstanceVersion_ON(masks) (masks).f0 |= (1ULL << (13))
#define VK_ID_EnumerateInstanceVersion_BIT (1ULL << (13))
#define VK_ID_EnumerateInstanceVersion_IDX (0)

#define PRINT_EnumerateInstanceVersion IS_VK_ID_EnumerateInstanceVersion_ON(wrapper_printer_masks)
#define TRY_EnumerateInstanceVersion(TRUE, FALSE) TRUE
#define has_device_wrapper_EnumerateInstanceVersion(...) (wrapper_device_entrypoints.EnumerateInstanceVersion)
#define has_physical_device_wrapper_EnumerateInstanceVersion(...) (wrapper_physical_device_entrypoints.EnumerateInstanceVersion)
#define name_of_wrapper_EnumerateInstanceVersion(...) "wrapper_EnumerateInstanceVersion"
#define VK_ID_EnumerateInstanceLayerProperties 14
#define IS_VK_ID_EnumerateInstanceLayerProperties_ON(masks) (((masks).f0 & (1ULL << (14))) != 0)
#define SET_VK_ID_EnumerateInstanceLayerProperties_ON(masks) (masks).f0 |= (1ULL << (14))
#define VK_ID_EnumerateInstanceLayerProperties_BIT (1ULL << (14))
#define VK_ID_EnumerateInstanceLayerProperties_IDX (0)

#define PRINT_EnumerateInstanceLayerProperties IS_VK_ID_EnumerateInstanceLayerProperties_ON(wrapper_printer_masks)
#define TRY_EnumerateInstanceLayerProperties(TRUE, FALSE) TRUE
#define has_device_wrapper_EnumerateInstanceLayerProperties(...) (wrapper_device_entrypoints.EnumerateInstanceLayerProperties)
#define has_physical_device_wrapper_EnumerateInstanceLayerProperties(...) (wrapper_physical_device_entrypoints.EnumerateInstanceLayerProperties)
#define name_of_wrapper_EnumerateInstanceLayerProperties(...) "wrapper_EnumerateInstanceLayerProperties"
#define VK_ID_EnumerateInstanceExtensionProperties 15
#define IS_VK_ID_EnumerateInstanceExtensionProperties_ON(masks) (((masks).f0 & (1ULL << (15))) != 0)
#define SET_VK_ID_EnumerateInstanceExtensionProperties_ON(masks) (masks).f0 |= (1ULL << (15))
#define VK_ID_EnumerateInstanceExtensionProperties_BIT (1ULL << (15))
#define VK_ID_EnumerateInstanceExtensionProperties_IDX (0)

#define PRINT_EnumerateInstanceExtensionProperties IS_VK_ID_EnumerateInstanceExtensionProperties_ON(wrapper_printer_masks)
#define TRY_EnumerateInstanceExtensionProperties(TRUE, FALSE) TRUE
#define has_device_wrapper_EnumerateInstanceExtensionProperties(...) (wrapper_device_entrypoints.EnumerateInstanceExtensionProperties)
#define has_physical_device_wrapper_EnumerateInstanceExtensionProperties(...) (wrapper_physical_device_entrypoints.EnumerateInstanceExtensionProperties)
#define name_of_wrapper_EnumerateInstanceExtensionProperties(...) "wrapper_EnumerateInstanceExtensionProperties"
#define VK_ID_EnumerateDeviceLayerProperties 16
#define IS_VK_ID_EnumerateDeviceLayerProperties_ON(masks) (((masks).f0 & (1ULL << (16))) != 0)
#define SET_VK_ID_EnumerateDeviceLayerProperties_ON(masks) (masks).f0 |= (1ULL << (16))
#define VK_ID_EnumerateDeviceLayerProperties_BIT (1ULL << (16))
#define VK_ID_EnumerateDeviceLayerProperties_IDX (0)

#define PRINT_EnumerateDeviceLayerProperties IS_VK_ID_EnumerateDeviceLayerProperties_ON(wrapper_printer_masks)
#define TRY_EnumerateDeviceLayerProperties(TRUE, FALSE) TRUE
#define has_device_wrapper_EnumerateDeviceLayerProperties(...) (wrapper_device_entrypoints.EnumerateDeviceLayerProperties)
#define has_physical_device_wrapper_EnumerateDeviceLayerProperties(...) (wrapper_physical_device_entrypoints.EnumerateDeviceLayerProperties)
#define name_of_wrapper_EnumerateDeviceLayerProperties(...) "wrapper_EnumerateDeviceLayerProperties"
#define VK_ID_EnumerateDeviceExtensionProperties 17
#define IS_VK_ID_EnumerateDeviceExtensionProperties_ON(masks) (((masks).f0 & (1ULL << (17))) != 0)
#define SET_VK_ID_EnumerateDeviceExtensionProperties_ON(masks) (masks).f0 |= (1ULL << (17))
#define VK_ID_EnumerateDeviceExtensionProperties_BIT (1ULL << (17))
#define VK_ID_EnumerateDeviceExtensionProperties_IDX (0)

#define PRINT_EnumerateDeviceExtensionProperties IS_VK_ID_EnumerateDeviceExtensionProperties_ON(wrapper_printer_masks)
#define TRY_EnumerateDeviceExtensionProperties(TRUE, FALSE) TRUE
#define has_device_wrapper_EnumerateDeviceExtensionProperties(...) (wrapper_device_entrypoints.EnumerateDeviceExtensionProperties)
#define has_physical_device_wrapper_EnumerateDeviceExtensionProperties(...) (wrapper_physical_device_entrypoints.EnumerateDeviceExtensionProperties)
#define name_of_wrapper_EnumerateDeviceExtensionProperties(...) "wrapper_EnumerateDeviceExtensionProperties"
#define VK_ID_GetDeviceQueue 18
#define IS_VK_ID_GetDeviceQueue_ON(masks) (((masks).f0 & (1ULL << (18))) != 0)
#define SET_VK_ID_GetDeviceQueue_ON(masks) (masks).f0 |= (1ULL << (18))
#define VK_ID_GetDeviceQueue_BIT (1ULL << (18))
#define VK_ID_GetDeviceQueue_IDX (0)

#define PRINT_GetDeviceQueue IS_VK_ID_GetDeviceQueue_ON(wrapper_printer_masks)
#define TRY_GetDeviceQueue(TRUE, FALSE) TRUE
#define has_device_wrapper_GetDeviceQueue(...) (wrapper_device_entrypoints.GetDeviceQueue)
#define has_physical_device_wrapper_GetDeviceQueue(...) (wrapper_physical_device_entrypoints.GetDeviceQueue)
#define name_of_wrapper_GetDeviceQueue(...) "wrapper_GetDeviceQueue"
#define VK_ID_QueueSubmit 19
#define IS_VK_ID_QueueSubmit_ON(masks) (((masks).f0 & (1ULL << (19))) != 0)
#define SET_VK_ID_QueueSubmit_ON(masks) (masks).f0 |= (1ULL << (19))
#define VK_ID_QueueSubmit_BIT (1ULL << (19))
#define VK_ID_QueueSubmit_IDX (0)

#define PRINT_QueueSubmit IS_VK_ID_QueueSubmit_ON(wrapper_printer_masks)
#define TRY_QueueSubmit(TRUE, FALSE) TRUE
#define has_device_wrapper_QueueSubmit(...) (wrapper_device_entrypoints.QueueSubmit)
#define has_physical_device_wrapper_QueueSubmit(...) (wrapper_physical_device_entrypoints.QueueSubmit)
#define name_of_wrapper_QueueSubmit(...) "wrapper_QueueSubmit"
#define VK_ID_QueueWaitIdle 20
#define IS_VK_ID_QueueWaitIdle_ON(masks) (((masks).f0 & (1ULL << (20))) != 0)
#define SET_VK_ID_QueueWaitIdle_ON(masks) (masks).f0 |= (1ULL << (20))
#define VK_ID_QueueWaitIdle_BIT (1ULL << (20))
#define VK_ID_QueueWaitIdle_IDX (0)

#define PRINT_QueueWaitIdle IS_VK_ID_QueueWaitIdle_ON(wrapper_printer_masks)
#define TRY_QueueWaitIdle(TRUE, FALSE) TRUE
#define has_device_wrapper_QueueWaitIdle(...) (wrapper_device_entrypoints.QueueWaitIdle)
#define has_physical_device_wrapper_QueueWaitIdle(...) (wrapper_physical_device_entrypoints.QueueWaitIdle)
#define name_of_wrapper_QueueWaitIdle(...) "wrapper_QueueWaitIdle"
#define VK_ID_DeviceWaitIdle 21
#define IS_VK_ID_DeviceWaitIdle_ON(masks) (((masks).f0 & (1ULL << (21))) != 0)
#define SET_VK_ID_DeviceWaitIdle_ON(masks) (masks).f0 |= (1ULL << (21))
#define VK_ID_DeviceWaitIdle_BIT (1ULL << (21))
#define VK_ID_DeviceWaitIdle_IDX (0)

#define PRINT_DeviceWaitIdle IS_VK_ID_DeviceWaitIdle_ON(wrapper_printer_masks)
#define TRY_DeviceWaitIdle(TRUE, FALSE) TRUE
#define has_device_wrapper_DeviceWaitIdle(...) (wrapper_device_entrypoints.DeviceWaitIdle)
#define has_physical_device_wrapper_DeviceWaitIdle(...) (wrapper_physical_device_entrypoints.DeviceWaitIdle)
#define name_of_wrapper_DeviceWaitIdle(...) "wrapper_DeviceWaitIdle"
#define VK_ID_AllocateMemory 22
#define IS_VK_ID_AllocateMemory_ON(masks) (((masks).f0 & (1ULL << (22))) != 0)
#define SET_VK_ID_AllocateMemory_ON(masks) (masks).f0 |= (1ULL << (22))
#define VK_ID_AllocateMemory_BIT (1ULL << (22))
#define VK_ID_AllocateMemory_IDX (0)

#define PRINT_AllocateMemory IS_VK_ID_AllocateMemory_ON(wrapper_printer_masks)
#define TRY_AllocateMemory(TRUE, FALSE) TRUE
#define has_device_wrapper_AllocateMemory(...) (wrapper_device_entrypoints.AllocateMemory)
#define has_physical_device_wrapper_AllocateMemory(...) (wrapper_physical_device_entrypoints.AllocateMemory)
#define name_of_wrapper_AllocateMemory(...) "wrapper_AllocateMemory"
#define VK_ID_FreeMemory 23
#define IS_VK_ID_FreeMemory_ON(masks) (((masks).f0 & (1ULL << (23))) != 0)
#define SET_VK_ID_FreeMemory_ON(masks) (masks).f0 |= (1ULL << (23))
#define VK_ID_FreeMemory_BIT (1ULL << (23))
#define VK_ID_FreeMemory_IDX (0)

#define PRINT_FreeMemory IS_VK_ID_FreeMemory_ON(wrapper_printer_masks)
#define TRY_FreeMemory(TRUE, FALSE) TRUE
#define has_device_wrapper_FreeMemory(...) (wrapper_device_entrypoints.FreeMemory)
#define has_physical_device_wrapper_FreeMemory(...) (wrapper_physical_device_entrypoints.FreeMemory)
#define name_of_wrapper_FreeMemory(...) "wrapper_FreeMemory"
#define VK_ID_MapMemory 24
#define IS_VK_ID_MapMemory_ON(masks) (((masks).f0 & (1ULL << (24))) != 0)
#define SET_VK_ID_MapMemory_ON(masks) (masks).f0 |= (1ULL << (24))
#define VK_ID_MapMemory_BIT (1ULL << (24))
#define VK_ID_MapMemory_IDX (0)

#define PRINT_MapMemory IS_VK_ID_MapMemory_ON(wrapper_printer_masks)
#define TRY_MapMemory(TRUE, FALSE) TRUE
#define has_device_wrapper_MapMemory(...) (wrapper_device_entrypoints.MapMemory)
#define has_physical_device_wrapper_MapMemory(...) (wrapper_physical_device_entrypoints.MapMemory)
#define name_of_wrapper_MapMemory(...) "wrapper_MapMemory"
#define VK_ID_UnmapMemory 25
#define IS_VK_ID_UnmapMemory_ON(masks) (((masks).f0 & (1ULL << (25))) != 0)
#define SET_VK_ID_UnmapMemory_ON(masks) (masks).f0 |= (1ULL << (25))
#define VK_ID_UnmapMemory_BIT (1ULL << (25))
#define VK_ID_UnmapMemory_IDX (0)

#define PRINT_UnmapMemory IS_VK_ID_UnmapMemory_ON(wrapper_printer_masks)
#define TRY_UnmapMemory(TRUE, FALSE) TRUE
#define has_device_wrapper_UnmapMemory(...) (wrapper_device_entrypoints.UnmapMemory)
#define has_physical_device_wrapper_UnmapMemory(...) (wrapper_physical_device_entrypoints.UnmapMemory)
#define name_of_wrapper_UnmapMemory(...) "wrapper_UnmapMemory"
#define VK_ID_FlushMappedMemoryRanges 26
#define IS_VK_ID_FlushMappedMemoryRanges_ON(masks) (((masks).f0 & (1ULL << (26))) != 0)
#define SET_VK_ID_FlushMappedMemoryRanges_ON(masks) (masks).f0 |= (1ULL << (26))
#define VK_ID_FlushMappedMemoryRanges_BIT (1ULL << (26))
#define VK_ID_FlushMappedMemoryRanges_IDX (0)

#define PRINT_FlushMappedMemoryRanges IS_VK_ID_FlushMappedMemoryRanges_ON(wrapper_printer_masks)
#define TRY_FlushMappedMemoryRanges(TRUE, FALSE) TRUE
#define has_device_wrapper_FlushMappedMemoryRanges(...) (wrapper_device_entrypoints.FlushMappedMemoryRanges)
#define has_physical_device_wrapper_FlushMappedMemoryRanges(...) (wrapper_physical_device_entrypoints.FlushMappedMemoryRanges)
#define name_of_wrapper_FlushMappedMemoryRanges(...) "wrapper_FlushMappedMemoryRanges"
#define VK_ID_InvalidateMappedMemoryRanges 27
#define IS_VK_ID_InvalidateMappedMemoryRanges_ON(masks) (((masks).f0 & (1ULL << (27))) != 0)
#define SET_VK_ID_InvalidateMappedMemoryRanges_ON(masks) (masks).f0 |= (1ULL << (27))
#define VK_ID_InvalidateMappedMemoryRanges_BIT (1ULL << (27))
#define VK_ID_InvalidateMappedMemoryRanges_IDX (0)

#define PRINT_InvalidateMappedMemoryRanges IS_VK_ID_InvalidateMappedMemoryRanges_ON(wrapper_printer_masks)
#define TRY_InvalidateMappedMemoryRanges(TRUE, FALSE) TRUE
#define has_device_wrapper_InvalidateMappedMemoryRanges(...) (wrapper_device_entrypoints.InvalidateMappedMemoryRanges)
#define has_physical_device_wrapper_InvalidateMappedMemoryRanges(...) (wrapper_physical_device_entrypoints.InvalidateMappedMemoryRanges)
#define name_of_wrapper_InvalidateMappedMemoryRanges(...) "wrapper_InvalidateMappedMemoryRanges"
#define VK_ID_GetDeviceMemoryCommitment 28
#define IS_VK_ID_GetDeviceMemoryCommitment_ON(masks) (((masks).f0 & (1ULL << (28))) != 0)
#define SET_VK_ID_GetDeviceMemoryCommitment_ON(masks) (masks).f0 |= (1ULL << (28))
#define VK_ID_GetDeviceMemoryCommitment_BIT (1ULL << (28))
#define VK_ID_GetDeviceMemoryCommitment_IDX (0)

#define PRINT_GetDeviceMemoryCommitment IS_VK_ID_GetDeviceMemoryCommitment_ON(wrapper_printer_masks)
#define TRY_GetDeviceMemoryCommitment(TRUE, FALSE) TRUE
#define has_device_wrapper_GetDeviceMemoryCommitment(...) (wrapper_device_entrypoints.GetDeviceMemoryCommitment)
#define has_physical_device_wrapper_GetDeviceMemoryCommitment(...) (wrapper_physical_device_entrypoints.GetDeviceMemoryCommitment)
#define name_of_wrapper_GetDeviceMemoryCommitment(...) "wrapper_GetDeviceMemoryCommitment"
#define VK_ID_GetBufferMemoryRequirements 29
#define IS_VK_ID_GetBufferMemoryRequirements_ON(masks) (((masks).f0 & (1ULL << (29))) != 0)
#define SET_VK_ID_GetBufferMemoryRequirements_ON(masks) (masks).f0 |= (1ULL << (29))
#define VK_ID_GetBufferMemoryRequirements_BIT (1ULL << (29))
#define VK_ID_GetBufferMemoryRequirements_IDX (0)

#define PRINT_GetBufferMemoryRequirements IS_VK_ID_GetBufferMemoryRequirements_ON(wrapper_printer_masks)
#define TRY_GetBufferMemoryRequirements(TRUE, FALSE) TRUE
#define has_device_wrapper_GetBufferMemoryRequirements(...) (wrapper_device_entrypoints.GetBufferMemoryRequirements)
#define has_physical_device_wrapper_GetBufferMemoryRequirements(...) (wrapper_physical_device_entrypoints.GetBufferMemoryRequirements)
#define name_of_wrapper_GetBufferMemoryRequirements(...) "wrapper_GetBufferMemoryRequirements"
#define VK_ID_BindBufferMemory 30
#define IS_VK_ID_BindBufferMemory_ON(masks) (((masks).f0 & (1ULL << (30))) != 0)
#define SET_VK_ID_BindBufferMemory_ON(masks) (masks).f0 |= (1ULL << (30))
#define VK_ID_BindBufferMemory_BIT (1ULL << (30))
#define VK_ID_BindBufferMemory_IDX (0)

#define PRINT_BindBufferMemory IS_VK_ID_BindBufferMemory_ON(wrapper_printer_masks)
#define TRY_BindBufferMemory(TRUE, FALSE) TRUE
#define has_device_wrapper_BindBufferMemory(...) (wrapper_device_entrypoints.BindBufferMemory)
#define has_physical_device_wrapper_BindBufferMemory(...) (wrapper_physical_device_entrypoints.BindBufferMemory)
#define name_of_wrapper_BindBufferMemory(...) "wrapper_BindBufferMemory"
#define VK_ID_GetImageMemoryRequirements 31
#define IS_VK_ID_GetImageMemoryRequirements_ON(masks) (((masks).f0 & (1ULL << (31))) != 0)
#define SET_VK_ID_GetImageMemoryRequirements_ON(masks) (masks).f0 |= (1ULL << (31))
#define VK_ID_GetImageMemoryRequirements_BIT (1ULL << (31))
#define VK_ID_GetImageMemoryRequirements_IDX (0)

#define PRINT_GetImageMemoryRequirements IS_VK_ID_GetImageMemoryRequirements_ON(wrapper_printer_masks)
#define TRY_GetImageMemoryRequirements(TRUE, FALSE) TRUE
#define has_device_wrapper_GetImageMemoryRequirements(...) (wrapper_device_entrypoints.GetImageMemoryRequirements)
#define has_physical_device_wrapper_GetImageMemoryRequirements(...) (wrapper_physical_device_entrypoints.GetImageMemoryRequirements)
#define name_of_wrapper_GetImageMemoryRequirements(...) "wrapper_GetImageMemoryRequirements"
#define VK_ID_BindImageMemory 32
#define IS_VK_ID_BindImageMemory_ON(masks) (((masks).f0 & (1ULL << (32))) != 0)
#define SET_VK_ID_BindImageMemory_ON(masks) (masks).f0 |= (1ULL << (32))
#define VK_ID_BindImageMemory_BIT (1ULL << (32))
#define VK_ID_BindImageMemory_IDX (0)

#define PRINT_BindImageMemory IS_VK_ID_BindImageMemory_ON(wrapper_printer_masks)
#define TRY_BindImageMemory(TRUE, FALSE) TRUE
#define has_device_wrapper_BindImageMemory(...) (wrapper_device_entrypoints.BindImageMemory)
#define has_physical_device_wrapper_BindImageMemory(...) (wrapper_physical_device_entrypoints.BindImageMemory)
#define name_of_wrapper_BindImageMemory(...) "wrapper_BindImageMemory"
#define VK_ID_GetImageSparseMemoryRequirements 33
#define IS_VK_ID_GetImageSparseMemoryRequirements_ON(masks) (((masks).f0 & (1ULL << (33))) != 0)
#define SET_VK_ID_GetImageSparseMemoryRequirements_ON(masks) (masks).f0 |= (1ULL << (33))
#define VK_ID_GetImageSparseMemoryRequirements_BIT (1ULL << (33))
#define VK_ID_GetImageSparseMemoryRequirements_IDX (0)

#define PRINT_GetImageSparseMemoryRequirements IS_VK_ID_GetImageSparseMemoryRequirements_ON(wrapper_printer_masks)
#define TRY_GetImageSparseMemoryRequirements(TRUE, FALSE) TRUE
#define has_device_wrapper_GetImageSparseMemoryRequirements(...) (wrapper_device_entrypoints.GetImageSparseMemoryRequirements)
#define has_physical_device_wrapper_GetImageSparseMemoryRequirements(...) (wrapper_physical_device_entrypoints.GetImageSparseMemoryRequirements)
#define name_of_wrapper_GetImageSparseMemoryRequirements(...) "wrapper_GetImageSparseMemoryRequirements"
#define VK_ID_GetPhysicalDeviceSparseImageFormatProperties 34
#define IS_VK_ID_GetPhysicalDeviceSparseImageFormatProperties_ON(masks) (((masks).f0 & (1ULL << (34))) != 0)
#define SET_VK_ID_GetPhysicalDeviceSparseImageFormatProperties_ON(masks) (masks).f0 |= (1ULL << (34))
#define VK_ID_GetPhysicalDeviceSparseImageFormatProperties_BIT (1ULL << (34))
#define VK_ID_GetPhysicalDeviceSparseImageFormatProperties_IDX (0)

#define PRINT_GetPhysicalDeviceSparseImageFormatProperties IS_VK_ID_GetPhysicalDeviceSparseImageFormatProperties_ON(wrapper_printer_masks)
#define TRY_GetPhysicalDeviceSparseImageFormatProperties(TRUE, FALSE) TRUE
#define has_device_wrapper_GetPhysicalDeviceSparseImageFormatProperties(...) (wrapper_device_entrypoints.GetPhysicalDeviceSparseImageFormatProperties)
#define has_physical_device_wrapper_GetPhysicalDeviceSparseImageFormatProperties(...) (wrapper_physical_device_entrypoints.GetPhysicalDeviceSparseImageFormatProperties)
#define name_of_wrapper_GetPhysicalDeviceSparseImageFormatProperties(...) "wrapper_GetPhysicalDeviceSparseImageFormatProperties"
#define VK_ID_QueueBindSparse 35
#define IS_VK_ID_QueueBindSparse_ON(masks) (((masks).f0 & (1ULL << (35))) != 0)
#define SET_VK_ID_QueueBindSparse_ON(masks) (masks).f0 |= (1ULL << (35))
#define VK_ID_QueueBindSparse_BIT (1ULL << (35))
#define VK_ID_QueueBindSparse_IDX (0)

#define PRINT_QueueBindSparse IS_VK_ID_QueueBindSparse_ON(wrapper_printer_masks)
#define TRY_QueueBindSparse(TRUE, FALSE) TRUE
#define has_device_wrapper_QueueBindSparse(...) (wrapper_device_entrypoints.QueueBindSparse)
#define has_physical_device_wrapper_QueueBindSparse(...) (wrapper_physical_device_entrypoints.QueueBindSparse)
#define name_of_wrapper_QueueBindSparse(...) "wrapper_QueueBindSparse"
#define VK_ID_CreateFence 36
#define IS_VK_ID_CreateFence_ON(masks) (((masks).f0 & (1ULL << (36))) != 0)
#define SET_VK_ID_CreateFence_ON(masks) (masks).f0 |= (1ULL << (36))
#define VK_ID_CreateFence_BIT (1ULL << (36))
#define VK_ID_CreateFence_IDX (0)

#define PRINT_CreateFence IS_VK_ID_CreateFence_ON(wrapper_printer_masks)
#define TRY_CreateFence(TRUE, FALSE) TRUE
#define has_device_wrapper_CreateFence(...) (wrapper_device_entrypoints.CreateFence)
#define has_physical_device_wrapper_CreateFence(...) (wrapper_physical_device_entrypoints.CreateFence)
#define name_of_wrapper_CreateFence(...) "wrapper_CreateFence"
#define VK_ID_DestroyFence 37
#define IS_VK_ID_DestroyFence_ON(masks) (((masks).f0 & (1ULL << (37))) != 0)
#define SET_VK_ID_DestroyFence_ON(masks) (masks).f0 |= (1ULL << (37))
#define VK_ID_DestroyFence_BIT (1ULL << (37))
#define VK_ID_DestroyFence_IDX (0)

#define PRINT_DestroyFence IS_VK_ID_DestroyFence_ON(wrapper_printer_masks)
#define TRY_DestroyFence(TRUE, FALSE) TRUE
#define has_device_wrapper_DestroyFence(...) (wrapper_device_entrypoints.DestroyFence)
#define has_physical_device_wrapper_DestroyFence(...) (wrapper_physical_device_entrypoints.DestroyFence)
#define name_of_wrapper_DestroyFence(...) "wrapper_DestroyFence"
#define VK_ID_ResetFences 38
#define IS_VK_ID_ResetFences_ON(masks) (((masks).f0 & (1ULL << (38))) != 0)
#define SET_VK_ID_ResetFences_ON(masks) (masks).f0 |= (1ULL << (38))
#define VK_ID_ResetFences_BIT (1ULL << (38))
#define VK_ID_ResetFences_IDX (0)

#define PRINT_ResetFences IS_VK_ID_ResetFences_ON(wrapper_printer_masks)
#define TRY_ResetFences(TRUE, FALSE) TRUE
#define has_device_wrapper_ResetFences(...) (wrapper_device_entrypoints.ResetFences)
#define has_physical_device_wrapper_ResetFences(...) (wrapper_physical_device_entrypoints.ResetFences)
#define name_of_wrapper_ResetFences(...) "wrapper_ResetFences"
#define VK_ID_GetFenceStatus 39
#define IS_VK_ID_GetFenceStatus_ON(masks) (((masks).f0 & (1ULL << (39))) != 0)
#define SET_VK_ID_GetFenceStatus_ON(masks) (masks).f0 |= (1ULL << (39))
#define VK_ID_GetFenceStatus_BIT (1ULL << (39))
#define VK_ID_GetFenceStatus_IDX (0)

#define PRINT_GetFenceStatus IS_VK_ID_GetFenceStatus_ON(wrapper_printer_masks)
#define TRY_GetFenceStatus(TRUE, FALSE) TRUE
#define has_device_wrapper_GetFenceStatus(...) (wrapper_device_entrypoints.GetFenceStatus)
#define has_physical_device_wrapper_GetFenceStatus(...) (wrapper_physical_device_entrypoints.GetFenceStatus)
#define name_of_wrapper_GetFenceStatus(...) "wrapper_GetFenceStatus"
#define VK_ID_WaitForFences 40
#define IS_VK_ID_WaitForFences_ON(masks) (((masks).f0 & (1ULL << (40))) != 0)
#define SET_VK_ID_WaitForFences_ON(masks) (masks).f0 |= (1ULL << (40))
#define VK_ID_WaitForFences_BIT (1ULL << (40))
#define VK_ID_WaitForFences_IDX (0)

#define PRINT_WaitForFences IS_VK_ID_WaitForFences_ON(wrapper_printer_masks)
#define TRY_WaitForFences(TRUE, FALSE) TRUE
#define has_device_wrapper_WaitForFences(...) (wrapper_device_entrypoints.WaitForFences)
#define has_physical_device_wrapper_WaitForFences(...) (wrapper_physical_device_entrypoints.WaitForFences)
#define name_of_wrapper_WaitForFences(...) "wrapper_WaitForFences"
#define VK_ID_CreateSemaphore 41
#define IS_VK_ID_CreateSemaphore_ON(masks) (((masks).f0 & (1ULL << (41))) != 0)
#define SET_VK_ID_CreateSemaphore_ON(masks) (masks).f0 |= (1ULL << (41))
#define VK_ID_CreateSemaphore_BIT (1ULL << (41))
#define VK_ID_CreateSemaphore_IDX (0)

#define PRINT_CreateSemaphore IS_VK_ID_CreateSemaphore_ON(wrapper_printer_masks)
#define TRY_CreateSemaphore(TRUE, FALSE) TRUE
#define has_device_wrapper_CreateSemaphore(...) (wrapper_device_entrypoints.CreateSemaphore)
#define has_physical_device_wrapper_CreateSemaphore(...) (wrapper_physical_device_entrypoints.CreateSemaphore)
#define name_of_wrapper_CreateSemaphore(...) "wrapper_CreateSemaphore"
#define VK_ID_DestroySemaphore 42
#define IS_VK_ID_DestroySemaphore_ON(masks) (((masks).f0 & (1ULL << (42))) != 0)
#define SET_VK_ID_DestroySemaphore_ON(masks) (masks).f0 |= (1ULL << (42))
#define VK_ID_DestroySemaphore_BIT (1ULL << (42))
#define VK_ID_DestroySemaphore_IDX (0)

#define PRINT_DestroySemaphore IS_VK_ID_DestroySemaphore_ON(wrapper_printer_masks)
#define TRY_DestroySemaphore(TRUE, FALSE) TRUE
#define has_device_wrapper_DestroySemaphore(...) (wrapper_device_entrypoints.DestroySemaphore)
#define has_physical_device_wrapper_DestroySemaphore(...) (wrapper_physical_device_entrypoints.DestroySemaphore)
#define name_of_wrapper_DestroySemaphore(...) "wrapper_DestroySemaphore"
#define VK_ID_CreateEvent 43
#define IS_VK_ID_CreateEvent_ON(masks) (((masks).f0 & (1ULL << (43))) != 0)
#define SET_VK_ID_CreateEvent_ON(masks) (masks).f0 |= (1ULL << (43))
#define VK_ID_CreateEvent_BIT (1ULL << (43))
#define VK_ID_CreateEvent_IDX (0)

#define PRINT_CreateEvent IS_VK_ID_CreateEvent_ON(wrapper_printer_masks)
#define TRY_CreateEvent(TRUE, FALSE) TRUE
#define has_device_wrapper_CreateEvent(...) (wrapper_device_entrypoints.CreateEvent)
#define has_physical_device_wrapper_CreateEvent(...) (wrapper_physical_device_entrypoints.CreateEvent)
#define name_of_wrapper_CreateEvent(...) "wrapper_CreateEvent"
#define VK_ID_DestroyEvent 44
#define IS_VK_ID_DestroyEvent_ON(masks) (((masks).f0 & (1ULL << (44))) != 0)
#define SET_VK_ID_DestroyEvent_ON(masks) (masks).f0 |= (1ULL << (44))
#define VK_ID_DestroyEvent_BIT (1ULL << (44))
#define VK_ID_DestroyEvent_IDX (0)

#define PRINT_DestroyEvent IS_VK_ID_DestroyEvent_ON(wrapper_printer_masks)
#define TRY_DestroyEvent(TRUE, FALSE) TRUE
#define has_device_wrapper_DestroyEvent(...) (wrapper_device_entrypoints.DestroyEvent)
#define has_physical_device_wrapper_DestroyEvent(...) (wrapper_physical_device_entrypoints.DestroyEvent)
#define name_of_wrapper_DestroyEvent(...) "wrapper_DestroyEvent"
#define VK_ID_GetEventStatus 45
#define IS_VK_ID_GetEventStatus_ON(masks) (((masks).f0 & (1ULL << (45))) != 0)
#define SET_VK_ID_GetEventStatus_ON(masks) (masks).f0 |= (1ULL << (45))
#define VK_ID_GetEventStatus_BIT (1ULL << (45))
#define VK_ID_GetEventStatus_IDX (0)

#define PRINT_GetEventStatus IS_VK_ID_GetEventStatus_ON(wrapper_printer_masks)
#define TRY_GetEventStatus(TRUE, FALSE) TRUE
#define has_device_wrapper_GetEventStatus(...) (wrapper_device_entrypoints.GetEventStatus)
#define has_physical_device_wrapper_GetEventStatus(...) (wrapper_physical_device_entrypoints.GetEventStatus)
#define name_of_wrapper_GetEventStatus(...) "wrapper_GetEventStatus"
#define VK_ID_SetEvent 46
#define IS_VK_ID_SetEvent_ON(masks) (((masks).f0 & (1ULL << (46))) != 0)
#define SET_VK_ID_SetEvent_ON(masks) (masks).f0 |= (1ULL << (46))
#define VK_ID_SetEvent_BIT (1ULL << (46))
#define VK_ID_SetEvent_IDX (0)

#define PRINT_SetEvent IS_VK_ID_SetEvent_ON(wrapper_printer_masks)
#define TRY_SetEvent(TRUE, FALSE) TRUE
#define has_device_wrapper_SetEvent(...) (wrapper_device_entrypoints.SetEvent)
#define has_physical_device_wrapper_SetEvent(...) (wrapper_physical_device_entrypoints.SetEvent)
#define name_of_wrapper_SetEvent(...) "wrapper_SetEvent"
#define VK_ID_ResetEvent 47
#define IS_VK_ID_ResetEvent_ON(masks) (((masks).f0 & (1ULL << (47))) != 0)
#define SET_VK_ID_ResetEvent_ON(masks) (masks).f0 |= (1ULL << (47))
#define VK_ID_ResetEvent_BIT (1ULL << (47))
#define VK_ID_ResetEvent_IDX (0)

#define PRINT_ResetEvent IS_VK_ID_ResetEvent_ON(wrapper_printer_masks)
#define TRY_ResetEvent(TRUE, FALSE) TRUE
#define has_device_wrapper_ResetEvent(...) (wrapper_device_entrypoints.ResetEvent)
#define has_physical_device_wrapper_ResetEvent(...) (wrapper_physical_device_entrypoints.ResetEvent)
#define name_of_wrapper_ResetEvent(...) "wrapper_ResetEvent"
#define VK_ID_CreateQueryPool 48
#define IS_VK_ID_CreateQueryPool_ON(masks) (((masks).f0 & (1ULL << (48))) != 0)
#define SET_VK_ID_CreateQueryPool_ON(masks) (masks).f0 |= (1ULL << (48))
#define VK_ID_CreateQueryPool_BIT (1ULL << (48))
#define VK_ID_CreateQueryPool_IDX (0)

#define PRINT_CreateQueryPool IS_VK_ID_CreateQueryPool_ON(wrapper_printer_masks)
#define TRY_CreateQueryPool(TRUE, FALSE) TRUE
#define has_device_wrapper_CreateQueryPool(...) (wrapper_device_entrypoints.CreateQueryPool)
#define has_physical_device_wrapper_CreateQueryPool(...) (wrapper_physical_device_entrypoints.CreateQueryPool)
#define name_of_wrapper_CreateQueryPool(...) "wrapper_CreateQueryPool"
#define VK_ID_DestroyQueryPool 49
#define IS_VK_ID_DestroyQueryPool_ON(masks) (((masks).f0 & (1ULL << (49))) != 0)
#define SET_VK_ID_DestroyQueryPool_ON(masks) (masks).f0 |= (1ULL << (49))
#define VK_ID_DestroyQueryPool_BIT (1ULL << (49))
#define VK_ID_DestroyQueryPool_IDX (0)

#define PRINT_DestroyQueryPool IS_VK_ID_DestroyQueryPool_ON(wrapper_printer_masks)
#define TRY_DestroyQueryPool(TRUE, FALSE) TRUE
#define has_device_wrapper_DestroyQueryPool(...) (wrapper_device_entrypoints.DestroyQueryPool)
#define has_physical_device_wrapper_DestroyQueryPool(...) (wrapper_physical_device_entrypoints.DestroyQueryPool)
#define name_of_wrapper_DestroyQueryPool(...) "wrapper_DestroyQueryPool"
#define VK_ID_GetQueryPoolResults 50
#define IS_VK_ID_GetQueryPoolResults_ON(masks) (((masks).f0 & (1ULL << (50))) != 0)
#define SET_VK_ID_GetQueryPoolResults_ON(masks) (masks).f0 |= (1ULL << (50))
#define VK_ID_GetQueryPoolResults_BIT (1ULL << (50))
#define VK_ID_GetQueryPoolResults_IDX (0)

#define PRINT_GetQueryPoolResults IS_VK_ID_GetQueryPoolResults_ON(wrapper_printer_masks)
#define TRY_GetQueryPoolResults(TRUE, FALSE) TRUE
#define has_device_wrapper_GetQueryPoolResults(...) (wrapper_device_entrypoints.GetQueryPoolResults)
#define has_physical_device_wrapper_GetQueryPoolResults(...) (wrapper_physical_device_entrypoints.GetQueryPoolResults)
#define name_of_wrapper_GetQueryPoolResults(...) "wrapper_GetQueryPoolResults"
#define VK_ID_ResetQueryPool 51
#define IS_VK_ID_ResetQueryPool_ON(masks) (((masks).f0 & (1ULL << (51))) != 0)
#define SET_VK_ID_ResetQueryPool_ON(masks) (masks).f0 |= (1ULL << (51))
#define VK_ID_ResetQueryPool_BIT (1ULL << (51))
#define VK_ID_ResetQueryPool_IDX (0)

#define PRINT_ResetQueryPool IS_VK_ID_ResetQueryPool_ON(wrapper_printer_masks)
#define TRY_ResetQueryPool(TRUE, FALSE) TRUE
#define has_device_wrapper_ResetQueryPool(...) (wrapper_device_entrypoints.ResetQueryPool)
#define has_physical_device_wrapper_ResetQueryPool(...) (wrapper_physical_device_entrypoints.ResetQueryPool)
#define name_of_wrapper_ResetQueryPool(...) "wrapper_ResetQueryPool"
#define VK_ID_CreateBuffer 53
#define IS_VK_ID_CreateBuffer_ON(masks) (((masks).f0 & (1ULL << (53))) != 0)
#define SET_VK_ID_CreateBuffer_ON(masks) (masks).f0 |= (1ULL << (53))
#define VK_ID_CreateBuffer_BIT (1ULL << (53))
#define VK_ID_CreateBuffer_IDX (0)

#define PRINT_CreateBuffer IS_VK_ID_CreateBuffer_ON(wrapper_printer_masks)
#define TRY_CreateBuffer(TRUE, FALSE) TRUE
#define has_device_wrapper_CreateBuffer(...) (wrapper_device_entrypoints.CreateBuffer)
#define has_physical_device_wrapper_CreateBuffer(...) (wrapper_physical_device_entrypoints.CreateBuffer)
#define name_of_wrapper_CreateBuffer(...) "wrapper_CreateBuffer"
#define VK_ID_DestroyBuffer 54
#define IS_VK_ID_DestroyBuffer_ON(masks) (((masks).f0 & (1ULL << (54))) != 0)
#define SET_VK_ID_DestroyBuffer_ON(masks) (masks).f0 |= (1ULL << (54))
#define VK_ID_DestroyBuffer_BIT (1ULL << (54))
#define VK_ID_DestroyBuffer_IDX (0)

#define PRINT_DestroyBuffer IS_VK_ID_DestroyBuffer_ON(wrapper_printer_masks)
#define TRY_DestroyBuffer(TRUE, FALSE) TRUE
#define has_device_wrapper_DestroyBuffer(...) (wrapper_device_entrypoints.DestroyBuffer)
#define has_physical_device_wrapper_DestroyBuffer(...) (wrapper_physical_device_entrypoints.DestroyBuffer)
#define name_of_wrapper_DestroyBuffer(...) "wrapper_DestroyBuffer"
#define VK_ID_CreateBufferView 55
#define IS_VK_ID_CreateBufferView_ON(masks) (((masks).f0 & (1ULL << (55))) != 0)
#define SET_VK_ID_CreateBufferView_ON(masks) (masks).f0 |= (1ULL << (55))
#define VK_ID_CreateBufferView_BIT (1ULL << (55))
#define VK_ID_CreateBufferView_IDX (0)

#define PRINT_CreateBufferView IS_VK_ID_CreateBufferView_ON(wrapper_printer_masks)
#define TRY_CreateBufferView(TRUE, FALSE) TRUE
#define has_device_wrapper_CreateBufferView(...) (wrapper_device_entrypoints.CreateBufferView)
#define has_physical_device_wrapper_CreateBufferView(...) (wrapper_physical_device_entrypoints.CreateBufferView)
#define name_of_wrapper_CreateBufferView(...) "wrapper_CreateBufferView"
#define VK_ID_DestroyBufferView 56
#define IS_VK_ID_DestroyBufferView_ON(masks) (((masks).f0 & (1ULL << (56))) != 0)
#define SET_VK_ID_DestroyBufferView_ON(masks) (masks).f0 |= (1ULL << (56))
#define VK_ID_DestroyBufferView_BIT (1ULL << (56))
#define VK_ID_DestroyBufferView_IDX (0)

#define PRINT_DestroyBufferView IS_VK_ID_DestroyBufferView_ON(wrapper_printer_masks)
#define TRY_DestroyBufferView(TRUE, FALSE) TRUE
#define has_device_wrapper_DestroyBufferView(...) (wrapper_device_entrypoints.DestroyBufferView)
#define has_physical_device_wrapper_DestroyBufferView(...) (wrapper_physical_device_entrypoints.DestroyBufferView)
#define name_of_wrapper_DestroyBufferView(...) "wrapper_DestroyBufferView"
#define VK_ID_CreateImage 57
#define IS_VK_ID_CreateImage_ON(masks) (((masks).f0 & (1ULL << (57))) != 0)
#define SET_VK_ID_CreateImage_ON(masks) (masks).f0 |= (1ULL << (57))
#define VK_ID_CreateImage_BIT (1ULL << (57))
#define VK_ID_CreateImage_IDX (0)

#define PRINT_CreateImage IS_VK_ID_CreateImage_ON(wrapper_printer_masks)
#define TRY_CreateImage(TRUE, FALSE) TRUE
#define has_device_wrapper_CreateImage(...) (wrapper_device_entrypoints.CreateImage)
#define has_physical_device_wrapper_CreateImage(...) (wrapper_physical_device_entrypoints.CreateImage)
#define name_of_wrapper_CreateImage(...) "wrapper_CreateImage"
#define VK_ID_DestroyImage 58
#define IS_VK_ID_DestroyImage_ON(masks) (((masks).f0 & (1ULL << (58))) != 0)
#define SET_VK_ID_DestroyImage_ON(masks) (masks).f0 |= (1ULL << (58))
#define VK_ID_DestroyImage_BIT (1ULL << (58))
#define VK_ID_DestroyImage_IDX (0)

#define PRINT_DestroyImage IS_VK_ID_DestroyImage_ON(wrapper_printer_masks)
#define TRY_DestroyImage(TRUE, FALSE) TRUE
#define has_device_wrapper_DestroyImage(...) (wrapper_device_entrypoints.DestroyImage)
#define has_physical_device_wrapper_DestroyImage(...) (wrapper_physical_device_entrypoints.DestroyImage)
#define name_of_wrapper_DestroyImage(...) "wrapper_DestroyImage"
#define VK_ID_GetImageSubresourceLayout 59
#define IS_VK_ID_GetImageSubresourceLayout_ON(masks) (((masks).f0 & (1ULL << (59))) != 0)
#define SET_VK_ID_GetImageSubresourceLayout_ON(masks) (masks).f0 |= (1ULL << (59))
#define VK_ID_GetImageSubresourceLayout_BIT (1ULL << (59))
#define VK_ID_GetImageSubresourceLayout_IDX (0)

#define PRINT_GetImageSubresourceLayout IS_VK_ID_GetImageSubresourceLayout_ON(wrapper_printer_masks)
#define TRY_GetImageSubresourceLayout(TRUE, FALSE) TRUE
#define has_device_wrapper_GetImageSubresourceLayout(...) (wrapper_device_entrypoints.GetImageSubresourceLayout)
#define has_physical_device_wrapper_GetImageSubresourceLayout(...) (wrapper_physical_device_entrypoints.GetImageSubresourceLayout)
#define name_of_wrapper_GetImageSubresourceLayout(...) "wrapper_GetImageSubresourceLayout"
#define VK_ID_CreateImageView 60
#define IS_VK_ID_CreateImageView_ON(masks) (((masks).f0 & (1ULL << (60))) != 0)
#define SET_VK_ID_CreateImageView_ON(masks) (masks).f0 |= (1ULL << (60))
#define VK_ID_CreateImageView_BIT (1ULL << (60))
#define VK_ID_CreateImageView_IDX (0)

#define PRINT_CreateImageView IS_VK_ID_CreateImageView_ON(wrapper_printer_masks)
#define TRY_CreateImageView(TRUE, FALSE) TRUE
#define has_device_wrapper_CreateImageView(...) (wrapper_device_entrypoints.CreateImageView)
#define has_physical_device_wrapper_CreateImageView(...) (wrapper_physical_device_entrypoints.CreateImageView)
#define name_of_wrapper_CreateImageView(...) "wrapper_CreateImageView"
#define VK_ID_DestroyImageView 61
#define IS_VK_ID_DestroyImageView_ON(masks) (((masks).f0 & (1ULL << (61))) != 0)
#define SET_VK_ID_DestroyImageView_ON(masks) (masks).f0 |= (1ULL << (61))
#define VK_ID_DestroyImageView_BIT (1ULL << (61))
#define VK_ID_DestroyImageView_IDX (0)

#define PRINT_DestroyImageView IS_VK_ID_DestroyImageView_ON(wrapper_printer_masks)
#define TRY_DestroyImageView(TRUE, FALSE) TRUE
#define has_device_wrapper_DestroyImageView(...) (wrapper_device_entrypoints.DestroyImageView)
#define has_physical_device_wrapper_DestroyImageView(...) (wrapper_physical_device_entrypoints.DestroyImageView)
#define name_of_wrapper_DestroyImageView(...) "wrapper_DestroyImageView"
#define VK_ID_CreateShaderModule 62
#define IS_VK_ID_CreateShaderModule_ON(masks) (((masks).f0 & (1ULL << (62))) != 0)
#define SET_VK_ID_CreateShaderModule_ON(masks) (masks).f0 |= (1ULL << (62))
#define VK_ID_CreateShaderModule_BIT (1ULL << (62))
#define VK_ID_CreateShaderModule_IDX (0)

#define PRINT_CreateShaderModule IS_VK_ID_CreateShaderModule_ON(wrapper_printer_masks)
#define TRY_CreateShaderModule(TRUE, FALSE) TRUE
#define has_device_wrapper_CreateShaderModule(...) (wrapper_device_entrypoints.CreateShaderModule)
#define has_physical_device_wrapper_CreateShaderModule(...) (wrapper_physical_device_entrypoints.CreateShaderModule)
#define name_of_wrapper_CreateShaderModule(...) "wrapper_CreateShaderModule"
#define VK_ID_DestroyShaderModule 63
#define IS_VK_ID_DestroyShaderModule_ON(masks) (((masks).f0 & (1ULL << (63))) != 0)
#define SET_VK_ID_DestroyShaderModule_ON(masks) (masks).f0 |= (1ULL << (63))
#define VK_ID_DestroyShaderModule_BIT (1ULL << (63))
#define VK_ID_DestroyShaderModule_IDX (0)

#define PRINT_DestroyShaderModule IS_VK_ID_DestroyShaderModule_ON(wrapper_printer_masks)
#define TRY_DestroyShaderModule(TRUE, FALSE) TRUE
#define has_device_wrapper_DestroyShaderModule(...) (wrapper_device_entrypoints.DestroyShaderModule)
#define has_physical_device_wrapper_DestroyShaderModule(...) (wrapper_physical_device_entrypoints.DestroyShaderModule)
#define name_of_wrapper_DestroyShaderModule(...) "wrapper_DestroyShaderModule"
#define VK_ID_CreatePipelineCache 64
#define IS_VK_ID_CreatePipelineCache_ON(masks) (((masks).f1 & (1ULL << (0))) != 0)
#define SET_VK_ID_CreatePipelineCache_ON(masks) (masks).f1 |= (1ULL << (0))
#define VK_ID_CreatePipelineCache_BIT (1ULL << (0))
#define VK_ID_CreatePipelineCache_IDX (1)

#define PRINT_CreatePipelineCache IS_VK_ID_CreatePipelineCache_ON(wrapper_printer_masks)
#define TRY_CreatePipelineCache(TRUE, FALSE) TRUE
#define has_device_wrapper_CreatePipelineCache(...) (wrapper_device_entrypoints.CreatePipelineCache)
#define has_physical_device_wrapper_CreatePipelineCache(...) (wrapper_physical_device_entrypoints.CreatePipelineCache)
#define name_of_wrapper_CreatePipelineCache(...) "wrapper_CreatePipelineCache"
#define VK_ID_DestroyPipelineCache 65
#define IS_VK_ID_DestroyPipelineCache_ON(masks) (((masks).f1 & (1ULL << (1))) != 0)
#define SET_VK_ID_DestroyPipelineCache_ON(masks) (masks).f1 |= (1ULL << (1))
#define VK_ID_DestroyPipelineCache_BIT (1ULL << (1))
#define VK_ID_DestroyPipelineCache_IDX (1)

#define PRINT_DestroyPipelineCache IS_VK_ID_DestroyPipelineCache_ON(wrapper_printer_masks)
#define TRY_DestroyPipelineCache(TRUE, FALSE) TRUE
#define has_device_wrapper_DestroyPipelineCache(...) (wrapper_device_entrypoints.DestroyPipelineCache)
#define has_physical_device_wrapper_DestroyPipelineCache(...) (wrapper_physical_device_entrypoints.DestroyPipelineCache)
#define name_of_wrapper_DestroyPipelineCache(...) "wrapper_DestroyPipelineCache"
#define VK_ID_GetPipelineCacheData 66
#define IS_VK_ID_GetPipelineCacheData_ON(masks) (((masks).f1 & (1ULL << (2))) != 0)
#define SET_VK_ID_GetPipelineCacheData_ON(masks) (masks).f1 |= (1ULL << (2))
#define VK_ID_GetPipelineCacheData_BIT (1ULL << (2))
#define VK_ID_GetPipelineCacheData_IDX (1)

#define PRINT_GetPipelineCacheData IS_VK_ID_GetPipelineCacheData_ON(wrapper_printer_masks)
#define TRY_GetPipelineCacheData(TRUE, FALSE) TRUE
#define has_device_wrapper_GetPipelineCacheData(...) (wrapper_device_entrypoints.GetPipelineCacheData)
#define has_physical_device_wrapper_GetPipelineCacheData(...) (wrapper_physical_device_entrypoints.GetPipelineCacheData)
#define name_of_wrapper_GetPipelineCacheData(...) "wrapper_GetPipelineCacheData"
#define VK_ID_MergePipelineCaches 67
#define IS_VK_ID_MergePipelineCaches_ON(masks) (((masks).f1 & (1ULL << (3))) != 0)
#define SET_VK_ID_MergePipelineCaches_ON(masks) (masks).f1 |= (1ULL << (3))
#define VK_ID_MergePipelineCaches_BIT (1ULL << (3))
#define VK_ID_MergePipelineCaches_IDX (1)

#define PRINT_MergePipelineCaches IS_VK_ID_MergePipelineCaches_ON(wrapper_printer_masks)
#define TRY_MergePipelineCaches(TRUE, FALSE) TRUE
#define has_device_wrapper_MergePipelineCaches(...) (wrapper_device_entrypoints.MergePipelineCaches)
#define has_physical_device_wrapper_MergePipelineCaches(...) (wrapper_physical_device_entrypoints.MergePipelineCaches)
#define name_of_wrapper_MergePipelineCaches(...) "wrapper_MergePipelineCaches"
#define VK_ID_CreateGraphicsPipelines 68
#define IS_VK_ID_CreateGraphicsPipelines_ON(masks) (((masks).f1 & (1ULL << (4))) != 0)
#define SET_VK_ID_CreateGraphicsPipelines_ON(masks) (masks).f1 |= (1ULL << (4))
#define VK_ID_CreateGraphicsPipelines_BIT (1ULL << (4))
#define VK_ID_CreateGraphicsPipelines_IDX (1)

#define PRINT_CreateGraphicsPipelines IS_VK_ID_CreateGraphicsPipelines_ON(wrapper_printer_masks)
#define TRY_CreateGraphicsPipelines(TRUE, FALSE) TRUE
#define has_device_wrapper_CreateGraphicsPipelines(...) (wrapper_device_entrypoints.CreateGraphicsPipelines)
#define has_physical_device_wrapper_CreateGraphicsPipelines(...) (wrapper_physical_device_entrypoints.CreateGraphicsPipelines)
#define name_of_wrapper_CreateGraphicsPipelines(...) "wrapper_CreateGraphicsPipelines"
#define VK_ID_CreateComputePipelines 69
#define IS_VK_ID_CreateComputePipelines_ON(masks) (((masks).f1 & (1ULL << (5))) != 0)
#define SET_VK_ID_CreateComputePipelines_ON(masks) (masks).f1 |= (1ULL << (5))
#define VK_ID_CreateComputePipelines_BIT (1ULL << (5))
#define VK_ID_CreateComputePipelines_IDX (1)

#define PRINT_CreateComputePipelines IS_VK_ID_CreateComputePipelines_ON(wrapper_printer_masks)
#define TRY_CreateComputePipelines(TRUE, FALSE) TRUE
#define has_device_wrapper_CreateComputePipelines(...) (wrapper_device_entrypoints.CreateComputePipelines)
#define has_physical_device_wrapper_CreateComputePipelines(...) (wrapper_physical_device_entrypoints.CreateComputePipelines)
#define name_of_wrapper_CreateComputePipelines(...) "wrapper_CreateComputePipelines"
#define VK_ID_GetDeviceSubpassShadingMaxWorkgroupSizeHUAWEI 70
#define IS_VK_ID_GetDeviceSubpassShadingMaxWorkgroupSizeHUAWEI_ON(masks) (((masks).f1 & (1ULL << (6))) != 0)
#define SET_VK_ID_GetDeviceSubpassShadingMaxWorkgroupSizeHUAWEI_ON(masks) (masks).f1 |= (1ULL << (6))
#define VK_ID_GetDeviceSubpassShadingMaxWorkgroupSizeHUAWEI_BIT (1ULL << (6))
#define VK_ID_GetDeviceSubpassShadingMaxWorkgroupSizeHUAWEI_IDX (1)

#define PRINT_GetDeviceSubpassShadingMaxWorkgroupSizeHUAWEI IS_VK_ID_GetDeviceSubpassShadingMaxWorkgroupSizeHUAWEI_ON(wrapper_printer_masks)
#define TRY_GetDeviceSubpassShadingMaxWorkgroupSizeHUAWEI(TRUE, FALSE) TRUE
#define has_device_wrapper_GetDeviceSubpassShadingMaxWorkgroupSizeHUAWEI(...) (wrapper_device_entrypoints.GetDeviceSubpassShadingMaxWorkgroupSizeHUAWEI)
#define has_physical_device_wrapper_GetDeviceSubpassShadingMaxWorkgroupSizeHUAWEI(...) (wrapper_physical_device_entrypoints.GetDeviceSubpassShadingMaxWorkgroupSizeHUAWEI)
#define name_of_wrapper_GetDeviceSubpassShadingMaxWorkgroupSizeHUAWEI(...) "wrapper_GetDeviceSubpassShadingMaxWorkgroupSizeHUAWEI"
#define VK_ID_DestroyPipeline 71
#define IS_VK_ID_DestroyPipeline_ON(masks) (((masks).f1 & (1ULL << (7))) != 0)
#define SET_VK_ID_DestroyPipeline_ON(masks) (masks).f1 |= (1ULL << (7))
#define VK_ID_DestroyPipeline_BIT (1ULL << (7))
#define VK_ID_DestroyPipeline_IDX (1)

#define PRINT_DestroyPipeline IS_VK_ID_DestroyPipeline_ON(wrapper_printer_masks)
#define TRY_DestroyPipeline(TRUE, FALSE) TRUE
#define has_device_wrapper_DestroyPipeline(...) (wrapper_device_entrypoints.DestroyPipeline)
#define has_physical_device_wrapper_DestroyPipeline(...) (wrapper_physical_device_entrypoints.DestroyPipeline)
#define name_of_wrapper_DestroyPipeline(...) "wrapper_DestroyPipeline"
#define VK_ID_CreatePipelineLayout 72
#define IS_VK_ID_CreatePipelineLayout_ON(masks) (((masks).f1 & (1ULL << (8))) != 0)
#define SET_VK_ID_CreatePipelineLayout_ON(masks) (masks).f1 |= (1ULL << (8))
#define VK_ID_CreatePipelineLayout_BIT (1ULL << (8))
#define VK_ID_CreatePipelineLayout_IDX (1)

#define PRINT_CreatePipelineLayout IS_VK_ID_CreatePipelineLayout_ON(wrapper_printer_masks)
#define TRY_CreatePipelineLayout(TRUE, FALSE) TRUE
#define has_device_wrapper_CreatePipelineLayout(...) (wrapper_device_entrypoints.CreatePipelineLayout)
#define has_physical_device_wrapper_CreatePipelineLayout(...) (wrapper_physical_device_entrypoints.CreatePipelineLayout)
#define name_of_wrapper_CreatePipelineLayout(...) "wrapper_CreatePipelineLayout"
#define VK_ID_DestroyPipelineLayout 73
#define IS_VK_ID_DestroyPipelineLayout_ON(masks) (((masks).f1 & (1ULL << (9))) != 0)
#define SET_VK_ID_DestroyPipelineLayout_ON(masks) (masks).f1 |= (1ULL << (9))
#define VK_ID_DestroyPipelineLayout_BIT (1ULL << (9))
#define VK_ID_DestroyPipelineLayout_IDX (1)

#define PRINT_DestroyPipelineLayout IS_VK_ID_DestroyPipelineLayout_ON(wrapper_printer_masks)
#define TRY_DestroyPipelineLayout(TRUE, FALSE) TRUE
#define has_device_wrapper_DestroyPipelineLayout(...) (wrapper_device_entrypoints.DestroyPipelineLayout)
#define has_physical_device_wrapper_DestroyPipelineLayout(...) (wrapper_physical_device_entrypoints.DestroyPipelineLayout)
#define name_of_wrapper_DestroyPipelineLayout(...) "wrapper_DestroyPipelineLayout"
#define VK_ID_CreateSampler 74
#define IS_VK_ID_CreateSampler_ON(masks) (((masks).f1 & (1ULL << (10))) != 0)
#define SET_VK_ID_CreateSampler_ON(masks) (masks).f1 |= (1ULL << (10))
#define VK_ID_CreateSampler_BIT (1ULL << (10))
#define VK_ID_CreateSampler_IDX (1)

#define PRINT_CreateSampler IS_VK_ID_CreateSampler_ON(wrapper_printer_masks)
#define TRY_CreateSampler(TRUE, FALSE) TRUE
#define has_device_wrapper_CreateSampler(...) (wrapper_device_entrypoints.CreateSampler)
#define has_physical_device_wrapper_CreateSampler(...) (wrapper_physical_device_entrypoints.CreateSampler)
#define name_of_wrapper_CreateSampler(...) "wrapper_CreateSampler"
#define VK_ID_DestroySampler 75
#define IS_VK_ID_DestroySampler_ON(masks) (((masks).f1 & (1ULL << (11))) != 0)
#define SET_VK_ID_DestroySampler_ON(masks) (masks).f1 |= (1ULL << (11))
#define VK_ID_DestroySampler_BIT (1ULL << (11))
#define VK_ID_DestroySampler_IDX (1)

#define PRINT_DestroySampler IS_VK_ID_DestroySampler_ON(wrapper_printer_masks)
#define TRY_DestroySampler(TRUE, FALSE) TRUE
#define has_device_wrapper_DestroySampler(...) (wrapper_device_entrypoints.DestroySampler)
#define has_physical_device_wrapper_DestroySampler(...) (wrapper_physical_device_entrypoints.DestroySampler)
#define name_of_wrapper_DestroySampler(...) "wrapper_DestroySampler"
#define VK_ID_CreateDescriptorSetLayout 76
#define IS_VK_ID_CreateDescriptorSetLayout_ON(masks) (((masks).f1 & (1ULL << (12))) != 0)
#define SET_VK_ID_CreateDescriptorSetLayout_ON(masks) (masks).f1 |= (1ULL << (12))
#define VK_ID_CreateDescriptorSetLayout_BIT (1ULL << (12))
#define VK_ID_CreateDescriptorSetLayout_IDX (1)

#define PRINT_CreateDescriptorSetLayout IS_VK_ID_CreateDescriptorSetLayout_ON(wrapper_printer_masks)
#define TRY_CreateDescriptorSetLayout(TRUE, FALSE) TRUE
#define has_device_wrapper_CreateDescriptorSetLayout(...) (wrapper_device_entrypoints.CreateDescriptorSetLayout)
#define has_physical_device_wrapper_CreateDescriptorSetLayout(...) (wrapper_physical_device_entrypoints.CreateDescriptorSetLayout)
#define name_of_wrapper_CreateDescriptorSetLayout(...) "wrapper_CreateDescriptorSetLayout"
#define VK_ID_DestroyDescriptorSetLayout 77
#define IS_VK_ID_DestroyDescriptorSetLayout_ON(masks) (((masks).f1 & (1ULL << (13))) != 0)
#define SET_VK_ID_DestroyDescriptorSetLayout_ON(masks) (masks).f1 |= (1ULL << (13))
#define VK_ID_DestroyDescriptorSetLayout_BIT (1ULL << (13))
#define VK_ID_DestroyDescriptorSetLayout_IDX (1)

#define PRINT_DestroyDescriptorSetLayout IS_VK_ID_DestroyDescriptorSetLayout_ON(wrapper_printer_masks)
#define TRY_DestroyDescriptorSetLayout(TRUE, FALSE) TRUE
#define has_device_wrapper_DestroyDescriptorSetLayout(...) (wrapper_device_entrypoints.DestroyDescriptorSetLayout)
#define has_physical_device_wrapper_DestroyDescriptorSetLayout(...) (wrapper_physical_device_entrypoints.DestroyDescriptorSetLayout)
#define name_of_wrapper_DestroyDescriptorSetLayout(...) "wrapper_DestroyDescriptorSetLayout"
#define VK_ID_CreateDescriptorPool 78
#define IS_VK_ID_CreateDescriptorPool_ON(masks) (((masks).f1 & (1ULL << (14))) != 0)
#define SET_VK_ID_CreateDescriptorPool_ON(masks) (masks).f1 |= (1ULL << (14))
#define VK_ID_CreateDescriptorPool_BIT (1ULL << (14))
#define VK_ID_CreateDescriptorPool_IDX (1)

#define PRINT_CreateDescriptorPool IS_VK_ID_CreateDescriptorPool_ON(wrapper_printer_masks)
#define TRY_CreateDescriptorPool(TRUE, FALSE) TRUE
#define has_device_wrapper_CreateDescriptorPool(...) (wrapper_device_entrypoints.CreateDescriptorPool)
#define has_physical_device_wrapper_CreateDescriptorPool(...) (wrapper_physical_device_entrypoints.CreateDescriptorPool)
#define name_of_wrapper_CreateDescriptorPool(...) "wrapper_CreateDescriptorPool"
#define VK_ID_DestroyDescriptorPool 79
#define IS_VK_ID_DestroyDescriptorPool_ON(masks) (((masks).f1 & (1ULL << (15))) != 0)
#define SET_VK_ID_DestroyDescriptorPool_ON(masks) (masks).f1 |= (1ULL << (15))
#define VK_ID_DestroyDescriptorPool_BIT (1ULL << (15))
#define VK_ID_DestroyDescriptorPool_IDX (1)

#define PRINT_DestroyDescriptorPool IS_VK_ID_DestroyDescriptorPool_ON(wrapper_printer_masks)
#define TRY_DestroyDescriptorPool(TRUE, FALSE) TRUE
#define has_device_wrapper_DestroyDescriptorPool(...) (wrapper_device_entrypoints.DestroyDescriptorPool)
#define has_physical_device_wrapper_DestroyDescriptorPool(...) (wrapper_physical_device_entrypoints.DestroyDescriptorPool)
#define name_of_wrapper_DestroyDescriptorPool(...) "wrapper_DestroyDescriptorPool"
#define VK_ID_ResetDescriptorPool 80
#define IS_VK_ID_ResetDescriptorPool_ON(masks) (((masks).f1 & (1ULL << (16))) != 0)
#define SET_VK_ID_ResetDescriptorPool_ON(masks) (masks).f1 |= (1ULL << (16))
#define VK_ID_ResetDescriptorPool_BIT (1ULL << (16))
#define VK_ID_ResetDescriptorPool_IDX (1)

#define PRINT_ResetDescriptorPool IS_VK_ID_ResetDescriptorPool_ON(wrapper_printer_masks)
#define TRY_ResetDescriptorPool(TRUE, FALSE) TRUE
#define has_device_wrapper_ResetDescriptorPool(...) (wrapper_device_entrypoints.ResetDescriptorPool)
#define has_physical_device_wrapper_ResetDescriptorPool(...) (wrapper_physical_device_entrypoints.ResetDescriptorPool)
#define name_of_wrapper_ResetDescriptorPool(...) "wrapper_ResetDescriptorPool"
#define VK_ID_AllocateDescriptorSets 81
#define IS_VK_ID_AllocateDescriptorSets_ON(masks) (((masks).f1 & (1ULL << (17))) != 0)
#define SET_VK_ID_AllocateDescriptorSets_ON(masks) (masks).f1 |= (1ULL << (17))
#define VK_ID_AllocateDescriptorSets_BIT (1ULL << (17))
#define VK_ID_AllocateDescriptorSets_IDX (1)

#define PRINT_AllocateDescriptorSets IS_VK_ID_AllocateDescriptorSets_ON(wrapper_printer_masks)
#define TRY_AllocateDescriptorSets(TRUE, FALSE) TRUE
#define has_device_wrapper_AllocateDescriptorSets(...) (wrapper_device_entrypoints.AllocateDescriptorSets)
#define has_physical_device_wrapper_AllocateDescriptorSets(...) (wrapper_physical_device_entrypoints.AllocateDescriptorSets)
#define name_of_wrapper_AllocateDescriptorSets(...) "wrapper_AllocateDescriptorSets"
#define VK_ID_FreeDescriptorSets 82
#define IS_VK_ID_FreeDescriptorSets_ON(masks) (((masks).f1 & (1ULL << (18))) != 0)
#define SET_VK_ID_FreeDescriptorSets_ON(masks) (masks).f1 |= (1ULL << (18))
#define VK_ID_FreeDescriptorSets_BIT (1ULL << (18))
#define VK_ID_FreeDescriptorSets_IDX (1)

#define PRINT_FreeDescriptorSets IS_VK_ID_FreeDescriptorSets_ON(wrapper_printer_masks)
#define TRY_FreeDescriptorSets(TRUE, FALSE) TRUE
#define has_device_wrapper_FreeDescriptorSets(...) (wrapper_device_entrypoints.FreeDescriptorSets)
#define has_physical_device_wrapper_FreeDescriptorSets(...) (wrapper_physical_device_entrypoints.FreeDescriptorSets)
#define name_of_wrapper_FreeDescriptorSets(...) "wrapper_FreeDescriptorSets"
#define VK_ID_UpdateDescriptorSets 83
#define IS_VK_ID_UpdateDescriptorSets_ON(masks) (((masks).f1 & (1ULL << (19))) != 0)
#define SET_VK_ID_UpdateDescriptorSets_ON(masks) (masks).f1 |= (1ULL << (19))
#define VK_ID_UpdateDescriptorSets_BIT (1ULL << (19))
#define VK_ID_UpdateDescriptorSets_IDX (1)

#define PRINT_UpdateDescriptorSets IS_VK_ID_UpdateDescriptorSets_ON(wrapper_printer_masks)
#define TRY_UpdateDescriptorSets(TRUE, FALSE) TRUE
#define has_device_wrapper_UpdateDescriptorSets(...) (wrapper_device_entrypoints.UpdateDescriptorSets)
#define has_physical_device_wrapper_UpdateDescriptorSets(...) (wrapper_physical_device_entrypoints.UpdateDescriptorSets)
#define name_of_wrapper_UpdateDescriptorSets(...) "wrapper_UpdateDescriptorSets"
#define VK_ID_CreateFramebuffer 84
#define IS_VK_ID_CreateFramebuffer_ON(masks) (((masks).f1 & (1ULL << (20))) != 0)
#define SET_VK_ID_CreateFramebuffer_ON(masks) (masks).f1 |= (1ULL << (20))
#define VK_ID_CreateFramebuffer_BIT (1ULL << (20))
#define VK_ID_CreateFramebuffer_IDX (1)

#define PRINT_CreateFramebuffer IS_VK_ID_CreateFramebuffer_ON(wrapper_printer_masks)
#define TRY_CreateFramebuffer(TRUE, FALSE) TRUE
#define has_device_wrapper_CreateFramebuffer(...) (wrapper_device_entrypoints.CreateFramebuffer)
#define has_physical_device_wrapper_CreateFramebuffer(...) (wrapper_physical_device_entrypoints.CreateFramebuffer)
#define name_of_wrapper_CreateFramebuffer(...) "wrapper_CreateFramebuffer"
#define VK_ID_DestroyFramebuffer 85
#define IS_VK_ID_DestroyFramebuffer_ON(masks) (((masks).f1 & (1ULL << (21))) != 0)
#define SET_VK_ID_DestroyFramebuffer_ON(masks) (masks).f1 |= (1ULL << (21))
#define VK_ID_DestroyFramebuffer_BIT (1ULL << (21))
#define VK_ID_DestroyFramebuffer_IDX (1)

#define PRINT_DestroyFramebuffer IS_VK_ID_DestroyFramebuffer_ON(wrapper_printer_masks)
#define TRY_DestroyFramebuffer(TRUE, FALSE) TRUE
#define has_device_wrapper_DestroyFramebuffer(...) (wrapper_device_entrypoints.DestroyFramebuffer)
#define has_physical_device_wrapper_DestroyFramebuffer(...) (wrapper_physical_device_entrypoints.DestroyFramebuffer)
#define name_of_wrapper_DestroyFramebuffer(...) "wrapper_DestroyFramebuffer"
#define VK_ID_CreateRenderPass 86
#define IS_VK_ID_CreateRenderPass_ON(masks) (((masks).f1 & (1ULL << (22))) != 0)
#define SET_VK_ID_CreateRenderPass_ON(masks) (masks).f1 |= (1ULL << (22))
#define VK_ID_CreateRenderPass_BIT (1ULL << (22))
#define VK_ID_CreateRenderPass_IDX (1)

#define PRINT_CreateRenderPass IS_VK_ID_CreateRenderPass_ON(wrapper_printer_masks)
#define TRY_CreateRenderPass(TRUE, FALSE) TRUE
#define has_device_wrapper_CreateRenderPass(...) (wrapper_device_entrypoints.CreateRenderPass)
#define has_physical_device_wrapper_CreateRenderPass(...) (wrapper_physical_device_entrypoints.CreateRenderPass)
#define name_of_wrapper_CreateRenderPass(...) "wrapper_CreateRenderPass"
#define VK_ID_DestroyRenderPass 87
#define IS_VK_ID_DestroyRenderPass_ON(masks) (((masks).f1 & (1ULL << (23))) != 0)
#define SET_VK_ID_DestroyRenderPass_ON(masks) (masks).f1 |= (1ULL << (23))
#define VK_ID_DestroyRenderPass_BIT (1ULL << (23))
#define VK_ID_DestroyRenderPass_IDX (1)

#define PRINT_DestroyRenderPass IS_VK_ID_DestroyRenderPass_ON(wrapper_printer_masks)
#define TRY_DestroyRenderPass(TRUE, FALSE) TRUE
#define has_device_wrapper_DestroyRenderPass(...) (wrapper_device_entrypoints.DestroyRenderPass)
#define has_physical_device_wrapper_DestroyRenderPass(...) (wrapper_physical_device_entrypoints.DestroyRenderPass)
#define name_of_wrapper_DestroyRenderPass(...) "wrapper_DestroyRenderPass"
#define VK_ID_GetRenderAreaGranularity 88
#define IS_VK_ID_GetRenderAreaGranularity_ON(masks) (((masks).f1 & (1ULL << (24))) != 0)
#define SET_VK_ID_GetRenderAreaGranularity_ON(masks) (masks).f1 |= (1ULL << (24))
#define VK_ID_GetRenderAreaGranularity_BIT (1ULL << (24))
#define VK_ID_GetRenderAreaGranularity_IDX (1)

#define PRINT_GetRenderAreaGranularity IS_VK_ID_GetRenderAreaGranularity_ON(wrapper_printer_masks)
#define TRY_GetRenderAreaGranularity(TRUE, FALSE) TRUE
#define has_device_wrapper_GetRenderAreaGranularity(...) (wrapper_device_entrypoints.GetRenderAreaGranularity)
#define has_physical_device_wrapper_GetRenderAreaGranularity(...) (wrapper_physical_device_entrypoints.GetRenderAreaGranularity)
#define name_of_wrapper_GetRenderAreaGranularity(...) "wrapper_GetRenderAreaGranularity"
#define VK_ID_GetRenderingAreaGranularityKHR 89
#define IS_VK_ID_GetRenderingAreaGranularityKHR_ON(masks) (((masks).f1 & (1ULL << (25))) != 0)
#define SET_VK_ID_GetRenderingAreaGranularityKHR_ON(masks) (masks).f1 |= (1ULL << (25))
#define VK_ID_GetRenderingAreaGranularityKHR_BIT (1ULL << (25))
#define VK_ID_GetRenderingAreaGranularityKHR_IDX (1)

#define PRINT_GetRenderingAreaGranularityKHR IS_VK_ID_GetRenderingAreaGranularityKHR_ON(wrapper_printer_masks)
#define TRY_GetRenderingAreaGranularityKHR(TRUE, FALSE) TRUE
#define has_device_wrapper_GetRenderingAreaGranularityKHR(...) (wrapper_device_entrypoints.GetRenderingAreaGranularityKHR)
#define has_physical_device_wrapper_GetRenderingAreaGranularityKHR(...) (wrapper_physical_device_entrypoints.GetRenderingAreaGranularityKHR)
#define name_of_wrapper_GetRenderingAreaGranularityKHR(...) "wrapper_GetRenderingAreaGranularityKHR"
#define VK_ID_CreateCommandPool 90
#define IS_VK_ID_CreateCommandPool_ON(masks) (((masks).f1 & (1ULL << (26))) != 0)
#define SET_VK_ID_CreateCommandPool_ON(masks) (masks).f1 |= (1ULL << (26))
#define VK_ID_CreateCommandPool_BIT (1ULL << (26))
#define VK_ID_CreateCommandPool_IDX (1)

#define PRINT_CreateCommandPool IS_VK_ID_CreateCommandPool_ON(wrapper_printer_masks)
#define TRY_CreateCommandPool(TRUE, FALSE) TRUE
#define has_device_wrapper_CreateCommandPool(...) (wrapper_device_entrypoints.CreateCommandPool)
#define has_physical_device_wrapper_CreateCommandPool(...) (wrapper_physical_device_entrypoints.CreateCommandPool)
#define name_of_wrapper_CreateCommandPool(...) "wrapper_CreateCommandPool"
#define VK_ID_DestroyCommandPool 91
#define IS_VK_ID_DestroyCommandPool_ON(masks) (((masks).f1 & (1ULL << (27))) != 0)
#define SET_VK_ID_DestroyCommandPool_ON(masks) (masks).f1 |= (1ULL << (27))
#define VK_ID_DestroyCommandPool_BIT (1ULL << (27))
#define VK_ID_DestroyCommandPool_IDX (1)

#define PRINT_DestroyCommandPool IS_VK_ID_DestroyCommandPool_ON(wrapper_printer_masks)
#define TRY_DestroyCommandPool(TRUE, FALSE) TRUE
#define has_device_wrapper_DestroyCommandPool(...) (wrapper_device_entrypoints.DestroyCommandPool)
#define has_physical_device_wrapper_DestroyCommandPool(...) (wrapper_physical_device_entrypoints.DestroyCommandPool)
#define name_of_wrapper_DestroyCommandPool(...) "wrapper_DestroyCommandPool"
#define VK_ID_ResetCommandPool 92
#define IS_VK_ID_ResetCommandPool_ON(masks) (((masks).f1 & (1ULL << (28))) != 0)
#define SET_VK_ID_ResetCommandPool_ON(masks) (masks).f1 |= (1ULL << (28))
#define VK_ID_ResetCommandPool_BIT (1ULL << (28))
#define VK_ID_ResetCommandPool_IDX (1)

#define PRINT_ResetCommandPool IS_VK_ID_ResetCommandPool_ON(wrapper_printer_masks)
#define TRY_ResetCommandPool(TRUE, FALSE) TRUE
#define has_device_wrapper_ResetCommandPool(...) (wrapper_device_entrypoints.ResetCommandPool)
#define has_physical_device_wrapper_ResetCommandPool(...) (wrapper_physical_device_entrypoints.ResetCommandPool)
#define name_of_wrapper_ResetCommandPool(...) "wrapper_ResetCommandPool"
#define VK_ID_AllocateCommandBuffers 93
#define IS_VK_ID_AllocateCommandBuffers_ON(masks) (((masks).f1 & (1ULL << (29))) != 0)
#define SET_VK_ID_AllocateCommandBuffers_ON(masks) (masks).f1 |= (1ULL << (29))
#define VK_ID_AllocateCommandBuffers_BIT (1ULL << (29))
#define VK_ID_AllocateCommandBuffers_IDX (1)

#define PRINT_AllocateCommandBuffers IS_VK_ID_AllocateCommandBuffers_ON(wrapper_printer_masks)
#define TRY_AllocateCommandBuffers(TRUE, FALSE) TRUE
#define has_device_wrapper_AllocateCommandBuffers(...) (wrapper_device_entrypoints.AllocateCommandBuffers)
#define has_physical_device_wrapper_AllocateCommandBuffers(...) (wrapper_physical_device_entrypoints.AllocateCommandBuffers)
#define name_of_wrapper_AllocateCommandBuffers(...) "wrapper_AllocateCommandBuffers"
#define VK_ID_FreeCommandBuffers 94
#define IS_VK_ID_FreeCommandBuffers_ON(masks) (((masks).f1 & (1ULL << (30))) != 0)
#define SET_VK_ID_FreeCommandBuffers_ON(masks) (masks).f1 |= (1ULL << (30))
#define VK_ID_FreeCommandBuffers_BIT (1ULL << (30))
#define VK_ID_FreeCommandBuffers_IDX (1)

#define PRINT_FreeCommandBuffers IS_VK_ID_FreeCommandBuffers_ON(wrapper_printer_masks)
#define TRY_FreeCommandBuffers(TRUE, FALSE) TRUE
#define has_device_wrapper_FreeCommandBuffers(...) (wrapper_device_entrypoints.FreeCommandBuffers)
#define has_physical_device_wrapper_FreeCommandBuffers(...) (wrapper_physical_device_entrypoints.FreeCommandBuffers)
#define name_of_wrapper_FreeCommandBuffers(...) "wrapper_FreeCommandBuffers"
#define VK_ID_BeginCommandBuffer 95
#define IS_VK_ID_BeginCommandBuffer_ON(masks) (((masks).f1 & (1ULL << (31))) != 0)
#define SET_VK_ID_BeginCommandBuffer_ON(masks) (masks).f1 |= (1ULL << (31))
#define VK_ID_BeginCommandBuffer_BIT (1ULL << (31))
#define VK_ID_BeginCommandBuffer_IDX (1)

#define PRINT_BeginCommandBuffer IS_VK_ID_BeginCommandBuffer_ON(wrapper_printer_masks)
#define TRY_BeginCommandBuffer(TRUE, FALSE) TRUE
#define has_device_wrapper_BeginCommandBuffer(...) (wrapper_device_entrypoints.BeginCommandBuffer)
#define has_physical_device_wrapper_BeginCommandBuffer(...) (wrapper_physical_device_entrypoints.BeginCommandBuffer)
#define name_of_wrapper_BeginCommandBuffer(...) "wrapper_BeginCommandBuffer"
#define VK_ID_EndCommandBuffer 96
#define IS_VK_ID_EndCommandBuffer_ON(masks) (((masks).f1 & (1ULL << (32))) != 0)
#define SET_VK_ID_EndCommandBuffer_ON(masks) (masks).f1 |= (1ULL << (32))
#define VK_ID_EndCommandBuffer_BIT (1ULL << (32))
#define VK_ID_EndCommandBuffer_IDX (1)

#define PRINT_EndCommandBuffer IS_VK_ID_EndCommandBuffer_ON(wrapper_printer_masks)
#define TRY_EndCommandBuffer(TRUE, FALSE) TRUE
#define has_device_wrapper_EndCommandBuffer(...) (wrapper_device_entrypoints.EndCommandBuffer)
#define has_physical_device_wrapper_EndCommandBuffer(...) (wrapper_physical_device_entrypoints.EndCommandBuffer)
#define name_of_wrapper_EndCommandBuffer(...) "wrapper_EndCommandBuffer"
#define VK_ID_ResetCommandBuffer 97
#define IS_VK_ID_ResetCommandBuffer_ON(masks) (((masks).f1 & (1ULL << (33))) != 0)
#define SET_VK_ID_ResetCommandBuffer_ON(masks) (masks).f1 |= (1ULL << (33))
#define VK_ID_ResetCommandBuffer_BIT (1ULL << (33))
#define VK_ID_ResetCommandBuffer_IDX (1)

#define PRINT_ResetCommandBuffer IS_VK_ID_ResetCommandBuffer_ON(wrapper_printer_masks)
#define TRY_ResetCommandBuffer(TRUE, FALSE) TRUE
#define has_device_wrapper_ResetCommandBuffer(...) (wrapper_device_entrypoints.ResetCommandBuffer)
#define has_physical_device_wrapper_ResetCommandBuffer(...) (wrapper_physical_device_entrypoints.ResetCommandBuffer)
#define name_of_wrapper_ResetCommandBuffer(...) "wrapper_ResetCommandBuffer"
#define VK_ID_CmdBindPipeline 98
#define IS_VK_ID_CmdBindPipeline_ON(masks) (((masks).f1 & (1ULL << (34))) != 0)
#define SET_VK_ID_CmdBindPipeline_ON(masks) (masks).f1 |= (1ULL << (34))
#define VK_ID_CmdBindPipeline_BIT (1ULL << (34))
#define VK_ID_CmdBindPipeline_IDX (1)

#define PRINT_CmdBindPipeline IS_VK_ID_CmdBindPipeline_ON(wrapper_printer_masks)
#define TRY_CmdBindPipeline(TRUE, FALSE) TRUE
#define has_device_wrapper_CmdBindPipeline(...) (wrapper_device_entrypoints.CmdBindPipeline)
#define has_physical_device_wrapper_CmdBindPipeline(...) (wrapper_physical_device_entrypoints.CmdBindPipeline)
#define name_of_wrapper_CmdBindPipeline(...) "wrapper_CmdBindPipeline"
#define VK_ID_CmdSetAttachmentFeedbackLoopEnableEXT 99
#define IS_VK_ID_CmdSetAttachmentFeedbackLoopEnableEXT_ON(masks) (((masks).f1 & (1ULL << (35))) != 0)
#define SET_VK_ID_CmdSetAttachmentFeedbackLoopEnableEXT_ON(masks) (masks).f1 |= (1ULL << (35))
#define VK_ID_CmdSetAttachmentFeedbackLoopEnableEXT_BIT (1ULL << (35))
#define VK_ID_CmdSetAttachmentFeedbackLoopEnableEXT_IDX (1)

#define PRINT_CmdSetAttachmentFeedbackLoopEnableEXT IS_VK_ID_CmdSetAttachmentFeedbackLoopEnableEXT_ON(wrapper_printer_masks)
#define TRY_CmdSetAttachmentFeedbackLoopEnableEXT(TRUE, FALSE) TRUE
#define has_device_wrapper_CmdSetAttachmentFeedbackLoopEnableEXT(...) (wrapper_device_entrypoints.CmdSetAttachmentFeedbackLoopEnableEXT)
#define has_physical_device_wrapper_CmdSetAttachmentFeedbackLoopEnableEXT(...) (wrapper_physical_device_entrypoints.CmdSetAttachmentFeedbackLoopEnableEXT)
#define name_of_wrapper_CmdSetAttachmentFeedbackLoopEnableEXT(...) "wrapper_CmdSetAttachmentFeedbackLoopEnableEXT"
#define VK_ID_CmdSetViewport 100
#define IS_VK_ID_CmdSetViewport_ON(masks) (((masks).f1 & (1ULL << (36))) != 0)
#define SET_VK_ID_CmdSetViewport_ON(masks) (masks).f1 |= (1ULL << (36))
#define VK_ID_CmdSetViewport_BIT (1ULL << (36))
#define VK_ID_CmdSetViewport_IDX (1)

#define PRINT_CmdSetViewport IS_VK_ID_CmdSetViewport_ON(wrapper_printer_masks)
#define TRY_CmdSetViewport(TRUE, FALSE) TRUE
#define has_device_wrapper_CmdSetViewport(...) (wrapper_device_entrypoints.CmdSetViewport)
#define has_physical_device_wrapper_CmdSetViewport(...) (wrapper_physical_device_entrypoints.CmdSetViewport)
#define name_of_wrapper_CmdSetViewport(...) "wrapper_CmdSetViewport"
#define VK_ID_CmdSetScissor 101
#define IS_VK_ID_CmdSetScissor_ON(masks) (((masks).f1 & (1ULL << (37))) != 0)
#define SET_VK_ID_CmdSetScissor_ON(masks) (masks).f1 |= (1ULL << (37))
#define VK_ID_CmdSetScissor_BIT (1ULL << (37))
#define VK_ID_CmdSetScissor_IDX (1)

#define PRINT_CmdSetScissor IS_VK_ID_CmdSetScissor_ON(wrapper_printer_masks)
#define TRY_CmdSetScissor(TRUE, FALSE) TRUE
#define has_device_wrapper_CmdSetScissor(...) (wrapper_device_entrypoints.CmdSetScissor)
#define has_physical_device_wrapper_CmdSetScissor(...) (wrapper_physical_device_entrypoints.CmdSetScissor)
#define name_of_wrapper_CmdSetScissor(...) "wrapper_CmdSetScissor"
#define VK_ID_CmdSetLineWidth 102
#define IS_VK_ID_CmdSetLineWidth_ON(masks) (((masks).f1 & (1ULL << (38))) != 0)
#define SET_VK_ID_CmdSetLineWidth_ON(masks) (masks).f1 |= (1ULL << (38))
#define VK_ID_CmdSetLineWidth_BIT (1ULL << (38))
#define VK_ID_CmdSetLineWidth_IDX (1)

#define PRINT_CmdSetLineWidth IS_VK_ID_CmdSetLineWidth_ON(wrapper_printer_masks)
#define TRY_CmdSetLineWidth(TRUE, FALSE) TRUE
#define has_device_wrapper_CmdSetLineWidth(...) (wrapper_device_entrypoints.CmdSetLineWidth)
#define has_physical_device_wrapper_CmdSetLineWidth(...) (wrapper_physical_device_entrypoints.CmdSetLineWidth)
#define name_of_wrapper_CmdSetLineWidth(...) "wrapper_CmdSetLineWidth"
#define VK_ID_CmdSetDepthBias 103
#define IS_VK_ID_CmdSetDepthBias_ON(masks) (((masks).f1 & (1ULL << (39))) != 0)
#define SET_VK_ID_CmdSetDepthBias_ON(masks) (masks).f1 |= (1ULL << (39))
#define VK_ID_CmdSetDepthBias_BIT (1ULL << (39))
#define VK_ID_CmdSetDepthBias_IDX (1)

#define PRINT_CmdSetDepthBias IS_VK_ID_CmdSetDepthBias_ON(wrapper_printer_masks)
#define TRY_CmdSetDepthBias(TRUE, FALSE) TRUE
#define has_device_wrapper_CmdSetDepthBias(...) (wrapper_device_entrypoints.CmdSetDepthBias)
#define has_physical_device_wrapper_CmdSetDepthBias(...) (wrapper_physical_device_entrypoints.CmdSetDepthBias)
#define name_of_wrapper_CmdSetDepthBias(...) "wrapper_CmdSetDepthBias"
#define VK_ID_CmdSetBlendConstants 104
#define IS_VK_ID_CmdSetBlendConstants_ON(masks) (((masks).f1 & (1ULL << (40))) != 0)
#define SET_VK_ID_CmdSetBlendConstants_ON(masks) (masks).f1 |= (1ULL << (40))
#define VK_ID_CmdSetBlendConstants_BIT (1ULL << (40))
#define VK_ID_CmdSetBlendConstants_IDX (1)

#define PRINT_CmdSetBlendConstants IS_VK_ID_CmdSetBlendConstants_ON(wrapper_printer_masks)
#define TRY_CmdSetBlendConstants(TRUE, FALSE) TRUE
#define has_device_wrapper_CmdSetBlendConstants(...) (wrapper_device_entrypoints.CmdSetBlendConstants)
#define has_physical_device_wrapper_CmdSetBlendConstants(...) (wrapper_physical_device_entrypoints.CmdSetBlendConstants)
#define name_of_wrapper_CmdSetBlendConstants(...) "wrapper_CmdSetBlendConstants"
#define VK_ID_CmdSetDepthBounds 105
#define IS_VK_ID_CmdSetDepthBounds_ON(masks) (((masks).f1 & (1ULL << (41))) != 0)
#define SET_VK_ID_CmdSetDepthBounds_ON(masks) (masks).f1 |= (1ULL << (41))
#define VK_ID_CmdSetDepthBounds_BIT (1ULL << (41))
#define VK_ID_CmdSetDepthBounds_IDX (1)

#define PRINT_CmdSetDepthBounds IS_VK_ID_CmdSetDepthBounds_ON(wrapper_printer_masks)
#define TRY_CmdSetDepthBounds(TRUE, FALSE) TRUE
#define has_device_wrapper_CmdSetDepthBounds(...) (wrapper_device_entrypoints.CmdSetDepthBounds)
#define has_physical_device_wrapper_CmdSetDepthBounds(...) (wrapper_physical_device_entrypoints.CmdSetDepthBounds)
#define name_of_wrapper_CmdSetDepthBounds(...) "wrapper_CmdSetDepthBounds"
#define VK_ID_CmdSetStencilCompareMask 106
#define IS_VK_ID_CmdSetStencilCompareMask_ON(masks) (((masks).f1 & (1ULL << (42))) != 0)
#define SET_VK_ID_CmdSetStencilCompareMask_ON(masks) (masks).f1 |= (1ULL << (42))
#define VK_ID_CmdSetStencilCompareMask_BIT (1ULL << (42))
#define VK_ID_CmdSetStencilCompareMask_IDX (1)

#define PRINT_CmdSetStencilCompareMask IS_VK_ID_CmdSetStencilCompareMask_ON(wrapper_printer_masks)
#define TRY_CmdSetStencilCompareMask(TRUE, FALSE) TRUE
#define has_device_wrapper_CmdSetStencilCompareMask(...) (wrapper_device_entrypoints.CmdSetStencilCompareMask)
#define has_physical_device_wrapper_CmdSetStencilCompareMask(...) (wrapper_physical_device_entrypoints.CmdSetStencilCompareMask)
#define name_of_wrapper_CmdSetStencilCompareMask(...) "wrapper_CmdSetStencilCompareMask"
#define VK_ID_CmdSetStencilWriteMask 107
#define IS_VK_ID_CmdSetStencilWriteMask_ON(masks) (((masks).f1 & (1ULL << (43))) != 0)
#define SET_VK_ID_CmdSetStencilWriteMask_ON(masks) (masks).f1 |= (1ULL << (43))
#define VK_ID_CmdSetStencilWriteMask_BIT (1ULL << (43))
#define VK_ID_CmdSetStencilWriteMask_IDX (1)

#define PRINT_CmdSetStencilWriteMask IS_VK_ID_CmdSetStencilWriteMask_ON(wrapper_printer_masks)
#define TRY_CmdSetStencilWriteMask(TRUE, FALSE) TRUE
#define has_device_wrapper_CmdSetStencilWriteMask(...) (wrapper_device_entrypoints.CmdSetStencilWriteMask)
#define has_physical_device_wrapper_CmdSetStencilWriteMask(...) (wrapper_physical_device_entrypoints.CmdSetStencilWriteMask)
#define name_of_wrapper_CmdSetStencilWriteMask(...) "wrapper_CmdSetStencilWriteMask"
#define VK_ID_CmdSetStencilReference 108
#define IS_VK_ID_CmdSetStencilReference_ON(masks) (((masks).f1 & (1ULL << (44))) != 0)
#define SET_VK_ID_CmdSetStencilReference_ON(masks) (masks).f1 |= (1ULL << (44))
#define VK_ID_CmdSetStencilReference_BIT (1ULL << (44))
#define VK_ID_CmdSetStencilReference_IDX (1)

#define PRINT_CmdSetStencilReference IS_VK_ID_CmdSetStencilReference_ON(wrapper_printer_masks)
#define TRY_CmdSetStencilReference(TRUE, FALSE) TRUE
#define has_device_wrapper_CmdSetStencilReference(...) (wrapper_device_entrypoints.CmdSetStencilReference)
#define has_physical_device_wrapper_CmdSetStencilReference(...) (wrapper_physical_device_entrypoints.CmdSetStencilReference)
#define name_of_wrapper_CmdSetStencilReference(...) "wrapper_CmdSetStencilReference"
#define VK_ID_CmdBindDescriptorSets 109
#define IS_VK_ID_CmdBindDescriptorSets_ON(masks) (((masks).f1 & (1ULL << (45))) != 0)
#define SET_VK_ID_CmdBindDescriptorSets_ON(masks) (masks).f1 |= (1ULL << (45))
#define VK_ID_CmdBindDescriptorSets_BIT (1ULL << (45))
#define VK_ID_CmdBindDescriptorSets_IDX (1)

#define PRINT_CmdBindDescriptorSets IS_VK_ID_CmdBindDescriptorSets_ON(wrapper_printer_masks)
#define TRY_CmdBindDescriptorSets(TRUE, FALSE) TRUE
#define has_device_wrapper_CmdBindDescriptorSets(...) (wrapper_device_entrypoints.CmdBindDescriptorSets)
#define has_physical_device_wrapper_CmdBindDescriptorSets(...) (wrapper_physical_device_entrypoints.CmdBindDescriptorSets)
#define name_of_wrapper_CmdBindDescriptorSets(...) "wrapper_CmdBindDescriptorSets"
#define VK_ID_CmdBindIndexBuffer 110
#define IS_VK_ID_CmdBindIndexBuffer_ON(masks) (((masks).f1 & (1ULL << (46))) != 0)
#define SET_VK_ID_CmdBindIndexBuffer_ON(masks) (masks).f1 |= (1ULL << (46))
#define VK_ID_CmdBindIndexBuffer_BIT (1ULL << (46))
#define VK_ID_CmdBindIndexBuffer_IDX (1)

#define PRINT_CmdBindIndexBuffer IS_VK_ID_CmdBindIndexBuffer_ON(wrapper_printer_masks)
#define TRY_CmdBindIndexBuffer(TRUE, FALSE) TRUE
#define has_device_wrapper_CmdBindIndexBuffer(...) (wrapper_device_entrypoints.CmdBindIndexBuffer)
#define has_physical_device_wrapper_CmdBindIndexBuffer(...) (wrapper_physical_device_entrypoints.CmdBindIndexBuffer)
#define name_of_wrapper_CmdBindIndexBuffer(...) "wrapper_CmdBindIndexBuffer"
#define VK_ID_CmdBindVertexBuffers 111
#define IS_VK_ID_CmdBindVertexBuffers_ON(masks) (((masks).f1 & (1ULL << (47))) != 0)
#define SET_VK_ID_CmdBindVertexBuffers_ON(masks) (masks).f1 |= (1ULL << (47))
#define VK_ID_CmdBindVertexBuffers_BIT (1ULL << (47))
#define VK_ID_CmdBindVertexBuffers_IDX (1)

#define PRINT_CmdBindVertexBuffers IS_VK_ID_CmdBindVertexBuffers_ON(wrapper_printer_masks)
#define TRY_CmdBindVertexBuffers(TRUE, FALSE) TRUE
#define has_device_wrapper_CmdBindVertexBuffers(...) (wrapper_device_entrypoints.CmdBindVertexBuffers)
#define has_physical_device_wrapper_CmdBindVertexBuffers(...) (wrapper_physical_device_entrypoints.CmdBindVertexBuffers)
#define name_of_wrapper_CmdBindVertexBuffers(...) "wrapper_CmdBindVertexBuffers"
#define VK_ID_CmdDraw 112
#define IS_VK_ID_CmdDraw_ON(masks) (((masks).f1 & (1ULL << (48))) != 0)
#define SET_VK_ID_CmdDraw_ON(masks) (masks).f1 |= (1ULL << (48))
#define VK_ID_CmdDraw_BIT (1ULL << (48))
#define VK_ID_CmdDraw_IDX (1)

#define PRINT_CmdDraw IS_VK_ID_CmdDraw_ON(wrapper_printer_masks)
#define TRY_CmdDraw(TRUE, FALSE) TRUE
#define has_device_wrapper_CmdDraw(...) (wrapper_device_entrypoints.CmdDraw)
#define has_physical_device_wrapper_CmdDraw(...) (wrapper_physical_device_entrypoints.CmdDraw)
#define name_of_wrapper_CmdDraw(...) "wrapper_CmdDraw"
#define VK_ID_CmdDrawIndexed 113
#define IS_VK_ID_CmdDrawIndexed_ON(masks) (((masks).f1 & (1ULL << (49))) != 0)
#define SET_VK_ID_CmdDrawIndexed_ON(masks) (masks).f1 |= (1ULL << (49))
#define VK_ID_CmdDrawIndexed_BIT (1ULL << (49))
#define VK_ID_CmdDrawIndexed_IDX (1)

#define PRINT_CmdDrawIndexed IS_VK_ID_CmdDrawIndexed_ON(wrapper_printer_masks)
#define TRY_CmdDrawIndexed(TRUE, FALSE) TRUE
#define has_device_wrapper_CmdDrawIndexed(...) (wrapper_device_entrypoints.CmdDrawIndexed)
#define has_physical_device_wrapper_CmdDrawIndexed(...) (wrapper_physical_device_entrypoints.CmdDrawIndexed)
#define name_of_wrapper_CmdDrawIndexed(...) "wrapper_CmdDrawIndexed"
#define VK_ID_CmdDrawMultiEXT 114
#define IS_VK_ID_CmdDrawMultiEXT_ON(masks) (((masks).f1 & (1ULL << (50))) != 0)
#define SET_VK_ID_CmdDrawMultiEXT_ON(masks) (masks).f1 |= (1ULL << (50))
#define VK_ID_CmdDrawMultiEXT_BIT (1ULL << (50))
#define VK_ID_CmdDrawMultiEXT_IDX (1)

#define PRINT_CmdDrawMultiEXT IS_VK_ID_CmdDrawMultiEXT_ON(wrapper_printer_masks)
#define TRY_CmdDrawMultiEXT(TRUE, FALSE) TRUE
#define has_device_wrapper_CmdDrawMultiEXT(...) (wrapper_device_entrypoints.CmdDrawMultiEXT)
#define has_physical_device_wrapper_CmdDrawMultiEXT(...) (wrapper_physical_device_entrypoints.CmdDrawMultiEXT)
#define name_of_wrapper_CmdDrawMultiEXT(...) "wrapper_CmdDrawMultiEXT"
#define VK_ID_CmdDrawMultiIndexedEXT 115
#define IS_VK_ID_CmdDrawMultiIndexedEXT_ON(masks) (((masks).f1 & (1ULL << (51))) != 0)
#define SET_VK_ID_CmdDrawMultiIndexedEXT_ON(masks) (masks).f1 |= (1ULL << (51))
#define VK_ID_CmdDrawMultiIndexedEXT_BIT (1ULL << (51))
#define VK_ID_CmdDrawMultiIndexedEXT_IDX (1)

#define PRINT_CmdDrawMultiIndexedEXT IS_VK_ID_CmdDrawMultiIndexedEXT_ON(wrapper_printer_masks)
#define TRY_CmdDrawMultiIndexedEXT(TRUE, FALSE) TRUE
#define has_device_wrapper_CmdDrawMultiIndexedEXT(...) (wrapper_device_entrypoints.CmdDrawMultiIndexedEXT)
#define has_physical_device_wrapper_CmdDrawMultiIndexedEXT(...) (wrapper_physical_device_entrypoints.CmdDrawMultiIndexedEXT)
#define name_of_wrapper_CmdDrawMultiIndexedEXT(...) "wrapper_CmdDrawMultiIndexedEXT"
#define VK_ID_CmdDrawIndirect 116
#define IS_VK_ID_CmdDrawIndirect_ON(masks) (((masks).f1 & (1ULL << (52))) != 0)
#define SET_VK_ID_CmdDrawIndirect_ON(masks) (masks).f1 |= (1ULL << (52))
#define VK_ID_CmdDrawIndirect_BIT (1ULL << (52))
#define VK_ID_CmdDrawIndirect_IDX (1)

#define PRINT_CmdDrawIndirect IS_VK_ID_CmdDrawIndirect_ON(wrapper_printer_masks)
#define TRY_CmdDrawIndirect(TRUE, FALSE) TRUE
#define has_device_wrapper_CmdDrawIndirect(...) (wrapper_device_entrypoints.CmdDrawIndirect)
#define has_physical_device_wrapper_CmdDrawIndirect(...) (wrapper_physical_device_entrypoints.CmdDrawIndirect)
#define name_of_wrapper_CmdDrawIndirect(...) "wrapper_CmdDrawIndirect"
#define VK_ID_CmdDrawIndexedIndirect 117
#define IS_VK_ID_CmdDrawIndexedIndirect_ON(masks) (((masks).f1 & (1ULL << (53))) != 0)
#define SET_VK_ID_CmdDrawIndexedIndirect_ON(masks) (masks).f1 |= (1ULL << (53))
#define VK_ID_CmdDrawIndexedIndirect_BIT (1ULL << (53))
#define VK_ID_CmdDrawIndexedIndirect_IDX (1)

#define PRINT_CmdDrawIndexedIndirect IS_VK_ID_CmdDrawIndexedIndirect_ON(wrapper_printer_masks)
#define TRY_CmdDrawIndexedIndirect(TRUE, FALSE) TRUE
#define has_device_wrapper_CmdDrawIndexedIndirect(...) (wrapper_device_entrypoints.CmdDrawIndexedIndirect)
#define has_physical_device_wrapper_CmdDrawIndexedIndirect(...) (wrapper_physical_device_entrypoints.CmdDrawIndexedIndirect)
#define name_of_wrapper_CmdDrawIndexedIndirect(...) "wrapper_CmdDrawIndexedIndirect"
#define VK_ID_CmdDispatch 118
#define IS_VK_ID_CmdDispatch_ON(masks) (((masks).f1 & (1ULL << (54))) != 0)
#define SET_VK_ID_CmdDispatch_ON(masks) (masks).f1 |= (1ULL << (54))
#define VK_ID_CmdDispatch_BIT (1ULL << (54))
#define VK_ID_CmdDispatch_IDX (1)

#define PRINT_CmdDispatch IS_VK_ID_CmdDispatch_ON(wrapper_printer_masks)
#define TRY_CmdDispatch(TRUE, FALSE) TRUE
#define has_device_wrapper_CmdDispatch(...) (wrapper_device_entrypoints.CmdDispatch)
#define has_physical_device_wrapper_CmdDispatch(...) (wrapper_physical_device_entrypoints.CmdDispatch)
#define name_of_wrapper_CmdDispatch(...) "wrapper_CmdDispatch"
#define VK_ID_CmdDispatchIndirect 119
#define IS_VK_ID_CmdDispatchIndirect_ON(masks) (((masks).f1 & (1ULL << (55))) != 0)
#define SET_VK_ID_CmdDispatchIndirect_ON(masks) (masks).f1 |= (1ULL << (55))
#define VK_ID_CmdDispatchIndirect_BIT (1ULL << (55))
#define VK_ID_CmdDispatchIndirect_IDX (1)

#define PRINT_CmdDispatchIndirect IS_VK_ID_CmdDispatchIndirect_ON(wrapper_printer_masks)
#define TRY_CmdDispatchIndirect(TRUE, FALSE) TRUE
#define has_device_wrapper_CmdDispatchIndirect(...) (wrapper_device_entrypoints.CmdDispatchIndirect)
#define has_physical_device_wrapper_CmdDispatchIndirect(...) (wrapper_physical_device_entrypoints.CmdDispatchIndirect)
#define name_of_wrapper_CmdDispatchIndirect(...) "wrapper_CmdDispatchIndirect"
#define VK_ID_CmdSubpassShadingHUAWEI 120
#define IS_VK_ID_CmdSubpassShadingHUAWEI_ON(masks) (((masks).f1 & (1ULL << (56))) != 0)
#define SET_VK_ID_CmdSubpassShadingHUAWEI_ON(masks) (masks).f1 |= (1ULL << (56))
#define VK_ID_CmdSubpassShadingHUAWEI_BIT (1ULL << (56))
#define VK_ID_CmdSubpassShadingHUAWEI_IDX (1)

#define PRINT_CmdSubpassShadingHUAWEI IS_VK_ID_CmdSubpassShadingHUAWEI_ON(wrapper_printer_masks)
#define TRY_CmdSubpassShadingHUAWEI(TRUE, FALSE) TRUE
#define has_device_wrapper_CmdSubpassShadingHUAWEI(...) (wrapper_device_entrypoints.CmdSubpassShadingHUAWEI)
#define has_physical_device_wrapper_CmdSubpassShadingHUAWEI(...) (wrapper_physical_device_entrypoints.CmdSubpassShadingHUAWEI)
#define name_of_wrapper_CmdSubpassShadingHUAWEI(...) "wrapper_CmdSubpassShadingHUAWEI"
#define VK_ID_CmdDrawClusterHUAWEI 121
#define IS_VK_ID_CmdDrawClusterHUAWEI_ON(masks) (((masks).f1 & (1ULL << (57))) != 0)
#define SET_VK_ID_CmdDrawClusterHUAWEI_ON(masks) (masks).f1 |= (1ULL << (57))
#define VK_ID_CmdDrawClusterHUAWEI_BIT (1ULL << (57))
#define VK_ID_CmdDrawClusterHUAWEI_IDX (1)

#define PRINT_CmdDrawClusterHUAWEI IS_VK_ID_CmdDrawClusterHUAWEI_ON(wrapper_printer_masks)
#define TRY_CmdDrawClusterHUAWEI(TRUE, FALSE) TRUE
#define has_device_wrapper_CmdDrawClusterHUAWEI(...) (wrapper_device_entrypoints.CmdDrawClusterHUAWEI)
#define has_physical_device_wrapper_CmdDrawClusterHUAWEI(...) (wrapper_physical_device_entrypoints.CmdDrawClusterHUAWEI)
#define name_of_wrapper_CmdDrawClusterHUAWEI(...) "wrapper_CmdDrawClusterHUAWEI"
#define VK_ID_CmdDrawClusterIndirectHUAWEI 122
#define IS_VK_ID_CmdDrawClusterIndirectHUAWEI_ON(masks) (((masks).f1 & (1ULL << (58))) != 0)
#define SET_VK_ID_CmdDrawClusterIndirectHUAWEI_ON(masks) (masks).f1 |= (1ULL << (58))
#define VK_ID_CmdDrawClusterIndirectHUAWEI_BIT (1ULL << (58))
#define VK_ID_CmdDrawClusterIndirectHUAWEI_IDX (1)

#define PRINT_CmdDrawClusterIndirectHUAWEI IS_VK_ID_CmdDrawClusterIndirectHUAWEI_ON(wrapper_printer_masks)
#define TRY_CmdDrawClusterIndirectHUAWEI(TRUE, FALSE) TRUE
#define has_device_wrapper_CmdDrawClusterIndirectHUAWEI(...) (wrapper_device_entrypoints.CmdDrawClusterIndirectHUAWEI)
#define has_physical_device_wrapper_CmdDrawClusterIndirectHUAWEI(...) (wrapper_physical_device_entrypoints.CmdDrawClusterIndirectHUAWEI)
#define name_of_wrapper_CmdDrawClusterIndirectHUAWEI(...) "wrapper_CmdDrawClusterIndirectHUAWEI"
#define VK_ID_CmdUpdatePipelineIndirectBufferNV 123
#define IS_VK_ID_CmdUpdatePipelineIndirectBufferNV_ON(masks) (((masks).f1 & (1ULL << (59))) != 0)
#define SET_VK_ID_CmdUpdatePipelineIndirectBufferNV_ON(masks) (masks).f1 |= (1ULL << (59))
#define VK_ID_CmdUpdatePipelineIndirectBufferNV_BIT (1ULL << (59))
#define VK_ID_CmdUpdatePipelineIndirectBufferNV_IDX (1)

#define PRINT_CmdUpdatePipelineIndirectBufferNV IS_VK_ID_CmdUpdatePipelineIndirectBufferNV_ON(wrapper_printer_masks)
#define TRY_CmdUpdatePipelineIndirectBufferNV(TRUE, FALSE) TRUE
#define has_device_wrapper_CmdUpdatePipelineIndirectBufferNV(...) (wrapper_device_entrypoints.CmdUpdatePipelineIndirectBufferNV)
#define has_physical_device_wrapper_CmdUpdatePipelineIndirectBufferNV(...) (wrapper_physical_device_entrypoints.CmdUpdatePipelineIndirectBufferNV)
#define name_of_wrapper_CmdUpdatePipelineIndirectBufferNV(...) "wrapper_CmdUpdatePipelineIndirectBufferNV"
#define VK_ID_CmdCopyBuffer 124
#define IS_VK_ID_CmdCopyBuffer_ON(masks) (((masks).f1 & (1ULL << (60))) != 0)
#define SET_VK_ID_CmdCopyBuffer_ON(masks) (masks).f1 |= (1ULL << (60))
#define VK_ID_CmdCopyBuffer_BIT (1ULL << (60))
#define VK_ID_CmdCopyBuffer_IDX (1)

#define PRINT_CmdCopyBuffer IS_VK_ID_CmdCopyBuffer_ON(wrapper_printer_masks)
#define TRY_CmdCopyBuffer(TRUE, FALSE) TRUE
#define has_device_wrapper_CmdCopyBuffer(...) (wrapper_device_entrypoints.CmdCopyBuffer)
#define has_physical_device_wrapper_CmdCopyBuffer(...) (wrapper_physical_device_entrypoints.CmdCopyBuffer)
#define name_of_wrapper_CmdCopyBuffer(...) "wrapper_CmdCopyBuffer"
#define VK_ID_CmdCopyImage 125
#define IS_VK_ID_CmdCopyImage_ON(masks) (((masks).f1 & (1ULL << (61))) != 0)
#define SET_VK_ID_CmdCopyImage_ON(masks) (masks).f1 |= (1ULL << (61))
#define VK_ID_CmdCopyImage_BIT (1ULL << (61))
#define VK_ID_CmdCopyImage_IDX (1)

#define PRINT_CmdCopyImage IS_VK_ID_CmdCopyImage_ON(wrapper_printer_masks)
#define TRY_CmdCopyImage(TRUE, FALSE) TRUE
#define has_device_wrapper_CmdCopyImage(...) (wrapper_device_entrypoints.CmdCopyImage)
#define has_physical_device_wrapper_CmdCopyImage(...) (wrapper_physical_device_entrypoints.CmdCopyImage)
#define name_of_wrapper_CmdCopyImage(...) "wrapper_CmdCopyImage"
#define VK_ID_CmdBlitImage 126
#define IS_VK_ID_CmdBlitImage_ON(masks) (((masks).f1 & (1ULL << (62))) != 0)
#define SET_VK_ID_CmdBlitImage_ON(masks) (masks).f1 |= (1ULL << (62))
#define VK_ID_CmdBlitImage_BIT (1ULL << (62))
#define VK_ID_CmdBlitImage_IDX (1)

#define PRINT_CmdBlitImage IS_VK_ID_CmdBlitImage_ON(wrapper_printer_masks)
#define TRY_CmdBlitImage(TRUE, FALSE) TRUE
#define has_device_wrapper_CmdBlitImage(...) (wrapper_device_entrypoints.CmdBlitImage)
#define has_physical_device_wrapper_CmdBlitImage(...) (wrapper_physical_device_entrypoints.CmdBlitImage)
#define name_of_wrapper_CmdBlitImage(...) "wrapper_CmdBlitImage"
#define VK_ID_CmdCopyBufferToImage 127
#define IS_VK_ID_CmdCopyBufferToImage_ON(masks) (((masks).f1 & (1ULL << (63))) != 0)
#define SET_VK_ID_CmdCopyBufferToImage_ON(masks) (masks).f1 |= (1ULL << (63))
#define VK_ID_CmdCopyBufferToImage_BIT (1ULL << (63))
#define VK_ID_CmdCopyBufferToImage_IDX (1)

#define PRINT_CmdCopyBufferToImage IS_VK_ID_CmdCopyBufferToImage_ON(wrapper_printer_masks)
#define TRY_CmdCopyBufferToImage(TRUE, FALSE) TRUE
#define has_device_wrapper_CmdCopyBufferToImage(...) (wrapper_device_entrypoints.CmdCopyBufferToImage)
#define has_physical_device_wrapper_CmdCopyBufferToImage(...) (wrapper_physical_device_entrypoints.CmdCopyBufferToImage)
#define name_of_wrapper_CmdCopyBufferToImage(...) "wrapper_CmdCopyBufferToImage"
#define VK_ID_CmdCopyImageToBuffer 128
#define IS_VK_ID_CmdCopyImageToBuffer_ON(masks) (((masks).f2 & (1ULL << (0))) != 0)
#define SET_VK_ID_CmdCopyImageToBuffer_ON(masks) (masks).f2 |= (1ULL << (0))
#define VK_ID_CmdCopyImageToBuffer_BIT (1ULL << (0))
#define VK_ID_CmdCopyImageToBuffer_IDX (2)

#define PRINT_CmdCopyImageToBuffer IS_VK_ID_CmdCopyImageToBuffer_ON(wrapper_printer_masks)
#define TRY_CmdCopyImageToBuffer(TRUE, FALSE) TRUE
#define has_device_wrapper_CmdCopyImageToBuffer(...) (wrapper_device_entrypoints.CmdCopyImageToBuffer)
#define has_physical_device_wrapper_CmdCopyImageToBuffer(...) (wrapper_physical_device_entrypoints.CmdCopyImageToBuffer)
#define name_of_wrapper_CmdCopyImageToBuffer(...) "wrapper_CmdCopyImageToBuffer"
#define VK_ID_CmdCopyMemoryIndirectNV 129
#define IS_VK_ID_CmdCopyMemoryIndirectNV_ON(masks) (((masks).f2 & (1ULL << (1))) != 0)
#define SET_VK_ID_CmdCopyMemoryIndirectNV_ON(masks) (masks).f2 |= (1ULL << (1))
#define VK_ID_CmdCopyMemoryIndirectNV_BIT (1ULL << (1))
#define VK_ID_CmdCopyMemoryIndirectNV_IDX (2)

#define PRINT_CmdCopyMemoryIndirectNV IS_VK_ID_CmdCopyMemoryIndirectNV_ON(wrapper_printer_masks)
#define TRY_CmdCopyMemoryIndirectNV(TRUE, FALSE) TRUE
#define has_device_wrapper_CmdCopyMemoryIndirectNV(...) (wrapper_device_entrypoints.CmdCopyMemoryIndirectNV)
#define has_physical_device_wrapper_CmdCopyMemoryIndirectNV(...) (wrapper_physical_device_entrypoints.CmdCopyMemoryIndirectNV)
#define name_of_wrapper_CmdCopyMemoryIndirectNV(...) "wrapper_CmdCopyMemoryIndirectNV"
#define VK_ID_CmdCopyMemoryToImageIndirectNV 130
#define IS_VK_ID_CmdCopyMemoryToImageIndirectNV_ON(masks) (((masks).f2 & (1ULL << (2))) != 0)
#define SET_VK_ID_CmdCopyMemoryToImageIndirectNV_ON(masks) (masks).f2 |= (1ULL << (2))
#define VK_ID_CmdCopyMemoryToImageIndirectNV_BIT (1ULL << (2))
#define VK_ID_CmdCopyMemoryToImageIndirectNV_IDX (2)

#define PRINT_CmdCopyMemoryToImageIndirectNV IS_VK_ID_CmdCopyMemoryToImageIndirectNV_ON(wrapper_printer_masks)
#define TRY_CmdCopyMemoryToImageIndirectNV(TRUE, FALSE) TRUE
#define has_device_wrapper_CmdCopyMemoryToImageIndirectNV(...) (wrapper_device_entrypoints.CmdCopyMemoryToImageIndirectNV)
#define has_physical_device_wrapper_CmdCopyMemoryToImageIndirectNV(...) (wrapper_physical_device_entrypoints.CmdCopyMemoryToImageIndirectNV)
#define name_of_wrapper_CmdCopyMemoryToImageIndirectNV(...) "wrapper_CmdCopyMemoryToImageIndirectNV"
#define VK_ID_CmdUpdateBuffer 131
#define IS_VK_ID_CmdUpdateBuffer_ON(masks) (((masks).f2 & (1ULL << (3))) != 0)
#define SET_VK_ID_CmdUpdateBuffer_ON(masks) (masks).f2 |= (1ULL << (3))
#define VK_ID_CmdUpdateBuffer_BIT (1ULL << (3))
#define VK_ID_CmdUpdateBuffer_IDX (2)

#define PRINT_CmdUpdateBuffer IS_VK_ID_CmdUpdateBuffer_ON(wrapper_printer_masks)
#define TRY_CmdUpdateBuffer(TRUE, FALSE) TRUE
#define has_device_wrapper_CmdUpdateBuffer(...) (wrapper_device_entrypoints.CmdUpdateBuffer)
#define has_physical_device_wrapper_CmdUpdateBuffer(...) (wrapper_physical_device_entrypoints.CmdUpdateBuffer)
#define name_of_wrapper_CmdUpdateBuffer(...) "wrapper_CmdUpdateBuffer"
#define VK_ID_CmdFillBuffer 132
#define IS_VK_ID_CmdFillBuffer_ON(masks) (((masks).f2 & (1ULL << (4))) != 0)
#define SET_VK_ID_CmdFillBuffer_ON(masks) (masks).f2 |= (1ULL << (4))
#define VK_ID_CmdFillBuffer_BIT (1ULL << (4))
#define VK_ID_CmdFillBuffer_IDX (2)

#define PRINT_CmdFillBuffer IS_VK_ID_CmdFillBuffer_ON(wrapper_printer_masks)
#define TRY_CmdFillBuffer(TRUE, FALSE) TRUE
#define has_device_wrapper_CmdFillBuffer(...) (wrapper_device_entrypoints.CmdFillBuffer)
#define has_physical_device_wrapper_CmdFillBuffer(...) (wrapper_physical_device_entrypoints.CmdFillBuffer)
#define name_of_wrapper_CmdFillBuffer(...) "wrapper_CmdFillBuffer"
#define VK_ID_CmdClearColorImage 133
#define IS_VK_ID_CmdClearColorImage_ON(masks) (((masks).f2 & (1ULL << (5))) != 0)
#define SET_VK_ID_CmdClearColorImage_ON(masks) (masks).f2 |= (1ULL << (5))
#define VK_ID_CmdClearColorImage_BIT (1ULL << (5))
#define VK_ID_CmdClearColorImage_IDX (2)

#define PRINT_CmdClearColorImage IS_VK_ID_CmdClearColorImage_ON(wrapper_printer_masks)
#define TRY_CmdClearColorImage(TRUE, FALSE) TRUE
#define has_device_wrapper_CmdClearColorImage(...) (wrapper_device_entrypoints.CmdClearColorImage)
#define has_physical_device_wrapper_CmdClearColorImage(...) (wrapper_physical_device_entrypoints.CmdClearColorImage)
#define name_of_wrapper_CmdClearColorImage(...) "wrapper_CmdClearColorImage"
#define VK_ID_CmdClearDepthStencilImage 134
#define IS_VK_ID_CmdClearDepthStencilImage_ON(masks) (((masks).f2 & (1ULL << (6))) != 0)
#define SET_VK_ID_CmdClearDepthStencilImage_ON(masks) (masks).f2 |= (1ULL << (6))
#define VK_ID_CmdClearDepthStencilImage_BIT (1ULL << (6))
#define VK_ID_CmdClearDepthStencilImage_IDX (2)

#define PRINT_CmdClearDepthStencilImage IS_VK_ID_CmdClearDepthStencilImage_ON(wrapper_printer_masks)
#define TRY_CmdClearDepthStencilImage(TRUE, FALSE) TRUE
#define has_device_wrapper_CmdClearDepthStencilImage(...) (wrapper_device_entrypoints.CmdClearDepthStencilImage)
#define has_physical_device_wrapper_CmdClearDepthStencilImage(...) (wrapper_physical_device_entrypoints.CmdClearDepthStencilImage)
#define name_of_wrapper_CmdClearDepthStencilImage(...) "wrapper_CmdClearDepthStencilImage"
#define VK_ID_CmdClearAttachments 135
#define IS_VK_ID_CmdClearAttachments_ON(masks) (((masks).f2 & (1ULL << (7))) != 0)
#define SET_VK_ID_CmdClearAttachments_ON(masks) (masks).f2 |= (1ULL << (7))
#define VK_ID_CmdClearAttachments_BIT (1ULL << (7))
#define VK_ID_CmdClearAttachments_IDX (2)

#define PRINT_CmdClearAttachments IS_VK_ID_CmdClearAttachments_ON(wrapper_printer_masks)
#define TRY_CmdClearAttachments(TRUE, FALSE) TRUE
#define has_device_wrapper_CmdClearAttachments(...) (wrapper_device_entrypoints.CmdClearAttachments)
#define has_physical_device_wrapper_CmdClearAttachments(...) (wrapper_physical_device_entrypoints.CmdClearAttachments)
#define name_of_wrapper_CmdClearAttachments(...) "wrapper_CmdClearAttachments"
#define VK_ID_CmdResolveImage 136
#define IS_VK_ID_CmdResolveImage_ON(masks) (((masks).f2 & (1ULL << (8))) != 0)
#define SET_VK_ID_CmdResolveImage_ON(masks) (masks).f2 |= (1ULL << (8))
#define VK_ID_CmdResolveImage_BIT (1ULL << (8))
#define VK_ID_CmdResolveImage_IDX (2)

#define PRINT_CmdResolveImage IS_VK_ID_CmdResolveImage_ON(wrapper_printer_masks)
#define TRY_CmdResolveImage(TRUE, FALSE) TRUE
#define has_device_wrapper_CmdResolveImage(...) (wrapper_device_entrypoints.CmdResolveImage)
#define has_physical_device_wrapper_CmdResolveImage(...) (wrapper_physical_device_entrypoints.CmdResolveImage)
#define name_of_wrapper_CmdResolveImage(...) "wrapper_CmdResolveImage"
#define VK_ID_CmdSetEvent 137
#define IS_VK_ID_CmdSetEvent_ON(masks) (((masks).f2 & (1ULL << (9))) != 0)
#define SET_VK_ID_CmdSetEvent_ON(masks) (masks).f2 |= (1ULL << (9))
#define VK_ID_CmdSetEvent_BIT (1ULL << (9))
#define VK_ID_CmdSetEvent_IDX (2)

#define PRINT_CmdSetEvent IS_VK_ID_CmdSetEvent_ON(wrapper_printer_masks)
#define TRY_CmdSetEvent(TRUE, FALSE) TRUE
#define has_device_wrapper_CmdSetEvent(...) (wrapper_device_entrypoints.CmdSetEvent)
#define has_physical_device_wrapper_CmdSetEvent(...) (wrapper_physical_device_entrypoints.CmdSetEvent)
#define name_of_wrapper_CmdSetEvent(...) "wrapper_CmdSetEvent"
#define VK_ID_CmdResetEvent 138
#define IS_VK_ID_CmdResetEvent_ON(masks) (((masks).f2 & (1ULL << (10))) != 0)
#define SET_VK_ID_CmdResetEvent_ON(masks) (masks).f2 |= (1ULL << (10))
#define VK_ID_CmdResetEvent_BIT (1ULL << (10))
#define VK_ID_CmdResetEvent_IDX (2)

#define PRINT_CmdResetEvent IS_VK_ID_CmdResetEvent_ON(wrapper_printer_masks)
#define TRY_CmdResetEvent(TRUE, FALSE) TRUE
#define has_device_wrapper_CmdResetEvent(...) (wrapper_device_entrypoints.CmdResetEvent)
#define has_physical_device_wrapper_CmdResetEvent(...) (wrapper_physical_device_entrypoints.CmdResetEvent)
#define name_of_wrapper_CmdResetEvent(...) "wrapper_CmdResetEvent"
#define VK_ID_CmdWaitEvents 139
#define IS_VK_ID_CmdWaitEvents_ON(masks) (((masks).f2 & (1ULL << (11))) != 0)
#define SET_VK_ID_CmdWaitEvents_ON(masks) (masks).f2 |= (1ULL << (11))
#define VK_ID_CmdWaitEvents_BIT (1ULL << (11))
#define VK_ID_CmdWaitEvents_IDX (2)

#define PRINT_CmdWaitEvents IS_VK_ID_CmdWaitEvents_ON(wrapper_printer_masks)
#define TRY_CmdWaitEvents(TRUE, FALSE) TRUE
#define has_device_wrapper_CmdWaitEvents(...) (wrapper_device_entrypoints.CmdWaitEvents)
#define has_physical_device_wrapper_CmdWaitEvents(...) (wrapper_physical_device_entrypoints.CmdWaitEvents)
#define name_of_wrapper_CmdWaitEvents(...) "wrapper_CmdWaitEvents"
#define VK_ID_CmdPipelineBarrier 140
#define IS_VK_ID_CmdPipelineBarrier_ON(masks) (((masks).f2 & (1ULL << (12))) != 0)
#define SET_VK_ID_CmdPipelineBarrier_ON(masks) (masks).f2 |= (1ULL << (12))
#define VK_ID_CmdPipelineBarrier_BIT (1ULL << (12))
#define VK_ID_CmdPipelineBarrier_IDX (2)

#define PRINT_CmdPipelineBarrier IS_VK_ID_CmdPipelineBarrier_ON(wrapper_printer_masks)
#define TRY_CmdPipelineBarrier(TRUE, FALSE) TRUE
#define has_device_wrapper_CmdPipelineBarrier(...) (wrapper_device_entrypoints.CmdPipelineBarrier)
#define has_physical_device_wrapper_CmdPipelineBarrier(...) (wrapper_physical_device_entrypoints.CmdPipelineBarrier)
#define name_of_wrapper_CmdPipelineBarrier(...) "wrapper_CmdPipelineBarrier"
#define VK_ID_CmdBeginQuery 141
#define IS_VK_ID_CmdBeginQuery_ON(masks) (((masks).f2 & (1ULL << (13))) != 0)
#define SET_VK_ID_CmdBeginQuery_ON(masks) (masks).f2 |= (1ULL << (13))
#define VK_ID_CmdBeginQuery_BIT (1ULL << (13))
#define VK_ID_CmdBeginQuery_IDX (2)

#define PRINT_CmdBeginQuery IS_VK_ID_CmdBeginQuery_ON(wrapper_printer_masks)
#define TRY_CmdBeginQuery(TRUE, FALSE) TRUE
#define has_device_wrapper_CmdBeginQuery(...) (wrapper_device_entrypoints.CmdBeginQuery)
#define has_physical_device_wrapper_CmdBeginQuery(...) (wrapper_physical_device_entrypoints.CmdBeginQuery)
#define name_of_wrapper_CmdBeginQuery(...) "wrapper_CmdBeginQuery"
#define VK_ID_CmdEndQuery 142
#define IS_VK_ID_CmdEndQuery_ON(masks) (((masks).f2 & (1ULL << (14))) != 0)
#define SET_VK_ID_CmdEndQuery_ON(masks) (masks).f2 |= (1ULL << (14))
#define VK_ID_CmdEndQuery_BIT (1ULL << (14))
#define VK_ID_CmdEndQuery_IDX (2)

#define PRINT_CmdEndQuery IS_VK_ID_CmdEndQuery_ON(wrapper_printer_masks)
#define TRY_CmdEndQuery(TRUE, FALSE) TRUE
#define has_device_wrapper_CmdEndQuery(...) (wrapper_device_entrypoints.CmdEndQuery)
#define has_physical_device_wrapper_CmdEndQuery(...) (wrapper_physical_device_entrypoints.CmdEndQuery)
#define name_of_wrapper_CmdEndQuery(...) "wrapper_CmdEndQuery"
#define VK_ID_CmdBeginConditionalRenderingEXT 143
#define IS_VK_ID_CmdBeginConditionalRenderingEXT_ON(masks) (((masks).f2 & (1ULL << (15))) != 0)
#define SET_VK_ID_CmdBeginConditionalRenderingEXT_ON(masks) (masks).f2 |= (1ULL << (15))
#define VK_ID_CmdBeginConditionalRenderingEXT_BIT (1ULL << (15))
#define VK_ID_CmdBeginConditionalRenderingEXT_IDX (2)

#define PRINT_CmdBeginConditionalRenderingEXT IS_VK_ID_CmdBeginConditionalRenderingEXT_ON(wrapper_printer_masks)
#define TRY_CmdBeginConditionalRenderingEXT(TRUE, FALSE) TRUE
#define has_device_wrapper_CmdBeginConditionalRenderingEXT(...) (wrapper_device_entrypoints.CmdBeginConditionalRenderingEXT)
#define has_physical_device_wrapper_CmdBeginConditionalRenderingEXT(...) (wrapper_physical_device_entrypoints.CmdBeginConditionalRenderingEXT)
#define name_of_wrapper_CmdBeginConditionalRenderingEXT(...) "wrapper_CmdBeginConditionalRenderingEXT"
#define VK_ID_CmdEndConditionalRenderingEXT 144
#define IS_VK_ID_CmdEndConditionalRenderingEXT_ON(masks) (((masks).f2 & (1ULL << (16))) != 0)
#define SET_VK_ID_CmdEndConditionalRenderingEXT_ON(masks) (masks).f2 |= (1ULL << (16))
#define VK_ID_CmdEndConditionalRenderingEXT_BIT (1ULL << (16))
#define VK_ID_CmdEndConditionalRenderingEXT_IDX (2)

#define PRINT_CmdEndConditionalRenderingEXT IS_VK_ID_CmdEndConditionalRenderingEXT_ON(wrapper_printer_masks)
#define TRY_CmdEndConditionalRenderingEXT(TRUE, FALSE) TRUE
#define has_device_wrapper_CmdEndConditionalRenderingEXT(...) (wrapper_device_entrypoints.CmdEndConditionalRenderingEXT)
#define has_physical_device_wrapper_CmdEndConditionalRenderingEXT(...) (wrapper_physical_device_entrypoints.CmdEndConditionalRenderingEXT)
#define name_of_wrapper_CmdEndConditionalRenderingEXT(...) "wrapper_CmdEndConditionalRenderingEXT"
#define VK_ID_CmdResetQueryPool 145
#define IS_VK_ID_CmdResetQueryPool_ON(masks) (((masks).f2 & (1ULL << (17))) != 0)
#define SET_VK_ID_CmdResetQueryPool_ON(masks) (masks).f2 |= (1ULL << (17))
#define VK_ID_CmdResetQueryPool_BIT (1ULL << (17))
#define VK_ID_CmdResetQueryPool_IDX (2)

#define PRINT_CmdResetQueryPool IS_VK_ID_CmdResetQueryPool_ON(wrapper_printer_masks)
#define TRY_CmdResetQueryPool(TRUE, FALSE) TRUE
#define has_device_wrapper_CmdResetQueryPool(...) (wrapper_device_entrypoints.CmdResetQueryPool)
#define has_physical_device_wrapper_CmdResetQueryPool(...) (wrapper_physical_device_entrypoints.CmdResetQueryPool)
#define name_of_wrapper_CmdResetQueryPool(...) "wrapper_CmdResetQueryPool"
#define VK_ID_CmdWriteTimestamp 146
#define IS_VK_ID_CmdWriteTimestamp_ON(masks) (((masks).f2 & (1ULL << (18))) != 0)
#define SET_VK_ID_CmdWriteTimestamp_ON(masks) (masks).f2 |= (1ULL << (18))
#define VK_ID_CmdWriteTimestamp_BIT (1ULL << (18))
#define VK_ID_CmdWriteTimestamp_IDX (2)

#define PRINT_CmdWriteTimestamp IS_VK_ID_CmdWriteTimestamp_ON(wrapper_printer_masks)
#define TRY_CmdWriteTimestamp(TRUE, FALSE) TRUE
#define has_device_wrapper_CmdWriteTimestamp(...) (wrapper_device_entrypoints.CmdWriteTimestamp)
#define has_physical_device_wrapper_CmdWriteTimestamp(...) (wrapper_physical_device_entrypoints.CmdWriteTimestamp)
#define name_of_wrapper_CmdWriteTimestamp(...) "wrapper_CmdWriteTimestamp"
#define VK_ID_CmdCopyQueryPoolResults 147
#define IS_VK_ID_CmdCopyQueryPoolResults_ON(masks) (((masks).f2 & (1ULL << (19))) != 0)
#define SET_VK_ID_CmdCopyQueryPoolResults_ON(masks) (masks).f2 |= (1ULL << (19))
#define VK_ID_CmdCopyQueryPoolResults_BIT (1ULL << (19))
#define VK_ID_CmdCopyQueryPoolResults_IDX (2)

#define PRINT_CmdCopyQueryPoolResults IS_VK_ID_CmdCopyQueryPoolResults_ON(wrapper_printer_masks)
#define TRY_CmdCopyQueryPoolResults(TRUE, FALSE) TRUE
#define has_device_wrapper_CmdCopyQueryPoolResults(...) (wrapper_device_entrypoints.CmdCopyQueryPoolResults)
#define has_physical_device_wrapper_CmdCopyQueryPoolResults(...) (wrapper_physical_device_entrypoints.CmdCopyQueryPoolResults)
#define name_of_wrapper_CmdCopyQueryPoolResults(...) "wrapper_CmdCopyQueryPoolResults"
#define VK_ID_CmdPushConstants 148
#define IS_VK_ID_CmdPushConstants_ON(masks) (((masks).f2 & (1ULL << (20))) != 0)
#define SET_VK_ID_CmdPushConstants_ON(masks) (masks).f2 |= (1ULL << (20))
#define VK_ID_CmdPushConstants_BIT (1ULL << (20))
#define VK_ID_CmdPushConstants_IDX (2)

#define PRINT_CmdPushConstants IS_VK_ID_CmdPushConstants_ON(wrapper_printer_masks)
#define TRY_CmdPushConstants(TRUE, FALSE) TRUE
#define has_device_wrapper_CmdPushConstants(...) (wrapper_device_entrypoints.CmdPushConstants)
#define has_physical_device_wrapper_CmdPushConstants(...) (wrapper_physical_device_entrypoints.CmdPushConstants)
#define name_of_wrapper_CmdPushConstants(...) "wrapper_CmdPushConstants"
#define VK_ID_CmdBeginRenderPass 149
#define IS_VK_ID_CmdBeginRenderPass_ON(masks) (((masks).f2 & (1ULL << (21))) != 0)
#define SET_VK_ID_CmdBeginRenderPass_ON(masks) (masks).f2 |= (1ULL << (21))
#define VK_ID_CmdBeginRenderPass_BIT (1ULL << (21))
#define VK_ID_CmdBeginRenderPass_IDX (2)

#define PRINT_CmdBeginRenderPass IS_VK_ID_CmdBeginRenderPass_ON(wrapper_printer_masks)
#define TRY_CmdBeginRenderPass(TRUE, FALSE) TRUE
#define has_device_wrapper_CmdBeginRenderPass(...) (wrapper_device_entrypoints.CmdBeginRenderPass)
#define has_physical_device_wrapper_CmdBeginRenderPass(...) (wrapper_physical_device_entrypoints.CmdBeginRenderPass)
#define name_of_wrapper_CmdBeginRenderPass(...) "wrapper_CmdBeginRenderPass"
#define VK_ID_CmdNextSubpass 150
#define IS_VK_ID_CmdNextSubpass_ON(masks) (((masks).f2 & (1ULL << (22))) != 0)
#define SET_VK_ID_CmdNextSubpass_ON(masks) (masks).f2 |= (1ULL << (22))
#define VK_ID_CmdNextSubpass_BIT (1ULL << (22))
#define VK_ID_CmdNextSubpass_IDX (2)

#define PRINT_CmdNextSubpass IS_VK_ID_CmdNextSubpass_ON(wrapper_printer_masks)
#define TRY_CmdNextSubpass(TRUE, FALSE) TRUE
#define has_device_wrapper_CmdNextSubpass(...) (wrapper_device_entrypoints.CmdNextSubpass)
#define has_physical_device_wrapper_CmdNextSubpass(...) (wrapper_physical_device_entrypoints.CmdNextSubpass)
#define name_of_wrapper_CmdNextSubpass(...) "wrapper_CmdNextSubpass"
#define VK_ID_CmdEndRenderPass 151
#define IS_VK_ID_CmdEndRenderPass_ON(masks) (((masks).f2 & (1ULL << (23))) != 0)
#define SET_VK_ID_CmdEndRenderPass_ON(masks) (masks).f2 |= (1ULL << (23))
#define VK_ID_CmdEndRenderPass_BIT (1ULL << (23))
#define VK_ID_CmdEndRenderPass_IDX (2)

#define PRINT_CmdEndRenderPass IS_VK_ID_CmdEndRenderPass_ON(wrapper_printer_masks)
#define TRY_CmdEndRenderPass(TRUE, FALSE) TRUE
#define has_device_wrapper_CmdEndRenderPass(...) (wrapper_device_entrypoints.CmdEndRenderPass)
#define has_physical_device_wrapper_CmdEndRenderPass(...) (wrapper_physical_device_entrypoints.CmdEndRenderPass)
#define name_of_wrapper_CmdEndRenderPass(...) "wrapper_CmdEndRenderPass"
#define VK_ID_CmdExecuteCommands 152
#define IS_VK_ID_CmdExecuteCommands_ON(masks) (((masks).f2 & (1ULL << (24))) != 0)
#define SET_VK_ID_CmdExecuteCommands_ON(masks) (masks).f2 |= (1ULL << (24))
#define VK_ID_CmdExecuteCommands_BIT (1ULL << (24))
#define VK_ID_CmdExecuteCommands_IDX (2)

#define PRINT_CmdExecuteCommands IS_VK_ID_CmdExecuteCommands_ON(wrapper_printer_masks)
#define TRY_CmdExecuteCommands(TRUE, FALSE) TRUE
#define has_device_wrapper_CmdExecuteCommands(...) (wrapper_device_entrypoints.CmdExecuteCommands)
#define has_physical_device_wrapper_CmdExecuteCommands(...) (wrapper_physical_device_entrypoints.CmdExecuteCommands)
#define name_of_wrapper_CmdExecuteCommands(...) "wrapper_CmdExecuteCommands"
#ifdef VK_USE_PLATFORM_ANDROID_KHR
#define VK_ID_CreateAndroidSurfaceKHR 153
#define IS_VK_ID_CreateAndroidSurfaceKHR_ON(masks) (((masks).f2 & (1ULL << (25))) != 0)
#define SET_VK_ID_CreateAndroidSurfaceKHR_ON(masks) (masks).f2 |= (1ULL << (25))
#define VK_ID_CreateAndroidSurfaceKHR_BIT (1ULL << (25))
#define VK_ID_CreateAndroidSurfaceKHR_IDX (2)

#define PRINT_CreateAndroidSurfaceKHR IS_VK_ID_CreateAndroidSurfaceKHR_ON(wrapper_printer_masks)
#define TRY_CreateAndroidSurfaceKHR(TRUE, FALSE) TRUE
#define has_device_wrapper_CreateAndroidSurfaceKHR(...) (wrapper_device_entrypoints.CreateAndroidSurfaceKHR)
#define has_physical_device_wrapper_CreateAndroidSurfaceKHR(...) (wrapper_physical_device_entrypoints.CreateAndroidSurfaceKHR)
#define name_of_wrapper_CreateAndroidSurfaceKHR(...) "wrapper_CreateAndroidSurfaceKHR"
#else
#define TRY_CreateAndroidSurfaceKHR(TRUE, FALSE) FALSE
#endif
#define VK_ID_GetPhysicalDeviceDisplayPropertiesKHR 154
#define IS_VK_ID_GetPhysicalDeviceDisplayPropertiesKHR_ON(masks) (((masks).f2 & (1ULL << (26))) != 0)
#define SET_VK_ID_GetPhysicalDeviceDisplayPropertiesKHR_ON(masks) (masks).f2 |= (1ULL << (26))
#define VK_ID_GetPhysicalDeviceDisplayPropertiesKHR_BIT (1ULL << (26))
#define VK_ID_GetPhysicalDeviceDisplayPropertiesKHR_IDX (2)

#define PRINT_GetPhysicalDeviceDisplayPropertiesKHR IS_VK_ID_GetPhysicalDeviceDisplayPropertiesKHR_ON(wrapper_printer_masks)
#define TRY_GetPhysicalDeviceDisplayPropertiesKHR(TRUE, FALSE) TRUE
#define has_device_wrapper_GetPhysicalDeviceDisplayPropertiesKHR(...) (wrapper_device_entrypoints.GetPhysicalDeviceDisplayPropertiesKHR)
#define has_physical_device_wrapper_GetPhysicalDeviceDisplayPropertiesKHR(...) (wrapper_physical_device_entrypoints.GetPhysicalDeviceDisplayPropertiesKHR)
#define name_of_wrapper_GetPhysicalDeviceDisplayPropertiesKHR(...) "wrapper_GetPhysicalDeviceDisplayPropertiesKHR"
#define VK_ID_GetPhysicalDeviceDisplayPlanePropertiesKHR 155
#define IS_VK_ID_GetPhysicalDeviceDisplayPlanePropertiesKHR_ON(masks) (((masks).f2 & (1ULL << (27))) != 0)
#define SET_VK_ID_GetPhysicalDeviceDisplayPlanePropertiesKHR_ON(masks) (masks).f2 |= (1ULL << (27))
#define VK_ID_GetPhysicalDeviceDisplayPlanePropertiesKHR_BIT (1ULL << (27))
#define VK_ID_GetPhysicalDeviceDisplayPlanePropertiesKHR_IDX (2)

#define PRINT_GetPhysicalDeviceDisplayPlanePropertiesKHR IS_VK_ID_GetPhysicalDeviceDisplayPlanePropertiesKHR_ON(wrapper_printer_masks)
#define TRY_GetPhysicalDeviceDisplayPlanePropertiesKHR(TRUE, FALSE) TRUE
#define has_device_wrapper_GetPhysicalDeviceDisplayPlanePropertiesKHR(...) (wrapper_device_entrypoints.GetPhysicalDeviceDisplayPlanePropertiesKHR)
#define has_physical_device_wrapper_GetPhysicalDeviceDisplayPlanePropertiesKHR(...) (wrapper_physical_device_entrypoints.GetPhysicalDeviceDisplayPlanePropertiesKHR)
#define name_of_wrapper_GetPhysicalDeviceDisplayPlanePropertiesKHR(...) "wrapper_GetPhysicalDeviceDisplayPlanePropertiesKHR"
#define VK_ID_GetDisplayPlaneSupportedDisplaysKHR 156
#define IS_VK_ID_GetDisplayPlaneSupportedDisplaysKHR_ON(masks) (((masks).f2 & (1ULL << (28))) != 0)
#define SET_VK_ID_GetDisplayPlaneSupportedDisplaysKHR_ON(masks) (masks).f2 |= (1ULL << (28))
#define VK_ID_GetDisplayPlaneSupportedDisplaysKHR_BIT (1ULL << (28))
#define VK_ID_GetDisplayPlaneSupportedDisplaysKHR_IDX (2)

#define PRINT_GetDisplayPlaneSupportedDisplaysKHR IS_VK_ID_GetDisplayPlaneSupportedDisplaysKHR_ON(wrapper_printer_masks)
#define TRY_GetDisplayPlaneSupportedDisplaysKHR(TRUE, FALSE) TRUE
#define has_device_wrapper_GetDisplayPlaneSupportedDisplaysKHR(...) (wrapper_device_entrypoints.GetDisplayPlaneSupportedDisplaysKHR)
#define has_physical_device_wrapper_GetDisplayPlaneSupportedDisplaysKHR(...) (wrapper_physical_device_entrypoints.GetDisplayPlaneSupportedDisplaysKHR)
#define name_of_wrapper_GetDisplayPlaneSupportedDisplaysKHR(...) "wrapper_GetDisplayPlaneSupportedDisplaysKHR"
#define VK_ID_GetDisplayModePropertiesKHR 157
#define IS_VK_ID_GetDisplayModePropertiesKHR_ON(masks) (((masks).f2 & (1ULL << (29))) != 0)
#define SET_VK_ID_GetDisplayModePropertiesKHR_ON(masks) (masks).f2 |= (1ULL << (29))
#define VK_ID_GetDisplayModePropertiesKHR_BIT (1ULL << (29))
#define VK_ID_GetDisplayModePropertiesKHR_IDX (2)

#define PRINT_GetDisplayModePropertiesKHR IS_VK_ID_GetDisplayModePropertiesKHR_ON(wrapper_printer_masks)
#define TRY_GetDisplayModePropertiesKHR(TRUE, FALSE) TRUE
#define has_device_wrapper_GetDisplayModePropertiesKHR(...) (wrapper_device_entrypoints.GetDisplayModePropertiesKHR)
#define has_physical_device_wrapper_GetDisplayModePropertiesKHR(...) (wrapper_physical_device_entrypoints.GetDisplayModePropertiesKHR)
#define name_of_wrapper_GetDisplayModePropertiesKHR(...) "wrapper_GetDisplayModePropertiesKHR"
#define VK_ID_CreateDisplayModeKHR 158
#define IS_VK_ID_CreateDisplayModeKHR_ON(masks) (((masks).f2 & (1ULL << (30))) != 0)
#define SET_VK_ID_CreateDisplayModeKHR_ON(masks) (masks).f2 |= (1ULL << (30))
#define VK_ID_CreateDisplayModeKHR_BIT (1ULL << (30))
#define VK_ID_CreateDisplayModeKHR_IDX (2)

#define PRINT_CreateDisplayModeKHR IS_VK_ID_CreateDisplayModeKHR_ON(wrapper_printer_masks)
#define TRY_CreateDisplayModeKHR(TRUE, FALSE) TRUE
#define has_device_wrapper_CreateDisplayModeKHR(...) (wrapper_device_entrypoints.CreateDisplayModeKHR)
#define has_physical_device_wrapper_CreateDisplayModeKHR(...) (wrapper_physical_device_entrypoints.CreateDisplayModeKHR)
#define name_of_wrapper_CreateDisplayModeKHR(...) "wrapper_CreateDisplayModeKHR"
#define VK_ID_GetDisplayPlaneCapabilitiesKHR 159
#define IS_VK_ID_GetDisplayPlaneCapabilitiesKHR_ON(masks) (((masks).f2 & (1ULL << (31))) != 0)
#define SET_VK_ID_GetDisplayPlaneCapabilitiesKHR_ON(masks) (masks).f2 |= (1ULL << (31))
#define VK_ID_GetDisplayPlaneCapabilitiesKHR_BIT (1ULL << (31))
#define VK_ID_GetDisplayPlaneCapabilitiesKHR_IDX (2)

#define PRINT_GetDisplayPlaneCapabilitiesKHR IS_VK_ID_GetDisplayPlaneCapabilitiesKHR_ON(wrapper_printer_masks)
#define TRY_GetDisplayPlaneCapabilitiesKHR(TRUE, FALSE) TRUE
#define has_device_wrapper_GetDisplayPlaneCapabilitiesKHR(...) (wrapper_device_entrypoints.GetDisplayPlaneCapabilitiesKHR)
#define has_physical_device_wrapper_GetDisplayPlaneCapabilitiesKHR(...) (wrapper_physical_device_entrypoints.GetDisplayPlaneCapabilitiesKHR)
#define name_of_wrapper_GetDisplayPlaneCapabilitiesKHR(...) "wrapper_GetDisplayPlaneCapabilitiesKHR"
#define VK_ID_CreateDisplayPlaneSurfaceKHR 160
#define IS_VK_ID_CreateDisplayPlaneSurfaceKHR_ON(masks) (((masks).f2 & (1ULL << (32))) != 0)
#define SET_VK_ID_CreateDisplayPlaneSurfaceKHR_ON(masks) (masks).f2 |= (1ULL << (32))
#define VK_ID_CreateDisplayPlaneSurfaceKHR_BIT (1ULL << (32))
#define VK_ID_CreateDisplayPlaneSurfaceKHR_IDX (2)

#define PRINT_CreateDisplayPlaneSurfaceKHR IS_VK_ID_CreateDisplayPlaneSurfaceKHR_ON(wrapper_printer_masks)
#define TRY_CreateDisplayPlaneSurfaceKHR(TRUE, FALSE) TRUE
#define has_device_wrapper_CreateDisplayPlaneSurfaceKHR(...) (wrapper_device_entrypoints.CreateDisplayPlaneSurfaceKHR)
#define has_physical_device_wrapper_CreateDisplayPlaneSurfaceKHR(...) (wrapper_physical_device_entrypoints.CreateDisplayPlaneSurfaceKHR)
#define name_of_wrapper_CreateDisplayPlaneSurfaceKHR(...) "wrapper_CreateDisplayPlaneSurfaceKHR"
#define VK_ID_CreateSharedSwapchainsKHR 161
#define IS_VK_ID_CreateSharedSwapchainsKHR_ON(masks) (((masks).f2 & (1ULL << (33))) != 0)
#define SET_VK_ID_CreateSharedSwapchainsKHR_ON(masks) (masks).f2 |= (1ULL << (33))
#define VK_ID_CreateSharedSwapchainsKHR_BIT (1ULL << (33))
#define VK_ID_CreateSharedSwapchainsKHR_IDX (2)

#define PRINT_CreateSharedSwapchainsKHR IS_VK_ID_CreateSharedSwapchainsKHR_ON(wrapper_printer_masks)
#define TRY_CreateSharedSwapchainsKHR(TRUE, FALSE) TRUE
#define has_device_wrapper_CreateSharedSwapchainsKHR(...) (wrapper_device_entrypoints.CreateSharedSwapchainsKHR)
#define has_physical_device_wrapper_CreateSharedSwapchainsKHR(...) (wrapper_physical_device_entrypoints.CreateSharedSwapchainsKHR)
#define name_of_wrapper_CreateSharedSwapchainsKHR(...) "wrapper_CreateSharedSwapchainsKHR"
#define VK_ID_DestroySurfaceKHR 162
#define IS_VK_ID_DestroySurfaceKHR_ON(masks) (((masks).f2 & (1ULL << (34))) != 0)
#define SET_VK_ID_DestroySurfaceKHR_ON(masks) (masks).f2 |= (1ULL << (34))
#define VK_ID_DestroySurfaceKHR_BIT (1ULL << (34))
#define VK_ID_DestroySurfaceKHR_IDX (2)

#define PRINT_DestroySurfaceKHR IS_VK_ID_DestroySurfaceKHR_ON(wrapper_printer_masks)
#define TRY_DestroySurfaceKHR(TRUE, FALSE) TRUE
#define has_device_wrapper_DestroySurfaceKHR(...) (wrapper_device_entrypoints.DestroySurfaceKHR)
#define has_physical_device_wrapper_DestroySurfaceKHR(...) (wrapper_physical_device_entrypoints.DestroySurfaceKHR)
#define name_of_wrapper_DestroySurfaceKHR(...) "wrapper_DestroySurfaceKHR"
#define VK_ID_GetPhysicalDeviceSurfaceSupportKHR 163
#define IS_VK_ID_GetPhysicalDeviceSurfaceSupportKHR_ON(masks) (((masks).f2 & (1ULL << (35))) != 0)
#define SET_VK_ID_GetPhysicalDeviceSurfaceSupportKHR_ON(masks) (masks).f2 |= (1ULL << (35))
#define VK_ID_GetPhysicalDeviceSurfaceSupportKHR_BIT (1ULL << (35))
#define VK_ID_GetPhysicalDeviceSurfaceSupportKHR_IDX (2)

#define PRINT_GetPhysicalDeviceSurfaceSupportKHR IS_VK_ID_GetPhysicalDeviceSurfaceSupportKHR_ON(wrapper_printer_masks)
#define TRY_GetPhysicalDeviceSurfaceSupportKHR(TRUE, FALSE) TRUE
#define has_device_wrapper_GetPhysicalDeviceSurfaceSupportKHR(...) (wrapper_device_entrypoints.GetPhysicalDeviceSurfaceSupportKHR)
#define has_physical_device_wrapper_GetPhysicalDeviceSurfaceSupportKHR(...) (wrapper_physical_device_entrypoints.GetPhysicalDeviceSurfaceSupportKHR)
#define name_of_wrapper_GetPhysicalDeviceSurfaceSupportKHR(...) "wrapper_GetPhysicalDeviceSurfaceSupportKHR"
#define VK_ID_GetPhysicalDeviceSurfaceCapabilitiesKHR 164
#define IS_VK_ID_GetPhysicalDeviceSurfaceCapabilitiesKHR_ON(masks) (((masks).f2 & (1ULL << (36))) != 0)
#define SET_VK_ID_GetPhysicalDeviceSurfaceCapabilitiesKHR_ON(masks) (masks).f2 |= (1ULL << (36))
#define VK_ID_GetPhysicalDeviceSurfaceCapabilitiesKHR_BIT (1ULL << (36))
#define VK_ID_GetPhysicalDeviceSurfaceCapabilitiesKHR_IDX (2)

#define PRINT_GetPhysicalDeviceSurfaceCapabilitiesKHR IS_VK_ID_GetPhysicalDeviceSurfaceCapabilitiesKHR_ON(wrapper_printer_masks)
#define TRY_GetPhysicalDeviceSurfaceCapabilitiesKHR(TRUE, FALSE) TRUE
#define has_device_wrapper_GetPhysicalDeviceSurfaceCapabilitiesKHR(...) (wrapper_device_entrypoints.GetPhysicalDeviceSurfaceCapabilitiesKHR)
#define has_physical_device_wrapper_GetPhysicalDeviceSurfaceCapabilitiesKHR(...) (wrapper_physical_device_entrypoints.GetPhysicalDeviceSurfaceCapabilitiesKHR)
#define name_of_wrapper_GetPhysicalDeviceSurfaceCapabilitiesKHR(...) "wrapper_GetPhysicalDeviceSurfaceCapabilitiesKHR"
#define VK_ID_GetPhysicalDeviceSurfaceFormatsKHR 165
#define IS_VK_ID_GetPhysicalDeviceSurfaceFormatsKHR_ON(masks) (((masks).f2 & (1ULL << (37))) != 0)
#define SET_VK_ID_GetPhysicalDeviceSurfaceFormatsKHR_ON(masks) (masks).f2 |= (1ULL << (37))
#define VK_ID_GetPhysicalDeviceSurfaceFormatsKHR_BIT (1ULL << (37))
#define VK_ID_GetPhysicalDeviceSurfaceFormatsKHR_IDX (2)

#define PRINT_GetPhysicalDeviceSurfaceFormatsKHR IS_VK_ID_GetPhysicalDeviceSurfaceFormatsKHR_ON(wrapper_printer_masks)
#define TRY_GetPhysicalDeviceSurfaceFormatsKHR(TRUE, FALSE) TRUE
#define has_device_wrapper_GetPhysicalDeviceSurfaceFormatsKHR(...) (wrapper_device_entrypoints.GetPhysicalDeviceSurfaceFormatsKHR)
#define has_physical_device_wrapper_GetPhysicalDeviceSurfaceFormatsKHR(...) (wrapper_physical_device_entrypoints.GetPhysicalDeviceSurfaceFormatsKHR)
#define name_of_wrapper_GetPhysicalDeviceSurfaceFormatsKHR(...) "wrapper_GetPhysicalDeviceSurfaceFormatsKHR"
#define VK_ID_GetPhysicalDeviceSurfacePresentModesKHR 166
#define IS_VK_ID_GetPhysicalDeviceSurfacePresentModesKHR_ON(masks) (((masks).f2 & (1ULL << (38))) != 0)
#define SET_VK_ID_GetPhysicalDeviceSurfacePresentModesKHR_ON(masks) (masks).f2 |= (1ULL << (38))
#define VK_ID_GetPhysicalDeviceSurfacePresentModesKHR_BIT (1ULL << (38))
#define VK_ID_GetPhysicalDeviceSurfacePresentModesKHR_IDX (2)

#define PRINT_GetPhysicalDeviceSurfacePresentModesKHR IS_VK_ID_GetPhysicalDeviceSurfacePresentModesKHR_ON(wrapper_printer_masks)
#define TRY_GetPhysicalDeviceSurfacePresentModesKHR(TRUE, FALSE) TRUE
#define has_device_wrapper_GetPhysicalDeviceSurfacePresentModesKHR(...) (wrapper_device_entrypoints.GetPhysicalDeviceSurfacePresentModesKHR)
#define has_physical_device_wrapper_GetPhysicalDeviceSurfacePresentModesKHR(...) (wrapper_physical_device_entrypoints.GetPhysicalDeviceSurfacePresentModesKHR)
#define name_of_wrapper_GetPhysicalDeviceSurfacePresentModesKHR(...) "wrapper_GetPhysicalDeviceSurfacePresentModesKHR"
#define VK_ID_CreateSwapchainKHR 167
#define IS_VK_ID_CreateSwapchainKHR_ON(masks) (((masks).f2 & (1ULL << (39))) != 0)
#define SET_VK_ID_CreateSwapchainKHR_ON(masks) (masks).f2 |= (1ULL << (39))
#define VK_ID_CreateSwapchainKHR_BIT (1ULL << (39))
#define VK_ID_CreateSwapchainKHR_IDX (2)

#define PRINT_CreateSwapchainKHR IS_VK_ID_CreateSwapchainKHR_ON(wrapper_printer_masks)
#define TRY_CreateSwapchainKHR(TRUE, FALSE) TRUE
#define has_device_wrapper_CreateSwapchainKHR(...) (wrapper_device_entrypoints.CreateSwapchainKHR)
#define has_physical_device_wrapper_CreateSwapchainKHR(...) (wrapper_physical_device_entrypoints.CreateSwapchainKHR)
#define name_of_wrapper_CreateSwapchainKHR(...) "wrapper_CreateSwapchainKHR"
#define VK_ID_DestroySwapchainKHR 168
#define IS_VK_ID_DestroySwapchainKHR_ON(masks) (((masks).f2 & (1ULL << (40))) != 0)
#define SET_VK_ID_DestroySwapchainKHR_ON(masks) (masks).f2 |= (1ULL << (40))
#define VK_ID_DestroySwapchainKHR_BIT (1ULL << (40))
#define VK_ID_DestroySwapchainKHR_IDX (2)

#define PRINT_DestroySwapchainKHR IS_VK_ID_DestroySwapchainKHR_ON(wrapper_printer_masks)
#define TRY_DestroySwapchainKHR(TRUE, FALSE) TRUE
#define has_device_wrapper_DestroySwapchainKHR(...) (wrapper_device_entrypoints.DestroySwapchainKHR)
#define has_physical_device_wrapper_DestroySwapchainKHR(...) (wrapper_physical_device_entrypoints.DestroySwapchainKHR)
#define name_of_wrapper_DestroySwapchainKHR(...) "wrapper_DestroySwapchainKHR"
#define VK_ID_GetSwapchainImagesKHR 169
#define IS_VK_ID_GetSwapchainImagesKHR_ON(masks) (((masks).f2 & (1ULL << (41))) != 0)
#define SET_VK_ID_GetSwapchainImagesKHR_ON(masks) (masks).f2 |= (1ULL << (41))
#define VK_ID_GetSwapchainImagesKHR_BIT (1ULL << (41))
#define VK_ID_GetSwapchainImagesKHR_IDX (2)

#define PRINT_GetSwapchainImagesKHR IS_VK_ID_GetSwapchainImagesKHR_ON(wrapper_printer_masks)
#define TRY_GetSwapchainImagesKHR(TRUE, FALSE) TRUE
#define has_device_wrapper_GetSwapchainImagesKHR(...) (wrapper_device_entrypoints.GetSwapchainImagesKHR)
#define has_physical_device_wrapper_GetSwapchainImagesKHR(...) (wrapper_physical_device_entrypoints.GetSwapchainImagesKHR)
#define name_of_wrapper_GetSwapchainImagesKHR(...) "wrapper_GetSwapchainImagesKHR"
#define VK_ID_AcquireNextImageKHR 170
#define IS_VK_ID_AcquireNextImageKHR_ON(masks) (((masks).f2 & (1ULL << (42))) != 0)
#define SET_VK_ID_AcquireNextImageKHR_ON(masks) (masks).f2 |= (1ULL << (42))
#define VK_ID_AcquireNextImageKHR_BIT (1ULL << (42))
#define VK_ID_AcquireNextImageKHR_IDX (2)

#define PRINT_AcquireNextImageKHR IS_VK_ID_AcquireNextImageKHR_ON(wrapper_printer_masks)
#define TRY_AcquireNextImageKHR(TRUE, FALSE) TRUE
#define has_device_wrapper_AcquireNextImageKHR(...) (wrapper_device_entrypoints.AcquireNextImageKHR)
#define has_physical_device_wrapper_AcquireNextImageKHR(...) (wrapper_physical_device_entrypoints.AcquireNextImageKHR)
#define name_of_wrapper_AcquireNextImageKHR(...) "wrapper_AcquireNextImageKHR"
#define VK_ID_QueuePresentKHR 171
#define IS_VK_ID_QueuePresentKHR_ON(masks) (((masks).f2 & (1ULL << (43))) != 0)
#define SET_VK_ID_QueuePresentKHR_ON(masks) (masks).f2 |= (1ULL << (43))
#define VK_ID_QueuePresentKHR_BIT (1ULL << (43))
#define VK_ID_QueuePresentKHR_IDX (2)

#define PRINT_QueuePresentKHR IS_VK_ID_QueuePresentKHR_ON(wrapper_printer_masks)
#define TRY_QueuePresentKHR(TRUE, FALSE) TRUE
#define has_device_wrapper_QueuePresentKHR(...) (wrapper_device_entrypoints.QueuePresentKHR)
#define has_physical_device_wrapper_QueuePresentKHR(...) (wrapper_physical_device_entrypoints.QueuePresentKHR)
#define name_of_wrapper_QueuePresentKHR(...) "wrapper_QueuePresentKHR"
#ifdef VK_USE_PLATFORM_VI_NN
#define VK_ID_CreateViSurfaceNN 172
#define IS_VK_ID_CreateViSurfaceNN_ON(masks) (((masks).f2 & (1ULL << (44))) != 0)
#define SET_VK_ID_CreateViSurfaceNN_ON(masks) (masks).f2 |= (1ULL << (44))
#define VK_ID_CreateViSurfaceNN_BIT (1ULL << (44))
#define VK_ID_CreateViSurfaceNN_IDX (2)

#define PRINT_CreateViSurfaceNN IS_VK_ID_CreateViSurfaceNN_ON(wrapper_printer_masks)
#define TRY_CreateViSurfaceNN(TRUE, FALSE) TRUE
#define has_device_wrapper_CreateViSurfaceNN(...) (wrapper_device_entrypoints.CreateViSurfaceNN)
#define has_physical_device_wrapper_CreateViSurfaceNN(...) (wrapper_physical_device_entrypoints.CreateViSurfaceNN)
#define name_of_wrapper_CreateViSurfaceNN(...) "wrapper_CreateViSurfaceNN"
#else
#define TRY_CreateViSurfaceNN(TRUE, FALSE) FALSE
#endif
#ifdef VK_USE_PLATFORM_WAYLAND_KHR
#define VK_ID_CreateWaylandSurfaceKHR 173
#define IS_VK_ID_CreateWaylandSurfaceKHR_ON(masks) (((masks).f2 & (1ULL << (45))) != 0)
#define SET_VK_ID_CreateWaylandSurfaceKHR_ON(masks) (masks).f2 |= (1ULL << (45))
#define VK_ID_CreateWaylandSurfaceKHR_BIT (1ULL << (45))
#define VK_ID_CreateWaylandSurfaceKHR_IDX (2)

#define PRINT_CreateWaylandSurfaceKHR IS_VK_ID_CreateWaylandSurfaceKHR_ON(wrapper_printer_masks)
#define TRY_CreateWaylandSurfaceKHR(TRUE, FALSE) TRUE
#define has_device_wrapper_CreateWaylandSurfaceKHR(...) (wrapper_device_entrypoints.CreateWaylandSurfaceKHR)
#define has_physical_device_wrapper_CreateWaylandSurfaceKHR(...) (wrapper_physical_device_entrypoints.CreateWaylandSurfaceKHR)
#define name_of_wrapper_CreateWaylandSurfaceKHR(...) "wrapper_CreateWaylandSurfaceKHR"
#else
#define TRY_CreateWaylandSurfaceKHR(TRUE, FALSE) FALSE
#endif
#ifdef VK_USE_PLATFORM_WAYLAND_KHR
#define VK_ID_GetPhysicalDeviceWaylandPresentationSupportKHR 174
#define IS_VK_ID_GetPhysicalDeviceWaylandPresentationSupportKHR_ON(masks) (((masks).f2 & (1ULL << (46))) != 0)
#define SET_VK_ID_GetPhysicalDeviceWaylandPresentationSupportKHR_ON(masks) (masks).f2 |= (1ULL << (46))
#define VK_ID_GetPhysicalDeviceWaylandPresentationSupportKHR_BIT (1ULL << (46))
#define VK_ID_GetPhysicalDeviceWaylandPresentationSupportKHR_IDX (2)

#define PRINT_GetPhysicalDeviceWaylandPresentationSupportKHR IS_VK_ID_GetPhysicalDeviceWaylandPresentationSupportKHR_ON(wrapper_printer_masks)
#define TRY_GetPhysicalDeviceWaylandPresentationSupportKHR(TRUE, FALSE) TRUE
#define has_device_wrapper_GetPhysicalDeviceWaylandPresentationSupportKHR(...) (wrapper_device_entrypoints.GetPhysicalDeviceWaylandPresentationSupportKHR)
#define has_physical_device_wrapper_GetPhysicalDeviceWaylandPresentationSupportKHR(...) (wrapper_physical_device_entrypoints.GetPhysicalDeviceWaylandPresentationSupportKHR)
#define name_of_wrapper_GetPhysicalDeviceWaylandPresentationSupportKHR(...) "wrapper_GetPhysicalDeviceWaylandPresentationSupportKHR"
#else
#define TRY_GetPhysicalDeviceWaylandPresentationSupportKHR(TRUE, FALSE) FALSE
#endif
#ifdef VK_USE_PLATFORM_WIN32_KHR
#define VK_ID_CreateWin32SurfaceKHR 175
#define IS_VK_ID_CreateWin32SurfaceKHR_ON(masks) (((masks).f2 & (1ULL << (47))) != 0)
#define SET_VK_ID_CreateWin32SurfaceKHR_ON(masks) (masks).f2 |= (1ULL << (47))
#define VK_ID_CreateWin32SurfaceKHR_BIT (1ULL << (47))
#define VK_ID_CreateWin32SurfaceKHR_IDX (2)

#define PRINT_CreateWin32SurfaceKHR IS_VK_ID_CreateWin32SurfaceKHR_ON(wrapper_printer_masks)
#define TRY_CreateWin32SurfaceKHR(TRUE, FALSE) TRUE
#define has_device_wrapper_CreateWin32SurfaceKHR(...) (wrapper_device_entrypoints.CreateWin32SurfaceKHR)
#define has_physical_device_wrapper_CreateWin32SurfaceKHR(...) (wrapper_physical_device_entrypoints.CreateWin32SurfaceKHR)
#define name_of_wrapper_CreateWin32SurfaceKHR(...) "wrapper_CreateWin32SurfaceKHR"
#else
#define TRY_CreateWin32SurfaceKHR(TRUE, FALSE) FALSE
#endif
#ifdef VK_USE_PLATFORM_WIN32_KHR
#define VK_ID_GetPhysicalDeviceWin32PresentationSupportKHR 176
#define IS_VK_ID_GetPhysicalDeviceWin32PresentationSupportKHR_ON(masks) (((masks).f2 & (1ULL << (48))) != 0)
#define SET_VK_ID_GetPhysicalDeviceWin32PresentationSupportKHR_ON(masks) (masks).f2 |= (1ULL << (48))
#define VK_ID_GetPhysicalDeviceWin32PresentationSupportKHR_BIT (1ULL << (48))
#define VK_ID_GetPhysicalDeviceWin32PresentationSupportKHR_IDX (2)

#define PRINT_GetPhysicalDeviceWin32PresentationSupportKHR IS_VK_ID_GetPhysicalDeviceWin32PresentationSupportKHR_ON(wrapper_printer_masks)
#define TRY_GetPhysicalDeviceWin32PresentationSupportKHR(TRUE, FALSE) TRUE
#define has_device_wrapper_GetPhysicalDeviceWin32PresentationSupportKHR(...) (wrapper_device_entrypoints.GetPhysicalDeviceWin32PresentationSupportKHR)
#define has_physical_device_wrapper_GetPhysicalDeviceWin32PresentationSupportKHR(...) (wrapper_physical_device_entrypoints.GetPhysicalDeviceWin32PresentationSupportKHR)
#define name_of_wrapper_GetPhysicalDeviceWin32PresentationSupportKHR(...) "wrapper_GetPhysicalDeviceWin32PresentationSupportKHR"
#else
#define TRY_GetPhysicalDeviceWin32PresentationSupportKHR(TRUE, FALSE) FALSE
#endif
#ifdef VK_USE_PLATFORM_XLIB_KHR
#define VK_ID_CreateXlibSurfaceKHR 177
#define IS_VK_ID_CreateXlibSurfaceKHR_ON(masks) (((masks).f2 & (1ULL << (49))) != 0)
#define SET_VK_ID_CreateXlibSurfaceKHR_ON(masks) (masks).f2 |= (1ULL << (49))
#define VK_ID_CreateXlibSurfaceKHR_BIT (1ULL << (49))
#define VK_ID_CreateXlibSurfaceKHR_IDX (2)

#define PRINT_CreateXlibSurfaceKHR IS_VK_ID_CreateXlibSurfaceKHR_ON(wrapper_printer_masks)
#define TRY_CreateXlibSurfaceKHR(TRUE, FALSE) TRUE
#define has_device_wrapper_CreateXlibSurfaceKHR(...) (wrapper_device_entrypoints.CreateXlibSurfaceKHR)
#define has_physical_device_wrapper_CreateXlibSurfaceKHR(...) (wrapper_physical_device_entrypoints.CreateXlibSurfaceKHR)
#define name_of_wrapper_CreateXlibSurfaceKHR(...) "wrapper_CreateXlibSurfaceKHR"
#else
#define TRY_CreateXlibSurfaceKHR(TRUE, FALSE) FALSE
#endif
#ifdef VK_USE_PLATFORM_XLIB_KHR
#define VK_ID_GetPhysicalDeviceXlibPresentationSupportKHR 178
#define IS_VK_ID_GetPhysicalDeviceXlibPresentationSupportKHR_ON(masks) (((masks).f2 & (1ULL << (50))) != 0)
#define SET_VK_ID_GetPhysicalDeviceXlibPresentationSupportKHR_ON(masks) (masks).f2 |= (1ULL << (50))
#define VK_ID_GetPhysicalDeviceXlibPresentationSupportKHR_BIT (1ULL << (50))
#define VK_ID_GetPhysicalDeviceXlibPresentationSupportKHR_IDX (2)

#define PRINT_GetPhysicalDeviceXlibPresentationSupportKHR IS_VK_ID_GetPhysicalDeviceXlibPresentationSupportKHR_ON(wrapper_printer_masks)
#define TRY_GetPhysicalDeviceXlibPresentationSupportKHR(TRUE, FALSE) TRUE
#define has_device_wrapper_GetPhysicalDeviceXlibPresentationSupportKHR(...) (wrapper_device_entrypoints.GetPhysicalDeviceXlibPresentationSupportKHR)
#define has_physical_device_wrapper_GetPhysicalDeviceXlibPresentationSupportKHR(...) (wrapper_physical_device_entrypoints.GetPhysicalDeviceXlibPresentationSupportKHR)
#define name_of_wrapper_GetPhysicalDeviceXlibPresentationSupportKHR(...) "wrapper_GetPhysicalDeviceXlibPresentationSupportKHR"
#else
#define TRY_GetPhysicalDeviceXlibPresentationSupportKHR(TRUE, FALSE) FALSE
#endif
#ifdef VK_USE_PLATFORM_XCB_KHR
#define VK_ID_CreateXcbSurfaceKHR 179
#define IS_VK_ID_CreateXcbSurfaceKHR_ON(masks) (((masks).f2 & (1ULL << (51))) != 0)
#define SET_VK_ID_CreateXcbSurfaceKHR_ON(masks) (masks).f2 |= (1ULL << (51))
#define VK_ID_CreateXcbSurfaceKHR_BIT (1ULL << (51))
#define VK_ID_CreateXcbSurfaceKHR_IDX (2)

#define PRINT_CreateXcbSurfaceKHR IS_VK_ID_CreateXcbSurfaceKHR_ON(wrapper_printer_masks)
#define TRY_CreateXcbSurfaceKHR(TRUE, FALSE) TRUE
#define has_device_wrapper_CreateXcbSurfaceKHR(...) (wrapper_device_entrypoints.CreateXcbSurfaceKHR)
#define has_physical_device_wrapper_CreateXcbSurfaceKHR(...) (wrapper_physical_device_entrypoints.CreateXcbSurfaceKHR)
#define name_of_wrapper_CreateXcbSurfaceKHR(...) "wrapper_CreateXcbSurfaceKHR"
#else
#define TRY_CreateXcbSurfaceKHR(TRUE, FALSE) FALSE
#endif
#ifdef VK_USE_PLATFORM_XCB_KHR
#define VK_ID_GetPhysicalDeviceXcbPresentationSupportKHR 180
#define IS_VK_ID_GetPhysicalDeviceXcbPresentationSupportKHR_ON(masks) (((masks).f2 & (1ULL << (52))) != 0)
#define SET_VK_ID_GetPhysicalDeviceXcbPresentationSupportKHR_ON(masks) (masks).f2 |= (1ULL << (52))
#define VK_ID_GetPhysicalDeviceXcbPresentationSupportKHR_BIT (1ULL << (52))
#define VK_ID_GetPhysicalDeviceXcbPresentationSupportKHR_IDX (2)

#define PRINT_GetPhysicalDeviceXcbPresentationSupportKHR IS_VK_ID_GetPhysicalDeviceXcbPresentationSupportKHR_ON(wrapper_printer_masks)
#define TRY_GetPhysicalDeviceXcbPresentationSupportKHR(TRUE, FALSE) TRUE
#define has_device_wrapper_GetPhysicalDeviceXcbPresentationSupportKHR(...) (wrapper_device_entrypoints.GetPhysicalDeviceXcbPresentationSupportKHR)
#define has_physical_device_wrapper_GetPhysicalDeviceXcbPresentationSupportKHR(...) (wrapper_physical_device_entrypoints.GetPhysicalDeviceXcbPresentationSupportKHR)
#define name_of_wrapper_GetPhysicalDeviceXcbPresentationSupportKHR(...) "wrapper_GetPhysicalDeviceXcbPresentationSupportKHR"
#else
#define TRY_GetPhysicalDeviceXcbPresentationSupportKHR(TRUE, FALSE) FALSE
#endif
#ifdef VK_USE_PLATFORM_DIRECTFB_EXT
#define VK_ID_CreateDirectFBSurfaceEXT 181
#define IS_VK_ID_CreateDirectFBSurfaceEXT_ON(masks) (((masks).f2 & (1ULL << (53))) != 0)
#define SET_VK_ID_CreateDirectFBSurfaceEXT_ON(masks) (masks).f2 |= (1ULL << (53))
#define VK_ID_CreateDirectFBSurfaceEXT_BIT (1ULL << (53))
#define VK_ID_CreateDirectFBSurfaceEXT_IDX (2)

#define PRINT_CreateDirectFBSurfaceEXT IS_VK_ID_CreateDirectFBSurfaceEXT_ON(wrapper_printer_masks)
#define TRY_CreateDirectFBSurfaceEXT(TRUE, FALSE) TRUE
#define has_device_wrapper_CreateDirectFBSurfaceEXT(...) (wrapper_device_entrypoints.CreateDirectFBSurfaceEXT)
#define has_physical_device_wrapper_CreateDirectFBSurfaceEXT(...) (wrapper_physical_device_entrypoints.CreateDirectFBSurfaceEXT)
#define name_of_wrapper_CreateDirectFBSurfaceEXT(...) "wrapper_CreateDirectFBSurfaceEXT"
#else
#define TRY_CreateDirectFBSurfaceEXT(TRUE, FALSE) FALSE
#endif
#ifdef VK_USE_PLATFORM_DIRECTFB_EXT
#define VK_ID_GetPhysicalDeviceDirectFBPresentationSupportEXT 182
#define IS_VK_ID_GetPhysicalDeviceDirectFBPresentationSupportEXT_ON(masks) (((masks).f2 & (1ULL << (54))) != 0)
#define SET_VK_ID_GetPhysicalDeviceDirectFBPresentationSupportEXT_ON(masks) (masks).f2 |= (1ULL << (54))
#define VK_ID_GetPhysicalDeviceDirectFBPresentationSupportEXT_BIT (1ULL << (54))
#define VK_ID_GetPhysicalDeviceDirectFBPresentationSupportEXT_IDX (2)

#define PRINT_GetPhysicalDeviceDirectFBPresentationSupportEXT IS_VK_ID_GetPhysicalDeviceDirectFBPresentationSupportEXT_ON(wrapper_printer_masks)
#define TRY_GetPhysicalDeviceDirectFBPresentationSupportEXT(TRUE, FALSE) TRUE
#define has_device_wrapper_GetPhysicalDeviceDirectFBPresentationSupportEXT(...) (wrapper_device_entrypoints.GetPhysicalDeviceDirectFBPresentationSupportEXT)
#define has_physical_device_wrapper_GetPhysicalDeviceDirectFBPresentationSupportEXT(...) (wrapper_physical_device_entrypoints.GetPhysicalDeviceDirectFBPresentationSupportEXT)
#define name_of_wrapper_GetPhysicalDeviceDirectFBPresentationSupportEXT(...) "wrapper_GetPhysicalDeviceDirectFBPresentationSupportEXT"
#else
#define TRY_GetPhysicalDeviceDirectFBPresentationSupportEXT(TRUE, FALSE) FALSE
#endif
#ifdef VK_USE_PLATFORM_FUCHSIA
#define VK_ID_CreateImagePipeSurfaceFUCHSIA 183
#define IS_VK_ID_CreateImagePipeSurfaceFUCHSIA_ON(masks) (((masks).f2 & (1ULL << (55))) != 0)
#define SET_VK_ID_CreateImagePipeSurfaceFUCHSIA_ON(masks) (masks).f2 |= (1ULL << (55))
#define VK_ID_CreateImagePipeSurfaceFUCHSIA_BIT (1ULL << (55))
#define VK_ID_CreateImagePipeSurfaceFUCHSIA_IDX (2)

#define PRINT_CreateImagePipeSurfaceFUCHSIA IS_VK_ID_CreateImagePipeSurfaceFUCHSIA_ON(wrapper_printer_masks)
#define TRY_CreateImagePipeSurfaceFUCHSIA(TRUE, FALSE) TRUE
#define has_device_wrapper_CreateImagePipeSurfaceFUCHSIA(...) (wrapper_device_entrypoints.CreateImagePipeSurfaceFUCHSIA)
#define has_physical_device_wrapper_CreateImagePipeSurfaceFUCHSIA(...) (wrapper_physical_device_entrypoints.CreateImagePipeSurfaceFUCHSIA)
#define name_of_wrapper_CreateImagePipeSurfaceFUCHSIA(...) "wrapper_CreateImagePipeSurfaceFUCHSIA"
#else
#define TRY_CreateImagePipeSurfaceFUCHSIA(TRUE, FALSE) FALSE
#endif
#ifdef VK_USE_PLATFORM_GGP
#define VK_ID_CreateStreamDescriptorSurfaceGGP 184
#define IS_VK_ID_CreateStreamDescriptorSurfaceGGP_ON(masks) (((masks).f2 & (1ULL << (56))) != 0)
#define SET_VK_ID_CreateStreamDescriptorSurfaceGGP_ON(masks) (masks).f2 |= (1ULL << (56))
#define VK_ID_CreateStreamDescriptorSurfaceGGP_BIT (1ULL << (56))
#define VK_ID_CreateStreamDescriptorSurfaceGGP_IDX (2)

#define PRINT_CreateStreamDescriptorSurfaceGGP IS_VK_ID_CreateStreamDescriptorSurfaceGGP_ON(wrapper_printer_masks)
#define TRY_CreateStreamDescriptorSurfaceGGP(TRUE, FALSE) TRUE
#define has_device_wrapper_CreateStreamDescriptorSurfaceGGP(...) (wrapper_device_entrypoints.CreateStreamDescriptorSurfaceGGP)
#define has_physical_device_wrapper_CreateStreamDescriptorSurfaceGGP(...) (wrapper_physical_device_entrypoints.CreateStreamDescriptorSurfaceGGP)
#define name_of_wrapper_CreateStreamDescriptorSurfaceGGP(...) "wrapper_CreateStreamDescriptorSurfaceGGP"
#else
#define TRY_CreateStreamDescriptorSurfaceGGP(TRUE, FALSE) FALSE
#endif
#ifdef VK_USE_PLATFORM_SCREEN_QNX
#define VK_ID_CreateScreenSurfaceQNX 185
#define IS_VK_ID_CreateScreenSurfaceQNX_ON(masks) (((masks).f2 & (1ULL << (57))) != 0)
#define SET_VK_ID_CreateScreenSurfaceQNX_ON(masks) (masks).f2 |= (1ULL << (57))
#define VK_ID_CreateScreenSurfaceQNX_BIT (1ULL << (57))
#define VK_ID_CreateScreenSurfaceQNX_IDX (2)

#define PRINT_CreateScreenSurfaceQNX IS_VK_ID_CreateScreenSurfaceQNX_ON(wrapper_printer_masks)
#define TRY_CreateScreenSurfaceQNX(TRUE, FALSE) TRUE
#define has_device_wrapper_CreateScreenSurfaceQNX(...) (wrapper_device_entrypoints.CreateScreenSurfaceQNX)
#define has_physical_device_wrapper_CreateScreenSurfaceQNX(...) (wrapper_physical_device_entrypoints.CreateScreenSurfaceQNX)
#define name_of_wrapper_CreateScreenSurfaceQNX(...) "wrapper_CreateScreenSurfaceQNX"
#else
#define TRY_CreateScreenSurfaceQNX(TRUE, FALSE) FALSE
#endif
#ifdef VK_USE_PLATFORM_SCREEN_QNX
#define VK_ID_GetPhysicalDeviceScreenPresentationSupportQNX 186
#define IS_VK_ID_GetPhysicalDeviceScreenPresentationSupportQNX_ON(masks) (((masks).f2 & (1ULL << (58))) != 0)
#define SET_VK_ID_GetPhysicalDeviceScreenPresentationSupportQNX_ON(masks) (masks).f2 |= (1ULL << (58))
#define VK_ID_GetPhysicalDeviceScreenPresentationSupportQNX_BIT (1ULL << (58))
#define VK_ID_GetPhysicalDeviceScreenPresentationSupportQNX_IDX (2)

#define PRINT_GetPhysicalDeviceScreenPresentationSupportQNX IS_VK_ID_GetPhysicalDeviceScreenPresentationSupportQNX_ON(wrapper_printer_masks)
#define TRY_GetPhysicalDeviceScreenPresentationSupportQNX(TRUE, FALSE) TRUE
#define has_device_wrapper_GetPhysicalDeviceScreenPresentationSupportQNX(...) (wrapper_device_entrypoints.GetPhysicalDeviceScreenPresentationSupportQNX)
#define has_physical_device_wrapper_GetPhysicalDeviceScreenPresentationSupportQNX(...) (wrapper_physical_device_entrypoints.GetPhysicalDeviceScreenPresentationSupportQNX)
#define name_of_wrapper_GetPhysicalDeviceScreenPresentationSupportQNX(...) "wrapper_GetPhysicalDeviceScreenPresentationSupportQNX"
#else
#define TRY_GetPhysicalDeviceScreenPresentationSupportQNX(TRUE, FALSE) FALSE
#endif
#define VK_ID_CreateDebugReportCallbackEXT 187
#define IS_VK_ID_CreateDebugReportCallbackEXT_ON(masks) (((masks).f2 & (1ULL << (59))) != 0)
#define SET_VK_ID_CreateDebugReportCallbackEXT_ON(masks) (masks).f2 |= (1ULL << (59))
#define VK_ID_CreateDebugReportCallbackEXT_BIT (1ULL << (59))
#define VK_ID_CreateDebugReportCallbackEXT_IDX (2)

#define PRINT_CreateDebugReportCallbackEXT IS_VK_ID_CreateDebugReportCallbackEXT_ON(wrapper_printer_masks)
#define TRY_CreateDebugReportCallbackEXT(TRUE, FALSE) TRUE
#define has_device_wrapper_CreateDebugReportCallbackEXT(...) (wrapper_device_entrypoints.CreateDebugReportCallbackEXT)
#define has_physical_device_wrapper_CreateDebugReportCallbackEXT(...) (wrapper_physical_device_entrypoints.CreateDebugReportCallbackEXT)
#define name_of_wrapper_CreateDebugReportCallbackEXT(...) "wrapper_CreateDebugReportCallbackEXT"
#define VK_ID_DestroyDebugReportCallbackEXT 188
#define IS_VK_ID_DestroyDebugReportCallbackEXT_ON(masks) (((masks).f2 & (1ULL << (60))) != 0)
#define SET_VK_ID_DestroyDebugReportCallbackEXT_ON(masks) (masks).f2 |= (1ULL << (60))
#define VK_ID_DestroyDebugReportCallbackEXT_BIT (1ULL << (60))
#define VK_ID_DestroyDebugReportCallbackEXT_IDX (2)

#define PRINT_DestroyDebugReportCallbackEXT IS_VK_ID_DestroyDebugReportCallbackEXT_ON(wrapper_printer_masks)
#define TRY_DestroyDebugReportCallbackEXT(TRUE, FALSE) TRUE
#define has_device_wrapper_DestroyDebugReportCallbackEXT(...) (wrapper_device_entrypoints.DestroyDebugReportCallbackEXT)
#define has_physical_device_wrapper_DestroyDebugReportCallbackEXT(...) (wrapper_physical_device_entrypoints.DestroyDebugReportCallbackEXT)
#define name_of_wrapper_DestroyDebugReportCallbackEXT(...) "wrapper_DestroyDebugReportCallbackEXT"
#define VK_ID_DebugReportMessageEXT 189
#define IS_VK_ID_DebugReportMessageEXT_ON(masks) (((masks).f2 & (1ULL << (61))) != 0)
#define SET_VK_ID_DebugReportMessageEXT_ON(masks) (masks).f2 |= (1ULL << (61))
#define VK_ID_DebugReportMessageEXT_BIT (1ULL << (61))
#define VK_ID_DebugReportMessageEXT_IDX (2)

#define PRINT_DebugReportMessageEXT IS_VK_ID_DebugReportMessageEXT_ON(wrapper_printer_masks)
#define TRY_DebugReportMessageEXT(TRUE, FALSE) TRUE
#define has_device_wrapper_DebugReportMessageEXT(...) (wrapper_device_entrypoints.DebugReportMessageEXT)
#define has_physical_device_wrapper_DebugReportMessageEXT(...) (wrapper_physical_device_entrypoints.DebugReportMessageEXT)
#define name_of_wrapper_DebugReportMessageEXT(...) "wrapper_DebugReportMessageEXT"
#define VK_ID_DebugMarkerSetObjectNameEXT 190
#define IS_VK_ID_DebugMarkerSetObjectNameEXT_ON(masks) (((masks).f2 & (1ULL << (62))) != 0)
#define SET_VK_ID_DebugMarkerSetObjectNameEXT_ON(masks) (masks).f2 |= (1ULL << (62))
#define VK_ID_DebugMarkerSetObjectNameEXT_BIT (1ULL << (62))
#define VK_ID_DebugMarkerSetObjectNameEXT_IDX (2)

#define PRINT_DebugMarkerSetObjectNameEXT IS_VK_ID_DebugMarkerSetObjectNameEXT_ON(wrapper_printer_masks)
#define TRY_DebugMarkerSetObjectNameEXT(TRUE, FALSE) TRUE
#define has_device_wrapper_DebugMarkerSetObjectNameEXT(...) (wrapper_device_entrypoints.DebugMarkerSetObjectNameEXT)
#define has_physical_device_wrapper_DebugMarkerSetObjectNameEXT(...) (wrapper_physical_device_entrypoints.DebugMarkerSetObjectNameEXT)
#define name_of_wrapper_DebugMarkerSetObjectNameEXT(...) "wrapper_DebugMarkerSetObjectNameEXT"
#define VK_ID_DebugMarkerSetObjectTagEXT 191
#define IS_VK_ID_DebugMarkerSetObjectTagEXT_ON(masks) (((masks).f2 & (1ULL << (63))) != 0)
#define SET_VK_ID_DebugMarkerSetObjectTagEXT_ON(masks) (masks).f2 |= (1ULL << (63))
#define VK_ID_DebugMarkerSetObjectTagEXT_BIT (1ULL << (63))
#define VK_ID_DebugMarkerSetObjectTagEXT_IDX (2)

#define PRINT_DebugMarkerSetObjectTagEXT IS_VK_ID_DebugMarkerSetObjectTagEXT_ON(wrapper_printer_masks)
#define TRY_DebugMarkerSetObjectTagEXT(TRUE, FALSE) TRUE
#define has_device_wrapper_DebugMarkerSetObjectTagEXT(...) (wrapper_device_entrypoints.DebugMarkerSetObjectTagEXT)
#define has_physical_device_wrapper_DebugMarkerSetObjectTagEXT(...) (wrapper_physical_device_entrypoints.DebugMarkerSetObjectTagEXT)
#define name_of_wrapper_DebugMarkerSetObjectTagEXT(...) "wrapper_DebugMarkerSetObjectTagEXT"
#define VK_ID_CmdDebugMarkerBeginEXT 192
#define IS_VK_ID_CmdDebugMarkerBeginEXT_ON(masks) (((masks).f3 & (1ULL << (0))) != 0)
#define SET_VK_ID_CmdDebugMarkerBeginEXT_ON(masks) (masks).f3 |= (1ULL << (0))
#define VK_ID_CmdDebugMarkerBeginEXT_BIT (1ULL << (0))
#define VK_ID_CmdDebugMarkerBeginEXT_IDX (3)

#define PRINT_CmdDebugMarkerBeginEXT IS_VK_ID_CmdDebugMarkerBeginEXT_ON(wrapper_printer_masks)
#define TRY_CmdDebugMarkerBeginEXT(TRUE, FALSE) TRUE
#define has_device_wrapper_CmdDebugMarkerBeginEXT(...) (wrapper_device_entrypoints.CmdDebugMarkerBeginEXT)
#define has_physical_device_wrapper_CmdDebugMarkerBeginEXT(...) (wrapper_physical_device_entrypoints.CmdDebugMarkerBeginEXT)
#define name_of_wrapper_CmdDebugMarkerBeginEXT(...) "wrapper_CmdDebugMarkerBeginEXT"
#define VK_ID_CmdDebugMarkerEndEXT 193
#define IS_VK_ID_CmdDebugMarkerEndEXT_ON(masks) (((masks).f3 & (1ULL << (1))) != 0)
#define SET_VK_ID_CmdDebugMarkerEndEXT_ON(masks) (masks).f3 |= (1ULL << (1))
#define VK_ID_CmdDebugMarkerEndEXT_BIT (1ULL << (1))
#define VK_ID_CmdDebugMarkerEndEXT_IDX (3)

#define PRINT_CmdDebugMarkerEndEXT IS_VK_ID_CmdDebugMarkerEndEXT_ON(wrapper_printer_masks)
#define TRY_CmdDebugMarkerEndEXT(TRUE, FALSE) TRUE
#define has_device_wrapper_CmdDebugMarkerEndEXT(...) (wrapper_device_entrypoints.CmdDebugMarkerEndEXT)
#define has_physical_device_wrapper_CmdDebugMarkerEndEXT(...) (wrapper_physical_device_entrypoints.CmdDebugMarkerEndEXT)
#define name_of_wrapper_CmdDebugMarkerEndEXT(...) "wrapper_CmdDebugMarkerEndEXT"
#define VK_ID_CmdDebugMarkerInsertEXT 194
#define IS_VK_ID_CmdDebugMarkerInsertEXT_ON(masks) (((masks).f3 & (1ULL << (2))) != 0)
#define SET_VK_ID_CmdDebugMarkerInsertEXT_ON(masks) (masks).f3 |= (1ULL << (2))
#define VK_ID_CmdDebugMarkerInsertEXT_BIT (1ULL << (2))
#define VK_ID_CmdDebugMarkerInsertEXT_IDX (3)

#define PRINT_CmdDebugMarkerInsertEXT IS_VK_ID_CmdDebugMarkerInsertEXT_ON(wrapper_printer_masks)
#define TRY_CmdDebugMarkerInsertEXT(TRUE, FALSE) TRUE
#define has_device_wrapper_CmdDebugMarkerInsertEXT(...) (wrapper_device_entrypoints.CmdDebugMarkerInsertEXT)
#define has_physical_device_wrapper_CmdDebugMarkerInsertEXT(...) (wrapper_physical_device_entrypoints.CmdDebugMarkerInsertEXT)
#define name_of_wrapper_CmdDebugMarkerInsertEXT(...) "wrapper_CmdDebugMarkerInsertEXT"
#define VK_ID_GetPhysicalDeviceExternalImageFormatPropertiesNV 195
#define IS_VK_ID_GetPhysicalDeviceExternalImageFormatPropertiesNV_ON(masks) (((masks).f3 & (1ULL << (3))) != 0)
#define SET_VK_ID_GetPhysicalDeviceExternalImageFormatPropertiesNV_ON(masks) (masks).f3 |= (1ULL << (3))
#define VK_ID_GetPhysicalDeviceExternalImageFormatPropertiesNV_BIT (1ULL << (3))
#define VK_ID_GetPhysicalDeviceExternalImageFormatPropertiesNV_IDX (3)

#define PRINT_GetPhysicalDeviceExternalImageFormatPropertiesNV IS_VK_ID_GetPhysicalDeviceExternalImageFormatPropertiesNV_ON(wrapper_printer_masks)
#define TRY_GetPhysicalDeviceExternalImageFormatPropertiesNV(TRUE, FALSE) TRUE
#define has_device_wrapper_GetPhysicalDeviceExternalImageFormatPropertiesNV(...) (wrapper_device_entrypoints.GetPhysicalDeviceExternalImageFormatPropertiesNV)
#define has_physical_device_wrapper_GetPhysicalDeviceExternalImageFormatPropertiesNV(...) (wrapper_physical_device_entrypoints.GetPhysicalDeviceExternalImageFormatPropertiesNV)
#define name_of_wrapper_GetPhysicalDeviceExternalImageFormatPropertiesNV(...) "wrapper_GetPhysicalDeviceExternalImageFormatPropertiesNV"
#ifdef VK_USE_PLATFORM_WIN32_KHR
#define VK_ID_GetMemoryWin32HandleNV 196
#define IS_VK_ID_GetMemoryWin32HandleNV_ON(masks) (((masks).f3 & (1ULL << (4))) != 0)
#define SET_VK_ID_GetMemoryWin32HandleNV_ON(masks) (masks).f3 |= (1ULL << (4))
#define VK_ID_GetMemoryWin32HandleNV_BIT (1ULL << (4))
#define VK_ID_GetMemoryWin32HandleNV_IDX (3)

#define PRINT_GetMemoryWin32HandleNV IS_VK_ID_GetMemoryWin32HandleNV_ON(wrapper_printer_masks)
#define TRY_GetMemoryWin32HandleNV(TRUE, FALSE) TRUE
#define has_device_wrapper_GetMemoryWin32HandleNV(...) (wrapper_device_entrypoints.GetMemoryWin32HandleNV)
#define has_physical_device_wrapper_GetMemoryWin32HandleNV(...) (wrapper_physical_device_entrypoints.GetMemoryWin32HandleNV)
#define name_of_wrapper_GetMemoryWin32HandleNV(...) "wrapper_GetMemoryWin32HandleNV"
#else
#define TRY_GetMemoryWin32HandleNV(TRUE, FALSE) FALSE
#endif
#define VK_ID_CmdExecuteGeneratedCommandsNV 197
#define IS_VK_ID_CmdExecuteGeneratedCommandsNV_ON(masks) (((masks).f3 & (1ULL << (5))) != 0)
#define SET_VK_ID_CmdExecuteGeneratedCommandsNV_ON(masks) (masks).f3 |= (1ULL << (5))
#define VK_ID_CmdExecuteGeneratedCommandsNV_BIT (1ULL << (5))
#define VK_ID_CmdExecuteGeneratedCommandsNV_IDX (3)

#define PRINT_CmdExecuteGeneratedCommandsNV IS_VK_ID_CmdExecuteGeneratedCommandsNV_ON(wrapper_printer_masks)
#define TRY_CmdExecuteGeneratedCommandsNV(TRUE, FALSE) TRUE
#define has_device_wrapper_CmdExecuteGeneratedCommandsNV(...) (wrapper_device_entrypoints.CmdExecuteGeneratedCommandsNV)
#define has_physical_device_wrapper_CmdExecuteGeneratedCommandsNV(...) (wrapper_physical_device_entrypoints.CmdExecuteGeneratedCommandsNV)
#define name_of_wrapper_CmdExecuteGeneratedCommandsNV(...) "wrapper_CmdExecuteGeneratedCommandsNV"
#define VK_ID_CmdPreprocessGeneratedCommandsNV 198
#define IS_VK_ID_CmdPreprocessGeneratedCommandsNV_ON(masks) (((masks).f3 & (1ULL << (6))) != 0)
#define SET_VK_ID_CmdPreprocessGeneratedCommandsNV_ON(masks) (masks).f3 |= (1ULL << (6))
#define VK_ID_CmdPreprocessGeneratedCommandsNV_BIT (1ULL << (6))
#define VK_ID_CmdPreprocessGeneratedCommandsNV_IDX (3)

#define PRINT_CmdPreprocessGeneratedCommandsNV IS_VK_ID_CmdPreprocessGeneratedCommandsNV_ON(wrapper_printer_masks)
#define TRY_CmdPreprocessGeneratedCommandsNV(TRUE, FALSE) TRUE
#define has_device_wrapper_CmdPreprocessGeneratedCommandsNV(...) (wrapper_device_entrypoints.CmdPreprocessGeneratedCommandsNV)
#define has_physical_device_wrapper_CmdPreprocessGeneratedCommandsNV(...) (wrapper_physical_device_entrypoints.CmdPreprocessGeneratedCommandsNV)
#define name_of_wrapper_CmdPreprocessGeneratedCommandsNV(...) "wrapper_CmdPreprocessGeneratedCommandsNV"
#define VK_ID_CmdBindPipelineShaderGroupNV 199
#define IS_VK_ID_CmdBindPipelineShaderGroupNV_ON(masks) (((masks).f3 & (1ULL << (7))) != 0)
#define SET_VK_ID_CmdBindPipelineShaderGroupNV_ON(masks) (masks).f3 |= (1ULL << (7))
#define VK_ID_CmdBindPipelineShaderGroupNV_BIT (1ULL << (7))
#define VK_ID_CmdBindPipelineShaderGroupNV_IDX (3)

#define PRINT_CmdBindPipelineShaderGroupNV IS_VK_ID_CmdBindPipelineShaderGroupNV_ON(wrapper_printer_masks)
#define TRY_CmdBindPipelineShaderGroupNV(TRUE, FALSE) TRUE
#define has_device_wrapper_CmdBindPipelineShaderGroupNV(...) (wrapper_device_entrypoints.CmdBindPipelineShaderGroupNV)
#define has_physical_device_wrapper_CmdBindPipelineShaderGroupNV(...) (wrapper_physical_device_entrypoints.CmdBindPipelineShaderGroupNV)
#define name_of_wrapper_CmdBindPipelineShaderGroupNV(...) "wrapper_CmdBindPipelineShaderGroupNV"
#define VK_ID_GetGeneratedCommandsMemoryRequirementsNV 200
#define IS_VK_ID_GetGeneratedCommandsMemoryRequirementsNV_ON(masks) (((masks).f3 & (1ULL << (8))) != 0)
#define SET_VK_ID_GetGeneratedCommandsMemoryRequirementsNV_ON(masks) (masks).f3 |= (1ULL << (8))
#define VK_ID_GetGeneratedCommandsMemoryRequirementsNV_BIT (1ULL << (8))
#define VK_ID_GetGeneratedCommandsMemoryRequirementsNV_IDX (3)

#define PRINT_GetGeneratedCommandsMemoryRequirementsNV IS_VK_ID_GetGeneratedCommandsMemoryRequirementsNV_ON(wrapper_printer_masks)
#define TRY_GetGeneratedCommandsMemoryRequirementsNV(TRUE, FALSE) TRUE
#define has_device_wrapper_GetGeneratedCommandsMemoryRequirementsNV(...) (wrapper_device_entrypoints.GetGeneratedCommandsMemoryRequirementsNV)
#define has_physical_device_wrapper_GetGeneratedCommandsMemoryRequirementsNV(...) (wrapper_physical_device_entrypoints.GetGeneratedCommandsMemoryRequirementsNV)
#define name_of_wrapper_GetGeneratedCommandsMemoryRequirementsNV(...) "wrapper_GetGeneratedCommandsMemoryRequirementsNV"
#define VK_ID_CreateIndirectCommandsLayoutNV 201
#define IS_VK_ID_CreateIndirectCommandsLayoutNV_ON(masks) (((masks).f3 & (1ULL << (9))) != 0)
#define SET_VK_ID_CreateIndirectCommandsLayoutNV_ON(masks) (masks).f3 |= (1ULL << (9))
#define VK_ID_CreateIndirectCommandsLayoutNV_BIT (1ULL << (9))
#define VK_ID_CreateIndirectCommandsLayoutNV_IDX (3)

#define PRINT_CreateIndirectCommandsLayoutNV IS_VK_ID_CreateIndirectCommandsLayoutNV_ON(wrapper_printer_masks)
#define TRY_CreateIndirectCommandsLayoutNV(TRUE, FALSE) TRUE
#define has_device_wrapper_CreateIndirectCommandsLayoutNV(...) (wrapper_device_entrypoints.CreateIndirectCommandsLayoutNV)
#define has_physical_device_wrapper_CreateIndirectCommandsLayoutNV(...) (wrapper_physical_device_entrypoints.CreateIndirectCommandsLayoutNV)
#define name_of_wrapper_CreateIndirectCommandsLayoutNV(...) "wrapper_CreateIndirectCommandsLayoutNV"
#define VK_ID_DestroyIndirectCommandsLayoutNV 202
#define IS_VK_ID_DestroyIndirectCommandsLayoutNV_ON(masks) (((masks).f3 & (1ULL << (10))) != 0)
#define SET_VK_ID_DestroyIndirectCommandsLayoutNV_ON(masks) (masks).f3 |= (1ULL << (10))
#define VK_ID_DestroyIndirectCommandsLayoutNV_BIT (1ULL << (10))
#define VK_ID_DestroyIndirectCommandsLayoutNV_IDX (3)

#define PRINT_DestroyIndirectCommandsLayoutNV IS_VK_ID_DestroyIndirectCommandsLayoutNV_ON(wrapper_printer_masks)
#define TRY_DestroyIndirectCommandsLayoutNV(TRUE, FALSE) TRUE
#define has_device_wrapper_DestroyIndirectCommandsLayoutNV(...) (wrapper_device_entrypoints.DestroyIndirectCommandsLayoutNV)
#define has_physical_device_wrapper_DestroyIndirectCommandsLayoutNV(...) (wrapper_physical_device_entrypoints.DestroyIndirectCommandsLayoutNV)
#define name_of_wrapper_DestroyIndirectCommandsLayoutNV(...) "wrapper_DestroyIndirectCommandsLayoutNV"
#define VK_ID_GetPhysicalDeviceFeatures2 203
#define IS_VK_ID_GetPhysicalDeviceFeatures2_ON(masks) (((masks).f3 & (1ULL << (11))) != 0)
#define SET_VK_ID_GetPhysicalDeviceFeatures2_ON(masks) (masks).f3 |= (1ULL << (11))
#define VK_ID_GetPhysicalDeviceFeatures2_BIT (1ULL << (11))
#define VK_ID_GetPhysicalDeviceFeatures2_IDX (3)

#define PRINT_GetPhysicalDeviceFeatures2 IS_VK_ID_GetPhysicalDeviceFeatures2_ON(wrapper_printer_masks)
#define TRY_GetPhysicalDeviceFeatures2(TRUE, FALSE) TRUE
#define has_device_wrapper_GetPhysicalDeviceFeatures2(...) (wrapper_device_entrypoints.GetPhysicalDeviceFeatures2)
#define has_physical_device_wrapper_GetPhysicalDeviceFeatures2(...) (wrapper_physical_device_entrypoints.GetPhysicalDeviceFeatures2)
#define name_of_wrapper_GetPhysicalDeviceFeatures2(...) "wrapper_GetPhysicalDeviceFeatures2"
#define VK_ID_GetPhysicalDeviceProperties2 205
#define IS_VK_ID_GetPhysicalDeviceProperties2_ON(masks) (((masks).f3 & (1ULL << (13))) != 0)
#define SET_VK_ID_GetPhysicalDeviceProperties2_ON(masks) (masks).f3 |= (1ULL << (13))
#define VK_ID_GetPhysicalDeviceProperties2_BIT (1ULL << (13))
#define VK_ID_GetPhysicalDeviceProperties2_IDX (3)

#define PRINT_GetPhysicalDeviceProperties2 IS_VK_ID_GetPhysicalDeviceProperties2_ON(wrapper_printer_masks)
#define TRY_GetPhysicalDeviceProperties2(TRUE, FALSE) TRUE
#define has_device_wrapper_GetPhysicalDeviceProperties2(...) (wrapper_device_entrypoints.GetPhysicalDeviceProperties2)
#define has_physical_device_wrapper_GetPhysicalDeviceProperties2(...) (wrapper_physical_device_entrypoints.GetPhysicalDeviceProperties2)
#define name_of_wrapper_GetPhysicalDeviceProperties2(...) "wrapper_GetPhysicalDeviceProperties2"
#define VK_ID_GetPhysicalDeviceFormatProperties2 207
#define IS_VK_ID_GetPhysicalDeviceFormatProperties2_ON(masks) (((masks).f3 & (1ULL << (15))) != 0)
#define SET_VK_ID_GetPhysicalDeviceFormatProperties2_ON(masks) (masks).f3 |= (1ULL << (15))
#define VK_ID_GetPhysicalDeviceFormatProperties2_BIT (1ULL << (15))
#define VK_ID_GetPhysicalDeviceFormatProperties2_IDX (3)

#define PRINT_GetPhysicalDeviceFormatProperties2 IS_VK_ID_GetPhysicalDeviceFormatProperties2_ON(wrapper_printer_masks)
#define TRY_GetPhysicalDeviceFormatProperties2(TRUE, FALSE) TRUE
#define has_device_wrapper_GetPhysicalDeviceFormatProperties2(...) (wrapper_device_entrypoints.GetPhysicalDeviceFormatProperties2)
#define has_physical_device_wrapper_GetPhysicalDeviceFormatProperties2(...) (wrapper_physical_device_entrypoints.GetPhysicalDeviceFormatProperties2)
#define name_of_wrapper_GetPhysicalDeviceFormatProperties2(...) "wrapper_GetPhysicalDeviceFormatProperties2"
#define VK_ID_GetPhysicalDeviceImageFormatProperties2 209
#define IS_VK_ID_GetPhysicalDeviceImageFormatProperties2_ON(masks) (((masks).f3 & (1ULL << (17))) != 0)
#define SET_VK_ID_GetPhysicalDeviceImageFormatProperties2_ON(masks) (masks).f3 |= (1ULL << (17))
#define VK_ID_GetPhysicalDeviceImageFormatProperties2_BIT (1ULL << (17))
#define VK_ID_GetPhysicalDeviceImageFormatProperties2_IDX (3)

#define PRINT_GetPhysicalDeviceImageFormatProperties2 IS_VK_ID_GetPhysicalDeviceImageFormatProperties2_ON(wrapper_printer_masks)
#define TRY_GetPhysicalDeviceImageFormatProperties2(TRUE, FALSE) TRUE
#define has_device_wrapper_GetPhysicalDeviceImageFormatProperties2(...) (wrapper_device_entrypoints.GetPhysicalDeviceImageFormatProperties2)
#define has_physical_device_wrapper_GetPhysicalDeviceImageFormatProperties2(...) (wrapper_physical_device_entrypoints.GetPhysicalDeviceImageFormatProperties2)
#define name_of_wrapper_GetPhysicalDeviceImageFormatProperties2(...) "wrapper_GetPhysicalDeviceImageFormatProperties2"
#define VK_ID_GetPhysicalDeviceQueueFamilyProperties2 211
#define IS_VK_ID_GetPhysicalDeviceQueueFamilyProperties2_ON(masks) (((masks).f3 & (1ULL << (19))) != 0)
#define SET_VK_ID_GetPhysicalDeviceQueueFamilyProperties2_ON(masks) (masks).f3 |= (1ULL << (19))
#define VK_ID_GetPhysicalDeviceQueueFamilyProperties2_BIT (1ULL << (19))
#define VK_ID_GetPhysicalDeviceQueueFamilyProperties2_IDX (3)

#define PRINT_GetPhysicalDeviceQueueFamilyProperties2 IS_VK_ID_GetPhysicalDeviceQueueFamilyProperties2_ON(wrapper_printer_masks)
#define TRY_GetPhysicalDeviceQueueFamilyProperties2(TRUE, FALSE) TRUE
#define has_device_wrapper_GetPhysicalDeviceQueueFamilyProperties2(...) (wrapper_device_entrypoints.GetPhysicalDeviceQueueFamilyProperties2)
#define has_physical_device_wrapper_GetPhysicalDeviceQueueFamilyProperties2(...) (wrapper_physical_device_entrypoints.GetPhysicalDeviceQueueFamilyProperties2)
#define name_of_wrapper_GetPhysicalDeviceQueueFamilyProperties2(...) "wrapper_GetPhysicalDeviceQueueFamilyProperties2"
#define VK_ID_GetPhysicalDeviceMemoryProperties2 213
#define IS_VK_ID_GetPhysicalDeviceMemoryProperties2_ON(masks) (((masks).f3 & (1ULL << (21))) != 0)
#define SET_VK_ID_GetPhysicalDeviceMemoryProperties2_ON(masks) (masks).f3 |= (1ULL << (21))
#define VK_ID_GetPhysicalDeviceMemoryProperties2_BIT (1ULL << (21))
#define VK_ID_GetPhysicalDeviceMemoryProperties2_IDX (3)

#define PRINT_GetPhysicalDeviceMemoryProperties2 IS_VK_ID_GetPhysicalDeviceMemoryProperties2_ON(wrapper_printer_masks)
#define TRY_GetPhysicalDeviceMemoryProperties2(TRUE, FALSE) TRUE
#define has_device_wrapper_GetPhysicalDeviceMemoryProperties2(...) (wrapper_device_entrypoints.GetPhysicalDeviceMemoryProperties2)
#define has_physical_device_wrapper_GetPhysicalDeviceMemoryProperties2(...) (wrapper_physical_device_entrypoints.GetPhysicalDeviceMemoryProperties2)
#define name_of_wrapper_GetPhysicalDeviceMemoryProperties2(...) "wrapper_GetPhysicalDeviceMemoryProperties2"
#define VK_ID_GetPhysicalDeviceSparseImageFormatProperties2 215
#define IS_VK_ID_GetPhysicalDeviceSparseImageFormatProperties2_ON(masks) (((masks).f3 & (1ULL << (23))) != 0)
#define SET_VK_ID_GetPhysicalDeviceSparseImageFormatProperties2_ON(masks) (masks).f3 |= (1ULL << (23))
#define VK_ID_GetPhysicalDeviceSparseImageFormatProperties2_BIT (1ULL << (23))
#define VK_ID_GetPhysicalDeviceSparseImageFormatProperties2_IDX (3)

#define PRINT_GetPhysicalDeviceSparseImageFormatProperties2 IS_VK_ID_GetPhysicalDeviceSparseImageFormatProperties2_ON(wrapper_printer_masks)
#define TRY_GetPhysicalDeviceSparseImageFormatProperties2(TRUE, FALSE) TRUE
#define has_device_wrapper_GetPhysicalDeviceSparseImageFormatProperties2(...) (wrapper_device_entrypoints.GetPhysicalDeviceSparseImageFormatProperties2)
#define has_physical_device_wrapper_GetPhysicalDeviceSparseImageFormatProperties2(...) (wrapper_physical_device_entrypoints.GetPhysicalDeviceSparseImageFormatProperties2)
#define name_of_wrapper_GetPhysicalDeviceSparseImageFormatProperties2(...) "wrapper_GetPhysicalDeviceSparseImageFormatProperties2"
#define VK_ID_CmdPushDescriptorSetKHR 217
#define IS_VK_ID_CmdPushDescriptorSetKHR_ON(masks) (((masks).f3 & (1ULL << (25))) != 0)
#define SET_VK_ID_CmdPushDescriptorSetKHR_ON(masks) (masks).f3 |= (1ULL << (25))
#define VK_ID_CmdPushDescriptorSetKHR_BIT (1ULL << (25))
#define VK_ID_CmdPushDescriptorSetKHR_IDX (3)

#define PRINT_CmdPushDescriptorSetKHR IS_VK_ID_CmdPushDescriptorSetKHR_ON(wrapper_printer_masks)
#define TRY_CmdPushDescriptorSetKHR(TRUE, FALSE) TRUE
#define has_device_wrapper_CmdPushDescriptorSetKHR(...) (wrapper_device_entrypoints.CmdPushDescriptorSetKHR)
#define has_physical_device_wrapper_CmdPushDescriptorSetKHR(...) (wrapper_physical_device_entrypoints.CmdPushDescriptorSetKHR)
#define name_of_wrapper_CmdPushDescriptorSetKHR(...) "wrapper_CmdPushDescriptorSetKHR"
#define VK_ID_TrimCommandPool 218
#define IS_VK_ID_TrimCommandPool_ON(masks) (((masks).f3 & (1ULL << (26))) != 0)
#define SET_VK_ID_TrimCommandPool_ON(masks) (masks).f3 |= (1ULL << (26))
#define VK_ID_TrimCommandPool_BIT (1ULL << (26))
#define VK_ID_TrimCommandPool_IDX (3)

#define PRINT_TrimCommandPool IS_VK_ID_TrimCommandPool_ON(wrapper_printer_masks)
#define TRY_TrimCommandPool(TRUE, FALSE) TRUE
#define has_device_wrapper_TrimCommandPool(...) (wrapper_device_entrypoints.TrimCommandPool)
#define has_physical_device_wrapper_TrimCommandPool(...) (wrapper_physical_device_entrypoints.TrimCommandPool)
#define name_of_wrapper_TrimCommandPool(...) "wrapper_TrimCommandPool"
#define VK_ID_GetPhysicalDeviceExternalBufferProperties 220
#define IS_VK_ID_GetPhysicalDeviceExternalBufferProperties_ON(masks) (((masks).f3 & (1ULL << (28))) != 0)
#define SET_VK_ID_GetPhysicalDeviceExternalBufferProperties_ON(masks) (masks).f3 |= (1ULL << (28))
#define VK_ID_GetPhysicalDeviceExternalBufferProperties_BIT (1ULL << (28))
#define VK_ID_GetPhysicalDeviceExternalBufferProperties_IDX (3)

#define PRINT_GetPhysicalDeviceExternalBufferProperties IS_VK_ID_GetPhysicalDeviceExternalBufferProperties_ON(wrapper_printer_masks)
#define TRY_GetPhysicalDeviceExternalBufferProperties(TRUE, FALSE) TRUE
#define has_device_wrapper_GetPhysicalDeviceExternalBufferProperties(...) (wrapper_device_entrypoints.GetPhysicalDeviceExternalBufferProperties)
#define has_physical_device_wrapper_GetPhysicalDeviceExternalBufferProperties(...) (wrapper_physical_device_entrypoints.GetPhysicalDeviceExternalBufferProperties)
#define name_of_wrapper_GetPhysicalDeviceExternalBufferProperties(...) "wrapper_GetPhysicalDeviceExternalBufferProperties"
#ifdef VK_USE_PLATFORM_WIN32_KHR
#define VK_ID_GetMemoryWin32HandleKHR 222
#define IS_VK_ID_GetMemoryWin32HandleKHR_ON(masks) (((masks).f3 & (1ULL << (30))) != 0)
#define SET_VK_ID_GetMemoryWin32HandleKHR_ON(masks) (masks).f3 |= (1ULL << (30))
#define VK_ID_GetMemoryWin32HandleKHR_BIT (1ULL << (30))
#define VK_ID_GetMemoryWin32HandleKHR_IDX (3)

#define PRINT_GetMemoryWin32HandleKHR IS_VK_ID_GetMemoryWin32HandleKHR_ON(wrapper_printer_masks)
#define TRY_GetMemoryWin32HandleKHR(TRUE, FALSE) TRUE
#define has_device_wrapper_GetMemoryWin32HandleKHR(...) (wrapper_device_entrypoints.GetMemoryWin32HandleKHR)
#define has_physical_device_wrapper_GetMemoryWin32HandleKHR(...) (wrapper_physical_device_entrypoints.GetMemoryWin32HandleKHR)
#define name_of_wrapper_GetMemoryWin32HandleKHR(...) "wrapper_GetMemoryWin32HandleKHR"
#else
#define TRY_GetMemoryWin32HandleKHR(TRUE, FALSE) FALSE
#endif
#ifdef VK_USE_PLATFORM_WIN32_KHR
#define VK_ID_GetMemoryWin32HandlePropertiesKHR 223
#define IS_VK_ID_GetMemoryWin32HandlePropertiesKHR_ON(masks) (((masks).f3 & (1ULL << (31))) != 0)
#define SET_VK_ID_GetMemoryWin32HandlePropertiesKHR_ON(masks) (masks).f3 |= (1ULL << (31))
#define VK_ID_GetMemoryWin32HandlePropertiesKHR_BIT (1ULL << (31))
#define VK_ID_GetMemoryWin32HandlePropertiesKHR_IDX (3)

#define PRINT_GetMemoryWin32HandlePropertiesKHR IS_VK_ID_GetMemoryWin32HandlePropertiesKHR_ON(wrapper_printer_masks)
#define TRY_GetMemoryWin32HandlePropertiesKHR(TRUE, FALSE) TRUE
#define has_device_wrapper_GetMemoryWin32HandlePropertiesKHR(...) (wrapper_device_entrypoints.GetMemoryWin32HandlePropertiesKHR)
#define has_physical_device_wrapper_GetMemoryWin32HandlePropertiesKHR(...) (wrapper_physical_device_entrypoints.GetMemoryWin32HandlePropertiesKHR)
#define name_of_wrapper_GetMemoryWin32HandlePropertiesKHR(...) "wrapper_GetMemoryWin32HandlePropertiesKHR"
#else
#define TRY_GetMemoryWin32HandlePropertiesKHR(TRUE, FALSE) FALSE
#endif
#define VK_ID_GetMemoryFdKHR 224
#define IS_VK_ID_GetMemoryFdKHR_ON(masks) (((masks).f3 & (1ULL << (32))) != 0)
#define SET_VK_ID_GetMemoryFdKHR_ON(masks) (masks).f3 |= (1ULL << (32))
#define VK_ID_GetMemoryFdKHR_BIT (1ULL << (32))
#define VK_ID_GetMemoryFdKHR_IDX (3)

#define PRINT_GetMemoryFdKHR IS_VK_ID_GetMemoryFdKHR_ON(wrapper_printer_masks)
#define TRY_GetMemoryFdKHR(TRUE, FALSE) TRUE
#define has_device_wrapper_GetMemoryFdKHR(...) (wrapper_device_entrypoints.GetMemoryFdKHR)
#define has_physical_device_wrapper_GetMemoryFdKHR(...) (wrapper_physical_device_entrypoints.GetMemoryFdKHR)
#define name_of_wrapper_GetMemoryFdKHR(...) "wrapper_GetMemoryFdKHR"
#define VK_ID_GetMemoryFdPropertiesKHR 225
#define IS_VK_ID_GetMemoryFdPropertiesKHR_ON(masks) (((masks).f3 & (1ULL << (33))) != 0)
#define SET_VK_ID_GetMemoryFdPropertiesKHR_ON(masks) (masks).f3 |= (1ULL << (33))
#define VK_ID_GetMemoryFdPropertiesKHR_BIT (1ULL << (33))
#define VK_ID_GetMemoryFdPropertiesKHR_IDX (3)

#define PRINT_GetMemoryFdPropertiesKHR IS_VK_ID_GetMemoryFdPropertiesKHR_ON(wrapper_printer_masks)
#define TRY_GetMemoryFdPropertiesKHR(TRUE, FALSE) TRUE
#define has_device_wrapper_GetMemoryFdPropertiesKHR(...) (wrapper_device_entrypoints.GetMemoryFdPropertiesKHR)
#define has_physical_device_wrapper_GetMemoryFdPropertiesKHR(...) (wrapper_physical_device_entrypoints.GetMemoryFdPropertiesKHR)
#define name_of_wrapper_GetMemoryFdPropertiesKHR(...) "wrapper_GetMemoryFdPropertiesKHR"
#ifdef VK_USE_PLATFORM_FUCHSIA
#define VK_ID_GetMemoryZirconHandleFUCHSIA 226
#define IS_VK_ID_GetMemoryZirconHandleFUCHSIA_ON(masks) (((masks).f3 & (1ULL << (34))) != 0)
#define SET_VK_ID_GetMemoryZirconHandleFUCHSIA_ON(masks) (masks).f3 |= (1ULL << (34))
#define VK_ID_GetMemoryZirconHandleFUCHSIA_BIT (1ULL << (34))
#define VK_ID_GetMemoryZirconHandleFUCHSIA_IDX (3)

#define PRINT_GetMemoryZirconHandleFUCHSIA IS_VK_ID_GetMemoryZirconHandleFUCHSIA_ON(wrapper_printer_masks)
#define TRY_GetMemoryZirconHandleFUCHSIA(TRUE, FALSE) TRUE
#define has_device_wrapper_GetMemoryZirconHandleFUCHSIA(...) (wrapper_device_entrypoints.GetMemoryZirconHandleFUCHSIA)
#define has_physical_device_wrapper_GetMemoryZirconHandleFUCHSIA(...) (wrapper_physical_device_entrypoints.GetMemoryZirconHandleFUCHSIA)
#define name_of_wrapper_GetMemoryZirconHandleFUCHSIA(...) "wrapper_GetMemoryZirconHandleFUCHSIA"
#else
#define TRY_GetMemoryZirconHandleFUCHSIA(TRUE, FALSE) FALSE
#endif
#ifdef VK_USE_PLATFORM_FUCHSIA
#define VK_ID_GetMemoryZirconHandlePropertiesFUCHSIA 227
#define IS_VK_ID_GetMemoryZirconHandlePropertiesFUCHSIA_ON(masks) (((masks).f3 & (1ULL << (35))) != 0)
#define SET_VK_ID_GetMemoryZirconHandlePropertiesFUCHSIA_ON(masks) (masks).f3 |= (1ULL << (35))
#define VK_ID_GetMemoryZirconHandlePropertiesFUCHSIA_BIT (1ULL << (35))
#define VK_ID_GetMemoryZirconHandlePropertiesFUCHSIA_IDX (3)

#define PRINT_GetMemoryZirconHandlePropertiesFUCHSIA IS_VK_ID_GetMemoryZirconHandlePropertiesFUCHSIA_ON(wrapper_printer_masks)
#define TRY_GetMemoryZirconHandlePropertiesFUCHSIA(TRUE, FALSE) TRUE
#define has_device_wrapper_GetMemoryZirconHandlePropertiesFUCHSIA(...) (wrapper_device_entrypoints.GetMemoryZirconHandlePropertiesFUCHSIA)
#define has_physical_device_wrapper_GetMemoryZirconHandlePropertiesFUCHSIA(...) (wrapper_physical_device_entrypoints.GetMemoryZirconHandlePropertiesFUCHSIA)
#define name_of_wrapper_GetMemoryZirconHandlePropertiesFUCHSIA(...) "wrapper_GetMemoryZirconHandlePropertiesFUCHSIA"
#else
#define TRY_GetMemoryZirconHandlePropertiesFUCHSIA(TRUE, FALSE) FALSE
#endif
#define VK_ID_GetMemoryRemoteAddressNV 228
#define IS_VK_ID_GetMemoryRemoteAddressNV_ON(masks) (((masks).f3 & (1ULL << (36))) != 0)
#define SET_VK_ID_GetMemoryRemoteAddressNV_ON(masks) (masks).f3 |= (1ULL << (36))
#define VK_ID_GetMemoryRemoteAddressNV_BIT (1ULL << (36))
#define VK_ID_GetMemoryRemoteAddressNV_IDX (3)

#define PRINT_GetMemoryRemoteAddressNV IS_VK_ID_GetMemoryRemoteAddressNV_ON(wrapper_printer_masks)
#define TRY_GetMemoryRemoteAddressNV(TRUE, FALSE) TRUE
#define has_device_wrapper_GetMemoryRemoteAddressNV(...) (wrapper_device_entrypoints.GetMemoryRemoteAddressNV)
#define has_physical_device_wrapper_GetMemoryRemoteAddressNV(...) (wrapper_physical_device_entrypoints.GetMemoryRemoteAddressNV)
#define name_of_wrapper_GetMemoryRemoteAddressNV(...) "wrapper_GetMemoryRemoteAddressNV"
#define VK_ID_GetPhysicalDeviceExternalSemaphoreProperties 229
#define IS_VK_ID_GetPhysicalDeviceExternalSemaphoreProperties_ON(masks) (((masks).f3 & (1ULL << (37))) != 0)
#define SET_VK_ID_GetPhysicalDeviceExternalSemaphoreProperties_ON(masks) (masks).f3 |= (1ULL << (37))
#define VK_ID_GetPhysicalDeviceExternalSemaphoreProperties_BIT (1ULL << (37))
#define VK_ID_GetPhysicalDeviceExternalSemaphoreProperties_IDX (3)

#define PRINT_GetPhysicalDeviceExternalSemaphoreProperties IS_VK_ID_GetPhysicalDeviceExternalSemaphoreProperties_ON(wrapper_printer_masks)
#define TRY_GetPhysicalDeviceExternalSemaphoreProperties(TRUE, FALSE) TRUE
#define has_device_wrapper_GetPhysicalDeviceExternalSemaphoreProperties(...) (wrapper_device_entrypoints.GetPhysicalDeviceExternalSemaphoreProperties)
#define has_physical_device_wrapper_GetPhysicalDeviceExternalSemaphoreProperties(...) (wrapper_physical_device_entrypoints.GetPhysicalDeviceExternalSemaphoreProperties)
#define name_of_wrapper_GetPhysicalDeviceExternalSemaphoreProperties(...) "wrapper_GetPhysicalDeviceExternalSemaphoreProperties"
#ifdef VK_USE_PLATFORM_WIN32_KHR
#define VK_ID_GetSemaphoreWin32HandleKHR 231
#define IS_VK_ID_GetSemaphoreWin32HandleKHR_ON(masks) (((masks).f3 & (1ULL << (39))) != 0)
#define SET_VK_ID_GetSemaphoreWin32HandleKHR_ON(masks) (masks).f3 |= (1ULL << (39))
#define VK_ID_GetSemaphoreWin32HandleKHR_BIT (1ULL << (39))
#define VK_ID_GetSemaphoreWin32HandleKHR_IDX (3)

#define PRINT_GetSemaphoreWin32HandleKHR IS_VK_ID_GetSemaphoreWin32HandleKHR_ON(wrapper_printer_masks)
#define TRY_GetSemaphoreWin32HandleKHR(TRUE, FALSE) TRUE
#define has_device_wrapper_GetSemaphoreWin32HandleKHR(...) (wrapper_device_entrypoints.GetSemaphoreWin32HandleKHR)
#define has_physical_device_wrapper_GetSemaphoreWin32HandleKHR(...) (wrapper_physical_device_entrypoints.GetSemaphoreWin32HandleKHR)
#define name_of_wrapper_GetSemaphoreWin32HandleKHR(...) "wrapper_GetSemaphoreWin32HandleKHR"
#else
#define TRY_GetSemaphoreWin32HandleKHR(TRUE, FALSE) FALSE
#endif
#ifdef VK_USE_PLATFORM_WIN32_KHR
#define VK_ID_ImportSemaphoreWin32HandleKHR 232
#define IS_VK_ID_ImportSemaphoreWin32HandleKHR_ON(masks) (((masks).f3 & (1ULL << (40))) != 0)
#define SET_VK_ID_ImportSemaphoreWin32HandleKHR_ON(masks) (masks).f3 |= (1ULL << (40))
#define VK_ID_ImportSemaphoreWin32HandleKHR_BIT (1ULL << (40))
#define VK_ID_ImportSemaphoreWin32HandleKHR_IDX (3)

#define PRINT_ImportSemaphoreWin32HandleKHR IS_VK_ID_ImportSemaphoreWin32HandleKHR_ON(wrapper_printer_masks)
#define TRY_ImportSemaphoreWin32HandleKHR(TRUE, FALSE) TRUE
#define has_device_wrapper_ImportSemaphoreWin32HandleKHR(...) (wrapper_device_entrypoints.ImportSemaphoreWin32HandleKHR)
#define has_physical_device_wrapper_ImportSemaphoreWin32HandleKHR(...) (wrapper_physical_device_entrypoints.ImportSemaphoreWin32HandleKHR)
#define name_of_wrapper_ImportSemaphoreWin32HandleKHR(...) "wrapper_ImportSemaphoreWin32HandleKHR"
#else
#define TRY_ImportSemaphoreWin32HandleKHR(TRUE, FALSE) FALSE
#endif
#define VK_ID_GetSemaphoreFdKHR 233
#define IS_VK_ID_GetSemaphoreFdKHR_ON(masks) (((masks).f3 & (1ULL << (41))) != 0)
#define SET_VK_ID_GetSemaphoreFdKHR_ON(masks) (masks).f3 |= (1ULL << (41))
#define VK_ID_GetSemaphoreFdKHR_BIT (1ULL << (41))
#define VK_ID_GetSemaphoreFdKHR_IDX (3)

#define PRINT_GetSemaphoreFdKHR IS_VK_ID_GetSemaphoreFdKHR_ON(wrapper_printer_masks)
#define TRY_GetSemaphoreFdKHR(TRUE, FALSE) TRUE
#define has_device_wrapper_GetSemaphoreFdKHR(...) (wrapper_device_entrypoints.GetSemaphoreFdKHR)
#define has_physical_device_wrapper_GetSemaphoreFdKHR(...) (wrapper_physical_device_entrypoints.GetSemaphoreFdKHR)
#define name_of_wrapper_GetSemaphoreFdKHR(...) "wrapper_GetSemaphoreFdKHR"
#define VK_ID_ImportSemaphoreFdKHR 234
#define IS_VK_ID_ImportSemaphoreFdKHR_ON(masks) (((masks).f3 & (1ULL << (42))) != 0)
#define SET_VK_ID_ImportSemaphoreFdKHR_ON(masks) (masks).f3 |= (1ULL << (42))
#define VK_ID_ImportSemaphoreFdKHR_BIT (1ULL << (42))
#define VK_ID_ImportSemaphoreFdKHR_IDX (3)

#define PRINT_ImportSemaphoreFdKHR IS_VK_ID_ImportSemaphoreFdKHR_ON(wrapper_printer_masks)
#define TRY_ImportSemaphoreFdKHR(TRUE, FALSE) TRUE
#define has_device_wrapper_ImportSemaphoreFdKHR(...) (wrapper_device_entrypoints.ImportSemaphoreFdKHR)
#define has_physical_device_wrapper_ImportSemaphoreFdKHR(...) (wrapper_physical_device_entrypoints.ImportSemaphoreFdKHR)
#define name_of_wrapper_ImportSemaphoreFdKHR(...) "wrapper_ImportSemaphoreFdKHR"
#ifdef VK_USE_PLATFORM_FUCHSIA
#define VK_ID_GetSemaphoreZirconHandleFUCHSIA 235
#define IS_VK_ID_GetSemaphoreZirconHandleFUCHSIA_ON(masks) (((masks).f3 & (1ULL << (43))) != 0)
#define SET_VK_ID_GetSemaphoreZirconHandleFUCHSIA_ON(masks) (masks).f3 |= (1ULL << (43))
#define VK_ID_GetSemaphoreZirconHandleFUCHSIA_BIT (1ULL << (43))
#define VK_ID_GetSemaphoreZirconHandleFUCHSIA_IDX (3)

#define PRINT_GetSemaphoreZirconHandleFUCHSIA IS_VK_ID_GetSemaphoreZirconHandleFUCHSIA_ON(wrapper_printer_masks)
#define TRY_GetSemaphoreZirconHandleFUCHSIA(TRUE, FALSE) TRUE
#define has_device_wrapper_GetSemaphoreZirconHandleFUCHSIA(...) (wrapper_device_entrypoints.GetSemaphoreZirconHandleFUCHSIA)
#define has_physical_device_wrapper_GetSemaphoreZirconHandleFUCHSIA(...) (wrapper_physical_device_entrypoints.GetSemaphoreZirconHandleFUCHSIA)
#define name_of_wrapper_GetSemaphoreZirconHandleFUCHSIA(...) "wrapper_GetSemaphoreZirconHandleFUCHSIA"
#else
#define TRY_GetSemaphoreZirconHandleFUCHSIA(TRUE, FALSE) FALSE
#endif
#ifdef VK_USE_PLATFORM_FUCHSIA
#define VK_ID_ImportSemaphoreZirconHandleFUCHSIA 236
#define IS_VK_ID_ImportSemaphoreZirconHandleFUCHSIA_ON(masks) (((masks).f3 & (1ULL << (44))) != 0)
#define SET_VK_ID_ImportSemaphoreZirconHandleFUCHSIA_ON(masks) (masks).f3 |= (1ULL << (44))
#define VK_ID_ImportSemaphoreZirconHandleFUCHSIA_BIT (1ULL << (44))
#define VK_ID_ImportSemaphoreZirconHandleFUCHSIA_IDX (3)

#define PRINT_ImportSemaphoreZirconHandleFUCHSIA IS_VK_ID_ImportSemaphoreZirconHandleFUCHSIA_ON(wrapper_printer_masks)
#define TRY_ImportSemaphoreZirconHandleFUCHSIA(TRUE, FALSE) TRUE
#define has_device_wrapper_ImportSemaphoreZirconHandleFUCHSIA(...) (wrapper_device_entrypoints.ImportSemaphoreZirconHandleFUCHSIA)
#define has_physical_device_wrapper_ImportSemaphoreZirconHandleFUCHSIA(...) (wrapper_physical_device_entrypoints.ImportSemaphoreZirconHandleFUCHSIA)
#define name_of_wrapper_ImportSemaphoreZirconHandleFUCHSIA(...) "wrapper_ImportSemaphoreZirconHandleFUCHSIA"
#else
#define TRY_ImportSemaphoreZirconHandleFUCHSIA(TRUE, FALSE) FALSE
#endif
#define VK_ID_GetPhysicalDeviceExternalFenceProperties 237
#define IS_VK_ID_GetPhysicalDeviceExternalFenceProperties_ON(masks) (((masks).f3 & (1ULL << (45))) != 0)
#define SET_VK_ID_GetPhysicalDeviceExternalFenceProperties_ON(masks) (masks).f3 |= (1ULL << (45))
#define VK_ID_GetPhysicalDeviceExternalFenceProperties_BIT (1ULL << (45))
#define VK_ID_GetPhysicalDeviceExternalFenceProperties_IDX (3)

#define PRINT_GetPhysicalDeviceExternalFenceProperties IS_VK_ID_GetPhysicalDeviceExternalFenceProperties_ON(wrapper_printer_masks)
#define TRY_GetPhysicalDeviceExternalFenceProperties(TRUE, FALSE) TRUE
#define has_device_wrapper_GetPhysicalDeviceExternalFenceProperties(...) (wrapper_device_entrypoints.GetPhysicalDeviceExternalFenceProperties)
#define has_physical_device_wrapper_GetPhysicalDeviceExternalFenceProperties(...) (wrapper_physical_device_entrypoints.GetPhysicalDeviceExternalFenceProperties)
#define name_of_wrapper_GetPhysicalDeviceExternalFenceProperties(...) "wrapper_GetPhysicalDeviceExternalFenceProperties"
#ifdef VK_USE_PLATFORM_WIN32_KHR
#define VK_ID_GetFenceWin32HandleKHR 239
#define IS_VK_ID_GetFenceWin32HandleKHR_ON(masks) (((masks).f3 & (1ULL << (47))) != 0)
#define SET_VK_ID_GetFenceWin32HandleKHR_ON(masks) (masks).f3 |= (1ULL << (47))
#define VK_ID_GetFenceWin32HandleKHR_BIT (1ULL << (47))
#define VK_ID_GetFenceWin32HandleKHR_IDX (3)

#define PRINT_GetFenceWin32HandleKHR IS_VK_ID_GetFenceWin32HandleKHR_ON(wrapper_printer_masks)
#define TRY_GetFenceWin32HandleKHR(TRUE, FALSE) TRUE
#define has_device_wrapper_GetFenceWin32HandleKHR(...) (wrapper_device_entrypoints.GetFenceWin32HandleKHR)
#define has_physical_device_wrapper_GetFenceWin32HandleKHR(...) (wrapper_physical_device_entrypoints.GetFenceWin32HandleKHR)
#define name_of_wrapper_GetFenceWin32HandleKHR(...) "wrapper_GetFenceWin32HandleKHR"
#else
#define TRY_GetFenceWin32HandleKHR(TRUE, FALSE) FALSE
#endif
#ifdef VK_USE_PLATFORM_WIN32_KHR
#define VK_ID_ImportFenceWin32HandleKHR 240
#define IS_VK_ID_ImportFenceWin32HandleKHR_ON(masks) (((masks).f3 & (1ULL << (48))) != 0)
#define SET_VK_ID_ImportFenceWin32HandleKHR_ON(masks) (masks).f3 |= (1ULL << (48))
#define VK_ID_ImportFenceWin32HandleKHR_BIT (1ULL << (48))
#define VK_ID_ImportFenceWin32HandleKHR_IDX (3)

#define PRINT_ImportFenceWin32HandleKHR IS_VK_ID_ImportFenceWin32HandleKHR_ON(wrapper_printer_masks)
#define TRY_ImportFenceWin32HandleKHR(TRUE, FALSE) TRUE
#define has_device_wrapper_ImportFenceWin32HandleKHR(...) (wrapper_device_entrypoints.ImportFenceWin32HandleKHR)
#define has_physical_device_wrapper_ImportFenceWin32HandleKHR(...) (wrapper_physical_device_entrypoints.ImportFenceWin32HandleKHR)
#define name_of_wrapper_ImportFenceWin32HandleKHR(...) "wrapper_ImportFenceWin32HandleKHR"
#else
#define TRY_ImportFenceWin32HandleKHR(TRUE, FALSE) FALSE
#endif
#define VK_ID_GetFenceFdKHR 241
#define IS_VK_ID_GetFenceFdKHR_ON(masks) (((masks).f3 & (1ULL << (49))) != 0)
#define SET_VK_ID_GetFenceFdKHR_ON(masks) (masks).f3 |= (1ULL << (49))
#define VK_ID_GetFenceFdKHR_BIT (1ULL << (49))
#define VK_ID_GetFenceFdKHR_IDX (3)

#define PRINT_GetFenceFdKHR IS_VK_ID_GetFenceFdKHR_ON(wrapper_printer_masks)
#define TRY_GetFenceFdKHR(TRUE, FALSE) TRUE
#define has_device_wrapper_GetFenceFdKHR(...) (wrapper_device_entrypoints.GetFenceFdKHR)
#define has_physical_device_wrapper_GetFenceFdKHR(...) (wrapper_physical_device_entrypoints.GetFenceFdKHR)
#define name_of_wrapper_GetFenceFdKHR(...) "wrapper_GetFenceFdKHR"
#define VK_ID_ImportFenceFdKHR 242
#define IS_VK_ID_ImportFenceFdKHR_ON(masks) (((masks).f3 & (1ULL << (50))) != 0)
#define SET_VK_ID_ImportFenceFdKHR_ON(masks) (masks).f3 |= (1ULL << (50))
#define VK_ID_ImportFenceFdKHR_BIT (1ULL << (50))
#define VK_ID_ImportFenceFdKHR_IDX (3)

#define PRINT_ImportFenceFdKHR IS_VK_ID_ImportFenceFdKHR_ON(wrapper_printer_masks)
#define TRY_ImportFenceFdKHR(TRUE, FALSE) TRUE
#define has_device_wrapper_ImportFenceFdKHR(...) (wrapper_device_entrypoints.ImportFenceFdKHR)
#define has_physical_device_wrapper_ImportFenceFdKHR(...) (wrapper_physical_device_entrypoints.ImportFenceFdKHR)
#define name_of_wrapper_ImportFenceFdKHR(...) "wrapper_ImportFenceFdKHR"
#define VK_ID_ReleaseDisplayEXT 243
#define IS_VK_ID_ReleaseDisplayEXT_ON(masks) (((masks).f3 & (1ULL << (51))) != 0)
#define SET_VK_ID_ReleaseDisplayEXT_ON(masks) (masks).f3 |= (1ULL << (51))
#define VK_ID_ReleaseDisplayEXT_BIT (1ULL << (51))
#define VK_ID_ReleaseDisplayEXT_IDX (3)

#define PRINT_ReleaseDisplayEXT IS_VK_ID_ReleaseDisplayEXT_ON(wrapper_printer_masks)
#define TRY_ReleaseDisplayEXT(TRUE, FALSE) TRUE
#define has_device_wrapper_ReleaseDisplayEXT(...) (wrapper_device_entrypoints.ReleaseDisplayEXT)
#define has_physical_device_wrapper_ReleaseDisplayEXT(...) (wrapper_physical_device_entrypoints.ReleaseDisplayEXT)
#define name_of_wrapper_ReleaseDisplayEXT(...) "wrapper_ReleaseDisplayEXT"
#ifdef VK_USE_PLATFORM_XLIB_XRANDR_EXT
#define VK_ID_AcquireXlibDisplayEXT 244
#define IS_VK_ID_AcquireXlibDisplayEXT_ON(masks) (((masks).f3 & (1ULL << (52))) != 0)
#define SET_VK_ID_AcquireXlibDisplayEXT_ON(masks) (masks).f3 |= (1ULL << (52))
#define VK_ID_AcquireXlibDisplayEXT_BIT (1ULL << (52))
#define VK_ID_AcquireXlibDisplayEXT_IDX (3)

#define PRINT_AcquireXlibDisplayEXT IS_VK_ID_AcquireXlibDisplayEXT_ON(wrapper_printer_masks)
#define TRY_AcquireXlibDisplayEXT(TRUE, FALSE) TRUE
#define has_device_wrapper_AcquireXlibDisplayEXT(...) (wrapper_device_entrypoints.AcquireXlibDisplayEXT)
#define has_physical_device_wrapper_AcquireXlibDisplayEXT(...) (wrapper_physical_device_entrypoints.AcquireXlibDisplayEXT)
#define name_of_wrapper_AcquireXlibDisplayEXT(...) "wrapper_AcquireXlibDisplayEXT"
#else
#define TRY_AcquireXlibDisplayEXT(TRUE, FALSE) FALSE
#endif
#ifdef VK_USE_PLATFORM_XLIB_XRANDR_EXT
#define VK_ID_GetRandROutputDisplayEXT 245
#define IS_VK_ID_GetRandROutputDisplayEXT_ON(masks) (((masks).f3 & (1ULL << (53))) != 0)
#define SET_VK_ID_GetRandROutputDisplayEXT_ON(masks) (masks).f3 |= (1ULL << (53))
#define VK_ID_GetRandROutputDisplayEXT_BIT (1ULL << (53))
#define VK_ID_GetRandROutputDisplayEXT_IDX (3)

#define PRINT_GetRandROutputDisplayEXT IS_VK_ID_GetRandROutputDisplayEXT_ON(wrapper_printer_masks)
#define TRY_GetRandROutputDisplayEXT(TRUE, FALSE) TRUE
#define has_device_wrapper_GetRandROutputDisplayEXT(...) (wrapper_device_entrypoints.GetRandROutputDisplayEXT)
#define has_physical_device_wrapper_GetRandROutputDisplayEXT(...) (wrapper_physical_device_entrypoints.GetRandROutputDisplayEXT)
#define name_of_wrapper_GetRandROutputDisplayEXT(...) "wrapper_GetRandROutputDisplayEXT"
#else
#define TRY_GetRandROutputDisplayEXT(TRUE, FALSE) FALSE
#endif
#ifdef VK_USE_PLATFORM_WIN32_KHR
#define VK_ID_AcquireWinrtDisplayNV 246
#define IS_VK_ID_AcquireWinrtDisplayNV_ON(masks) (((masks).f3 & (1ULL << (54))) != 0)
#define SET_VK_ID_AcquireWinrtDisplayNV_ON(masks) (masks).f3 |= (1ULL << (54))
#define VK_ID_AcquireWinrtDisplayNV_BIT (1ULL << (54))
#define VK_ID_AcquireWinrtDisplayNV_IDX (3)

#define PRINT_AcquireWinrtDisplayNV IS_VK_ID_AcquireWinrtDisplayNV_ON(wrapper_printer_masks)
#define TRY_AcquireWinrtDisplayNV(TRUE, FALSE) TRUE
#define has_device_wrapper_AcquireWinrtDisplayNV(...) (wrapper_device_entrypoints.AcquireWinrtDisplayNV)
#define has_physical_device_wrapper_AcquireWinrtDisplayNV(...) (wrapper_physical_device_entrypoints.AcquireWinrtDisplayNV)
#define name_of_wrapper_AcquireWinrtDisplayNV(...) "wrapper_AcquireWinrtDisplayNV"
#else
#define TRY_AcquireWinrtDisplayNV(TRUE, FALSE) FALSE
#endif
#ifdef VK_USE_PLATFORM_WIN32_KHR
#define VK_ID_GetWinrtDisplayNV 247
#define IS_VK_ID_GetWinrtDisplayNV_ON(masks) (((masks).f3 & (1ULL << (55))) != 0)
#define SET_VK_ID_GetWinrtDisplayNV_ON(masks) (masks).f3 |= (1ULL << (55))
#define VK_ID_GetWinrtDisplayNV_BIT (1ULL << (55))
#define VK_ID_GetWinrtDisplayNV_IDX (3)

#define PRINT_GetWinrtDisplayNV IS_VK_ID_GetWinrtDisplayNV_ON(wrapper_printer_masks)
#define TRY_GetWinrtDisplayNV(TRUE, FALSE) TRUE
#define has_device_wrapper_GetWinrtDisplayNV(...) (wrapper_device_entrypoints.GetWinrtDisplayNV)
#define has_physical_device_wrapper_GetWinrtDisplayNV(...) (wrapper_physical_device_entrypoints.GetWinrtDisplayNV)
#define name_of_wrapper_GetWinrtDisplayNV(...) "wrapper_GetWinrtDisplayNV"
#else
#define TRY_GetWinrtDisplayNV(TRUE, FALSE) FALSE
#endif
#define VK_ID_DisplayPowerControlEXT 248
#define IS_VK_ID_DisplayPowerControlEXT_ON(masks) (((masks).f3 & (1ULL << (56))) != 0)
#define SET_VK_ID_DisplayPowerControlEXT_ON(masks) (masks).f3 |= (1ULL << (56))
#define VK_ID_DisplayPowerControlEXT_BIT (1ULL << (56))
#define VK_ID_DisplayPowerControlEXT_IDX (3)

#define PRINT_DisplayPowerControlEXT IS_VK_ID_DisplayPowerControlEXT_ON(wrapper_printer_masks)
#define TRY_DisplayPowerControlEXT(TRUE, FALSE) TRUE
#define has_device_wrapper_DisplayPowerControlEXT(...) (wrapper_device_entrypoints.DisplayPowerControlEXT)
#define has_physical_device_wrapper_DisplayPowerControlEXT(...) (wrapper_physical_device_entrypoints.DisplayPowerControlEXT)
#define name_of_wrapper_DisplayPowerControlEXT(...) "wrapper_DisplayPowerControlEXT"
#define VK_ID_RegisterDeviceEventEXT 249
#define IS_VK_ID_RegisterDeviceEventEXT_ON(masks) (((masks).f3 & (1ULL << (57))) != 0)
#define SET_VK_ID_RegisterDeviceEventEXT_ON(masks) (masks).f3 |= (1ULL << (57))
#define VK_ID_RegisterDeviceEventEXT_BIT (1ULL << (57))
#define VK_ID_RegisterDeviceEventEXT_IDX (3)

#define PRINT_RegisterDeviceEventEXT IS_VK_ID_RegisterDeviceEventEXT_ON(wrapper_printer_masks)
#define TRY_RegisterDeviceEventEXT(TRUE, FALSE) TRUE
#define has_device_wrapper_RegisterDeviceEventEXT(...) (wrapper_device_entrypoints.RegisterDeviceEventEXT)
#define has_physical_device_wrapper_RegisterDeviceEventEXT(...) (wrapper_physical_device_entrypoints.RegisterDeviceEventEXT)
#define name_of_wrapper_RegisterDeviceEventEXT(...) "wrapper_RegisterDeviceEventEXT"
#define VK_ID_RegisterDisplayEventEXT 250
#define IS_VK_ID_RegisterDisplayEventEXT_ON(masks) (((masks).f3 & (1ULL << (58))) != 0)
#define SET_VK_ID_RegisterDisplayEventEXT_ON(masks) (masks).f3 |= (1ULL << (58))
#define VK_ID_RegisterDisplayEventEXT_BIT (1ULL << (58))
#define VK_ID_RegisterDisplayEventEXT_IDX (3)

#define PRINT_RegisterDisplayEventEXT IS_VK_ID_RegisterDisplayEventEXT_ON(wrapper_printer_masks)
#define TRY_RegisterDisplayEventEXT(TRUE, FALSE) TRUE
#define has_device_wrapper_RegisterDisplayEventEXT(...) (wrapper_device_entrypoints.RegisterDisplayEventEXT)
#define has_physical_device_wrapper_RegisterDisplayEventEXT(...) (wrapper_physical_device_entrypoints.RegisterDisplayEventEXT)
#define name_of_wrapper_RegisterDisplayEventEXT(...) "wrapper_RegisterDisplayEventEXT"
#define VK_ID_GetSwapchainCounterEXT 251
#define IS_VK_ID_GetSwapchainCounterEXT_ON(masks) (((masks).f3 & (1ULL << (59))) != 0)
#define SET_VK_ID_GetSwapchainCounterEXT_ON(masks) (masks).f3 |= (1ULL << (59))
#define VK_ID_GetSwapchainCounterEXT_BIT (1ULL << (59))
#define VK_ID_GetSwapchainCounterEXT_IDX (3)

#define PRINT_GetSwapchainCounterEXT IS_VK_ID_GetSwapchainCounterEXT_ON(wrapper_printer_masks)
#define TRY_GetSwapchainCounterEXT(TRUE, FALSE) TRUE
#define has_device_wrapper_GetSwapchainCounterEXT(...) (wrapper_device_entrypoints.GetSwapchainCounterEXT)
#define has_physical_device_wrapper_GetSwapchainCounterEXT(...) (wrapper_physical_device_entrypoints.GetSwapchainCounterEXT)
#define name_of_wrapper_GetSwapchainCounterEXT(...) "wrapper_GetSwapchainCounterEXT"
#define VK_ID_GetPhysicalDeviceSurfaceCapabilities2EXT 252
#define IS_VK_ID_GetPhysicalDeviceSurfaceCapabilities2EXT_ON(masks) (((masks).f3 & (1ULL << (60))) != 0)
#define SET_VK_ID_GetPhysicalDeviceSurfaceCapabilities2EXT_ON(masks) (masks).f3 |= (1ULL << (60))
#define VK_ID_GetPhysicalDeviceSurfaceCapabilities2EXT_BIT (1ULL << (60))
#define VK_ID_GetPhysicalDeviceSurfaceCapabilities2EXT_IDX (3)

#define PRINT_GetPhysicalDeviceSurfaceCapabilities2EXT IS_VK_ID_GetPhysicalDeviceSurfaceCapabilities2EXT_ON(wrapper_printer_masks)
#define TRY_GetPhysicalDeviceSurfaceCapabilities2EXT(TRUE, FALSE) TRUE
#define has_device_wrapper_GetPhysicalDeviceSurfaceCapabilities2EXT(...) (wrapper_device_entrypoints.GetPhysicalDeviceSurfaceCapabilities2EXT)
#define has_physical_device_wrapper_GetPhysicalDeviceSurfaceCapabilities2EXT(...) (wrapper_physical_device_entrypoints.GetPhysicalDeviceSurfaceCapabilities2EXT)
#define name_of_wrapper_GetPhysicalDeviceSurfaceCapabilities2EXT(...) "wrapper_GetPhysicalDeviceSurfaceCapabilities2EXT"
#define VK_ID_EnumeratePhysicalDeviceGroups 253
#define IS_VK_ID_EnumeratePhysicalDeviceGroups_ON(masks) (((masks).f3 & (1ULL << (61))) != 0)
#define SET_VK_ID_EnumeratePhysicalDeviceGroups_ON(masks) (masks).f3 |= (1ULL << (61))
#define VK_ID_EnumeratePhysicalDeviceGroups_BIT (1ULL << (61))
#define VK_ID_EnumeratePhysicalDeviceGroups_IDX (3)

#define PRINT_EnumeratePhysicalDeviceGroups IS_VK_ID_EnumeratePhysicalDeviceGroups_ON(wrapper_printer_masks)
#define TRY_EnumeratePhysicalDeviceGroups(TRUE, FALSE) TRUE
#define has_device_wrapper_EnumeratePhysicalDeviceGroups(...) (wrapper_device_entrypoints.EnumeratePhysicalDeviceGroups)
#define has_physical_device_wrapper_EnumeratePhysicalDeviceGroups(...) (wrapper_physical_device_entrypoints.EnumeratePhysicalDeviceGroups)
#define name_of_wrapper_EnumeratePhysicalDeviceGroups(...) "wrapper_EnumeratePhysicalDeviceGroups"
#define VK_ID_GetDeviceGroupPeerMemoryFeatures 255
#define IS_VK_ID_GetDeviceGroupPeerMemoryFeatures_ON(masks) (((masks).f3 & (1ULL << (63))) != 0)
#define SET_VK_ID_GetDeviceGroupPeerMemoryFeatures_ON(masks) (masks).f3 |= (1ULL << (63))
#define VK_ID_GetDeviceGroupPeerMemoryFeatures_BIT (1ULL << (63))
#define VK_ID_GetDeviceGroupPeerMemoryFeatures_IDX (3)

#define PRINT_GetDeviceGroupPeerMemoryFeatures IS_VK_ID_GetDeviceGroupPeerMemoryFeatures_ON(wrapper_printer_masks)
#define TRY_GetDeviceGroupPeerMemoryFeatures(TRUE, FALSE) TRUE
#define has_device_wrapper_GetDeviceGroupPeerMemoryFeatures(...) (wrapper_device_entrypoints.GetDeviceGroupPeerMemoryFeatures)
#define has_physical_device_wrapper_GetDeviceGroupPeerMemoryFeatures(...) (wrapper_physical_device_entrypoints.GetDeviceGroupPeerMemoryFeatures)
#define name_of_wrapper_GetDeviceGroupPeerMemoryFeatures(...) "wrapper_GetDeviceGroupPeerMemoryFeatures"
#define VK_ID_BindBufferMemory2 257
#define IS_VK_ID_BindBufferMemory2_ON(masks) (((masks).f4 & (1ULL << (1))) != 0)
#define SET_VK_ID_BindBufferMemory2_ON(masks) (masks).f4 |= (1ULL << (1))
#define VK_ID_BindBufferMemory2_BIT (1ULL << (1))
#define VK_ID_BindBufferMemory2_IDX (4)

#define PRINT_BindBufferMemory2 IS_VK_ID_BindBufferMemory2_ON(wrapper_printer_masks)
#define TRY_BindBufferMemory2(TRUE, FALSE) TRUE
#define has_device_wrapper_BindBufferMemory2(...) (wrapper_device_entrypoints.BindBufferMemory2)
#define has_physical_device_wrapper_BindBufferMemory2(...) (wrapper_physical_device_entrypoints.BindBufferMemory2)
#define name_of_wrapper_BindBufferMemory2(...) "wrapper_BindBufferMemory2"
#define VK_ID_BindImageMemory2 259
#define IS_VK_ID_BindImageMemory2_ON(masks) (((masks).f4 & (1ULL << (3))) != 0)
#define SET_VK_ID_BindImageMemory2_ON(masks) (masks).f4 |= (1ULL << (3))
#define VK_ID_BindImageMemory2_BIT (1ULL << (3))
#define VK_ID_BindImageMemory2_IDX (4)

#define PRINT_BindImageMemory2 IS_VK_ID_BindImageMemory2_ON(wrapper_printer_masks)
#define TRY_BindImageMemory2(TRUE, FALSE) TRUE
#define has_device_wrapper_BindImageMemory2(...) (wrapper_device_entrypoints.BindImageMemory2)
#define has_physical_device_wrapper_BindImageMemory2(...) (wrapper_physical_device_entrypoints.BindImageMemory2)
#define name_of_wrapper_BindImageMemory2(...) "wrapper_BindImageMemory2"
#define VK_ID_CmdSetDeviceMask 261
#define IS_VK_ID_CmdSetDeviceMask_ON(masks) (((masks).f4 & (1ULL << (5))) != 0)
#define SET_VK_ID_CmdSetDeviceMask_ON(masks) (masks).f4 |= (1ULL << (5))
#define VK_ID_CmdSetDeviceMask_BIT (1ULL << (5))
#define VK_ID_CmdSetDeviceMask_IDX (4)

#define PRINT_CmdSetDeviceMask IS_VK_ID_CmdSetDeviceMask_ON(wrapper_printer_masks)
#define TRY_CmdSetDeviceMask(TRUE, FALSE) TRUE
#define has_device_wrapper_CmdSetDeviceMask(...) (wrapper_device_entrypoints.CmdSetDeviceMask)
#define has_physical_device_wrapper_CmdSetDeviceMask(...) (wrapper_physical_device_entrypoints.CmdSetDeviceMask)
#define name_of_wrapper_CmdSetDeviceMask(...) "wrapper_CmdSetDeviceMask"
#define VK_ID_GetDeviceGroupPresentCapabilitiesKHR 263
#define IS_VK_ID_GetDeviceGroupPresentCapabilitiesKHR_ON(masks) (((masks).f4 & (1ULL << (7))) != 0)
#define SET_VK_ID_GetDeviceGroupPresentCapabilitiesKHR_ON(masks) (masks).f4 |= (1ULL << (7))
#define VK_ID_GetDeviceGroupPresentCapabilitiesKHR_BIT (1ULL << (7))
#define VK_ID_GetDeviceGroupPresentCapabilitiesKHR_IDX (4)

#define PRINT_GetDeviceGroupPresentCapabilitiesKHR IS_VK_ID_GetDeviceGroupPresentCapabilitiesKHR_ON(wrapper_printer_masks)
#define TRY_GetDeviceGroupPresentCapabilitiesKHR(TRUE, FALSE) TRUE
#define has_device_wrapper_GetDeviceGroupPresentCapabilitiesKHR(...) (wrapper_device_entrypoints.GetDeviceGroupPresentCapabilitiesKHR)
#define has_physical_device_wrapper_GetDeviceGroupPresentCapabilitiesKHR(...) (wrapper_physical_device_entrypoints.GetDeviceGroupPresentCapabilitiesKHR)
#define name_of_wrapper_GetDeviceGroupPresentCapabilitiesKHR(...) "wrapper_GetDeviceGroupPresentCapabilitiesKHR"
#define VK_ID_GetDeviceGroupSurfacePresentModesKHR 264
#define IS_VK_ID_GetDeviceGroupSurfacePresentModesKHR_ON(masks) (((masks).f4 & (1ULL << (8))) != 0)
#define SET_VK_ID_GetDeviceGroupSurfacePresentModesKHR_ON(masks) (masks).f4 |= (1ULL << (8))
#define VK_ID_GetDeviceGroupSurfacePresentModesKHR_BIT (1ULL << (8))
#define VK_ID_GetDeviceGroupSurfacePresentModesKHR_IDX (4)

#define PRINT_GetDeviceGroupSurfacePresentModesKHR IS_VK_ID_GetDeviceGroupSurfacePresentModesKHR_ON(wrapper_printer_masks)
#define TRY_GetDeviceGroupSurfacePresentModesKHR(TRUE, FALSE) TRUE
#define has_device_wrapper_GetDeviceGroupSurfacePresentModesKHR(...) (wrapper_device_entrypoints.GetDeviceGroupSurfacePresentModesKHR)
#define has_physical_device_wrapper_GetDeviceGroupSurfacePresentModesKHR(...) (wrapper_physical_device_entrypoints.GetDeviceGroupSurfacePresentModesKHR)
#define name_of_wrapper_GetDeviceGroupSurfacePresentModesKHR(...) "wrapper_GetDeviceGroupSurfacePresentModesKHR"
#define VK_ID_AcquireNextImage2KHR 265
#define IS_VK_ID_AcquireNextImage2KHR_ON(masks) (((masks).f4 & (1ULL << (9))) != 0)
#define SET_VK_ID_AcquireNextImage2KHR_ON(masks) (masks).f4 |= (1ULL << (9))
#define VK_ID_AcquireNextImage2KHR_BIT (1ULL << (9))
#define VK_ID_AcquireNextImage2KHR_IDX (4)

#define PRINT_AcquireNextImage2KHR IS_VK_ID_AcquireNextImage2KHR_ON(wrapper_printer_masks)
#define TRY_AcquireNextImage2KHR(TRUE, FALSE) TRUE
#define has_device_wrapper_AcquireNextImage2KHR(...) (wrapper_device_entrypoints.AcquireNextImage2KHR)
#define has_physical_device_wrapper_AcquireNextImage2KHR(...) (wrapper_physical_device_entrypoints.AcquireNextImage2KHR)
#define name_of_wrapper_AcquireNextImage2KHR(...) "wrapper_AcquireNextImage2KHR"
#define VK_ID_CmdDispatchBase 266
#define IS_VK_ID_CmdDispatchBase_ON(masks) (((masks).f4 & (1ULL << (10))) != 0)
#define SET_VK_ID_CmdDispatchBase_ON(masks) (masks).f4 |= (1ULL << (10))
#define VK_ID_CmdDispatchBase_BIT (1ULL << (10))
#define VK_ID_CmdDispatchBase_IDX (4)

#define PRINT_CmdDispatchBase IS_VK_ID_CmdDispatchBase_ON(wrapper_printer_masks)
#define TRY_CmdDispatchBase(TRUE, FALSE) TRUE
#define has_device_wrapper_CmdDispatchBase(...) (wrapper_device_entrypoints.CmdDispatchBase)
#define has_physical_device_wrapper_CmdDispatchBase(...) (wrapper_physical_device_entrypoints.CmdDispatchBase)
#define name_of_wrapper_CmdDispatchBase(...) "wrapper_CmdDispatchBase"
#define VK_ID_GetPhysicalDevicePresentRectanglesKHR 268
#define IS_VK_ID_GetPhysicalDevicePresentRectanglesKHR_ON(masks) (((masks).f4 & (1ULL << (12))) != 0)
#define SET_VK_ID_GetPhysicalDevicePresentRectanglesKHR_ON(masks) (masks).f4 |= (1ULL << (12))
#define VK_ID_GetPhysicalDevicePresentRectanglesKHR_BIT (1ULL << (12))
#define VK_ID_GetPhysicalDevicePresentRectanglesKHR_IDX (4)

#define PRINT_GetPhysicalDevicePresentRectanglesKHR IS_VK_ID_GetPhysicalDevicePresentRectanglesKHR_ON(wrapper_printer_masks)
#define TRY_GetPhysicalDevicePresentRectanglesKHR(TRUE, FALSE) TRUE
#define has_device_wrapper_GetPhysicalDevicePresentRectanglesKHR(...) (wrapper_device_entrypoints.GetPhysicalDevicePresentRectanglesKHR)
#define has_physical_device_wrapper_GetPhysicalDevicePresentRectanglesKHR(...) (wrapper_physical_device_entrypoints.GetPhysicalDevicePresentRectanglesKHR)
#define name_of_wrapper_GetPhysicalDevicePresentRectanglesKHR(...) "wrapper_GetPhysicalDevicePresentRectanglesKHR"
#define VK_ID_CreateDescriptorUpdateTemplate 269
#define IS_VK_ID_CreateDescriptorUpdateTemplate_ON(masks) (((masks).f4 & (1ULL << (13))) != 0)
#define SET_VK_ID_CreateDescriptorUpdateTemplate_ON(masks) (masks).f4 |= (1ULL << (13))
#define VK_ID_CreateDescriptorUpdateTemplate_BIT (1ULL << (13))
#define VK_ID_CreateDescriptorUpdateTemplate_IDX (4)

#define PRINT_CreateDescriptorUpdateTemplate IS_VK_ID_CreateDescriptorUpdateTemplate_ON(wrapper_printer_masks)
#define TRY_CreateDescriptorUpdateTemplate(TRUE, FALSE) TRUE
#define has_device_wrapper_CreateDescriptorUpdateTemplate(...) (wrapper_device_entrypoints.CreateDescriptorUpdateTemplate)
#define has_physical_device_wrapper_CreateDescriptorUpdateTemplate(...) (wrapper_physical_device_entrypoints.CreateDescriptorUpdateTemplate)
#define name_of_wrapper_CreateDescriptorUpdateTemplate(...) "wrapper_CreateDescriptorUpdateTemplate"
#define VK_ID_DestroyDescriptorUpdateTemplate 271
#define IS_VK_ID_DestroyDescriptorUpdateTemplate_ON(masks) (((masks).f4 & (1ULL << (15))) != 0)
#define SET_VK_ID_DestroyDescriptorUpdateTemplate_ON(masks) (masks).f4 |= (1ULL << (15))
#define VK_ID_DestroyDescriptorUpdateTemplate_BIT (1ULL << (15))
#define VK_ID_DestroyDescriptorUpdateTemplate_IDX (4)

#define PRINT_DestroyDescriptorUpdateTemplate IS_VK_ID_DestroyDescriptorUpdateTemplate_ON(wrapper_printer_masks)
#define TRY_DestroyDescriptorUpdateTemplate(TRUE, FALSE) TRUE
#define has_device_wrapper_DestroyDescriptorUpdateTemplate(...) (wrapper_device_entrypoints.DestroyDescriptorUpdateTemplate)
#define has_physical_device_wrapper_DestroyDescriptorUpdateTemplate(...) (wrapper_physical_device_entrypoints.DestroyDescriptorUpdateTemplate)
#define name_of_wrapper_DestroyDescriptorUpdateTemplate(...) "wrapper_DestroyDescriptorUpdateTemplate"
#define VK_ID_UpdateDescriptorSetWithTemplate 273
#define IS_VK_ID_UpdateDescriptorSetWithTemplate_ON(masks) (((masks).f4 & (1ULL << (17))) != 0)
#define SET_VK_ID_UpdateDescriptorSetWithTemplate_ON(masks) (masks).f4 |= (1ULL << (17))
#define VK_ID_UpdateDescriptorSetWithTemplate_BIT (1ULL << (17))
#define VK_ID_UpdateDescriptorSetWithTemplate_IDX (4)

#define PRINT_UpdateDescriptorSetWithTemplate IS_VK_ID_UpdateDescriptorSetWithTemplate_ON(wrapper_printer_masks)
#define TRY_UpdateDescriptorSetWithTemplate(TRUE, FALSE) TRUE
#define has_device_wrapper_UpdateDescriptorSetWithTemplate(...) (wrapper_device_entrypoints.UpdateDescriptorSetWithTemplate)
#define has_physical_device_wrapper_UpdateDescriptorSetWithTemplate(...) (wrapper_physical_device_entrypoints.UpdateDescriptorSetWithTemplate)
#define name_of_wrapper_UpdateDescriptorSetWithTemplate(...) "wrapper_UpdateDescriptorSetWithTemplate"
#define VK_ID_CmdPushDescriptorSetWithTemplateKHR 275
#define IS_VK_ID_CmdPushDescriptorSetWithTemplateKHR_ON(masks) (((masks).f4 & (1ULL << (19))) != 0)
#define SET_VK_ID_CmdPushDescriptorSetWithTemplateKHR_ON(masks) (masks).f4 |= (1ULL << (19))
#define VK_ID_CmdPushDescriptorSetWithTemplateKHR_BIT (1ULL << (19))
#define VK_ID_CmdPushDescriptorSetWithTemplateKHR_IDX (4)

#define PRINT_CmdPushDescriptorSetWithTemplateKHR IS_VK_ID_CmdPushDescriptorSetWithTemplateKHR_ON(wrapper_printer_masks)
#define TRY_CmdPushDescriptorSetWithTemplateKHR(TRUE, FALSE) TRUE
#define has_device_wrapper_CmdPushDescriptorSetWithTemplateKHR(...) (wrapper_device_entrypoints.CmdPushDescriptorSetWithTemplateKHR)
#define has_physical_device_wrapper_CmdPushDescriptorSetWithTemplateKHR(...) (wrapper_physical_device_entrypoints.CmdPushDescriptorSetWithTemplateKHR)
#define name_of_wrapper_CmdPushDescriptorSetWithTemplateKHR(...) "wrapper_CmdPushDescriptorSetWithTemplateKHR"
#define VK_ID_SetHdrMetadataEXT 276
#define IS_VK_ID_SetHdrMetadataEXT_ON(masks) (((masks).f4 & (1ULL << (20))) != 0)
#define SET_VK_ID_SetHdrMetadataEXT_ON(masks) (masks).f4 |= (1ULL << (20))
#define VK_ID_SetHdrMetadataEXT_BIT (1ULL << (20))
#define VK_ID_SetHdrMetadataEXT_IDX (4)

#define PRINT_SetHdrMetadataEXT IS_VK_ID_SetHdrMetadataEXT_ON(wrapper_printer_masks)
#define TRY_SetHdrMetadataEXT(TRUE, FALSE) TRUE
#define has_device_wrapper_SetHdrMetadataEXT(...) (wrapper_device_entrypoints.SetHdrMetadataEXT)
#define has_physical_device_wrapper_SetHdrMetadataEXT(...) (wrapper_physical_device_entrypoints.SetHdrMetadataEXT)
#define name_of_wrapper_SetHdrMetadataEXT(...) "wrapper_SetHdrMetadataEXT"
#define VK_ID_GetSwapchainStatusKHR 277
#define IS_VK_ID_GetSwapchainStatusKHR_ON(masks) (((masks).f4 & (1ULL << (21))) != 0)
#define SET_VK_ID_GetSwapchainStatusKHR_ON(masks) (masks).f4 |= (1ULL << (21))
#define VK_ID_GetSwapchainStatusKHR_BIT (1ULL << (21))
#define VK_ID_GetSwapchainStatusKHR_IDX (4)

#define PRINT_GetSwapchainStatusKHR IS_VK_ID_GetSwapchainStatusKHR_ON(wrapper_printer_masks)
#define TRY_GetSwapchainStatusKHR(TRUE, FALSE) TRUE
#define has_device_wrapper_GetSwapchainStatusKHR(...) (wrapper_device_entrypoints.GetSwapchainStatusKHR)
#define has_physical_device_wrapper_GetSwapchainStatusKHR(...) (wrapper_physical_device_entrypoints.GetSwapchainStatusKHR)
#define name_of_wrapper_GetSwapchainStatusKHR(...) "wrapper_GetSwapchainStatusKHR"
#define VK_ID_GetRefreshCycleDurationGOOGLE 278
#define IS_VK_ID_GetRefreshCycleDurationGOOGLE_ON(masks) (((masks).f4 & (1ULL << (22))) != 0)
#define SET_VK_ID_GetRefreshCycleDurationGOOGLE_ON(masks) (masks).f4 |= (1ULL << (22))
#define VK_ID_GetRefreshCycleDurationGOOGLE_BIT (1ULL << (22))
#define VK_ID_GetRefreshCycleDurationGOOGLE_IDX (4)

#define PRINT_GetRefreshCycleDurationGOOGLE IS_VK_ID_GetRefreshCycleDurationGOOGLE_ON(wrapper_printer_masks)
#define TRY_GetRefreshCycleDurationGOOGLE(TRUE, FALSE) TRUE
#define has_device_wrapper_GetRefreshCycleDurationGOOGLE(...) (wrapper_device_entrypoints.GetRefreshCycleDurationGOOGLE)
#define has_physical_device_wrapper_GetRefreshCycleDurationGOOGLE(...) (wrapper_physical_device_entrypoints.GetRefreshCycleDurationGOOGLE)
#define name_of_wrapper_GetRefreshCycleDurationGOOGLE(...) "wrapper_GetRefreshCycleDurationGOOGLE"
#define VK_ID_GetPastPresentationTimingGOOGLE 279
#define IS_VK_ID_GetPastPresentationTimingGOOGLE_ON(masks) (((masks).f4 & (1ULL << (23))) != 0)
#define SET_VK_ID_GetPastPresentationTimingGOOGLE_ON(masks) (masks).f4 |= (1ULL << (23))
#define VK_ID_GetPastPresentationTimingGOOGLE_BIT (1ULL << (23))
#define VK_ID_GetPastPresentationTimingGOOGLE_IDX (4)

#define PRINT_GetPastPresentationTimingGOOGLE IS_VK_ID_GetPastPresentationTimingGOOGLE_ON(wrapper_printer_masks)
#define TRY_GetPastPresentationTimingGOOGLE(TRUE, FALSE) TRUE
#define has_device_wrapper_GetPastPresentationTimingGOOGLE(...) (wrapper_device_entrypoints.GetPastPresentationTimingGOOGLE)
#define has_physical_device_wrapper_GetPastPresentationTimingGOOGLE(...) (wrapper_physical_device_entrypoints.GetPastPresentationTimingGOOGLE)
#define name_of_wrapper_GetPastPresentationTimingGOOGLE(...) "wrapper_GetPastPresentationTimingGOOGLE"
#ifdef VK_USE_PLATFORM_IOS_MVK
#define VK_ID_CreateIOSSurfaceMVK 280
#define IS_VK_ID_CreateIOSSurfaceMVK_ON(masks) (((masks).f4 & (1ULL << (24))) != 0)
#define SET_VK_ID_CreateIOSSurfaceMVK_ON(masks) (masks).f4 |= (1ULL << (24))
#define VK_ID_CreateIOSSurfaceMVK_BIT (1ULL << (24))
#define VK_ID_CreateIOSSurfaceMVK_IDX (4)

#define PRINT_CreateIOSSurfaceMVK IS_VK_ID_CreateIOSSurfaceMVK_ON(wrapper_printer_masks)
#define TRY_CreateIOSSurfaceMVK(TRUE, FALSE) TRUE
#define has_device_wrapper_CreateIOSSurfaceMVK(...) (wrapper_device_entrypoints.CreateIOSSurfaceMVK)
#define has_physical_device_wrapper_CreateIOSSurfaceMVK(...) (wrapper_physical_device_entrypoints.CreateIOSSurfaceMVK)
#define name_of_wrapper_CreateIOSSurfaceMVK(...) "wrapper_CreateIOSSurfaceMVK"
#else
#define TRY_CreateIOSSurfaceMVK(TRUE, FALSE) FALSE
#endif
#ifdef VK_USE_PLATFORM_MACOS_MVK
#define VK_ID_CreateMacOSSurfaceMVK 281
#define IS_VK_ID_CreateMacOSSurfaceMVK_ON(masks) (((masks).f4 & (1ULL << (25))) != 0)
#define SET_VK_ID_CreateMacOSSurfaceMVK_ON(masks) (masks).f4 |= (1ULL << (25))
#define VK_ID_CreateMacOSSurfaceMVK_BIT (1ULL << (25))
#define VK_ID_CreateMacOSSurfaceMVK_IDX (4)

#define PRINT_CreateMacOSSurfaceMVK IS_VK_ID_CreateMacOSSurfaceMVK_ON(wrapper_printer_masks)
#define TRY_CreateMacOSSurfaceMVK(TRUE, FALSE) TRUE
#define has_device_wrapper_CreateMacOSSurfaceMVK(...) (wrapper_device_entrypoints.CreateMacOSSurfaceMVK)
#define has_physical_device_wrapper_CreateMacOSSurfaceMVK(...) (wrapper_physical_device_entrypoints.CreateMacOSSurfaceMVK)
#define name_of_wrapper_CreateMacOSSurfaceMVK(...) "wrapper_CreateMacOSSurfaceMVK"
#else
#define TRY_CreateMacOSSurfaceMVK(TRUE, FALSE) FALSE
#endif
#ifdef VK_USE_PLATFORM_METAL_EXT
#define VK_ID_CreateMetalSurfaceEXT 282
#define IS_VK_ID_CreateMetalSurfaceEXT_ON(masks) (((masks).f4 & (1ULL << (26))) != 0)
#define SET_VK_ID_CreateMetalSurfaceEXT_ON(masks) (masks).f4 |= (1ULL << (26))
#define VK_ID_CreateMetalSurfaceEXT_BIT (1ULL << (26))
#define VK_ID_CreateMetalSurfaceEXT_IDX (4)

#define PRINT_CreateMetalSurfaceEXT IS_VK_ID_CreateMetalSurfaceEXT_ON(wrapper_printer_masks)
#define TRY_CreateMetalSurfaceEXT(TRUE, FALSE) TRUE
#define has_device_wrapper_CreateMetalSurfaceEXT(...) (wrapper_device_entrypoints.CreateMetalSurfaceEXT)
#define has_physical_device_wrapper_CreateMetalSurfaceEXT(...) (wrapper_physical_device_entrypoints.CreateMetalSurfaceEXT)
#define name_of_wrapper_CreateMetalSurfaceEXT(...) "wrapper_CreateMetalSurfaceEXT"
#else
#define TRY_CreateMetalSurfaceEXT(TRUE, FALSE) FALSE
#endif
#define VK_ID_CmdSetViewportWScalingNV 283
#define IS_VK_ID_CmdSetViewportWScalingNV_ON(masks) (((masks).f4 & (1ULL << (27))) != 0)
#define SET_VK_ID_CmdSetViewportWScalingNV_ON(masks) (masks).f4 |= (1ULL << (27))
#define VK_ID_CmdSetViewportWScalingNV_BIT (1ULL << (27))
#define VK_ID_CmdSetViewportWScalingNV_IDX (4)

#define PRINT_CmdSetViewportWScalingNV IS_VK_ID_CmdSetViewportWScalingNV_ON(wrapper_printer_masks)
#define TRY_CmdSetViewportWScalingNV(TRUE, FALSE) TRUE
#define has_device_wrapper_CmdSetViewportWScalingNV(...) (wrapper_device_entrypoints.CmdSetViewportWScalingNV)
#define has_physical_device_wrapper_CmdSetViewportWScalingNV(...) (wrapper_physical_device_entrypoints.CmdSetViewportWScalingNV)
#define name_of_wrapper_CmdSetViewportWScalingNV(...) "wrapper_CmdSetViewportWScalingNV"
#define VK_ID_CmdSetDiscardRectangleEXT 284
#define IS_VK_ID_CmdSetDiscardRectangleEXT_ON(masks) (((masks).f4 & (1ULL << (28))) != 0)
#define SET_VK_ID_CmdSetDiscardRectangleEXT_ON(masks) (masks).f4 |= (1ULL << (28))
#define VK_ID_CmdSetDiscardRectangleEXT_BIT (1ULL << (28))
#define VK_ID_CmdSetDiscardRectangleEXT_IDX (4)

#define PRINT_CmdSetDiscardRectangleEXT IS_VK_ID_CmdSetDiscardRectangleEXT_ON(wrapper_printer_masks)
#define TRY_CmdSetDiscardRectangleEXT(TRUE, FALSE) TRUE
#define has_device_wrapper_CmdSetDiscardRectangleEXT(...) (wrapper_device_entrypoints.CmdSetDiscardRectangleEXT)
#define has_physical_device_wrapper_CmdSetDiscardRectangleEXT(...) (wrapper_physical_device_entrypoints.CmdSetDiscardRectangleEXT)
#define name_of_wrapper_CmdSetDiscardRectangleEXT(...) "wrapper_CmdSetDiscardRectangleEXT"
#define VK_ID_CmdSetDiscardRectangleEnableEXT 285
#define IS_VK_ID_CmdSetDiscardRectangleEnableEXT_ON(masks) (((masks).f4 & (1ULL << (29))) != 0)
#define SET_VK_ID_CmdSetDiscardRectangleEnableEXT_ON(masks) (masks).f4 |= (1ULL << (29))
#define VK_ID_CmdSetDiscardRectangleEnableEXT_BIT (1ULL << (29))
#define VK_ID_CmdSetDiscardRectangleEnableEXT_IDX (4)

#define PRINT_CmdSetDiscardRectangleEnableEXT IS_VK_ID_CmdSetDiscardRectangleEnableEXT_ON(wrapper_printer_masks)
#define TRY_CmdSetDiscardRectangleEnableEXT(TRUE, FALSE) TRUE
#define has_device_wrapper_CmdSetDiscardRectangleEnableEXT(...) (wrapper_device_entrypoints.CmdSetDiscardRectangleEnableEXT)
#define has_physical_device_wrapper_CmdSetDiscardRectangleEnableEXT(...) (wrapper_physical_device_entrypoints.CmdSetDiscardRectangleEnableEXT)
#define name_of_wrapper_CmdSetDiscardRectangleEnableEXT(...) "wrapper_CmdSetDiscardRectangleEnableEXT"
#define VK_ID_CmdSetDiscardRectangleModeEXT 286
#define IS_VK_ID_CmdSetDiscardRectangleModeEXT_ON(masks) (((masks).f4 & (1ULL << (30))) != 0)
#define SET_VK_ID_CmdSetDiscardRectangleModeEXT_ON(masks) (masks).f4 |= (1ULL << (30))
#define VK_ID_CmdSetDiscardRectangleModeEXT_BIT (1ULL << (30))
#define VK_ID_CmdSetDiscardRectangleModeEXT_IDX (4)

#define PRINT_CmdSetDiscardRectangleModeEXT IS_VK_ID_CmdSetDiscardRectangleModeEXT_ON(wrapper_printer_masks)
#define TRY_CmdSetDiscardRectangleModeEXT(TRUE, FALSE) TRUE
#define has_device_wrapper_CmdSetDiscardRectangleModeEXT(...) (wrapper_device_entrypoints.CmdSetDiscardRectangleModeEXT)
#define has_physical_device_wrapper_CmdSetDiscardRectangleModeEXT(...) (wrapper_physical_device_entrypoints.CmdSetDiscardRectangleModeEXT)
#define name_of_wrapper_CmdSetDiscardRectangleModeEXT(...) "wrapper_CmdSetDiscardRectangleModeEXT"
#define VK_ID_CmdSetSampleLocationsEXT 287
#define IS_VK_ID_CmdSetSampleLocationsEXT_ON(masks) (((masks).f4 & (1ULL << (31))) != 0)
#define SET_VK_ID_CmdSetSampleLocationsEXT_ON(masks) (masks).f4 |= (1ULL << (31))
#define VK_ID_CmdSetSampleLocationsEXT_BIT (1ULL << (31))
#define VK_ID_CmdSetSampleLocationsEXT_IDX (4)

#define PRINT_CmdSetSampleLocationsEXT IS_VK_ID_CmdSetSampleLocationsEXT_ON(wrapper_printer_masks)
#define TRY_CmdSetSampleLocationsEXT(TRUE, FALSE) TRUE
#define has_device_wrapper_CmdSetSampleLocationsEXT(...) (wrapper_device_entrypoints.CmdSetSampleLocationsEXT)
#define has_physical_device_wrapper_CmdSetSampleLocationsEXT(...) (wrapper_physical_device_entrypoints.CmdSetSampleLocationsEXT)
#define name_of_wrapper_CmdSetSampleLocationsEXT(...) "wrapper_CmdSetSampleLocationsEXT"
#define VK_ID_GetPhysicalDeviceMultisamplePropertiesEXT 288
#define IS_VK_ID_GetPhysicalDeviceMultisamplePropertiesEXT_ON(masks) (((masks).f4 & (1ULL << (32))) != 0)
#define SET_VK_ID_GetPhysicalDeviceMultisamplePropertiesEXT_ON(masks) (masks).f4 |= (1ULL << (32))
#define VK_ID_GetPhysicalDeviceMultisamplePropertiesEXT_BIT (1ULL << (32))
#define VK_ID_GetPhysicalDeviceMultisamplePropertiesEXT_IDX (4)

#define PRINT_GetPhysicalDeviceMultisamplePropertiesEXT IS_VK_ID_GetPhysicalDeviceMultisamplePropertiesEXT_ON(wrapper_printer_masks)
#define TRY_GetPhysicalDeviceMultisamplePropertiesEXT(TRUE, FALSE) TRUE
#define has_device_wrapper_GetPhysicalDeviceMultisamplePropertiesEXT(...) (wrapper_device_entrypoints.GetPhysicalDeviceMultisamplePropertiesEXT)
#define has_physical_device_wrapper_GetPhysicalDeviceMultisamplePropertiesEXT(...) (wrapper_physical_device_entrypoints.GetPhysicalDeviceMultisamplePropertiesEXT)
#define name_of_wrapper_GetPhysicalDeviceMultisamplePropertiesEXT(...) "wrapper_GetPhysicalDeviceMultisamplePropertiesEXT"
#define VK_ID_GetPhysicalDeviceSurfaceCapabilities2KHR 289
#define IS_VK_ID_GetPhysicalDeviceSurfaceCapabilities2KHR_ON(masks) (((masks).f4 & (1ULL << (33))) != 0)
#define SET_VK_ID_GetPhysicalDeviceSurfaceCapabilities2KHR_ON(masks) (masks).f4 |= (1ULL << (33))
#define VK_ID_GetPhysicalDeviceSurfaceCapabilities2KHR_BIT (1ULL << (33))
#define VK_ID_GetPhysicalDeviceSurfaceCapabilities2KHR_IDX (4)

#define PRINT_GetPhysicalDeviceSurfaceCapabilities2KHR IS_VK_ID_GetPhysicalDeviceSurfaceCapabilities2KHR_ON(wrapper_printer_masks)
#define TRY_GetPhysicalDeviceSurfaceCapabilities2KHR(TRUE, FALSE) TRUE
#define has_device_wrapper_GetPhysicalDeviceSurfaceCapabilities2KHR(...) (wrapper_device_entrypoints.GetPhysicalDeviceSurfaceCapabilities2KHR)
#define has_physical_device_wrapper_GetPhysicalDeviceSurfaceCapabilities2KHR(...) (wrapper_physical_device_entrypoints.GetPhysicalDeviceSurfaceCapabilities2KHR)
#define name_of_wrapper_GetPhysicalDeviceSurfaceCapabilities2KHR(...) "wrapper_GetPhysicalDeviceSurfaceCapabilities2KHR"
#define VK_ID_GetPhysicalDeviceSurfaceFormats2KHR 290
#define IS_VK_ID_GetPhysicalDeviceSurfaceFormats2KHR_ON(masks) (((masks).f4 & (1ULL << (34))) != 0)
#define SET_VK_ID_GetPhysicalDeviceSurfaceFormats2KHR_ON(masks) (masks).f4 |= (1ULL << (34))
#define VK_ID_GetPhysicalDeviceSurfaceFormats2KHR_BIT (1ULL << (34))
#define VK_ID_GetPhysicalDeviceSurfaceFormats2KHR_IDX (4)

#define PRINT_GetPhysicalDeviceSurfaceFormats2KHR IS_VK_ID_GetPhysicalDeviceSurfaceFormats2KHR_ON(wrapper_printer_masks)
#define TRY_GetPhysicalDeviceSurfaceFormats2KHR(TRUE, FALSE) TRUE
#define has_device_wrapper_GetPhysicalDeviceSurfaceFormats2KHR(...) (wrapper_device_entrypoints.GetPhysicalDeviceSurfaceFormats2KHR)
#define has_physical_device_wrapper_GetPhysicalDeviceSurfaceFormats2KHR(...) (wrapper_physical_device_entrypoints.GetPhysicalDeviceSurfaceFormats2KHR)
#define name_of_wrapper_GetPhysicalDeviceSurfaceFormats2KHR(...) "wrapper_GetPhysicalDeviceSurfaceFormats2KHR"
#define VK_ID_GetPhysicalDeviceDisplayProperties2KHR 291
#define IS_VK_ID_GetPhysicalDeviceDisplayProperties2KHR_ON(masks) (((masks).f4 & (1ULL << (35))) != 0)
#define SET_VK_ID_GetPhysicalDeviceDisplayProperties2KHR_ON(masks) (masks).f4 |= (1ULL << (35))
#define VK_ID_GetPhysicalDeviceDisplayProperties2KHR_BIT (1ULL << (35))
#define VK_ID_GetPhysicalDeviceDisplayProperties2KHR_IDX (4)

#define PRINT_GetPhysicalDeviceDisplayProperties2KHR IS_VK_ID_GetPhysicalDeviceDisplayProperties2KHR_ON(wrapper_printer_masks)
#define TRY_GetPhysicalDeviceDisplayProperties2KHR(TRUE, FALSE) TRUE
#define has_device_wrapper_GetPhysicalDeviceDisplayProperties2KHR(...) (wrapper_device_entrypoints.GetPhysicalDeviceDisplayProperties2KHR)
#define has_physical_device_wrapper_GetPhysicalDeviceDisplayProperties2KHR(...) (wrapper_physical_device_entrypoints.GetPhysicalDeviceDisplayProperties2KHR)
#define name_of_wrapper_GetPhysicalDeviceDisplayProperties2KHR(...) "wrapper_GetPhysicalDeviceDisplayProperties2KHR"
#define VK_ID_GetPhysicalDeviceDisplayPlaneProperties2KHR 292
#define IS_VK_ID_GetPhysicalDeviceDisplayPlaneProperties2KHR_ON(masks) (((masks).f4 & (1ULL << (36))) != 0)
#define SET_VK_ID_GetPhysicalDeviceDisplayPlaneProperties2KHR_ON(masks) (masks).f4 |= (1ULL << (36))
#define VK_ID_GetPhysicalDeviceDisplayPlaneProperties2KHR_BIT (1ULL << (36))
#define VK_ID_GetPhysicalDeviceDisplayPlaneProperties2KHR_IDX (4)

#define PRINT_GetPhysicalDeviceDisplayPlaneProperties2KHR IS_VK_ID_GetPhysicalDeviceDisplayPlaneProperties2KHR_ON(wrapper_printer_masks)
#define TRY_GetPhysicalDeviceDisplayPlaneProperties2KHR(TRUE, FALSE) TRUE
#define has_device_wrapper_GetPhysicalDeviceDisplayPlaneProperties2KHR(...) (wrapper_device_entrypoints.GetPhysicalDeviceDisplayPlaneProperties2KHR)
#define has_physical_device_wrapper_GetPhysicalDeviceDisplayPlaneProperties2KHR(...) (wrapper_physical_device_entrypoints.GetPhysicalDeviceDisplayPlaneProperties2KHR)
#define name_of_wrapper_GetPhysicalDeviceDisplayPlaneProperties2KHR(...) "wrapper_GetPhysicalDeviceDisplayPlaneProperties2KHR"
#define VK_ID_GetDisplayModeProperties2KHR 293
#define IS_VK_ID_GetDisplayModeProperties2KHR_ON(masks) (((masks).f4 & (1ULL << (37))) != 0)
#define SET_VK_ID_GetDisplayModeProperties2KHR_ON(masks) (masks).f4 |= (1ULL << (37))
#define VK_ID_GetDisplayModeProperties2KHR_BIT (1ULL << (37))
#define VK_ID_GetDisplayModeProperties2KHR_IDX (4)

#define PRINT_GetDisplayModeProperties2KHR IS_VK_ID_GetDisplayModeProperties2KHR_ON(wrapper_printer_masks)
#define TRY_GetDisplayModeProperties2KHR(TRUE, FALSE) TRUE
#define has_device_wrapper_GetDisplayModeProperties2KHR(...) (wrapper_device_entrypoints.GetDisplayModeProperties2KHR)
#define has_physical_device_wrapper_GetDisplayModeProperties2KHR(...) (wrapper_physical_device_entrypoints.GetDisplayModeProperties2KHR)
#define name_of_wrapper_GetDisplayModeProperties2KHR(...) "wrapper_GetDisplayModeProperties2KHR"
#define VK_ID_GetDisplayPlaneCapabilities2KHR 294
#define IS_VK_ID_GetDisplayPlaneCapabilities2KHR_ON(masks) (((masks).f4 & (1ULL << (38))) != 0)
#define SET_VK_ID_GetDisplayPlaneCapabilities2KHR_ON(masks) (masks).f4 |= (1ULL << (38))
#define VK_ID_GetDisplayPlaneCapabilities2KHR_BIT (1ULL << (38))
#define VK_ID_GetDisplayPlaneCapabilities2KHR_IDX (4)

#define PRINT_GetDisplayPlaneCapabilities2KHR IS_VK_ID_GetDisplayPlaneCapabilities2KHR_ON(wrapper_printer_masks)
#define TRY_GetDisplayPlaneCapabilities2KHR(TRUE, FALSE) TRUE
#define has_device_wrapper_GetDisplayPlaneCapabilities2KHR(...) (wrapper_device_entrypoints.GetDisplayPlaneCapabilities2KHR)
#define has_physical_device_wrapper_GetDisplayPlaneCapabilities2KHR(...) (wrapper_physical_device_entrypoints.GetDisplayPlaneCapabilities2KHR)
#define name_of_wrapper_GetDisplayPlaneCapabilities2KHR(...) "wrapper_GetDisplayPlaneCapabilities2KHR"
#define VK_ID_GetBufferMemoryRequirements2 295
#define IS_VK_ID_GetBufferMemoryRequirements2_ON(masks) (((masks).f4 & (1ULL << (39))) != 0)
#define SET_VK_ID_GetBufferMemoryRequirements2_ON(masks) (masks).f4 |= (1ULL << (39))
#define VK_ID_GetBufferMemoryRequirements2_BIT (1ULL << (39))
#define VK_ID_GetBufferMemoryRequirements2_IDX (4)

#define PRINT_GetBufferMemoryRequirements2 IS_VK_ID_GetBufferMemoryRequirements2_ON(wrapper_printer_masks)
#define TRY_GetBufferMemoryRequirements2(TRUE, FALSE) TRUE
#define has_device_wrapper_GetBufferMemoryRequirements2(...) (wrapper_device_entrypoints.GetBufferMemoryRequirements2)
#define has_physical_device_wrapper_GetBufferMemoryRequirements2(...) (wrapper_physical_device_entrypoints.GetBufferMemoryRequirements2)
#define name_of_wrapper_GetBufferMemoryRequirements2(...) "wrapper_GetBufferMemoryRequirements2"
#define VK_ID_GetImageMemoryRequirements2 297
#define IS_VK_ID_GetImageMemoryRequirements2_ON(masks) (((masks).f4 & (1ULL << (41))) != 0)
#define SET_VK_ID_GetImageMemoryRequirements2_ON(masks) (masks).f4 |= (1ULL << (41))
#define VK_ID_GetImageMemoryRequirements2_BIT (1ULL << (41))
#define VK_ID_GetImageMemoryRequirements2_IDX (4)

#define PRINT_GetImageMemoryRequirements2 IS_VK_ID_GetImageMemoryRequirements2_ON(wrapper_printer_masks)
#define TRY_GetImageMemoryRequirements2(TRUE, FALSE) TRUE
#define has_device_wrapper_GetImageMemoryRequirements2(...) (wrapper_device_entrypoints.GetImageMemoryRequirements2)
#define has_physical_device_wrapper_GetImageMemoryRequirements2(...) (wrapper_physical_device_entrypoints.GetImageMemoryRequirements2)
#define name_of_wrapper_GetImageMemoryRequirements2(...) "wrapper_GetImageMemoryRequirements2"
#define VK_ID_GetImageSparseMemoryRequirements2 299
#define IS_VK_ID_GetImageSparseMemoryRequirements2_ON(masks) (((masks).f4 & (1ULL << (43))) != 0)
#define SET_VK_ID_GetImageSparseMemoryRequirements2_ON(masks) (masks).f4 |= (1ULL << (43))
#define VK_ID_GetImageSparseMemoryRequirements2_BIT (1ULL << (43))
#define VK_ID_GetImageSparseMemoryRequirements2_IDX (4)

#define PRINT_GetImageSparseMemoryRequirements2 IS_VK_ID_GetImageSparseMemoryRequirements2_ON(wrapper_printer_masks)
#define TRY_GetImageSparseMemoryRequirements2(TRUE, FALSE) TRUE
#define has_device_wrapper_GetImageSparseMemoryRequirements2(...) (wrapper_device_entrypoints.GetImageSparseMemoryRequirements2)
#define has_physical_device_wrapper_GetImageSparseMemoryRequirements2(...) (wrapper_physical_device_entrypoints.GetImageSparseMemoryRequirements2)
#define name_of_wrapper_GetImageSparseMemoryRequirements2(...) "wrapper_GetImageSparseMemoryRequirements2"
#define VK_ID_GetDeviceBufferMemoryRequirements 301
#define IS_VK_ID_GetDeviceBufferMemoryRequirements_ON(masks) (((masks).f4 & (1ULL << (45))) != 0)
#define SET_VK_ID_GetDeviceBufferMemoryRequirements_ON(masks) (masks).f4 |= (1ULL << (45))
#define VK_ID_GetDeviceBufferMemoryRequirements_BIT (1ULL << (45))
#define VK_ID_GetDeviceBufferMemoryRequirements_IDX (4)

#define PRINT_GetDeviceBufferMemoryRequirements IS_VK_ID_GetDeviceBufferMemoryRequirements_ON(wrapper_printer_masks)
#define TRY_GetDeviceBufferMemoryRequirements(TRUE, FALSE) TRUE
#define has_device_wrapper_GetDeviceBufferMemoryRequirements(...) (wrapper_device_entrypoints.GetDeviceBufferMemoryRequirements)
#define has_physical_device_wrapper_GetDeviceBufferMemoryRequirements(...) (wrapper_physical_device_entrypoints.GetDeviceBufferMemoryRequirements)
#define name_of_wrapper_GetDeviceBufferMemoryRequirements(...) "wrapper_GetDeviceBufferMemoryRequirements"
#define VK_ID_GetDeviceImageMemoryRequirements 303
#define IS_VK_ID_GetDeviceImageMemoryRequirements_ON(masks) (((masks).f4 & (1ULL << (47))) != 0)
#define SET_VK_ID_GetDeviceImageMemoryRequirements_ON(masks) (masks).f4 |= (1ULL << (47))
#define VK_ID_GetDeviceImageMemoryRequirements_BIT (1ULL << (47))
#define VK_ID_GetDeviceImageMemoryRequirements_IDX (4)

#define PRINT_GetDeviceImageMemoryRequirements IS_VK_ID_GetDeviceImageMemoryRequirements_ON(wrapper_printer_masks)
#define TRY_GetDeviceImageMemoryRequirements(TRUE, FALSE) TRUE
#define has_device_wrapper_GetDeviceImageMemoryRequirements(...) (wrapper_device_entrypoints.GetDeviceImageMemoryRequirements)
#define has_physical_device_wrapper_GetDeviceImageMemoryRequirements(...) (wrapper_physical_device_entrypoints.GetDeviceImageMemoryRequirements)
#define name_of_wrapper_GetDeviceImageMemoryRequirements(...) "wrapper_GetDeviceImageMemoryRequirements"
#define VK_ID_GetDeviceImageSparseMemoryRequirements 305
#define IS_VK_ID_GetDeviceImageSparseMemoryRequirements_ON(masks) (((masks).f4 & (1ULL << (49))) != 0)
#define SET_VK_ID_GetDeviceImageSparseMemoryRequirements_ON(masks) (masks).f4 |= (1ULL << (49))
#define VK_ID_GetDeviceImageSparseMemoryRequirements_BIT (1ULL << (49))
#define VK_ID_GetDeviceImageSparseMemoryRequirements_IDX (4)

#define PRINT_GetDeviceImageSparseMemoryRequirements IS_VK_ID_GetDeviceImageSparseMemoryRequirements_ON(wrapper_printer_masks)
#define TRY_GetDeviceImageSparseMemoryRequirements(TRUE, FALSE) TRUE
#define has_device_wrapper_GetDeviceImageSparseMemoryRequirements(...) (wrapper_device_entrypoints.GetDeviceImageSparseMemoryRequirements)
#define has_physical_device_wrapper_GetDeviceImageSparseMemoryRequirements(...) (wrapper_physical_device_entrypoints.GetDeviceImageSparseMemoryRequirements)
#define name_of_wrapper_GetDeviceImageSparseMemoryRequirements(...) "wrapper_GetDeviceImageSparseMemoryRequirements"
#define VK_ID_CreateSamplerYcbcrConversion 307
#define IS_VK_ID_CreateSamplerYcbcrConversion_ON(masks) (((masks).f4 & (1ULL << (51))) != 0)
#define SET_VK_ID_CreateSamplerYcbcrConversion_ON(masks) (masks).f4 |= (1ULL << (51))
#define VK_ID_CreateSamplerYcbcrConversion_BIT (1ULL << (51))
#define VK_ID_CreateSamplerYcbcrConversion_IDX (4)

#define PRINT_CreateSamplerYcbcrConversion IS_VK_ID_CreateSamplerYcbcrConversion_ON(wrapper_printer_masks)
#define TRY_CreateSamplerYcbcrConversion(TRUE, FALSE) TRUE
#define has_device_wrapper_CreateSamplerYcbcrConversion(...) (wrapper_device_entrypoints.CreateSamplerYcbcrConversion)
#define has_physical_device_wrapper_CreateSamplerYcbcrConversion(...) (wrapper_physical_device_entrypoints.CreateSamplerYcbcrConversion)
#define name_of_wrapper_CreateSamplerYcbcrConversion(...) "wrapper_CreateSamplerYcbcrConversion"
#define VK_ID_DestroySamplerYcbcrConversion 309
#define IS_VK_ID_DestroySamplerYcbcrConversion_ON(masks) (((masks).f4 & (1ULL << (53))) != 0)
#define SET_VK_ID_DestroySamplerYcbcrConversion_ON(masks) (masks).f4 |= (1ULL << (53))
#define VK_ID_DestroySamplerYcbcrConversion_BIT (1ULL << (53))
#define VK_ID_DestroySamplerYcbcrConversion_IDX (4)

#define PRINT_DestroySamplerYcbcrConversion IS_VK_ID_DestroySamplerYcbcrConversion_ON(wrapper_printer_masks)
#define TRY_DestroySamplerYcbcrConversion(TRUE, FALSE) TRUE
#define has_device_wrapper_DestroySamplerYcbcrConversion(...) (wrapper_device_entrypoints.DestroySamplerYcbcrConversion)
#define has_physical_device_wrapper_DestroySamplerYcbcrConversion(...) (wrapper_physical_device_entrypoints.DestroySamplerYcbcrConversion)
#define name_of_wrapper_DestroySamplerYcbcrConversion(...) "wrapper_DestroySamplerYcbcrConversion"
#define VK_ID_GetDeviceQueue2 311
#define IS_VK_ID_GetDeviceQueue2_ON(masks) (((masks).f4 & (1ULL << (55))) != 0)
#define SET_VK_ID_GetDeviceQueue2_ON(masks) (masks).f4 |= (1ULL << (55))
#define VK_ID_GetDeviceQueue2_BIT (1ULL << (55))
#define VK_ID_GetDeviceQueue2_IDX (4)

#define PRINT_GetDeviceQueue2 IS_VK_ID_GetDeviceQueue2_ON(wrapper_printer_masks)
#define TRY_GetDeviceQueue2(TRUE, FALSE) TRUE
#define has_device_wrapper_GetDeviceQueue2(...) (wrapper_device_entrypoints.GetDeviceQueue2)
#define has_physical_device_wrapper_GetDeviceQueue2(...) (wrapper_physical_device_entrypoints.GetDeviceQueue2)
#define name_of_wrapper_GetDeviceQueue2(...) "wrapper_GetDeviceQueue2"
#define VK_ID_CreateValidationCacheEXT 312
#define IS_VK_ID_CreateValidationCacheEXT_ON(masks) (((masks).f4 & (1ULL << (56))) != 0)
#define SET_VK_ID_CreateValidationCacheEXT_ON(masks) (masks).f4 |= (1ULL << (56))
#define VK_ID_CreateValidationCacheEXT_BIT (1ULL << (56))
#define VK_ID_CreateValidationCacheEXT_IDX (4)

#define PRINT_CreateValidationCacheEXT IS_VK_ID_CreateValidationCacheEXT_ON(wrapper_printer_masks)
#define TRY_CreateValidationCacheEXT(TRUE, FALSE) TRUE
#define has_device_wrapper_CreateValidationCacheEXT(...) (wrapper_device_entrypoints.CreateValidationCacheEXT)
#define has_physical_device_wrapper_CreateValidationCacheEXT(...) (wrapper_physical_device_entrypoints.CreateValidationCacheEXT)
#define name_of_wrapper_CreateValidationCacheEXT(...) "wrapper_CreateValidationCacheEXT"
#define VK_ID_DestroyValidationCacheEXT 313
#define IS_VK_ID_DestroyValidationCacheEXT_ON(masks) (((masks).f4 & (1ULL << (57))) != 0)
#define SET_VK_ID_DestroyValidationCacheEXT_ON(masks) (masks).f4 |= (1ULL << (57))
#define VK_ID_DestroyValidationCacheEXT_BIT (1ULL << (57))
#define VK_ID_DestroyValidationCacheEXT_IDX (4)

#define PRINT_DestroyValidationCacheEXT IS_VK_ID_DestroyValidationCacheEXT_ON(wrapper_printer_masks)
#define TRY_DestroyValidationCacheEXT(TRUE, FALSE) TRUE
#define has_device_wrapper_DestroyValidationCacheEXT(...) (wrapper_device_entrypoints.DestroyValidationCacheEXT)
#define has_physical_device_wrapper_DestroyValidationCacheEXT(...) (wrapper_physical_device_entrypoints.DestroyValidationCacheEXT)
#define name_of_wrapper_DestroyValidationCacheEXT(...) "wrapper_DestroyValidationCacheEXT"
#define VK_ID_GetValidationCacheDataEXT 314
#define IS_VK_ID_GetValidationCacheDataEXT_ON(masks) (((masks).f4 & (1ULL << (58))) != 0)
#define SET_VK_ID_GetValidationCacheDataEXT_ON(masks) (masks).f4 |= (1ULL << (58))
#define VK_ID_GetValidationCacheDataEXT_BIT (1ULL << (58))
#define VK_ID_GetValidationCacheDataEXT_IDX (4)

#define PRINT_GetValidationCacheDataEXT IS_VK_ID_GetValidationCacheDataEXT_ON(wrapper_printer_masks)
#define TRY_GetValidationCacheDataEXT(TRUE, FALSE) TRUE
#define has_device_wrapper_GetValidationCacheDataEXT(...) (wrapper_device_entrypoints.GetValidationCacheDataEXT)
#define has_physical_device_wrapper_GetValidationCacheDataEXT(...) (wrapper_physical_device_entrypoints.GetValidationCacheDataEXT)
#define name_of_wrapper_GetValidationCacheDataEXT(...) "wrapper_GetValidationCacheDataEXT"
#define VK_ID_MergeValidationCachesEXT 315
#define IS_VK_ID_MergeValidationCachesEXT_ON(masks) (((masks).f4 & (1ULL << (59))) != 0)
#define SET_VK_ID_MergeValidationCachesEXT_ON(masks) (masks).f4 |= (1ULL << (59))
#define VK_ID_MergeValidationCachesEXT_BIT (1ULL << (59))
#define VK_ID_MergeValidationCachesEXT_IDX (4)

#define PRINT_MergeValidationCachesEXT IS_VK_ID_MergeValidationCachesEXT_ON(wrapper_printer_masks)
#define TRY_MergeValidationCachesEXT(TRUE, FALSE) TRUE
#define has_device_wrapper_MergeValidationCachesEXT(...) (wrapper_device_entrypoints.MergeValidationCachesEXT)
#define has_physical_device_wrapper_MergeValidationCachesEXT(...) (wrapper_physical_device_entrypoints.MergeValidationCachesEXT)
#define name_of_wrapper_MergeValidationCachesEXT(...) "wrapper_MergeValidationCachesEXT"
#define VK_ID_GetDescriptorSetLayoutSupport 316
#define IS_VK_ID_GetDescriptorSetLayoutSupport_ON(masks) (((masks).f4 & (1ULL << (60))) != 0)
#define SET_VK_ID_GetDescriptorSetLayoutSupport_ON(masks) (masks).f4 |= (1ULL << (60))
#define VK_ID_GetDescriptorSetLayoutSupport_BIT (1ULL << (60))
#define VK_ID_GetDescriptorSetLayoutSupport_IDX (4)

#define PRINT_GetDescriptorSetLayoutSupport IS_VK_ID_GetDescriptorSetLayoutSupport_ON(wrapper_printer_masks)
#define TRY_GetDescriptorSetLayoutSupport(TRUE, FALSE) TRUE
#define has_device_wrapper_GetDescriptorSetLayoutSupport(...) (wrapper_device_entrypoints.GetDescriptorSetLayoutSupport)
#define has_physical_device_wrapper_GetDescriptorSetLayoutSupport(...) (wrapper_physical_device_entrypoints.GetDescriptorSetLayoutSupport)
#define name_of_wrapper_GetDescriptorSetLayoutSupport(...) "wrapper_GetDescriptorSetLayoutSupport"
#ifdef VK_USE_PLATFORM_ANDROID_KHR
#define VK_ID_GetSwapchainGrallocUsageANDROID 318
#define IS_VK_ID_GetSwapchainGrallocUsageANDROID_ON(masks) (((masks).f4 & (1ULL << (62))) != 0)
#define SET_VK_ID_GetSwapchainGrallocUsageANDROID_ON(masks) (masks).f4 |= (1ULL << (62))
#define VK_ID_GetSwapchainGrallocUsageANDROID_BIT (1ULL << (62))
#define VK_ID_GetSwapchainGrallocUsageANDROID_IDX (4)

#define PRINT_GetSwapchainGrallocUsageANDROID IS_VK_ID_GetSwapchainGrallocUsageANDROID_ON(wrapper_printer_masks)
#define TRY_GetSwapchainGrallocUsageANDROID(TRUE, FALSE) TRUE
#define has_device_wrapper_GetSwapchainGrallocUsageANDROID(...) (wrapper_device_entrypoints.GetSwapchainGrallocUsageANDROID)
#define has_physical_device_wrapper_GetSwapchainGrallocUsageANDROID(...) (wrapper_physical_device_entrypoints.GetSwapchainGrallocUsageANDROID)
#define name_of_wrapper_GetSwapchainGrallocUsageANDROID(...) "wrapper_GetSwapchainGrallocUsageANDROID"
#else
#define TRY_GetSwapchainGrallocUsageANDROID(TRUE, FALSE) FALSE
#endif
#ifdef VK_USE_PLATFORM_ANDROID_KHR
#define VK_ID_GetSwapchainGrallocUsage2ANDROID 319
#define IS_VK_ID_GetSwapchainGrallocUsage2ANDROID_ON(masks) (((masks).f4 & (1ULL << (63))) != 0)
#define SET_VK_ID_GetSwapchainGrallocUsage2ANDROID_ON(masks) (masks).f4 |= (1ULL << (63))
#define VK_ID_GetSwapchainGrallocUsage2ANDROID_BIT (1ULL << (63))
#define VK_ID_GetSwapchainGrallocUsage2ANDROID_IDX (4)

#define PRINT_GetSwapchainGrallocUsage2ANDROID IS_VK_ID_GetSwapchainGrallocUsage2ANDROID_ON(wrapper_printer_masks)
#define TRY_GetSwapchainGrallocUsage2ANDROID(TRUE, FALSE) TRUE
#define has_device_wrapper_GetSwapchainGrallocUsage2ANDROID(...) (wrapper_device_entrypoints.GetSwapchainGrallocUsage2ANDROID)
#define has_physical_device_wrapper_GetSwapchainGrallocUsage2ANDROID(...) (wrapper_physical_device_entrypoints.GetSwapchainGrallocUsage2ANDROID)
#define name_of_wrapper_GetSwapchainGrallocUsage2ANDROID(...) "wrapper_GetSwapchainGrallocUsage2ANDROID"
#else
#define TRY_GetSwapchainGrallocUsage2ANDROID(TRUE, FALSE) FALSE
#endif
#ifdef VK_USE_PLATFORM_ANDROID_KHR
#define VK_ID_AcquireImageANDROID 320
#define IS_VK_ID_AcquireImageANDROID_ON(masks) (((masks).f5 & (1ULL << (0))) != 0)
#define SET_VK_ID_AcquireImageANDROID_ON(masks) (masks).f5 |= (1ULL << (0))
#define VK_ID_AcquireImageANDROID_BIT (1ULL << (0))
#define VK_ID_AcquireImageANDROID_IDX (5)

#define PRINT_AcquireImageANDROID IS_VK_ID_AcquireImageANDROID_ON(wrapper_printer_masks)
#define TRY_AcquireImageANDROID(TRUE, FALSE) TRUE
#define has_device_wrapper_AcquireImageANDROID(...) (wrapper_device_entrypoints.AcquireImageANDROID)
#define has_physical_device_wrapper_AcquireImageANDROID(...) (wrapper_physical_device_entrypoints.AcquireImageANDROID)
#define name_of_wrapper_AcquireImageANDROID(...) "wrapper_AcquireImageANDROID"
#else
#define TRY_AcquireImageANDROID(TRUE, FALSE) FALSE
#endif
#ifdef VK_USE_PLATFORM_ANDROID_KHR
#define VK_ID_QueueSignalReleaseImageANDROID 321
#define IS_VK_ID_QueueSignalReleaseImageANDROID_ON(masks) (((masks).f5 & (1ULL << (1))) != 0)
#define SET_VK_ID_QueueSignalReleaseImageANDROID_ON(masks) (masks).f5 |= (1ULL << (1))
#define VK_ID_QueueSignalReleaseImageANDROID_BIT (1ULL << (1))
#define VK_ID_QueueSignalReleaseImageANDROID_IDX (5)

#define PRINT_QueueSignalReleaseImageANDROID IS_VK_ID_QueueSignalReleaseImageANDROID_ON(wrapper_printer_masks)
#define TRY_QueueSignalReleaseImageANDROID(TRUE, FALSE) TRUE
#define has_device_wrapper_QueueSignalReleaseImageANDROID(...) (wrapper_device_entrypoints.QueueSignalReleaseImageANDROID)
#define has_physical_device_wrapper_QueueSignalReleaseImageANDROID(...) (wrapper_physical_device_entrypoints.QueueSignalReleaseImageANDROID)
#define name_of_wrapper_QueueSignalReleaseImageANDROID(...) "wrapper_QueueSignalReleaseImageANDROID"
#else
#define TRY_QueueSignalReleaseImageANDROID(TRUE, FALSE) FALSE
#endif
#define VK_ID_GetShaderInfoAMD 322
#define IS_VK_ID_GetShaderInfoAMD_ON(masks) (((masks).f5 & (1ULL << (2))) != 0)
#define SET_VK_ID_GetShaderInfoAMD_ON(masks) (masks).f5 |= (1ULL << (2))
#define VK_ID_GetShaderInfoAMD_BIT (1ULL << (2))
#define VK_ID_GetShaderInfoAMD_IDX (5)

#define PRINT_GetShaderInfoAMD IS_VK_ID_GetShaderInfoAMD_ON(wrapper_printer_masks)
#define TRY_GetShaderInfoAMD(TRUE, FALSE) TRUE
#define has_device_wrapper_GetShaderInfoAMD(...) (wrapper_device_entrypoints.GetShaderInfoAMD)
#define has_physical_device_wrapper_GetShaderInfoAMD(...) (wrapper_physical_device_entrypoints.GetShaderInfoAMD)
#define name_of_wrapper_GetShaderInfoAMD(...) "wrapper_GetShaderInfoAMD"
#define VK_ID_SetLocalDimmingAMD 323
#define IS_VK_ID_SetLocalDimmingAMD_ON(masks) (((masks).f5 & (1ULL << (3))) != 0)
#define SET_VK_ID_SetLocalDimmingAMD_ON(masks) (masks).f5 |= (1ULL << (3))
#define VK_ID_SetLocalDimmingAMD_BIT (1ULL << (3))
#define VK_ID_SetLocalDimmingAMD_IDX (5)

#define PRINT_SetLocalDimmingAMD IS_VK_ID_SetLocalDimmingAMD_ON(wrapper_printer_masks)
#define TRY_SetLocalDimmingAMD(TRUE, FALSE) TRUE
#define has_device_wrapper_SetLocalDimmingAMD(...) (wrapper_device_entrypoints.SetLocalDimmingAMD)
#define has_physical_device_wrapper_SetLocalDimmingAMD(...) (wrapper_physical_device_entrypoints.SetLocalDimmingAMD)
#define name_of_wrapper_SetLocalDimmingAMD(...) "wrapper_SetLocalDimmingAMD"
#define VK_ID_GetPhysicalDeviceCalibrateableTimeDomainsKHR 324
#define IS_VK_ID_GetPhysicalDeviceCalibrateableTimeDomainsKHR_ON(masks) (((masks).f5 & (1ULL << (4))) != 0)
#define SET_VK_ID_GetPhysicalDeviceCalibrateableTimeDomainsKHR_ON(masks) (masks).f5 |= (1ULL << (4))
#define VK_ID_GetPhysicalDeviceCalibrateableTimeDomainsKHR_BIT (1ULL << (4))
#define VK_ID_GetPhysicalDeviceCalibrateableTimeDomainsKHR_IDX (5)

#define PRINT_GetPhysicalDeviceCalibrateableTimeDomainsKHR IS_VK_ID_GetPhysicalDeviceCalibrateableTimeDomainsKHR_ON(wrapper_printer_masks)
#define TRY_GetPhysicalDeviceCalibrateableTimeDomainsKHR(TRUE, FALSE) TRUE
#define has_device_wrapper_GetPhysicalDeviceCalibrateableTimeDomainsKHR(...) (wrapper_device_entrypoints.GetPhysicalDeviceCalibrateableTimeDomainsKHR)
#define has_physical_device_wrapper_GetPhysicalDeviceCalibrateableTimeDomainsKHR(...) (wrapper_physical_device_entrypoints.GetPhysicalDeviceCalibrateableTimeDomainsKHR)
#define name_of_wrapper_GetPhysicalDeviceCalibrateableTimeDomainsKHR(...) "wrapper_GetPhysicalDeviceCalibrateableTimeDomainsKHR"
#define VK_ID_GetCalibratedTimestampsKHR 326
#define IS_VK_ID_GetCalibratedTimestampsKHR_ON(masks) (((masks).f5 & (1ULL << (6))) != 0)
#define SET_VK_ID_GetCalibratedTimestampsKHR_ON(masks) (masks).f5 |= (1ULL << (6))
#define VK_ID_GetCalibratedTimestampsKHR_BIT (1ULL << (6))
#define VK_ID_GetCalibratedTimestampsKHR_IDX (5)

#define PRINT_GetCalibratedTimestampsKHR IS_VK_ID_GetCalibratedTimestampsKHR_ON(wrapper_printer_masks)
#define TRY_GetCalibratedTimestampsKHR(TRUE, FALSE) TRUE
#define has_device_wrapper_GetCalibratedTimestampsKHR(...) (wrapper_device_entrypoints.GetCalibratedTimestampsKHR)
#define has_physical_device_wrapper_GetCalibratedTimestampsKHR(...) (wrapper_physical_device_entrypoints.GetCalibratedTimestampsKHR)
#define name_of_wrapper_GetCalibratedTimestampsKHR(...) "wrapper_GetCalibratedTimestampsKHR"
#define VK_ID_SetDebugUtilsObjectNameEXT 328
#define IS_VK_ID_SetDebugUtilsObjectNameEXT_ON(masks) (((masks).f5 & (1ULL << (8))) != 0)
#define SET_VK_ID_SetDebugUtilsObjectNameEXT_ON(masks) (masks).f5 |= (1ULL << (8))
#define VK_ID_SetDebugUtilsObjectNameEXT_BIT (1ULL << (8))
#define VK_ID_SetDebugUtilsObjectNameEXT_IDX (5)

#define PRINT_SetDebugUtilsObjectNameEXT IS_VK_ID_SetDebugUtilsObjectNameEXT_ON(wrapper_printer_masks)
#define TRY_SetDebugUtilsObjectNameEXT(TRUE, FALSE) TRUE
#define has_device_wrapper_SetDebugUtilsObjectNameEXT(...) (wrapper_device_entrypoints.SetDebugUtilsObjectNameEXT)
#define has_physical_device_wrapper_SetDebugUtilsObjectNameEXT(...) (wrapper_physical_device_entrypoints.SetDebugUtilsObjectNameEXT)
#define name_of_wrapper_SetDebugUtilsObjectNameEXT(...) "wrapper_SetDebugUtilsObjectNameEXT"
#define VK_ID_SetDebugUtilsObjectTagEXT 329
#define IS_VK_ID_SetDebugUtilsObjectTagEXT_ON(masks) (((masks).f5 & (1ULL << (9))) != 0)
#define SET_VK_ID_SetDebugUtilsObjectTagEXT_ON(masks) (masks).f5 |= (1ULL << (9))
#define VK_ID_SetDebugUtilsObjectTagEXT_BIT (1ULL << (9))
#define VK_ID_SetDebugUtilsObjectTagEXT_IDX (5)

#define PRINT_SetDebugUtilsObjectTagEXT IS_VK_ID_SetDebugUtilsObjectTagEXT_ON(wrapper_printer_masks)
#define TRY_SetDebugUtilsObjectTagEXT(TRUE, FALSE) TRUE
#define has_device_wrapper_SetDebugUtilsObjectTagEXT(...) (wrapper_device_entrypoints.SetDebugUtilsObjectTagEXT)
#define has_physical_device_wrapper_SetDebugUtilsObjectTagEXT(...) (wrapper_physical_device_entrypoints.SetDebugUtilsObjectTagEXT)
#define name_of_wrapper_SetDebugUtilsObjectTagEXT(...) "wrapper_SetDebugUtilsObjectTagEXT"
#define VK_ID_QueueBeginDebugUtilsLabelEXT 330
#define IS_VK_ID_QueueBeginDebugUtilsLabelEXT_ON(masks) (((masks).f5 & (1ULL << (10))) != 0)
#define SET_VK_ID_QueueBeginDebugUtilsLabelEXT_ON(masks) (masks).f5 |= (1ULL << (10))
#define VK_ID_QueueBeginDebugUtilsLabelEXT_BIT (1ULL << (10))
#define VK_ID_QueueBeginDebugUtilsLabelEXT_IDX (5)

#define PRINT_QueueBeginDebugUtilsLabelEXT IS_VK_ID_QueueBeginDebugUtilsLabelEXT_ON(wrapper_printer_masks)
#define TRY_QueueBeginDebugUtilsLabelEXT(TRUE, FALSE) TRUE
#define has_device_wrapper_QueueBeginDebugUtilsLabelEXT(...) (wrapper_device_entrypoints.QueueBeginDebugUtilsLabelEXT)
#define has_physical_device_wrapper_QueueBeginDebugUtilsLabelEXT(...) (wrapper_physical_device_entrypoints.QueueBeginDebugUtilsLabelEXT)
#define name_of_wrapper_QueueBeginDebugUtilsLabelEXT(...) "wrapper_QueueBeginDebugUtilsLabelEXT"
#define VK_ID_QueueEndDebugUtilsLabelEXT 331
#define IS_VK_ID_QueueEndDebugUtilsLabelEXT_ON(masks) (((masks).f5 & (1ULL << (11))) != 0)
#define SET_VK_ID_QueueEndDebugUtilsLabelEXT_ON(masks) (masks).f5 |= (1ULL << (11))
#define VK_ID_QueueEndDebugUtilsLabelEXT_BIT (1ULL << (11))
#define VK_ID_QueueEndDebugUtilsLabelEXT_IDX (5)

#define PRINT_QueueEndDebugUtilsLabelEXT IS_VK_ID_QueueEndDebugUtilsLabelEXT_ON(wrapper_printer_masks)
#define TRY_QueueEndDebugUtilsLabelEXT(TRUE, FALSE) TRUE
#define has_device_wrapper_QueueEndDebugUtilsLabelEXT(...) (wrapper_device_entrypoints.QueueEndDebugUtilsLabelEXT)
#define has_physical_device_wrapper_QueueEndDebugUtilsLabelEXT(...) (wrapper_physical_device_entrypoints.QueueEndDebugUtilsLabelEXT)
#define name_of_wrapper_QueueEndDebugUtilsLabelEXT(...) "wrapper_QueueEndDebugUtilsLabelEXT"
#define VK_ID_QueueInsertDebugUtilsLabelEXT 332
#define IS_VK_ID_QueueInsertDebugUtilsLabelEXT_ON(masks) (((masks).f5 & (1ULL << (12))) != 0)
#define SET_VK_ID_QueueInsertDebugUtilsLabelEXT_ON(masks) (masks).f5 |= (1ULL << (12))
#define VK_ID_QueueInsertDebugUtilsLabelEXT_BIT (1ULL << (12))
#define VK_ID_QueueInsertDebugUtilsLabelEXT_IDX (5)

#define PRINT_QueueInsertDebugUtilsLabelEXT IS_VK_ID_QueueInsertDebugUtilsLabelEXT_ON(wrapper_printer_masks)
#define TRY_QueueInsertDebugUtilsLabelEXT(TRUE, FALSE) TRUE
#define has_device_wrapper_QueueInsertDebugUtilsLabelEXT(...) (wrapper_device_entrypoints.QueueInsertDebugUtilsLabelEXT)
#define has_physical_device_wrapper_QueueInsertDebugUtilsLabelEXT(...) (wrapper_physical_device_entrypoints.QueueInsertDebugUtilsLabelEXT)
#define name_of_wrapper_QueueInsertDebugUtilsLabelEXT(...) "wrapper_QueueInsertDebugUtilsLabelEXT"
#define VK_ID_CmdBeginDebugUtilsLabelEXT 333
#define IS_VK_ID_CmdBeginDebugUtilsLabelEXT_ON(masks) (((masks).f5 & (1ULL << (13))) != 0)
#define SET_VK_ID_CmdBeginDebugUtilsLabelEXT_ON(masks) (masks).f5 |= (1ULL << (13))
#define VK_ID_CmdBeginDebugUtilsLabelEXT_BIT (1ULL << (13))
#define VK_ID_CmdBeginDebugUtilsLabelEXT_IDX (5)

#define PRINT_CmdBeginDebugUtilsLabelEXT IS_VK_ID_CmdBeginDebugUtilsLabelEXT_ON(wrapper_printer_masks)
#define TRY_CmdBeginDebugUtilsLabelEXT(TRUE, FALSE) TRUE
#define has_device_wrapper_CmdBeginDebugUtilsLabelEXT(...) (wrapper_device_entrypoints.CmdBeginDebugUtilsLabelEXT)
#define has_physical_device_wrapper_CmdBeginDebugUtilsLabelEXT(...) (wrapper_physical_device_entrypoints.CmdBeginDebugUtilsLabelEXT)
#define name_of_wrapper_CmdBeginDebugUtilsLabelEXT(...) "wrapper_CmdBeginDebugUtilsLabelEXT"
#define VK_ID_CmdEndDebugUtilsLabelEXT 334
#define IS_VK_ID_CmdEndDebugUtilsLabelEXT_ON(masks) (((masks).f5 & (1ULL << (14))) != 0)
#define SET_VK_ID_CmdEndDebugUtilsLabelEXT_ON(masks) (masks).f5 |= (1ULL << (14))
#define VK_ID_CmdEndDebugUtilsLabelEXT_BIT (1ULL << (14))
#define VK_ID_CmdEndDebugUtilsLabelEXT_IDX (5)

#define PRINT_CmdEndDebugUtilsLabelEXT IS_VK_ID_CmdEndDebugUtilsLabelEXT_ON(wrapper_printer_masks)
#define TRY_CmdEndDebugUtilsLabelEXT(TRUE, FALSE) TRUE
#define has_device_wrapper_CmdEndDebugUtilsLabelEXT(...) (wrapper_device_entrypoints.CmdEndDebugUtilsLabelEXT)
#define has_physical_device_wrapper_CmdEndDebugUtilsLabelEXT(...) (wrapper_physical_device_entrypoints.CmdEndDebugUtilsLabelEXT)
#define name_of_wrapper_CmdEndDebugUtilsLabelEXT(...) "wrapper_CmdEndDebugUtilsLabelEXT"
#define VK_ID_CmdInsertDebugUtilsLabelEXT 335
#define IS_VK_ID_CmdInsertDebugUtilsLabelEXT_ON(masks) (((masks).f5 & (1ULL << (15))) != 0)
#define SET_VK_ID_CmdInsertDebugUtilsLabelEXT_ON(masks) (masks).f5 |= (1ULL << (15))
#define VK_ID_CmdInsertDebugUtilsLabelEXT_BIT (1ULL << (15))
#define VK_ID_CmdInsertDebugUtilsLabelEXT_IDX (5)

#define PRINT_CmdInsertDebugUtilsLabelEXT IS_VK_ID_CmdInsertDebugUtilsLabelEXT_ON(wrapper_printer_masks)
#define TRY_CmdInsertDebugUtilsLabelEXT(TRUE, FALSE) TRUE
#define has_device_wrapper_CmdInsertDebugUtilsLabelEXT(...) (wrapper_device_entrypoints.CmdInsertDebugUtilsLabelEXT)
#define has_physical_device_wrapper_CmdInsertDebugUtilsLabelEXT(...) (wrapper_physical_device_entrypoints.CmdInsertDebugUtilsLabelEXT)
#define name_of_wrapper_CmdInsertDebugUtilsLabelEXT(...) "wrapper_CmdInsertDebugUtilsLabelEXT"
#define VK_ID_CreateDebugUtilsMessengerEXT 336
#define IS_VK_ID_CreateDebugUtilsMessengerEXT_ON(masks) (((masks).f5 & (1ULL << (16))) != 0)
#define SET_VK_ID_CreateDebugUtilsMessengerEXT_ON(masks) (masks).f5 |= (1ULL << (16))
#define VK_ID_CreateDebugUtilsMessengerEXT_BIT (1ULL << (16))
#define VK_ID_CreateDebugUtilsMessengerEXT_IDX (5)

#define PRINT_CreateDebugUtilsMessengerEXT IS_VK_ID_CreateDebugUtilsMessengerEXT_ON(wrapper_printer_masks)
#define TRY_CreateDebugUtilsMessengerEXT(TRUE, FALSE) TRUE
#define has_device_wrapper_CreateDebugUtilsMessengerEXT(...) (wrapper_device_entrypoints.CreateDebugUtilsMessengerEXT)
#define has_physical_device_wrapper_CreateDebugUtilsMessengerEXT(...) (wrapper_physical_device_entrypoints.CreateDebugUtilsMessengerEXT)
#define name_of_wrapper_CreateDebugUtilsMessengerEXT(...) "wrapper_CreateDebugUtilsMessengerEXT"
#define VK_ID_DestroyDebugUtilsMessengerEXT 337
#define IS_VK_ID_DestroyDebugUtilsMessengerEXT_ON(masks) (((masks).f5 & (1ULL << (17))) != 0)
#define SET_VK_ID_DestroyDebugUtilsMessengerEXT_ON(masks) (masks).f5 |= (1ULL << (17))
#define VK_ID_DestroyDebugUtilsMessengerEXT_BIT (1ULL << (17))
#define VK_ID_DestroyDebugUtilsMessengerEXT_IDX (5)

#define PRINT_DestroyDebugUtilsMessengerEXT IS_VK_ID_DestroyDebugUtilsMessengerEXT_ON(wrapper_printer_masks)
#define TRY_DestroyDebugUtilsMessengerEXT(TRUE, FALSE) TRUE
#define has_device_wrapper_DestroyDebugUtilsMessengerEXT(...) (wrapper_device_entrypoints.DestroyDebugUtilsMessengerEXT)
#define has_physical_device_wrapper_DestroyDebugUtilsMessengerEXT(...) (wrapper_physical_device_entrypoints.DestroyDebugUtilsMessengerEXT)
#define name_of_wrapper_DestroyDebugUtilsMessengerEXT(...) "wrapper_DestroyDebugUtilsMessengerEXT"
#define VK_ID_SubmitDebugUtilsMessageEXT 338
#define IS_VK_ID_SubmitDebugUtilsMessageEXT_ON(masks) (((masks).f5 & (1ULL << (18))) != 0)
#define SET_VK_ID_SubmitDebugUtilsMessageEXT_ON(masks) (masks).f5 |= (1ULL << (18))
#define VK_ID_SubmitDebugUtilsMessageEXT_BIT (1ULL << (18))
#define VK_ID_SubmitDebugUtilsMessageEXT_IDX (5)

#define PRINT_SubmitDebugUtilsMessageEXT IS_VK_ID_SubmitDebugUtilsMessageEXT_ON(wrapper_printer_masks)
#define TRY_SubmitDebugUtilsMessageEXT(TRUE, FALSE) TRUE
#define has_device_wrapper_SubmitDebugUtilsMessageEXT(...) (wrapper_device_entrypoints.SubmitDebugUtilsMessageEXT)
#define has_physical_device_wrapper_SubmitDebugUtilsMessageEXT(...) (wrapper_physical_device_entrypoints.SubmitDebugUtilsMessageEXT)
#define name_of_wrapper_SubmitDebugUtilsMessageEXT(...) "wrapper_SubmitDebugUtilsMessageEXT"
#define VK_ID_GetMemoryHostPointerPropertiesEXT 339
#define IS_VK_ID_GetMemoryHostPointerPropertiesEXT_ON(masks) (((masks).f5 & (1ULL << (19))) != 0)
#define SET_VK_ID_GetMemoryHostPointerPropertiesEXT_ON(masks) (masks).f5 |= (1ULL << (19))
#define VK_ID_GetMemoryHostPointerPropertiesEXT_BIT (1ULL << (19))
#define VK_ID_GetMemoryHostPointerPropertiesEXT_IDX (5)

#define PRINT_GetMemoryHostPointerPropertiesEXT IS_VK_ID_GetMemoryHostPointerPropertiesEXT_ON(wrapper_printer_masks)
#define TRY_GetMemoryHostPointerPropertiesEXT(TRUE, FALSE) TRUE
#define has_device_wrapper_GetMemoryHostPointerPropertiesEXT(...) (wrapper_device_entrypoints.GetMemoryHostPointerPropertiesEXT)
#define has_physical_device_wrapper_GetMemoryHostPointerPropertiesEXT(...) (wrapper_physical_device_entrypoints.GetMemoryHostPointerPropertiesEXT)
#define name_of_wrapper_GetMemoryHostPointerPropertiesEXT(...) "wrapper_GetMemoryHostPointerPropertiesEXT"
#define VK_ID_CmdWriteBufferMarkerAMD 340
#define IS_VK_ID_CmdWriteBufferMarkerAMD_ON(masks) (((masks).f5 & (1ULL << (20))) != 0)
#define SET_VK_ID_CmdWriteBufferMarkerAMD_ON(masks) (masks).f5 |= (1ULL << (20))
#define VK_ID_CmdWriteBufferMarkerAMD_BIT (1ULL << (20))
#define VK_ID_CmdWriteBufferMarkerAMD_IDX (5)

#define PRINT_CmdWriteBufferMarkerAMD IS_VK_ID_CmdWriteBufferMarkerAMD_ON(wrapper_printer_masks)
#define TRY_CmdWriteBufferMarkerAMD(TRUE, FALSE) TRUE
#define has_device_wrapper_CmdWriteBufferMarkerAMD(...) (wrapper_device_entrypoints.CmdWriteBufferMarkerAMD)
#define has_physical_device_wrapper_CmdWriteBufferMarkerAMD(...) (wrapper_physical_device_entrypoints.CmdWriteBufferMarkerAMD)
#define name_of_wrapper_CmdWriteBufferMarkerAMD(...) "wrapper_CmdWriteBufferMarkerAMD"
#define VK_ID_CreateRenderPass2 341
#define IS_VK_ID_CreateRenderPass2_ON(masks) (((masks).f5 & (1ULL << (21))) != 0)
#define SET_VK_ID_CreateRenderPass2_ON(masks) (masks).f5 |= (1ULL << (21))
#define VK_ID_CreateRenderPass2_BIT (1ULL << (21))
#define VK_ID_CreateRenderPass2_IDX (5)

#define PRINT_CreateRenderPass2 IS_VK_ID_CreateRenderPass2_ON(wrapper_printer_masks)
#define TRY_CreateRenderPass2(TRUE, FALSE) TRUE
#define has_device_wrapper_CreateRenderPass2(...) (wrapper_device_entrypoints.CreateRenderPass2)
#define has_physical_device_wrapper_CreateRenderPass2(...) (wrapper_physical_device_entrypoints.CreateRenderPass2)
#define name_of_wrapper_CreateRenderPass2(...) "wrapper_CreateRenderPass2"
#define VK_ID_CmdBeginRenderPass2 343
#define IS_VK_ID_CmdBeginRenderPass2_ON(masks) (((masks).f5 & (1ULL << (23))) != 0)
#define SET_VK_ID_CmdBeginRenderPass2_ON(masks) (masks).f5 |= (1ULL << (23))
#define VK_ID_CmdBeginRenderPass2_BIT (1ULL << (23))
#define VK_ID_CmdBeginRenderPass2_IDX (5)

#define PRINT_CmdBeginRenderPass2 IS_VK_ID_CmdBeginRenderPass2_ON(wrapper_printer_masks)
#define TRY_CmdBeginRenderPass2(TRUE, FALSE) TRUE
#define has_device_wrapper_CmdBeginRenderPass2(...) (wrapper_device_entrypoints.CmdBeginRenderPass2)
#define has_physical_device_wrapper_CmdBeginRenderPass2(...) (wrapper_physical_device_entrypoints.CmdBeginRenderPass2)
#define name_of_wrapper_CmdBeginRenderPass2(...) "wrapper_CmdBeginRenderPass2"
#define VK_ID_CmdNextSubpass2 345
#define IS_VK_ID_CmdNextSubpass2_ON(masks) (((masks).f5 & (1ULL << (25))) != 0)
#define SET_VK_ID_CmdNextSubpass2_ON(masks) (masks).f5 |= (1ULL << (25))
#define VK_ID_CmdNextSubpass2_BIT (1ULL << (25))
#define VK_ID_CmdNextSubpass2_IDX (5)

#define PRINT_CmdNextSubpass2 IS_VK_ID_CmdNextSubpass2_ON(wrapper_printer_masks)
#define TRY_CmdNextSubpass2(TRUE, FALSE) TRUE
#define has_device_wrapper_CmdNextSubpass2(...) (wrapper_device_entrypoints.CmdNextSubpass2)
#define has_physical_device_wrapper_CmdNextSubpass2(...) (wrapper_physical_device_entrypoints.CmdNextSubpass2)
#define name_of_wrapper_CmdNextSubpass2(...) "wrapper_CmdNextSubpass2"
#define VK_ID_CmdEndRenderPass2 347
#define IS_VK_ID_CmdEndRenderPass2_ON(masks) (((masks).f5 & (1ULL << (27))) != 0)
#define SET_VK_ID_CmdEndRenderPass2_ON(masks) (masks).f5 |= (1ULL << (27))
#define VK_ID_CmdEndRenderPass2_BIT (1ULL << (27))
#define VK_ID_CmdEndRenderPass2_IDX (5)

#define PRINT_CmdEndRenderPass2 IS_VK_ID_CmdEndRenderPass2_ON(wrapper_printer_masks)
#define TRY_CmdEndRenderPass2(TRUE, FALSE) TRUE
#define has_device_wrapper_CmdEndRenderPass2(...) (wrapper_device_entrypoints.CmdEndRenderPass2)
#define has_physical_device_wrapper_CmdEndRenderPass2(...) (wrapper_physical_device_entrypoints.CmdEndRenderPass2)
#define name_of_wrapper_CmdEndRenderPass2(...) "wrapper_CmdEndRenderPass2"
#define VK_ID_GetSemaphoreCounterValue 349
#define IS_VK_ID_GetSemaphoreCounterValue_ON(masks) (((masks).f5 & (1ULL << (29))) != 0)
#define SET_VK_ID_GetSemaphoreCounterValue_ON(masks) (masks).f5 |= (1ULL << (29))
#define VK_ID_GetSemaphoreCounterValue_BIT (1ULL << (29))
#define VK_ID_GetSemaphoreCounterValue_IDX (5)

#define PRINT_GetSemaphoreCounterValue IS_VK_ID_GetSemaphoreCounterValue_ON(wrapper_printer_masks)
#define TRY_GetSemaphoreCounterValue(TRUE, FALSE) TRUE
#define has_device_wrapper_GetSemaphoreCounterValue(...) (wrapper_device_entrypoints.GetSemaphoreCounterValue)
#define has_physical_device_wrapper_GetSemaphoreCounterValue(...) (wrapper_physical_device_entrypoints.GetSemaphoreCounterValue)
#define name_of_wrapper_GetSemaphoreCounterValue(...) "wrapper_GetSemaphoreCounterValue"
#define VK_ID_WaitSemaphores 351
#define IS_VK_ID_WaitSemaphores_ON(masks) (((masks).f5 & (1ULL << (31))) != 0)
#define SET_VK_ID_WaitSemaphores_ON(masks) (masks).f5 |= (1ULL << (31))
#define VK_ID_WaitSemaphores_BIT (1ULL << (31))
#define VK_ID_WaitSemaphores_IDX (5)

#define PRINT_WaitSemaphores IS_VK_ID_WaitSemaphores_ON(wrapper_printer_masks)
#define TRY_WaitSemaphores(TRUE, FALSE) TRUE
#define has_device_wrapper_WaitSemaphores(...) (wrapper_device_entrypoints.WaitSemaphores)
#define has_physical_device_wrapper_WaitSemaphores(...) (wrapper_physical_device_entrypoints.WaitSemaphores)
#define name_of_wrapper_WaitSemaphores(...) "wrapper_WaitSemaphores"
#define VK_ID_SignalSemaphore 353
#define IS_VK_ID_SignalSemaphore_ON(masks) (((masks).f5 & (1ULL << (33))) != 0)
#define SET_VK_ID_SignalSemaphore_ON(masks) (masks).f5 |= (1ULL << (33))
#define VK_ID_SignalSemaphore_BIT (1ULL << (33))
#define VK_ID_SignalSemaphore_IDX (5)

#define PRINT_SignalSemaphore IS_VK_ID_SignalSemaphore_ON(wrapper_printer_masks)
#define TRY_SignalSemaphore(TRUE, FALSE) TRUE
#define has_device_wrapper_SignalSemaphore(...) (wrapper_device_entrypoints.SignalSemaphore)
#define has_physical_device_wrapper_SignalSemaphore(...) (wrapper_physical_device_entrypoints.SignalSemaphore)
#define name_of_wrapper_SignalSemaphore(...) "wrapper_SignalSemaphore"
#ifdef VK_USE_PLATFORM_ANDROID_KHR
#define VK_ID_GetAndroidHardwareBufferPropertiesANDROID 355
#define IS_VK_ID_GetAndroidHardwareBufferPropertiesANDROID_ON(masks) (((masks).f5 & (1ULL << (35))) != 0)
#define SET_VK_ID_GetAndroidHardwareBufferPropertiesANDROID_ON(masks) (masks).f5 |= (1ULL << (35))
#define VK_ID_GetAndroidHardwareBufferPropertiesANDROID_BIT (1ULL << (35))
#define VK_ID_GetAndroidHardwareBufferPropertiesANDROID_IDX (5)

#define PRINT_GetAndroidHardwareBufferPropertiesANDROID IS_VK_ID_GetAndroidHardwareBufferPropertiesANDROID_ON(wrapper_printer_masks)
#define TRY_GetAndroidHardwareBufferPropertiesANDROID(TRUE, FALSE) TRUE
#define has_device_wrapper_GetAndroidHardwareBufferPropertiesANDROID(...) (wrapper_device_entrypoints.GetAndroidHardwareBufferPropertiesANDROID)
#define has_physical_device_wrapper_GetAndroidHardwareBufferPropertiesANDROID(...) (wrapper_physical_device_entrypoints.GetAndroidHardwareBufferPropertiesANDROID)
#define name_of_wrapper_GetAndroidHardwareBufferPropertiesANDROID(...) "wrapper_GetAndroidHardwareBufferPropertiesANDROID"
#else
#define TRY_GetAndroidHardwareBufferPropertiesANDROID(TRUE, FALSE) FALSE
#endif
#ifdef VK_USE_PLATFORM_ANDROID_KHR
#define VK_ID_GetMemoryAndroidHardwareBufferANDROID 356
#define IS_VK_ID_GetMemoryAndroidHardwareBufferANDROID_ON(masks) (((masks).f5 & (1ULL << (36))) != 0)
#define SET_VK_ID_GetMemoryAndroidHardwareBufferANDROID_ON(masks) (masks).f5 |= (1ULL << (36))
#define VK_ID_GetMemoryAndroidHardwareBufferANDROID_BIT (1ULL << (36))
#define VK_ID_GetMemoryAndroidHardwareBufferANDROID_IDX (5)

#define PRINT_GetMemoryAndroidHardwareBufferANDROID IS_VK_ID_GetMemoryAndroidHardwareBufferANDROID_ON(wrapper_printer_masks)
#define TRY_GetMemoryAndroidHardwareBufferANDROID(TRUE, FALSE) TRUE
#define has_device_wrapper_GetMemoryAndroidHardwareBufferANDROID(...) (wrapper_device_entrypoints.GetMemoryAndroidHardwareBufferANDROID)
#define has_physical_device_wrapper_GetMemoryAndroidHardwareBufferANDROID(...) (wrapper_physical_device_entrypoints.GetMemoryAndroidHardwareBufferANDROID)
#define name_of_wrapper_GetMemoryAndroidHardwareBufferANDROID(...) "wrapper_GetMemoryAndroidHardwareBufferANDROID"
#else
#define TRY_GetMemoryAndroidHardwareBufferANDROID(TRUE, FALSE) FALSE
#endif
#define VK_ID_CmdDrawIndirectCount 357
#define IS_VK_ID_CmdDrawIndirectCount_ON(masks) (((masks).f5 & (1ULL << (37))) != 0)
#define SET_VK_ID_CmdDrawIndirectCount_ON(masks) (masks).f5 |= (1ULL << (37))
#define VK_ID_CmdDrawIndirectCount_BIT (1ULL << (37))
#define VK_ID_CmdDrawIndirectCount_IDX (5)

#define PRINT_CmdDrawIndirectCount IS_VK_ID_CmdDrawIndirectCount_ON(wrapper_printer_masks)
#define TRY_CmdDrawIndirectCount(TRUE, FALSE) TRUE
#define has_device_wrapper_CmdDrawIndirectCount(...) (wrapper_device_entrypoints.CmdDrawIndirectCount)
#define has_physical_device_wrapper_CmdDrawIndirectCount(...) (wrapper_physical_device_entrypoints.CmdDrawIndirectCount)
#define name_of_wrapper_CmdDrawIndirectCount(...) "wrapper_CmdDrawIndirectCount"
#define VK_ID_CmdDrawIndexedIndirectCount 360
#define IS_VK_ID_CmdDrawIndexedIndirectCount_ON(masks) (((masks).f5 & (1ULL << (40))) != 0)
#define SET_VK_ID_CmdDrawIndexedIndirectCount_ON(masks) (masks).f5 |= (1ULL << (40))
#define VK_ID_CmdDrawIndexedIndirectCount_BIT (1ULL << (40))
#define VK_ID_CmdDrawIndexedIndirectCount_IDX (5)

#define PRINT_CmdDrawIndexedIndirectCount IS_VK_ID_CmdDrawIndexedIndirectCount_ON(wrapper_printer_masks)
#define TRY_CmdDrawIndexedIndirectCount(TRUE, FALSE) TRUE
#define has_device_wrapper_CmdDrawIndexedIndirectCount(...) (wrapper_device_entrypoints.CmdDrawIndexedIndirectCount)
#define has_physical_device_wrapper_CmdDrawIndexedIndirectCount(...) (wrapper_physical_device_entrypoints.CmdDrawIndexedIndirectCount)
#define name_of_wrapper_CmdDrawIndexedIndirectCount(...) "wrapper_CmdDrawIndexedIndirectCount"
#define VK_ID_CmdSetCheckpointNV 363
#define IS_VK_ID_CmdSetCheckpointNV_ON(masks) (((masks).f5 & (1ULL << (43))) != 0)
#define SET_VK_ID_CmdSetCheckpointNV_ON(masks) (masks).f5 |= (1ULL << (43))
#define VK_ID_CmdSetCheckpointNV_BIT (1ULL << (43))
#define VK_ID_CmdSetCheckpointNV_IDX (5)

#define PRINT_CmdSetCheckpointNV IS_VK_ID_CmdSetCheckpointNV_ON(wrapper_printer_masks)
#define TRY_CmdSetCheckpointNV(TRUE, FALSE) TRUE
#define has_device_wrapper_CmdSetCheckpointNV(...) (wrapper_device_entrypoints.CmdSetCheckpointNV)
#define has_physical_device_wrapper_CmdSetCheckpointNV(...) (wrapper_physical_device_entrypoints.CmdSetCheckpointNV)
#define name_of_wrapper_CmdSetCheckpointNV(...) "wrapper_CmdSetCheckpointNV"
#define VK_ID_GetQueueCheckpointDataNV 364
#define IS_VK_ID_GetQueueCheckpointDataNV_ON(masks) (((masks).f5 & (1ULL << (44))) != 0)
#define SET_VK_ID_GetQueueCheckpointDataNV_ON(masks) (masks).f5 |= (1ULL << (44))
#define VK_ID_GetQueueCheckpointDataNV_BIT (1ULL << (44))
#define VK_ID_GetQueueCheckpointDataNV_IDX (5)

#define PRINT_GetQueueCheckpointDataNV IS_VK_ID_GetQueueCheckpointDataNV_ON(wrapper_printer_masks)
#define TRY_GetQueueCheckpointDataNV(TRUE, FALSE) TRUE
#define has_device_wrapper_GetQueueCheckpointDataNV(...) (wrapper_device_entrypoints.GetQueueCheckpointDataNV)
#define has_physical_device_wrapper_GetQueueCheckpointDataNV(...) (wrapper_physical_device_entrypoints.GetQueueCheckpointDataNV)
#define name_of_wrapper_GetQueueCheckpointDataNV(...) "wrapper_GetQueueCheckpointDataNV"
#define VK_ID_CmdBindTransformFeedbackBuffersEXT 365
#define IS_VK_ID_CmdBindTransformFeedbackBuffersEXT_ON(masks) (((masks).f5 & (1ULL << (45))) != 0)
#define SET_VK_ID_CmdBindTransformFeedbackBuffersEXT_ON(masks) (masks).f5 |= (1ULL << (45))
#define VK_ID_CmdBindTransformFeedbackBuffersEXT_BIT (1ULL << (45))
#define VK_ID_CmdBindTransformFeedbackBuffersEXT_IDX (5)

#define PRINT_CmdBindTransformFeedbackBuffersEXT IS_VK_ID_CmdBindTransformFeedbackBuffersEXT_ON(wrapper_printer_masks)
#define TRY_CmdBindTransformFeedbackBuffersEXT(TRUE, FALSE) TRUE
#define has_device_wrapper_CmdBindTransformFeedbackBuffersEXT(...) (wrapper_device_entrypoints.CmdBindTransformFeedbackBuffersEXT)
#define has_physical_device_wrapper_CmdBindTransformFeedbackBuffersEXT(...) (wrapper_physical_device_entrypoints.CmdBindTransformFeedbackBuffersEXT)
#define name_of_wrapper_CmdBindTransformFeedbackBuffersEXT(...) "wrapper_CmdBindTransformFeedbackBuffersEXT"
#define VK_ID_CmdBeginTransformFeedbackEXT 366
#define IS_VK_ID_CmdBeginTransformFeedbackEXT_ON(masks) (((masks).f5 & (1ULL << (46))) != 0)
#define SET_VK_ID_CmdBeginTransformFeedbackEXT_ON(masks) (masks).f5 |= (1ULL << (46))
#define VK_ID_CmdBeginTransformFeedbackEXT_BIT (1ULL << (46))
#define VK_ID_CmdBeginTransformFeedbackEXT_IDX (5)

#define PRINT_CmdBeginTransformFeedbackEXT IS_VK_ID_CmdBeginTransformFeedbackEXT_ON(wrapper_printer_masks)
#define TRY_CmdBeginTransformFeedbackEXT(TRUE, FALSE) TRUE
#define has_device_wrapper_CmdBeginTransformFeedbackEXT(...) (wrapper_device_entrypoints.CmdBeginTransformFeedbackEXT)
#define has_physical_device_wrapper_CmdBeginTransformFeedbackEXT(...) (wrapper_physical_device_entrypoints.CmdBeginTransformFeedbackEXT)
#define name_of_wrapper_CmdBeginTransformFeedbackEXT(...) "wrapper_CmdBeginTransformFeedbackEXT"
#define VK_ID_CmdEndTransformFeedbackEXT 367
#define IS_VK_ID_CmdEndTransformFeedbackEXT_ON(masks) (((masks).f5 & (1ULL << (47))) != 0)
#define SET_VK_ID_CmdEndTransformFeedbackEXT_ON(masks) (masks).f5 |= (1ULL << (47))
#define VK_ID_CmdEndTransformFeedbackEXT_BIT (1ULL << (47))
#define VK_ID_CmdEndTransformFeedbackEXT_IDX (5)

#define PRINT_CmdEndTransformFeedbackEXT IS_VK_ID_CmdEndTransformFeedbackEXT_ON(wrapper_printer_masks)
#define TRY_CmdEndTransformFeedbackEXT(TRUE, FALSE) TRUE
#define has_device_wrapper_CmdEndTransformFeedbackEXT(...) (wrapper_device_entrypoints.CmdEndTransformFeedbackEXT)
#define has_physical_device_wrapper_CmdEndTransformFeedbackEXT(...) (wrapper_physical_device_entrypoints.CmdEndTransformFeedbackEXT)
#define name_of_wrapper_CmdEndTransformFeedbackEXT(...) "wrapper_CmdEndTransformFeedbackEXT"
#define VK_ID_CmdBeginQueryIndexedEXT 368
#define IS_VK_ID_CmdBeginQueryIndexedEXT_ON(masks) (((masks).f5 & (1ULL << (48))) != 0)
#define SET_VK_ID_CmdBeginQueryIndexedEXT_ON(masks) (masks).f5 |= (1ULL << (48))
#define VK_ID_CmdBeginQueryIndexedEXT_BIT (1ULL << (48))
#define VK_ID_CmdBeginQueryIndexedEXT_IDX (5)

#define PRINT_CmdBeginQueryIndexedEXT IS_VK_ID_CmdBeginQueryIndexedEXT_ON(wrapper_printer_masks)
#define TRY_CmdBeginQueryIndexedEXT(TRUE, FALSE) TRUE
#define has_device_wrapper_CmdBeginQueryIndexedEXT(...) (wrapper_device_entrypoints.CmdBeginQueryIndexedEXT)
#define has_physical_device_wrapper_CmdBeginQueryIndexedEXT(...) (wrapper_physical_device_entrypoints.CmdBeginQueryIndexedEXT)
#define name_of_wrapper_CmdBeginQueryIndexedEXT(...) "wrapper_CmdBeginQueryIndexedEXT"
#define VK_ID_CmdEndQueryIndexedEXT 369
#define IS_VK_ID_CmdEndQueryIndexedEXT_ON(masks) (((masks).f5 & (1ULL << (49))) != 0)
#define SET_VK_ID_CmdEndQueryIndexedEXT_ON(masks) (masks).f5 |= (1ULL << (49))
#define VK_ID_CmdEndQueryIndexedEXT_BIT (1ULL << (49))
#define VK_ID_CmdEndQueryIndexedEXT_IDX (5)

#define PRINT_CmdEndQueryIndexedEXT IS_VK_ID_CmdEndQueryIndexedEXT_ON(wrapper_printer_masks)
#define TRY_CmdEndQueryIndexedEXT(TRUE, FALSE) TRUE
#define has_device_wrapper_CmdEndQueryIndexedEXT(...) (wrapper_device_entrypoints.CmdEndQueryIndexedEXT)
#define has_physical_device_wrapper_CmdEndQueryIndexedEXT(...) (wrapper_physical_device_entrypoints.CmdEndQueryIndexedEXT)
#define name_of_wrapper_CmdEndQueryIndexedEXT(...) "wrapper_CmdEndQueryIndexedEXT"
#define VK_ID_CmdDrawIndirectByteCountEXT 370
#define IS_VK_ID_CmdDrawIndirectByteCountEXT_ON(masks) (((masks).f5 & (1ULL << (50))) != 0)
#define SET_VK_ID_CmdDrawIndirectByteCountEXT_ON(masks) (masks).f5 |= (1ULL << (50))
#define VK_ID_CmdDrawIndirectByteCountEXT_BIT (1ULL << (50))
#define VK_ID_CmdDrawIndirectByteCountEXT_IDX (5)

#define PRINT_CmdDrawIndirectByteCountEXT IS_VK_ID_CmdDrawIndirectByteCountEXT_ON(wrapper_printer_masks)
#define TRY_CmdDrawIndirectByteCountEXT(TRUE, FALSE) TRUE
#define has_device_wrapper_CmdDrawIndirectByteCountEXT(...) (wrapper_device_entrypoints.CmdDrawIndirectByteCountEXT)
#define has_physical_device_wrapper_CmdDrawIndirectByteCountEXT(...) (wrapper_physical_device_entrypoints.CmdDrawIndirectByteCountEXT)
#define name_of_wrapper_CmdDrawIndirectByteCountEXT(...) "wrapper_CmdDrawIndirectByteCountEXT"
#define VK_ID_CmdSetExclusiveScissorNV 371
#define IS_VK_ID_CmdSetExclusiveScissorNV_ON(masks) (((masks).f5 & (1ULL << (51))) != 0)
#define SET_VK_ID_CmdSetExclusiveScissorNV_ON(masks) (masks).f5 |= (1ULL << (51))
#define VK_ID_CmdSetExclusiveScissorNV_BIT (1ULL << (51))
#define VK_ID_CmdSetExclusiveScissorNV_IDX (5)

#define PRINT_CmdSetExclusiveScissorNV IS_VK_ID_CmdSetExclusiveScissorNV_ON(wrapper_printer_masks)
#define TRY_CmdSetExclusiveScissorNV(TRUE, FALSE) TRUE
#define has_device_wrapper_CmdSetExclusiveScissorNV(...) (wrapper_device_entrypoints.CmdSetExclusiveScissorNV)
#define has_physical_device_wrapper_CmdSetExclusiveScissorNV(...) (wrapper_physical_device_entrypoints.CmdSetExclusiveScissorNV)
#define name_of_wrapper_CmdSetExclusiveScissorNV(...) "wrapper_CmdSetExclusiveScissorNV"
#define VK_ID_CmdSetExclusiveScissorEnableNV 372
#define IS_VK_ID_CmdSetExclusiveScissorEnableNV_ON(masks) (((masks).f5 & (1ULL << (52))) != 0)
#define SET_VK_ID_CmdSetExclusiveScissorEnableNV_ON(masks) (masks).f5 |= (1ULL << (52))
#define VK_ID_CmdSetExclusiveScissorEnableNV_BIT (1ULL << (52))
#define VK_ID_CmdSetExclusiveScissorEnableNV_IDX (5)

#define PRINT_CmdSetExclusiveScissorEnableNV IS_VK_ID_CmdSetExclusiveScissorEnableNV_ON(wrapper_printer_masks)
#define TRY_CmdSetExclusiveScissorEnableNV(TRUE, FALSE) TRUE
#define has_device_wrapper_CmdSetExclusiveScissorEnableNV(...) (wrapper_device_entrypoints.CmdSetExclusiveScissorEnableNV)
#define has_physical_device_wrapper_CmdSetExclusiveScissorEnableNV(...) (wrapper_physical_device_entrypoints.CmdSetExclusiveScissorEnableNV)
#define name_of_wrapper_CmdSetExclusiveScissorEnableNV(...) "wrapper_CmdSetExclusiveScissorEnableNV"
#define VK_ID_CmdBindShadingRateImageNV 373
#define IS_VK_ID_CmdBindShadingRateImageNV_ON(masks) (((masks).f5 & (1ULL << (53))) != 0)
#define SET_VK_ID_CmdBindShadingRateImageNV_ON(masks) (masks).f5 |= (1ULL << (53))
#define VK_ID_CmdBindShadingRateImageNV_BIT (1ULL << (53))
#define VK_ID_CmdBindShadingRateImageNV_IDX (5)

#define PRINT_CmdBindShadingRateImageNV IS_VK_ID_CmdBindShadingRateImageNV_ON(wrapper_printer_masks)
#define TRY_CmdBindShadingRateImageNV(TRUE, FALSE) TRUE
#define has_device_wrapper_CmdBindShadingRateImageNV(...) (wrapper_device_entrypoints.CmdBindShadingRateImageNV)
#define has_physical_device_wrapper_CmdBindShadingRateImageNV(...) (wrapper_physical_device_entrypoints.CmdBindShadingRateImageNV)
#define name_of_wrapper_CmdBindShadingRateImageNV(...) "wrapper_CmdBindShadingRateImageNV"
#define VK_ID_CmdSetViewportShadingRatePaletteNV 374
#define IS_VK_ID_CmdSetViewportShadingRatePaletteNV_ON(masks) (((masks).f5 & (1ULL << (54))) != 0)
#define SET_VK_ID_CmdSetViewportShadingRatePaletteNV_ON(masks) (masks).f5 |= (1ULL << (54))
#define VK_ID_CmdSetViewportShadingRatePaletteNV_BIT (1ULL << (54))
#define VK_ID_CmdSetViewportShadingRatePaletteNV_IDX (5)

#define PRINT_CmdSetViewportShadingRatePaletteNV IS_VK_ID_CmdSetViewportShadingRatePaletteNV_ON(wrapper_printer_masks)
#define TRY_CmdSetViewportShadingRatePaletteNV(TRUE, FALSE) TRUE
#define has_device_wrapper_CmdSetViewportShadingRatePaletteNV(...) (wrapper_device_entrypoints.CmdSetViewportShadingRatePaletteNV)
#define has_physical_device_wrapper_CmdSetViewportShadingRatePaletteNV(...) (wrapper_physical_device_entrypoints.CmdSetViewportShadingRatePaletteNV)
#define name_of_wrapper_CmdSetViewportShadingRatePaletteNV(...) "wrapper_CmdSetViewportShadingRatePaletteNV"
#define VK_ID_CmdSetCoarseSampleOrderNV 375
#define IS_VK_ID_CmdSetCoarseSampleOrderNV_ON(masks) (((masks).f5 & (1ULL << (55))) != 0)
#define SET_VK_ID_CmdSetCoarseSampleOrderNV_ON(masks) (masks).f5 |= (1ULL << (55))
#define VK_ID_CmdSetCoarseSampleOrderNV_BIT (1ULL << (55))
#define VK_ID_CmdSetCoarseSampleOrderNV_IDX (5)

#define PRINT_CmdSetCoarseSampleOrderNV IS_VK_ID_CmdSetCoarseSampleOrderNV_ON(wrapper_printer_masks)
#define TRY_CmdSetCoarseSampleOrderNV(TRUE, FALSE) TRUE
#define has_device_wrapper_CmdSetCoarseSampleOrderNV(...) (wrapper_device_entrypoints.CmdSetCoarseSampleOrderNV)
#define has_physical_device_wrapper_CmdSetCoarseSampleOrderNV(...) (wrapper_physical_device_entrypoints.CmdSetCoarseSampleOrderNV)
#define name_of_wrapper_CmdSetCoarseSampleOrderNV(...) "wrapper_CmdSetCoarseSampleOrderNV"
#define VK_ID_CmdDrawMeshTasksNV 376
#define IS_VK_ID_CmdDrawMeshTasksNV_ON(masks) (((masks).f5 & (1ULL << (56))) != 0)
#define SET_VK_ID_CmdDrawMeshTasksNV_ON(masks) (masks).f5 |= (1ULL << (56))
#define VK_ID_CmdDrawMeshTasksNV_BIT (1ULL << (56))
#define VK_ID_CmdDrawMeshTasksNV_IDX (5)

#define PRINT_CmdDrawMeshTasksNV IS_VK_ID_CmdDrawMeshTasksNV_ON(wrapper_printer_masks)
#define TRY_CmdDrawMeshTasksNV(TRUE, FALSE) TRUE
#define has_device_wrapper_CmdDrawMeshTasksNV(...) (wrapper_device_entrypoints.CmdDrawMeshTasksNV)
#define has_physical_device_wrapper_CmdDrawMeshTasksNV(...) (wrapper_physical_device_entrypoints.CmdDrawMeshTasksNV)
#define name_of_wrapper_CmdDrawMeshTasksNV(...) "wrapper_CmdDrawMeshTasksNV"
#define VK_ID_CmdDrawMeshTasksIndirectNV 377
#define IS_VK_ID_CmdDrawMeshTasksIndirectNV_ON(masks) (((masks).f5 & (1ULL << (57))) != 0)
#define SET_VK_ID_CmdDrawMeshTasksIndirectNV_ON(masks) (masks).f5 |= (1ULL << (57))
#define VK_ID_CmdDrawMeshTasksIndirectNV_BIT (1ULL << (57))
#define VK_ID_CmdDrawMeshTasksIndirectNV_IDX (5)

#define PRINT_CmdDrawMeshTasksIndirectNV IS_VK_ID_CmdDrawMeshTasksIndirectNV_ON(wrapper_printer_masks)
#define TRY_CmdDrawMeshTasksIndirectNV(TRUE, FALSE) TRUE
#define has_device_wrapper_CmdDrawMeshTasksIndirectNV(...) (wrapper_device_entrypoints.CmdDrawMeshTasksIndirectNV)
#define has_physical_device_wrapper_CmdDrawMeshTasksIndirectNV(...) (wrapper_physical_device_entrypoints.CmdDrawMeshTasksIndirectNV)
#define name_of_wrapper_CmdDrawMeshTasksIndirectNV(...) "wrapper_CmdDrawMeshTasksIndirectNV"
#define VK_ID_CmdDrawMeshTasksIndirectCountNV 378
#define IS_VK_ID_CmdDrawMeshTasksIndirectCountNV_ON(masks) (((masks).f5 & (1ULL << (58))) != 0)
#define SET_VK_ID_CmdDrawMeshTasksIndirectCountNV_ON(masks) (masks).f5 |= (1ULL << (58))
#define VK_ID_CmdDrawMeshTasksIndirectCountNV_BIT (1ULL << (58))
#define VK_ID_CmdDrawMeshTasksIndirectCountNV_IDX (5)

#define PRINT_CmdDrawMeshTasksIndirectCountNV IS_VK_ID_CmdDrawMeshTasksIndirectCountNV_ON(wrapper_printer_masks)
#define TRY_CmdDrawMeshTasksIndirectCountNV(TRUE, FALSE) TRUE
#define has_device_wrapper_CmdDrawMeshTasksIndirectCountNV(...) (wrapper_device_entrypoints.CmdDrawMeshTasksIndirectCountNV)
#define has_physical_device_wrapper_CmdDrawMeshTasksIndirectCountNV(...) (wrapper_physical_device_entrypoints.CmdDrawMeshTasksIndirectCountNV)
#define name_of_wrapper_CmdDrawMeshTasksIndirectCountNV(...) "wrapper_CmdDrawMeshTasksIndirectCountNV"
#define VK_ID_CmdDrawMeshTasksEXT 379
#define IS_VK_ID_CmdDrawMeshTasksEXT_ON(masks) (((masks).f5 & (1ULL << (59))) != 0)
#define SET_VK_ID_CmdDrawMeshTasksEXT_ON(masks) (masks).f5 |= (1ULL << (59))
#define VK_ID_CmdDrawMeshTasksEXT_BIT (1ULL << (59))
#define VK_ID_CmdDrawMeshTasksEXT_IDX (5)

#define PRINT_CmdDrawMeshTasksEXT IS_VK_ID_CmdDrawMeshTasksEXT_ON(wrapper_printer_masks)
#define TRY_CmdDrawMeshTasksEXT(TRUE, FALSE) TRUE
#define has_device_wrapper_CmdDrawMeshTasksEXT(...) (wrapper_device_entrypoints.CmdDrawMeshTasksEXT)
#define has_physical_device_wrapper_CmdDrawMeshTasksEXT(...) (wrapper_physical_device_entrypoints.CmdDrawMeshTasksEXT)
#define name_of_wrapper_CmdDrawMeshTasksEXT(...) "wrapper_CmdDrawMeshTasksEXT"
#define VK_ID_CmdDrawMeshTasksIndirectEXT 380
#define IS_VK_ID_CmdDrawMeshTasksIndirectEXT_ON(masks) (((masks).f5 & (1ULL << (60))) != 0)
#define SET_VK_ID_CmdDrawMeshTasksIndirectEXT_ON(masks) (masks).f5 |= (1ULL << (60))
#define VK_ID_CmdDrawMeshTasksIndirectEXT_BIT (1ULL << (60))
#define VK_ID_CmdDrawMeshTasksIndirectEXT_IDX (5)

#define PRINT_CmdDrawMeshTasksIndirectEXT IS_VK_ID_CmdDrawMeshTasksIndirectEXT_ON(wrapper_printer_masks)
#define TRY_CmdDrawMeshTasksIndirectEXT(TRUE, FALSE) TRUE
#define has_device_wrapper_CmdDrawMeshTasksIndirectEXT(...) (wrapper_device_entrypoints.CmdDrawMeshTasksIndirectEXT)
#define has_physical_device_wrapper_CmdDrawMeshTasksIndirectEXT(...) (wrapper_physical_device_entrypoints.CmdDrawMeshTasksIndirectEXT)
#define name_of_wrapper_CmdDrawMeshTasksIndirectEXT(...) "wrapper_CmdDrawMeshTasksIndirectEXT"
#define VK_ID_CmdDrawMeshTasksIndirectCountEXT 381
#define IS_VK_ID_CmdDrawMeshTasksIndirectCountEXT_ON(masks) (((masks).f5 & (1ULL << (61))) != 0)
#define SET_VK_ID_CmdDrawMeshTasksIndirectCountEXT_ON(masks) (masks).f5 |= (1ULL << (61))
#define VK_ID_CmdDrawMeshTasksIndirectCountEXT_BIT (1ULL << (61))
#define VK_ID_CmdDrawMeshTasksIndirectCountEXT_IDX (5)

#define PRINT_CmdDrawMeshTasksIndirectCountEXT IS_VK_ID_CmdDrawMeshTasksIndirectCountEXT_ON(wrapper_printer_masks)
#define TRY_CmdDrawMeshTasksIndirectCountEXT(TRUE, FALSE) TRUE
#define has_device_wrapper_CmdDrawMeshTasksIndirectCountEXT(...) (wrapper_device_entrypoints.CmdDrawMeshTasksIndirectCountEXT)
#define has_physical_device_wrapper_CmdDrawMeshTasksIndirectCountEXT(...) (wrapper_physical_device_entrypoints.CmdDrawMeshTasksIndirectCountEXT)
#define name_of_wrapper_CmdDrawMeshTasksIndirectCountEXT(...) "wrapper_CmdDrawMeshTasksIndirectCountEXT"
#define VK_ID_CompileDeferredNV 382
#define IS_VK_ID_CompileDeferredNV_ON(masks) (((masks).f5 & (1ULL << (62))) != 0)
#define SET_VK_ID_CompileDeferredNV_ON(masks) (masks).f5 |= (1ULL << (62))
#define VK_ID_CompileDeferredNV_BIT (1ULL << (62))
#define VK_ID_CompileDeferredNV_IDX (5)

#define PRINT_CompileDeferredNV IS_VK_ID_CompileDeferredNV_ON(wrapper_printer_masks)
#define TRY_CompileDeferredNV(TRUE, FALSE) TRUE
#define has_device_wrapper_CompileDeferredNV(...) (wrapper_device_entrypoints.CompileDeferredNV)
#define has_physical_device_wrapper_CompileDeferredNV(...) (wrapper_physical_device_entrypoints.CompileDeferredNV)
#define name_of_wrapper_CompileDeferredNV(...) "wrapper_CompileDeferredNV"
#define VK_ID_CreateAccelerationStructureNV 383
#define IS_VK_ID_CreateAccelerationStructureNV_ON(masks) (((masks).f5 & (1ULL << (63))) != 0)
#define SET_VK_ID_CreateAccelerationStructureNV_ON(masks) (masks).f5 |= (1ULL << (63))
#define VK_ID_CreateAccelerationStructureNV_BIT (1ULL << (63))
#define VK_ID_CreateAccelerationStructureNV_IDX (5)

#define PRINT_CreateAccelerationStructureNV IS_VK_ID_CreateAccelerationStructureNV_ON(wrapper_printer_masks)
#define TRY_CreateAccelerationStructureNV(TRUE, FALSE) TRUE
#define has_device_wrapper_CreateAccelerationStructureNV(...) (wrapper_device_entrypoints.CreateAccelerationStructureNV)
#define has_physical_device_wrapper_CreateAccelerationStructureNV(...) (wrapper_physical_device_entrypoints.CreateAccelerationStructureNV)
#define name_of_wrapper_CreateAccelerationStructureNV(...) "wrapper_CreateAccelerationStructureNV"
#define VK_ID_CmdBindInvocationMaskHUAWEI 384
#define IS_VK_ID_CmdBindInvocationMaskHUAWEI_ON(masks) (((masks).f6 & (1ULL << (0))) != 0)
#define SET_VK_ID_CmdBindInvocationMaskHUAWEI_ON(masks) (masks).f6 |= (1ULL << (0))
#define VK_ID_CmdBindInvocationMaskHUAWEI_BIT (1ULL << (0))
#define VK_ID_CmdBindInvocationMaskHUAWEI_IDX (6)

#define PRINT_CmdBindInvocationMaskHUAWEI IS_VK_ID_CmdBindInvocationMaskHUAWEI_ON(wrapper_printer_masks)
#define TRY_CmdBindInvocationMaskHUAWEI(TRUE, FALSE) TRUE
#define has_device_wrapper_CmdBindInvocationMaskHUAWEI(...) (wrapper_device_entrypoints.CmdBindInvocationMaskHUAWEI)
#define has_physical_device_wrapper_CmdBindInvocationMaskHUAWEI(...) (wrapper_physical_device_entrypoints.CmdBindInvocationMaskHUAWEI)
#define name_of_wrapper_CmdBindInvocationMaskHUAWEI(...) "wrapper_CmdBindInvocationMaskHUAWEI"
#define VK_ID_DestroyAccelerationStructureKHR 385
#define IS_VK_ID_DestroyAccelerationStructureKHR_ON(masks) (((masks).f6 & (1ULL << (1))) != 0)
#define SET_VK_ID_DestroyAccelerationStructureKHR_ON(masks) (masks).f6 |= (1ULL << (1))
#define VK_ID_DestroyAccelerationStructureKHR_BIT (1ULL << (1))
#define VK_ID_DestroyAccelerationStructureKHR_IDX (6)

#define PRINT_DestroyAccelerationStructureKHR IS_VK_ID_DestroyAccelerationStructureKHR_ON(wrapper_printer_masks)
#define TRY_DestroyAccelerationStructureKHR(TRUE, FALSE) TRUE
#define has_device_wrapper_DestroyAccelerationStructureKHR(...) (wrapper_device_entrypoints.DestroyAccelerationStructureKHR)
#define has_physical_device_wrapper_DestroyAccelerationStructureKHR(...) (wrapper_physical_device_entrypoints.DestroyAccelerationStructureKHR)
#define name_of_wrapper_DestroyAccelerationStructureKHR(...) "wrapper_DestroyAccelerationStructureKHR"
#define VK_ID_DestroyAccelerationStructureNV 386
#define IS_VK_ID_DestroyAccelerationStructureNV_ON(masks) (((masks).f6 & (1ULL << (2))) != 0)
#define SET_VK_ID_DestroyAccelerationStructureNV_ON(masks) (masks).f6 |= (1ULL << (2))
#define VK_ID_DestroyAccelerationStructureNV_BIT (1ULL << (2))
#define VK_ID_DestroyAccelerationStructureNV_IDX (6)

#define PRINT_DestroyAccelerationStructureNV IS_VK_ID_DestroyAccelerationStructureNV_ON(wrapper_printer_masks)
#define TRY_DestroyAccelerationStructureNV(TRUE, FALSE) TRUE
#define has_device_wrapper_DestroyAccelerationStructureNV(...) (wrapper_device_entrypoints.DestroyAccelerationStructureNV)
#define has_physical_device_wrapper_DestroyAccelerationStructureNV(...) (wrapper_physical_device_entrypoints.DestroyAccelerationStructureNV)
#define name_of_wrapper_DestroyAccelerationStructureNV(...) "wrapper_DestroyAccelerationStructureNV"
#define VK_ID_GetAccelerationStructureMemoryRequirementsNV 387
#define IS_VK_ID_GetAccelerationStructureMemoryRequirementsNV_ON(masks) (((masks).f6 & (1ULL << (3))) != 0)
#define SET_VK_ID_GetAccelerationStructureMemoryRequirementsNV_ON(masks) (masks).f6 |= (1ULL << (3))
#define VK_ID_GetAccelerationStructureMemoryRequirementsNV_BIT (1ULL << (3))
#define VK_ID_GetAccelerationStructureMemoryRequirementsNV_IDX (6)

#define PRINT_GetAccelerationStructureMemoryRequirementsNV IS_VK_ID_GetAccelerationStructureMemoryRequirementsNV_ON(wrapper_printer_masks)
#define TRY_GetAccelerationStructureMemoryRequirementsNV(TRUE, FALSE) TRUE
#define has_device_wrapper_GetAccelerationStructureMemoryRequirementsNV(...) (wrapper_device_entrypoints.GetAccelerationStructureMemoryRequirementsNV)
#define has_physical_device_wrapper_GetAccelerationStructureMemoryRequirementsNV(...) (wrapper_physical_device_entrypoints.GetAccelerationStructureMemoryRequirementsNV)
#define name_of_wrapper_GetAccelerationStructureMemoryRequirementsNV(...) "wrapper_GetAccelerationStructureMemoryRequirementsNV"
#define VK_ID_BindAccelerationStructureMemoryNV 388
#define IS_VK_ID_BindAccelerationStructureMemoryNV_ON(masks) (((masks).f6 & (1ULL << (4))) != 0)
#define SET_VK_ID_BindAccelerationStructureMemoryNV_ON(masks) (masks).f6 |= (1ULL << (4))
#define VK_ID_BindAccelerationStructureMemoryNV_BIT (1ULL << (4))
#define VK_ID_BindAccelerationStructureMemoryNV_IDX (6)

#define PRINT_BindAccelerationStructureMemoryNV IS_VK_ID_BindAccelerationStructureMemoryNV_ON(wrapper_printer_masks)
#define TRY_BindAccelerationStructureMemoryNV(TRUE, FALSE) TRUE
#define has_device_wrapper_BindAccelerationStructureMemoryNV(...) (wrapper_device_entrypoints.BindAccelerationStructureMemoryNV)
#define has_physical_device_wrapper_BindAccelerationStructureMemoryNV(...) (wrapper_physical_device_entrypoints.BindAccelerationStructureMemoryNV)
#define name_of_wrapper_BindAccelerationStructureMemoryNV(...) "wrapper_BindAccelerationStructureMemoryNV"
#define VK_ID_CmdCopyAccelerationStructureNV 389
#define IS_VK_ID_CmdCopyAccelerationStructureNV_ON(masks) (((masks).f6 & (1ULL << (5))) != 0)
#define SET_VK_ID_CmdCopyAccelerationStructureNV_ON(masks) (masks).f6 |= (1ULL << (5))
#define VK_ID_CmdCopyAccelerationStructureNV_BIT (1ULL << (5))
#define VK_ID_CmdCopyAccelerationStructureNV_IDX (6)

#define PRINT_CmdCopyAccelerationStructureNV IS_VK_ID_CmdCopyAccelerationStructureNV_ON(wrapper_printer_masks)
#define TRY_CmdCopyAccelerationStructureNV(TRUE, FALSE) TRUE
#define has_device_wrapper_CmdCopyAccelerationStructureNV(...) (wrapper_device_entrypoints.CmdCopyAccelerationStructureNV)
#define has_physical_device_wrapper_CmdCopyAccelerationStructureNV(...) (wrapper_physical_device_entrypoints.CmdCopyAccelerationStructureNV)
#define name_of_wrapper_CmdCopyAccelerationStructureNV(...) "wrapper_CmdCopyAccelerationStructureNV"
#define VK_ID_CmdCopyAccelerationStructureKHR 390
#define IS_VK_ID_CmdCopyAccelerationStructureKHR_ON(masks) (((masks).f6 & (1ULL << (6))) != 0)
#define SET_VK_ID_CmdCopyAccelerationStructureKHR_ON(masks) (masks).f6 |= (1ULL << (6))
#define VK_ID_CmdCopyAccelerationStructureKHR_BIT (1ULL << (6))
#define VK_ID_CmdCopyAccelerationStructureKHR_IDX (6)

#define PRINT_CmdCopyAccelerationStructureKHR IS_VK_ID_CmdCopyAccelerationStructureKHR_ON(wrapper_printer_masks)
#define TRY_CmdCopyAccelerationStructureKHR(TRUE, FALSE) TRUE
#define has_device_wrapper_CmdCopyAccelerationStructureKHR(...) (wrapper_device_entrypoints.CmdCopyAccelerationStructureKHR)
#define has_physical_device_wrapper_CmdCopyAccelerationStructureKHR(...) (wrapper_physical_device_entrypoints.CmdCopyAccelerationStructureKHR)
#define name_of_wrapper_CmdCopyAccelerationStructureKHR(...) "wrapper_CmdCopyAccelerationStructureKHR"
#define VK_ID_CopyAccelerationStructureKHR 391
#define IS_VK_ID_CopyAccelerationStructureKHR_ON(masks) (((masks).f6 & (1ULL << (7))) != 0)
#define SET_VK_ID_CopyAccelerationStructureKHR_ON(masks) (masks).f6 |= (1ULL << (7))
#define VK_ID_CopyAccelerationStructureKHR_BIT (1ULL << (7))
#define VK_ID_CopyAccelerationStructureKHR_IDX (6)

#define PRINT_CopyAccelerationStructureKHR IS_VK_ID_CopyAccelerationStructureKHR_ON(wrapper_printer_masks)
#define TRY_CopyAccelerationStructureKHR(TRUE, FALSE) TRUE
#define has_device_wrapper_CopyAccelerationStructureKHR(...) (wrapper_device_entrypoints.CopyAccelerationStructureKHR)
#define has_physical_device_wrapper_CopyAccelerationStructureKHR(...) (wrapper_physical_device_entrypoints.CopyAccelerationStructureKHR)
#define name_of_wrapper_CopyAccelerationStructureKHR(...) "wrapper_CopyAccelerationStructureKHR"
#define VK_ID_CmdCopyAccelerationStructureToMemoryKHR 392
#define IS_VK_ID_CmdCopyAccelerationStructureToMemoryKHR_ON(masks) (((masks).f6 & (1ULL << (8))) != 0)
#define SET_VK_ID_CmdCopyAccelerationStructureToMemoryKHR_ON(masks) (masks).f6 |= (1ULL << (8))
#define VK_ID_CmdCopyAccelerationStructureToMemoryKHR_BIT (1ULL << (8))
#define VK_ID_CmdCopyAccelerationStructureToMemoryKHR_IDX (6)

#define PRINT_CmdCopyAccelerationStructureToMemoryKHR IS_VK_ID_CmdCopyAccelerationStructureToMemoryKHR_ON(wrapper_printer_masks)
#define TRY_CmdCopyAccelerationStructureToMemoryKHR(TRUE, FALSE) TRUE
#define has_device_wrapper_CmdCopyAccelerationStructureToMemoryKHR(...) (wrapper_device_entrypoints.CmdCopyAccelerationStructureToMemoryKHR)
#define has_physical_device_wrapper_CmdCopyAccelerationStructureToMemoryKHR(...) (wrapper_physical_device_entrypoints.CmdCopyAccelerationStructureToMemoryKHR)
#define name_of_wrapper_CmdCopyAccelerationStructureToMemoryKHR(...) "wrapper_CmdCopyAccelerationStructureToMemoryKHR"
#define VK_ID_CopyAccelerationStructureToMemoryKHR 393
#define IS_VK_ID_CopyAccelerationStructureToMemoryKHR_ON(masks) (((masks).f6 & (1ULL << (9))) != 0)
#define SET_VK_ID_CopyAccelerationStructureToMemoryKHR_ON(masks) (masks).f6 |= (1ULL << (9))
#define VK_ID_CopyAccelerationStructureToMemoryKHR_BIT (1ULL << (9))
#define VK_ID_CopyAccelerationStructureToMemoryKHR_IDX (6)

#define PRINT_CopyAccelerationStructureToMemoryKHR IS_VK_ID_CopyAccelerationStructureToMemoryKHR_ON(wrapper_printer_masks)
#define TRY_CopyAccelerationStructureToMemoryKHR(TRUE, FALSE) TRUE
#define has_device_wrapper_CopyAccelerationStructureToMemoryKHR(...) (wrapper_device_entrypoints.CopyAccelerationStructureToMemoryKHR)
#define has_physical_device_wrapper_CopyAccelerationStructureToMemoryKHR(...) (wrapper_physical_device_entrypoints.CopyAccelerationStructureToMemoryKHR)
#define name_of_wrapper_CopyAccelerationStructureToMemoryKHR(...) "wrapper_CopyAccelerationStructureToMemoryKHR"
#define VK_ID_CmdCopyMemoryToAccelerationStructureKHR 394
#define IS_VK_ID_CmdCopyMemoryToAccelerationStructureKHR_ON(masks) (((masks).f6 & (1ULL << (10))) != 0)
#define SET_VK_ID_CmdCopyMemoryToAccelerationStructureKHR_ON(masks) (masks).f6 |= (1ULL << (10))
#define VK_ID_CmdCopyMemoryToAccelerationStructureKHR_BIT (1ULL << (10))
#define VK_ID_CmdCopyMemoryToAccelerationStructureKHR_IDX (6)

#define PRINT_CmdCopyMemoryToAccelerationStructureKHR IS_VK_ID_CmdCopyMemoryToAccelerationStructureKHR_ON(wrapper_printer_masks)
#define TRY_CmdCopyMemoryToAccelerationStructureKHR(TRUE, FALSE) TRUE
#define has_device_wrapper_CmdCopyMemoryToAccelerationStructureKHR(...) (wrapper_device_entrypoints.CmdCopyMemoryToAccelerationStructureKHR)
#define has_physical_device_wrapper_CmdCopyMemoryToAccelerationStructureKHR(...) (wrapper_physical_device_entrypoints.CmdCopyMemoryToAccelerationStructureKHR)
#define name_of_wrapper_CmdCopyMemoryToAccelerationStructureKHR(...) "wrapper_CmdCopyMemoryToAccelerationStructureKHR"
#define VK_ID_CopyMemoryToAccelerationStructureKHR 395
#define IS_VK_ID_CopyMemoryToAccelerationStructureKHR_ON(masks) (((masks).f6 & (1ULL << (11))) != 0)
#define SET_VK_ID_CopyMemoryToAccelerationStructureKHR_ON(masks) (masks).f6 |= (1ULL << (11))
#define VK_ID_CopyMemoryToAccelerationStructureKHR_BIT (1ULL << (11))
#define VK_ID_CopyMemoryToAccelerationStructureKHR_IDX (6)

#define PRINT_CopyMemoryToAccelerationStructureKHR IS_VK_ID_CopyMemoryToAccelerationStructureKHR_ON(wrapper_printer_masks)
#define TRY_CopyMemoryToAccelerationStructureKHR(TRUE, FALSE) TRUE
#define has_device_wrapper_CopyMemoryToAccelerationStructureKHR(...) (wrapper_device_entrypoints.CopyMemoryToAccelerationStructureKHR)
#define has_physical_device_wrapper_CopyMemoryToAccelerationStructureKHR(...) (wrapper_physical_device_entrypoints.CopyMemoryToAccelerationStructureKHR)
#define name_of_wrapper_CopyMemoryToAccelerationStructureKHR(...) "wrapper_CopyMemoryToAccelerationStructureKHR"
#define VK_ID_CmdWriteAccelerationStructuresPropertiesKHR 396
#define IS_VK_ID_CmdWriteAccelerationStructuresPropertiesKHR_ON(masks) (((masks).f6 & (1ULL << (12))) != 0)
#define SET_VK_ID_CmdWriteAccelerationStructuresPropertiesKHR_ON(masks) (masks).f6 |= (1ULL << (12))
#define VK_ID_CmdWriteAccelerationStructuresPropertiesKHR_BIT (1ULL << (12))
#define VK_ID_CmdWriteAccelerationStructuresPropertiesKHR_IDX (6)

#define PRINT_CmdWriteAccelerationStructuresPropertiesKHR IS_VK_ID_CmdWriteAccelerationStructuresPropertiesKHR_ON(wrapper_printer_masks)
#define TRY_CmdWriteAccelerationStructuresPropertiesKHR(TRUE, FALSE) TRUE
#define has_device_wrapper_CmdWriteAccelerationStructuresPropertiesKHR(...) (wrapper_device_entrypoints.CmdWriteAccelerationStructuresPropertiesKHR)
#define has_physical_device_wrapper_CmdWriteAccelerationStructuresPropertiesKHR(...) (wrapper_physical_device_entrypoints.CmdWriteAccelerationStructuresPropertiesKHR)
#define name_of_wrapper_CmdWriteAccelerationStructuresPropertiesKHR(...) "wrapper_CmdWriteAccelerationStructuresPropertiesKHR"
#define VK_ID_CmdWriteAccelerationStructuresPropertiesNV 397
#define IS_VK_ID_CmdWriteAccelerationStructuresPropertiesNV_ON(masks) (((masks).f6 & (1ULL << (13))) != 0)
#define SET_VK_ID_CmdWriteAccelerationStructuresPropertiesNV_ON(masks) (masks).f6 |= (1ULL << (13))
#define VK_ID_CmdWriteAccelerationStructuresPropertiesNV_BIT (1ULL << (13))
#define VK_ID_CmdWriteAccelerationStructuresPropertiesNV_IDX (6)

#define PRINT_CmdWriteAccelerationStructuresPropertiesNV IS_VK_ID_CmdWriteAccelerationStructuresPropertiesNV_ON(wrapper_printer_masks)
#define TRY_CmdWriteAccelerationStructuresPropertiesNV(TRUE, FALSE) TRUE
#define has_device_wrapper_CmdWriteAccelerationStructuresPropertiesNV(...) (wrapper_device_entrypoints.CmdWriteAccelerationStructuresPropertiesNV)
#define has_physical_device_wrapper_CmdWriteAccelerationStructuresPropertiesNV(...) (wrapper_physical_device_entrypoints.CmdWriteAccelerationStructuresPropertiesNV)
#define name_of_wrapper_CmdWriteAccelerationStructuresPropertiesNV(...) "wrapper_CmdWriteAccelerationStructuresPropertiesNV"
#define VK_ID_CmdBuildAccelerationStructureNV 398
#define IS_VK_ID_CmdBuildAccelerationStructureNV_ON(masks) (((masks).f6 & (1ULL << (14))) != 0)
#define SET_VK_ID_CmdBuildAccelerationStructureNV_ON(masks) (masks).f6 |= (1ULL << (14))
#define VK_ID_CmdBuildAccelerationStructureNV_BIT (1ULL << (14))
#define VK_ID_CmdBuildAccelerationStructureNV_IDX (6)

#define PRINT_CmdBuildAccelerationStructureNV IS_VK_ID_CmdBuildAccelerationStructureNV_ON(wrapper_printer_masks)
#define TRY_CmdBuildAccelerationStructureNV(TRUE, FALSE) TRUE
#define has_device_wrapper_CmdBuildAccelerationStructureNV(...) (wrapper_device_entrypoints.CmdBuildAccelerationStructureNV)
#define has_physical_device_wrapper_CmdBuildAccelerationStructureNV(...) (wrapper_physical_device_entrypoints.CmdBuildAccelerationStructureNV)
#define name_of_wrapper_CmdBuildAccelerationStructureNV(...) "wrapper_CmdBuildAccelerationStructureNV"
#define VK_ID_WriteAccelerationStructuresPropertiesKHR 399
#define IS_VK_ID_WriteAccelerationStructuresPropertiesKHR_ON(masks) (((masks).f6 & (1ULL << (15))) != 0)
#define SET_VK_ID_WriteAccelerationStructuresPropertiesKHR_ON(masks) (masks).f6 |= (1ULL << (15))
#define VK_ID_WriteAccelerationStructuresPropertiesKHR_BIT (1ULL << (15))
#define VK_ID_WriteAccelerationStructuresPropertiesKHR_IDX (6)

#define PRINT_WriteAccelerationStructuresPropertiesKHR IS_VK_ID_WriteAccelerationStructuresPropertiesKHR_ON(wrapper_printer_masks)
#define TRY_WriteAccelerationStructuresPropertiesKHR(TRUE, FALSE) TRUE
#define has_device_wrapper_WriteAccelerationStructuresPropertiesKHR(...) (wrapper_device_entrypoints.WriteAccelerationStructuresPropertiesKHR)
#define has_physical_device_wrapper_WriteAccelerationStructuresPropertiesKHR(...) (wrapper_physical_device_entrypoints.WriteAccelerationStructuresPropertiesKHR)
#define name_of_wrapper_WriteAccelerationStructuresPropertiesKHR(...) "wrapper_WriteAccelerationStructuresPropertiesKHR"
#define VK_ID_CmdTraceRaysKHR 400
#define IS_VK_ID_CmdTraceRaysKHR_ON(masks) (((masks).f6 & (1ULL << (16))) != 0)
#define SET_VK_ID_CmdTraceRaysKHR_ON(masks) (masks).f6 |= (1ULL << (16))
#define VK_ID_CmdTraceRaysKHR_BIT (1ULL << (16))
#define VK_ID_CmdTraceRaysKHR_IDX (6)

#define PRINT_CmdTraceRaysKHR IS_VK_ID_CmdTraceRaysKHR_ON(wrapper_printer_masks)
#define TRY_CmdTraceRaysKHR(TRUE, FALSE) TRUE
#define has_device_wrapper_CmdTraceRaysKHR(...) (wrapper_device_entrypoints.CmdTraceRaysKHR)
#define has_physical_device_wrapper_CmdTraceRaysKHR(...) (wrapper_physical_device_entrypoints.CmdTraceRaysKHR)
#define name_of_wrapper_CmdTraceRaysKHR(...) "wrapper_CmdTraceRaysKHR"
#define VK_ID_CmdTraceRaysNV 401
#define IS_VK_ID_CmdTraceRaysNV_ON(masks) (((masks).f6 & (1ULL << (17))) != 0)
#define SET_VK_ID_CmdTraceRaysNV_ON(masks) (masks).f6 |= (1ULL << (17))
#define VK_ID_CmdTraceRaysNV_BIT (1ULL << (17))
#define VK_ID_CmdTraceRaysNV_IDX (6)

#define PRINT_CmdTraceRaysNV IS_VK_ID_CmdTraceRaysNV_ON(wrapper_printer_masks)
#define TRY_CmdTraceRaysNV(TRUE, FALSE) TRUE
#define has_device_wrapper_CmdTraceRaysNV(...) (wrapper_device_entrypoints.CmdTraceRaysNV)
#define has_physical_device_wrapper_CmdTraceRaysNV(...) (wrapper_physical_device_entrypoints.CmdTraceRaysNV)
#define name_of_wrapper_CmdTraceRaysNV(...) "wrapper_CmdTraceRaysNV"
#define VK_ID_GetRayTracingShaderGroupHandlesKHR 402
#define IS_VK_ID_GetRayTracingShaderGroupHandlesKHR_ON(masks) (((masks).f6 & (1ULL << (18))) != 0)
#define SET_VK_ID_GetRayTracingShaderGroupHandlesKHR_ON(masks) (masks).f6 |= (1ULL << (18))
#define VK_ID_GetRayTracingShaderGroupHandlesKHR_BIT (1ULL << (18))
#define VK_ID_GetRayTracingShaderGroupHandlesKHR_IDX (6)

#define PRINT_GetRayTracingShaderGroupHandlesKHR IS_VK_ID_GetRayTracingShaderGroupHandlesKHR_ON(wrapper_printer_masks)
#define TRY_GetRayTracingShaderGroupHandlesKHR(TRUE, FALSE) TRUE
#define has_device_wrapper_GetRayTracingShaderGroupHandlesKHR(...) (wrapper_device_entrypoints.GetRayTracingShaderGroupHandlesKHR)
#define has_physical_device_wrapper_GetRayTracingShaderGroupHandlesKHR(...) (wrapper_physical_device_entrypoints.GetRayTracingShaderGroupHandlesKHR)
#define name_of_wrapper_GetRayTracingShaderGroupHandlesKHR(...) "wrapper_GetRayTracingShaderGroupHandlesKHR"
#define VK_ID_GetRayTracingCaptureReplayShaderGroupHandlesKHR 404
#define IS_VK_ID_GetRayTracingCaptureReplayShaderGroupHandlesKHR_ON(masks) (((masks).f6 & (1ULL << (20))) != 0)
#define SET_VK_ID_GetRayTracingCaptureReplayShaderGroupHandlesKHR_ON(masks) (masks).f6 |= (1ULL << (20))
#define VK_ID_GetRayTracingCaptureReplayShaderGroupHandlesKHR_BIT (1ULL << (20))
#define VK_ID_GetRayTracingCaptureReplayShaderGroupHandlesKHR_IDX (6)

#define PRINT_GetRayTracingCaptureReplayShaderGroupHandlesKHR IS_VK_ID_GetRayTracingCaptureReplayShaderGroupHandlesKHR_ON(wrapper_printer_masks)
#define TRY_GetRayTracingCaptureReplayShaderGroupHandlesKHR(TRUE, FALSE) TRUE
#define has_device_wrapper_GetRayTracingCaptureReplayShaderGroupHandlesKHR(...) (wrapper_device_entrypoints.GetRayTracingCaptureReplayShaderGroupHandlesKHR)
#define has_physical_device_wrapper_GetRayTracingCaptureReplayShaderGroupHandlesKHR(...) (wrapper_physical_device_entrypoints.GetRayTracingCaptureReplayShaderGroupHandlesKHR)
#define name_of_wrapper_GetRayTracingCaptureReplayShaderGroupHandlesKHR(...) "wrapper_GetRayTracingCaptureReplayShaderGroupHandlesKHR"
#define VK_ID_GetAccelerationStructureHandleNV 405
#define IS_VK_ID_GetAccelerationStructureHandleNV_ON(masks) (((masks).f6 & (1ULL << (21))) != 0)
#define SET_VK_ID_GetAccelerationStructureHandleNV_ON(masks) (masks).f6 |= (1ULL << (21))
#define VK_ID_GetAccelerationStructureHandleNV_BIT (1ULL << (21))
#define VK_ID_GetAccelerationStructureHandleNV_IDX (6)

#define PRINT_GetAccelerationStructureHandleNV IS_VK_ID_GetAccelerationStructureHandleNV_ON(wrapper_printer_masks)
#define TRY_GetAccelerationStructureHandleNV(TRUE, FALSE) TRUE
#define has_device_wrapper_GetAccelerationStructureHandleNV(...) (wrapper_device_entrypoints.GetAccelerationStructureHandleNV)
#define has_physical_device_wrapper_GetAccelerationStructureHandleNV(...) (wrapper_physical_device_entrypoints.GetAccelerationStructureHandleNV)
#define name_of_wrapper_GetAccelerationStructureHandleNV(...) "wrapper_GetAccelerationStructureHandleNV"
#define VK_ID_CreateRayTracingPipelinesNV 406
#define IS_VK_ID_CreateRayTracingPipelinesNV_ON(masks) (((masks).f6 & (1ULL << (22))) != 0)
#define SET_VK_ID_CreateRayTracingPipelinesNV_ON(masks) (masks).f6 |= (1ULL << (22))
#define VK_ID_CreateRayTracingPipelinesNV_BIT (1ULL << (22))
#define VK_ID_CreateRayTracingPipelinesNV_IDX (6)

#define PRINT_CreateRayTracingPipelinesNV IS_VK_ID_CreateRayTracingPipelinesNV_ON(wrapper_printer_masks)
#define TRY_CreateRayTracingPipelinesNV(TRUE, FALSE) TRUE
#define has_device_wrapper_CreateRayTracingPipelinesNV(...) (wrapper_device_entrypoints.CreateRayTracingPipelinesNV)
#define has_physical_device_wrapper_CreateRayTracingPipelinesNV(...) (wrapper_physical_device_entrypoints.CreateRayTracingPipelinesNV)
#define name_of_wrapper_CreateRayTracingPipelinesNV(...) "wrapper_CreateRayTracingPipelinesNV"
#define VK_ID_CreateRayTracingPipelinesKHR 407
#define IS_VK_ID_CreateRayTracingPipelinesKHR_ON(masks) (((masks).f6 & (1ULL << (23))) != 0)
#define SET_VK_ID_CreateRayTracingPipelinesKHR_ON(masks) (masks).f6 |= (1ULL << (23))
#define VK_ID_CreateRayTracingPipelinesKHR_BIT (1ULL << (23))
#define VK_ID_CreateRayTracingPipelinesKHR_IDX (6)

#define PRINT_CreateRayTracingPipelinesKHR IS_VK_ID_CreateRayTracingPipelinesKHR_ON(wrapper_printer_masks)
#define TRY_CreateRayTracingPipelinesKHR(TRUE, FALSE) TRUE
#define has_device_wrapper_CreateRayTracingPipelinesKHR(...) (wrapper_device_entrypoints.CreateRayTracingPipelinesKHR)
#define has_physical_device_wrapper_CreateRayTracingPipelinesKHR(...) (wrapper_physical_device_entrypoints.CreateRayTracingPipelinesKHR)
#define name_of_wrapper_CreateRayTracingPipelinesKHR(...) "wrapper_CreateRayTracingPipelinesKHR"
#define VK_ID_GetPhysicalDeviceCooperativeMatrixPropertiesNV 408
#define IS_VK_ID_GetPhysicalDeviceCooperativeMatrixPropertiesNV_ON(masks) (((masks).f6 & (1ULL << (24))) != 0)
#define SET_VK_ID_GetPhysicalDeviceCooperativeMatrixPropertiesNV_ON(masks) (masks).f6 |= (1ULL << (24))
#define VK_ID_GetPhysicalDeviceCooperativeMatrixPropertiesNV_BIT (1ULL << (24))
#define VK_ID_GetPhysicalDeviceCooperativeMatrixPropertiesNV_IDX (6)

#define PRINT_GetPhysicalDeviceCooperativeMatrixPropertiesNV IS_VK_ID_GetPhysicalDeviceCooperativeMatrixPropertiesNV_ON(wrapper_printer_masks)
#define TRY_GetPhysicalDeviceCooperativeMatrixPropertiesNV(TRUE, FALSE) TRUE
#define has_device_wrapper_GetPhysicalDeviceCooperativeMatrixPropertiesNV(...) (wrapper_device_entrypoints.GetPhysicalDeviceCooperativeMatrixPropertiesNV)
#define has_physical_device_wrapper_GetPhysicalDeviceCooperativeMatrixPropertiesNV(...) (wrapper_physical_device_entrypoints.GetPhysicalDeviceCooperativeMatrixPropertiesNV)
#define name_of_wrapper_GetPhysicalDeviceCooperativeMatrixPropertiesNV(...) "wrapper_GetPhysicalDeviceCooperativeMatrixPropertiesNV"
#define VK_ID_CmdTraceRaysIndirectKHR 409
#define IS_VK_ID_CmdTraceRaysIndirectKHR_ON(masks) (((masks).f6 & (1ULL << (25))) != 0)
#define SET_VK_ID_CmdTraceRaysIndirectKHR_ON(masks) (masks).f6 |= (1ULL << (25))
#define VK_ID_CmdTraceRaysIndirectKHR_BIT (1ULL << (25))
#define VK_ID_CmdTraceRaysIndirectKHR_IDX (6)

#define PRINT_CmdTraceRaysIndirectKHR IS_VK_ID_CmdTraceRaysIndirectKHR_ON(wrapper_printer_masks)
#define TRY_CmdTraceRaysIndirectKHR(TRUE, FALSE) TRUE
#define has_device_wrapper_CmdTraceRaysIndirectKHR(...) (wrapper_device_entrypoints.CmdTraceRaysIndirectKHR)
#define has_physical_device_wrapper_CmdTraceRaysIndirectKHR(...) (wrapper_physical_device_entrypoints.CmdTraceRaysIndirectKHR)
#define name_of_wrapper_CmdTraceRaysIndirectKHR(...) "wrapper_CmdTraceRaysIndirectKHR"
#define VK_ID_CmdTraceRaysIndirect2KHR 410
#define IS_VK_ID_CmdTraceRaysIndirect2KHR_ON(masks) (((masks).f6 & (1ULL << (26))) != 0)
#define SET_VK_ID_CmdTraceRaysIndirect2KHR_ON(masks) (masks).f6 |= (1ULL << (26))
#define VK_ID_CmdTraceRaysIndirect2KHR_BIT (1ULL << (26))
#define VK_ID_CmdTraceRaysIndirect2KHR_IDX (6)

#define PRINT_CmdTraceRaysIndirect2KHR IS_VK_ID_CmdTraceRaysIndirect2KHR_ON(wrapper_printer_masks)
#define TRY_CmdTraceRaysIndirect2KHR(TRUE, FALSE) TRUE
#define has_device_wrapper_CmdTraceRaysIndirect2KHR(...) (wrapper_device_entrypoints.CmdTraceRaysIndirect2KHR)
#define has_physical_device_wrapper_CmdTraceRaysIndirect2KHR(...) (wrapper_physical_device_entrypoints.CmdTraceRaysIndirect2KHR)
#define name_of_wrapper_CmdTraceRaysIndirect2KHR(...) "wrapper_CmdTraceRaysIndirect2KHR"
#define VK_ID_GetDeviceAccelerationStructureCompatibilityKHR 411
#define IS_VK_ID_GetDeviceAccelerationStructureCompatibilityKHR_ON(masks) (((masks).f6 & (1ULL << (27))) != 0)
#define SET_VK_ID_GetDeviceAccelerationStructureCompatibilityKHR_ON(masks) (masks).f6 |= (1ULL << (27))
#define VK_ID_GetDeviceAccelerationStructureCompatibilityKHR_BIT (1ULL << (27))
#define VK_ID_GetDeviceAccelerationStructureCompatibilityKHR_IDX (6)

#define PRINT_GetDeviceAccelerationStructureCompatibilityKHR IS_VK_ID_GetDeviceAccelerationStructureCompatibilityKHR_ON(wrapper_printer_masks)
#define TRY_GetDeviceAccelerationStructureCompatibilityKHR(TRUE, FALSE) TRUE
#define has_device_wrapper_GetDeviceAccelerationStructureCompatibilityKHR(...) (wrapper_device_entrypoints.GetDeviceAccelerationStructureCompatibilityKHR)
#define has_physical_device_wrapper_GetDeviceAccelerationStructureCompatibilityKHR(...) (wrapper_physical_device_entrypoints.GetDeviceAccelerationStructureCompatibilityKHR)
#define name_of_wrapper_GetDeviceAccelerationStructureCompatibilityKHR(...) "wrapper_GetDeviceAccelerationStructureCompatibilityKHR"
#define VK_ID_GetRayTracingShaderGroupStackSizeKHR 412
#define IS_VK_ID_GetRayTracingShaderGroupStackSizeKHR_ON(masks) (((masks).f6 & (1ULL << (28))) != 0)
#define SET_VK_ID_GetRayTracingShaderGroupStackSizeKHR_ON(masks) (masks).f6 |= (1ULL << (28))
#define VK_ID_GetRayTracingShaderGroupStackSizeKHR_BIT (1ULL << (28))
#define VK_ID_GetRayTracingShaderGroupStackSizeKHR_IDX (6)

#define PRINT_GetRayTracingShaderGroupStackSizeKHR IS_VK_ID_GetRayTracingShaderGroupStackSizeKHR_ON(wrapper_printer_masks)
#define TRY_GetRayTracingShaderGroupStackSizeKHR(TRUE, FALSE) TRUE
#define has_device_wrapper_GetRayTracingShaderGroupStackSizeKHR(...) (wrapper_device_entrypoints.GetRayTracingShaderGroupStackSizeKHR)
#define has_physical_device_wrapper_GetRayTracingShaderGroupStackSizeKHR(...) (wrapper_physical_device_entrypoints.GetRayTracingShaderGroupStackSizeKHR)
#define name_of_wrapper_GetRayTracingShaderGroupStackSizeKHR(...) "wrapper_GetRayTracingShaderGroupStackSizeKHR"
#define VK_ID_CmdSetRayTracingPipelineStackSizeKHR 413
#define IS_VK_ID_CmdSetRayTracingPipelineStackSizeKHR_ON(masks) (((masks).f6 & (1ULL << (29))) != 0)
#define SET_VK_ID_CmdSetRayTracingPipelineStackSizeKHR_ON(masks) (masks).f6 |= (1ULL << (29))
#define VK_ID_CmdSetRayTracingPipelineStackSizeKHR_BIT (1ULL << (29))
#define VK_ID_CmdSetRayTracingPipelineStackSizeKHR_IDX (6)

#define PRINT_CmdSetRayTracingPipelineStackSizeKHR IS_VK_ID_CmdSetRayTracingPipelineStackSizeKHR_ON(wrapper_printer_masks)
#define TRY_CmdSetRayTracingPipelineStackSizeKHR(TRUE, FALSE) TRUE
#define has_device_wrapper_CmdSetRayTracingPipelineStackSizeKHR(...) (wrapper_device_entrypoints.CmdSetRayTracingPipelineStackSizeKHR)
#define has_physical_device_wrapper_CmdSetRayTracingPipelineStackSizeKHR(...) (wrapper_physical_device_entrypoints.CmdSetRayTracingPipelineStackSizeKHR)
#define name_of_wrapper_CmdSetRayTracingPipelineStackSizeKHR(...) "wrapper_CmdSetRayTracingPipelineStackSizeKHR"
#define VK_ID_GetImageViewHandleNVX 414
#define IS_VK_ID_GetImageViewHandleNVX_ON(masks) (((masks).f6 & (1ULL << (30))) != 0)
#define SET_VK_ID_GetImageViewHandleNVX_ON(masks) (masks).f6 |= (1ULL << (30))
#define VK_ID_GetImageViewHandleNVX_BIT (1ULL << (30))
#define VK_ID_GetImageViewHandleNVX_IDX (6)

#define PRINT_GetImageViewHandleNVX IS_VK_ID_GetImageViewHandleNVX_ON(wrapper_printer_masks)
#define TRY_GetImageViewHandleNVX(TRUE, FALSE) TRUE
#define has_device_wrapper_GetImageViewHandleNVX(...) (wrapper_device_entrypoints.GetImageViewHandleNVX)
#define has_physical_device_wrapper_GetImageViewHandleNVX(...) (wrapper_physical_device_entrypoints.GetImageViewHandleNVX)
#define name_of_wrapper_GetImageViewHandleNVX(...) "wrapper_GetImageViewHandleNVX"
#define VK_ID_GetImageViewAddressNVX 415
#define IS_VK_ID_GetImageViewAddressNVX_ON(masks) (((masks).f6 & (1ULL << (31))) != 0)
#define SET_VK_ID_GetImageViewAddressNVX_ON(masks) (masks).f6 |= (1ULL << (31))
#define VK_ID_GetImageViewAddressNVX_BIT (1ULL << (31))
#define VK_ID_GetImageViewAddressNVX_IDX (6)

#define PRINT_GetImageViewAddressNVX IS_VK_ID_GetImageViewAddressNVX_ON(wrapper_printer_masks)
#define TRY_GetImageViewAddressNVX(TRUE, FALSE) TRUE
#define has_device_wrapper_GetImageViewAddressNVX(...) (wrapper_device_entrypoints.GetImageViewAddressNVX)
#define has_physical_device_wrapper_GetImageViewAddressNVX(...) (wrapper_physical_device_entrypoints.GetImageViewAddressNVX)
#define name_of_wrapper_GetImageViewAddressNVX(...) "wrapper_GetImageViewAddressNVX"
#ifdef VK_USE_PLATFORM_WIN32_KHR
#define VK_ID_GetPhysicalDeviceSurfacePresentModes2EXT 416
#define IS_VK_ID_GetPhysicalDeviceSurfacePresentModes2EXT_ON(masks) (((masks).f6 & (1ULL << (32))) != 0)
#define SET_VK_ID_GetPhysicalDeviceSurfacePresentModes2EXT_ON(masks) (masks).f6 |= (1ULL << (32))
#define VK_ID_GetPhysicalDeviceSurfacePresentModes2EXT_BIT (1ULL << (32))
#define VK_ID_GetPhysicalDeviceSurfacePresentModes2EXT_IDX (6)

#define PRINT_GetPhysicalDeviceSurfacePresentModes2EXT IS_VK_ID_GetPhysicalDeviceSurfacePresentModes2EXT_ON(wrapper_printer_masks)
#define TRY_GetPhysicalDeviceSurfacePresentModes2EXT(TRUE, FALSE) TRUE
#define has_device_wrapper_GetPhysicalDeviceSurfacePresentModes2EXT(...) (wrapper_device_entrypoints.GetPhysicalDeviceSurfacePresentModes2EXT)
#define has_physical_device_wrapper_GetPhysicalDeviceSurfacePresentModes2EXT(...) (wrapper_physical_device_entrypoints.GetPhysicalDeviceSurfacePresentModes2EXT)
#define name_of_wrapper_GetPhysicalDeviceSurfacePresentModes2EXT(...) "wrapper_GetPhysicalDeviceSurfacePresentModes2EXT"
#else
#define TRY_GetPhysicalDeviceSurfacePresentModes2EXT(TRUE, FALSE) FALSE
#endif
#ifdef VK_USE_PLATFORM_WIN32_KHR
#define VK_ID_GetDeviceGroupSurfacePresentModes2EXT 417
#define IS_VK_ID_GetDeviceGroupSurfacePresentModes2EXT_ON(masks) (((masks).f6 & (1ULL << (33))) != 0)
#define SET_VK_ID_GetDeviceGroupSurfacePresentModes2EXT_ON(masks) (masks).f6 |= (1ULL << (33))
#define VK_ID_GetDeviceGroupSurfacePresentModes2EXT_BIT (1ULL << (33))
#define VK_ID_GetDeviceGroupSurfacePresentModes2EXT_IDX (6)

#define PRINT_GetDeviceGroupSurfacePresentModes2EXT IS_VK_ID_GetDeviceGroupSurfacePresentModes2EXT_ON(wrapper_printer_masks)
#define TRY_GetDeviceGroupSurfacePresentModes2EXT(TRUE, FALSE) TRUE
#define has_device_wrapper_GetDeviceGroupSurfacePresentModes2EXT(...) (wrapper_device_entrypoints.GetDeviceGroupSurfacePresentModes2EXT)
#define has_physical_device_wrapper_GetDeviceGroupSurfacePresentModes2EXT(...) (wrapper_physical_device_entrypoints.GetDeviceGroupSurfacePresentModes2EXT)
#define name_of_wrapper_GetDeviceGroupSurfacePresentModes2EXT(...) "wrapper_GetDeviceGroupSurfacePresentModes2EXT"
#else
#define TRY_GetDeviceGroupSurfacePresentModes2EXT(TRUE, FALSE) FALSE
#endif
#ifdef VK_USE_PLATFORM_WIN32_KHR
#define VK_ID_AcquireFullScreenExclusiveModeEXT 418
#define IS_VK_ID_AcquireFullScreenExclusiveModeEXT_ON(masks) (((masks).f6 & (1ULL << (34))) != 0)
#define SET_VK_ID_AcquireFullScreenExclusiveModeEXT_ON(masks) (masks).f6 |= (1ULL << (34))
#define VK_ID_AcquireFullScreenExclusiveModeEXT_BIT (1ULL << (34))
#define VK_ID_AcquireFullScreenExclusiveModeEXT_IDX (6)

#define PRINT_AcquireFullScreenExclusiveModeEXT IS_VK_ID_AcquireFullScreenExclusiveModeEXT_ON(wrapper_printer_masks)
#define TRY_AcquireFullScreenExclusiveModeEXT(TRUE, FALSE) TRUE
#define has_device_wrapper_AcquireFullScreenExclusiveModeEXT(...) (wrapper_device_entrypoints.AcquireFullScreenExclusiveModeEXT)
#define has_physical_device_wrapper_AcquireFullScreenExclusiveModeEXT(...) (wrapper_physical_device_entrypoints.AcquireFullScreenExclusiveModeEXT)
#define name_of_wrapper_AcquireFullScreenExclusiveModeEXT(...) "wrapper_AcquireFullScreenExclusiveModeEXT"
#else
#define TRY_AcquireFullScreenExclusiveModeEXT(TRUE, FALSE) FALSE
#endif
#ifdef VK_USE_PLATFORM_WIN32_KHR
#define VK_ID_ReleaseFullScreenExclusiveModeEXT 419
#define IS_VK_ID_ReleaseFullScreenExclusiveModeEXT_ON(masks) (((masks).f6 & (1ULL << (35))) != 0)
#define SET_VK_ID_ReleaseFullScreenExclusiveModeEXT_ON(masks) (masks).f6 |= (1ULL << (35))
#define VK_ID_ReleaseFullScreenExclusiveModeEXT_BIT (1ULL << (35))
#define VK_ID_ReleaseFullScreenExclusiveModeEXT_IDX (6)

#define PRINT_ReleaseFullScreenExclusiveModeEXT IS_VK_ID_ReleaseFullScreenExclusiveModeEXT_ON(wrapper_printer_masks)
#define TRY_ReleaseFullScreenExclusiveModeEXT(TRUE, FALSE) TRUE
#define has_device_wrapper_ReleaseFullScreenExclusiveModeEXT(...) (wrapper_device_entrypoints.ReleaseFullScreenExclusiveModeEXT)
#define has_physical_device_wrapper_ReleaseFullScreenExclusiveModeEXT(...) (wrapper_physical_device_entrypoints.ReleaseFullScreenExclusiveModeEXT)
#define name_of_wrapper_ReleaseFullScreenExclusiveModeEXT(...) "wrapper_ReleaseFullScreenExclusiveModeEXT"
#else
#define TRY_ReleaseFullScreenExclusiveModeEXT(TRUE, FALSE) FALSE
#endif
#define VK_ID_EnumeratePhysicalDeviceQueueFamilyPerformanceQueryCountersKHR 420
#define IS_VK_ID_EnumeratePhysicalDeviceQueueFamilyPerformanceQueryCountersKHR_ON(masks) (((masks).f6 & (1ULL << (36))) != 0)
#define SET_VK_ID_EnumeratePhysicalDeviceQueueFamilyPerformanceQueryCountersKHR_ON(masks) (masks).f6 |= (1ULL << (36))
#define VK_ID_EnumeratePhysicalDeviceQueueFamilyPerformanceQueryCountersKHR_BIT (1ULL << (36))
#define VK_ID_EnumeratePhysicalDeviceQueueFamilyPerformanceQueryCountersKHR_IDX (6)

#define PRINT_EnumeratePhysicalDeviceQueueFamilyPerformanceQueryCountersKHR IS_VK_ID_EnumeratePhysicalDeviceQueueFamilyPerformanceQueryCountersKHR_ON(wrapper_printer_masks)
#define TRY_EnumeratePhysicalDeviceQueueFamilyPerformanceQueryCountersKHR(TRUE, FALSE) TRUE
#define has_device_wrapper_EnumeratePhysicalDeviceQueueFamilyPerformanceQueryCountersKHR(...) (wrapper_device_entrypoints.EnumeratePhysicalDeviceQueueFamilyPerformanceQueryCountersKHR)
#define has_physical_device_wrapper_EnumeratePhysicalDeviceQueueFamilyPerformanceQueryCountersKHR(...) (wrapper_physical_device_entrypoints.EnumeratePhysicalDeviceQueueFamilyPerformanceQueryCountersKHR)
#define name_of_wrapper_EnumeratePhysicalDeviceQueueFamilyPerformanceQueryCountersKHR(...) "wrapper_EnumeratePhysicalDeviceQueueFamilyPerformanceQueryCountersKHR"
#define VK_ID_GetPhysicalDeviceQueueFamilyPerformanceQueryPassesKHR 421
#define IS_VK_ID_GetPhysicalDeviceQueueFamilyPerformanceQueryPassesKHR_ON(masks) (((masks).f6 & (1ULL << (37))) != 0)
#define SET_VK_ID_GetPhysicalDeviceQueueFamilyPerformanceQueryPassesKHR_ON(masks) (masks).f6 |= (1ULL << (37))
#define VK_ID_GetPhysicalDeviceQueueFamilyPerformanceQueryPassesKHR_BIT (1ULL << (37))
#define VK_ID_GetPhysicalDeviceQueueFamilyPerformanceQueryPassesKHR_IDX (6)

#define PRINT_GetPhysicalDeviceQueueFamilyPerformanceQueryPassesKHR IS_VK_ID_GetPhysicalDeviceQueueFamilyPerformanceQueryPassesKHR_ON(wrapper_printer_masks)
#define TRY_GetPhysicalDeviceQueueFamilyPerformanceQueryPassesKHR(TRUE, FALSE) TRUE
#define has_device_wrapper_GetPhysicalDeviceQueueFamilyPerformanceQueryPassesKHR(...) (wrapper_device_entrypoints.GetPhysicalDeviceQueueFamilyPerformanceQueryPassesKHR)
#define has_physical_device_wrapper_GetPhysicalDeviceQueueFamilyPerformanceQueryPassesKHR(...) (wrapper_physical_device_entrypoints.GetPhysicalDeviceQueueFamilyPerformanceQueryPassesKHR)
#define name_of_wrapper_GetPhysicalDeviceQueueFamilyPerformanceQueryPassesKHR(...) "wrapper_GetPhysicalDeviceQueueFamilyPerformanceQueryPassesKHR"
#define VK_ID_AcquireProfilingLockKHR 422
#define IS_VK_ID_AcquireProfilingLockKHR_ON(masks) (((masks).f6 & (1ULL << (38))) != 0)
#define SET_VK_ID_AcquireProfilingLockKHR_ON(masks) (masks).f6 |= (1ULL << (38))
#define VK_ID_AcquireProfilingLockKHR_BIT (1ULL << (38))
#define VK_ID_AcquireProfilingLockKHR_IDX (6)

#define PRINT_AcquireProfilingLockKHR IS_VK_ID_AcquireProfilingLockKHR_ON(wrapper_printer_masks)
#define TRY_AcquireProfilingLockKHR(TRUE, FALSE) TRUE
#define has_device_wrapper_AcquireProfilingLockKHR(...) (wrapper_device_entrypoints.AcquireProfilingLockKHR)
#define has_physical_device_wrapper_AcquireProfilingLockKHR(...) (wrapper_physical_device_entrypoints.AcquireProfilingLockKHR)
#define name_of_wrapper_AcquireProfilingLockKHR(...) "wrapper_AcquireProfilingLockKHR"
#define VK_ID_ReleaseProfilingLockKHR 423
#define IS_VK_ID_ReleaseProfilingLockKHR_ON(masks) (((masks).f6 & (1ULL << (39))) != 0)
#define SET_VK_ID_ReleaseProfilingLockKHR_ON(masks) (masks).f6 |= (1ULL << (39))
#define VK_ID_ReleaseProfilingLockKHR_BIT (1ULL << (39))
#define VK_ID_ReleaseProfilingLockKHR_IDX (6)

#define PRINT_ReleaseProfilingLockKHR IS_VK_ID_ReleaseProfilingLockKHR_ON(wrapper_printer_masks)
#define TRY_ReleaseProfilingLockKHR(TRUE, FALSE) TRUE
#define has_device_wrapper_ReleaseProfilingLockKHR(...) (wrapper_device_entrypoints.ReleaseProfilingLockKHR)
#define has_physical_device_wrapper_ReleaseProfilingLockKHR(...) (wrapper_physical_device_entrypoints.ReleaseProfilingLockKHR)
#define name_of_wrapper_ReleaseProfilingLockKHR(...) "wrapper_ReleaseProfilingLockKHR"
#define VK_ID_GetImageDrmFormatModifierPropertiesEXT 424
#define IS_VK_ID_GetImageDrmFormatModifierPropertiesEXT_ON(masks) (((masks).f6 & (1ULL << (40))) != 0)
#define SET_VK_ID_GetImageDrmFormatModifierPropertiesEXT_ON(masks) (masks).f6 |= (1ULL << (40))
#define VK_ID_GetImageDrmFormatModifierPropertiesEXT_BIT (1ULL << (40))
#define VK_ID_GetImageDrmFormatModifierPropertiesEXT_IDX (6)

#define PRINT_GetImageDrmFormatModifierPropertiesEXT IS_VK_ID_GetImageDrmFormatModifierPropertiesEXT_ON(wrapper_printer_masks)
#define TRY_GetImageDrmFormatModifierPropertiesEXT(TRUE, FALSE) TRUE
#define has_device_wrapper_GetImageDrmFormatModifierPropertiesEXT(...) (wrapper_device_entrypoints.GetImageDrmFormatModifierPropertiesEXT)
#define has_physical_device_wrapper_GetImageDrmFormatModifierPropertiesEXT(...) (wrapper_physical_device_entrypoints.GetImageDrmFormatModifierPropertiesEXT)
#define name_of_wrapper_GetImageDrmFormatModifierPropertiesEXT(...) "wrapper_GetImageDrmFormatModifierPropertiesEXT"
#define VK_ID_GetBufferOpaqueCaptureAddress 425
#define IS_VK_ID_GetBufferOpaqueCaptureAddress_ON(masks) (((masks).f6 & (1ULL << (41))) != 0)
#define SET_VK_ID_GetBufferOpaqueCaptureAddress_ON(masks) (masks).f6 |= (1ULL << (41))
#define VK_ID_GetBufferOpaqueCaptureAddress_BIT (1ULL << (41))
#define VK_ID_GetBufferOpaqueCaptureAddress_IDX (6)

#define PRINT_GetBufferOpaqueCaptureAddress IS_VK_ID_GetBufferOpaqueCaptureAddress_ON(wrapper_printer_masks)
#define TRY_GetBufferOpaqueCaptureAddress(TRUE, FALSE) TRUE
#define has_device_wrapper_GetBufferOpaqueCaptureAddress(...) (wrapper_device_entrypoints.GetBufferOpaqueCaptureAddress)
#define has_physical_device_wrapper_GetBufferOpaqueCaptureAddress(...) (wrapper_physical_device_entrypoints.GetBufferOpaqueCaptureAddress)
#define name_of_wrapper_GetBufferOpaqueCaptureAddress(...) "wrapper_GetBufferOpaqueCaptureAddress"
#define VK_ID_GetBufferDeviceAddress 427
#define IS_VK_ID_GetBufferDeviceAddress_ON(masks) (((masks).f6 & (1ULL << (43))) != 0)
#define SET_VK_ID_GetBufferDeviceAddress_ON(masks) (masks).f6 |= (1ULL << (43))
#define VK_ID_GetBufferDeviceAddress_BIT (1ULL << (43))
#define VK_ID_GetBufferDeviceAddress_IDX (6)

#define PRINT_GetBufferDeviceAddress IS_VK_ID_GetBufferDeviceAddress_ON(wrapper_printer_masks)
#define TRY_GetBufferDeviceAddress(TRUE, FALSE) TRUE
#define has_device_wrapper_GetBufferDeviceAddress(...) (wrapper_device_entrypoints.GetBufferDeviceAddress)
#define has_physical_device_wrapper_GetBufferDeviceAddress(...) (wrapper_physical_device_entrypoints.GetBufferDeviceAddress)
#define name_of_wrapper_GetBufferDeviceAddress(...) "wrapper_GetBufferDeviceAddress"
#define VK_ID_CreateHeadlessSurfaceEXT 430
#define IS_VK_ID_CreateHeadlessSurfaceEXT_ON(masks) (((masks).f6 & (1ULL << (46))) != 0)
#define SET_VK_ID_CreateHeadlessSurfaceEXT_ON(masks) (masks).f6 |= (1ULL << (46))
#define VK_ID_CreateHeadlessSurfaceEXT_BIT (1ULL << (46))
#define VK_ID_CreateHeadlessSurfaceEXT_IDX (6)

#define PRINT_CreateHeadlessSurfaceEXT IS_VK_ID_CreateHeadlessSurfaceEXT_ON(wrapper_printer_masks)
#define TRY_CreateHeadlessSurfaceEXT(TRUE, FALSE) TRUE
#define has_device_wrapper_CreateHeadlessSurfaceEXT(...) (wrapper_device_entrypoints.CreateHeadlessSurfaceEXT)
#define has_physical_device_wrapper_CreateHeadlessSurfaceEXT(...) (wrapper_physical_device_entrypoints.CreateHeadlessSurfaceEXT)
#define name_of_wrapper_CreateHeadlessSurfaceEXT(...) "wrapper_CreateHeadlessSurfaceEXT"
#define VK_ID_GetPhysicalDeviceSupportedFramebufferMixedSamplesCombinationsNV 431
#define IS_VK_ID_GetPhysicalDeviceSupportedFramebufferMixedSamplesCombinationsNV_ON(masks) (((masks).f6 & (1ULL << (47))) != 0)
#define SET_VK_ID_GetPhysicalDeviceSupportedFramebufferMixedSamplesCombinationsNV_ON(masks) (masks).f6 |= (1ULL << (47))
#define VK_ID_GetPhysicalDeviceSupportedFramebufferMixedSamplesCombinationsNV_BIT (1ULL << (47))
#define VK_ID_GetPhysicalDeviceSupportedFramebufferMixedSamplesCombinationsNV_IDX (6)

#define PRINT_GetPhysicalDeviceSupportedFramebufferMixedSamplesCombinationsNV IS_VK_ID_GetPhysicalDeviceSupportedFramebufferMixedSamplesCombinationsNV_ON(wrapper_printer_masks)
#define TRY_GetPhysicalDeviceSupportedFramebufferMixedSamplesCombinationsNV(TRUE, FALSE) TRUE
#define has_device_wrapper_GetPhysicalDeviceSupportedFramebufferMixedSamplesCombinationsNV(...) (wrapper_device_entrypoints.GetPhysicalDeviceSupportedFramebufferMixedSamplesCombinationsNV)
#define has_physical_device_wrapper_GetPhysicalDeviceSupportedFramebufferMixedSamplesCombinationsNV(...) (wrapper_physical_device_entrypoints.GetPhysicalDeviceSupportedFramebufferMixedSamplesCombinationsNV)
#define name_of_wrapper_GetPhysicalDeviceSupportedFramebufferMixedSamplesCombinationsNV(...) "wrapper_GetPhysicalDeviceSupportedFramebufferMixedSamplesCombinationsNV"
#define VK_ID_InitializePerformanceApiINTEL 432
#define IS_VK_ID_InitializePerformanceApiINTEL_ON(masks) (((masks).f6 & (1ULL << (48))) != 0)
#define SET_VK_ID_InitializePerformanceApiINTEL_ON(masks) (masks).f6 |= (1ULL << (48))
#define VK_ID_InitializePerformanceApiINTEL_BIT (1ULL << (48))
#define VK_ID_InitializePerformanceApiINTEL_IDX (6)

#define PRINT_InitializePerformanceApiINTEL IS_VK_ID_InitializePerformanceApiINTEL_ON(wrapper_printer_masks)
#define TRY_InitializePerformanceApiINTEL(TRUE, FALSE) TRUE
#define has_device_wrapper_InitializePerformanceApiINTEL(...) (wrapper_device_entrypoints.InitializePerformanceApiINTEL)
#define has_physical_device_wrapper_InitializePerformanceApiINTEL(...) (wrapper_physical_device_entrypoints.InitializePerformanceApiINTEL)
#define name_of_wrapper_InitializePerformanceApiINTEL(...) "wrapper_InitializePerformanceApiINTEL"
#define VK_ID_UninitializePerformanceApiINTEL 433
#define IS_VK_ID_UninitializePerformanceApiINTEL_ON(masks) (((masks).f6 & (1ULL << (49))) != 0)
#define SET_VK_ID_UninitializePerformanceApiINTEL_ON(masks) (masks).f6 |= (1ULL << (49))
#define VK_ID_UninitializePerformanceApiINTEL_BIT (1ULL << (49))
#define VK_ID_UninitializePerformanceApiINTEL_IDX (6)

#define PRINT_UninitializePerformanceApiINTEL IS_VK_ID_UninitializePerformanceApiINTEL_ON(wrapper_printer_masks)
#define TRY_UninitializePerformanceApiINTEL(TRUE, FALSE) TRUE
#define has_device_wrapper_UninitializePerformanceApiINTEL(...) (wrapper_device_entrypoints.UninitializePerformanceApiINTEL)
#define has_physical_device_wrapper_UninitializePerformanceApiINTEL(...) (wrapper_physical_device_entrypoints.UninitializePerformanceApiINTEL)
#define name_of_wrapper_UninitializePerformanceApiINTEL(...) "wrapper_UninitializePerformanceApiINTEL"
#define VK_ID_CmdSetPerformanceMarkerINTEL 434
#define IS_VK_ID_CmdSetPerformanceMarkerINTEL_ON(masks) (((masks).f6 & (1ULL << (50))) != 0)
#define SET_VK_ID_CmdSetPerformanceMarkerINTEL_ON(masks) (masks).f6 |= (1ULL << (50))
#define VK_ID_CmdSetPerformanceMarkerINTEL_BIT (1ULL << (50))
#define VK_ID_CmdSetPerformanceMarkerINTEL_IDX (6)

#define PRINT_CmdSetPerformanceMarkerINTEL IS_VK_ID_CmdSetPerformanceMarkerINTEL_ON(wrapper_printer_masks)
#define TRY_CmdSetPerformanceMarkerINTEL(TRUE, FALSE) TRUE
#define has_device_wrapper_CmdSetPerformanceMarkerINTEL(...) (wrapper_device_entrypoints.CmdSetPerformanceMarkerINTEL)
#define has_physical_device_wrapper_CmdSetPerformanceMarkerINTEL(...) (wrapper_physical_device_entrypoints.CmdSetPerformanceMarkerINTEL)
#define name_of_wrapper_CmdSetPerformanceMarkerINTEL(...) "wrapper_CmdSetPerformanceMarkerINTEL"
#define VK_ID_CmdSetPerformanceStreamMarkerINTEL 435
#define IS_VK_ID_CmdSetPerformanceStreamMarkerINTEL_ON(masks) (((masks).f6 & (1ULL << (51))) != 0)
#define SET_VK_ID_CmdSetPerformanceStreamMarkerINTEL_ON(masks) (masks).f6 |= (1ULL << (51))
#define VK_ID_CmdSetPerformanceStreamMarkerINTEL_BIT (1ULL << (51))
#define VK_ID_CmdSetPerformanceStreamMarkerINTEL_IDX (6)

#define PRINT_CmdSetPerformanceStreamMarkerINTEL IS_VK_ID_CmdSetPerformanceStreamMarkerINTEL_ON(wrapper_printer_masks)
#define TRY_CmdSetPerformanceStreamMarkerINTEL(TRUE, FALSE) TRUE
#define has_device_wrapper_CmdSetPerformanceStreamMarkerINTEL(...) (wrapper_device_entrypoints.CmdSetPerformanceStreamMarkerINTEL)
#define has_physical_device_wrapper_CmdSetPerformanceStreamMarkerINTEL(...) (wrapper_physical_device_entrypoints.CmdSetPerformanceStreamMarkerINTEL)
#define name_of_wrapper_CmdSetPerformanceStreamMarkerINTEL(...) "wrapper_CmdSetPerformanceStreamMarkerINTEL"
#define VK_ID_CmdSetPerformanceOverrideINTEL 436
#define IS_VK_ID_CmdSetPerformanceOverrideINTEL_ON(masks) (((masks).f6 & (1ULL << (52))) != 0)
#define SET_VK_ID_CmdSetPerformanceOverrideINTEL_ON(masks) (masks).f6 |= (1ULL << (52))
#define VK_ID_CmdSetPerformanceOverrideINTEL_BIT (1ULL << (52))
#define VK_ID_CmdSetPerformanceOverrideINTEL_IDX (6)

#define PRINT_CmdSetPerformanceOverrideINTEL IS_VK_ID_CmdSetPerformanceOverrideINTEL_ON(wrapper_printer_masks)
#define TRY_CmdSetPerformanceOverrideINTEL(TRUE, FALSE) TRUE
#define has_device_wrapper_CmdSetPerformanceOverrideINTEL(...) (wrapper_device_entrypoints.CmdSetPerformanceOverrideINTEL)
#define has_physical_device_wrapper_CmdSetPerformanceOverrideINTEL(...) (wrapper_physical_device_entrypoints.CmdSetPerformanceOverrideINTEL)
#define name_of_wrapper_CmdSetPerformanceOverrideINTEL(...) "wrapper_CmdSetPerformanceOverrideINTEL"
#define VK_ID_AcquirePerformanceConfigurationINTEL 437
#define IS_VK_ID_AcquirePerformanceConfigurationINTEL_ON(masks) (((masks).f6 & (1ULL << (53))) != 0)
#define SET_VK_ID_AcquirePerformanceConfigurationINTEL_ON(masks) (masks).f6 |= (1ULL << (53))
#define VK_ID_AcquirePerformanceConfigurationINTEL_BIT (1ULL << (53))
#define VK_ID_AcquirePerformanceConfigurationINTEL_IDX (6)

#define PRINT_AcquirePerformanceConfigurationINTEL IS_VK_ID_AcquirePerformanceConfigurationINTEL_ON(wrapper_printer_masks)
#define TRY_AcquirePerformanceConfigurationINTEL(TRUE, FALSE) TRUE
#define has_device_wrapper_AcquirePerformanceConfigurationINTEL(...) (wrapper_device_entrypoints.AcquirePerformanceConfigurationINTEL)
#define has_physical_device_wrapper_AcquirePerformanceConfigurationINTEL(...) (wrapper_physical_device_entrypoints.AcquirePerformanceConfigurationINTEL)
#define name_of_wrapper_AcquirePerformanceConfigurationINTEL(...) "wrapper_AcquirePerformanceConfigurationINTEL"
#define VK_ID_ReleasePerformanceConfigurationINTEL 438
#define IS_VK_ID_ReleasePerformanceConfigurationINTEL_ON(masks) (((masks).f6 & (1ULL << (54))) != 0)
#define SET_VK_ID_ReleasePerformanceConfigurationINTEL_ON(masks) (masks).f6 |= (1ULL << (54))
#define VK_ID_ReleasePerformanceConfigurationINTEL_BIT (1ULL << (54))
#define VK_ID_ReleasePerformanceConfigurationINTEL_IDX (6)

#define PRINT_ReleasePerformanceConfigurationINTEL IS_VK_ID_ReleasePerformanceConfigurationINTEL_ON(wrapper_printer_masks)
#define TRY_ReleasePerformanceConfigurationINTEL(TRUE, FALSE) TRUE
#define has_device_wrapper_ReleasePerformanceConfigurationINTEL(...) (wrapper_device_entrypoints.ReleasePerformanceConfigurationINTEL)
#define has_physical_device_wrapper_ReleasePerformanceConfigurationINTEL(...) (wrapper_physical_device_entrypoints.ReleasePerformanceConfigurationINTEL)
#define name_of_wrapper_ReleasePerformanceConfigurationINTEL(...) "wrapper_ReleasePerformanceConfigurationINTEL"
#define VK_ID_QueueSetPerformanceConfigurationINTEL 439
#define IS_VK_ID_QueueSetPerformanceConfigurationINTEL_ON(masks) (((masks).f6 & (1ULL << (55))) != 0)
#define SET_VK_ID_QueueSetPerformanceConfigurationINTEL_ON(masks) (masks).f6 |= (1ULL << (55))
#define VK_ID_QueueSetPerformanceConfigurationINTEL_BIT (1ULL << (55))
#define VK_ID_QueueSetPerformanceConfigurationINTEL_IDX (6)

#define PRINT_QueueSetPerformanceConfigurationINTEL IS_VK_ID_QueueSetPerformanceConfigurationINTEL_ON(wrapper_printer_masks)
#define TRY_QueueSetPerformanceConfigurationINTEL(TRUE, FALSE) TRUE
#define has_device_wrapper_QueueSetPerformanceConfigurationINTEL(...) (wrapper_device_entrypoints.QueueSetPerformanceConfigurationINTEL)
#define has_physical_device_wrapper_QueueSetPerformanceConfigurationINTEL(...) (wrapper_physical_device_entrypoints.QueueSetPerformanceConfigurationINTEL)
#define name_of_wrapper_QueueSetPerformanceConfigurationINTEL(...) "wrapper_QueueSetPerformanceConfigurationINTEL"
#define VK_ID_GetPerformanceParameterINTEL 440
#define IS_VK_ID_GetPerformanceParameterINTEL_ON(masks) (((masks).f6 & (1ULL << (56))) != 0)
#define SET_VK_ID_GetPerformanceParameterINTEL_ON(masks) (masks).f6 |= (1ULL << (56))
#define VK_ID_GetPerformanceParameterINTEL_BIT (1ULL << (56))
#define VK_ID_GetPerformanceParameterINTEL_IDX (6)

#define PRINT_GetPerformanceParameterINTEL IS_VK_ID_GetPerformanceParameterINTEL_ON(wrapper_printer_masks)
#define TRY_GetPerformanceParameterINTEL(TRUE, FALSE) TRUE
#define has_device_wrapper_GetPerformanceParameterINTEL(...) (wrapper_device_entrypoints.GetPerformanceParameterINTEL)
#define has_physical_device_wrapper_GetPerformanceParameterINTEL(...) (wrapper_physical_device_entrypoints.GetPerformanceParameterINTEL)
#define name_of_wrapper_GetPerformanceParameterINTEL(...) "wrapper_GetPerformanceParameterINTEL"
#define VK_ID_GetDeviceMemoryOpaqueCaptureAddress 441
#define IS_VK_ID_GetDeviceMemoryOpaqueCaptureAddress_ON(masks) (((masks).f6 & (1ULL << (57))) != 0)
#define SET_VK_ID_GetDeviceMemoryOpaqueCaptureAddress_ON(masks) (masks).f6 |= (1ULL << (57))
#define VK_ID_GetDeviceMemoryOpaqueCaptureAddress_BIT (1ULL << (57))
#define VK_ID_GetDeviceMemoryOpaqueCaptureAddress_IDX (6)

#define PRINT_GetDeviceMemoryOpaqueCaptureAddress IS_VK_ID_GetDeviceMemoryOpaqueCaptureAddress_ON(wrapper_printer_masks)
#define TRY_GetDeviceMemoryOpaqueCaptureAddress(TRUE, FALSE) TRUE
#define has_device_wrapper_GetDeviceMemoryOpaqueCaptureAddress(...) (wrapper_device_entrypoints.GetDeviceMemoryOpaqueCaptureAddress)
#define has_physical_device_wrapper_GetDeviceMemoryOpaqueCaptureAddress(...) (wrapper_physical_device_entrypoints.GetDeviceMemoryOpaqueCaptureAddress)
#define name_of_wrapper_GetDeviceMemoryOpaqueCaptureAddress(...) "wrapper_GetDeviceMemoryOpaqueCaptureAddress"
#define VK_ID_GetPipelineExecutablePropertiesKHR 443
#define IS_VK_ID_GetPipelineExecutablePropertiesKHR_ON(masks) (((masks).f6 & (1ULL << (59))) != 0)
#define SET_VK_ID_GetPipelineExecutablePropertiesKHR_ON(masks) (masks).f6 |= (1ULL << (59))
#define VK_ID_GetPipelineExecutablePropertiesKHR_BIT (1ULL << (59))
#define VK_ID_GetPipelineExecutablePropertiesKHR_IDX (6)

#define PRINT_GetPipelineExecutablePropertiesKHR IS_VK_ID_GetPipelineExecutablePropertiesKHR_ON(wrapper_printer_masks)
#define TRY_GetPipelineExecutablePropertiesKHR(TRUE, FALSE) TRUE
#define has_device_wrapper_GetPipelineExecutablePropertiesKHR(...) (wrapper_device_entrypoints.GetPipelineExecutablePropertiesKHR)
#define has_physical_device_wrapper_GetPipelineExecutablePropertiesKHR(...) (wrapper_physical_device_entrypoints.GetPipelineExecutablePropertiesKHR)
#define name_of_wrapper_GetPipelineExecutablePropertiesKHR(...) "wrapper_GetPipelineExecutablePropertiesKHR"
#define VK_ID_GetPipelineExecutableStatisticsKHR 444
#define IS_VK_ID_GetPipelineExecutableStatisticsKHR_ON(masks) (((masks).f6 & (1ULL << (60))) != 0)
#define SET_VK_ID_GetPipelineExecutableStatisticsKHR_ON(masks) (masks).f6 |= (1ULL << (60))
#define VK_ID_GetPipelineExecutableStatisticsKHR_BIT (1ULL << (60))
#define VK_ID_GetPipelineExecutableStatisticsKHR_IDX (6)

#define PRINT_GetPipelineExecutableStatisticsKHR IS_VK_ID_GetPipelineExecutableStatisticsKHR_ON(wrapper_printer_masks)
#define TRY_GetPipelineExecutableStatisticsKHR(TRUE, FALSE) TRUE
#define has_device_wrapper_GetPipelineExecutableStatisticsKHR(...) (wrapper_device_entrypoints.GetPipelineExecutableStatisticsKHR)
#define has_physical_device_wrapper_GetPipelineExecutableStatisticsKHR(...) (wrapper_physical_device_entrypoints.GetPipelineExecutableStatisticsKHR)
#define name_of_wrapper_GetPipelineExecutableStatisticsKHR(...) "wrapper_GetPipelineExecutableStatisticsKHR"
#define VK_ID_GetPipelineExecutableInternalRepresentationsKHR 445
#define IS_VK_ID_GetPipelineExecutableInternalRepresentationsKHR_ON(masks) (((masks).f6 & (1ULL << (61))) != 0)
#define SET_VK_ID_GetPipelineExecutableInternalRepresentationsKHR_ON(masks) (masks).f6 |= (1ULL << (61))
#define VK_ID_GetPipelineExecutableInternalRepresentationsKHR_BIT (1ULL << (61))
#define VK_ID_GetPipelineExecutableInternalRepresentationsKHR_IDX (6)

#define PRINT_GetPipelineExecutableInternalRepresentationsKHR IS_VK_ID_GetPipelineExecutableInternalRepresentationsKHR_ON(wrapper_printer_masks)
#define TRY_GetPipelineExecutableInternalRepresentationsKHR(TRUE, FALSE) TRUE
#define has_device_wrapper_GetPipelineExecutableInternalRepresentationsKHR(...) (wrapper_device_entrypoints.GetPipelineExecutableInternalRepresentationsKHR)
#define has_physical_device_wrapper_GetPipelineExecutableInternalRepresentationsKHR(...) (wrapper_physical_device_entrypoints.GetPipelineExecutableInternalRepresentationsKHR)
#define name_of_wrapper_GetPipelineExecutableInternalRepresentationsKHR(...) "wrapper_GetPipelineExecutableInternalRepresentationsKHR"
#define VK_ID_CmdSetLineStippleKHR 446
#define IS_VK_ID_CmdSetLineStippleKHR_ON(masks) (((masks).f6 & (1ULL << (62))) != 0)
#define SET_VK_ID_CmdSetLineStippleKHR_ON(masks) (masks).f6 |= (1ULL << (62))
#define VK_ID_CmdSetLineStippleKHR_BIT (1ULL << (62))
#define VK_ID_CmdSetLineStippleKHR_IDX (6)

#define PRINT_CmdSetLineStippleKHR IS_VK_ID_CmdSetLineStippleKHR_ON(wrapper_printer_masks)
#define TRY_CmdSetLineStippleKHR(TRUE, FALSE) TRUE
#define has_device_wrapper_CmdSetLineStippleKHR(...) (wrapper_device_entrypoints.CmdSetLineStippleKHR)
#define has_physical_device_wrapper_CmdSetLineStippleKHR(...) (wrapper_physical_device_entrypoints.CmdSetLineStippleKHR)
#define name_of_wrapper_CmdSetLineStippleKHR(...) "wrapper_CmdSetLineStippleKHR"
#define VK_ID_GetPhysicalDeviceToolProperties 448
#define IS_VK_ID_GetPhysicalDeviceToolProperties_ON(masks) (((masks).f7 & (1ULL << (0))) != 0)
#define SET_VK_ID_GetPhysicalDeviceToolProperties_ON(masks) (masks).f7 |= (1ULL << (0))
#define VK_ID_GetPhysicalDeviceToolProperties_BIT (1ULL << (0))
#define VK_ID_GetPhysicalDeviceToolProperties_IDX (7)

#define PRINT_GetPhysicalDeviceToolProperties IS_VK_ID_GetPhysicalDeviceToolProperties_ON(wrapper_printer_masks)
#define TRY_GetPhysicalDeviceToolProperties(TRUE, FALSE) TRUE
#define has_device_wrapper_GetPhysicalDeviceToolProperties(...) (wrapper_device_entrypoints.GetPhysicalDeviceToolProperties)
#define has_physical_device_wrapper_GetPhysicalDeviceToolProperties(...) (wrapper_physical_device_entrypoints.GetPhysicalDeviceToolProperties)
#define name_of_wrapper_GetPhysicalDeviceToolProperties(...) "wrapper_GetPhysicalDeviceToolProperties"
#define VK_ID_CreateAccelerationStructureKHR 450
#define IS_VK_ID_CreateAccelerationStructureKHR_ON(masks) (((masks).f7 & (1ULL << (2))) != 0)
#define SET_VK_ID_CreateAccelerationStructureKHR_ON(masks) (masks).f7 |= (1ULL << (2))
#define VK_ID_CreateAccelerationStructureKHR_BIT (1ULL << (2))
#define VK_ID_CreateAccelerationStructureKHR_IDX (7)

#define PRINT_CreateAccelerationStructureKHR IS_VK_ID_CreateAccelerationStructureKHR_ON(wrapper_printer_masks)
#define TRY_CreateAccelerationStructureKHR(TRUE, FALSE) TRUE
#define has_device_wrapper_CreateAccelerationStructureKHR(...) (wrapper_device_entrypoints.CreateAccelerationStructureKHR)
#define has_physical_device_wrapper_CreateAccelerationStructureKHR(...) (wrapper_physical_device_entrypoints.CreateAccelerationStructureKHR)
#define name_of_wrapper_CreateAccelerationStructureKHR(...) "wrapper_CreateAccelerationStructureKHR"
#define VK_ID_CmdBuildAccelerationStructuresKHR 451
#define IS_VK_ID_CmdBuildAccelerationStructuresKHR_ON(masks) (((masks).f7 & (1ULL << (3))) != 0)
#define SET_VK_ID_CmdBuildAccelerationStructuresKHR_ON(masks) (masks).f7 |= (1ULL << (3))
#define VK_ID_CmdBuildAccelerationStructuresKHR_BIT (1ULL << (3))
#define VK_ID_CmdBuildAccelerationStructuresKHR_IDX (7)

#define PRINT_CmdBuildAccelerationStructuresKHR IS_VK_ID_CmdBuildAccelerationStructuresKHR_ON(wrapper_printer_masks)
#define TRY_CmdBuildAccelerationStructuresKHR(TRUE, FALSE) TRUE
#define has_device_wrapper_CmdBuildAccelerationStructuresKHR(...) (wrapper_device_entrypoints.CmdBuildAccelerationStructuresKHR)
#define has_physical_device_wrapper_CmdBuildAccelerationStructuresKHR(...) (wrapper_physical_device_entrypoints.CmdBuildAccelerationStructuresKHR)
#define name_of_wrapper_CmdBuildAccelerationStructuresKHR(...) "wrapper_CmdBuildAccelerationStructuresKHR"
#define VK_ID_CmdBuildAccelerationStructuresIndirectKHR 452
#define IS_VK_ID_CmdBuildAccelerationStructuresIndirectKHR_ON(masks) (((masks).f7 & (1ULL << (4))) != 0)
#define SET_VK_ID_CmdBuildAccelerationStructuresIndirectKHR_ON(masks) (masks).f7 |= (1ULL << (4))
#define VK_ID_CmdBuildAccelerationStructuresIndirectKHR_BIT (1ULL << (4))
#define VK_ID_CmdBuildAccelerationStructuresIndirectKHR_IDX (7)

#define PRINT_CmdBuildAccelerationStructuresIndirectKHR IS_VK_ID_CmdBuildAccelerationStructuresIndirectKHR_ON(wrapper_printer_masks)
#define TRY_CmdBuildAccelerationStructuresIndirectKHR(TRUE, FALSE) TRUE
#define has_device_wrapper_CmdBuildAccelerationStructuresIndirectKHR(...) (wrapper_device_entrypoints.CmdBuildAccelerationStructuresIndirectKHR)
#define has_physical_device_wrapper_CmdBuildAccelerationStructuresIndirectKHR(...) (wrapper_physical_device_entrypoints.CmdBuildAccelerationStructuresIndirectKHR)
#define name_of_wrapper_CmdBuildAccelerationStructuresIndirectKHR(...) "wrapper_CmdBuildAccelerationStructuresIndirectKHR"
#define VK_ID_BuildAccelerationStructuresKHR 453
#define IS_VK_ID_BuildAccelerationStructuresKHR_ON(masks) (((masks).f7 & (1ULL << (5))) != 0)
#define SET_VK_ID_BuildAccelerationStructuresKHR_ON(masks) (masks).f7 |= (1ULL << (5))
#define VK_ID_BuildAccelerationStructuresKHR_BIT (1ULL << (5))
#define VK_ID_BuildAccelerationStructuresKHR_IDX (7)

#define PRINT_BuildAccelerationStructuresKHR IS_VK_ID_BuildAccelerationStructuresKHR_ON(wrapper_printer_masks)
#define TRY_BuildAccelerationStructuresKHR(TRUE, FALSE) TRUE
#define has_device_wrapper_BuildAccelerationStructuresKHR(...) (wrapper_device_entrypoints.BuildAccelerationStructuresKHR)
#define has_physical_device_wrapper_BuildAccelerationStructuresKHR(...) (wrapper_physical_device_entrypoints.BuildAccelerationStructuresKHR)
#define name_of_wrapper_BuildAccelerationStructuresKHR(...) "wrapper_BuildAccelerationStructuresKHR"
#define VK_ID_GetAccelerationStructureDeviceAddressKHR 454
#define IS_VK_ID_GetAccelerationStructureDeviceAddressKHR_ON(masks) (((masks).f7 & (1ULL << (6))) != 0)
#define SET_VK_ID_GetAccelerationStructureDeviceAddressKHR_ON(masks) (masks).f7 |= (1ULL << (6))
#define VK_ID_GetAccelerationStructureDeviceAddressKHR_BIT (1ULL << (6))
#define VK_ID_GetAccelerationStructureDeviceAddressKHR_IDX (7)

#define PRINT_GetAccelerationStructureDeviceAddressKHR IS_VK_ID_GetAccelerationStructureDeviceAddressKHR_ON(wrapper_printer_masks)
#define TRY_GetAccelerationStructureDeviceAddressKHR(TRUE, FALSE) TRUE
#define has_device_wrapper_GetAccelerationStructureDeviceAddressKHR(...) (wrapper_device_entrypoints.GetAccelerationStructureDeviceAddressKHR)
#define has_physical_device_wrapper_GetAccelerationStructureDeviceAddressKHR(...) (wrapper_physical_device_entrypoints.GetAccelerationStructureDeviceAddressKHR)
#define name_of_wrapper_GetAccelerationStructureDeviceAddressKHR(...) "wrapper_GetAccelerationStructureDeviceAddressKHR"
#define VK_ID_CreateDeferredOperationKHR 455
#define IS_VK_ID_CreateDeferredOperationKHR_ON(masks) (((masks).f7 & (1ULL << (7))) != 0)
#define SET_VK_ID_CreateDeferredOperationKHR_ON(masks) (masks).f7 |= (1ULL << (7))
#define VK_ID_CreateDeferredOperationKHR_BIT (1ULL << (7))
#define VK_ID_CreateDeferredOperationKHR_IDX (7)

#define PRINT_CreateDeferredOperationKHR IS_VK_ID_CreateDeferredOperationKHR_ON(wrapper_printer_masks)
#define TRY_CreateDeferredOperationKHR(TRUE, FALSE) TRUE
#define has_device_wrapper_CreateDeferredOperationKHR(...) (wrapper_device_entrypoints.CreateDeferredOperationKHR)
#define has_physical_device_wrapper_CreateDeferredOperationKHR(...) (wrapper_physical_device_entrypoints.CreateDeferredOperationKHR)
#define name_of_wrapper_CreateDeferredOperationKHR(...) "wrapper_CreateDeferredOperationKHR"
#define VK_ID_DestroyDeferredOperationKHR 456
#define IS_VK_ID_DestroyDeferredOperationKHR_ON(masks) (((masks).f7 & (1ULL << (8))) != 0)
#define SET_VK_ID_DestroyDeferredOperationKHR_ON(masks) (masks).f7 |= (1ULL << (8))
#define VK_ID_DestroyDeferredOperationKHR_BIT (1ULL << (8))
#define VK_ID_DestroyDeferredOperationKHR_IDX (7)

#define PRINT_DestroyDeferredOperationKHR IS_VK_ID_DestroyDeferredOperationKHR_ON(wrapper_printer_masks)
#define TRY_DestroyDeferredOperationKHR(TRUE, FALSE) TRUE
#define has_device_wrapper_DestroyDeferredOperationKHR(...) (wrapper_device_entrypoints.DestroyDeferredOperationKHR)
#define has_physical_device_wrapper_DestroyDeferredOperationKHR(...) (wrapper_physical_device_entrypoints.DestroyDeferredOperationKHR)
#define name_of_wrapper_DestroyDeferredOperationKHR(...) "wrapper_DestroyDeferredOperationKHR"
#define VK_ID_GetDeferredOperationMaxConcurrencyKHR 457
#define IS_VK_ID_GetDeferredOperationMaxConcurrencyKHR_ON(masks) (((masks).f7 & (1ULL << (9))) != 0)
#define SET_VK_ID_GetDeferredOperationMaxConcurrencyKHR_ON(masks) (masks).f7 |= (1ULL << (9))
#define VK_ID_GetDeferredOperationMaxConcurrencyKHR_BIT (1ULL << (9))
#define VK_ID_GetDeferredOperationMaxConcurrencyKHR_IDX (7)

#define PRINT_GetDeferredOperationMaxConcurrencyKHR IS_VK_ID_GetDeferredOperationMaxConcurrencyKHR_ON(wrapper_printer_masks)
#define TRY_GetDeferredOperationMaxConcurrencyKHR(TRUE, FALSE) TRUE
#define has_device_wrapper_GetDeferredOperationMaxConcurrencyKHR(...) (wrapper_device_entrypoints.GetDeferredOperationMaxConcurrencyKHR)
#define has_physical_device_wrapper_GetDeferredOperationMaxConcurrencyKHR(...) (wrapper_physical_device_entrypoints.GetDeferredOperationMaxConcurrencyKHR)
#define name_of_wrapper_GetDeferredOperationMaxConcurrencyKHR(...) "wrapper_GetDeferredOperationMaxConcurrencyKHR"
#define VK_ID_GetDeferredOperationResultKHR 458
#define IS_VK_ID_GetDeferredOperationResultKHR_ON(masks) (((masks).f7 & (1ULL << (10))) != 0)
#define SET_VK_ID_GetDeferredOperationResultKHR_ON(masks) (masks).f7 |= (1ULL << (10))
#define VK_ID_GetDeferredOperationResultKHR_BIT (1ULL << (10))
#define VK_ID_GetDeferredOperationResultKHR_IDX (7)

#define PRINT_GetDeferredOperationResultKHR IS_VK_ID_GetDeferredOperationResultKHR_ON(wrapper_printer_masks)
#define TRY_GetDeferredOperationResultKHR(TRUE, FALSE) TRUE
#define has_device_wrapper_GetDeferredOperationResultKHR(...) (wrapper_device_entrypoints.GetDeferredOperationResultKHR)
#define has_physical_device_wrapper_GetDeferredOperationResultKHR(...) (wrapper_physical_device_entrypoints.GetDeferredOperationResultKHR)
#define name_of_wrapper_GetDeferredOperationResultKHR(...) "wrapper_GetDeferredOperationResultKHR"
#define VK_ID_DeferredOperationJoinKHR 459
#define IS_VK_ID_DeferredOperationJoinKHR_ON(masks) (((masks).f7 & (1ULL << (11))) != 0)
#define SET_VK_ID_DeferredOperationJoinKHR_ON(masks) (masks).f7 |= (1ULL << (11))
#define VK_ID_DeferredOperationJoinKHR_BIT (1ULL << (11))
#define VK_ID_DeferredOperationJoinKHR_IDX (7)

#define PRINT_DeferredOperationJoinKHR IS_VK_ID_DeferredOperationJoinKHR_ON(wrapper_printer_masks)
#define TRY_DeferredOperationJoinKHR(TRUE, FALSE) TRUE
#define has_device_wrapper_DeferredOperationJoinKHR(...) (wrapper_device_entrypoints.DeferredOperationJoinKHR)
#define has_physical_device_wrapper_DeferredOperationJoinKHR(...) (wrapper_physical_device_entrypoints.DeferredOperationJoinKHR)
#define name_of_wrapper_DeferredOperationJoinKHR(...) "wrapper_DeferredOperationJoinKHR"
#define VK_ID_GetPipelineIndirectMemoryRequirementsNV 460
#define IS_VK_ID_GetPipelineIndirectMemoryRequirementsNV_ON(masks) (((masks).f7 & (1ULL << (12))) != 0)
#define SET_VK_ID_GetPipelineIndirectMemoryRequirementsNV_ON(masks) (masks).f7 |= (1ULL << (12))
#define VK_ID_GetPipelineIndirectMemoryRequirementsNV_BIT (1ULL << (12))
#define VK_ID_GetPipelineIndirectMemoryRequirementsNV_IDX (7)

#define PRINT_GetPipelineIndirectMemoryRequirementsNV IS_VK_ID_GetPipelineIndirectMemoryRequirementsNV_ON(wrapper_printer_masks)
#define TRY_GetPipelineIndirectMemoryRequirementsNV(TRUE, FALSE) TRUE
#define has_device_wrapper_GetPipelineIndirectMemoryRequirementsNV(...) (wrapper_device_entrypoints.GetPipelineIndirectMemoryRequirementsNV)
#define has_physical_device_wrapper_GetPipelineIndirectMemoryRequirementsNV(...) (wrapper_physical_device_entrypoints.GetPipelineIndirectMemoryRequirementsNV)
#define name_of_wrapper_GetPipelineIndirectMemoryRequirementsNV(...) "wrapper_GetPipelineIndirectMemoryRequirementsNV"
#define VK_ID_GetPipelineIndirectDeviceAddressNV 461
#define IS_VK_ID_GetPipelineIndirectDeviceAddressNV_ON(masks) (((masks).f7 & (1ULL << (13))) != 0)
#define SET_VK_ID_GetPipelineIndirectDeviceAddressNV_ON(masks) (masks).f7 |= (1ULL << (13))
#define VK_ID_GetPipelineIndirectDeviceAddressNV_BIT (1ULL << (13))
#define VK_ID_GetPipelineIndirectDeviceAddressNV_IDX (7)

#define PRINT_GetPipelineIndirectDeviceAddressNV IS_VK_ID_GetPipelineIndirectDeviceAddressNV_ON(wrapper_printer_masks)
#define TRY_GetPipelineIndirectDeviceAddressNV(TRUE, FALSE) TRUE
#define has_device_wrapper_GetPipelineIndirectDeviceAddressNV(...) (wrapper_device_entrypoints.GetPipelineIndirectDeviceAddressNV)
#define has_physical_device_wrapper_GetPipelineIndirectDeviceAddressNV(...) (wrapper_physical_device_entrypoints.GetPipelineIndirectDeviceAddressNV)
#define name_of_wrapper_GetPipelineIndirectDeviceAddressNV(...) "wrapper_GetPipelineIndirectDeviceAddressNV"
#define VK_ID_CmdSetCullMode 462
#define IS_VK_ID_CmdSetCullMode_ON(masks) (((masks).f7 & (1ULL << (14))) != 0)
#define SET_VK_ID_CmdSetCullMode_ON(masks) (masks).f7 |= (1ULL << (14))
#define VK_ID_CmdSetCullMode_BIT (1ULL << (14))
#define VK_ID_CmdSetCullMode_IDX (7)

#define PRINT_CmdSetCullMode IS_VK_ID_CmdSetCullMode_ON(wrapper_printer_masks)
#define TRY_CmdSetCullMode(TRUE, FALSE) TRUE
#define has_device_wrapper_CmdSetCullMode(...) (wrapper_device_entrypoints.CmdSetCullMode)
#define has_physical_device_wrapper_CmdSetCullMode(...) (wrapper_physical_device_entrypoints.CmdSetCullMode)
#define name_of_wrapper_CmdSetCullMode(...) "wrapper_CmdSetCullMode"
#define VK_ID_CmdSetFrontFace 464
#define IS_VK_ID_CmdSetFrontFace_ON(masks) (((masks).f7 & (1ULL << (16))) != 0)
#define SET_VK_ID_CmdSetFrontFace_ON(masks) (masks).f7 |= (1ULL << (16))
#define VK_ID_CmdSetFrontFace_BIT (1ULL << (16))
#define VK_ID_CmdSetFrontFace_IDX (7)

#define PRINT_CmdSetFrontFace IS_VK_ID_CmdSetFrontFace_ON(wrapper_printer_masks)
#define TRY_CmdSetFrontFace(TRUE, FALSE) TRUE
#define has_device_wrapper_CmdSetFrontFace(...) (wrapper_device_entrypoints.CmdSetFrontFace)
#define has_physical_device_wrapper_CmdSetFrontFace(...) (wrapper_physical_device_entrypoints.CmdSetFrontFace)
#define name_of_wrapper_CmdSetFrontFace(...) "wrapper_CmdSetFrontFace"
#define VK_ID_CmdSetPrimitiveTopology 466
#define IS_VK_ID_CmdSetPrimitiveTopology_ON(masks) (((masks).f7 & (1ULL << (18))) != 0)
#define SET_VK_ID_CmdSetPrimitiveTopology_ON(masks) (masks).f7 |= (1ULL << (18))
#define VK_ID_CmdSetPrimitiveTopology_BIT (1ULL << (18))
#define VK_ID_CmdSetPrimitiveTopology_IDX (7)

#define PRINT_CmdSetPrimitiveTopology IS_VK_ID_CmdSetPrimitiveTopology_ON(wrapper_printer_masks)
#define TRY_CmdSetPrimitiveTopology(TRUE, FALSE) TRUE
#define has_device_wrapper_CmdSetPrimitiveTopology(...) (wrapper_device_entrypoints.CmdSetPrimitiveTopology)
#define has_physical_device_wrapper_CmdSetPrimitiveTopology(...) (wrapper_physical_device_entrypoints.CmdSetPrimitiveTopology)
#define name_of_wrapper_CmdSetPrimitiveTopology(...) "wrapper_CmdSetPrimitiveTopology"
#define VK_ID_CmdSetViewportWithCount 468
#define IS_VK_ID_CmdSetViewportWithCount_ON(masks) (((masks).f7 & (1ULL << (20))) != 0)
#define SET_VK_ID_CmdSetViewportWithCount_ON(masks) (masks).f7 |= (1ULL << (20))
#define VK_ID_CmdSetViewportWithCount_BIT (1ULL << (20))
#define VK_ID_CmdSetViewportWithCount_IDX (7)

#define PRINT_CmdSetViewportWithCount IS_VK_ID_CmdSetViewportWithCount_ON(wrapper_printer_masks)
#define TRY_CmdSetViewportWithCount(TRUE, FALSE) TRUE
#define has_device_wrapper_CmdSetViewportWithCount(...) (wrapper_device_entrypoints.CmdSetViewportWithCount)
#define has_physical_device_wrapper_CmdSetViewportWithCount(...) (wrapper_physical_device_entrypoints.CmdSetViewportWithCount)
#define name_of_wrapper_CmdSetViewportWithCount(...) "wrapper_CmdSetViewportWithCount"
#define VK_ID_CmdSetScissorWithCount 470
#define IS_VK_ID_CmdSetScissorWithCount_ON(masks) (((masks).f7 & (1ULL << (22))) != 0)
#define SET_VK_ID_CmdSetScissorWithCount_ON(masks) (masks).f7 |= (1ULL << (22))
#define VK_ID_CmdSetScissorWithCount_BIT (1ULL << (22))
#define VK_ID_CmdSetScissorWithCount_IDX (7)

#define PRINT_CmdSetScissorWithCount IS_VK_ID_CmdSetScissorWithCount_ON(wrapper_printer_masks)
#define TRY_CmdSetScissorWithCount(TRUE, FALSE) TRUE
#define has_device_wrapper_CmdSetScissorWithCount(...) (wrapper_device_entrypoints.CmdSetScissorWithCount)
#define has_physical_device_wrapper_CmdSetScissorWithCount(...) (wrapper_physical_device_entrypoints.CmdSetScissorWithCount)
#define name_of_wrapper_CmdSetScissorWithCount(...) "wrapper_CmdSetScissorWithCount"
#define VK_ID_CmdBindIndexBuffer2KHR 472
#define IS_VK_ID_CmdBindIndexBuffer2KHR_ON(masks) (((masks).f7 & (1ULL << (24))) != 0)
#define SET_VK_ID_CmdBindIndexBuffer2KHR_ON(masks) (masks).f7 |= (1ULL << (24))
#define VK_ID_CmdBindIndexBuffer2KHR_BIT (1ULL << (24))
#define VK_ID_CmdBindIndexBuffer2KHR_IDX (7)

#define PRINT_CmdBindIndexBuffer2KHR IS_VK_ID_CmdBindIndexBuffer2KHR_ON(wrapper_printer_masks)
#define TRY_CmdBindIndexBuffer2KHR(TRUE, FALSE) TRUE
#define has_device_wrapper_CmdBindIndexBuffer2KHR(...) (wrapper_device_entrypoints.CmdBindIndexBuffer2KHR)
#define has_physical_device_wrapper_CmdBindIndexBuffer2KHR(...) (wrapper_physical_device_entrypoints.CmdBindIndexBuffer2KHR)
#define name_of_wrapper_CmdBindIndexBuffer2KHR(...) "wrapper_CmdBindIndexBuffer2KHR"
#define VK_ID_CmdBindVertexBuffers2 473
#define IS_VK_ID_CmdBindVertexBuffers2_ON(masks) (((masks).f7 & (1ULL << (25))) != 0)
#define SET_VK_ID_CmdBindVertexBuffers2_ON(masks) (masks).f7 |= (1ULL << (25))
#define VK_ID_CmdBindVertexBuffers2_BIT (1ULL << (25))
#define VK_ID_CmdBindVertexBuffers2_IDX (7)

#define PRINT_CmdBindVertexBuffers2 IS_VK_ID_CmdBindVertexBuffers2_ON(wrapper_printer_masks)
#define TRY_CmdBindVertexBuffers2(TRUE, FALSE) TRUE
#define has_device_wrapper_CmdBindVertexBuffers2(...) (wrapper_device_entrypoints.CmdBindVertexBuffers2)
#define has_physical_device_wrapper_CmdBindVertexBuffers2(...) (wrapper_physical_device_entrypoints.CmdBindVertexBuffers2)
#define name_of_wrapper_CmdBindVertexBuffers2(...) "wrapper_CmdBindVertexBuffers2"
#define VK_ID_CmdSetDepthTestEnable 475
#define IS_VK_ID_CmdSetDepthTestEnable_ON(masks) (((masks).f7 & (1ULL << (27))) != 0)
#define SET_VK_ID_CmdSetDepthTestEnable_ON(masks) (masks).f7 |= (1ULL << (27))
#define VK_ID_CmdSetDepthTestEnable_BIT (1ULL << (27))
#define VK_ID_CmdSetDepthTestEnable_IDX (7)

#define PRINT_CmdSetDepthTestEnable IS_VK_ID_CmdSetDepthTestEnable_ON(wrapper_printer_masks)
#define TRY_CmdSetDepthTestEnable(TRUE, FALSE) TRUE
#define has_device_wrapper_CmdSetDepthTestEnable(...) (wrapper_device_entrypoints.CmdSetDepthTestEnable)
#define has_physical_device_wrapper_CmdSetDepthTestEnable(...) (wrapper_physical_device_entrypoints.CmdSetDepthTestEnable)
#define name_of_wrapper_CmdSetDepthTestEnable(...) "wrapper_CmdSetDepthTestEnable"
#define VK_ID_CmdSetDepthWriteEnable 477
#define IS_VK_ID_CmdSetDepthWriteEnable_ON(masks) (((masks).f7 & (1ULL << (29))) != 0)
#define SET_VK_ID_CmdSetDepthWriteEnable_ON(masks) (masks).f7 |= (1ULL << (29))
#define VK_ID_CmdSetDepthWriteEnable_BIT (1ULL << (29))
#define VK_ID_CmdSetDepthWriteEnable_IDX (7)

#define PRINT_CmdSetDepthWriteEnable IS_VK_ID_CmdSetDepthWriteEnable_ON(wrapper_printer_masks)
#define TRY_CmdSetDepthWriteEnable(TRUE, FALSE) TRUE
#define has_device_wrapper_CmdSetDepthWriteEnable(...) (wrapper_device_entrypoints.CmdSetDepthWriteEnable)
#define has_physical_device_wrapper_CmdSetDepthWriteEnable(...) (wrapper_physical_device_entrypoints.CmdSetDepthWriteEnable)
#define name_of_wrapper_CmdSetDepthWriteEnable(...) "wrapper_CmdSetDepthWriteEnable"
#define VK_ID_CmdSetDepthCompareOp 479
#define IS_VK_ID_CmdSetDepthCompareOp_ON(masks) (((masks).f7 & (1ULL << (31))) != 0)
#define SET_VK_ID_CmdSetDepthCompareOp_ON(masks) (masks).f7 |= (1ULL << (31))
#define VK_ID_CmdSetDepthCompareOp_BIT (1ULL << (31))
#define VK_ID_CmdSetDepthCompareOp_IDX (7)

#define PRINT_CmdSetDepthCompareOp IS_VK_ID_CmdSetDepthCompareOp_ON(wrapper_printer_masks)
#define TRY_CmdSetDepthCompareOp(TRUE, FALSE) TRUE
#define has_device_wrapper_CmdSetDepthCompareOp(...) (wrapper_device_entrypoints.CmdSetDepthCompareOp)
#define has_physical_device_wrapper_CmdSetDepthCompareOp(...) (wrapper_physical_device_entrypoints.CmdSetDepthCompareOp)
#define name_of_wrapper_CmdSetDepthCompareOp(...) "wrapper_CmdSetDepthCompareOp"
#define VK_ID_CmdSetDepthBoundsTestEnable 481
#define IS_VK_ID_CmdSetDepthBoundsTestEnable_ON(masks) (((masks).f7 & (1ULL << (33))) != 0)
#define SET_VK_ID_CmdSetDepthBoundsTestEnable_ON(masks) (masks).f7 |= (1ULL << (33))
#define VK_ID_CmdSetDepthBoundsTestEnable_BIT (1ULL << (33))
#define VK_ID_CmdSetDepthBoundsTestEnable_IDX (7)

#define PRINT_CmdSetDepthBoundsTestEnable IS_VK_ID_CmdSetDepthBoundsTestEnable_ON(wrapper_printer_masks)
#define TRY_CmdSetDepthBoundsTestEnable(TRUE, FALSE) TRUE
#define has_device_wrapper_CmdSetDepthBoundsTestEnable(...) (wrapper_device_entrypoints.CmdSetDepthBoundsTestEnable)
#define has_physical_device_wrapper_CmdSetDepthBoundsTestEnable(...) (wrapper_physical_device_entrypoints.CmdSetDepthBoundsTestEnable)
#define name_of_wrapper_CmdSetDepthBoundsTestEnable(...) "wrapper_CmdSetDepthBoundsTestEnable"
#define VK_ID_CmdSetStencilTestEnable 483
#define IS_VK_ID_CmdSetStencilTestEnable_ON(masks) (((masks).f7 & (1ULL << (35))) != 0)
#define SET_VK_ID_CmdSetStencilTestEnable_ON(masks) (masks).f7 |= (1ULL << (35))
#define VK_ID_CmdSetStencilTestEnable_BIT (1ULL << (35))
#define VK_ID_CmdSetStencilTestEnable_IDX (7)

#define PRINT_CmdSetStencilTestEnable IS_VK_ID_CmdSetStencilTestEnable_ON(wrapper_printer_masks)
#define TRY_CmdSetStencilTestEnable(TRUE, FALSE) TRUE
#define has_device_wrapper_CmdSetStencilTestEnable(...) (wrapper_device_entrypoints.CmdSetStencilTestEnable)
#define has_physical_device_wrapper_CmdSetStencilTestEnable(...) (wrapper_physical_device_entrypoints.CmdSetStencilTestEnable)
#define name_of_wrapper_CmdSetStencilTestEnable(...) "wrapper_CmdSetStencilTestEnable"
#define VK_ID_CmdSetStencilOp 485
#define IS_VK_ID_CmdSetStencilOp_ON(masks) (((masks).f7 & (1ULL << (37))) != 0)
#define SET_VK_ID_CmdSetStencilOp_ON(masks) (masks).f7 |= (1ULL << (37))
#define VK_ID_CmdSetStencilOp_BIT (1ULL << (37))
#define VK_ID_CmdSetStencilOp_IDX (7)

#define PRINT_CmdSetStencilOp IS_VK_ID_CmdSetStencilOp_ON(wrapper_printer_masks)
#define TRY_CmdSetStencilOp(TRUE, FALSE) TRUE
#define has_device_wrapper_CmdSetStencilOp(...) (wrapper_device_entrypoints.CmdSetStencilOp)
#define has_physical_device_wrapper_CmdSetStencilOp(...) (wrapper_physical_device_entrypoints.CmdSetStencilOp)
#define name_of_wrapper_CmdSetStencilOp(...) "wrapper_CmdSetStencilOp"
#define VK_ID_CmdSetPatchControlPointsEXT 487
#define IS_VK_ID_CmdSetPatchControlPointsEXT_ON(masks) (((masks).f7 & (1ULL << (39))) != 0)
#define SET_VK_ID_CmdSetPatchControlPointsEXT_ON(masks) (masks).f7 |= (1ULL << (39))
#define VK_ID_CmdSetPatchControlPointsEXT_BIT (1ULL << (39))
#define VK_ID_CmdSetPatchControlPointsEXT_IDX (7)

#define PRINT_CmdSetPatchControlPointsEXT IS_VK_ID_CmdSetPatchControlPointsEXT_ON(wrapper_printer_masks)
#define TRY_CmdSetPatchControlPointsEXT(TRUE, FALSE) TRUE
#define has_device_wrapper_CmdSetPatchControlPointsEXT(...) (wrapper_device_entrypoints.CmdSetPatchControlPointsEXT)
#define has_physical_device_wrapper_CmdSetPatchControlPointsEXT(...) (wrapper_physical_device_entrypoints.CmdSetPatchControlPointsEXT)
#define name_of_wrapper_CmdSetPatchControlPointsEXT(...) "wrapper_CmdSetPatchControlPointsEXT"
#define VK_ID_CmdSetRasterizerDiscardEnable 488
#define IS_VK_ID_CmdSetRasterizerDiscardEnable_ON(masks) (((masks).f7 & (1ULL << (40))) != 0)
#define SET_VK_ID_CmdSetRasterizerDiscardEnable_ON(masks) (masks).f7 |= (1ULL << (40))
#define VK_ID_CmdSetRasterizerDiscardEnable_BIT (1ULL << (40))
#define VK_ID_CmdSetRasterizerDiscardEnable_IDX (7)

#define PRINT_CmdSetRasterizerDiscardEnable IS_VK_ID_CmdSetRasterizerDiscardEnable_ON(wrapper_printer_masks)
#define TRY_CmdSetRasterizerDiscardEnable(TRUE, FALSE) TRUE
#define has_device_wrapper_CmdSetRasterizerDiscardEnable(...) (wrapper_device_entrypoints.CmdSetRasterizerDiscardEnable)
#define has_physical_device_wrapper_CmdSetRasterizerDiscardEnable(...) (wrapper_physical_device_entrypoints.CmdSetRasterizerDiscardEnable)
#define name_of_wrapper_CmdSetRasterizerDiscardEnable(...) "wrapper_CmdSetRasterizerDiscardEnable"
#define VK_ID_CmdSetDepthBiasEnable 490
#define IS_VK_ID_CmdSetDepthBiasEnable_ON(masks) (((masks).f7 & (1ULL << (42))) != 0)
#define SET_VK_ID_CmdSetDepthBiasEnable_ON(masks) (masks).f7 |= (1ULL << (42))
#define VK_ID_CmdSetDepthBiasEnable_BIT (1ULL << (42))
#define VK_ID_CmdSetDepthBiasEnable_IDX (7)

#define PRINT_CmdSetDepthBiasEnable IS_VK_ID_CmdSetDepthBiasEnable_ON(wrapper_printer_masks)
#define TRY_CmdSetDepthBiasEnable(TRUE, FALSE) TRUE
#define has_device_wrapper_CmdSetDepthBiasEnable(...) (wrapper_device_entrypoints.CmdSetDepthBiasEnable)
#define has_physical_device_wrapper_CmdSetDepthBiasEnable(...) (wrapper_physical_device_entrypoints.CmdSetDepthBiasEnable)
#define name_of_wrapper_CmdSetDepthBiasEnable(...) "wrapper_CmdSetDepthBiasEnable"
#define VK_ID_CmdSetLogicOpEXT 492
#define IS_VK_ID_CmdSetLogicOpEXT_ON(masks) (((masks).f7 & (1ULL << (44))) != 0)
#define SET_VK_ID_CmdSetLogicOpEXT_ON(masks) (masks).f7 |= (1ULL << (44))
#define VK_ID_CmdSetLogicOpEXT_BIT (1ULL << (44))
#define VK_ID_CmdSetLogicOpEXT_IDX (7)

#define PRINT_CmdSetLogicOpEXT IS_VK_ID_CmdSetLogicOpEXT_ON(wrapper_printer_masks)
#define TRY_CmdSetLogicOpEXT(TRUE, FALSE) TRUE
#define has_device_wrapper_CmdSetLogicOpEXT(...) (wrapper_device_entrypoints.CmdSetLogicOpEXT)
#define has_physical_device_wrapper_CmdSetLogicOpEXT(...) (wrapper_physical_device_entrypoints.CmdSetLogicOpEXT)
#define name_of_wrapper_CmdSetLogicOpEXT(...) "wrapper_CmdSetLogicOpEXT"
#define VK_ID_CmdSetPrimitiveRestartEnable 493
#define IS_VK_ID_CmdSetPrimitiveRestartEnable_ON(masks) (((masks).f7 & (1ULL << (45))) != 0)
#define SET_VK_ID_CmdSetPrimitiveRestartEnable_ON(masks) (masks).f7 |= (1ULL << (45))
#define VK_ID_CmdSetPrimitiveRestartEnable_BIT (1ULL << (45))
#define VK_ID_CmdSetPrimitiveRestartEnable_IDX (7)

#define PRINT_CmdSetPrimitiveRestartEnable IS_VK_ID_CmdSetPrimitiveRestartEnable_ON(wrapper_printer_masks)
#define TRY_CmdSetPrimitiveRestartEnable(TRUE, FALSE) TRUE
#define has_device_wrapper_CmdSetPrimitiveRestartEnable(...) (wrapper_device_entrypoints.CmdSetPrimitiveRestartEnable)
#define has_physical_device_wrapper_CmdSetPrimitiveRestartEnable(...) (wrapper_physical_device_entrypoints.CmdSetPrimitiveRestartEnable)
#define name_of_wrapper_CmdSetPrimitiveRestartEnable(...) "wrapper_CmdSetPrimitiveRestartEnable"
#define VK_ID_CmdSetTessellationDomainOriginEXT 495
#define IS_VK_ID_CmdSetTessellationDomainOriginEXT_ON(masks) (((masks).f7 & (1ULL << (47))) != 0)
#define SET_VK_ID_CmdSetTessellationDomainOriginEXT_ON(masks) (masks).f7 |= (1ULL << (47))
#define VK_ID_CmdSetTessellationDomainOriginEXT_BIT (1ULL << (47))
#define VK_ID_CmdSetTessellationDomainOriginEXT_IDX (7)

#define PRINT_CmdSetTessellationDomainOriginEXT IS_VK_ID_CmdSetTessellationDomainOriginEXT_ON(wrapper_printer_masks)
#define TRY_CmdSetTessellationDomainOriginEXT(TRUE, FALSE) TRUE
#define has_device_wrapper_CmdSetTessellationDomainOriginEXT(...) (wrapper_device_entrypoints.CmdSetTessellationDomainOriginEXT)
#define has_physical_device_wrapper_CmdSetTessellationDomainOriginEXT(...) (wrapper_physical_device_entrypoints.CmdSetTessellationDomainOriginEXT)
#define name_of_wrapper_CmdSetTessellationDomainOriginEXT(...) "wrapper_CmdSetTessellationDomainOriginEXT"
#define VK_ID_CmdSetDepthClampEnableEXT 496
#define IS_VK_ID_CmdSetDepthClampEnableEXT_ON(masks) (((masks).f7 & (1ULL << (48))) != 0)
#define SET_VK_ID_CmdSetDepthClampEnableEXT_ON(masks) (masks).f7 |= (1ULL << (48))
#define VK_ID_CmdSetDepthClampEnableEXT_BIT (1ULL << (48))
#define VK_ID_CmdSetDepthClampEnableEXT_IDX (7)

#define PRINT_CmdSetDepthClampEnableEXT IS_VK_ID_CmdSetDepthClampEnableEXT_ON(wrapper_printer_masks)
#define TRY_CmdSetDepthClampEnableEXT(TRUE, FALSE) TRUE
#define has_device_wrapper_CmdSetDepthClampEnableEXT(...) (wrapper_device_entrypoints.CmdSetDepthClampEnableEXT)
#define has_physical_device_wrapper_CmdSetDepthClampEnableEXT(...) (wrapper_physical_device_entrypoints.CmdSetDepthClampEnableEXT)
#define name_of_wrapper_CmdSetDepthClampEnableEXT(...) "wrapper_CmdSetDepthClampEnableEXT"
#define VK_ID_CmdSetPolygonModeEXT 497
#define IS_VK_ID_CmdSetPolygonModeEXT_ON(masks) (((masks).f7 & (1ULL << (49))) != 0)
#define SET_VK_ID_CmdSetPolygonModeEXT_ON(masks) (masks).f7 |= (1ULL << (49))
#define VK_ID_CmdSetPolygonModeEXT_BIT (1ULL << (49))
#define VK_ID_CmdSetPolygonModeEXT_IDX (7)

#define PRINT_CmdSetPolygonModeEXT IS_VK_ID_CmdSetPolygonModeEXT_ON(wrapper_printer_masks)
#define TRY_CmdSetPolygonModeEXT(TRUE, FALSE) TRUE
#define has_device_wrapper_CmdSetPolygonModeEXT(...) (wrapper_device_entrypoints.CmdSetPolygonModeEXT)
#define has_physical_device_wrapper_CmdSetPolygonModeEXT(...) (wrapper_physical_device_entrypoints.CmdSetPolygonModeEXT)
#define name_of_wrapper_CmdSetPolygonModeEXT(...) "wrapper_CmdSetPolygonModeEXT"
#define VK_ID_CmdSetRasterizationSamplesEXT 498
#define IS_VK_ID_CmdSetRasterizationSamplesEXT_ON(masks) (((masks).f7 & (1ULL << (50))) != 0)
#define SET_VK_ID_CmdSetRasterizationSamplesEXT_ON(masks) (masks).f7 |= (1ULL << (50))
#define VK_ID_CmdSetRasterizationSamplesEXT_BIT (1ULL << (50))
#define VK_ID_CmdSetRasterizationSamplesEXT_IDX (7)

#define PRINT_CmdSetRasterizationSamplesEXT IS_VK_ID_CmdSetRasterizationSamplesEXT_ON(wrapper_printer_masks)
#define TRY_CmdSetRasterizationSamplesEXT(TRUE, FALSE) TRUE
#define has_device_wrapper_CmdSetRasterizationSamplesEXT(...) (wrapper_device_entrypoints.CmdSetRasterizationSamplesEXT)
#define has_physical_device_wrapper_CmdSetRasterizationSamplesEXT(...) (wrapper_physical_device_entrypoints.CmdSetRasterizationSamplesEXT)
#define name_of_wrapper_CmdSetRasterizationSamplesEXT(...) "wrapper_CmdSetRasterizationSamplesEXT"
#define VK_ID_CmdSetSampleMaskEXT 499
#define IS_VK_ID_CmdSetSampleMaskEXT_ON(masks) (((masks).f7 & (1ULL << (51))) != 0)
#define SET_VK_ID_CmdSetSampleMaskEXT_ON(masks) (masks).f7 |= (1ULL << (51))
#define VK_ID_CmdSetSampleMaskEXT_BIT (1ULL << (51))
#define VK_ID_CmdSetSampleMaskEXT_IDX (7)

#define PRINT_CmdSetSampleMaskEXT IS_VK_ID_CmdSetSampleMaskEXT_ON(wrapper_printer_masks)
#define TRY_CmdSetSampleMaskEXT(TRUE, FALSE) TRUE
#define has_device_wrapper_CmdSetSampleMaskEXT(...) (wrapper_device_entrypoints.CmdSetSampleMaskEXT)
#define has_physical_device_wrapper_CmdSetSampleMaskEXT(...) (wrapper_physical_device_entrypoints.CmdSetSampleMaskEXT)
#define name_of_wrapper_CmdSetSampleMaskEXT(...) "wrapper_CmdSetSampleMaskEXT"
#define VK_ID_CmdSetAlphaToCoverageEnableEXT 500
#define IS_VK_ID_CmdSetAlphaToCoverageEnableEXT_ON(masks) (((masks).f7 & (1ULL << (52))) != 0)
#define SET_VK_ID_CmdSetAlphaToCoverageEnableEXT_ON(masks) (masks).f7 |= (1ULL << (52))
#define VK_ID_CmdSetAlphaToCoverageEnableEXT_BIT (1ULL << (52))
#define VK_ID_CmdSetAlphaToCoverageEnableEXT_IDX (7)

#define PRINT_CmdSetAlphaToCoverageEnableEXT IS_VK_ID_CmdSetAlphaToCoverageEnableEXT_ON(wrapper_printer_masks)
#define TRY_CmdSetAlphaToCoverageEnableEXT(TRUE, FALSE) TRUE
#define has_device_wrapper_CmdSetAlphaToCoverageEnableEXT(...) (wrapper_device_entrypoints.CmdSetAlphaToCoverageEnableEXT)
#define has_physical_device_wrapper_CmdSetAlphaToCoverageEnableEXT(...) (wrapper_physical_device_entrypoints.CmdSetAlphaToCoverageEnableEXT)
#define name_of_wrapper_CmdSetAlphaToCoverageEnableEXT(...) "wrapper_CmdSetAlphaToCoverageEnableEXT"
#define VK_ID_CmdSetAlphaToOneEnableEXT 501
#define IS_VK_ID_CmdSetAlphaToOneEnableEXT_ON(masks) (((masks).f7 & (1ULL << (53))) != 0)
#define SET_VK_ID_CmdSetAlphaToOneEnableEXT_ON(masks) (masks).f7 |= (1ULL << (53))
#define VK_ID_CmdSetAlphaToOneEnableEXT_BIT (1ULL << (53))
#define VK_ID_CmdSetAlphaToOneEnableEXT_IDX (7)

#define PRINT_CmdSetAlphaToOneEnableEXT IS_VK_ID_CmdSetAlphaToOneEnableEXT_ON(wrapper_printer_masks)
#define TRY_CmdSetAlphaToOneEnableEXT(TRUE, FALSE) TRUE
#define has_device_wrapper_CmdSetAlphaToOneEnableEXT(...) (wrapper_device_entrypoints.CmdSetAlphaToOneEnableEXT)
#define has_physical_device_wrapper_CmdSetAlphaToOneEnableEXT(...) (wrapper_physical_device_entrypoints.CmdSetAlphaToOneEnableEXT)
#define name_of_wrapper_CmdSetAlphaToOneEnableEXT(...) "wrapper_CmdSetAlphaToOneEnableEXT"
#define VK_ID_CmdSetLogicOpEnableEXT 502
#define IS_VK_ID_CmdSetLogicOpEnableEXT_ON(masks) (((masks).f7 & (1ULL << (54))) != 0)
#define SET_VK_ID_CmdSetLogicOpEnableEXT_ON(masks) (masks).f7 |= (1ULL << (54))
#define VK_ID_CmdSetLogicOpEnableEXT_BIT (1ULL << (54))
#define VK_ID_CmdSetLogicOpEnableEXT_IDX (7)

#define PRINT_CmdSetLogicOpEnableEXT IS_VK_ID_CmdSetLogicOpEnableEXT_ON(wrapper_printer_masks)
#define TRY_CmdSetLogicOpEnableEXT(TRUE, FALSE) TRUE
#define has_device_wrapper_CmdSetLogicOpEnableEXT(...) (wrapper_device_entrypoints.CmdSetLogicOpEnableEXT)
#define has_physical_device_wrapper_CmdSetLogicOpEnableEXT(...) (wrapper_physical_device_entrypoints.CmdSetLogicOpEnableEXT)
#define name_of_wrapper_CmdSetLogicOpEnableEXT(...) "wrapper_CmdSetLogicOpEnableEXT"
#define VK_ID_CmdSetColorBlendEnableEXT 503
#define IS_VK_ID_CmdSetColorBlendEnableEXT_ON(masks) (((masks).f7 & (1ULL << (55))) != 0)
#define SET_VK_ID_CmdSetColorBlendEnableEXT_ON(masks) (masks).f7 |= (1ULL << (55))
#define VK_ID_CmdSetColorBlendEnableEXT_BIT (1ULL << (55))
#define VK_ID_CmdSetColorBlendEnableEXT_IDX (7)

#define PRINT_CmdSetColorBlendEnableEXT IS_VK_ID_CmdSetColorBlendEnableEXT_ON(wrapper_printer_masks)
#define TRY_CmdSetColorBlendEnableEXT(TRUE, FALSE) TRUE
#define has_device_wrapper_CmdSetColorBlendEnableEXT(...) (wrapper_device_entrypoints.CmdSetColorBlendEnableEXT)
#define has_physical_device_wrapper_CmdSetColorBlendEnableEXT(...) (wrapper_physical_device_entrypoints.CmdSetColorBlendEnableEXT)
#define name_of_wrapper_CmdSetColorBlendEnableEXT(...) "wrapper_CmdSetColorBlendEnableEXT"
#define VK_ID_CmdSetColorBlendEquationEXT 504
#define IS_VK_ID_CmdSetColorBlendEquationEXT_ON(masks) (((masks).f7 & (1ULL << (56))) != 0)
#define SET_VK_ID_CmdSetColorBlendEquationEXT_ON(masks) (masks).f7 |= (1ULL << (56))
#define VK_ID_CmdSetColorBlendEquationEXT_BIT (1ULL << (56))
#define VK_ID_CmdSetColorBlendEquationEXT_IDX (7)

#define PRINT_CmdSetColorBlendEquationEXT IS_VK_ID_CmdSetColorBlendEquationEXT_ON(wrapper_printer_masks)
#define TRY_CmdSetColorBlendEquationEXT(TRUE, FALSE) TRUE
#define has_device_wrapper_CmdSetColorBlendEquationEXT(...) (wrapper_device_entrypoints.CmdSetColorBlendEquationEXT)
#define has_physical_device_wrapper_CmdSetColorBlendEquationEXT(...) (wrapper_physical_device_entrypoints.CmdSetColorBlendEquationEXT)
#define name_of_wrapper_CmdSetColorBlendEquationEXT(...) "wrapper_CmdSetColorBlendEquationEXT"
#define VK_ID_CmdSetColorWriteMaskEXT 505
#define IS_VK_ID_CmdSetColorWriteMaskEXT_ON(masks) (((masks).f7 & (1ULL << (57))) != 0)
#define SET_VK_ID_CmdSetColorWriteMaskEXT_ON(masks) (masks).f7 |= (1ULL << (57))
#define VK_ID_CmdSetColorWriteMaskEXT_BIT (1ULL << (57))
#define VK_ID_CmdSetColorWriteMaskEXT_IDX (7)

#define PRINT_CmdSetColorWriteMaskEXT IS_VK_ID_CmdSetColorWriteMaskEXT_ON(wrapper_printer_masks)
#define TRY_CmdSetColorWriteMaskEXT(TRUE, FALSE) TRUE
#define has_device_wrapper_CmdSetColorWriteMaskEXT(...) (wrapper_device_entrypoints.CmdSetColorWriteMaskEXT)
#define has_physical_device_wrapper_CmdSetColorWriteMaskEXT(...) (wrapper_physical_device_entrypoints.CmdSetColorWriteMaskEXT)
#define name_of_wrapper_CmdSetColorWriteMaskEXT(...) "wrapper_CmdSetColorWriteMaskEXT"
#define VK_ID_CmdSetRasterizationStreamEXT 506
#define IS_VK_ID_CmdSetRasterizationStreamEXT_ON(masks) (((masks).f7 & (1ULL << (58))) != 0)
#define SET_VK_ID_CmdSetRasterizationStreamEXT_ON(masks) (masks).f7 |= (1ULL << (58))
#define VK_ID_CmdSetRasterizationStreamEXT_BIT (1ULL << (58))
#define VK_ID_CmdSetRasterizationStreamEXT_IDX (7)

#define PRINT_CmdSetRasterizationStreamEXT IS_VK_ID_CmdSetRasterizationStreamEXT_ON(wrapper_printer_masks)
#define TRY_CmdSetRasterizationStreamEXT(TRUE, FALSE) TRUE
#define has_device_wrapper_CmdSetRasterizationStreamEXT(...) (wrapper_device_entrypoints.CmdSetRasterizationStreamEXT)
#define has_physical_device_wrapper_CmdSetRasterizationStreamEXT(...) (wrapper_physical_device_entrypoints.CmdSetRasterizationStreamEXT)
#define name_of_wrapper_CmdSetRasterizationStreamEXT(...) "wrapper_CmdSetRasterizationStreamEXT"
#define VK_ID_CmdSetConservativeRasterizationModeEXT 507
#define IS_VK_ID_CmdSetConservativeRasterizationModeEXT_ON(masks) (((masks).f7 & (1ULL << (59))) != 0)
#define SET_VK_ID_CmdSetConservativeRasterizationModeEXT_ON(masks) (masks).f7 |= (1ULL << (59))
#define VK_ID_CmdSetConservativeRasterizationModeEXT_BIT (1ULL << (59))
#define VK_ID_CmdSetConservativeRasterizationModeEXT_IDX (7)

#define PRINT_CmdSetConservativeRasterizationModeEXT IS_VK_ID_CmdSetConservativeRasterizationModeEXT_ON(wrapper_printer_masks)
#define TRY_CmdSetConservativeRasterizationModeEXT(TRUE, FALSE) TRUE
#define has_device_wrapper_CmdSetConservativeRasterizationModeEXT(...) (wrapper_device_entrypoints.CmdSetConservativeRasterizationModeEXT)
#define has_physical_device_wrapper_CmdSetConservativeRasterizationModeEXT(...) (wrapper_physical_device_entrypoints.CmdSetConservativeRasterizationModeEXT)
#define name_of_wrapper_CmdSetConservativeRasterizationModeEXT(...) "wrapper_CmdSetConservativeRasterizationModeEXT"
#define VK_ID_CmdSetExtraPrimitiveOverestimationSizeEXT 508
#define IS_VK_ID_CmdSetExtraPrimitiveOverestimationSizeEXT_ON(masks) (((masks).f7 & (1ULL << (60))) != 0)
#define SET_VK_ID_CmdSetExtraPrimitiveOverestimationSizeEXT_ON(masks) (masks).f7 |= (1ULL << (60))
#define VK_ID_CmdSetExtraPrimitiveOverestimationSizeEXT_BIT (1ULL << (60))
#define VK_ID_CmdSetExtraPrimitiveOverestimationSizeEXT_IDX (7)

#define PRINT_CmdSetExtraPrimitiveOverestimationSizeEXT IS_VK_ID_CmdSetExtraPrimitiveOverestimationSizeEXT_ON(wrapper_printer_masks)
#define TRY_CmdSetExtraPrimitiveOverestimationSizeEXT(TRUE, FALSE) TRUE
#define has_device_wrapper_CmdSetExtraPrimitiveOverestimationSizeEXT(...) (wrapper_device_entrypoints.CmdSetExtraPrimitiveOverestimationSizeEXT)
#define has_physical_device_wrapper_CmdSetExtraPrimitiveOverestimationSizeEXT(...) (wrapper_physical_device_entrypoints.CmdSetExtraPrimitiveOverestimationSizeEXT)
#define name_of_wrapper_CmdSetExtraPrimitiveOverestimationSizeEXT(...) "wrapper_CmdSetExtraPrimitiveOverestimationSizeEXT"
#define VK_ID_CmdSetDepthClipEnableEXT 509
#define IS_VK_ID_CmdSetDepthClipEnableEXT_ON(masks) (((masks).f7 & (1ULL << (61))) != 0)
#define SET_VK_ID_CmdSetDepthClipEnableEXT_ON(masks) (masks).f7 |= (1ULL << (61))
#define VK_ID_CmdSetDepthClipEnableEXT_BIT (1ULL << (61))
#define VK_ID_CmdSetDepthClipEnableEXT_IDX (7)

#define PRINT_CmdSetDepthClipEnableEXT IS_VK_ID_CmdSetDepthClipEnableEXT_ON(wrapper_printer_masks)
#define TRY_CmdSetDepthClipEnableEXT(TRUE, FALSE) TRUE
#define has_device_wrapper_CmdSetDepthClipEnableEXT(...) (wrapper_device_entrypoints.CmdSetDepthClipEnableEXT)
#define has_physical_device_wrapper_CmdSetDepthClipEnableEXT(...) (wrapper_physical_device_entrypoints.CmdSetDepthClipEnableEXT)
#define name_of_wrapper_CmdSetDepthClipEnableEXT(...) "wrapper_CmdSetDepthClipEnableEXT"
#define VK_ID_CmdSetSampleLocationsEnableEXT 510
#define IS_VK_ID_CmdSetSampleLocationsEnableEXT_ON(masks) (((masks).f7 & (1ULL << (62))) != 0)
#define SET_VK_ID_CmdSetSampleLocationsEnableEXT_ON(masks) (masks).f7 |= (1ULL << (62))
#define VK_ID_CmdSetSampleLocationsEnableEXT_BIT (1ULL << (62))
#define VK_ID_CmdSetSampleLocationsEnableEXT_IDX (7)

#define PRINT_CmdSetSampleLocationsEnableEXT IS_VK_ID_CmdSetSampleLocationsEnableEXT_ON(wrapper_printer_masks)
#define TRY_CmdSetSampleLocationsEnableEXT(TRUE, FALSE) TRUE
#define has_device_wrapper_CmdSetSampleLocationsEnableEXT(...) (wrapper_device_entrypoints.CmdSetSampleLocationsEnableEXT)
#define has_physical_device_wrapper_CmdSetSampleLocationsEnableEXT(...) (wrapper_physical_device_entrypoints.CmdSetSampleLocationsEnableEXT)
#define name_of_wrapper_CmdSetSampleLocationsEnableEXT(...) "wrapper_CmdSetSampleLocationsEnableEXT"
#define VK_ID_CmdSetColorBlendAdvancedEXT 511
#define IS_VK_ID_CmdSetColorBlendAdvancedEXT_ON(masks) (((masks).f7 & (1ULL << (63))) != 0)
#define SET_VK_ID_CmdSetColorBlendAdvancedEXT_ON(masks) (masks).f7 |= (1ULL << (63))
#define VK_ID_CmdSetColorBlendAdvancedEXT_BIT (1ULL << (63))
#define VK_ID_CmdSetColorBlendAdvancedEXT_IDX (7)

#define PRINT_CmdSetColorBlendAdvancedEXT IS_VK_ID_CmdSetColorBlendAdvancedEXT_ON(wrapper_printer_masks)
#define TRY_CmdSetColorBlendAdvancedEXT(TRUE, FALSE) TRUE
#define has_device_wrapper_CmdSetColorBlendAdvancedEXT(...) (wrapper_device_entrypoints.CmdSetColorBlendAdvancedEXT)
#define has_physical_device_wrapper_CmdSetColorBlendAdvancedEXT(...) (wrapper_physical_device_entrypoints.CmdSetColorBlendAdvancedEXT)
#define name_of_wrapper_CmdSetColorBlendAdvancedEXT(...) "wrapper_CmdSetColorBlendAdvancedEXT"
#define VK_ID_CmdSetProvokingVertexModeEXT 512
#define IS_VK_ID_CmdSetProvokingVertexModeEXT_ON(masks) (((masks).f8 & (1ULL << (0))) != 0)
#define SET_VK_ID_CmdSetProvokingVertexModeEXT_ON(masks) (masks).f8 |= (1ULL << (0))
#define VK_ID_CmdSetProvokingVertexModeEXT_BIT (1ULL << (0))
#define VK_ID_CmdSetProvokingVertexModeEXT_IDX (8)

#define PRINT_CmdSetProvokingVertexModeEXT IS_VK_ID_CmdSetProvokingVertexModeEXT_ON(wrapper_printer_masks)
#define TRY_CmdSetProvokingVertexModeEXT(TRUE, FALSE) TRUE
#define has_device_wrapper_CmdSetProvokingVertexModeEXT(...) (wrapper_device_entrypoints.CmdSetProvokingVertexModeEXT)
#define has_physical_device_wrapper_CmdSetProvokingVertexModeEXT(...) (wrapper_physical_device_entrypoints.CmdSetProvokingVertexModeEXT)
#define name_of_wrapper_CmdSetProvokingVertexModeEXT(...) "wrapper_CmdSetProvokingVertexModeEXT"
#define VK_ID_CmdSetLineRasterizationModeEXT 513
#define IS_VK_ID_CmdSetLineRasterizationModeEXT_ON(masks) (((masks).f8 & (1ULL << (1))) != 0)
#define SET_VK_ID_CmdSetLineRasterizationModeEXT_ON(masks) (masks).f8 |= (1ULL << (1))
#define VK_ID_CmdSetLineRasterizationModeEXT_BIT (1ULL << (1))
#define VK_ID_CmdSetLineRasterizationModeEXT_IDX (8)

#define PRINT_CmdSetLineRasterizationModeEXT IS_VK_ID_CmdSetLineRasterizationModeEXT_ON(wrapper_printer_masks)
#define TRY_CmdSetLineRasterizationModeEXT(TRUE, FALSE) TRUE
#define has_device_wrapper_CmdSetLineRasterizationModeEXT(...) (wrapper_device_entrypoints.CmdSetLineRasterizationModeEXT)
#define has_physical_device_wrapper_CmdSetLineRasterizationModeEXT(...) (wrapper_physical_device_entrypoints.CmdSetLineRasterizationModeEXT)
#define name_of_wrapper_CmdSetLineRasterizationModeEXT(...) "wrapper_CmdSetLineRasterizationModeEXT"
#define VK_ID_CmdSetLineStippleEnableEXT 514
#define IS_VK_ID_CmdSetLineStippleEnableEXT_ON(masks) (((masks).f8 & (1ULL << (2))) != 0)
#define SET_VK_ID_CmdSetLineStippleEnableEXT_ON(masks) (masks).f8 |= (1ULL << (2))
#define VK_ID_CmdSetLineStippleEnableEXT_BIT (1ULL << (2))
#define VK_ID_CmdSetLineStippleEnableEXT_IDX (8)

#define PRINT_CmdSetLineStippleEnableEXT IS_VK_ID_CmdSetLineStippleEnableEXT_ON(wrapper_printer_masks)
#define TRY_CmdSetLineStippleEnableEXT(TRUE, FALSE) TRUE
#define has_device_wrapper_CmdSetLineStippleEnableEXT(...) (wrapper_device_entrypoints.CmdSetLineStippleEnableEXT)
#define has_physical_device_wrapper_CmdSetLineStippleEnableEXT(...) (wrapper_physical_device_entrypoints.CmdSetLineStippleEnableEXT)
#define name_of_wrapper_CmdSetLineStippleEnableEXT(...) "wrapper_CmdSetLineStippleEnableEXT"
#define VK_ID_CmdSetDepthClipNegativeOneToOneEXT 515
#define IS_VK_ID_CmdSetDepthClipNegativeOneToOneEXT_ON(masks) (((masks).f8 & (1ULL << (3))) != 0)
#define SET_VK_ID_CmdSetDepthClipNegativeOneToOneEXT_ON(masks) (masks).f8 |= (1ULL << (3))
#define VK_ID_CmdSetDepthClipNegativeOneToOneEXT_BIT (1ULL << (3))
#define VK_ID_CmdSetDepthClipNegativeOneToOneEXT_IDX (8)

#define PRINT_CmdSetDepthClipNegativeOneToOneEXT IS_VK_ID_CmdSetDepthClipNegativeOneToOneEXT_ON(wrapper_printer_masks)
#define TRY_CmdSetDepthClipNegativeOneToOneEXT(TRUE, FALSE) TRUE
#define has_device_wrapper_CmdSetDepthClipNegativeOneToOneEXT(...) (wrapper_device_entrypoints.CmdSetDepthClipNegativeOneToOneEXT)
#define has_physical_device_wrapper_CmdSetDepthClipNegativeOneToOneEXT(...) (wrapper_physical_device_entrypoints.CmdSetDepthClipNegativeOneToOneEXT)
#define name_of_wrapper_CmdSetDepthClipNegativeOneToOneEXT(...) "wrapper_CmdSetDepthClipNegativeOneToOneEXT"
#define VK_ID_CmdSetViewportWScalingEnableNV 516
#define IS_VK_ID_CmdSetViewportWScalingEnableNV_ON(masks) (((masks).f8 & (1ULL << (4))) != 0)
#define SET_VK_ID_CmdSetViewportWScalingEnableNV_ON(masks) (masks).f8 |= (1ULL << (4))
#define VK_ID_CmdSetViewportWScalingEnableNV_BIT (1ULL << (4))
#define VK_ID_CmdSetViewportWScalingEnableNV_IDX (8)

#define PRINT_CmdSetViewportWScalingEnableNV IS_VK_ID_CmdSetViewportWScalingEnableNV_ON(wrapper_printer_masks)
#define TRY_CmdSetViewportWScalingEnableNV(TRUE, FALSE) TRUE
#define has_device_wrapper_CmdSetViewportWScalingEnableNV(...) (wrapper_device_entrypoints.CmdSetViewportWScalingEnableNV)
#define has_physical_device_wrapper_CmdSetViewportWScalingEnableNV(...) (wrapper_physical_device_entrypoints.CmdSetViewportWScalingEnableNV)
#define name_of_wrapper_CmdSetViewportWScalingEnableNV(...) "wrapper_CmdSetViewportWScalingEnableNV"
#define VK_ID_CmdSetViewportSwizzleNV 517
#define IS_VK_ID_CmdSetViewportSwizzleNV_ON(masks) (((masks).f8 & (1ULL << (5))) != 0)
#define SET_VK_ID_CmdSetViewportSwizzleNV_ON(masks) (masks).f8 |= (1ULL << (5))
#define VK_ID_CmdSetViewportSwizzleNV_BIT (1ULL << (5))
#define VK_ID_CmdSetViewportSwizzleNV_IDX (8)

#define PRINT_CmdSetViewportSwizzleNV IS_VK_ID_CmdSetViewportSwizzleNV_ON(wrapper_printer_masks)
#define TRY_CmdSetViewportSwizzleNV(TRUE, FALSE) TRUE
#define has_device_wrapper_CmdSetViewportSwizzleNV(...) (wrapper_device_entrypoints.CmdSetViewportSwizzleNV)
#define has_physical_device_wrapper_CmdSetViewportSwizzleNV(...) (wrapper_physical_device_entrypoints.CmdSetViewportSwizzleNV)
#define name_of_wrapper_CmdSetViewportSwizzleNV(...) "wrapper_CmdSetViewportSwizzleNV"
#define VK_ID_CmdSetCoverageToColorEnableNV 518
#define IS_VK_ID_CmdSetCoverageToColorEnableNV_ON(masks) (((masks).f8 & (1ULL << (6))) != 0)
#define SET_VK_ID_CmdSetCoverageToColorEnableNV_ON(masks) (masks).f8 |= (1ULL << (6))
#define VK_ID_CmdSetCoverageToColorEnableNV_BIT (1ULL << (6))
#define VK_ID_CmdSetCoverageToColorEnableNV_IDX (8)

#define PRINT_CmdSetCoverageToColorEnableNV IS_VK_ID_CmdSetCoverageToColorEnableNV_ON(wrapper_printer_masks)
#define TRY_CmdSetCoverageToColorEnableNV(TRUE, FALSE) TRUE
#define has_device_wrapper_CmdSetCoverageToColorEnableNV(...) (wrapper_device_entrypoints.CmdSetCoverageToColorEnableNV)
#define has_physical_device_wrapper_CmdSetCoverageToColorEnableNV(...) (wrapper_physical_device_entrypoints.CmdSetCoverageToColorEnableNV)
#define name_of_wrapper_CmdSetCoverageToColorEnableNV(...) "wrapper_CmdSetCoverageToColorEnableNV"
#define VK_ID_CmdSetCoverageToColorLocationNV 519
#define IS_VK_ID_CmdSetCoverageToColorLocationNV_ON(masks) (((masks).f8 & (1ULL << (7))) != 0)
#define SET_VK_ID_CmdSetCoverageToColorLocationNV_ON(masks) (masks).f8 |= (1ULL << (7))
#define VK_ID_CmdSetCoverageToColorLocationNV_BIT (1ULL << (7))
#define VK_ID_CmdSetCoverageToColorLocationNV_IDX (8)

#define PRINT_CmdSetCoverageToColorLocationNV IS_VK_ID_CmdSetCoverageToColorLocationNV_ON(wrapper_printer_masks)
#define TRY_CmdSetCoverageToColorLocationNV(TRUE, FALSE) TRUE
#define has_device_wrapper_CmdSetCoverageToColorLocationNV(...) (wrapper_device_entrypoints.CmdSetCoverageToColorLocationNV)
#define has_physical_device_wrapper_CmdSetCoverageToColorLocationNV(...) (wrapper_physical_device_entrypoints.CmdSetCoverageToColorLocationNV)
#define name_of_wrapper_CmdSetCoverageToColorLocationNV(...) "wrapper_CmdSetCoverageToColorLocationNV"
#define VK_ID_CmdSetCoverageModulationModeNV 520
#define IS_VK_ID_CmdSetCoverageModulationModeNV_ON(masks) (((masks).f8 & (1ULL << (8))) != 0)
#define SET_VK_ID_CmdSetCoverageModulationModeNV_ON(masks) (masks).f8 |= (1ULL << (8))
#define VK_ID_CmdSetCoverageModulationModeNV_BIT (1ULL << (8))
#define VK_ID_CmdSetCoverageModulationModeNV_IDX (8)

#define PRINT_CmdSetCoverageModulationModeNV IS_VK_ID_CmdSetCoverageModulationModeNV_ON(wrapper_printer_masks)
#define TRY_CmdSetCoverageModulationModeNV(TRUE, FALSE) TRUE
#define has_device_wrapper_CmdSetCoverageModulationModeNV(...) (wrapper_device_entrypoints.CmdSetCoverageModulationModeNV)
#define has_physical_device_wrapper_CmdSetCoverageModulationModeNV(...) (wrapper_physical_device_entrypoints.CmdSetCoverageModulationModeNV)
#define name_of_wrapper_CmdSetCoverageModulationModeNV(...) "wrapper_CmdSetCoverageModulationModeNV"
#define VK_ID_CmdSetCoverageModulationTableEnableNV 521
#define IS_VK_ID_CmdSetCoverageModulationTableEnableNV_ON(masks) (((masks).f8 & (1ULL << (9))) != 0)
#define SET_VK_ID_CmdSetCoverageModulationTableEnableNV_ON(masks) (masks).f8 |= (1ULL << (9))
#define VK_ID_CmdSetCoverageModulationTableEnableNV_BIT (1ULL << (9))
#define VK_ID_CmdSetCoverageModulationTableEnableNV_IDX (8)

#define PRINT_CmdSetCoverageModulationTableEnableNV IS_VK_ID_CmdSetCoverageModulationTableEnableNV_ON(wrapper_printer_masks)
#define TRY_CmdSetCoverageModulationTableEnableNV(TRUE, FALSE) TRUE
#define has_device_wrapper_CmdSetCoverageModulationTableEnableNV(...) (wrapper_device_entrypoints.CmdSetCoverageModulationTableEnableNV)
#define has_physical_device_wrapper_CmdSetCoverageModulationTableEnableNV(...) (wrapper_physical_device_entrypoints.CmdSetCoverageModulationTableEnableNV)
#define name_of_wrapper_CmdSetCoverageModulationTableEnableNV(...) "wrapper_CmdSetCoverageModulationTableEnableNV"
#define VK_ID_CmdSetCoverageModulationTableNV 522
#define IS_VK_ID_CmdSetCoverageModulationTableNV_ON(masks) (((masks).f8 & (1ULL << (10))) != 0)
#define SET_VK_ID_CmdSetCoverageModulationTableNV_ON(masks) (masks).f8 |= (1ULL << (10))
#define VK_ID_CmdSetCoverageModulationTableNV_BIT (1ULL << (10))
#define VK_ID_CmdSetCoverageModulationTableNV_IDX (8)

#define PRINT_CmdSetCoverageModulationTableNV IS_VK_ID_CmdSetCoverageModulationTableNV_ON(wrapper_printer_masks)
#define TRY_CmdSetCoverageModulationTableNV(TRUE, FALSE) TRUE
#define has_device_wrapper_CmdSetCoverageModulationTableNV(...) (wrapper_device_entrypoints.CmdSetCoverageModulationTableNV)
#define has_physical_device_wrapper_CmdSetCoverageModulationTableNV(...) (wrapper_physical_device_entrypoints.CmdSetCoverageModulationTableNV)
#define name_of_wrapper_CmdSetCoverageModulationTableNV(...) "wrapper_CmdSetCoverageModulationTableNV"
#define VK_ID_CmdSetShadingRateImageEnableNV 523
#define IS_VK_ID_CmdSetShadingRateImageEnableNV_ON(masks) (((masks).f8 & (1ULL << (11))) != 0)
#define SET_VK_ID_CmdSetShadingRateImageEnableNV_ON(masks) (masks).f8 |= (1ULL << (11))
#define VK_ID_CmdSetShadingRateImageEnableNV_BIT (1ULL << (11))
#define VK_ID_CmdSetShadingRateImageEnableNV_IDX (8)

#define PRINT_CmdSetShadingRateImageEnableNV IS_VK_ID_CmdSetShadingRateImageEnableNV_ON(wrapper_printer_masks)
#define TRY_CmdSetShadingRateImageEnableNV(TRUE, FALSE) TRUE
#define has_device_wrapper_CmdSetShadingRateImageEnableNV(...) (wrapper_device_entrypoints.CmdSetShadingRateImageEnableNV)
#define has_physical_device_wrapper_CmdSetShadingRateImageEnableNV(...) (wrapper_physical_device_entrypoints.CmdSetShadingRateImageEnableNV)
#define name_of_wrapper_CmdSetShadingRateImageEnableNV(...) "wrapper_CmdSetShadingRateImageEnableNV"
#define VK_ID_CmdSetCoverageReductionModeNV 524
#define IS_VK_ID_CmdSetCoverageReductionModeNV_ON(masks) (((masks).f8 & (1ULL << (12))) != 0)
#define SET_VK_ID_CmdSetCoverageReductionModeNV_ON(masks) (masks).f8 |= (1ULL << (12))
#define VK_ID_CmdSetCoverageReductionModeNV_BIT (1ULL << (12))
#define VK_ID_CmdSetCoverageReductionModeNV_IDX (8)

#define PRINT_CmdSetCoverageReductionModeNV IS_VK_ID_CmdSetCoverageReductionModeNV_ON(wrapper_printer_masks)
#define TRY_CmdSetCoverageReductionModeNV(TRUE, FALSE) TRUE
#define has_device_wrapper_CmdSetCoverageReductionModeNV(...) (wrapper_device_entrypoints.CmdSetCoverageReductionModeNV)
#define has_physical_device_wrapper_CmdSetCoverageReductionModeNV(...) (wrapper_physical_device_entrypoints.CmdSetCoverageReductionModeNV)
#define name_of_wrapper_CmdSetCoverageReductionModeNV(...) "wrapper_CmdSetCoverageReductionModeNV"
#define VK_ID_CmdSetRepresentativeFragmentTestEnableNV 525
#define IS_VK_ID_CmdSetRepresentativeFragmentTestEnableNV_ON(masks) (((masks).f8 & (1ULL << (13))) != 0)
#define SET_VK_ID_CmdSetRepresentativeFragmentTestEnableNV_ON(masks) (masks).f8 |= (1ULL << (13))
#define VK_ID_CmdSetRepresentativeFragmentTestEnableNV_BIT (1ULL << (13))
#define VK_ID_CmdSetRepresentativeFragmentTestEnableNV_IDX (8)

#define PRINT_CmdSetRepresentativeFragmentTestEnableNV IS_VK_ID_CmdSetRepresentativeFragmentTestEnableNV_ON(wrapper_printer_masks)
#define TRY_CmdSetRepresentativeFragmentTestEnableNV(TRUE, FALSE) TRUE
#define has_device_wrapper_CmdSetRepresentativeFragmentTestEnableNV(...) (wrapper_device_entrypoints.CmdSetRepresentativeFragmentTestEnableNV)
#define has_physical_device_wrapper_CmdSetRepresentativeFragmentTestEnableNV(...) (wrapper_physical_device_entrypoints.CmdSetRepresentativeFragmentTestEnableNV)
#define name_of_wrapper_CmdSetRepresentativeFragmentTestEnableNV(...) "wrapper_CmdSetRepresentativeFragmentTestEnableNV"
#define VK_ID_CreatePrivateDataSlot 526
#define IS_VK_ID_CreatePrivateDataSlot_ON(masks) (((masks).f8 & (1ULL << (14))) != 0)
#define SET_VK_ID_CreatePrivateDataSlot_ON(masks) (masks).f8 |= (1ULL << (14))
#define VK_ID_CreatePrivateDataSlot_BIT (1ULL << (14))
#define VK_ID_CreatePrivateDataSlot_IDX (8)

#define PRINT_CreatePrivateDataSlot IS_VK_ID_CreatePrivateDataSlot_ON(wrapper_printer_masks)
#define TRY_CreatePrivateDataSlot(TRUE, FALSE) TRUE
#define has_device_wrapper_CreatePrivateDataSlot(...) (wrapper_device_entrypoints.CreatePrivateDataSlot)
#define has_physical_device_wrapper_CreatePrivateDataSlot(...) (wrapper_physical_device_entrypoints.CreatePrivateDataSlot)
#define name_of_wrapper_CreatePrivateDataSlot(...) "wrapper_CreatePrivateDataSlot"
#define VK_ID_DestroyPrivateDataSlot 528
#define IS_VK_ID_DestroyPrivateDataSlot_ON(masks) (((masks).f8 & (1ULL << (16))) != 0)
#define SET_VK_ID_DestroyPrivateDataSlot_ON(masks) (masks).f8 |= (1ULL << (16))
#define VK_ID_DestroyPrivateDataSlot_BIT (1ULL << (16))
#define VK_ID_DestroyPrivateDataSlot_IDX (8)

#define PRINT_DestroyPrivateDataSlot IS_VK_ID_DestroyPrivateDataSlot_ON(wrapper_printer_masks)
#define TRY_DestroyPrivateDataSlot(TRUE, FALSE) TRUE
#define has_device_wrapper_DestroyPrivateDataSlot(...) (wrapper_device_entrypoints.DestroyPrivateDataSlot)
#define has_physical_device_wrapper_DestroyPrivateDataSlot(...) (wrapper_physical_device_entrypoints.DestroyPrivateDataSlot)
#define name_of_wrapper_DestroyPrivateDataSlot(...) "wrapper_DestroyPrivateDataSlot"
#define VK_ID_SetPrivateData 530
#define IS_VK_ID_SetPrivateData_ON(masks) (((masks).f8 & (1ULL << (18))) != 0)
#define SET_VK_ID_SetPrivateData_ON(masks) (masks).f8 |= (1ULL << (18))
#define VK_ID_SetPrivateData_BIT (1ULL << (18))
#define VK_ID_SetPrivateData_IDX (8)

#define PRINT_SetPrivateData IS_VK_ID_SetPrivateData_ON(wrapper_printer_masks)
#define TRY_SetPrivateData(TRUE, FALSE) TRUE
#define has_device_wrapper_SetPrivateData(...) (wrapper_device_entrypoints.SetPrivateData)
#define has_physical_device_wrapper_SetPrivateData(...) (wrapper_physical_device_entrypoints.SetPrivateData)
#define name_of_wrapper_SetPrivateData(...) "wrapper_SetPrivateData"
#define VK_ID_GetPrivateData 532
#define IS_VK_ID_GetPrivateData_ON(masks) (((masks).f8 & (1ULL << (20))) != 0)
#define SET_VK_ID_GetPrivateData_ON(masks) (masks).f8 |= (1ULL << (20))
#define VK_ID_GetPrivateData_BIT (1ULL << (20))
#define VK_ID_GetPrivateData_IDX (8)

#define PRINT_GetPrivateData IS_VK_ID_GetPrivateData_ON(wrapper_printer_masks)
#define TRY_GetPrivateData(TRUE, FALSE) TRUE
#define has_device_wrapper_GetPrivateData(...) (wrapper_device_entrypoints.GetPrivateData)
#define has_physical_device_wrapper_GetPrivateData(...) (wrapper_physical_device_entrypoints.GetPrivateData)
#define name_of_wrapper_GetPrivateData(...) "wrapper_GetPrivateData"
#define VK_ID_CmdCopyBuffer2 534
#define IS_VK_ID_CmdCopyBuffer2_ON(masks) (((masks).f8 & (1ULL << (22))) != 0)
#define SET_VK_ID_CmdCopyBuffer2_ON(masks) (masks).f8 |= (1ULL << (22))
#define VK_ID_CmdCopyBuffer2_BIT (1ULL << (22))
#define VK_ID_CmdCopyBuffer2_IDX (8)

#define PRINT_CmdCopyBuffer2 IS_VK_ID_CmdCopyBuffer2_ON(wrapper_printer_masks)
#define TRY_CmdCopyBuffer2(TRUE, FALSE) TRUE
#define has_device_wrapper_CmdCopyBuffer2(...) (wrapper_device_entrypoints.CmdCopyBuffer2)
#define has_physical_device_wrapper_CmdCopyBuffer2(...) (wrapper_physical_device_entrypoints.CmdCopyBuffer2)
#define name_of_wrapper_CmdCopyBuffer2(...) "wrapper_CmdCopyBuffer2"
#define VK_ID_CmdCopyImage2 536
#define IS_VK_ID_CmdCopyImage2_ON(masks) (((masks).f8 & (1ULL << (24))) != 0)
#define SET_VK_ID_CmdCopyImage2_ON(masks) (masks).f8 |= (1ULL << (24))
#define VK_ID_CmdCopyImage2_BIT (1ULL << (24))
#define VK_ID_CmdCopyImage2_IDX (8)

#define PRINT_CmdCopyImage2 IS_VK_ID_CmdCopyImage2_ON(wrapper_printer_masks)
#define TRY_CmdCopyImage2(TRUE, FALSE) TRUE
#define has_device_wrapper_CmdCopyImage2(...) (wrapper_device_entrypoints.CmdCopyImage2)
#define has_physical_device_wrapper_CmdCopyImage2(...) (wrapper_physical_device_entrypoints.CmdCopyImage2)
#define name_of_wrapper_CmdCopyImage2(...) "wrapper_CmdCopyImage2"
#define VK_ID_CmdBlitImage2 538
#define IS_VK_ID_CmdBlitImage2_ON(masks) (((masks).f8 & (1ULL << (26))) != 0)
#define SET_VK_ID_CmdBlitImage2_ON(masks) (masks).f8 |= (1ULL << (26))
#define VK_ID_CmdBlitImage2_BIT (1ULL << (26))
#define VK_ID_CmdBlitImage2_IDX (8)

#define PRINT_CmdBlitImage2 IS_VK_ID_CmdBlitImage2_ON(wrapper_printer_masks)
#define TRY_CmdBlitImage2(TRUE, FALSE) TRUE
#define has_device_wrapper_CmdBlitImage2(...) (wrapper_device_entrypoints.CmdBlitImage2)
#define has_physical_device_wrapper_CmdBlitImage2(...) (wrapper_physical_device_entrypoints.CmdBlitImage2)
#define name_of_wrapper_CmdBlitImage2(...) "wrapper_CmdBlitImage2"
#define VK_ID_CmdCopyBufferToImage2 540
#define IS_VK_ID_CmdCopyBufferToImage2_ON(masks) (((masks).f8 & (1ULL << (28))) != 0)
#define SET_VK_ID_CmdCopyBufferToImage2_ON(masks) (masks).f8 |= (1ULL << (28))
#define VK_ID_CmdCopyBufferToImage2_BIT (1ULL << (28))
#define VK_ID_CmdCopyBufferToImage2_IDX (8)

#define PRINT_CmdCopyBufferToImage2 IS_VK_ID_CmdCopyBufferToImage2_ON(wrapper_printer_masks)
#define TRY_CmdCopyBufferToImage2(TRUE, FALSE) TRUE
#define has_device_wrapper_CmdCopyBufferToImage2(...) (wrapper_device_entrypoints.CmdCopyBufferToImage2)
#define has_physical_device_wrapper_CmdCopyBufferToImage2(...) (wrapper_physical_device_entrypoints.CmdCopyBufferToImage2)
#define name_of_wrapper_CmdCopyBufferToImage2(...) "wrapper_CmdCopyBufferToImage2"
#define VK_ID_CmdCopyImageToBuffer2 542
#define IS_VK_ID_CmdCopyImageToBuffer2_ON(masks) (((masks).f8 & (1ULL << (30))) != 0)
#define SET_VK_ID_CmdCopyImageToBuffer2_ON(masks) (masks).f8 |= (1ULL << (30))
#define VK_ID_CmdCopyImageToBuffer2_BIT (1ULL << (30))
#define VK_ID_CmdCopyImageToBuffer2_IDX (8)

#define PRINT_CmdCopyImageToBuffer2 IS_VK_ID_CmdCopyImageToBuffer2_ON(wrapper_printer_masks)
#define TRY_CmdCopyImageToBuffer2(TRUE, FALSE) TRUE
#define has_device_wrapper_CmdCopyImageToBuffer2(...) (wrapper_device_entrypoints.CmdCopyImageToBuffer2)
#define has_physical_device_wrapper_CmdCopyImageToBuffer2(...) (wrapper_physical_device_entrypoints.CmdCopyImageToBuffer2)
#define name_of_wrapper_CmdCopyImageToBuffer2(...) "wrapper_CmdCopyImageToBuffer2"
#define VK_ID_CmdResolveImage2 544
#define IS_VK_ID_CmdResolveImage2_ON(masks) (((masks).f8 & (1ULL << (32))) != 0)
#define SET_VK_ID_CmdResolveImage2_ON(masks) (masks).f8 |= (1ULL << (32))
#define VK_ID_CmdResolveImage2_BIT (1ULL << (32))
#define VK_ID_CmdResolveImage2_IDX (8)

#define PRINT_CmdResolveImage2 IS_VK_ID_CmdResolveImage2_ON(wrapper_printer_masks)
#define TRY_CmdResolveImage2(TRUE, FALSE) TRUE
#define has_device_wrapper_CmdResolveImage2(...) (wrapper_device_entrypoints.CmdResolveImage2)
#define has_physical_device_wrapper_CmdResolveImage2(...) (wrapper_physical_device_entrypoints.CmdResolveImage2)
#define name_of_wrapper_CmdResolveImage2(...) "wrapper_CmdResolveImage2"
#define VK_ID_CmdSetFragmentShadingRateKHR 546
#define IS_VK_ID_CmdSetFragmentShadingRateKHR_ON(masks) (((masks).f8 & (1ULL << (34))) != 0)
#define SET_VK_ID_CmdSetFragmentShadingRateKHR_ON(masks) (masks).f8 |= (1ULL << (34))
#define VK_ID_CmdSetFragmentShadingRateKHR_BIT (1ULL << (34))
#define VK_ID_CmdSetFragmentShadingRateKHR_IDX (8)

#define PRINT_CmdSetFragmentShadingRateKHR IS_VK_ID_CmdSetFragmentShadingRateKHR_ON(wrapper_printer_masks)
#define TRY_CmdSetFragmentShadingRateKHR(TRUE, FALSE) TRUE
#define has_device_wrapper_CmdSetFragmentShadingRateKHR(...) (wrapper_device_entrypoints.CmdSetFragmentShadingRateKHR)
#define has_physical_device_wrapper_CmdSetFragmentShadingRateKHR(...) (wrapper_physical_device_entrypoints.CmdSetFragmentShadingRateKHR)
#define name_of_wrapper_CmdSetFragmentShadingRateKHR(...) "wrapper_CmdSetFragmentShadingRateKHR"
#define VK_ID_GetPhysicalDeviceFragmentShadingRatesKHR 547
#define IS_VK_ID_GetPhysicalDeviceFragmentShadingRatesKHR_ON(masks) (((masks).f8 & (1ULL << (35))) != 0)
#define SET_VK_ID_GetPhysicalDeviceFragmentShadingRatesKHR_ON(masks) (masks).f8 |= (1ULL << (35))
#define VK_ID_GetPhysicalDeviceFragmentShadingRatesKHR_BIT (1ULL << (35))
#define VK_ID_GetPhysicalDeviceFragmentShadingRatesKHR_IDX (8)

#define PRINT_GetPhysicalDeviceFragmentShadingRatesKHR IS_VK_ID_GetPhysicalDeviceFragmentShadingRatesKHR_ON(wrapper_printer_masks)
#define TRY_GetPhysicalDeviceFragmentShadingRatesKHR(TRUE, FALSE) TRUE
#define has_device_wrapper_GetPhysicalDeviceFragmentShadingRatesKHR(...) (wrapper_device_entrypoints.GetPhysicalDeviceFragmentShadingRatesKHR)
#define has_physical_device_wrapper_GetPhysicalDeviceFragmentShadingRatesKHR(...) (wrapper_physical_device_entrypoints.GetPhysicalDeviceFragmentShadingRatesKHR)
#define name_of_wrapper_GetPhysicalDeviceFragmentShadingRatesKHR(...) "wrapper_GetPhysicalDeviceFragmentShadingRatesKHR"
#define VK_ID_CmdSetFragmentShadingRateEnumNV 548
#define IS_VK_ID_CmdSetFragmentShadingRateEnumNV_ON(masks) (((masks).f8 & (1ULL << (36))) != 0)
#define SET_VK_ID_CmdSetFragmentShadingRateEnumNV_ON(masks) (masks).f8 |= (1ULL << (36))
#define VK_ID_CmdSetFragmentShadingRateEnumNV_BIT (1ULL << (36))
#define VK_ID_CmdSetFragmentShadingRateEnumNV_IDX (8)

#define PRINT_CmdSetFragmentShadingRateEnumNV IS_VK_ID_CmdSetFragmentShadingRateEnumNV_ON(wrapper_printer_masks)
#define TRY_CmdSetFragmentShadingRateEnumNV(TRUE, FALSE) TRUE
#define has_device_wrapper_CmdSetFragmentShadingRateEnumNV(...) (wrapper_device_entrypoints.CmdSetFragmentShadingRateEnumNV)
#define has_physical_device_wrapper_CmdSetFragmentShadingRateEnumNV(...) (wrapper_physical_device_entrypoints.CmdSetFragmentShadingRateEnumNV)
#define name_of_wrapper_CmdSetFragmentShadingRateEnumNV(...) "wrapper_CmdSetFragmentShadingRateEnumNV"
#define VK_ID_GetAccelerationStructureBuildSizesKHR 549
#define IS_VK_ID_GetAccelerationStructureBuildSizesKHR_ON(masks) (((masks).f8 & (1ULL << (37))) != 0)
#define SET_VK_ID_GetAccelerationStructureBuildSizesKHR_ON(masks) (masks).f8 |= (1ULL << (37))
#define VK_ID_GetAccelerationStructureBuildSizesKHR_BIT (1ULL << (37))
#define VK_ID_GetAccelerationStructureBuildSizesKHR_IDX (8)

#define PRINT_GetAccelerationStructureBuildSizesKHR IS_VK_ID_GetAccelerationStructureBuildSizesKHR_ON(wrapper_printer_masks)
#define TRY_GetAccelerationStructureBuildSizesKHR(TRUE, FALSE) TRUE
#define has_device_wrapper_GetAccelerationStructureBuildSizesKHR(...) (wrapper_device_entrypoints.GetAccelerationStructureBuildSizesKHR)
#define has_physical_device_wrapper_GetAccelerationStructureBuildSizesKHR(...) (wrapper_physical_device_entrypoints.GetAccelerationStructureBuildSizesKHR)
#define name_of_wrapper_GetAccelerationStructureBuildSizesKHR(...) "wrapper_GetAccelerationStructureBuildSizesKHR"
#define VK_ID_CmdSetVertexInputEXT 550
#define IS_VK_ID_CmdSetVertexInputEXT_ON(masks) (((masks).f8 & (1ULL << (38))) != 0)
#define SET_VK_ID_CmdSetVertexInputEXT_ON(masks) (masks).f8 |= (1ULL << (38))
#define VK_ID_CmdSetVertexInputEXT_BIT (1ULL << (38))
#define VK_ID_CmdSetVertexInputEXT_IDX (8)

#define PRINT_CmdSetVertexInputEXT IS_VK_ID_CmdSetVertexInputEXT_ON(wrapper_printer_masks)
#define TRY_CmdSetVertexInputEXT(TRUE, FALSE) TRUE
#define has_device_wrapper_CmdSetVertexInputEXT(...) (wrapper_device_entrypoints.CmdSetVertexInputEXT)
#define has_physical_device_wrapper_CmdSetVertexInputEXT(...) (wrapper_physical_device_entrypoints.CmdSetVertexInputEXT)
#define name_of_wrapper_CmdSetVertexInputEXT(...) "wrapper_CmdSetVertexInputEXT"
#define VK_ID_CmdSetColorWriteEnableEXT 551
#define IS_VK_ID_CmdSetColorWriteEnableEXT_ON(masks) (((masks).f8 & (1ULL << (39))) != 0)
#define SET_VK_ID_CmdSetColorWriteEnableEXT_ON(masks) (masks).f8 |= (1ULL << (39))
#define VK_ID_CmdSetColorWriteEnableEXT_BIT (1ULL << (39))
#define VK_ID_CmdSetColorWriteEnableEXT_IDX (8)

#define PRINT_CmdSetColorWriteEnableEXT IS_VK_ID_CmdSetColorWriteEnableEXT_ON(wrapper_printer_masks)
#define TRY_CmdSetColorWriteEnableEXT(TRUE, FALSE) TRUE
#define has_device_wrapper_CmdSetColorWriteEnableEXT(...) (wrapper_device_entrypoints.CmdSetColorWriteEnableEXT)
#define has_physical_device_wrapper_CmdSetColorWriteEnableEXT(...) (wrapper_physical_device_entrypoints.CmdSetColorWriteEnableEXT)
#define name_of_wrapper_CmdSetColorWriteEnableEXT(...) "wrapper_CmdSetColorWriteEnableEXT"
#define VK_ID_CmdSetEvent2 552
#define IS_VK_ID_CmdSetEvent2_ON(masks) (((masks).f8 & (1ULL << (40))) != 0)
#define SET_VK_ID_CmdSetEvent2_ON(masks) (masks).f8 |= (1ULL << (40))
#define VK_ID_CmdSetEvent2_BIT (1ULL << (40))
#define VK_ID_CmdSetEvent2_IDX (8)

#define PRINT_CmdSetEvent2 IS_VK_ID_CmdSetEvent2_ON(wrapper_printer_masks)
#define TRY_CmdSetEvent2(TRUE, FALSE) TRUE
#define has_device_wrapper_CmdSetEvent2(...) (wrapper_device_entrypoints.CmdSetEvent2)
#define has_physical_device_wrapper_CmdSetEvent2(...) (wrapper_physical_device_entrypoints.CmdSetEvent2)
#define name_of_wrapper_CmdSetEvent2(...) "wrapper_CmdSetEvent2"
#define VK_ID_CmdResetEvent2 554
#define IS_VK_ID_CmdResetEvent2_ON(masks) (((masks).f8 & (1ULL << (42))) != 0)
#define SET_VK_ID_CmdResetEvent2_ON(masks) (masks).f8 |= (1ULL << (42))
#define VK_ID_CmdResetEvent2_BIT (1ULL << (42))
#define VK_ID_CmdResetEvent2_IDX (8)

#define PRINT_CmdResetEvent2 IS_VK_ID_CmdResetEvent2_ON(wrapper_printer_masks)
#define TRY_CmdResetEvent2(TRUE, FALSE) TRUE
#define has_device_wrapper_CmdResetEvent2(...) (wrapper_device_entrypoints.CmdResetEvent2)
#define has_physical_device_wrapper_CmdResetEvent2(...) (wrapper_physical_device_entrypoints.CmdResetEvent2)
#define name_of_wrapper_CmdResetEvent2(...) "wrapper_CmdResetEvent2"
#define VK_ID_CmdWaitEvents2 556
#define IS_VK_ID_CmdWaitEvents2_ON(masks) (((masks).f8 & (1ULL << (44))) != 0)
#define SET_VK_ID_CmdWaitEvents2_ON(masks) (masks).f8 |= (1ULL << (44))
#define VK_ID_CmdWaitEvents2_BIT (1ULL << (44))
#define VK_ID_CmdWaitEvents2_IDX (8)

#define PRINT_CmdWaitEvents2 IS_VK_ID_CmdWaitEvents2_ON(wrapper_printer_masks)
#define TRY_CmdWaitEvents2(TRUE, FALSE) TRUE
#define has_device_wrapper_CmdWaitEvents2(...) (wrapper_device_entrypoints.CmdWaitEvents2)
#define has_physical_device_wrapper_CmdWaitEvents2(...) (wrapper_physical_device_entrypoints.CmdWaitEvents2)
#define name_of_wrapper_CmdWaitEvents2(...) "wrapper_CmdWaitEvents2"
#define VK_ID_CmdPipelineBarrier2 558
#define IS_VK_ID_CmdPipelineBarrier2_ON(masks) (((masks).f8 & (1ULL << (46))) != 0)
#define SET_VK_ID_CmdPipelineBarrier2_ON(masks) (masks).f8 |= (1ULL << (46))
#define VK_ID_CmdPipelineBarrier2_BIT (1ULL << (46))
#define VK_ID_CmdPipelineBarrier2_IDX (8)

#define PRINT_CmdPipelineBarrier2 IS_VK_ID_CmdPipelineBarrier2_ON(wrapper_printer_masks)
#define TRY_CmdPipelineBarrier2(TRUE, FALSE) TRUE
#define has_device_wrapper_CmdPipelineBarrier2(...) (wrapper_device_entrypoints.CmdPipelineBarrier2)
#define has_physical_device_wrapper_CmdPipelineBarrier2(...) (wrapper_physical_device_entrypoints.CmdPipelineBarrier2)
#define name_of_wrapper_CmdPipelineBarrier2(...) "wrapper_CmdPipelineBarrier2"
#define VK_ID_QueueSubmit2 560
#define IS_VK_ID_QueueSubmit2_ON(masks) (((masks).f8 & (1ULL << (48))) != 0)
#define SET_VK_ID_QueueSubmit2_ON(masks) (masks).f8 |= (1ULL << (48))
#define VK_ID_QueueSubmit2_BIT (1ULL << (48))
#define VK_ID_QueueSubmit2_IDX (8)

#define PRINT_QueueSubmit2 IS_VK_ID_QueueSubmit2_ON(wrapper_printer_masks)
#define TRY_QueueSubmit2(TRUE, FALSE) TRUE
#define has_device_wrapper_QueueSubmit2(...) (wrapper_device_entrypoints.QueueSubmit2)
#define has_physical_device_wrapper_QueueSubmit2(...) (wrapper_physical_device_entrypoints.QueueSubmit2)
#define name_of_wrapper_QueueSubmit2(...) "wrapper_QueueSubmit2"
#define VK_ID_CmdWriteTimestamp2 562
#define IS_VK_ID_CmdWriteTimestamp2_ON(masks) (((masks).f8 & (1ULL << (50))) != 0)
#define SET_VK_ID_CmdWriteTimestamp2_ON(masks) (masks).f8 |= (1ULL << (50))
#define VK_ID_CmdWriteTimestamp2_BIT (1ULL << (50))
#define VK_ID_CmdWriteTimestamp2_IDX (8)

#define PRINT_CmdWriteTimestamp2 IS_VK_ID_CmdWriteTimestamp2_ON(wrapper_printer_masks)
#define TRY_CmdWriteTimestamp2(TRUE, FALSE) TRUE
#define has_device_wrapper_CmdWriteTimestamp2(...) (wrapper_device_entrypoints.CmdWriteTimestamp2)
#define has_physical_device_wrapper_CmdWriteTimestamp2(...) (wrapper_physical_device_entrypoints.CmdWriteTimestamp2)
#define name_of_wrapper_CmdWriteTimestamp2(...) "wrapper_CmdWriteTimestamp2"
#define VK_ID_CmdWriteBufferMarker2AMD 564
#define IS_VK_ID_CmdWriteBufferMarker2AMD_ON(masks) (((masks).f8 & (1ULL << (52))) != 0)
#define SET_VK_ID_CmdWriteBufferMarker2AMD_ON(masks) (masks).f8 |= (1ULL << (52))
#define VK_ID_CmdWriteBufferMarker2AMD_BIT (1ULL << (52))
#define VK_ID_CmdWriteBufferMarker2AMD_IDX (8)

#define PRINT_CmdWriteBufferMarker2AMD IS_VK_ID_CmdWriteBufferMarker2AMD_ON(wrapper_printer_masks)
#define TRY_CmdWriteBufferMarker2AMD(TRUE, FALSE) TRUE
#define has_device_wrapper_CmdWriteBufferMarker2AMD(...) (wrapper_device_entrypoints.CmdWriteBufferMarker2AMD)
#define has_physical_device_wrapper_CmdWriteBufferMarker2AMD(...) (wrapper_physical_device_entrypoints.CmdWriteBufferMarker2AMD)
#define name_of_wrapper_CmdWriteBufferMarker2AMD(...) "wrapper_CmdWriteBufferMarker2AMD"
#define VK_ID_GetQueueCheckpointData2NV 565
#define IS_VK_ID_GetQueueCheckpointData2NV_ON(masks) (((masks).f8 & (1ULL << (53))) != 0)
#define SET_VK_ID_GetQueueCheckpointData2NV_ON(masks) (masks).f8 |= (1ULL << (53))
#define VK_ID_GetQueueCheckpointData2NV_BIT (1ULL << (53))
#define VK_ID_GetQueueCheckpointData2NV_IDX (8)

#define PRINT_GetQueueCheckpointData2NV IS_VK_ID_GetQueueCheckpointData2NV_ON(wrapper_printer_masks)
#define TRY_GetQueueCheckpointData2NV(TRUE, FALSE) TRUE
#define has_device_wrapper_GetQueueCheckpointData2NV(...) (wrapper_device_entrypoints.GetQueueCheckpointData2NV)
#define has_physical_device_wrapper_GetQueueCheckpointData2NV(...) (wrapper_physical_device_entrypoints.GetQueueCheckpointData2NV)
#define name_of_wrapper_GetQueueCheckpointData2NV(...) "wrapper_GetQueueCheckpointData2NV"
#define VK_ID_CopyMemoryToImageEXT 566
#define IS_VK_ID_CopyMemoryToImageEXT_ON(masks) (((masks).f8 & (1ULL << (54))) != 0)
#define SET_VK_ID_CopyMemoryToImageEXT_ON(masks) (masks).f8 |= (1ULL << (54))
#define VK_ID_CopyMemoryToImageEXT_BIT (1ULL << (54))
#define VK_ID_CopyMemoryToImageEXT_IDX (8)

#define PRINT_CopyMemoryToImageEXT IS_VK_ID_CopyMemoryToImageEXT_ON(wrapper_printer_masks)
#define TRY_CopyMemoryToImageEXT(TRUE, FALSE) TRUE
#define has_device_wrapper_CopyMemoryToImageEXT(...) (wrapper_device_entrypoints.CopyMemoryToImageEXT)
#define has_physical_device_wrapper_CopyMemoryToImageEXT(...) (wrapper_physical_device_entrypoints.CopyMemoryToImageEXT)
#define name_of_wrapper_CopyMemoryToImageEXT(...) "wrapper_CopyMemoryToImageEXT"
#define VK_ID_CopyImageToMemoryEXT 567
#define IS_VK_ID_CopyImageToMemoryEXT_ON(masks) (((masks).f8 & (1ULL << (55))) != 0)
#define SET_VK_ID_CopyImageToMemoryEXT_ON(masks) (masks).f8 |= (1ULL << (55))
#define VK_ID_CopyImageToMemoryEXT_BIT (1ULL << (55))
#define VK_ID_CopyImageToMemoryEXT_IDX (8)

#define PRINT_CopyImageToMemoryEXT IS_VK_ID_CopyImageToMemoryEXT_ON(wrapper_printer_masks)
#define TRY_CopyImageToMemoryEXT(TRUE, FALSE) TRUE
#define has_device_wrapper_CopyImageToMemoryEXT(...) (wrapper_device_entrypoints.CopyImageToMemoryEXT)
#define has_physical_device_wrapper_CopyImageToMemoryEXT(...) (wrapper_physical_device_entrypoints.CopyImageToMemoryEXT)
#define name_of_wrapper_CopyImageToMemoryEXT(...) "wrapper_CopyImageToMemoryEXT"
#define VK_ID_CopyImageToImageEXT 568
#define IS_VK_ID_CopyImageToImageEXT_ON(masks) (((masks).f8 & (1ULL << (56))) != 0)
#define SET_VK_ID_CopyImageToImageEXT_ON(masks) (masks).f8 |= (1ULL << (56))
#define VK_ID_CopyImageToImageEXT_BIT (1ULL << (56))
#define VK_ID_CopyImageToImageEXT_IDX (8)

#define PRINT_CopyImageToImageEXT IS_VK_ID_CopyImageToImageEXT_ON(wrapper_printer_masks)
#define TRY_CopyImageToImageEXT(TRUE, FALSE) TRUE
#define has_device_wrapper_CopyImageToImageEXT(...) (wrapper_device_entrypoints.CopyImageToImageEXT)
#define has_physical_device_wrapper_CopyImageToImageEXT(...) (wrapper_physical_device_entrypoints.CopyImageToImageEXT)
#define name_of_wrapper_CopyImageToImageEXT(...) "wrapper_CopyImageToImageEXT"
#define VK_ID_TransitionImageLayoutEXT 569
#define IS_VK_ID_TransitionImageLayoutEXT_ON(masks) (((masks).f8 & (1ULL << (57))) != 0)
#define SET_VK_ID_TransitionImageLayoutEXT_ON(masks) (masks).f8 |= (1ULL << (57))
#define VK_ID_TransitionImageLayoutEXT_BIT (1ULL << (57))
#define VK_ID_TransitionImageLayoutEXT_IDX (8)

#define PRINT_TransitionImageLayoutEXT IS_VK_ID_TransitionImageLayoutEXT_ON(wrapper_printer_masks)
#define TRY_TransitionImageLayoutEXT(TRUE, FALSE) TRUE
#define has_device_wrapper_TransitionImageLayoutEXT(...) (wrapper_device_entrypoints.TransitionImageLayoutEXT)
#define has_physical_device_wrapper_TransitionImageLayoutEXT(...) (wrapper_physical_device_entrypoints.TransitionImageLayoutEXT)
#define name_of_wrapper_TransitionImageLayoutEXT(...) "wrapper_TransitionImageLayoutEXT"
#define VK_ID_GetPhysicalDeviceVideoCapabilitiesKHR 570
#define IS_VK_ID_GetPhysicalDeviceVideoCapabilitiesKHR_ON(masks) (((masks).f8 & (1ULL << (58))) != 0)
#define SET_VK_ID_GetPhysicalDeviceVideoCapabilitiesKHR_ON(masks) (masks).f8 |= (1ULL << (58))
#define VK_ID_GetPhysicalDeviceVideoCapabilitiesKHR_BIT (1ULL << (58))
#define VK_ID_GetPhysicalDeviceVideoCapabilitiesKHR_IDX (8)

#define PRINT_GetPhysicalDeviceVideoCapabilitiesKHR IS_VK_ID_GetPhysicalDeviceVideoCapabilitiesKHR_ON(wrapper_printer_masks)
#define TRY_GetPhysicalDeviceVideoCapabilitiesKHR(TRUE, FALSE) TRUE
#define has_device_wrapper_GetPhysicalDeviceVideoCapabilitiesKHR(...) (wrapper_device_entrypoints.GetPhysicalDeviceVideoCapabilitiesKHR)
#define has_physical_device_wrapper_GetPhysicalDeviceVideoCapabilitiesKHR(...) (wrapper_physical_device_entrypoints.GetPhysicalDeviceVideoCapabilitiesKHR)
#define name_of_wrapper_GetPhysicalDeviceVideoCapabilitiesKHR(...) "wrapper_GetPhysicalDeviceVideoCapabilitiesKHR"
#define VK_ID_GetPhysicalDeviceVideoFormatPropertiesKHR 571
#define IS_VK_ID_GetPhysicalDeviceVideoFormatPropertiesKHR_ON(masks) (((masks).f8 & (1ULL << (59))) != 0)
#define SET_VK_ID_GetPhysicalDeviceVideoFormatPropertiesKHR_ON(masks) (masks).f8 |= (1ULL << (59))
#define VK_ID_GetPhysicalDeviceVideoFormatPropertiesKHR_BIT (1ULL << (59))
#define VK_ID_GetPhysicalDeviceVideoFormatPropertiesKHR_IDX (8)

#define PRINT_GetPhysicalDeviceVideoFormatPropertiesKHR IS_VK_ID_GetPhysicalDeviceVideoFormatPropertiesKHR_ON(wrapper_printer_masks)
#define TRY_GetPhysicalDeviceVideoFormatPropertiesKHR(TRUE, FALSE) TRUE
#define has_device_wrapper_GetPhysicalDeviceVideoFormatPropertiesKHR(...) (wrapper_device_entrypoints.GetPhysicalDeviceVideoFormatPropertiesKHR)
#define has_physical_device_wrapper_GetPhysicalDeviceVideoFormatPropertiesKHR(...) (wrapper_physical_device_entrypoints.GetPhysicalDeviceVideoFormatPropertiesKHR)
#define name_of_wrapper_GetPhysicalDeviceVideoFormatPropertiesKHR(...) "wrapper_GetPhysicalDeviceVideoFormatPropertiesKHR"
#define VK_ID_GetPhysicalDeviceVideoEncodeQualityLevelPropertiesKHR 572
#define IS_VK_ID_GetPhysicalDeviceVideoEncodeQualityLevelPropertiesKHR_ON(masks) (((masks).f8 & (1ULL << (60))) != 0)
#define SET_VK_ID_GetPhysicalDeviceVideoEncodeQualityLevelPropertiesKHR_ON(masks) (masks).f8 |= (1ULL << (60))
#define VK_ID_GetPhysicalDeviceVideoEncodeQualityLevelPropertiesKHR_BIT (1ULL << (60))
#define VK_ID_GetPhysicalDeviceVideoEncodeQualityLevelPropertiesKHR_IDX (8)

#define PRINT_GetPhysicalDeviceVideoEncodeQualityLevelPropertiesKHR IS_VK_ID_GetPhysicalDeviceVideoEncodeQualityLevelPropertiesKHR_ON(wrapper_printer_masks)
#define TRY_GetPhysicalDeviceVideoEncodeQualityLevelPropertiesKHR(TRUE, FALSE) TRUE
#define has_device_wrapper_GetPhysicalDeviceVideoEncodeQualityLevelPropertiesKHR(...) (wrapper_device_entrypoints.GetPhysicalDeviceVideoEncodeQualityLevelPropertiesKHR)
#define has_physical_device_wrapper_GetPhysicalDeviceVideoEncodeQualityLevelPropertiesKHR(...) (wrapper_physical_device_entrypoints.GetPhysicalDeviceVideoEncodeQualityLevelPropertiesKHR)
#define name_of_wrapper_GetPhysicalDeviceVideoEncodeQualityLevelPropertiesKHR(...) "wrapper_GetPhysicalDeviceVideoEncodeQualityLevelPropertiesKHR"
#define VK_ID_CreateVideoSessionKHR 573
#define IS_VK_ID_CreateVideoSessionKHR_ON(masks) (((masks).f8 & (1ULL << (61))) != 0)
#define SET_VK_ID_CreateVideoSessionKHR_ON(masks) (masks).f8 |= (1ULL << (61))
#define VK_ID_CreateVideoSessionKHR_BIT (1ULL << (61))
#define VK_ID_CreateVideoSessionKHR_IDX (8)

#define PRINT_CreateVideoSessionKHR IS_VK_ID_CreateVideoSessionKHR_ON(wrapper_printer_masks)
#define TRY_CreateVideoSessionKHR(TRUE, FALSE) TRUE
#define has_device_wrapper_CreateVideoSessionKHR(...) (wrapper_device_entrypoints.CreateVideoSessionKHR)
#define has_physical_device_wrapper_CreateVideoSessionKHR(...) (wrapper_physical_device_entrypoints.CreateVideoSessionKHR)
#define name_of_wrapper_CreateVideoSessionKHR(...) "wrapper_CreateVideoSessionKHR"
#define VK_ID_DestroyVideoSessionKHR 574
#define IS_VK_ID_DestroyVideoSessionKHR_ON(masks) (((masks).f8 & (1ULL << (62))) != 0)
#define SET_VK_ID_DestroyVideoSessionKHR_ON(masks) (masks).f8 |= (1ULL << (62))
#define VK_ID_DestroyVideoSessionKHR_BIT (1ULL << (62))
#define VK_ID_DestroyVideoSessionKHR_IDX (8)

#define PRINT_DestroyVideoSessionKHR IS_VK_ID_DestroyVideoSessionKHR_ON(wrapper_printer_masks)
#define TRY_DestroyVideoSessionKHR(TRUE, FALSE) TRUE
#define has_device_wrapper_DestroyVideoSessionKHR(...) (wrapper_device_entrypoints.DestroyVideoSessionKHR)
#define has_physical_device_wrapper_DestroyVideoSessionKHR(...) (wrapper_physical_device_entrypoints.DestroyVideoSessionKHR)
#define name_of_wrapper_DestroyVideoSessionKHR(...) "wrapper_DestroyVideoSessionKHR"
#define VK_ID_CreateVideoSessionParametersKHR 575
#define IS_VK_ID_CreateVideoSessionParametersKHR_ON(masks) (((masks).f8 & (1ULL << (63))) != 0)
#define SET_VK_ID_CreateVideoSessionParametersKHR_ON(masks) (masks).f8 |= (1ULL << (63))
#define VK_ID_CreateVideoSessionParametersKHR_BIT (1ULL << (63))
#define VK_ID_CreateVideoSessionParametersKHR_IDX (8)

#define PRINT_CreateVideoSessionParametersKHR IS_VK_ID_CreateVideoSessionParametersKHR_ON(wrapper_printer_masks)
#define TRY_CreateVideoSessionParametersKHR(TRUE, FALSE) TRUE
#define has_device_wrapper_CreateVideoSessionParametersKHR(...) (wrapper_device_entrypoints.CreateVideoSessionParametersKHR)
#define has_physical_device_wrapper_CreateVideoSessionParametersKHR(...) (wrapper_physical_device_entrypoints.CreateVideoSessionParametersKHR)
#define name_of_wrapper_CreateVideoSessionParametersKHR(...) "wrapper_CreateVideoSessionParametersKHR"
#define VK_ID_UpdateVideoSessionParametersKHR 576
#define IS_VK_ID_UpdateVideoSessionParametersKHR_ON(masks) (((masks).f9 & (1ULL << (0))) != 0)
#define SET_VK_ID_UpdateVideoSessionParametersKHR_ON(masks) (masks).f9 |= (1ULL << (0))
#define VK_ID_UpdateVideoSessionParametersKHR_BIT (1ULL << (0))
#define VK_ID_UpdateVideoSessionParametersKHR_IDX (9)

#define PRINT_UpdateVideoSessionParametersKHR IS_VK_ID_UpdateVideoSessionParametersKHR_ON(wrapper_printer_masks)
#define TRY_UpdateVideoSessionParametersKHR(TRUE, FALSE) TRUE
#define has_device_wrapper_UpdateVideoSessionParametersKHR(...) (wrapper_device_entrypoints.UpdateVideoSessionParametersKHR)
#define has_physical_device_wrapper_UpdateVideoSessionParametersKHR(...) (wrapper_physical_device_entrypoints.UpdateVideoSessionParametersKHR)
#define name_of_wrapper_UpdateVideoSessionParametersKHR(...) "wrapper_UpdateVideoSessionParametersKHR"
#define VK_ID_GetEncodedVideoSessionParametersKHR 577
#define IS_VK_ID_GetEncodedVideoSessionParametersKHR_ON(masks) (((masks).f9 & (1ULL << (1))) != 0)
#define SET_VK_ID_GetEncodedVideoSessionParametersKHR_ON(masks) (masks).f9 |= (1ULL << (1))
#define VK_ID_GetEncodedVideoSessionParametersKHR_BIT (1ULL << (1))
#define VK_ID_GetEncodedVideoSessionParametersKHR_IDX (9)

#define PRINT_GetEncodedVideoSessionParametersKHR IS_VK_ID_GetEncodedVideoSessionParametersKHR_ON(wrapper_printer_masks)
#define TRY_GetEncodedVideoSessionParametersKHR(TRUE, FALSE) TRUE
#define has_device_wrapper_GetEncodedVideoSessionParametersKHR(...) (wrapper_device_entrypoints.GetEncodedVideoSessionParametersKHR)
#define has_physical_device_wrapper_GetEncodedVideoSessionParametersKHR(...) (wrapper_physical_device_entrypoints.GetEncodedVideoSessionParametersKHR)
#define name_of_wrapper_GetEncodedVideoSessionParametersKHR(...) "wrapper_GetEncodedVideoSessionParametersKHR"
#define VK_ID_DestroyVideoSessionParametersKHR 578
#define IS_VK_ID_DestroyVideoSessionParametersKHR_ON(masks) (((masks).f9 & (1ULL << (2))) != 0)
#define SET_VK_ID_DestroyVideoSessionParametersKHR_ON(masks) (masks).f9 |= (1ULL << (2))
#define VK_ID_DestroyVideoSessionParametersKHR_BIT (1ULL << (2))
#define VK_ID_DestroyVideoSessionParametersKHR_IDX (9)

#define PRINT_DestroyVideoSessionParametersKHR IS_VK_ID_DestroyVideoSessionParametersKHR_ON(wrapper_printer_masks)
#define TRY_DestroyVideoSessionParametersKHR(TRUE, FALSE) TRUE
#define has_device_wrapper_DestroyVideoSessionParametersKHR(...) (wrapper_device_entrypoints.DestroyVideoSessionParametersKHR)
#define has_physical_device_wrapper_DestroyVideoSessionParametersKHR(...) (wrapper_physical_device_entrypoints.DestroyVideoSessionParametersKHR)
#define name_of_wrapper_DestroyVideoSessionParametersKHR(...) "wrapper_DestroyVideoSessionParametersKHR"
#define VK_ID_GetVideoSessionMemoryRequirementsKHR 579
#define IS_VK_ID_GetVideoSessionMemoryRequirementsKHR_ON(masks) (((masks).f9 & (1ULL << (3))) != 0)
#define SET_VK_ID_GetVideoSessionMemoryRequirementsKHR_ON(masks) (masks).f9 |= (1ULL << (3))
#define VK_ID_GetVideoSessionMemoryRequirementsKHR_BIT (1ULL << (3))
#define VK_ID_GetVideoSessionMemoryRequirementsKHR_IDX (9)

#define PRINT_GetVideoSessionMemoryRequirementsKHR IS_VK_ID_GetVideoSessionMemoryRequirementsKHR_ON(wrapper_printer_masks)
#define TRY_GetVideoSessionMemoryRequirementsKHR(TRUE, FALSE) TRUE
#define has_device_wrapper_GetVideoSessionMemoryRequirementsKHR(...) (wrapper_device_entrypoints.GetVideoSessionMemoryRequirementsKHR)
#define has_physical_device_wrapper_GetVideoSessionMemoryRequirementsKHR(...) (wrapper_physical_device_entrypoints.GetVideoSessionMemoryRequirementsKHR)
#define name_of_wrapper_GetVideoSessionMemoryRequirementsKHR(...) "wrapper_GetVideoSessionMemoryRequirementsKHR"
#define VK_ID_BindVideoSessionMemoryKHR 580
#define IS_VK_ID_BindVideoSessionMemoryKHR_ON(masks) (((masks).f9 & (1ULL << (4))) != 0)
#define SET_VK_ID_BindVideoSessionMemoryKHR_ON(masks) (masks).f9 |= (1ULL << (4))
#define VK_ID_BindVideoSessionMemoryKHR_BIT (1ULL << (4))
#define VK_ID_BindVideoSessionMemoryKHR_IDX (9)

#define PRINT_BindVideoSessionMemoryKHR IS_VK_ID_BindVideoSessionMemoryKHR_ON(wrapper_printer_masks)
#define TRY_BindVideoSessionMemoryKHR(TRUE, FALSE) TRUE
#define has_device_wrapper_BindVideoSessionMemoryKHR(...) (wrapper_device_entrypoints.BindVideoSessionMemoryKHR)
#define has_physical_device_wrapper_BindVideoSessionMemoryKHR(...) (wrapper_physical_device_entrypoints.BindVideoSessionMemoryKHR)
#define name_of_wrapper_BindVideoSessionMemoryKHR(...) "wrapper_BindVideoSessionMemoryKHR"
#define VK_ID_CmdDecodeVideoKHR 581
#define IS_VK_ID_CmdDecodeVideoKHR_ON(masks) (((masks).f9 & (1ULL << (5))) != 0)
#define SET_VK_ID_CmdDecodeVideoKHR_ON(masks) (masks).f9 |= (1ULL << (5))
#define VK_ID_CmdDecodeVideoKHR_BIT (1ULL << (5))
#define VK_ID_CmdDecodeVideoKHR_IDX (9)

#define PRINT_CmdDecodeVideoKHR IS_VK_ID_CmdDecodeVideoKHR_ON(wrapper_printer_masks)
#define TRY_CmdDecodeVideoKHR(TRUE, FALSE) TRUE
#define has_device_wrapper_CmdDecodeVideoKHR(...) (wrapper_device_entrypoints.CmdDecodeVideoKHR)
#define has_physical_device_wrapper_CmdDecodeVideoKHR(...) (wrapper_physical_device_entrypoints.CmdDecodeVideoKHR)
#define name_of_wrapper_CmdDecodeVideoKHR(...) "wrapper_CmdDecodeVideoKHR"
#define VK_ID_CmdBeginVideoCodingKHR 582
#define IS_VK_ID_CmdBeginVideoCodingKHR_ON(masks) (((masks).f9 & (1ULL << (6))) != 0)
#define SET_VK_ID_CmdBeginVideoCodingKHR_ON(masks) (masks).f9 |= (1ULL << (6))
#define VK_ID_CmdBeginVideoCodingKHR_BIT (1ULL << (6))
#define VK_ID_CmdBeginVideoCodingKHR_IDX (9)

#define PRINT_CmdBeginVideoCodingKHR IS_VK_ID_CmdBeginVideoCodingKHR_ON(wrapper_printer_masks)
#define TRY_CmdBeginVideoCodingKHR(TRUE, FALSE) TRUE
#define has_device_wrapper_CmdBeginVideoCodingKHR(...) (wrapper_device_entrypoints.CmdBeginVideoCodingKHR)
#define has_physical_device_wrapper_CmdBeginVideoCodingKHR(...) (wrapper_physical_device_entrypoints.CmdBeginVideoCodingKHR)
#define name_of_wrapper_CmdBeginVideoCodingKHR(...) "wrapper_CmdBeginVideoCodingKHR"
#define VK_ID_CmdControlVideoCodingKHR 583
#define IS_VK_ID_CmdControlVideoCodingKHR_ON(masks) (((masks).f9 & (1ULL << (7))) != 0)
#define SET_VK_ID_CmdControlVideoCodingKHR_ON(masks) (masks).f9 |= (1ULL << (7))
#define VK_ID_CmdControlVideoCodingKHR_BIT (1ULL << (7))
#define VK_ID_CmdControlVideoCodingKHR_IDX (9)

#define PRINT_CmdControlVideoCodingKHR IS_VK_ID_CmdControlVideoCodingKHR_ON(wrapper_printer_masks)
#define TRY_CmdControlVideoCodingKHR(TRUE, FALSE) TRUE
#define has_device_wrapper_CmdControlVideoCodingKHR(...) (wrapper_device_entrypoints.CmdControlVideoCodingKHR)
#define has_physical_device_wrapper_CmdControlVideoCodingKHR(...) (wrapper_physical_device_entrypoints.CmdControlVideoCodingKHR)
#define name_of_wrapper_CmdControlVideoCodingKHR(...) "wrapper_CmdControlVideoCodingKHR"
#define VK_ID_CmdEndVideoCodingKHR 584
#define IS_VK_ID_CmdEndVideoCodingKHR_ON(masks) (((masks).f9 & (1ULL << (8))) != 0)
#define SET_VK_ID_CmdEndVideoCodingKHR_ON(masks) (masks).f9 |= (1ULL << (8))
#define VK_ID_CmdEndVideoCodingKHR_BIT (1ULL << (8))
#define VK_ID_CmdEndVideoCodingKHR_IDX (9)

#define PRINT_CmdEndVideoCodingKHR IS_VK_ID_CmdEndVideoCodingKHR_ON(wrapper_printer_masks)
#define TRY_CmdEndVideoCodingKHR(TRUE, FALSE) TRUE
#define has_device_wrapper_CmdEndVideoCodingKHR(...) (wrapper_device_entrypoints.CmdEndVideoCodingKHR)
#define has_physical_device_wrapper_CmdEndVideoCodingKHR(...) (wrapper_physical_device_entrypoints.CmdEndVideoCodingKHR)
#define name_of_wrapper_CmdEndVideoCodingKHR(...) "wrapper_CmdEndVideoCodingKHR"
#define VK_ID_CmdEncodeVideoKHR 585
#define IS_VK_ID_CmdEncodeVideoKHR_ON(masks) (((masks).f9 & (1ULL << (9))) != 0)
#define SET_VK_ID_CmdEncodeVideoKHR_ON(masks) (masks).f9 |= (1ULL << (9))
#define VK_ID_CmdEncodeVideoKHR_BIT (1ULL << (9))
#define VK_ID_CmdEncodeVideoKHR_IDX (9)

#define PRINT_CmdEncodeVideoKHR IS_VK_ID_CmdEncodeVideoKHR_ON(wrapper_printer_masks)
#define TRY_CmdEncodeVideoKHR(TRUE, FALSE) TRUE
#define has_device_wrapper_CmdEncodeVideoKHR(...) (wrapper_device_entrypoints.CmdEncodeVideoKHR)
#define has_physical_device_wrapper_CmdEncodeVideoKHR(...) (wrapper_physical_device_entrypoints.CmdEncodeVideoKHR)
#define name_of_wrapper_CmdEncodeVideoKHR(...) "wrapper_CmdEncodeVideoKHR"
#define VK_ID_CmdDecompressMemoryNV 586
#define IS_VK_ID_CmdDecompressMemoryNV_ON(masks) (((masks).f9 & (1ULL << (10))) != 0)
#define SET_VK_ID_CmdDecompressMemoryNV_ON(masks) (masks).f9 |= (1ULL << (10))
#define VK_ID_CmdDecompressMemoryNV_BIT (1ULL << (10))
#define VK_ID_CmdDecompressMemoryNV_IDX (9)

#define PRINT_CmdDecompressMemoryNV IS_VK_ID_CmdDecompressMemoryNV_ON(wrapper_printer_masks)
#define TRY_CmdDecompressMemoryNV(TRUE, FALSE) TRUE
#define has_device_wrapper_CmdDecompressMemoryNV(...) (wrapper_device_entrypoints.CmdDecompressMemoryNV)
#define has_physical_device_wrapper_CmdDecompressMemoryNV(...) (wrapper_physical_device_entrypoints.CmdDecompressMemoryNV)
#define name_of_wrapper_CmdDecompressMemoryNV(...) "wrapper_CmdDecompressMemoryNV"
#define VK_ID_CmdDecompressMemoryIndirectCountNV 587
#define IS_VK_ID_CmdDecompressMemoryIndirectCountNV_ON(masks) (((masks).f9 & (1ULL << (11))) != 0)
#define SET_VK_ID_CmdDecompressMemoryIndirectCountNV_ON(masks) (masks).f9 |= (1ULL << (11))
#define VK_ID_CmdDecompressMemoryIndirectCountNV_BIT (1ULL << (11))
#define VK_ID_CmdDecompressMemoryIndirectCountNV_IDX (9)

#define PRINT_CmdDecompressMemoryIndirectCountNV IS_VK_ID_CmdDecompressMemoryIndirectCountNV_ON(wrapper_printer_masks)
#define TRY_CmdDecompressMemoryIndirectCountNV(TRUE, FALSE) TRUE
#define has_device_wrapper_CmdDecompressMemoryIndirectCountNV(...) (wrapper_device_entrypoints.CmdDecompressMemoryIndirectCountNV)
#define has_physical_device_wrapper_CmdDecompressMemoryIndirectCountNV(...) (wrapper_physical_device_entrypoints.CmdDecompressMemoryIndirectCountNV)
#define name_of_wrapper_CmdDecompressMemoryIndirectCountNV(...) "wrapper_CmdDecompressMemoryIndirectCountNV"
#define VK_ID_CreateCuModuleNVX 588
#define IS_VK_ID_CreateCuModuleNVX_ON(masks) (((masks).f9 & (1ULL << (12))) != 0)
#define SET_VK_ID_CreateCuModuleNVX_ON(masks) (masks).f9 |= (1ULL << (12))
#define VK_ID_CreateCuModuleNVX_BIT (1ULL << (12))
#define VK_ID_CreateCuModuleNVX_IDX (9)

#define PRINT_CreateCuModuleNVX IS_VK_ID_CreateCuModuleNVX_ON(wrapper_printer_masks)
#define TRY_CreateCuModuleNVX(TRUE, FALSE) TRUE
#define has_device_wrapper_CreateCuModuleNVX(...) (wrapper_device_entrypoints.CreateCuModuleNVX)
#define has_physical_device_wrapper_CreateCuModuleNVX(...) (wrapper_physical_device_entrypoints.CreateCuModuleNVX)
#define name_of_wrapper_CreateCuModuleNVX(...) "wrapper_CreateCuModuleNVX"
#define VK_ID_CreateCuFunctionNVX 589
#define IS_VK_ID_CreateCuFunctionNVX_ON(masks) (((masks).f9 & (1ULL << (13))) != 0)
#define SET_VK_ID_CreateCuFunctionNVX_ON(masks) (masks).f9 |= (1ULL << (13))
#define VK_ID_CreateCuFunctionNVX_BIT (1ULL << (13))
#define VK_ID_CreateCuFunctionNVX_IDX (9)

#define PRINT_CreateCuFunctionNVX IS_VK_ID_CreateCuFunctionNVX_ON(wrapper_printer_masks)
#define TRY_CreateCuFunctionNVX(TRUE, FALSE) TRUE
#define has_device_wrapper_CreateCuFunctionNVX(...) (wrapper_device_entrypoints.CreateCuFunctionNVX)
#define has_physical_device_wrapper_CreateCuFunctionNVX(...) (wrapper_physical_device_entrypoints.CreateCuFunctionNVX)
#define name_of_wrapper_CreateCuFunctionNVX(...) "wrapper_CreateCuFunctionNVX"
#define VK_ID_DestroyCuModuleNVX 590
#define IS_VK_ID_DestroyCuModuleNVX_ON(masks) (((masks).f9 & (1ULL << (14))) != 0)
#define SET_VK_ID_DestroyCuModuleNVX_ON(masks) (masks).f9 |= (1ULL << (14))
#define VK_ID_DestroyCuModuleNVX_BIT (1ULL << (14))
#define VK_ID_DestroyCuModuleNVX_IDX (9)

#define PRINT_DestroyCuModuleNVX IS_VK_ID_DestroyCuModuleNVX_ON(wrapper_printer_masks)
#define TRY_DestroyCuModuleNVX(TRUE, FALSE) TRUE
#define has_device_wrapper_DestroyCuModuleNVX(...) (wrapper_device_entrypoints.DestroyCuModuleNVX)
#define has_physical_device_wrapper_DestroyCuModuleNVX(...) (wrapper_physical_device_entrypoints.DestroyCuModuleNVX)
#define name_of_wrapper_DestroyCuModuleNVX(...) "wrapper_DestroyCuModuleNVX"
#define VK_ID_DestroyCuFunctionNVX 591
#define IS_VK_ID_DestroyCuFunctionNVX_ON(masks) (((masks).f9 & (1ULL << (15))) != 0)
#define SET_VK_ID_DestroyCuFunctionNVX_ON(masks) (masks).f9 |= (1ULL << (15))
#define VK_ID_DestroyCuFunctionNVX_BIT (1ULL << (15))
#define VK_ID_DestroyCuFunctionNVX_IDX (9)

#define PRINT_DestroyCuFunctionNVX IS_VK_ID_DestroyCuFunctionNVX_ON(wrapper_printer_masks)
#define TRY_DestroyCuFunctionNVX(TRUE, FALSE) TRUE
#define has_device_wrapper_DestroyCuFunctionNVX(...) (wrapper_device_entrypoints.DestroyCuFunctionNVX)
#define has_physical_device_wrapper_DestroyCuFunctionNVX(...) (wrapper_physical_device_entrypoints.DestroyCuFunctionNVX)
#define name_of_wrapper_DestroyCuFunctionNVX(...) "wrapper_DestroyCuFunctionNVX"
#define VK_ID_CmdCuLaunchKernelNVX 592
#define IS_VK_ID_CmdCuLaunchKernelNVX_ON(masks) (((masks).f9 & (1ULL << (16))) != 0)
#define SET_VK_ID_CmdCuLaunchKernelNVX_ON(masks) (masks).f9 |= (1ULL << (16))
#define VK_ID_CmdCuLaunchKernelNVX_BIT (1ULL << (16))
#define VK_ID_CmdCuLaunchKernelNVX_IDX (9)

#define PRINT_CmdCuLaunchKernelNVX IS_VK_ID_CmdCuLaunchKernelNVX_ON(wrapper_printer_masks)
#define TRY_CmdCuLaunchKernelNVX(TRUE, FALSE) TRUE
#define has_device_wrapper_CmdCuLaunchKernelNVX(...) (wrapper_device_entrypoints.CmdCuLaunchKernelNVX)
#define has_physical_device_wrapper_CmdCuLaunchKernelNVX(...) (wrapper_physical_device_entrypoints.CmdCuLaunchKernelNVX)
#define name_of_wrapper_CmdCuLaunchKernelNVX(...) "wrapper_CmdCuLaunchKernelNVX"
#define VK_ID_GetDescriptorSetLayoutSizeEXT 593
#define IS_VK_ID_GetDescriptorSetLayoutSizeEXT_ON(masks) (((masks).f9 & (1ULL << (17))) != 0)
#define SET_VK_ID_GetDescriptorSetLayoutSizeEXT_ON(masks) (masks).f9 |= (1ULL << (17))
#define VK_ID_GetDescriptorSetLayoutSizeEXT_BIT (1ULL << (17))
#define VK_ID_GetDescriptorSetLayoutSizeEXT_IDX (9)

#define PRINT_GetDescriptorSetLayoutSizeEXT IS_VK_ID_GetDescriptorSetLayoutSizeEXT_ON(wrapper_printer_masks)
#define TRY_GetDescriptorSetLayoutSizeEXT(TRUE, FALSE) TRUE
#define has_device_wrapper_GetDescriptorSetLayoutSizeEXT(...) (wrapper_device_entrypoints.GetDescriptorSetLayoutSizeEXT)
#define has_physical_device_wrapper_GetDescriptorSetLayoutSizeEXT(...) (wrapper_physical_device_entrypoints.GetDescriptorSetLayoutSizeEXT)
#define name_of_wrapper_GetDescriptorSetLayoutSizeEXT(...) "wrapper_GetDescriptorSetLayoutSizeEXT"
#define VK_ID_GetDescriptorSetLayoutBindingOffsetEXT 594
#define IS_VK_ID_GetDescriptorSetLayoutBindingOffsetEXT_ON(masks) (((masks).f9 & (1ULL << (18))) != 0)
#define SET_VK_ID_GetDescriptorSetLayoutBindingOffsetEXT_ON(masks) (masks).f9 |= (1ULL << (18))
#define VK_ID_GetDescriptorSetLayoutBindingOffsetEXT_BIT (1ULL << (18))
#define VK_ID_GetDescriptorSetLayoutBindingOffsetEXT_IDX (9)

#define PRINT_GetDescriptorSetLayoutBindingOffsetEXT IS_VK_ID_GetDescriptorSetLayoutBindingOffsetEXT_ON(wrapper_printer_masks)
#define TRY_GetDescriptorSetLayoutBindingOffsetEXT(TRUE, FALSE) TRUE
#define has_device_wrapper_GetDescriptorSetLayoutBindingOffsetEXT(...) (wrapper_device_entrypoints.GetDescriptorSetLayoutBindingOffsetEXT)
#define has_physical_device_wrapper_GetDescriptorSetLayoutBindingOffsetEXT(...) (wrapper_physical_device_entrypoints.GetDescriptorSetLayoutBindingOffsetEXT)
#define name_of_wrapper_GetDescriptorSetLayoutBindingOffsetEXT(...) "wrapper_GetDescriptorSetLayoutBindingOffsetEXT"
#define VK_ID_GetDescriptorEXT 595
#define IS_VK_ID_GetDescriptorEXT_ON(masks) (((masks).f9 & (1ULL << (19))) != 0)
#define SET_VK_ID_GetDescriptorEXT_ON(masks) (masks).f9 |= (1ULL << (19))
#define VK_ID_GetDescriptorEXT_BIT (1ULL << (19))
#define VK_ID_GetDescriptorEXT_IDX (9)

#define PRINT_GetDescriptorEXT IS_VK_ID_GetDescriptorEXT_ON(wrapper_printer_masks)
#define TRY_GetDescriptorEXT(TRUE, FALSE) TRUE
#define has_device_wrapper_GetDescriptorEXT(...) (wrapper_device_entrypoints.GetDescriptorEXT)
#define has_physical_device_wrapper_GetDescriptorEXT(...) (wrapper_physical_device_entrypoints.GetDescriptorEXT)
#define name_of_wrapper_GetDescriptorEXT(...) "wrapper_GetDescriptorEXT"
#define VK_ID_CmdBindDescriptorBuffersEXT 596
#define IS_VK_ID_CmdBindDescriptorBuffersEXT_ON(masks) (((masks).f9 & (1ULL << (20))) != 0)
#define SET_VK_ID_CmdBindDescriptorBuffersEXT_ON(masks) (masks).f9 |= (1ULL << (20))
#define VK_ID_CmdBindDescriptorBuffersEXT_BIT (1ULL << (20))
#define VK_ID_CmdBindDescriptorBuffersEXT_IDX (9)

#define PRINT_CmdBindDescriptorBuffersEXT IS_VK_ID_CmdBindDescriptorBuffersEXT_ON(wrapper_printer_masks)
#define TRY_CmdBindDescriptorBuffersEXT(TRUE, FALSE) TRUE
#define has_device_wrapper_CmdBindDescriptorBuffersEXT(...) (wrapper_device_entrypoints.CmdBindDescriptorBuffersEXT)
#define has_physical_device_wrapper_CmdBindDescriptorBuffersEXT(...) (wrapper_physical_device_entrypoints.CmdBindDescriptorBuffersEXT)
#define name_of_wrapper_CmdBindDescriptorBuffersEXT(...) "wrapper_CmdBindDescriptorBuffersEXT"
#define VK_ID_CmdSetDescriptorBufferOffsetsEXT 597
#define IS_VK_ID_CmdSetDescriptorBufferOffsetsEXT_ON(masks) (((masks).f9 & (1ULL << (21))) != 0)
#define SET_VK_ID_CmdSetDescriptorBufferOffsetsEXT_ON(masks) (masks).f9 |= (1ULL << (21))
#define VK_ID_CmdSetDescriptorBufferOffsetsEXT_BIT (1ULL << (21))
#define VK_ID_CmdSetDescriptorBufferOffsetsEXT_IDX (9)

#define PRINT_CmdSetDescriptorBufferOffsetsEXT IS_VK_ID_CmdSetDescriptorBufferOffsetsEXT_ON(wrapper_printer_masks)
#define TRY_CmdSetDescriptorBufferOffsetsEXT(TRUE, FALSE) TRUE
#define has_device_wrapper_CmdSetDescriptorBufferOffsetsEXT(...) (wrapper_device_entrypoints.CmdSetDescriptorBufferOffsetsEXT)
#define has_physical_device_wrapper_CmdSetDescriptorBufferOffsetsEXT(...) (wrapper_physical_device_entrypoints.CmdSetDescriptorBufferOffsetsEXT)
#define name_of_wrapper_CmdSetDescriptorBufferOffsetsEXT(...) "wrapper_CmdSetDescriptorBufferOffsetsEXT"
#define VK_ID_CmdBindDescriptorBufferEmbeddedSamplersEXT 598
#define IS_VK_ID_CmdBindDescriptorBufferEmbeddedSamplersEXT_ON(masks) (((masks).f9 & (1ULL << (22))) != 0)
#define SET_VK_ID_CmdBindDescriptorBufferEmbeddedSamplersEXT_ON(masks) (masks).f9 |= (1ULL << (22))
#define VK_ID_CmdBindDescriptorBufferEmbeddedSamplersEXT_BIT (1ULL << (22))
#define VK_ID_CmdBindDescriptorBufferEmbeddedSamplersEXT_IDX (9)

#define PRINT_CmdBindDescriptorBufferEmbeddedSamplersEXT IS_VK_ID_CmdBindDescriptorBufferEmbeddedSamplersEXT_ON(wrapper_printer_masks)
#define TRY_CmdBindDescriptorBufferEmbeddedSamplersEXT(TRUE, FALSE) TRUE
#define has_device_wrapper_CmdBindDescriptorBufferEmbeddedSamplersEXT(...) (wrapper_device_entrypoints.CmdBindDescriptorBufferEmbeddedSamplersEXT)
#define has_physical_device_wrapper_CmdBindDescriptorBufferEmbeddedSamplersEXT(...) (wrapper_physical_device_entrypoints.CmdBindDescriptorBufferEmbeddedSamplersEXT)
#define name_of_wrapper_CmdBindDescriptorBufferEmbeddedSamplersEXT(...) "wrapper_CmdBindDescriptorBufferEmbeddedSamplersEXT"
#define VK_ID_GetBufferOpaqueCaptureDescriptorDataEXT 599
#define IS_VK_ID_GetBufferOpaqueCaptureDescriptorDataEXT_ON(masks) (((masks).f9 & (1ULL << (23))) != 0)
#define SET_VK_ID_GetBufferOpaqueCaptureDescriptorDataEXT_ON(masks) (masks).f9 |= (1ULL << (23))
#define VK_ID_GetBufferOpaqueCaptureDescriptorDataEXT_BIT (1ULL << (23))
#define VK_ID_GetBufferOpaqueCaptureDescriptorDataEXT_IDX (9)

#define PRINT_GetBufferOpaqueCaptureDescriptorDataEXT IS_VK_ID_GetBufferOpaqueCaptureDescriptorDataEXT_ON(wrapper_printer_masks)
#define TRY_GetBufferOpaqueCaptureDescriptorDataEXT(TRUE, FALSE) TRUE
#define has_device_wrapper_GetBufferOpaqueCaptureDescriptorDataEXT(...) (wrapper_device_entrypoints.GetBufferOpaqueCaptureDescriptorDataEXT)
#define has_physical_device_wrapper_GetBufferOpaqueCaptureDescriptorDataEXT(...) (wrapper_physical_device_entrypoints.GetBufferOpaqueCaptureDescriptorDataEXT)
#define name_of_wrapper_GetBufferOpaqueCaptureDescriptorDataEXT(...) "wrapper_GetBufferOpaqueCaptureDescriptorDataEXT"
#define VK_ID_GetImageOpaqueCaptureDescriptorDataEXT 600
#define IS_VK_ID_GetImageOpaqueCaptureDescriptorDataEXT_ON(masks) (((masks).f9 & (1ULL << (24))) != 0)
#define SET_VK_ID_GetImageOpaqueCaptureDescriptorDataEXT_ON(masks) (masks).f9 |= (1ULL << (24))
#define VK_ID_GetImageOpaqueCaptureDescriptorDataEXT_BIT (1ULL << (24))
#define VK_ID_GetImageOpaqueCaptureDescriptorDataEXT_IDX (9)

#define PRINT_GetImageOpaqueCaptureDescriptorDataEXT IS_VK_ID_GetImageOpaqueCaptureDescriptorDataEXT_ON(wrapper_printer_masks)
#define TRY_GetImageOpaqueCaptureDescriptorDataEXT(TRUE, FALSE) TRUE
#define has_device_wrapper_GetImageOpaqueCaptureDescriptorDataEXT(...) (wrapper_device_entrypoints.GetImageOpaqueCaptureDescriptorDataEXT)
#define has_physical_device_wrapper_GetImageOpaqueCaptureDescriptorDataEXT(...) (wrapper_physical_device_entrypoints.GetImageOpaqueCaptureDescriptorDataEXT)
#define name_of_wrapper_GetImageOpaqueCaptureDescriptorDataEXT(...) "wrapper_GetImageOpaqueCaptureDescriptorDataEXT"
#define VK_ID_GetImageViewOpaqueCaptureDescriptorDataEXT 601
#define IS_VK_ID_GetImageViewOpaqueCaptureDescriptorDataEXT_ON(masks) (((masks).f9 & (1ULL << (25))) != 0)
#define SET_VK_ID_GetImageViewOpaqueCaptureDescriptorDataEXT_ON(masks) (masks).f9 |= (1ULL << (25))
#define VK_ID_GetImageViewOpaqueCaptureDescriptorDataEXT_BIT (1ULL << (25))
#define VK_ID_GetImageViewOpaqueCaptureDescriptorDataEXT_IDX (9)

#define PRINT_GetImageViewOpaqueCaptureDescriptorDataEXT IS_VK_ID_GetImageViewOpaqueCaptureDescriptorDataEXT_ON(wrapper_printer_masks)
#define TRY_GetImageViewOpaqueCaptureDescriptorDataEXT(TRUE, FALSE) TRUE
#define has_device_wrapper_GetImageViewOpaqueCaptureDescriptorDataEXT(...) (wrapper_device_entrypoints.GetImageViewOpaqueCaptureDescriptorDataEXT)
#define has_physical_device_wrapper_GetImageViewOpaqueCaptureDescriptorDataEXT(...) (wrapper_physical_device_entrypoints.GetImageViewOpaqueCaptureDescriptorDataEXT)
#define name_of_wrapper_GetImageViewOpaqueCaptureDescriptorDataEXT(...) "wrapper_GetImageViewOpaqueCaptureDescriptorDataEXT"
#define VK_ID_GetSamplerOpaqueCaptureDescriptorDataEXT 602
#define IS_VK_ID_GetSamplerOpaqueCaptureDescriptorDataEXT_ON(masks) (((masks).f9 & (1ULL << (26))) != 0)
#define SET_VK_ID_GetSamplerOpaqueCaptureDescriptorDataEXT_ON(masks) (masks).f9 |= (1ULL << (26))
#define VK_ID_GetSamplerOpaqueCaptureDescriptorDataEXT_BIT (1ULL << (26))
#define VK_ID_GetSamplerOpaqueCaptureDescriptorDataEXT_IDX (9)

#define PRINT_GetSamplerOpaqueCaptureDescriptorDataEXT IS_VK_ID_GetSamplerOpaqueCaptureDescriptorDataEXT_ON(wrapper_printer_masks)
#define TRY_GetSamplerOpaqueCaptureDescriptorDataEXT(TRUE, FALSE) TRUE
#define has_device_wrapper_GetSamplerOpaqueCaptureDescriptorDataEXT(...) (wrapper_device_entrypoints.GetSamplerOpaqueCaptureDescriptorDataEXT)
#define has_physical_device_wrapper_GetSamplerOpaqueCaptureDescriptorDataEXT(...) (wrapper_physical_device_entrypoints.GetSamplerOpaqueCaptureDescriptorDataEXT)
#define name_of_wrapper_GetSamplerOpaqueCaptureDescriptorDataEXT(...) "wrapper_GetSamplerOpaqueCaptureDescriptorDataEXT"
#define VK_ID_GetAccelerationStructureOpaqueCaptureDescriptorDataEXT 603
#define IS_VK_ID_GetAccelerationStructureOpaqueCaptureDescriptorDataEXT_ON(masks) (((masks).f9 & (1ULL << (27))) != 0)
#define SET_VK_ID_GetAccelerationStructureOpaqueCaptureDescriptorDataEXT_ON(masks) (masks).f9 |= (1ULL << (27))
#define VK_ID_GetAccelerationStructureOpaqueCaptureDescriptorDataEXT_BIT (1ULL << (27))
#define VK_ID_GetAccelerationStructureOpaqueCaptureDescriptorDataEXT_IDX (9)

#define PRINT_GetAccelerationStructureOpaqueCaptureDescriptorDataEXT IS_VK_ID_GetAccelerationStructureOpaqueCaptureDescriptorDataEXT_ON(wrapper_printer_masks)
#define TRY_GetAccelerationStructureOpaqueCaptureDescriptorDataEXT(TRUE, FALSE) TRUE
#define has_device_wrapper_GetAccelerationStructureOpaqueCaptureDescriptorDataEXT(...) (wrapper_device_entrypoints.GetAccelerationStructureOpaqueCaptureDescriptorDataEXT)
#define has_physical_device_wrapper_GetAccelerationStructureOpaqueCaptureDescriptorDataEXT(...) (wrapper_physical_device_entrypoints.GetAccelerationStructureOpaqueCaptureDescriptorDataEXT)
#define name_of_wrapper_GetAccelerationStructureOpaqueCaptureDescriptorDataEXT(...) "wrapper_GetAccelerationStructureOpaqueCaptureDescriptorDataEXT"
#define VK_ID_SetDeviceMemoryPriorityEXT 604
#define IS_VK_ID_SetDeviceMemoryPriorityEXT_ON(masks) (((masks).f9 & (1ULL << (28))) != 0)
#define SET_VK_ID_SetDeviceMemoryPriorityEXT_ON(masks) (masks).f9 |= (1ULL << (28))
#define VK_ID_SetDeviceMemoryPriorityEXT_BIT (1ULL << (28))
#define VK_ID_SetDeviceMemoryPriorityEXT_IDX (9)

#define PRINT_SetDeviceMemoryPriorityEXT IS_VK_ID_SetDeviceMemoryPriorityEXT_ON(wrapper_printer_masks)
#define TRY_SetDeviceMemoryPriorityEXT(TRUE, FALSE) TRUE
#define has_device_wrapper_SetDeviceMemoryPriorityEXT(...) (wrapper_device_entrypoints.SetDeviceMemoryPriorityEXT)
#define has_physical_device_wrapper_SetDeviceMemoryPriorityEXT(...) (wrapper_physical_device_entrypoints.SetDeviceMemoryPriorityEXT)
#define name_of_wrapper_SetDeviceMemoryPriorityEXT(...) "wrapper_SetDeviceMemoryPriorityEXT"
#define VK_ID_AcquireDrmDisplayEXT 605
#define IS_VK_ID_AcquireDrmDisplayEXT_ON(masks) (((masks).f9 & (1ULL << (29))) != 0)
#define SET_VK_ID_AcquireDrmDisplayEXT_ON(masks) (masks).f9 |= (1ULL << (29))
#define VK_ID_AcquireDrmDisplayEXT_BIT (1ULL << (29))
#define VK_ID_AcquireDrmDisplayEXT_IDX (9)

#define PRINT_AcquireDrmDisplayEXT IS_VK_ID_AcquireDrmDisplayEXT_ON(wrapper_printer_masks)
#define TRY_AcquireDrmDisplayEXT(TRUE, FALSE) TRUE
#define has_device_wrapper_AcquireDrmDisplayEXT(...) (wrapper_device_entrypoints.AcquireDrmDisplayEXT)
#define has_physical_device_wrapper_AcquireDrmDisplayEXT(...) (wrapper_physical_device_entrypoints.AcquireDrmDisplayEXT)
#define name_of_wrapper_AcquireDrmDisplayEXT(...) "wrapper_AcquireDrmDisplayEXT"
#define VK_ID_GetDrmDisplayEXT 606
#define IS_VK_ID_GetDrmDisplayEXT_ON(masks) (((masks).f9 & (1ULL << (30))) != 0)
#define SET_VK_ID_GetDrmDisplayEXT_ON(masks) (masks).f9 |= (1ULL << (30))
#define VK_ID_GetDrmDisplayEXT_BIT (1ULL << (30))
#define VK_ID_GetDrmDisplayEXT_IDX (9)

#define PRINT_GetDrmDisplayEXT IS_VK_ID_GetDrmDisplayEXT_ON(wrapper_printer_masks)
#define TRY_GetDrmDisplayEXT(TRUE, FALSE) TRUE
#define has_device_wrapper_GetDrmDisplayEXT(...) (wrapper_device_entrypoints.GetDrmDisplayEXT)
#define has_physical_device_wrapper_GetDrmDisplayEXT(...) (wrapper_physical_device_entrypoints.GetDrmDisplayEXT)
#define name_of_wrapper_GetDrmDisplayEXT(...) "wrapper_GetDrmDisplayEXT"
#define VK_ID_WaitForPresentKHR 607
#define IS_VK_ID_WaitForPresentKHR_ON(masks) (((masks).f9 & (1ULL << (31))) != 0)
#define SET_VK_ID_WaitForPresentKHR_ON(masks) (masks).f9 |= (1ULL << (31))
#define VK_ID_WaitForPresentKHR_BIT (1ULL << (31))
#define VK_ID_WaitForPresentKHR_IDX (9)

#define PRINT_WaitForPresentKHR IS_VK_ID_WaitForPresentKHR_ON(wrapper_printer_masks)
#define TRY_WaitForPresentKHR(TRUE, FALSE) TRUE
#define has_device_wrapper_WaitForPresentKHR(...) (wrapper_device_entrypoints.WaitForPresentKHR)
#define has_physical_device_wrapper_WaitForPresentKHR(...) (wrapper_physical_device_entrypoints.WaitForPresentKHR)
#define name_of_wrapper_WaitForPresentKHR(...) "wrapper_WaitForPresentKHR"
#ifdef VK_USE_PLATFORM_FUCHSIA
#define VK_ID_CreateBufferCollectionFUCHSIA 608
#define IS_VK_ID_CreateBufferCollectionFUCHSIA_ON(masks) (((masks).f9 & (1ULL << (32))) != 0)
#define SET_VK_ID_CreateBufferCollectionFUCHSIA_ON(masks) (masks).f9 |= (1ULL << (32))
#define VK_ID_CreateBufferCollectionFUCHSIA_BIT (1ULL << (32))
#define VK_ID_CreateBufferCollectionFUCHSIA_IDX (9)

#define PRINT_CreateBufferCollectionFUCHSIA IS_VK_ID_CreateBufferCollectionFUCHSIA_ON(wrapper_printer_masks)
#define TRY_CreateBufferCollectionFUCHSIA(TRUE, FALSE) TRUE
#define has_device_wrapper_CreateBufferCollectionFUCHSIA(...) (wrapper_device_entrypoints.CreateBufferCollectionFUCHSIA)
#define has_physical_device_wrapper_CreateBufferCollectionFUCHSIA(...) (wrapper_physical_device_entrypoints.CreateBufferCollectionFUCHSIA)
#define name_of_wrapper_CreateBufferCollectionFUCHSIA(...) "wrapper_CreateBufferCollectionFUCHSIA"
#else
#define TRY_CreateBufferCollectionFUCHSIA(TRUE, FALSE) FALSE
#endif
#ifdef VK_USE_PLATFORM_FUCHSIA
#define VK_ID_SetBufferCollectionBufferConstraintsFUCHSIA 609
#define IS_VK_ID_SetBufferCollectionBufferConstraintsFUCHSIA_ON(masks) (((masks).f9 & (1ULL << (33))) != 0)
#define SET_VK_ID_SetBufferCollectionBufferConstraintsFUCHSIA_ON(masks) (masks).f9 |= (1ULL << (33))
#define VK_ID_SetBufferCollectionBufferConstraintsFUCHSIA_BIT (1ULL << (33))
#define VK_ID_SetBufferCollectionBufferConstraintsFUCHSIA_IDX (9)

#define PRINT_SetBufferCollectionBufferConstraintsFUCHSIA IS_VK_ID_SetBufferCollectionBufferConstraintsFUCHSIA_ON(wrapper_printer_masks)
#define TRY_SetBufferCollectionBufferConstraintsFUCHSIA(TRUE, FALSE) TRUE
#define has_device_wrapper_SetBufferCollectionBufferConstraintsFUCHSIA(...) (wrapper_device_entrypoints.SetBufferCollectionBufferConstraintsFUCHSIA)
#define has_physical_device_wrapper_SetBufferCollectionBufferConstraintsFUCHSIA(...) (wrapper_physical_device_entrypoints.SetBufferCollectionBufferConstraintsFUCHSIA)
#define name_of_wrapper_SetBufferCollectionBufferConstraintsFUCHSIA(...) "wrapper_SetBufferCollectionBufferConstraintsFUCHSIA"
#else
#define TRY_SetBufferCollectionBufferConstraintsFUCHSIA(TRUE, FALSE) FALSE
#endif
#ifdef VK_USE_PLATFORM_FUCHSIA
#define VK_ID_SetBufferCollectionImageConstraintsFUCHSIA 610
#define IS_VK_ID_SetBufferCollectionImageConstraintsFUCHSIA_ON(masks) (((masks).f9 & (1ULL << (34))) != 0)
#define SET_VK_ID_SetBufferCollectionImageConstraintsFUCHSIA_ON(masks) (masks).f9 |= (1ULL << (34))
#define VK_ID_SetBufferCollectionImageConstraintsFUCHSIA_BIT (1ULL << (34))
#define VK_ID_SetBufferCollectionImageConstraintsFUCHSIA_IDX (9)

#define PRINT_SetBufferCollectionImageConstraintsFUCHSIA IS_VK_ID_SetBufferCollectionImageConstraintsFUCHSIA_ON(wrapper_printer_masks)
#define TRY_SetBufferCollectionImageConstraintsFUCHSIA(TRUE, FALSE) TRUE
#define has_device_wrapper_SetBufferCollectionImageConstraintsFUCHSIA(...) (wrapper_device_entrypoints.SetBufferCollectionImageConstraintsFUCHSIA)
#define has_physical_device_wrapper_SetBufferCollectionImageConstraintsFUCHSIA(...) (wrapper_physical_device_entrypoints.SetBufferCollectionImageConstraintsFUCHSIA)
#define name_of_wrapper_SetBufferCollectionImageConstraintsFUCHSIA(...) "wrapper_SetBufferCollectionImageConstraintsFUCHSIA"
#else
#define TRY_SetBufferCollectionImageConstraintsFUCHSIA(TRUE, FALSE) FALSE
#endif
#ifdef VK_USE_PLATFORM_FUCHSIA
#define VK_ID_DestroyBufferCollectionFUCHSIA 611
#define IS_VK_ID_DestroyBufferCollectionFUCHSIA_ON(masks) (((masks).f9 & (1ULL << (35))) != 0)
#define SET_VK_ID_DestroyBufferCollectionFUCHSIA_ON(masks) (masks).f9 |= (1ULL << (35))
#define VK_ID_DestroyBufferCollectionFUCHSIA_BIT (1ULL << (35))
#define VK_ID_DestroyBufferCollectionFUCHSIA_IDX (9)

#define PRINT_DestroyBufferCollectionFUCHSIA IS_VK_ID_DestroyBufferCollectionFUCHSIA_ON(wrapper_printer_masks)
#define TRY_DestroyBufferCollectionFUCHSIA(TRUE, FALSE) TRUE
#define has_device_wrapper_DestroyBufferCollectionFUCHSIA(...) (wrapper_device_entrypoints.DestroyBufferCollectionFUCHSIA)
#define has_physical_device_wrapper_DestroyBufferCollectionFUCHSIA(...) (wrapper_physical_device_entrypoints.DestroyBufferCollectionFUCHSIA)
#define name_of_wrapper_DestroyBufferCollectionFUCHSIA(...) "wrapper_DestroyBufferCollectionFUCHSIA"
#else
#define TRY_DestroyBufferCollectionFUCHSIA(TRUE, FALSE) FALSE
#endif
#ifdef VK_USE_PLATFORM_FUCHSIA
#define VK_ID_GetBufferCollectionPropertiesFUCHSIA 612
#define IS_VK_ID_GetBufferCollectionPropertiesFUCHSIA_ON(masks) (((masks).f9 & (1ULL << (36))) != 0)
#define SET_VK_ID_GetBufferCollectionPropertiesFUCHSIA_ON(masks) (masks).f9 |= (1ULL << (36))
#define VK_ID_GetBufferCollectionPropertiesFUCHSIA_BIT (1ULL << (36))
#define VK_ID_GetBufferCollectionPropertiesFUCHSIA_IDX (9)

#define PRINT_GetBufferCollectionPropertiesFUCHSIA IS_VK_ID_GetBufferCollectionPropertiesFUCHSIA_ON(wrapper_printer_masks)
#define TRY_GetBufferCollectionPropertiesFUCHSIA(TRUE, FALSE) TRUE
#define has_device_wrapper_GetBufferCollectionPropertiesFUCHSIA(...) (wrapper_device_entrypoints.GetBufferCollectionPropertiesFUCHSIA)
#define has_physical_device_wrapper_GetBufferCollectionPropertiesFUCHSIA(...) (wrapper_physical_device_entrypoints.GetBufferCollectionPropertiesFUCHSIA)
#define name_of_wrapper_GetBufferCollectionPropertiesFUCHSIA(...) "wrapper_GetBufferCollectionPropertiesFUCHSIA"
#else
#define TRY_GetBufferCollectionPropertiesFUCHSIA(TRUE, FALSE) FALSE
#endif
#define VK_ID_CmdBeginRendering 613
#define IS_VK_ID_CmdBeginRendering_ON(masks) (((masks).f9 & (1ULL << (37))) != 0)
#define SET_VK_ID_CmdBeginRendering_ON(masks) (masks).f9 |= (1ULL << (37))
#define VK_ID_CmdBeginRendering_BIT (1ULL << (37))
#define VK_ID_CmdBeginRendering_IDX (9)

#define PRINT_CmdBeginRendering IS_VK_ID_CmdBeginRendering_ON(wrapper_printer_masks)
#define TRY_CmdBeginRendering(TRUE, FALSE) TRUE
#define has_device_wrapper_CmdBeginRendering(...) (wrapper_device_entrypoints.CmdBeginRendering)
#define has_physical_device_wrapper_CmdBeginRendering(...) (wrapper_physical_device_entrypoints.CmdBeginRendering)
#define name_of_wrapper_CmdBeginRendering(...) "wrapper_CmdBeginRendering"
#define VK_ID_CmdEndRendering 615
#define IS_VK_ID_CmdEndRendering_ON(masks) (((masks).f9 & (1ULL << (39))) != 0)
#define SET_VK_ID_CmdEndRendering_ON(masks) (masks).f9 |= (1ULL << (39))
#define VK_ID_CmdEndRendering_BIT (1ULL << (39))
#define VK_ID_CmdEndRendering_IDX (9)

#define PRINT_CmdEndRendering IS_VK_ID_CmdEndRendering_ON(wrapper_printer_masks)
#define TRY_CmdEndRendering(TRUE, FALSE) TRUE
#define has_device_wrapper_CmdEndRendering(...) (wrapper_device_entrypoints.CmdEndRendering)
#define has_physical_device_wrapper_CmdEndRendering(...) (wrapper_physical_device_entrypoints.CmdEndRendering)
#define name_of_wrapper_CmdEndRendering(...) "wrapper_CmdEndRendering"
#define VK_ID_GetDescriptorSetLayoutHostMappingInfoVALVE 617
#define IS_VK_ID_GetDescriptorSetLayoutHostMappingInfoVALVE_ON(masks) (((masks).f9 & (1ULL << (41))) != 0)
#define SET_VK_ID_GetDescriptorSetLayoutHostMappingInfoVALVE_ON(masks) (masks).f9 |= (1ULL << (41))
#define VK_ID_GetDescriptorSetLayoutHostMappingInfoVALVE_BIT (1ULL << (41))
#define VK_ID_GetDescriptorSetLayoutHostMappingInfoVALVE_IDX (9)

#define PRINT_GetDescriptorSetLayoutHostMappingInfoVALVE IS_VK_ID_GetDescriptorSetLayoutHostMappingInfoVALVE_ON(wrapper_printer_masks)
#define TRY_GetDescriptorSetLayoutHostMappingInfoVALVE(TRUE, FALSE) TRUE
#define has_device_wrapper_GetDescriptorSetLayoutHostMappingInfoVALVE(...) (wrapper_device_entrypoints.GetDescriptorSetLayoutHostMappingInfoVALVE)
#define has_physical_device_wrapper_GetDescriptorSetLayoutHostMappingInfoVALVE(...) (wrapper_physical_device_entrypoints.GetDescriptorSetLayoutHostMappingInfoVALVE)
#define name_of_wrapper_GetDescriptorSetLayoutHostMappingInfoVALVE(...) "wrapper_GetDescriptorSetLayoutHostMappingInfoVALVE"
#define VK_ID_GetDescriptorSetHostMappingVALVE 618
#define IS_VK_ID_GetDescriptorSetHostMappingVALVE_ON(masks) (((masks).f9 & (1ULL << (42))) != 0)
#define SET_VK_ID_GetDescriptorSetHostMappingVALVE_ON(masks) (masks).f9 |= (1ULL << (42))
#define VK_ID_GetDescriptorSetHostMappingVALVE_BIT (1ULL << (42))
#define VK_ID_GetDescriptorSetHostMappingVALVE_IDX (9)

#define PRINT_GetDescriptorSetHostMappingVALVE IS_VK_ID_GetDescriptorSetHostMappingVALVE_ON(wrapper_printer_masks)
#define TRY_GetDescriptorSetHostMappingVALVE(TRUE, FALSE) TRUE
#define has_device_wrapper_GetDescriptorSetHostMappingVALVE(...) (wrapper_device_entrypoints.GetDescriptorSetHostMappingVALVE)
#define has_physical_device_wrapper_GetDescriptorSetHostMappingVALVE(...) (wrapper_physical_device_entrypoints.GetDescriptorSetHostMappingVALVE)
#define name_of_wrapper_GetDescriptorSetHostMappingVALVE(...) "wrapper_GetDescriptorSetHostMappingVALVE"
#define VK_ID_CreateMicromapEXT 619
#define IS_VK_ID_CreateMicromapEXT_ON(masks) (((masks).f9 & (1ULL << (43))) != 0)
#define SET_VK_ID_CreateMicromapEXT_ON(masks) (masks).f9 |= (1ULL << (43))
#define VK_ID_CreateMicromapEXT_BIT (1ULL << (43))
#define VK_ID_CreateMicromapEXT_IDX (9)

#define PRINT_CreateMicromapEXT IS_VK_ID_CreateMicromapEXT_ON(wrapper_printer_masks)
#define TRY_CreateMicromapEXT(TRUE, FALSE) TRUE
#define has_device_wrapper_CreateMicromapEXT(...) (wrapper_device_entrypoints.CreateMicromapEXT)
#define has_physical_device_wrapper_CreateMicromapEXT(...) (wrapper_physical_device_entrypoints.CreateMicromapEXT)
#define name_of_wrapper_CreateMicromapEXT(...) "wrapper_CreateMicromapEXT"
#define VK_ID_CmdBuildMicromapsEXT 620
#define IS_VK_ID_CmdBuildMicromapsEXT_ON(masks) (((masks).f9 & (1ULL << (44))) != 0)
#define SET_VK_ID_CmdBuildMicromapsEXT_ON(masks) (masks).f9 |= (1ULL << (44))
#define VK_ID_CmdBuildMicromapsEXT_BIT (1ULL << (44))
#define VK_ID_CmdBuildMicromapsEXT_IDX (9)

#define PRINT_CmdBuildMicromapsEXT IS_VK_ID_CmdBuildMicromapsEXT_ON(wrapper_printer_masks)
#define TRY_CmdBuildMicromapsEXT(TRUE, FALSE) TRUE
#define has_device_wrapper_CmdBuildMicromapsEXT(...) (wrapper_device_entrypoints.CmdBuildMicromapsEXT)
#define has_physical_device_wrapper_CmdBuildMicromapsEXT(...) (wrapper_physical_device_entrypoints.CmdBuildMicromapsEXT)
#define name_of_wrapper_CmdBuildMicromapsEXT(...) "wrapper_CmdBuildMicromapsEXT"
#define VK_ID_BuildMicromapsEXT 621
#define IS_VK_ID_BuildMicromapsEXT_ON(masks) (((masks).f9 & (1ULL << (45))) != 0)
#define SET_VK_ID_BuildMicromapsEXT_ON(masks) (masks).f9 |= (1ULL << (45))
#define VK_ID_BuildMicromapsEXT_BIT (1ULL << (45))
#define VK_ID_BuildMicromapsEXT_IDX (9)

#define PRINT_BuildMicromapsEXT IS_VK_ID_BuildMicromapsEXT_ON(wrapper_printer_masks)
#define TRY_BuildMicromapsEXT(TRUE, FALSE) TRUE
#define has_device_wrapper_BuildMicromapsEXT(...) (wrapper_device_entrypoints.BuildMicromapsEXT)
#define has_physical_device_wrapper_BuildMicromapsEXT(...) (wrapper_physical_device_entrypoints.BuildMicromapsEXT)
#define name_of_wrapper_BuildMicromapsEXT(...) "wrapper_BuildMicromapsEXT"
#define VK_ID_DestroyMicromapEXT 622
#define IS_VK_ID_DestroyMicromapEXT_ON(masks) (((masks).f9 & (1ULL << (46))) != 0)
#define SET_VK_ID_DestroyMicromapEXT_ON(masks) (masks).f9 |= (1ULL << (46))
#define VK_ID_DestroyMicromapEXT_BIT (1ULL << (46))
#define VK_ID_DestroyMicromapEXT_IDX (9)

#define PRINT_DestroyMicromapEXT IS_VK_ID_DestroyMicromapEXT_ON(wrapper_printer_masks)
#define TRY_DestroyMicromapEXT(TRUE, FALSE) TRUE
#define has_device_wrapper_DestroyMicromapEXT(...) (wrapper_device_entrypoints.DestroyMicromapEXT)
#define has_physical_device_wrapper_DestroyMicromapEXT(...) (wrapper_physical_device_entrypoints.DestroyMicromapEXT)
#define name_of_wrapper_DestroyMicromapEXT(...) "wrapper_DestroyMicromapEXT"
#define VK_ID_CmdCopyMicromapEXT 623
#define IS_VK_ID_CmdCopyMicromapEXT_ON(masks) (((masks).f9 & (1ULL << (47))) != 0)
#define SET_VK_ID_CmdCopyMicromapEXT_ON(masks) (masks).f9 |= (1ULL << (47))
#define VK_ID_CmdCopyMicromapEXT_BIT (1ULL << (47))
#define VK_ID_CmdCopyMicromapEXT_IDX (9)

#define PRINT_CmdCopyMicromapEXT IS_VK_ID_CmdCopyMicromapEXT_ON(wrapper_printer_masks)
#define TRY_CmdCopyMicromapEXT(TRUE, FALSE) TRUE
#define has_device_wrapper_CmdCopyMicromapEXT(...) (wrapper_device_entrypoints.CmdCopyMicromapEXT)
#define has_physical_device_wrapper_CmdCopyMicromapEXT(...) (wrapper_physical_device_entrypoints.CmdCopyMicromapEXT)
#define name_of_wrapper_CmdCopyMicromapEXT(...) "wrapper_CmdCopyMicromapEXT"
#define VK_ID_CopyMicromapEXT 624
#define IS_VK_ID_CopyMicromapEXT_ON(masks) (((masks).f9 & (1ULL << (48))) != 0)
#define SET_VK_ID_CopyMicromapEXT_ON(masks) (masks).f9 |= (1ULL << (48))
#define VK_ID_CopyMicromapEXT_BIT (1ULL << (48))
#define VK_ID_CopyMicromapEXT_IDX (9)

#define PRINT_CopyMicromapEXT IS_VK_ID_CopyMicromapEXT_ON(wrapper_printer_masks)
#define TRY_CopyMicromapEXT(TRUE, FALSE) TRUE
#define has_device_wrapper_CopyMicromapEXT(...) (wrapper_device_entrypoints.CopyMicromapEXT)
#define has_physical_device_wrapper_CopyMicromapEXT(...) (wrapper_physical_device_entrypoints.CopyMicromapEXT)
#define name_of_wrapper_CopyMicromapEXT(...) "wrapper_CopyMicromapEXT"
#define VK_ID_CmdCopyMicromapToMemoryEXT 625
#define IS_VK_ID_CmdCopyMicromapToMemoryEXT_ON(masks) (((masks).f9 & (1ULL << (49))) != 0)
#define SET_VK_ID_CmdCopyMicromapToMemoryEXT_ON(masks) (masks).f9 |= (1ULL << (49))
#define VK_ID_CmdCopyMicromapToMemoryEXT_BIT (1ULL << (49))
#define VK_ID_CmdCopyMicromapToMemoryEXT_IDX (9)

#define PRINT_CmdCopyMicromapToMemoryEXT IS_VK_ID_CmdCopyMicromapToMemoryEXT_ON(wrapper_printer_masks)
#define TRY_CmdCopyMicromapToMemoryEXT(TRUE, FALSE) TRUE
#define has_device_wrapper_CmdCopyMicromapToMemoryEXT(...) (wrapper_device_entrypoints.CmdCopyMicromapToMemoryEXT)
#define has_physical_device_wrapper_CmdCopyMicromapToMemoryEXT(...) (wrapper_physical_device_entrypoints.CmdCopyMicromapToMemoryEXT)
#define name_of_wrapper_CmdCopyMicromapToMemoryEXT(...) "wrapper_CmdCopyMicromapToMemoryEXT"
#define VK_ID_CopyMicromapToMemoryEXT 626
#define IS_VK_ID_CopyMicromapToMemoryEXT_ON(masks) (((masks).f9 & (1ULL << (50))) != 0)
#define SET_VK_ID_CopyMicromapToMemoryEXT_ON(masks) (masks).f9 |= (1ULL << (50))
#define VK_ID_CopyMicromapToMemoryEXT_BIT (1ULL << (50))
#define VK_ID_CopyMicromapToMemoryEXT_IDX (9)

#define PRINT_CopyMicromapToMemoryEXT IS_VK_ID_CopyMicromapToMemoryEXT_ON(wrapper_printer_masks)
#define TRY_CopyMicromapToMemoryEXT(TRUE, FALSE) TRUE
#define has_device_wrapper_CopyMicromapToMemoryEXT(...) (wrapper_device_entrypoints.CopyMicromapToMemoryEXT)
#define has_physical_device_wrapper_CopyMicromapToMemoryEXT(...) (wrapper_physical_device_entrypoints.CopyMicromapToMemoryEXT)
#define name_of_wrapper_CopyMicromapToMemoryEXT(...) "wrapper_CopyMicromapToMemoryEXT"
#define VK_ID_CmdCopyMemoryToMicromapEXT 627
#define IS_VK_ID_CmdCopyMemoryToMicromapEXT_ON(masks) (((masks).f9 & (1ULL << (51))) != 0)
#define SET_VK_ID_CmdCopyMemoryToMicromapEXT_ON(masks) (masks).f9 |= (1ULL << (51))
#define VK_ID_CmdCopyMemoryToMicromapEXT_BIT (1ULL << (51))
#define VK_ID_CmdCopyMemoryToMicromapEXT_IDX (9)

#define PRINT_CmdCopyMemoryToMicromapEXT IS_VK_ID_CmdCopyMemoryToMicromapEXT_ON(wrapper_printer_masks)
#define TRY_CmdCopyMemoryToMicromapEXT(TRUE, FALSE) TRUE
#define has_device_wrapper_CmdCopyMemoryToMicromapEXT(...) (wrapper_device_entrypoints.CmdCopyMemoryToMicromapEXT)
#define has_physical_device_wrapper_CmdCopyMemoryToMicromapEXT(...) (wrapper_physical_device_entrypoints.CmdCopyMemoryToMicromapEXT)
#define name_of_wrapper_CmdCopyMemoryToMicromapEXT(...) "wrapper_CmdCopyMemoryToMicromapEXT"
#define VK_ID_CopyMemoryToMicromapEXT 628
#define IS_VK_ID_CopyMemoryToMicromapEXT_ON(masks) (((masks).f9 & (1ULL << (52))) != 0)
#define SET_VK_ID_CopyMemoryToMicromapEXT_ON(masks) (masks).f9 |= (1ULL << (52))
#define VK_ID_CopyMemoryToMicromapEXT_BIT (1ULL << (52))
#define VK_ID_CopyMemoryToMicromapEXT_IDX (9)

#define PRINT_CopyMemoryToMicromapEXT IS_VK_ID_CopyMemoryToMicromapEXT_ON(wrapper_printer_masks)
#define TRY_CopyMemoryToMicromapEXT(TRUE, FALSE) TRUE
#define has_device_wrapper_CopyMemoryToMicromapEXT(...) (wrapper_device_entrypoints.CopyMemoryToMicromapEXT)
#define has_physical_device_wrapper_CopyMemoryToMicromapEXT(...) (wrapper_physical_device_entrypoints.CopyMemoryToMicromapEXT)
#define name_of_wrapper_CopyMemoryToMicromapEXT(...) "wrapper_CopyMemoryToMicromapEXT"
#define VK_ID_CmdWriteMicromapsPropertiesEXT 629
#define IS_VK_ID_CmdWriteMicromapsPropertiesEXT_ON(masks) (((masks).f9 & (1ULL << (53))) != 0)
#define SET_VK_ID_CmdWriteMicromapsPropertiesEXT_ON(masks) (masks).f9 |= (1ULL << (53))
#define VK_ID_CmdWriteMicromapsPropertiesEXT_BIT (1ULL << (53))
#define VK_ID_CmdWriteMicromapsPropertiesEXT_IDX (9)

#define PRINT_CmdWriteMicromapsPropertiesEXT IS_VK_ID_CmdWriteMicromapsPropertiesEXT_ON(wrapper_printer_masks)
#define TRY_CmdWriteMicromapsPropertiesEXT(TRUE, FALSE) TRUE
#define has_device_wrapper_CmdWriteMicromapsPropertiesEXT(...) (wrapper_device_entrypoints.CmdWriteMicromapsPropertiesEXT)
#define has_physical_device_wrapper_CmdWriteMicromapsPropertiesEXT(...) (wrapper_physical_device_entrypoints.CmdWriteMicromapsPropertiesEXT)
#define name_of_wrapper_CmdWriteMicromapsPropertiesEXT(...) "wrapper_CmdWriteMicromapsPropertiesEXT"
#define VK_ID_WriteMicromapsPropertiesEXT 630
#define IS_VK_ID_WriteMicromapsPropertiesEXT_ON(masks) (((masks).f9 & (1ULL << (54))) != 0)
#define SET_VK_ID_WriteMicromapsPropertiesEXT_ON(masks) (masks).f9 |= (1ULL << (54))
#define VK_ID_WriteMicromapsPropertiesEXT_BIT (1ULL << (54))
#define VK_ID_WriteMicromapsPropertiesEXT_IDX (9)

#define PRINT_WriteMicromapsPropertiesEXT IS_VK_ID_WriteMicromapsPropertiesEXT_ON(wrapper_printer_masks)
#define TRY_WriteMicromapsPropertiesEXT(TRUE, FALSE) TRUE
#define has_device_wrapper_WriteMicromapsPropertiesEXT(...) (wrapper_device_entrypoints.WriteMicromapsPropertiesEXT)
#define has_physical_device_wrapper_WriteMicromapsPropertiesEXT(...) (wrapper_physical_device_entrypoints.WriteMicromapsPropertiesEXT)
#define name_of_wrapper_WriteMicromapsPropertiesEXT(...) "wrapper_WriteMicromapsPropertiesEXT"
#define VK_ID_GetDeviceMicromapCompatibilityEXT 631
#define IS_VK_ID_GetDeviceMicromapCompatibilityEXT_ON(masks) (((masks).f9 & (1ULL << (55))) != 0)
#define SET_VK_ID_GetDeviceMicromapCompatibilityEXT_ON(masks) (masks).f9 |= (1ULL << (55))
#define VK_ID_GetDeviceMicromapCompatibilityEXT_BIT (1ULL << (55))
#define VK_ID_GetDeviceMicromapCompatibilityEXT_IDX (9)

#define PRINT_GetDeviceMicromapCompatibilityEXT IS_VK_ID_GetDeviceMicromapCompatibilityEXT_ON(wrapper_printer_masks)
#define TRY_GetDeviceMicromapCompatibilityEXT(TRUE, FALSE) TRUE
#define has_device_wrapper_GetDeviceMicromapCompatibilityEXT(...) (wrapper_device_entrypoints.GetDeviceMicromapCompatibilityEXT)
#define has_physical_device_wrapper_GetDeviceMicromapCompatibilityEXT(...) (wrapper_physical_device_entrypoints.GetDeviceMicromapCompatibilityEXT)
#define name_of_wrapper_GetDeviceMicromapCompatibilityEXT(...) "wrapper_GetDeviceMicromapCompatibilityEXT"
#define VK_ID_GetMicromapBuildSizesEXT 632
#define IS_VK_ID_GetMicromapBuildSizesEXT_ON(masks) (((masks).f9 & (1ULL << (56))) != 0)
#define SET_VK_ID_GetMicromapBuildSizesEXT_ON(masks) (masks).f9 |= (1ULL << (56))
#define VK_ID_GetMicromapBuildSizesEXT_BIT (1ULL << (56))
#define VK_ID_GetMicromapBuildSizesEXT_IDX (9)

#define PRINT_GetMicromapBuildSizesEXT IS_VK_ID_GetMicromapBuildSizesEXT_ON(wrapper_printer_masks)
#define TRY_GetMicromapBuildSizesEXT(TRUE, FALSE) TRUE
#define has_device_wrapper_GetMicromapBuildSizesEXT(...) (wrapper_device_entrypoints.GetMicromapBuildSizesEXT)
#define has_physical_device_wrapper_GetMicromapBuildSizesEXT(...) (wrapper_physical_device_entrypoints.GetMicromapBuildSizesEXT)
#define name_of_wrapper_GetMicromapBuildSizesEXT(...) "wrapper_GetMicromapBuildSizesEXT"
#define VK_ID_GetShaderModuleIdentifierEXT 633
#define IS_VK_ID_GetShaderModuleIdentifierEXT_ON(masks) (((masks).f9 & (1ULL << (57))) != 0)
#define SET_VK_ID_GetShaderModuleIdentifierEXT_ON(masks) (masks).f9 |= (1ULL << (57))
#define VK_ID_GetShaderModuleIdentifierEXT_BIT (1ULL << (57))
#define VK_ID_GetShaderModuleIdentifierEXT_IDX (9)

#define PRINT_GetShaderModuleIdentifierEXT IS_VK_ID_GetShaderModuleIdentifierEXT_ON(wrapper_printer_masks)
#define TRY_GetShaderModuleIdentifierEXT(TRUE, FALSE) TRUE
#define has_device_wrapper_GetShaderModuleIdentifierEXT(...) (wrapper_device_entrypoints.GetShaderModuleIdentifierEXT)
#define has_physical_device_wrapper_GetShaderModuleIdentifierEXT(...) (wrapper_physical_device_entrypoints.GetShaderModuleIdentifierEXT)
#define name_of_wrapper_GetShaderModuleIdentifierEXT(...) "wrapper_GetShaderModuleIdentifierEXT"
#define VK_ID_GetShaderModuleCreateInfoIdentifierEXT 634
#define IS_VK_ID_GetShaderModuleCreateInfoIdentifierEXT_ON(masks) (((masks).f9 & (1ULL << (58))) != 0)
#define SET_VK_ID_GetShaderModuleCreateInfoIdentifierEXT_ON(masks) (masks).f9 |= (1ULL << (58))
#define VK_ID_GetShaderModuleCreateInfoIdentifierEXT_BIT (1ULL << (58))
#define VK_ID_GetShaderModuleCreateInfoIdentifierEXT_IDX (9)

#define PRINT_GetShaderModuleCreateInfoIdentifierEXT IS_VK_ID_GetShaderModuleCreateInfoIdentifierEXT_ON(wrapper_printer_masks)
#define TRY_GetShaderModuleCreateInfoIdentifierEXT(TRUE, FALSE) TRUE
#define has_device_wrapper_GetShaderModuleCreateInfoIdentifierEXT(...) (wrapper_device_entrypoints.GetShaderModuleCreateInfoIdentifierEXT)
#define has_physical_device_wrapper_GetShaderModuleCreateInfoIdentifierEXT(...) (wrapper_physical_device_entrypoints.GetShaderModuleCreateInfoIdentifierEXT)
#define name_of_wrapper_GetShaderModuleCreateInfoIdentifierEXT(...) "wrapper_GetShaderModuleCreateInfoIdentifierEXT"
#define VK_ID_GetImageSubresourceLayout2KHR 635
#define IS_VK_ID_GetImageSubresourceLayout2KHR_ON(masks) (((masks).f9 & (1ULL << (59))) != 0)
#define SET_VK_ID_GetImageSubresourceLayout2KHR_ON(masks) (masks).f9 |= (1ULL << (59))
#define VK_ID_GetImageSubresourceLayout2KHR_BIT (1ULL << (59))
#define VK_ID_GetImageSubresourceLayout2KHR_IDX (9)

#define PRINT_GetImageSubresourceLayout2KHR IS_VK_ID_GetImageSubresourceLayout2KHR_ON(wrapper_printer_masks)
#define TRY_GetImageSubresourceLayout2KHR(TRUE, FALSE) TRUE
#define has_device_wrapper_GetImageSubresourceLayout2KHR(...) (wrapper_device_entrypoints.GetImageSubresourceLayout2KHR)
#define has_physical_device_wrapper_GetImageSubresourceLayout2KHR(...) (wrapper_physical_device_entrypoints.GetImageSubresourceLayout2KHR)
#define name_of_wrapper_GetImageSubresourceLayout2KHR(...) "wrapper_GetImageSubresourceLayout2KHR"
#define VK_ID_GetPipelinePropertiesEXT 637
#define IS_VK_ID_GetPipelinePropertiesEXT_ON(masks) (((masks).f9 & (1ULL << (61))) != 0)
#define SET_VK_ID_GetPipelinePropertiesEXT_ON(masks) (masks).f9 |= (1ULL << (61))
#define VK_ID_GetPipelinePropertiesEXT_BIT (1ULL << (61))
#define VK_ID_GetPipelinePropertiesEXT_IDX (9)

#define PRINT_GetPipelinePropertiesEXT IS_VK_ID_GetPipelinePropertiesEXT_ON(wrapper_printer_masks)
#define TRY_GetPipelinePropertiesEXT(TRUE, FALSE) TRUE
#define has_device_wrapper_GetPipelinePropertiesEXT(...) (wrapper_device_entrypoints.GetPipelinePropertiesEXT)
#define has_physical_device_wrapper_GetPipelinePropertiesEXT(...) (wrapper_physical_device_entrypoints.GetPipelinePropertiesEXT)
#define name_of_wrapper_GetPipelinePropertiesEXT(...) "wrapper_GetPipelinePropertiesEXT"
#ifdef VK_USE_PLATFORM_METAL_EXT
#define VK_ID_ExportMetalObjectsEXT 638
#define IS_VK_ID_ExportMetalObjectsEXT_ON(masks) (((masks).f9 & (1ULL << (62))) != 0)
#define SET_VK_ID_ExportMetalObjectsEXT_ON(masks) (masks).f9 |= (1ULL << (62))
#define VK_ID_ExportMetalObjectsEXT_BIT (1ULL << (62))
#define VK_ID_ExportMetalObjectsEXT_IDX (9)

#define PRINT_ExportMetalObjectsEXT IS_VK_ID_ExportMetalObjectsEXT_ON(wrapper_printer_masks)
#define TRY_ExportMetalObjectsEXT(TRUE, FALSE) TRUE
#define has_device_wrapper_ExportMetalObjectsEXT(...) (wrapper_device_entrypoints.ExportMetalObjectsEXT)
#define has_physical_device_wrapper_ExportMetalObjectsEXT(...) (wrapper_physical_device_entrypoints.ExportMetalObjectsEXT)
#define name_of_wrapper_ExportMetalObjectsEXT(...) "wrapper_ExportMetalObjectsEXT"
#else
#define TRY_ExportMetalObjectsEXT(TRUE, FALSE) FALSE
#endif
#define VK_ID_GetFramebufferTilePropertiesQCOM 639
#define IS_VK_ID_GetFramebufferTilePropertiesQCOM_ON(masks) (((masks).f9 & (1ULL << (63))) != 0)
#define SET_VK_ID_GetFramebufferTilePropertiesQCOM_ON(masks) (masks).f9 |= (1ULL << (63))
#define VK_ID_GetFramebufferTilePropertiesQCOM_BIT (1ULL << (63))
#define VK_ID_GetFramebufferTilePropertiesQCOM_IDX (9)

#define PRINT_GetFramebufferTilePropertiesQCOM IS_VK_ID_GetFramebufferTilePropertiesQCOM_ON(wrapper_printer_masks)
#define TRY_GetFramebufferTilePropertiesQCOM(TRUE, FALSE) TRUE
#define has_device_wrapper_GetFramebufferTilePropertiesQCOM(...) (wrapper_device_entrypoints.GetFramebufferTilePropertiesQCOM)
#define has_physical_device_wrapper_GetFramebufferTilePropertiesQCOM(...) (wrapper_physical_device_entrypoints.GetFramebufferTilePropertiesQCOM)
#define name_of_wrapper_GetFramebufferTilePropertiesQCOM(...) "wrapper_GetFramebufferTilePropertiesQCOM"
#define VK_ID_GetDynamicRenderingTilePropertiesQCOM 640
#define IS_VK_ID_GetDynamicRenderingTilePropertiesQCOM_ON(masks) (((masks).f10 & (1ULL << (0))) != 0)
#define SET_VK_ID_GetDynamicRenderingTilePropertiesQCOM_ON(masks) (masks).f10 |= (1ULL << (0))
#define VK_ID_GetDynamicRenderingTilePropertiesQCOM_BIT (1ULL << (0))
#define VK_ID_GetDynamicRenderingTilePropertiesQCOM_IDX (10)

#define PRINT_GetDynamicRenderingTilePropertiesQCOM IS_VK_ID_GetDynamicRenderingTilePropertiesQCOM_ON(wrapper_printer_masks)
#define TRY_GetDynamicRenderingTilePropertiesQCOM(TRUE, FALSE) TRUE
#define has_device_wrapper_GetDynamicRenderingTilePropertiesQCOM(...) (wrapper_device_entrypoints.GetDynamicRenderingTilePropertiesQCOM)
#define has_physical_device_wrapper_GetDynamicRenderingTilePropertiesQCOM(...) (wrapper_physical_device_entrypoints.GetDynamicRenderingTilePropertiesQCOM)
#define name_of_wrapper_GetDynamicRenderingTilePropertiesQCOM(...) "wrapper_GetDynamicRenderingTilePropertiesQCOM"
#define VK_ID_GetPhysicalDeviceOpticalFlowImageFormatsNV 641
#define IS_VK_ID_GetPhysicalDeviceOpticalFlowImageFormatsNV_ON(masks) (((masks).f10 & (1ULL << (1))) != 0)
#define SET_VK_ID_GetPhysicalDeviceOpticalFlowImageFormatsNV_ON(masks) (masks).f10 |= (1ULL << (1))
#define VK_ID_GetPhysicalDeviceOpticalFlowImageFormatsNV_BIT (1ULL << (1))
#define VK_ID_GetPhysicalDeviceOpticalFlowImageFormatsNV_IDX (10)

#define PRINT_GetPhysicalDeviceOpticalFlowImageFormatsNV IS_VK_ID_GetPhysicalDeviceOpticalFlowImageFormatsNV_ON(wrapper_printer_masks)
#define TRY_GetPhysicalDeviceOpticalFlowImageFormatsNV(TRUE, FALSE) TRUE
#define has_device_wrapper_GetPhysicalDeviceOpticalFlowImageFormatsNV(...) (wrapper_device_entrypoints.GetPhysicalDeviceOpticalFlowImageFormatsNV)
#define has_physical_device_wrapper_GetPhysicalDeviceOpticalFlowImageFormatsNV(...) (wrapper_physical_device_entrypoints.GetPhysicalDeviceOpticalFlowImageFormatsNV)
#define name_of_wrapper_GetPhysicalDeviceOpticalFlowImageFormatsNV(...) "wrapper_GetPhysicalDeviceOpticalFlowImageFormatsNV"
#define VK_ID_CreateOpticalFlowSessionNV 642
#define IS_VK_ID_CreateOpticalFlowSessionNV_ON(masks) (((masks).f10 & (1ULL << (2))) != 0)
#define SET_VK_ID_CreateOpticalFlowSessionNV_ON(masks) (masks).f10 |= (1ULL << (2))
#define VK_ID_CreateOpticalFlowSessionNV_BIT (1ULL << (2))
#define VK_ID_CreateOpticalFlowSessionNV_IDX (10)

#define PRINT_CreateOpticalFlowSessionNV IS_VK_ID_CreateOpticalFlowSessionNV_ON(wrapper_printer_masks)
#define TRY_CreateOpticalFlowSessionNV(TRUE, FALSE) TRUE
#define has_device_wrapper_CreateOpticalFlowSessionNV(...) (wrapper_device_entrypoints.CreateOpticalFlowSessionNV)
#define has_physical_device_wrapper_CreateOpticalFlowSessionNV(...) (wrapper_physical_device_entrypoints.CreateOpticalFlowSessionNV)
#define name_of_wrapper_CreateOpticalFlowSessionNV(...) "wrapper_CreateOpticalFlowSessionNV"
#define VK_ID_DestroyOpticalFlowSessionNV 643
#define IS_VK_ID_DestroyOpticalFlowSessionNV_ON(masks) (((masks).f10 & (1ULL << (3))) != 0)
#define SET_VK_ID_DestroyOpticalFlowSessionNV_ON(masks) (masks).f10 |= (1ULL << (3))
#define VK_ID_DestroyOpticalFlowSessionNV_BIT (1ULL << (3))
#define VK_ID_DestroyOpticalFlowSessionNV_IDX (10)

#define PRINT_DestroyOpticalFlowSessionNV IS_VK_ID_DestroyOpticalFlowSessionNV_ON(wrapper_printer_masks)
#define TRY_DestroyOpticalFlowSessionNV(TRUE, FALSE) TRUE
#define has_device_wrapper_DestroyOpticalFlowSessionNV(...) (wrapper_device_entrypoints.DestroyOpticalFlowSessionNV)
#define has_physical_device_wrapper_DestroyOpticalFlowSessionNV(...) (wrapper_physical_device_entrypoints.DestroyOpticalFlowSessionNV)
#define name_of_wrapper_DestroyOpticalFlowSessionNV(...) "wrapper_DestroyOpticalFlowSessionNV"
#define VK_ID_BindOpticalFlowSessionImageNV 644
#define IS_VK_ID_BindOpticalFlowSessionImageNV_ON(masks) (((masks).f10 & (1ULL << (4))) != 0)
#define SET_VK_ID_BindOpticalFlowSessionImageNV_ON(masks) (masks).f10 |= (1ULL << (4))
#define VK_ID_BindOpticalFlowSessionImageNV_BIT (1ULL << (4))
#define VK_ID_BindOpticalFlowSessionImageNV_IDX (10)

#define PRINT_BindOpticalFlowSessionImageNV IS_VK_ID_BindOpticalFlowSessionImageNV_ON(wrapper_printer_masks)
#define TRY_BindOpticalFlowSessionImageNV(TRUE, FALSE) TRUE
#define has_device_wrapper_BindOpticalFlowSessionImageNV(...) (wrapper_device_entrypoints.BindOpticalFlowSessionImageNV)
#define has_physical_device_wrapper_BindOpticalFlowSessionImageNV(...) (wrapper_physical_device_entrypoints.BindOpticalFlowSessionImageNV)
#define name_of_wrapper_BindOpticalFlowSessionImageNV(...) "wrapper_BindOpticalFlowSessionImageNV"
#define VK_ID_CmdOpticalFlowExecuteNV 645
#define IS_VK_ID_CmdOpticalFlowExecuteNV_ON(masks) (((masks).f10 & (1ULL << (5))) != 0)
#define SET_VK_ID_CmdOpticalFlowExecuteNV_ON(masks) (masks).f10 |= (1ULL << (5))
#define VK_ID_CmdOpticalFlowExecuteNV_BIT (1ULL << (5))
#define VK_ID_CmdOpticalFlowExecuteNV_IDX (10)

#define PRINT_CmdOpticalFlowExecuteNV IS_VK_ID_CmdOpticalFlowExecuteNV_ON(wrapper_printer_masks)
#define TRY_CmdOpticalFlowExecuteNV(TRUE, FALSE) TRUE
#define has_device_wrapper_CmdOpticalFlowExecuteNV(...) (wrapper_device_entrypoints.CmdOpticalFlowExecuteNV)
#define has_physical_device_wrapper_CmdOpticalFlowExecuteNV(...) (wrapper_physical_device_entrypoints.CmdOpticalFlowExecuteNV)
#define name_of_wrapper_CmdOpticalFlowExecuteNV(...) "wrapper_CmdOpticalFlowExecuteNV"
#define VK_ID_GetDeviceFaultInfoEXT 646
#define IS_VK_ID_GetDeviceFaultInfoEXT_ON(masks) (((masks).f10 & (1ULL << (6))) != 0)
#define SET_VK_ID_GetDeviceFaultInfoEXT_ON(masks) (masks).f10 |= (1ULL << (6))
#define VK_ID_GetDeviceFaultInfoEXT_BIT (1ULL << (6))
#define VK_ID_GetDeviceFaultInfoEXT_IDX (10)

#define PRINT_GetDeviceFaultInfoEXT IS_VK_ID_GetDeviceFaultInfoEXT_ON(wrapper_printer_masks)
#define TRY_GetDeviceFaultInfoEXT(TRUE, FALSE) TRUE
#define has_device_wrapper_GetDeviceFaultInfoEXT(...) (wrapper_device_entrypoints.GetDeviceFaultInfoEXT)
#define has_physical_device_wrapper_GetDeviceFaultInfoEXT(...) (wrapper_physical_device_entrypoints.GetDeviceFaultInfoEXT)
#define name_of_wrapper_GetDeviceFaultInfoEXT(...) "wrapper_GetDeviceFaultInfoEXT"
#define VK_ID_CmdSetDepthBias2EXT 647
#define IS_VK_ID_CmdSetDepthBias2EXT_ON(masks) (((masks).f10 & (1ULL << (7))) != 0)
#define SET_VK_ID_CmdSetDepthBias2EXT_ON(masks) (masks).f10 |= (1ULL << (7))
#define VK_ID_CmdSetDepthBias2EXT_BIT (1ULL << (7))
#define VK_ID_CmdSetDepthBias2EXT_IDX (10)

#define PRINT_CmdSetDepthBias2EXT IS_VK_ID_CmdSetDepthBias2EXT_ON(wrapper_printer_masks)
#define TRY_CmdSetDepthBias2EXT(TRUE, FALSE) TRUE
#define has_device_wrapper_CmdSetDepthBias2EXT(...) (wrapper_device_entrypoints.CmdSetDepthBias2EXT)
#define has_physical_device_wrapper_CmdSetDepthBias2EXT(...) (wrapper_physical_device_entrypoints.CmdSetDepthBias2EXT)
#define name_of_wrapper_CmdSetDepthBias2EXT(...) "wrapper_CmdSetDepthBias2EXT"
#define VK_ID_ReleaseSwapchainImagesEXT 648
#define IS_VK_ID_ReleaseSwapchainImagesEXT_ON(masks) (((masks).f10 & (1ULL << (8))) != 0)
#define SET_VK_ID_ReleaseSwapchainImagesEXT_ON(masks) (masks).f10 |= (1ULL << (8))
#define VK_ID_ReleaseSwapchainImagesEXT_BIT (1ULL << (8))
#define VK_ID_ReleaseSwapchainImagesEXT_IDX (10)

#define PRINT_ReleaseSwapchainImagesEXT IS_VK_ID_ReleaseSwapchainImagesEXT_ON(wrapper_printer_masks)
#define TRY_ReleaseSwapchainImagesEXT(TRUE, FALSE) TRUE
#define has_device_wrapper_ReleaseSwapchainImagesEXT(...) (wrapper_device_entrypoints.ReleaseSwapchainImagesEXT)
#define has_physical_device_wrapper_ReleaseSwapchainImagesEXT(...) (wrapper_physical_device_entrypoints.ReleaseSwapchainImagesEXT)
#define name_of_wrapper_ReleaseSwapchainImagesEXT(...) "wrapper_ReleaseSwapchainImagesEXT"
#define VK_ID_GetDeviceImageSubresourceLayoutKHR 649
#define IS_VK_ID_GetDeviceImageSubresourceLayoutKHR_ON(masks) (((masks).f10 & (1ULL << (9))) != 0)
#define SET_VK_ID_GetDeviceImageSubresourceLayoutKHR_ON(masks) (masks).f10 |= (1ULL << (9))
#define VK_ID_GetDeviceImageSubresourceLayoutKHR_BIT (1ULL << (9))
#define VK_ID_GetDeviceImageSubresourceLayoutKHR_IDX (10)

#define PRINT_GetDeviceImageSubresourceLayoutKHR IS_VK_ID_GetDeviceImageSubresourceLayoutKHR_ON(wrapper_printer_masks)
#define TRY_GetDeviceImageSubresourceLayoutKHR(TRUE, FALSE) TRUE
#define has_device_wrapper_GetDeviceImageSubresourceLayoutKHR(...) (wrapper_device_entrypoints.GetDeviceImageSubresourceLayoutKHR)
#define has_physical_device_wrapper_GetDeviceImageSubresourceLayoutKHR(...) (wrapper_physical_device_entrypoints.GetDeviceImageSubresourceLayoutKHR)
#define name_of_wrapper_GetDeviceImageSubresourceLayoutKHR(...) "wrapper_GetDeviceImageSubresourceLayoutKHR"
#define VK_ID_MapMemory2KHR 650
#define IS_VK_ID_MapMemory2KHR_ON(masks) (((masks).f10 & (1ULL << (10))) != 0)
#define SET_VK_ID_MapMemory2KHR_ON(masks) (masks).f10 |= (1ULL << (10))
#define VK_ID_MapMemory2KHR_BIT (1ULL << (10))
#define VK_ID_MapMemory2KHR_IDX (10)

#define PRINT_MapMemory2KHR IS_VK_ID_MapMemory2KHR_ON(wrapper_printer_masks)
#define TRY_MapMemory2KHR(TRUE, FALSE) TRUE
#define has_device_wrapper_MapMemory2KHR(...) (wrapper_device_entrypoints.MapMemory2KHR)
#define has_physical_device_wrapper_MapMemory2KHR(...) (wrapper_physical_device_entrypoints.MapMemory2KHR)
#define name_of_wrapper_MapMemory2KHR(...) "wrapper_MapMemory2KHR"
#define VK_ID_UnmapMemory2KHR 651
#define IS_VK_ID_UnmapMemory2KHR_ON(masks) (((masks).f10 & (1ULL << (11))) != 0)
#define SET_VK_ID_UnmapMemory2KHR_ON(masks) (masks).f10 |= (1ULL << (11))
#define VK_ID_UnmapMemory2KHR_BIT (1ULL << (11))
#define VK_ID_UnmapMemory2KHR_IDX (10)

#define PRINT_UnmapMemory2KHR IS_VK_ID_UnmapMemory2KHR_ON(wrapper_printer_masks)
#define TRY_UnmapMemory2KHR(TRUE, FALSE) TRUE
#define has_device_wrapper_UnmapMemory2KHR(...) (wrapper_device_entrypoints.UnmapMemory2KHR)
#define has_physical_device_wrapper_UnmapMemory2KHR(...) (wrapper_physical_device_entrypoints.UnmapMemory2KHR)
#define name_of_wrapper_UnmapMemory2KHR(...) "wrapper_UnmapMemory2KHR"
#define VK_ID_CreateShadersEXT 652
#define IS_VK_ID_CreateShadersEXT_ON(masks) (((masks).f10 & (1ULL << (12))) != 0)
#define SET_VK_ID_CreateShadersEXT_ON(masks) (masks).f10 |= (1ULL << (12))
#define VK_ID_CreateShadersEXT_BIT (1ULL << (12))
#define VK_ID_CreateShadersEXT_IDX (10)

#define PRINT_CreateShadersEXT IS_VK_ID_CreateShadersEXT_ON(wrapper_printer_masks)
#define TRY_CreateShadersEXT(TRUE, FALSE) TRUE
#define has_device_wrapper_CreateShadersEXT(...) (wrapper_device_entrypoints.CreateShadersEXT)
#define has_physical_device_wrapper_CreateShadersEXT(...) (wrapper_physical_device_entrypoints.CreateShadersEXT)
#define name_of_wrapper_CreateShadersEXT(...) "wrapper_CreateShadersEXT"
#define VK_ID_DestroyShaderEXT 653
#define IS_VK_ID_DestroyShaderEXT_ON(masks) (((masks).f10 & (1ULL << (13))) != 0)
#define SET_VK_ID_DestroyShaderEXT_ON(masks) (masks).f10 |= (1ULL << (13))
#define VK_ID_DestroyShaderEXT_BIT (1ULL << (13))
#define VK_ID_DestroyShaderEXT_IDX (10)

#define PRINT_DestroyShaderEXT IS_VK_ID_DestroyShaderEXT_ON(wrapper_printer_masks)
#define TRY_DestroyShaderEXT(TRUE, FALSE) TRUE
#define has_device_wrapper_DestroyShaderEXT(...) (wrapper_device_entrypoints.DestroyShaderEXT)
#define has_physical_device_wrapper_DestroyShaderEXT(...) (wrapper_physical_device_entrypoints.DestroyShaderEXT)
#define name_of_wrapper_DestroyShaderEXT(...) "wrapper_DestroyShaderEXT"
#define VK_ID_GetShaderBinaryDataEXT 654
#define IS_VK_ID_GetShaderBinaryDataEXT_ON(masks) (((masks).f10 & (1ULL << (14))) != 0)
#define SET_VK_ID_GetShaderBinaryDataEXT_ON(masks) (masks).f10 |= (1ULL << (14))
#define VK_ID_GetShaderBinaryDataEXT_BIT (1ULL << (14))
#define VK_ID_GetShaderBinaryDataEXT_IDX (10)

#define PRINT_GetShaderBinaryDataEXT IS_VK_ID_GetShaderBinaryDataEXT_ON(wrapper_printer_masks)
#define TRY_GetShaderBinaryDataEXT(TRUE, FALSE) TRUE
#define has_device_wrapper_GetShaderBinaryDataEXT(...) (wrapper_device_entrypoints.GetShaderBinaryDataEXT)
#define has_physical_device_wrapper_GetShaderBinaryDataEXT(...) (wrapper_physical_device_entrypoints.GetShaderBinaryDataEXT)
#define name_of_wrapper_GetShaderBinaryDataEXT(...) "wrapper_GetShaderBinaryDataEXT"
#define VK_ID_CmdBindShadersEXT 655
#define IS_VK_ID_CmdBindShadersEXT_ON(masks) (((masks).f10 & (1ULL << (15))) != 0)
#define SET_VK_ID_CmdBindShadersEXT_ON(masks) (masks).f10 |= (1ULL << (15))
#define VK_ID_CmdBindShadersEXT_BIT (1ULL << (15))
#define VK_ID_CmdBindShadersEXT_IDX (10)

#define PRINT_CmdBindShadersEXT IS_VK_ID_CmdBindShadersEXT_ON(wrapper_printer_masks)
#define TRY_CmdBindShadersEXT(TRUE, FALSE) TRUE
#define has_device_wrapper_CmdBindShadersEXT(...) (wrapper_device_entrypoints.CmdBindShadersEXT)
#define has_physical_device_wrapper_CmdBindShadersEXT(...) (wrapper_physical_device_entrypoints.CmdBindShadersEXT)
#define name_of_wrapper_CmdBindShadersEXT(...) "wrapper_CmdBindShadersEXT"
#ifdef VK_USE_PLATFORM_SCREEN_QNX
#define VK_ID_GetScreenBufferPropertiesQNX 656
#define IS_VK_ID_GetScreenBufferPropertiesQNX_ON(masks) (((masks).f10 & (1ULL << (16))) != 0)
#define SET_VK_ID_GetScreenBufferPropertiesQNX_ON(masks) (masks).f10 |= (1ULL << (16))
#define VK_ID_GetScreenBufferPropertiesQNX_BIT (1ULL << (16))
#define VK_ID_GetScreenBufferPropertiesQNX_IDX (10)

#define PRINT_GetScreenBufferPropertiesQNX IS_VK_ID_GetScreenBufferPropertiesQNX_ON(wrapper_printer_masks)
#define TRY_GetScreenBufferPropertiesQNX(TRUE, FALSE) TRUE
#define has_device_wrapper_GetScreenBufferPropertiesQNX(...) (wrapper_device_entrypoints.GetScreenBufferPropertiesQNX)
#define has_physical_device_wrapper_GetScreenBufferPropertiesQNX(...) (wrapper_physical_device_entrypoints.GetScreenBufferPropertiesQNX)
#define name_of_wrapper_GetScreenBufferPropertiesQNX(...) "wrapper_GetScreenBufferPropertiesQNX"
#else
#define TRY_GetScreenBufferPropertiesQNX(TRUE, FALSE) FALSE
#endif
#define VK_ID_GetPhysicalDeviceCooperativeMatrixPropertiesKHR 657
#define IS_VK_ID_GetPhysicalDeviceCooperativeMatrixPropertiesKHR_ON(masks) (((masks).f10 & (1ULL << (17))) != 0)
#define SET_VK_ID_GetPhysicalDeviceCooperativeMatrixPropertiesKHR_ON(masks) (masks).f10 |= (1ULL << (17))
#define VK_ID_GetPhysicalDeviceCooperativeMatrixPropertiesKHR_BIT (1ULL << (17))
#define VK_ID_GetPhysicalDeviceCooperativeMatrixPropertiesKHR_IDX (10)

#define PRINT_GetPhysicalDeviceCooperativeMatrixPropertiesKHR IS_VK_ID_GetPhysicalDeviceCooperativeMatrixPropertiesKHR_ON(wrapper_printer_masks)
#define TRY_GetPhysicalDeviceCooperativeMatrixPropertiesKHR(TRUE, FALSE) TRUE
#define has_device_wrapper_GetPhysicalDeviceCooperativeMatrixPropertiesKHR(...) (wrapper_device_entrypoints.GetPhysicalDeviceCooperativeMatrixPropertiesKHR)
#define has_physical_device_wrapper_GetPhysicalDeviceCooperativeMatrixPropertiesKHR(...) (wrapper_physical_device_entrypoints.GetPhysicalDeviceCooperativeMatrixPropertiesKHR)
#define name_of_wrapper_GetPhysicalDeviceCooperativeMatrixPropertiesKHR(...) "wrapper_GetPhysicalDeviceCooperativeMatrixPropertiesKHR"
#define VK_ID_CmdBindDescriptorSets2KHR 658
#define IS_VK_ID_CmdBindDescriptorSets2KHR_ON(masks) (((masks).f10 & (1ULL << (18))) != 0)
#define SET_VK_ID_CmdBindDescriptorSets2KHR_ON(masks) (masks).f10 |= (1ULL << (18))
#define VK_ID_CmdBindDescriptorSets2KHR_BIT (1ULL << (18))
#define VK_ID_CmdBindDescriptorSets2KHR_IDX (10)

#define PRINT_CmdBindDescriptorSets2KHR IS_VK_ID_CmdBindDescriptorSets2KHR_ON(wrapper_printer_masks)
#define TRY_CmdBindDescriptorSets2KHR(TRUE, FALSE) TRUE
#define has_device_wrapper_CmdBindDescriptorSets2KHR(...) (wrapper_device_entrypoints.CmdBindDescriptorSets2KHR)
#define has_physical_device_wrapper_CmdBindDescriptorSets2KHR(...) (wrapper_physical_device_entrypoints.CmdBindDescriptorSets2KHR)
#define name_of_wrapper_CmdBindDescriptorSets2KHR(...) "wrapper_CmdBindDescriptorSets2KHR"
#define VK_ID_CmdPushConstants2KHR 659
#define IS_VK_ID_CmdPushConstants2KHR_ON(masks) (((masks).f10 & (1ULL << (19))) != 0)
#define SET_VK_ID_CmdPushConstants2KHR_ON(masks) (masks).f10 |= (1ULL << (19))
#define VK_ID_CmdPushConstants2KHR_BIT (1ULL << (19))
#define VK_ID_CmdPushConstants2KHR_IDX (10)

#define PRINT_CmdPushConstants2KHR IS_VK_ID_CmdPushConstants2KHR_ON(wrapper_printer_masks)
#define TRY_CmdPushConstants2KHR(TRUE, FALSE) TRUE
#define has_device_wrapper_CmdPushConstants2KHR(...) (wrapper_device_entrypoints.CmdPushConstants2KHR)
#define has_physical_device_wrapper_CmdPushConstants2KHR(...) (wrapper_physical_device_entrypoints.CmdPushConstants2KHR)
#define name_of_wrapper_CmdPushConstants2KHR(...) "wrapper_CmdPushConstants2KHR"
#define VK_ID_CmdPushDescriptorSet2KHR 660
#define IS_VK_ID_CmdPushDescriptorSet2KHR_ON(masks) (((masks).f10 & (1ULL << (20))) != 0)
#define SET_VK_ID_CmdPushDescriptorSet2KHR_ON(masks) (masks).f10 |= (1ULL << (20))
#define VK_ID_CmdPushDescriptorSet2KHR_BIT (1ULL << (20))
#define VK_ID_CmdPushDescriptorSet2KHR_IDX (10)

#define PRINT_CmdPushDescriptorSet2KHR IS_VK_ID_CmdPushDescriptorSet2KHR_ON(wrapper_printer_masks)
#define TRY_CmdPushDescriptorSet2KHR(TRUE, FALSE) TRUE
#define has_device_wrapper_CmdPushDescriptorSet2KHR(...) (wrapper_device_entrypoints.CmdPushDescriptorSet2KHR)
#define has_physical_device_wrapper_CmdPushDescriptorSet2KHR(...) (wrapper_physical_device_entrypoints.CmdPushDescriptorSet2KHR)
#define name_of_wrapper_CmdPushDescriptorSet2KHR(...) "wrapper_CmdPushDescriptorSet2KHR"
#define VK_ID_CmdPushDescriptorSetWithTemplate2KHR 661
#define IS_VK_ID_CmdPushDescriptorSetWithTemplate2KHR_ON(masks) (((masks).f10 & (1ULL << (21))) != 0)
#define SET_VK_ID_CmdPushDescriptorSetWithTemplate2KHR_ON(masks) (masks).f10 |= (1ULL << (21))
#define VK_ID_CmdPushDescriptorSetWithTemplate2KHR_BIT (1ULL << (21))
#define VK_ID_CmdPushDescriptorSetWithTemplate2KHR_IDX (10)

#define PRINT_CmdPushDescriptorSetWithTemplate2KHR IS_VK_ID_CmdPushDescriptorSetWithTemplate2KHR_ON(wrapper_printer_masks)
#define TRY_CmdPushDescriptorSetWithTemplate2KHR(TRUE, FALSE) TRUE
#define has_device_wrapper_CmdPushDescriptorSetWithTemplate2KHR(...) (wrapper_device_entrypoints.CmdPushDescriptorSetWithTemplate2KHR)
#define has_physical_device_wrapper_CmdPushDescriptorSetWithTemplate2KHR(...) (wrapper_physical_device_entrypoints.CmdPushDescriptorSetWithTemplate2KHR)
#define name_of_wrapper_CmdPushDescriptorSetWithTemplate2KHR(...) "wrapper_CmdPushDescriptorSetWithTemplate2KHR"
#define VK_ID_CmdSetDescriptorBufferOffsets2EXT 662
#define IS_VK_ID_CmdSetDescriptorBufferOffsets2EXT_ON(masks) (((masks).f10 & (1ULL << (22))) != 0)
#define SET_VK_ID_CmdSetDescriptorBufferOffsets2EXT_ON(masks) (masks).f10 |= (1ULL << (22))
#define VK_ID_CmdSetDescriptorBufferOffsets2EXT_BIT (1ULL << (22))
#define VK_ID_CmdSetDescriptorBufferOffsets2EXT_IDX (10)

#define PRINT_CmdSetDescriptorBufferOffsets2EXT IS_VK_ID_CmdSetDescriptorBufferOffsets2EXT_ON(wrapper_printer_masks)
#define TRY_CmdSetDescriptorBufferOffsets2EXT(TRUE, FALSE) TRUE
#define has_device_wrapper_CmdSetDescriptorBufferOffsets2EXT(...) (wrapper_device_entrypoints.CmdSetDescriptorBufferOffsets2EXT)
#define has_physical_device_wrapper_CmdSetDescriptorBufferOffsets2EXT(...) (wrapper_physical_device_entrypoints.CmdSetDescriptorBufferOffsets2EXT)
#define name_of_wrapper_CmdSetDescriptorBufferOffsets2EXT(...) "wrapper_CmdSetDescriptorBufferOffsets2EXT"
#define VK_ID_CmdBindDescriptorBufferEmbeddedSamplers2EXT 663
#define IS_VK_ID_CmdBindDescriptorBufferEmbeddedSamplers2EXT_ON(masks) (((masks).f10 & (1ULL << (23))) != 0)
#define SET_VK_ID_CmdBindDescriptorBufferEmbeddedSamplers2EXT_ON(masks) (masks).f10 |= (1ULL << (23))
#define VK_ID_CmdBindDescriptorBufferEmbeddedSamplers2EXT_BIT (1ULL << (23))
#define VK_ID_CmdBindDescriptorBufferEmbeddedSamplers2EXT_IDX (10)

#define PRINT_CmdBindDescriptorBufferEmbeddedSamplers2EXT IS_VK_ID_CmdBindDescriptorBufferEmbeddedSamplers2EXT_ON(wrapper_printer_masks)
#define TRY_CmdBindDescriptorBufferEmbeddedSamplers2EXT(TRUE, FALSE) TRUE
#define has_device_wrapper_CmdBindDescriptorBufferEmbeddedSamplers2EXT(...) (wrapper_device_entrypoints.CmdBindDescriptorBufferEmbeddedSamplers2EXT)
#define has_physical_device_wrapper_CmdBindDescriptorBufferEmbeddedSamplers2EXT(...) (wrapper_physical_device_entrypoints.CmdBindDescriptorBufferEmbeddedSamplers2EXT)
#define name_of_wrapper_CmdBindDescriptorBufferEmbeddedSamplers2EXT(...) "wrapper_CmdBindDescriptorBufferEmbeddedSamplers2EXT"
#define VK_ID_SetLatencySleepModeNV 664
#define IS_VK_ID_SetLatencySleepModeNV_ON(masks) (((masks).f10 & (1ULL << (24))) != 0)
#define SET_VK_ID_SetLatencySleepModeNV_ON(masks) (masks).f10 |= (1ULL << (24))
#define VK_ID_SetLatencySleepModeNV_BIT (1ULL << (24))
#define VK_ID_SetLatencySleepModeNV_IDX (10)

#define PRINT_SetLatencySleepModeNV IS_VK_ID_SetLatencySleepModeNV_ON(wrapper_printer_masks)
#define TRY_SetLatencySleepModeNV(TRUE, FALSE) TRUE
#define has_device_wrapper_SetLatencySleepModeNV(...) (wrapper_device_entrypoints.SetLatencySleepModeNV)
#define has_physical_device_wrapper_SetLatencySleepModeNV(...) (wrapper_physical_device_entrypoints.SetLatencySleepModeNV)
#define name_of_wrapper_SetLatencySleepModeNV(...) "wrapper_SetLatencySleepModeNV"
#define VK_ID_LatencySleepNV 665
#define IS_VK_ID_LatencySleepNV_ON(masks) (((masks).f10 & (1ULL << (25))) != 0)
#define SET_VK_ID_LatencySleepNV_ON(masks) (masks).f10 |= (1ULL << (25))
#define VK_ID_LatencySleepNV_BIT (1ULL << (25))
#define VK_ID_LatencySleepNV_IDX (10)

#define PRINT_LatencySleepNV IS_VK_ID_LatencySleepNV_ON(wrapper_printer_masks)
#define TRY_LatencySleepNV(TRUE, FALSE) TRUE
#define has_device_wrapper_LatencySleepNV(...) (wrapper_device_entrypoints.LatencySleepNV)
#define has_physical_device_wrapper_LatencySleepNV(...) (wrapper_physical_device_entrypoints.LatencySleepNV)
#define name_of_wrapper_LatencySleepNV(...) "wrapper_LatencySleepNV"
#define VK_ID_SetLatencyMarkerNV 666
#define IS_VK_ID_SetLatencyMarkerNV_ON(masks) (((masks).f10 & (1ULL << (26))) != 0)
#define SET_VK_ID_SetLatencyMarkerNV_ON(masks) (masks).f10 |= (1ULL << (26))
#define VK_ID_SetLatencyMarkerNV_BIT (1ULL << (26))
#define VK_ID_SetLatencyMarkerNV_IDX (10)

#define PRINT_SetLatencyMarkerNV IS_VK_ID_SetLatencyMarkerNV_ON(wrapper_printer_masks)
#define TRY_SetLatencyMarkerNV(TRUE, FALSE) TRUE
#define has_device_wrapper_SetLatencyMarkerNV(...) (wrapper_device_entrypoints.SetLatencyMarkerNV)
#define has_physical_device_wrapper_SetLatencyMarkerNV(...) (wrapper_physical_device_entrypoints.SetLatencyMarkerNV)
#define name_of_wrapper_SetLatencyMarkerNV(...) "wrapper_SetLatencyMarkerNV"
#define VK_ID_GetLatencyTimingsNV 667
#define IS_VK_ID_GetLatencyTimingsNV_ON(masks) (((masks).f10 & (1ULL << (27))) != 0)
#define SET_VK_ID_GetLatencyTimingsNV_ON(masks) (masks).f10 |= (1ULL << (27))
#define VK_ID_GetLatencyTimingsNV_BIT (1ULL << (27))
#define VK_ID_GetLatencyTimingsNV_IDX (10)

#define PRINT_GetLatencyTimingsNV IS_VK_ID_GetLatencyTimingsNV_ON(wrapper_printer_masks)
#define TRY_GetLatencyTimingsNV(TRUE, FALSE) TRUE
#define has_device_wrapper_GetLatencyTimingsNV(...) (wrapper_device_entrypoints.GetLatencyTimingsNV)
#define has_physical_device_wrapper_GetLatencyTimingsNV(...) (wrapper_physical_device_entrypoints.GetLatencyTimingsNV)
#define name_of_wrapper_GetLatencyTimingsNV(...) "wrapper_GetLatencyTimingsNV"
#define VK_ID_QueueNotifyOutOfBandNV 668
#define IS_VK_ID_QueueNotifyOutOfBandNV_ON(masks) (((masks).f10 & (1ULL << (28))) != 0)
#define SET_VK_ID_QueueNotifyOutOfBandNV_ON(masks) (masks).f10 |= (1ULL << (28))
#define VK_ID_QueueNotifyOutOfBandNV_BIT (1ULL << (28))
#define VK_ID_QueueNotifyOutOfBandNV_IDX (10)

#define PRINT_QueueNotifyOutOfBandNV IS_VK_ID_QueueNotifyOutOfBandNV_ON(wrapper_printer_masks)
#define TRY_QueueNotifyOutOfBandNV(TRUE, FALSE) TRUE
#define has_device_wrapper_QueueNotifyOutOfBandNV(...) (wrapper_device_entrypoints.QueueNotifyOutOfBandNV)
#define has_physical_device_wrapper_QueueNotifyOutOfBandNV(...) (wrapper_physical_device_entrypoints.QueueNotifyOutOfBandNV)
#define name_of_wrapper_QueueNotifyOutOfBandNV(...) "wrapper_QueueNotifyOutOfBandNV"
#define VK_ID_CmdSetRenderingAttachmentLocationsKHR 669
#define IS_VK_ID_CmdSetRenderingAttachmentLocationsKHR_ON(masks) (((masks).f10 & (1ULL << (29))) != 0)
#define SET_VK_ID_CmdSetRenderingAttachmentLocationsKHR_ON(masks) (masks).f10 |= (1ULL << (29))
#define VK_ID_CmdSetRenderingAttachmentLocationsKHR_BIT (1ULL << (29))
#define VK_ID_CmdSetRenderingAttachmentLocationsKHR_IDX (10)

#define PRINT_CmdSetRenderingAttachmentLocationsKHR IS_VK_ID_CmdSetRenderingAttachmentLocationsKHR_ON(wrapper_printer_masks)
#define TRY_CmdSetRenderingAttachmentLocationsKHR(TRUE, FALSE) TRUE
#define has_device_wrapper_CmdSetRenderingAttachmentLocationsKHR(...) (wrapper_device_entrypoints.CmdSetRenderingAttachmentLocationsKHR)
#define has_physical_device_wrapper_CmdSetRenderingAttachmentLocationsKHR(...) (wrapper_physical_device_entrypoints.CmdSetRenderingAttachmentLocationsKHR)
#define name_of_wrapper_CmdSetRenderingAttachmentLocationsKHR(...) "wrapper_CmdSetRenderingAttachmentLocationsKHR"
#define VK_ID_CmdSetRenderingInputAttachmentIndicesKHR 670
#define IS_VK_ID_CmdSetRenderingInputAttachmentIndicesKHR_ON(masks) (((masks).f10 & (1ULL << (30))) != 0)
#define SET_VK_ID_CmdSetRenderingInputAttachmentIndicesKHR_ON(masks) (masks).f10 |= (1ULL << (30))
#define VK_ID_CmdSetRenderingInputAttachmentIndicesKHR_BIT (1ULL << (30))
#define VK_ID_CmdSetRenderingInputAttachmentIndicesKHR_IDX (10)

#define PRINT_CmdSetRenderingInputAttachmentIndicesKHR IS_VK_ID_CmdSetRenderingInputAttachmentIndicesKHR_ON(wrapper_printer_masks)
#define TRY_CmdSetRenderingInputAttachmentIndicesKHR(TRUE, FALSE) TRUE
#define has_device_wrapper_CmdSetRenderingInputAttachmentIndicesKHR(...) (wrapper_device_entrypoints.CmdSetRenderingInputAttachmentIndicesKHR)
#define has_physical_device_wrapper_CmdSetRenderingInputAttachmentIndicesKHR(...) (wrapper_physical_device_entrypoints.CmdSetRenderingInputAttachmentIndicesKHR)
#define name_of_wrapper_CmdSetRenderingInputAttachmentIndicesKHR(...) "wrapper_CmdSetRenderingInputAttachmentIndicesKHR"

#define NOOP

#define UNROLL_ENTRY_POINTS(FUNC) TRY_CreateInstance(FUNC(CreateInstance), NOOP); TRY_DestroyInstance(FUNC(DestroyInstance), NOOP); TRY_EnumeratePhysicalDevices(FUNC(EnumeratePhysicalDevices), NOOP); TRY_GetDeviceProcAddr(FUNC(GetDeviceProcAddr), NOOP); TRY_GetInstanceProcAddr(FUNC(GetInstanceProcAddr), NOOP); TRY_GetPhysicalDeviceProperties(FUNC(GetPhysicalDeviceProperties), NOOP); TRY_GetPhysicalDeviceQueueFamilyProperties(FUNC(GetPhysicalDeviceQueueFamilyProperties), NOOP); TRY_GetPhysicalDeviceMemoryProperties(FUNC(GetPhysicalDeviceMemoryProperties), NOOP); TRY_GetPhysicalDeviceFeatures(FUNC(GetPhysicalDeviceFeatures), NOOP); TRY_GetPhysicalDeviceFormatProperties(FUNC(GetPhysicalDeviceFormatProperties), NOOP); TRY_GetPhysicalDeviceImageFormatProperties(FUNC(GetPhysicalDeviceImageFormatProperties), NOOP); TRY_CreateDevice(FUNC(CreateDevice), NOOP); TRY_DestroyDevice(FUNC(DestroyDevice), NOOP); TRY_EnumerateInstanceVersion(FUNC(EnumerateInstanceVersion), NOOP); TRY_EnumerateInstanceLayerProperties(FUNC(EnumerateInstanceLayerProperties), NOOP); TRY_EnumerateInstanceExtensionProperties(FUNC(EnumerateInstanceExtensionProperties), NOOP); TRY_EnumerateDeviceLayerProperties(FUNC(EnumerateDeviceLayerProperties), NOOP); TRY_EnumerateDeviceExtensionProperties(FUNC(EnumerateDeviceExtensionProperties), NOOP); TRY_GetDeviceQueue(FUNC(GetDeviceQueue), NOOP); TRY_QueueSubmit(FUNC(QueueSubmit), NOOP); TRY_QueueWaitIdle(FUNC(QueueWaitIdle), NOOP); TRY_DeviceWaitIdle(FUNC(DeviceWaitIdle), NOOP); TRY_AllocateMemory(FUNC(AllocateMemory), NOOP); TRY_FreeMemory(FUNC(FreeMemory), NOOP); TRY_MapMemory(FUNC(MapMemory), NOOP); TRY_UnmapMemory(FUNC(UnmapMemory), NOOP); TRY_FlushMappedMemoryRanges(FUNC(FlushMappedMemoryRanges), NOOP); TRY_InvalidateMappedMemoryRanges(FUNC(InvalidateMappedMemoryRanges), NOOP); TRY_GetDeviceMemoryCommitment(FUNC(GetDeviceMemoryCommitment), NOOP); TRY_GetBufferMemoryRequirements(FUNC(GetBufferMemoryRequirements), NOOP); TRY_BindBufferMemory(FUNC(BindBufferMemory), NOOP); TRY_GetImageMemoryRequirements(FUNC(GetImageMemoryRequirements), NOOP); TRY_BindImageMemory(FUNC(BindImageMemory), NOOP); TRY_GetImageSparseMemoryRequirements(FUNC(GetImageSparseMemoryRequirements), NOOP); TRY_GetPhysicalDeviceSparseImageFormatProperties(FUNC(GetPhysicalDeviceSparseImageFormatProperties), NOOP); TRY_QueueBindSparse(FUNC(QueueBindSparse), NOOP); TRY_CreateFence(FUNC(CreateFence), NOOP); TRY_DestroyFence(FUNC(DestroyFence), NOOP); TRY_ResetFences(FUNC(ResetFences), NOOP); TRY_GetFenceStatus(FUNC(GetFenceStatus), NOOP); TRY_WaitForFences(FUNC(WaitForFences), NOOP); TRY_CreateSemaphore(FUNC(CreateSemaphore), NOOP); TRY_DestroySemaphore(FUNC(DestroySemaphore), NOOP); TRY_CreateEvent(FUNC(CreateEvent), NOOP); TRY_DestroyEvent(FUNC(DestroyEvent), NOOP); TRY_GetEventStatus(FUNC(GetEventStatus), NOOP); TRY_SetEvent(FUNC(SetEvent), NOOP); TRY_ResetEvent(FUNC(ResetEvent), NOOP); TRY_CreateQueryPool(FUNC(CreateQueryPool), NOOP); TRY_DestroyQueryPool(FUNC(DestroyQueryPool), NOOP); TRY_GetQueryPoolResults(FUNC(GetQueryPoolResults), NOOP); TRY_ResetQueryPool(FUNC(ResetQueryPool), NOOP); TRY_CreateBuffer(FUNC(CreateBuffer), NOOP); TRY_DestroyBuffer(FUNC(DestroyBuffer), NOOP); TRY_CreateBufferView(FUNC(CreateBufferView), NOOP); TRY_DestroyBufferView(FUNC(DestroyBufferView), NOOP); TRY_CreateImage(FUNC(CreateImage), NOOP); TRY_DestroyImage(FUNC(DestroyImage), NOOP); TRY_GetImageSubresourceLayout(FUNC(GetImageSubresourceLayout), NOOP); TRY_CreateImageView(FUNC(CreateImageView), NOOP); TRY_DestroyImageView(FUNC(DestroyImageView), NOOP); TRY_CreateShaderModule(FUNC(CreateShaderModule), NOOP); TRY_DestroyShaderModule(FUNC(DestroyShaderModule), NOOP); TRY_CreatePipelineCache(FUNC(CreatePipelineCache), NOOP); TRY_DestroyPipelineCache(FUNC(DestroyPipelineCache), NOOP); TRY_GetPipelineCacheData(FUNC(GetPipelineCacheData), NOOP); TRY_MergePipelineCaches(FUNC(MergePipelineCaches), NOOP); TRY_CreateGraphicsPipelines(FUNC(CreateGraphicsPipelines), NOOP); TRY_CreateComputePipelines(FUNC(CreateComputePipelines), NOOP); TRY_GetDeviceSubpassShadingMaxWorkgroupSizeHUAWEI(FUNC(GetDeviceSubpassShadingMaxWorkgroupSizeHUAWEI), NOOP); TRY_DestroyPipeline(FUNC(DestroyPipeline), NOOP); TRY_CreatePipelineLayout(FUNC(CreatePipelineLayout), NOOP); TRY_DestroyPipelineLayout(FUNC(DestroyPipelineLayout), NOOP); TRY_CreateSampler(FUNC(CreateSampler), NOOP); TRY_DestroySampler(FUNC(DestroySampler), NOOP); TRY_CreateDescriptorSetLayout(FUNC(CreateDescriptorSetLayout), NOOP); TRY_DestroyDescriptorSetLayout(FUNC(DestroyDescriptorSetLayout), NOOP); TRY_CreateDescriptorPool(FUNC(CreateDescriptorPool), NOOP); TRY_DestroyDescriptorPool(FUNC(DestroyDescriptorPool), NOOP); TRY_ResetDescriptorPool(FUNC(ResetDescriptorPool), NOOP); TRY_AllocateDescriptorSets(FUNC(AllocateDescriptorSets), NOOP); TRY_FreeDescriptorSets(FUNC(FreeDescriptorSets), NOOP); TRY_UpdateDescriptorSets(FUNC(UpdateDescriptorSets), NOOP); TRY_CreateFramebuffer(FUNC(CreateFramebuffer), NOOP); TRY_DestroyFramebuffer(FUNC(DestroyFramebuffer), NOOP); TRY_CreateRenderPass(FUNC(CreateRenderPass), NOOP); TRY_DestroyRenderPass(FUNC(DestroyRenderPass), NOOP); TRY_GetRenderAreaGranularity(FUNC(GetRenderAreaGranularity), NOOP); TRY_GetRenderingAreaGranularityKHR(FUNC(GetRenderingAreaGranularityKHR), NOOP); TRY_CreateCommandPool(FUNC(CreateCommandPool), NOOP); TRY_DestroyCommandPool(FUNC(DestroyCommandPool), NOOP); TRY_ResetCommandPool(FUNC(ResetCommandPool), NOOP); TRY_AllocateCommandBuffers(FUNC(AllocateCommandBuffers), NOOP); TRY_FreeCommandBuffers(FUNC(FreeCommandBuffers), NOOP); TRY_BeginCommandBuffer(FUNC(BeginCommandBuffer), NOOP); TRY_EndCommandBuffer(FUNC(EndCommandBuffer), NOOP); TRY_ResetCommandBuffer(FUNC(ResetCommandBuffer), NOOP); TRY_CmdBindPipeline(FUNC(CmdBindPipeline), NOOP); TRY_CmdSetAttachmentFeedbackLoopEnableEXT(FUNC(CmdSetAttachmentFeedbackLoopEnableEXT), NOOP); TRY_CmdSetViewport(FUNC(CmdSetViewport), NOOP); TRY_CmdSetScissor(FUNC(CmdSetScissor), NOOP); TRY_CmdSetLineWidth(FUNC(CmdSetLineWidth), NOOP); TRY_CmdSetDepthBias(FUNC(CmdSetDepthBias), NOOP); TRY_CmdSetBlendConstants(FUNC(CmdSetBlendConstants), NOOP); TRY_CmdSetDepthBounds(FUNC(CmdSetDepthBounds), NOOP); TRY_CmdSetStencilCompareMask(FUNC(CmdSetStencilCompareMask), NOOP); TRY_CmdSetStencilWriteMask(FUNC(CmdSetStencilWriteMask), NOOP); TRY_CmdSetStencilReference(FUNC(CmdSetStencilReference), NOOP); TRY_CmdBindDescriptorSets(FUNC(CmdBindDescriptorSets), NOOP); TRY_CmdBindIndexBuffer(FUNC(CmdBindIndexBuffer), NOOP); TRY_CmdBindVertexBuffers(FUNC(CmdBindVertexBuffers), NOOP); TRY_CmdDraw(FUNC(CmdDraw), NOOP); TRY_CmdDrawIndexed(FUNC(CmdDrawIndexed), NOOP); TRY_CmdDrawMultiEXT(FUNC(CmdDrawMultiEXT), NOOP); TRY_CmdDrawMultiIndexedEXT(FUNC(CmdDrawMultiIndexedEXT), NOOP); TRY_CmdDrawIndirect(FUNC(CmdDrawIndirect), NOOP); TRY_CmdDrawIndexedIndirect(FUNC(CmdDrawIndexedIndirect), NOOP); TRY_CmdDispatch(FUNC(CmdDispatch), NOOP); TRY_CmdDispatchIndirect(FUNC(CmdDispatchIndirect), NOOP); TRY_CmdSubpassShadingHUAWEI(FUNC(CmdSubpassShadingHUAWEI), NOOP); TRY_CmdDrawClusterHUAWEI(FUNC(CmdDrawClusterHUAWEI), NOOP); TRY_CmdDrawClusterIndirectHUAWEI(FUNC(CmdDrawClusterIndirectHUAWEI), NOOP); TRY_CmdUpdatePipelineIndirectBufferNV(FUNC(CmdUpdatePipelineIndirectBufferNV), NOOP); TRY_CmdCopyBuffer(FUNC(CmdCopyBuffer), NOOP); TRY_CmdCopyImage(FUNC(CmdCopyImage), NOOP); TRY_CmdBlitImage(FUNC(CmdBlitImage), NOOP); TRY_CmdCopyBufferToImage(FUNC(CmdCopyBufferToImage), NOOP); TRY_CmdCopyImageToBuffer(FUNC(CmdCopyImageToBuffer), NOOP); TRY_CmdCopyMemoryIndirectNV(FUNC(CmdCopyMemoryIndirectNV), NOOP); TRY_CmdCopyMemoryToImageIndirectNV(FUNC(CmdCopyMemoryToImageIndirectNV), NOOP); TRY_CmdUpdateBuffer(FUNC(CmdUpdateBuffer), NOOP); TRY_CmdFillBuffer(FUNC(CmdFillBuffer), NOOP); TRY_CmdClearColorImage(FUNC(CmdClearColorImage), NOOP); TRY_CmdClearDepthStencilImage(FUNC(CmdClearDepthStencilImage), NOOP); TRY_CmdClearAttachments(FUNC(CmdClearAttachments), NOOP); TRY_CmdResolveImage(FUNC(CmdResolveImage), NOOP); TRY_CmdSetEvent(FUNC(CmdSetEvent), NOOP); TRY_CmdResetEvent(FUNC(CmdResetEvent), NOOP); TRY_CmdWaitEvents(FUNC(CmdWaitEvents), NOOP); TRY_CmdPipelineBarrier(FUNC(CmdPipelineBarrier), NOOP); TRY_CmdBeginQuery(FUNC(CmdBeginQuery), NOOP); TRY_CmdEndQuery(FUNC(CmdEndQuery), NOOP); TRY_CmdBeginConditionalRenderingEXT(FUNC(CmdBeginConditionalRenderingEXT), NOOP); TRY_CmdEndConditionalRenderingEXT(FUNC(CmdEndConditionalRenderingEXT), NOOP); TRY_CmdResetQueryPool(FUNC(CmdResetQueryPool), NOOP); TRY_CmdWriteTimestamp(FUNC(CmdWriteTimestamp), NOOP); TRY_CmdCopyQueryPoolResults(FUNC(CmdCopyQueryPoolResults), NOOP); TRY_CmdPushConstants(FUNC(CmdPushConstants), NOOP); TRY_CmdBeginRenderPass(FUNC(CmdBeginRenderPass), NOOP); TRY_CmdNextSubpass(FUNC(CmdNextSubpass), NOOP); TRY_CmdEndRenderPass(FUNC(CmdEndRenderPass), NOOP); TRY_CmdExecuteCommands(FUNC(CmdExecuteCommands), NOOP); TRY_CreateAndroidSurfaceKHR(FUNC(CreateAndroidSurfaceKHR), NOOP); TRY_GetPhysicalDeviceDisplayPropertiesKHR(FUNC(GetPhysicalDeviceDisplayPropertiesKHR), NOOP); TRY_GetPhysicalDeviceDisplayPlanePropertiesKHR(FUNC(GetPhysicalDeviceDisplayPlanePropertiesKHR), NOOP); TRY_GetDisplayPlaneSupportedDisplaysKHR(FUNC(GetDisplayPlaneSupportedDisplaysKHR), NOOP); TRY_GetDisplayModePropertiesKHR(FUNC(GetDisplayModePropertiesKHR), NOOP); TRY_CreateDisplayModeKHR(FUNC(CreateDisplayModeKHR), NOOP); TRY_GetDisplayPlaneCapabilitiesKHR(FUNC(GetDisplayPlaneCapabilitiesKHR), NOOP); TRY_CreateDisplayPlaneSurfaceKHR(FUNC(CreateDisplayPlaneSurfaceKHR), NOOP); TRY_CreateSharedSwapchainsKHR(FUNC(CreateSharedSwapchainsKHR), NOOP); TRY_DestroySurfaceKHR(FUNC(DestroySurfaceKHR), NOOP); TRY_GetPhysicalDeviceSurfaceSupportKHR(FUNC(GetPhysicalDeviceSurfaceSupportKHR), NOOP); TRY_GetPhysicalDeviceSurfaceCapabilitiesKHR(FUNC(GetPhysicalDeviceSurfaceCapabilitiesKHR), NOOP); TRY_GetPhysicalDeviceSurfaceFormatsKHR(FUNC(GetPhysicalDeviceSurfaceFormatsKHR), NOOP); TRY_GetPhysicalDeviceSurfacePresentModesKHR(FUNC(GetPhysicalDeviceSurfacePresentModesKHR), NOOP); TRY_CreateSwapchainKHR(FUNC(CreateSwapchainKHR), NOOP); TRY_DestroySwapchainKHR(FUNC(DestroySwapchainKHR), NOOP); TRY_GetSwapchainImagesKHR(FUNC(GetSwapchainImagesKHR), NOOP); TRY_AcquireNextImageKHR(FUNC(AcquireNextImageKHR), NOOP); TRY_QueuePresentKHR(FUNC(QueuePresentKHR), NOOP); TRY_CreateViSurfaceNN(FUNC(CreateViSurfaceNN), NOOP); TRY_CreateWaylandSurfaceKHR(FUNC(CreateWaylandSurfaceKHR), NOOP); TRY_GetPhysicalDeviceWaylandPresentationSupportKHR(FUNC(GetPhysicalDeviceWaylandPresentationSupportKHR), NOOP); TRY_CreateWin32SurfaceKHR(FUNC(CreateWin32SurfaceKHR), NOOP); TRY_GetPhysicalDeviceWin32PresentationSupportKHR(FUNC(GetPhysicalDeviceWin32PresentationSupportKHR), NOOP); TRY_CreateXlibSurfaceKHR(FUNC(CreateXlibSurfaceKHR), NOOP); TRY_GetPhysicalDeviceXlibPresentationSupportKHR(FUNC(GetPhysicalDeviceXlibPresentationSupportKHR), NOOP); TRY_CreateXcbSurfaceKHR(FUNC(CreateXcbSurfaceKHR), NOOP); TRY_GetPhysicalDeviceXcbPresentationSupportKHR(FUNC(GetPhysicalDeviceXcbPresentationSupportKHR), NOOP); TRY_CreateDirectFBSurfaceEXT(FUNC(CreateDirectFBSurfaceEXT), NOOP); TRY_GetPhysicalDeviceDirectFBPresentationSupportEXT(FUNC(GetPhysicalDeviceDirectFBPresentationSupportEXT), NOOP); TRY_CreateImagePipeSurfaceFUCHSIA(FUNC(CreateImagePipeSurfaceFUCHSIA), NOOP); TRY_CreateStreamDescriptorSurfaceGGP(FUNC(CreateStreamDescriptorSurfaceGGP), NOOP); TRY_CreateScreenSurfaceQNX(FUNC(CreateScreenSurfaceQNX), NOOP); TRY_GetPhysicalDeviceScreenPresentationSupportQNX(FUNC(GetPhysicalDeviceScreenPresentationSupportQNX), NOOP); TRY_CreateDebugReportCallbackEXT(FUNC(CreateDebugReportCallbackEXT), NOOP); TRY_DestroyDebugReportCallbackEXT(FUNC(DestroyDebugReportCallbackEXT), NOOP); TRY_DebugReportMessageEXT(FUNC(DebugReportMessageEXT), NOOP); TRY_DebugMarkerSetObjectNameEXT(FUNC(DebugMarkerSetObjectNameEXT), NOOP); TRY_DebugMarkerSetObjectTagEXT(FUNC(DebugMarkerSetObjectTagEXT), NOOP); TRY_CmdDebugMarkerBeginEXT(FUNC(CmdDebugMarkerBeginEXT), NOOP); TRY_CmdDebugMarkerEndEXT(FUNC(CmdDebugMarkerEndEXT), NOOP); TRY_CmdDebugMarkerInsertEXT(FUNC(CmdDebugMarkerInsertEXT), NOOP); TRY_GetPhysicalDeviceExternalImageFormatPropertiesNV(FUNC(GetPhysicalDeviceExternalImageFormatPropertiesNV), NOOP); TRY_GetMemoryWin32HandleNV(FUNC(GetMemoryWin32HandleNV), NOOP); TRY_CmdExecuteGeneratedCommandsNV(FUNC(CmdExecuteGeneratedCommandsNV), NOOP); TRY_CmdPreprocessGeneratedCommandsNV(FUNC(CmdPreprocessGeneratedCommandsNV), NOOP); TRY_CmdBindPipelineShaderGroupNV(FUNC(CmdBindPipelineShaderGroupNV), NOOP); TRY_GetGeneratedCommandsMemoryRequirementsNV(FUNC(GetGeneratedCommandsMemoryRequirementsNV), NOOP); TRY_CreateIndirectCommandsLayoutNV(FUNC(CreateIndirectCommandsLayoutNV), NOOP); TRY_DestroyIndirectCommandsLayoutNV(FUNC(DestroyIndirectCommandsLayoutNV), NOOP); TRY_GetPhysicalDeviceFeatures2(FUNC(GetPhysicalDeviceFeatures2), NOOP); TRY_GetPhysicalDeviceProperties2(FUNC(GetPhysicalDeviceProperties2), NOOP); TRY_GetPhysicalDeviceFormatProperties2(FUNC(GetPhysicalDeviceFormatProperties2), NOOP); TRY_GetPhysicalDeviceImageFormatProperties2(FUNC(GetPhysicalDeviceImageFormatProperties2), NOOP); TRY_GetPhysicalDeviceQueueFamilyProperties2(FUNC(GetPhysicalDeviceQueueFamilyProperties2), NOOP); TRY_GetPhysicalDeviceMemoryProperties2(FUNC(GetPhysicalDeviceMemoryProperties2), NOOP); TRY_GetPhysicalDeviceSparseImageFormatProperties2(FUNC(GetPhysicalDeviceSparseImageFormatProperties2), NOOP); TRY_CmdPushDescriptorSetKHR(FUNC(CmdPushDescriptorSetKHR), NOOP); TRY_TrimCommandPool(FUNC(TrimCommandPool), NOOP); TRY_GetPhysicalDeviceExternalBufferProperties(FUNC(GetPhysicalDeviceExternalBufferProperties), NOOP); TRY_GetMemoryWin32HandleKHR(FUNC(GetMemoryWin32HandleKHR), NOOP); TRY_GetMemoryWin32HandlePropertiesKHR(FUNC(GetMemoryWin32HandlePropertiesKHR), NOOP); TRY_GetMemoryFdKHR(FUNC(GetMemoryFdKHR), NOOP); TRY_GetMemoryFdPropertiesKHR(FUNC(GetMemoryFdPropertiesKHR), NOOP); TRY_GetMemoryZirconHandleFUCHSIA(FUNC(GetMemoryZirconHandleFUCHSIA), NOOP); TRY_GetMemoryZirconHandlePropertiesFUCHSIA(FUNC(GetMemoryZirconHandlePropertiesFUCHSIA), NOOP); TRY_GetMemoryRemoteAddressNV(FUNC(GetMemoryRemoteAddressNV), NOOP); TRY_GetPhysicalDeviceExternalSemaphoreProperties(FUNC(GetPhysicalDeviceExternalSemaphoreProperties), NOOP); TRY_GetSemaphoreWin32HandleKHR(FUNC(GetSemaphoreWin32HandleKHR), NOOP); TRY_ImportSemaphoreWin32HandleKHR(FUNC(ImportSemaphoreWin32HandleKHR), NOOP); TRY_GetSemaphoreFdKHR(FUNC(GetSemaphoreFdKHR), NOOP); TRY_ImportSemaphoreFdKHR(FUNC(ImportSemaphoreFdKHR), NOOP); TRY_GetSemaphoreZirconHandleFUCHSIA(FUNC(GetSemaphoreZirconHandleFUCHSIA), NOOP); TRY_ImportSemaphoreZirconHandleFUCHSIA(FUNC(ImportSemaphoreZirconHandleFUCHSIA), NOOP); TRY_GetPhysicalDeviceExternalFenceProperties(FUNC(GetPhysicalDeviceExternalFenceProperties), NOOP); TRY_GetFenceWin32HandleKHR(FUNC(GetFenceWin32HandleKHR), NOOP); TRY_ImportFenceWin32HandleKHR(FUNC(ImportFenceWin32HandleKHR), NOOP); TRY_GetFenceFdKHR(FUNC(GetFenceFdKHR), NOOP); TRY_ImportFenceFdKHR(FUNC(ImportFenceFdKHR), NOOP); TRY_ReleaseDisplayEXT(FUNC(ReleaseDisplayEXT), NOOP); TRY_AcquireXlibDisplayEXT(FUNC(AcquireXlibDisplayEXT), NOOP); TRY_GetRandROutputDisplayEXT(FUNC(GetRandROutputDisplayEXT), NOOP); TRY_AcquireWinrtDisplayNV(FUNC(AcquireWinrtDisplayNV), NOOP); TRY_GetWinrtDisplayNV(FUNC(GetWinrtDisplayNV), NOOP); TRY_DisplayPowerControlEXT(FUNC(DisplayPowerControlEXT), NOOP); TRY_RegisterDeviceEventEXT(FUNC(RegisterDeviceEventEXT), NOOP); TRY_RegisterDisplayEventEXT(FUNC(RegisterDisplayEventEXT), NOOP); TRY_GetSwapchainCounterEXT(FUNC(GetSwapchainCounterEXT), NOOP); TRY_GetPhysicalDeviceSurfaceCapabilities2EXT(FUNC(GetPhysicalDeviceSurfaceCapabilities2EXT), NOOP); TRY_EnumeratePhysicalDeviceGroups(FUNC(EnumeratePhysicalDeviceGroups), NOOP); TRY_GetDeviceGroupPeerMemoryFeatures(FUNC(GetDeviceGroupPeerMemoryFeatures), NOOP); TRY_BindBufferMemory2(FUNC(BindBufferMemory2), NOOP); TRY_BindImageMemory2(FUNC(BindImageMemory2), NOOP); TRY_CmdSetDeviceMask(FUNC(CmdSetDeviceMask), NOOP); TRY_GetDeviceGroupPresentCapabilitiesKHR(FUNC(GetDeviceGroupPresentCapabilitiesKHR), NOOP); TRY_GetDeviceGroupSurfacePresentModesKHR(FUNC(GetDeviceGroupSurfacePresentModesKHR), NOOP); TRY_AcquireNextImage2KHR(FUNC(AcquireNextImage2KHR), NOOP); TRY_CmdDispatchBase(FUNC(CmdDispatchBase), NOOP); TRY_GetPhysicalDevicePresentRectanglesKHR(FUNC(GetPhysicalDevicePresentRectanglesKHR), NOOP); TRY_CreateDescriptorUpdateTemplate(FUNC(CreateDescriptorUpdateTemplate), NOOP); TRY_DestroyDescriptorUpdateTemplate(FUNC(DestroyDescriptorUpdateTemplate), NOOP); TRY_UpdateDescriptorSetWithTemplate(FUNC(UpdateDescriptorSetWithTemplate), NOOP); TRY_CmdPushDescriptorSetWithTemplateKHR(FUNC(CmdPushDescriptorSetWithTemplateKHR), NOOP); TRY_SetHdrMetadataEXT(FUNC(SetHdrMetadataEXT), NOOP); TRY_GetSwapchainStatusKHR(FUNC(GetSwapchainStatusKHR), NOOP); TRY_GetRefreshCycleDurationGOOGLE(FUNC(GetRefreshCycleDurationGOOGLE), NOOP); TRY_GetPastPresentationTimingGOOGLE(FUNC(GetPastPresentationTimingGOOGLE), NOOP); TRY_CreateIOSSurfaceMVK(FUNC(CreateIOSSurfaceMVK), NOOP); TRY_CreateMacOSSurfaceMVK(FUNC(CreateMacOSSurfaceMVK), NOOP); TRY_CreateMetalSurfaceEXT(FUNC(CreateMetalSurfaceEXT), NOOP); TRY_CmdSetViewportWScalingNV(FUNC(CmdSetViewportWScalingNV), NOOP); TRY_CmdSetDiscardRectangleEXT(FUNC(CmdSetDiscardRectangleEXT), NOOP); TRY_CmdSetDiscardRectangleEnableEXT(FUNC(CmdSetDiscardRectangleEnableEXT), NOOP); TRY_CmdSetDiscardRectangleModeEXT(FUNC(CmdSetDiscardRectangleModeEXT), NOOP); TRY_CmdSetSampleLocationsEXT(FUNC(CmdSetSampleLocationsEXT), NOOP); TRY_GetPhysicalDeviceMultisamplePropertiesEXT(FUNC(GetPhysicalDeviceMultisamplePropertiesEXT), NOOP); TRY_GetPhysicalDeviceSurfaceCapabilities2KHR(FUNC(GetPhysicalDeviceSurfaceCapabilities2KHR), NOOP); TRY_GetPhysicalDeviceSurfaceFormats2KHR(FUNC(GetPhysicalDeviceSurfaceFormats2KHR), NOOP); TRY_GetPhysicalDeviceDisplayProperties2KHR(FUNC(GetPhysicalDeviceDisplayProperties2KHR), NOOP); TRY_GetPhysicalDeviceDisplayPlaneProperties2KHR(FUNC(GetPhysicalDeviceDisplayPlaneProperties2KHR), NOOP); TRY_GetDisplayModeProperties2KHR(FUNC(GetDisplayModeProperties2KHR), NOOP); TRY_GetDisplayPlaneCapabilities2KHR(FUNC(GetDisplayPlaneCapabilities2KHR), NOOP); TRY_GetBufferMemoryRequirements2(FUNC(GetBufferMemoryRequirements2), NOOP); TRY_GetImageMemoryRequirements2(FUNC(GetImageMemoryRequirements2), NOOP); TRY_GetImageSparseMemoryRequirements2(FUNC(GetImageSparseMemoryRequirements2), NOOP); TRY_GetDeviceBufferMemoryRequirements(FUNC(GetDeviceBufferMemoryRequirements), NOOP); TRY_GetDeviceImageMemoryRequirements(FUNC(GetDeviceImageMemoryRequirements), NOOP); TRY_GetDeviceImageSparseMemoryRequirements(FUNC(GetDeviceImageSparseMemoryRequirements), NOOP); TRY_CreateSamplerYcbcrConversion(FUNC(CreateSamplerYcbcrConversion), NOOP); TRY_DestroySamplerYcbcrConversion(FUNC(DestroySamplerYcbcrConversion), NOOP); TRY_GetDeviceQueue2(FUNC(GetDeviceQueue2), NOOP); TRY_CreateValidationCacheEXT(FUNC(CreateValidationCacheEXT), NOOP); TRY_DestroyValidationCacheEXT(FUNC(DestroyValidationCacheEXT), NOOP); TRY_GetValidationCacheDataEXT(FUNC(GetValidationCacheDataEXT), NOOP); TRY_MergeValidationCachesEXT(FUNC(MergeValidationCachesEXT), NOOP); TRY_GetDescriptorSetLayoutSupport(FUNC(GetDescriptorSetLayoutSupport), NOOP); TRY_GetSwapchainGrallocUsageANDROID(FUNC(GetSwapchainGrallocUsageANDROID), NOOP); TRY_GetSwapchainGrallocUsage2ANDROID(FUNC(GetSwapchainGrallocUsage2ANDROID), NOOP); TRY_AcquireImageANDROID(FUNC(AcquireImageANDROID), NOOP); TRY_QueueSignalReleaseImageANDROID(FUNC(QueueSignalReleaseImageANDROID), NOOP); TRY_GetShaderInfoAMD(FUNC(GetShaderInfoAMD), NOOP); TRY_SetLocalDimmingAMD(FUNC(SetLocalDimmingAMD), NOOP); TRY_GetPhysicalDeviceCalibrateableTimeDomainsKHR(FUNC(GetPhysicalDeviceCalibrateableTimeDomainsKHR), NOOP); TRY_GetCalibratedTimestampsKHR(FUNC(GetCalibratedTimestampsKHR), NOOP); TRY_SetDebugUtilsObjectNameEXT(FUNC(SetDebugUtilsObjectNameEXT), NOOP); TRY_SetDebugUtilsObjectTagEXT(FUNC(SetDebugUtilsObjectTagEXT), NOOP); TRY_QueueBeginDebugUtilsLabelEXT(FUNC(QueueBeginDebugUtilsLabelEXT), NOOP); TRY_QueueEndDebugUtilsLabelEXT(FUNC(QueueEndDebugUtilsLabelEXT), NOOP); TRY_QueueInsertDebugUtilsLabelEXT(FUNC(QueueInsertDebugUtilsLabelEXT), NOOP); TRY_CmdBeginDebugUtilsLabelEXT(FUNC(CmdBeginDebugUtilsLabelEXT), NOOP); TRY_CmdEndDebugUtilsLabelEXT(FUNC(CmdEndDebugUtilsLabelEXT), NOOP); TRY_CmdInsertDebugUtilsLabelEXT(FUNC(CmdInsertDebugUtilsLabelEXT), NOOP); TRY_CreateDebugUtilsMessengerEXT(FUNC(CreateDebugUtilsMessengerEXT), NOOP); TRY_DestroyDebugUtilsMessengerEXT(FUNC(DestroyDebugUtilsMessengerEXT), NOOP); TRY_SubmitDebugUtilsMessageEXT(FUNC(SubmitDebugUtilsMessageEXT), NOOP); TRY_GetMemoryHostPointerPropertiesEXT(FUNC(GetMemoryHostPointerPropertiesEXT), NOOP); TRY_CmdWriteBufferMarkerAMD(FUNC(CmdWriteBufferMarkerAMD), NOOP); TRY_CreateRenderPass2(FUNC(CreateRenderPass2), NOOP); TRY_CmdBeginRenderPass2(FUNC(CmdBeginRenderPass2), NOOP); TRY_CmdNextSubpass2(FUNC(CmdNextSubpass2), NOOP); TRY_CmdEndRenderPass2(FUNC(CmdEndRenderPass2), NOOP); TRY_GetSemaphoreCounterValue(FUNC(GetSemaphoreCounterValue), NOOP); TRY_WaitSemaphores(FUNC(WaitSemaphores), NOOP); TRY_SignalSemaphore(FUNC(SignalSemaphore), NOOP); TRY_GetAndroidHardwareBufferPropertiesANDROID(FUNC(GetAndroidHardwareBufferPropertiesANDROID), NOOP); TRY_GetMemoryAndroidHardwareBufferANDROID(FUNC(GetMemoryAndroidHardwareBufferANDROID), NOOP); TRY_CmdDrawIndirectCount(FUNC(CmdDrawIndirectCount), NOOP); TRY_CmdDrawIndexedIndirectCount(FUNC(CmdDrawIndexedIndirectCount), NOOP); TRY_CmdSetCheckpointNV(FUNC(CmdSetCheckpointNV), NOOP); TRY_GetQueueCheckpointDataNV(FUNC(GetQueueCheckpointDataNV), NOOP); TRY_CmdBindTransformFeedbackBuffersEXT(FUNC(CmdBindTransformFeedbackBuffersEXT), NOOP); TRY_CmdBeginTransformFeedbackEXT(FUNC(CmdBeginTransformFeedbackEXT), NOOP); TRY_CmdEndTransformFeedbackEXT(FUNC(CmdEndTransformFeedbackEXT), NOOP); TRY_CmdBeginQueryIndexedEXT(FUNC(CmdBeginQueryIndexedEXT), NOOP); TRY_CmdEndQueryIndexedEXT(FUNC(CmdEndQueryIndexedEXT), NOOP); TRY_CmdDrawIndirectByteCountEXT(FUNC(CmdDrawIndirectByteCountEXT), NOOP); TRY_CmdSetExclusiveScissorNV(FUNC(CmdSetExclusiveScissorNV), NOOP); TRY_CmdSetExclusiveScissorEnableNV(FUNC(CmdSetExclusiveScissorEnableNV), NOOP); TRY_CmdBindShadingRateImageNV(FUNC(CmdBindShadingRateImageNV), NOOP); TRY_CmdSetViewportShadingRatePaletteNV(FUNC(CmdSetViewportShadingRatePaletteNV), NOOP); TRY_CmdSetCoarseSampleOrderNV(FUNC(CmdSetCoarseSampleOrderNV), NOOP); TRY_CmdDrawMeshTasksNV(FUNC(CmdDrawMeshTasksNV), NOOP); TRY_CmdDrawMeshTasksIndirectNV(FUNC(CmdDrawMeshTasksIndirectNV), NOOP); TRY_CmdDrawMeshTasksIndirectCountNV(FUNC(CmdDrawMeshTasksIndirectCountNV), NOOP); TRY_CmdDrawMeshTasksEXT(FUNC(CmdDrawMeshTasksEXT), NOOP); TRY_CmdDrawMeshTasksIndirectEXT(FUNC(CmdDrawMeshTasksIndirectEXT), NOOP); TRY_CmdDrawMeshTasksIndirectCountEXT(FUNC(CmdDrawMeshTasksIndirectCountEXT), NOOP); TRY_CompileDeferredNV(FUNC(CompileDeferredNV), NOOP); TRY_CreateAccelerationStructureNV(FUNC(CreateAccelerationStructureNV), NOOP); TRY_CmdBindInvocationMaskHUAWEI(FUNC(CmdBindInvocationMaskHUAWEI), NOOP); TRY_DestroyAccelerationStructureKHR(FUNC(DestroyAccelerationStructureKHR), NOOP); TRY_DestroyAccelerationStructureNV(FUNC(DestroyAccelerationStructureNV), NOOP); TRY_GetAccelerationStructureMemoryRequirementsNV(FUNC(GetAccelerationStructureMemoryRequirementsNV), NOOP); TRY_BindAccelerationStructureMemoryNV(FUNC(BindAccelerationStructureMemoryNV), NOOP); TRY_CmdCopyAccelerationStructureNV(FUNC(CmdCopyAccelerationStructureNV), NOOP); TRY_CmdCopyAccelerationStructureKHR(FUNC(CmdCopyAccelerationStructureKHR), NOOP); TRY_CopyAccelerationStructureKHR(FUNC(CopyAccelerationStructureKHR), NOOP); TRY_CmdCopyAccelerationStructureToMemoryKHR(FUNC(CmdCopyAccelerationStructureToMemoryKHR), NOOP); TRY_CopyAccelerationStructureToMemoryKHR(FUNC(CopyAccelerationStructureToMemoryKHR), NOOP); TRY_CmdCopyMemoryToAccelerationStructureKHR(FUNC(CmdCopyMemoryToAccelerationStructureKHR), NOOP); TRY_CopyMemoryToAccelerationStructureKHR(FUNC(CopyMemoryToAccelerationStructureKHR), NOOP); TRY_CmdWriteAccelerationStructuresPropertiesKHR(FUNC(CmdWriteAccelerationStructuresPropertiesKHR), NOOP); TRY_CmdWriteAccelerationStructuresPropertiesNV(FUNC(CmdWriteAccelerationStructuresPropertiesNV), NOOP); TRY_CmdBuildAccelerationStructureNV(FUNC(CmdBuildAccelerationStructureNV), NOOP); TRY_WriteAccelerationStructuresPropertiesKHR(FUNC(WriteAccelerationStructuresPropertiesKHR), NOOP); TRY_CmdTraceRaysKHR(FUNC(CmdTraceRaysKHR), NOOP); TRY_CmdTraceRaysNV(FUNC(CmdTraceRaysNV), NOOP); TRY_GetRayTracingShaderGroupHandlesKHR(FUNC(GetRayTracingShaderGroupHandlesKHR), NOOP); TRY_GetRayTracingCaptureReplayShaderGroupHandlesKHR(FUNC(GetRayTracingCaptureReplayShaderGroupHandlesKHR), NOOP); TRY_GetAccelerationStructureHandleNV(FUNC(GetAccelerationStructureHandleNV), NOOP); TRY_CreateRayTracingPipelinesNV(FUNC(CreateRayTracingPipelinesNV), NOOP); TRY_CreateRayTracingPipelinesKHR(FUNC(CreateRayTracingPipelinesKHR), NOOP); TRY_GetPhysicalDeviceCooperativeMatrixPropertiesNV(FUNC(GetPhysicalDeviceCooperativeMatrixPropertiesNV), NOOP); TRY_CmdTraceRaysIndirectKHR(FUNC(CmdTraceRaysIndirectKHR), NOOP); TRY_CmdTraceRaysIndirect2KHR(FUNC(CmdTraceRaysIndirect2KHR), NOOP); TRY_GetDeviceAccelerationStructureCompatibilityKHR(FUNC(GetDeviceAccelerationStructureCompatibilityKHR), NOOP); TRY_GetRayTracingShaderGroupStackSizeKHR(FUNC(GetRayTracingShaderGroupStackSizeKHR), NOOP); TRY_CmdSetRayTracingPipelineStackSizeKHR(FUNC(CmdSetRayTracingPipelineStackSizeKHR), NOOP); TRY_GetImageViewHandleNVX(FUNC(GetImageViewHandleNVX), NOOP); TRY_GetImageViewAddressNVX(FUNC(GetImageViewAddressNVX), NOOP); TRY_GetPhysicalDeviceSurfacePresentModes2EXT(FUNC(GetPhysicalDeviceSurfacePresentModes2EXT), NOOP); TRY_GetDeviceGroupSurfacePresentModes2EXT(FUNC(GetDeviceGroupSurfacePresentModes2EXT), NOOP); TRY_AcquireFullScreenExclusiveModeEXT(FUNC(AcquireFullScreenExclusiveModeEXT), NOOP); TRY_ReleaseFullScreenExclusiveModeEXT(FUNC(ReleaseFullScreenExclusiveModeEXT), NOOP); TRY_EnumeratePhysicalDeviceQueueFamilyPerformanceQueryCountersKHR(FUNC(EnumeratePhysicalDeviceQueueFamilyPerformanceQueryCountersKHR), NOOP); TRY_GetPhysicalDeviceQueueFamilyPerformanceQueryPassesKHR(FUNC(GetPhysicalDeviceQueueFamilyPerformanceQueryPassesKHR), NOOP); TRY_AcquireProfilingLockKHR(FUNC(AcquireProfilingLockKHR), NOOP); TRY_ReleaseProfilingLockKHR(FUNC(ReleaseProfilingLockKHR), NOOP); TRY_GetImageDrmFormatModifierPropertiesEXT(FUNC(GetImageDrmFormatModifierPropertiesEXT), NOOP); TRY_GetBufferOpaqueCaptureAddress(FUNC(GetBufferOpaqueCaptureAddress), NOOP); TRY_GetBufferDeviceAddress(FUNC(GetBufferDeviceAddress), NOOP); TRY_CreateHeadlessSurfaceEXT(FUNC(CreateHeadlessSurfaceEXT), NOOP); TRY_GetPhysicalDeviceSupportedFramebufferMixedSamplesCombinationsNV(FUNC(GetPhysicalDeviceSupportedFramebufferMixedSamplesCombinationsNV), NOOP); TRY_InitializePerformanceApiINTEL(FUNC(InitializePerformanceApiINTEL), NOOP); TRY_UninitializePerformanceApiINTEL(FUNC(UninitializePerformanceApiINTEL), NOOP); TRY_CmdSetPerformanceMarkerINTEL(FUNC(CmdSetPerformanceMarkerINTEL), NOOP); TRY_CmdSetPerformanceStreamMarkerINTEL(FUNC(CmdSetPerformanceStreamMarkerINTEL), NOOP); TRY_CmdSetPerformanceOverrideINTEL(FUNC(CmdSetPerformanceOverrideINTEL), NOOP); TRY_AcquirePerformanceConfigurationINTEL(FUNC(AcquirePerformanceConfigurationINTEL), NOOP); TRY_ReleasePerformanceConfigurationINTEL(FUNC(ReleasePerformanceConfigurationINTEL), NOOP); TRY_QueueSetPerformanceConfigurationINTEL(FUNC(QueueSetPerformanceConfigurationINTEL), NOOP); TRY_GetPerformanceParameterINTEL(FUNC(GetPerformanceParameterINTEL), NOOP); TRY_GetDeviceMemoryOpaqueCaptureAddress(FUNC(GetDeviceMemoryOpaqueCaptureAddress), NOOP); TRY_GetPipelineExecutablePropertiesKHR(FUNC(GetPipelineExecutablePropertiesKHR), NOOP); TRY_GetPipelineExecutableStatisticsKHR(FUNC(GetPipelineExecutableStatisticsKHR), NOOP); TRY_GetPipelineExecutableInternalRepresentationsKHR(FUNC(GetPipelineExecutableInternalRepresentationsKHR), NOOP); TRY_CmdSetLineStippleKHR(FUNC(CmdSetLineStippleKHR), NOOP); TRY_GetPhysicalDeviceToolProperties(FUNC(GetPhysicalDeviceToolProperties), NOOP); TRY_CreateAccelerationStructureKHR(FUNC(CreateAccelerationStructureKHR), NOOP); TRY_CmdBuildAccelerationStructuresKHR(FUNC(CmdBuildAccelerationStructuresKHR), NOOP); TRY_CmdBuildAccelerationStructuresIndirectKHR(FUNC(CmdBuildAccelerationStructuresIndirectKHR), NOOP); TRY_BuildAccelerationStructuresKHR(FUNC(BuildAccelerationStructuresKHR), NOOP); TRY_GetAccelerationStructureDeviceAddressKHR(FUNC(GetAccelerationStructureDeviceAddressKHR), NOOP); TRY_CreateDeferredOperationKHR(FUNC(CreateDeferredOperationKHR), NOOP); TRY_DestroyDeferredOperationKHR(FUNC(DestroyDeferredOperationKHR), NOOP); TRY_GetDeferredOperationMaxConcurrencyKHR(FUNC(GetDeferredOperationMaxConcurrencyKHR), NOOP); TRY_GetDeferredOperationResultKHR(FUNC(GetDeferredOperationResultKHR), NOOP); TRY_DeferredOperationJoinKHR(FUNC(DeferredOperationJoinKHR), NOOP); TRY_GetPipelineIndirectMemoryRequirementsNV(FUNC(GetPipelineIndirectMemoryRequirementsNV), NOOP); TRY_GetPipelineIndirectDeviceAddressNV(FUNC(GetPipelineIndirectDeviceAddressNV), NOOP); TRY_CmdSetCullMode(FUNC(CmdSetCullMode), NOOP); TRY_CmdSetFrontFace(FUNC(CmdSetFrontFace), NOOP); TRY_CmdSetPrimitiveTopology(FUNC(CmdSetPrimitiveTopology), NOOP); TRY_CmdSetViewportWithCount(FUNC(CmdSetViewportWithCount), NOOP); TRY_CmdSetScissorWithCount(FUNC(CmdSetScissorWithCount), NOOP); TRY_CmdBindIndexBuffer2KHR(FUNC(CmdBindIndexBuffer2KHR), NOOP); TRY_CmdBindVertexBuffers2(FUNC(CmdBindVertexBuffers2), NOOP); TRY_CmdSetDepthTestEnable(FUNC(CmdSetDepthTestEnable), NOOP); TRY_CmdSetDepthWriteEnable(FUNC(CmdSetDepthWriteEnable), NOOP); TRY_CmdSetDepthCompareOp(FUNC(CmdSetDepthCompareOp), NOOP); TRY_CmdSetDepthBoundsTestEnable(FUNC(CmdSetDepthBoundsTestEnable), NOOP); TRY_CmdSetStencilTestEnable(FUNC(CmdSetStencilTestEnable), NOOP); TRY_CmdSetStencilOp(FUNC(CmdSetStencilOp), NOOP); TRY_CmdSetPatchControlPointsEXT(FUNC(CmdSetPatchControlPointsEXT), NOOP); TRY_CmdSetRasterizerDiscardEnable(FUNC(CmdSetRasterizerDiscardEnable), NOOP); TRY_CmdSetDepthBiasEnable(FUNC(CmdSetDepthBiasEnable), NOOP); TRY_CmdSetLogicOpEXT(FUNC(CmdSetLogicOpEXT), NOOP); TRY_CmdSetPrimitiveRestartEnable(FUNC(CmdSetPrimitiveRestartEnable), NOOP); TRY_CmdSetTessellationDomainOriginEXT(FUNC(CmdSetTessellationDomainOriginEXT), NOOP); TRY_CmdSetDepthClampEnableEXT(FUNC(CmdSetDepthClampEnableEXT), NOOP); TRY_CmdSetPolygonModeEXT(FUNC(CmdSetPolygonModeEXT), NOOP); TRY_CmdSetRasterizationSamplesEXT(FUNC(CmdSetRasterizationSamplesEXT), NOOP); TRY_CmdSetSampleMaskEXT(FUNC(CmdSetSampleMaskEXT), NOOP); TRY_CmdSetAlphaToCoverageEnableEXT(FUNC(CmdSetAlphaToCoverageEnableEXT), NOOP); TRY_CmdSetAlphaToOneEnableEXT(FUNC(CmdSetAlphaToOneEnableEXT), NOOP); TRY_CmdSetLogicOpEnableEXT(FUNC(CmdSetLogicOpEnableEXT), NOOP); TRY_CmdSetColorBlendEnableEXT(FUNC(CmdSetColorBlendEnableEXT), NOOP); TRY_CmdSetColorBlendEquationEXT(FUNC(CmdSetColorBlendEquationEXT), NOOP); TRY_CmdSetColorWriteMaskEXT(FUNC(CmdSetColorWriteMaskEXT), NOOP); TRY_CmdSetRasterizationStreamEXT(FUNC(CmdSetRasterizationStreamEXT), NOOP); TRY_CmdSetConservativeRasterizationModeEXT(FUNC(CmdSetConservativeRasterizationModeEXT), NOOP); TRY_CmdSetExtraPrimitiveOverestimationSizeEXT(FUNC(CmdSetExtraPrimitiveOverestimationSizeEXT), NOOP); TRY_CmdSetDepthClipEnableEXT(FUNC(CmdSetDepthClipEnableEXT), NOOP); TRY_CmdSetSampleLocationsEnableEXT(FUNC(CmdSetSampleLocationsEnableEXT), NOOP); TRY_CmdSetColorBlendAdvancedEXT(FUNC(CmdSetColorBlendAdvancedEXT), NOOP); TRY_CmdSetProvokingVertexModeEXT(FUNC(CmdSetProvokingVertexModeEXT), NOOP); TRY_CmdSetLineRasterizationModeEXT(FUNC(CmdSetLineRasterizationModeEXT), NOOP); TRY_CmdSetLineStippleEnableEXT(FUNC(CmdSetLineStippleEnableEXT), NOOP); TRY_CmdSetDepthClipNegativeOneToOneEXT(FUNC(CmdSetDepthClipNegativeOneToOneEXT), NOOP); TRY_CmdSetViewportWScalingEnableNV(FUNC(CmdSetViewportWScalingEnableNV), NOOP); TRY_CmdSetViewportSwizzleNV(FUNC(CmdSetViewportSwizzleNV), NOOP); TRY_CmdSetCoverageToColorEnableNV(FUNC(CmdSetCoverageToColorEnableNV), NOOP); TRY_CmdSetCoverageToColorLocationNV(FUNC(CmdSetCoverageToColorLocationNV), NOOP); TRY_CmdSetCoverageModulationModeNV(FUNC(CmdSetCoverageModulationModeNV), NOOP); TRY_CmdSetCoverageModulationTableEnableNV(FUNC(CmdSetCoverageModulationTableEnableNV), NOOP); TRY_CmdSetCoverageModulationTableNV(FUNC(CmdSetCoverageModulationTableNV), NOOP); TRY_CmdSetShadingRateImageEnableNV(FUNC(CmdSetShadingRateImageEnableNV), NOOP); TRY_CmdSetCoverageReductionModeNV(FUNC(CmdSetCoverageReductionModeNV), NOOP); TRY_CmdSetRepresentativeFragmentTestEnableNV(FUNC(CmdSetRepresentativeFragmentTestEnableNV), NOOP); TRY_CreatePrivateDataSlot(FUNC(CreatePrivateDataSlot), NOOP); TRY_DestroyPrivateDataSlot(FUNC(DestroyPrivateDataSlot), NOOP); TRY_SetPrivateData(FUNC(SetPrivateData), NOOP); TRY_GetPrivateData(FUNC(GetPrivateData), NOOP); TRY_CmdCopyBuffer2(FUNC(CmdCopyBuffer2), NOOP); TRY_CmdCopyImage2(FUNC(CmdCopyImage2), NOOP); TRY_CmdBlitImage2(FUNC(CmdBlitImage2), NOOP); TRY_CmdCopyBufferToImage2(FUNC(CmdCopyBufferToImage2), NOOP); TRY_CmdCopyImageToBuffer2(FUNC(CmdCopyImageToBuffer2), NOOP); TRY_CmdResolveImage2(FUNC(CmdResolveImage2), NOOP); TRY_CmdSetFragmentShadingRateKHR(FUNC(CmdSetFragmentShadingRateKHR), NOOP); TRY_GetPhysicalDeviceFragmentShadingRatesKHR(FUNC(GetPhysicalDeviceFragmentShadingRatesKHR), NOOP); TRY_CmdSetFragmentShadingRateEnumNV(FUNC(CmdSetFragmentShadingRateEnumNV), NOOP); TRY_GetAccelerationStructureBuildSizesKHR(FUNC(GetAccelerationStructureBuildSizesKHR), NOOP); TRY_CmdSetVertexInputEXT(FUNC(CmdSetVertexInputEXT), NOOP); TRY_CmdSetColorWriteEnableEXT(FUNC(CmdSetColorWriteEnableEXT), NOOP); TRY_CmdSetEvent2(FUNC(CmdSetEvent2), NOOP); TRY_CmdResetEvent2(FUNC(CmdResetEvent2), NOOP); TRY_CmdWaitEvents2(FUNC(CmdWaitEvents2), NOOP); TRY_CmdPipelineBarrier2(FUNC(CmdPipelineBarrier2), NOOP); TRY_QueueSubmit2(FUNC(QueueSubmit2), NOOP); TRY_CmdWriteTimestamp2(FUNC(CmdWriteTimestamp2), NOOP); TRY_CmdWriteBufferMarker2AMD(FUNC(CmdWriteBufferMarker2AMD), NOOP); TRY_GetQueueCheckpointData2NV(FUNC(GetQueueCheckpointData2NV), NOOP); TRY_CopyMemoryToImageEXT(FUNC(CopyMemoryToImageEXT), NOOP); TRY_CopyImageToMemoryEXT(FUNC(CopyImageToMemoryEXT), NOOP); TRY_CopyImageToImageEXT(FUNC(CopyImageToImageEXT), NOOP); TRY_TransitionImageLayoutEXT(FUNC(TransitionImageLayoutEXT), NOOP); TRY_GetPhysicalDeviceVideoCapabilitiesKHR(FUNC(GetPhysicalDeviceVideoCapabilitiesKHR), NOOP); TRY_GetPhysicalDeviceVideoFormatPropertiesKHR(FUNC(GetPhysicalDeviceVideoFormatPropertiesKHR), NOOP); TRY_GetPhysicalDeviceVideoEncodeQualityLevelPropertiesKHR(FUNC(GetPhysicalDeviceVideoEncodeQualityLevelPropertiesKHR), NOOP); TRY_CreateVideoSessionKHR(FUNC(CreateVideoSessionKHR), NOOP); TRY_DestroyVideoSessionKHR(FUNC(DestroyVideoSessionKHR), NOOP); TRY_CreateVideoSessionParametersKHR(FUNC(CreateVideoSessionParametersKHR), NOOP); TRY_UpdateVideoSessionParametersKHR(FUNC(UpdateVideoSessionParametersKHR), NOOP); TRY_GetEncodedVideoSessionParametersKHR(FUNC(GetEncodedVideoSessionParametersKHR), NOOP); TRY_DestroyVideoSessionParametersKHR(FUNC(DestroyVideoSessionParametersKHR), NOOP); TRY_GetVideoSessionMemoryRequirementsKHR(FUNC(GetVideoSessionMemoryRequirementsKHR), NOOP); TRY_BindVideoSessionMemoryKHR(FUNC(BindVideoSessionMemoryKHR), NOOP); TRY_CmdDecodeVideoKHR(FUNC(CmdDecodeVideoKHR), NOOP); TRY_CmdBeginVideoCodingKHR(FUNC(CmdBeginVideoCodingKHR), NOOP); TRY_CmdControlVideoCodingKHR(FUNC(CmdControlVideoCodingKHR), NOOP); TRY_CmdEndVideoCodingKHR(FUNC(CmdEndVideoCodingKHR), NOOP); TRY_CmdEncodeVideoKHR(FUNC(CmdEncodeVideoKHR), NOOP); TRY_CmdDecompressMemoryNV(FUNC(CmdDecompressMemoryNV), NOOP); TRY_CmdDecompressMemoryIndirectCountNV(FUNC(CmdDecompressMemoryIndirectCountNV), NOOP); TRY_CreateCuModuleNVX(FUNC(CreateCuModuleNVX), NOOP); TRY_CreateCuFunctionNVX(FUNC(CreateCuFunctionNVX), NOOP); TRY_DestroyCuModuleNVX(FUNC(DestroyCuModuleNVX), NOOP); TRY_DestroyCuFunctionNVX(FUNC(DestroyCuFunctionNVX), NOOP); TRY_CmdCuLaunchKernelNVX(FUNC(CmdCuLaunchKernelNVX), NOOP); TRY_GetDescriptorSetLayoutSizeEXT(FUNC(GetDescriptorSetLayoutSizeEXT), NOOP); TRY_GetDescriptorSetLayoutBindingOffsetEXT(FUNC(GetDescriptorSetLayoutBindingOffsetEXT), NOOP); TRY_GetDescriptorEXT(FUNC(GetDescriptorEXT), NOOP); TRY_CmdBindDescriptorBuffersEXT(FUNC(CmdBindDescriptorBuffersEXT), NOOP); TRY_CmdSetDescriptorBufferOffsetsEXT(FUNC(CmdSetDescriptorBufferOffsetsEXT), NOOP); TRY_CmdBindDescriptorBufferEmbeddedSamplersEXT(FUNC(CmdBindDescriptorBufferEmbeddedSamplersEXT), NOOP); TRY_GetBufferOpaqueCaptureDescriptorDataEXT(FUNC(GetBufferOpaqueCaptureDescriptorDataEXT), NOOP); TRY_GetImageOpaqueCaptureDescriptorDataEXT(FUNC(GetImageOpaqueCaptureDescriptorDataEXT), NOOP); TRY_GetImageViewOpaqueCaptureDescriptorDataEXT(FUNC(GetImageViewOpaqueCaptureDescriptorDataEXT), NOOP); TRY_GetSamplerOpaqueCaptureDescriptorDataEXT(FUNC(GetSamplerOpaqueCaptureDescriptorDataEXT), NOOP); TRY_GetAccelerationStructureOpaqueCaptureDescriptorDataEXT(FUNC(GetAccelerationStructureOpaqueCaptureDescriptorDataEXT), NOOP); TRY_SetDeviceMemoryPriorityEXT(FUNC(SetDeviceMemoryPriorityEXT), NOOP); TRY_AcquireDrmDisplayEXT(FUNC(AcquireDrmDisplayEXT), NOOP); TRY_GetDrmDisplayEXT(FUNC(GetDrmDisplayEXT), NOOP); TRY_WaitForPresentKHR(FUNC(WaitForPresentKHR), NOOP); TRY_CreateBufferCollectionFUCHSIA(FUNC(CreateBufferCollectionFUCHSIA), NOOP); TRY_SetBufferCollectionBufferConstraintsFUCHSIA(FUNC(SetBufferCollectionBufferConstraintsFUCHSIA), NOOP); TRY_SetBufferCollectionImageConstraintsFUCHSIA(FUNC(SetBufferCollectionImageConstraintsFUCHSIA), NOOP); TRY_DestroyBufferCollectionFUCHSIA(FUNC(DestroyBufferCollectionFUCHSIA), NOOP); TRY_GetBufferCollectionPropertiesFUCHSIA(FUNC(GetBufferCollectionPropertiesFUCHSIA), NOOP); TRY_CmdBeginRendering(FUNC(CmdBeginRendering), NOOP); TRY_CmdEndRendering(FUNC(CmdEndRendering), NOOP); TRY_GetDescriptorSetLayoutHostMappingInfoVALVE(FUNC(GetDescriptorSetLayoutHostMappingInfoVALVE), NOOP); TRY_GetDescriptorSetHostMappingVALVE(FUNC(GetDescriptorSetHostMappingVALVE), NOOP); TRY_CreateMicromapEXT(FUNC(CreateMicromapEXT), NOOP); TRY_CmdBuildMicromapsEXT(FUNC(CmdBuildMicromapsEXT), NOOP); TRY_BuildMicromapsEXT(FUNC(BuildMicromapsEXT), NOOP); TRY_DestroyMicromapEXT(FUNC(DestroyMicromapEXT), NOOP); TRY_CmdCopyMicromapEXT(FUNC(CmdCopyMicromapEXT), NOOP); TRY_CopyMicromapEXT(FUNC(CopyMicromapEXT), NOOP); TRY_CmdCopyMicromapToMemoryEXT(FUNC(CmdCopyMicromapToMemoryEXT), NOOP); TRY_CopyMicromapToMemoryEXT(FUNC(CopyMicromapToMemoryEXT), NOOP); TRY_CmdCopyMemoryToMicromapEXT(FUNC(CmdCopyMemoryToMicromapEXT), NOOP); TRY_CopyMemoryToMicromapEXT(FUNC(CopyMemoryToMicromapEXT), NOOP); TRY_CmdWriteMicromapsPropertiesEXT(FUNC(CmdWriteMicromapsPropertiesEXT), NOOP); TRY_WriteMicromapsPropertiesEXT(FUNC(WriteMicromapsPropertiesEXT), NOOP); TRY_GetDeviceMicromapCompatibilityEXT(FUNC(GetDeviceMicromapCompatibilityEXT), NOOP); TRY_GetMicromapBuildSizesEXT(FUNC(GetMicromapBuildSizesEXT), NOOP); TRY_GetShaderModuleIdentifierEXT(FUNC(GetShaderModuleIdentifierEXT), NOOP); TRY_GetShaderModuleCreateInfoIdentifierEXT(FUNC(GetShaderModuleCreateInfoIdentifierEXT), NOOP); TRY_GetImageSubresourceLayout2KHR(FUNC(GetImageSubresourceLayout2KHR), NOOP); TRY_GetPipelinePropertiesEXT(FUNC(GetPipelinePropertiesEXT), NOOP); TRY_ExportMetalObjectsEXT(FUNC(ExportMetalObjectsEXT), NOOP); TRY_GetFramebufferTilePropertiesQCOM(FUNC(GetFramebufferTilePropertiesQCOM), NOOP); TRY_GetDynamicRenderingTilePropertiesQCOM(FUNC(GetDynamicRenderingTilePropertiesQCOM), NOOP); TRY_GetPhysicalDeviceOpticalFlowImageFormatsNV(FUNC(GetPhysicalDeviceOpticalFlowImageFormatsNV), NOOP); TRY_CreateOpticalFlowSessionNV(FUNC(CreateOpticalFlowSessionNV), NOOP); TRY_DestroyOpticalFlowSessionNV(FUNC(DestroyOpticalFlowSessionNV), NOOP); TRY_BindOpticalFlowSessionImageNV(FUNC(BindOpticalFlowSessionImageNV), NOOP); TRY_CmdOpticalFlowExecuteNV(FUNC(CmdOpticalFlowExecuteNV), NOOP); TRY_GetDeviceFaultInfoEXT(FUNC(GetDeviceFaultInfoEXT), NOOP); TRY_CmdSetDepthBias2EXT(FUNC(CmdSetDepthBias2EXT), NOOP); TRY_ReleaseSwapchainImagesEXT(FUNC(ReleaseSwapchainImagesEXT), NOOP); TRY_GetDeviceImageSubresourceLayoutKHR(FUNC(GetDeviceImageSubresourceLayoutKHR), NOOP); TRY_MapMemory2KHR(FUNC(MapMemory2KHR), NOOP); TRY_UnmapMemory2KHR(FUNC(UnmapMemory2KHR), NOOP); TRY_CreateShadersEXT(FUNC(CreateShadersEXT), NOOP); TRY_DestroyShaderEXT(FUNC(DestroyShaderEXT), NOOP); TRY_GetShaderBinaryDataEXT(FUNC(GetShaderBinaryDataEXT), NOOP); TRY_CmdBindShadersEXT(FUNC(CmdBindShadersEXT), NOOP); TRY_GetScreenBufferPropertiesQNX(FUNC(GetScreenBufferPropertiesQNX), NOOP); TRY_GetPhysicalDeviceCooperativeMatrixPropertiesKHR(FUNC(GetPhysicalDeviceCooperativeMatrixPropertiesKHR), NOOP); TRY_CmdBindDescriptorSets2KHR(FUNC(CmdBindDescriptorSets2KHR), NOOP); TRY_CmdPushConstants2KHR(FUNC(CmdPushConstants2KHR), NOOP); TRY_CmdPushDescriptorSet2KHR(FUNC(CmdPushDescriptorSet2KHR), NOOP); TRY_CmdPushDescriptorSetWithTemplate2KHR(FUNC(CmdPushDescriptorSetWithTemplate2KHR), NOOP); TRY_CmdSetDescriptorBufferOffsets2EXT(FUNC(CmdSetDescriptorBufferOffsets2EXT), NOOP); TRY_CmdBindDescriptorBufferEmbeddedSamplers2EXT(FUNC(CmdBindDescriptorBufferEmbeddedSamplers2EXT), NOOP); TRY_SetLatencySleepModeNV(FUNC(SetLatencySleepModeNV), NOOP); TRY_LatencySleepNV(FUNC(LatencySleepNV), NOOP); TRY_SetLatencyMarkerNV(FUNC(SetLatencyMarkerNV), NOOP); TRY_GetLatencyTimingsNV(FUNC(GetLatencyTimingsNV), NOOP); TRY_QueueNotifyOutOfBandNV(FUNC(QueueNotifyOutOfBandNV), NOOP); TRY_CmdSetRenderingAttachmentLocationsKHR(FUNC(CmdSetRenderingAttachmentLocationsKHR), NOOP); TRY_CmdSetRenderingInputAttachmentIndicesKHR(FUNC(CmdSetRenderingInputAttachmentIndicesKHR), NOOP); 
#define VK_ALLOC2(device, type, size) (device ?     ((type *) vk_zalloc(&((struct wrapper_device*) device)->vk.alloc, size, alignof(type), VK_SYSTEM_ALLOCATION_SCOPE_COMMAND)) :     ((type *) malloc(size)) )

#define VK_ALLOC(device, type) VK_ALLOC2(device, type, sizeof(type))

#ifdef __cplusplus
}
#endif

#endif /* WRAPPER_TRAMPOLINES_H */
