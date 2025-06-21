
/* Copyright © 2021 Intel Corporation
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice (including the next
 * paragraph) shall be included in all copies or substantial portions of the
 * Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL
 * THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS
 * IN THE SOFTWARE.
 */

/* This file generated from vk_wrapper_features_gen.py, don't edit directly. */

#include "wrapper_private.h"
#include "vk_physical_device_features.h"
#include "vk_util.h"

void
wrapper_setup_device_features(struct wrapper_physical_device *physical_device)
{
   VkPhysicalDevice vk_physical_device = physical_device->dispatch_handle;

   /* Query the device what kind of features are supported. */
   VkPhysicalDeviceFeatures2 supported_features2 = {
      .sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FEATURES_2,
   };

   VkPhysicalDeviceDeviceGeneratedCommandsFeaturesNV supported_VkPhysicalDeviceDeviceGeneratedCommandsFeaturesNV = {
      .sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEVICE_GENERATED_COMMANDS_FEATURES_NV,
      .pNext = NULL,
   };
   __vk_append_struct(&supported_features2, &supported_VkPhysicalDeviceDeviceGeneratedCommandsFeaturesNV);
   VkPhysicalDeviceDeviceGeneratedCommandsComputeFeaturesNV supported_VkPhysicalDeviceDeviceGeneratedCommandsComputeFeaturesNV = {
      .sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEVICE_GENERATED_COMMANDS_COMPUTE_FEATURES_NV,
      .pNext = NULL,
   };
   __vk_append_struct(&supported_features2, &supported_VkPhysicalDeviceDeviceGeneratedCommandsComputeFeaturesNV);
   VkPhysicalDevicePrivateDataFeatures supported_VkPhysicalDevicePrivateDataFeatures = {
      .sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PRIVATE_DATA_FEATURES,
      .pNext = NULL,
   };
   __vk_append_struct(&supported_features2, &supported_VkPhysicalDevicePrivateDataFeatures);
   VkPhysicalDeviceVariablePointersFeatures supported_VkPhysicalDeviceVariablePointersFeatures = {
      .sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VARIABLE_POINTERS_FEATURES,
      .pNext = NULL,
   };
   __vk_append_struct(&supported_features2, &supported_VkPhysicalDeviceVariablePointersFeatures);
   VkPhysicalDeviceMultiviewFeatures supported_VkPhysicalDeviceMultiviewFeatures = {
      .sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTIVIEW_FEATURES,
      .pNext = NULL,
   };
   __vk_append_struct(&supported_features2, &supported_VkPhysicalDeviceMultiviewFeatures);
   VkPhysicalDevicePresentIdFeaturesKHR supported_VkPhysicalDevicePresentIdFeaturesKHR = {
      .sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PRESENT_ID_FEATURES_KHR,
      .pNext = NULL,
   };
   __vk_append_struct(&supported_features2, &supported_VkPhysicalDevicePresentIdFeaturesKHR);
   VkPhysicalDevicePresentWaitFeaturesKHR supported_VkPhysicalDevicePresentWaitFeaturesKHR = {
      .sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PRESENT_WAIT_FEATURES_KHR,
      .pNext = NULL,
   };
   __vk_append_struct(&supported_features2, &supported_VkPhysicalDevicePresentWaitFeaturesKHR);
   VkPhysicalDevice16BitStorageFeatures supported_VkPhysicalDevice16BitStorageFeatures = {
      .sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_16BIT_STORAGE_FEATURES,
      .pNext = NULL,
   };
   __vk_append_struct(&supported_features2, &supported_VkPhysicalDevice16BitStorageFeatures);
   VkPhysicalDeviceShaderSubgroupExtendedTypesFeatures supported_VkPhysicalDeviceShaderSubgroupExtendedTypesFeatures = {
      .sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_SUBGROUP_EXTENDED_TYPES_FEATURES,
      .pNext = NULL,
   };
   __vk_append_struct(&supported_features2, &supported_VkPhysicalDeviceShaderSubgroupExtendedTypesFeatures);
   VkPhysicalDeviceSamplerYcbcrConversionFeatures supported_VkPhysicalDeviceSamplerYcbcrConversionFeatures = {
      .sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SAMPLER_YCBCR_CONVERSION_FEATURES,
      .pNext = NULL,
   };
   __vk_append_struct(&supported_features2, &supported_VkPhysicalDeviceSamplerYcbcrConversionFeatures);
   VkPhysicalDeviceProtectedMemoryFeatures supported_VkPhysicalDeviceProtectedMemoryFeatures = {
      .sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROTECTED_MEMORY_FEATURES,
      .pNext = NULL,
   };
   __vk_append_struct(&supported_features2, &supported_VkPhysicalDeviceProtectedMemoryFeatures);
   VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT supported_VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT = {
      .sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_BLEND_OPERATION_ADVANCED_FEATURES_EXT,
      .pNext = NULL,
   };
   __vk_append_struct(&supported_features2, &supported_VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT);
   VkPhysicalDeviceMultiDrawFeaturesEXT supported_VkPhysicalDeviceMultiDrawFeaturesEXT = {
      .sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTI_DRAW_FEATURES_EXT,
      .pNext = NULL,
   };
   __vk_append_struct(&supported_features2, &supported_VkPhysicalDeviceMultiDrawFeaturesEXT);
   VkPhysicalDeviceInlineUniformBlockFeatures supported_VkPhysicalDeviceInlineUniformBlockFeatures = {
      .sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_INLINE_UNIFORM_BLOCK_FEATURES,
      .pNext = NULL,
   };
   __vk_append_struct(&supported_features2, &supported_VkPhysicalDeviceInlineUniformBlockFeatures);
   VkPhysicalDeviceMaintenance4Features supported_VkPhysicalDeviceMaintenance4Features = {
      .sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAINTENANCE_4_FEATURES,
      .pNext = NULL,
   };
   __vk_append_struct(&supported_features2, &supported_VkPhysicalDeviceMaintenance4Features);
   VkPhysicalDeviceMaintenance5FeaturesKHR supported_VkPhysicalDeviceMaintenance5FeaturesKHR = {
      .sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAINTENANCE_5_FEATURES_KHR,
      .pNext = NULL,
   };
   __vk_append_struct(&supported_features2, &supported_VkPhysicalDeviceMaintenance5FeaturesKHR);
   VkPhysicalDeviceMaintenance6FeaturesKHR supported_VkPhysicalDeviceMaintenance6FeaturesKHR = {
      .sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAINTENANCE_6_FEATURES_KHR,
      .pNext = NULL,
   };
   __vk_append_struct(&supported_features2, &supported_VkPhysicalDeviceMaintenance6FeaturesKHR);
   VkPhysicalDeviceMaintenance7FeaturesKHR supported_VkPhysicalDeviceMaintenance7FeaturesKHR = {
      .sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAINTENANCE_7_FEATURES_KHR,
      .pNext = NULL,
   };
   __vk_append_struct(&supported_features2, &supported_VkPhysicalDeviceMaintenance7FeaturesKHR);
   VkPhysicalDeviceShaderDrawParametersFeatures supported_VkPhysicalDeviceShaderDrawParametersFeatures = {
      .sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_DRAW_PARAMETERS_FEATURES,
      .pNext = NULL,
   };
   __vk_append_struct(&supported_features2, &supported_VkPhysicalDeviceShaderDrawParametersFeatures);
   VkPhysicalDeviceShaderFloat16Int8Features supported_VkPhysicalDeviceShaderFloat16Int8Features = {
      .sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_FLOAT16_INT8_FEATURES,
      .pNext = NULL,
   };
   __vk_append_struct(&supported_features2, &supported_VkPhysicalDeviceShaderFloat16Int8Features);
   VkPhysicalDeviceHostQueryResetFeatures supported_VkPhysicalDeviceHostQueryResetFeatures = {
      .sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_HOST_QUERY_RESET_FEATURES,
      .pNext = NULL,
   };
   __vk_append_struct(&supported_features2, &supported_VkPhysicalDeviceHostQueryResetFeatures);
   VkPhysicalDeviceGlobalPriorityQueryFeaturesKHR supported_VkPhysicalDeviceGlobalPriorityQueryFeaturesKHR = {
      .sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_GLOBAL_PRIORITY_QUERY_FEATURES_KHR,
      .pNext = NULL,
   };
   __vk_append_struct(&supported_features2, &supported_VkPhysicalDeviceGlobalPriorityQueryFeaturesKHR);
   VkPhysicalDeviceDeviceMemoryReportFeaturesEXT supported_VkPhysicalDeviceDeviceMemoryReportFeaturesEXT = {
      .sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEVICE_MEMORY_REPORT_FEATURES_EXT,
      .pNext = NULL,
   };
   __vk_append_struct(&supported_features2, &supported_VkPhysicalDeviceDeviceMemoryReportFeaturesEXT);
   VkPhysicalDeviceDescriptorIndexingFeatures supported_VkPhysicalDeviceDescriptorIndexingFeatures = {
      .sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DESCRIPTOR_INDEXING_FEATURES,
      .pNext = NULL,
   };
   __vk_append_struct(&supported_features2, &supported_VkPhysicalDeviceDescriptorIndexingFeatures);
   VkPhysicalDeviceTimelineSemaphoreFeatures supported_VkPhysicalDeviceTimelineSemaphoreFeatures = {
      .sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TIMELINE_SEMAPHORE_FEATURES,
      .pNext = NULL,
   };
   __vk_append_struct(&supported_features2, &supported_VkPhysicalDeviceTimelineSemaphoreFeatures);
   VkPhysicalDevice8BitStorageFeatures supported_VkPhysicalDevice8BitStorageFeatures = {
      .sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_8BIT_STORAGE_FEATURES,
      .pNext = NULL,
   };
   __vk_append_struct(&supported_features2, &supported_VkPhysicalDevice8BitStorageFeatures);
   VkPhysicalDeviceConditionalRenderingFeaturesEXT supported_VkPhysicalDeviceConditionalRenderingFeaturesEXT = {
      .sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CONDITIONAL_RENDERING_FEATURES_EXT,
      .pNext = NULL,
   };
   __vk_append_struct(&supported_features2, &supported_VkPhysicalDeviceConditionalRenderingFeaturesEXT);
   VkPhysicalDeviceVulkanMemoryModelFeatures supported_VkPhysicalDeviceVulkanMemoryModelFeatures = {
      .sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_MEMORY_MODEL_FEATURES,
      .pNext = NULL,
   };
   __vk_append_struct(&supported_features2, &supported_VkPhysicalDeviceVulkanMemoryModelFeatures);
   VkPhysicalDeviceShaderAtomicInt64Features supported_VkPhysicalDeviceShaderAtomicInt64Features = {
      .sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_ATOMIC_INT64_FEATURES,
      .pNext = NULL,
   };
   __vk_append_struct(&supported_features2, &supported_VkPhysicalDeviceShaderAtomicInt64Features);
   VkPhysicalDeviceShaderAtomicFloatFeaturesEXT supported_VkPhysicalDeviceShaderAtomicFloatFeaturesEXT = {
      .sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_ATOMIC_FLOAT_FEATURES_EXT,
      .pNext = NULL,
   };
   __vk_append_struct(&supported_features2, &supported_VkPhysicalDeviceShaderAtomicFloatFeaturesEXT);
   VkPhysicalDeviceShaderAtomicFloat2FeaturesEXT supported_VkPhysicalDeviceShaderAtomicFloat2FeaturesEXT = {
      .sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_ATOMIC_FLOAT_2_FEATURES_EXT,
      .pNext = NULL,
   };
   __vk_append_struct(&supported_features2, &supported_VkPhysicalDeviceShaderAtomicFloat2FeaturesEXT);
   VkPhysicalDeviceVertexAttributeDivisorFeaturesKHR supported_VkPhysicalDeviceVertexAttributeDivisorFeaturesKHR = {
      .sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VERTEX_ATTRIBUTE_DIVISOR_FEATURES_KHR,
      .pNext = NULL,
   };
   __vk_append_struct(&supported_features2, &supported_VkPhysicalDeviceVertexAttributeDivisorFeaturesKHR);
   VkPhysicalDeviceASTCDecodeFeaturesEXT supported_VkPhysicalDeviceASTCDecodeFeaturesEXT = {
      .sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ASTC_DECODE_FEATURES_EXT,
      .pNext = NULL,
   };
   __vk_append_struct(&supported_features2, &supported_VkPhysicalDeviceASTCDecodeFeaturesEXT);
   VkPhysicalDeviceTransformFeedbackFeaturesEXT supported_VkPhysicalDeviceTransformFeedbackFeaturesEXT = {
      .sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TRANSFORM_FEEDBACK_FEATURES_EXT,
      .pNext = NULL,
   };
   __vk_append_struct(&supported_features2, &supported_VkPhysicalDeviceTransformFeedbackFeaturesEXT);
   VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV supported_VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV = {
      .sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_REPRESENTATIVE_FRAGMENT_TEST_FEATURES_NV,
      .pNext = NULL,
   };
   __vk_append_struct(&supported_features2, &supported_VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV);
   VkPhysicalDeviceExclusiveScissorFeaturesNV supported_VkPhysicalDeviceExclusiveScissorFeaturesNV = {
      .sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXCLUSIVE_SCISSOR_FEATURES_NV,
      .pNext = NULL,
   };
   __vk_append_struct(&supported_features2, &supported_VkPhysicalDeviceExclusiveScissorFeaturesNV);
   VkPhysicalDeviceCornerSampledImageFeaturesNV supported_VkPhysicalDeviceCornerSampledImageFeaturesNV = {
      .sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CORNER_SAMPLED_IMAGE_FEATURES_NV,
      .pNext = NULL,
   };
   __vk_append_struct(&supported_features2, &supported_VkPhysicalDeviceCornerSampledImageFeaturesNV);
   VkPhysicalDeviceComputeShaderDerivativesFeaturesNV supported_VkPhysicalDeviceComputeShaderDerivativesFeaturesNV = {
      .sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COMPUTE_SHADER_DERIVATIVES_FEATURES_NV,
      .pNext = NULL,
   };
   __vk_append_struct(&supported_features2, &supported_VkPhysicalDeviceComputeShaderDerivativesFeaturesNV);
   VkPhysicalDeviceShaderImageFootprintFeaturesNV supported_VkPhysicalDeviceShaderImageFootprintFeaturesNV = {
      .sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_IMAGE_FOOTPRINT_FEATURES_NV,
      .pNext = NULL,
   };
   __vk_append_struct(&supported_features2, &supported_VkPhysicalDeviceShaderImageFootprintFeaturesNV);
   VkPhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV supported_VkPhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV = {
      .sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEDICATED_ALLOCATION_IMAGE_ALIASING_FEATURES_NV,
      .pNext = NULL,
   };
   __vk_append_struct(&supported_features2, &supported_VkPhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV);
   VkPhysicalDeviceCopyMemoryIndirectFeaturesNV supported_VkPhysicalDeviceCopyMemoryIndirectFeaturesNV = {
      .sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COPY_MEMORY_INDIRECT_FEATURES_NV,
      .pNext = NULL,
   };
   __vk_append_struct(&supported_features2, &supported_VkPhysicalDeviceCopyMemoryIndirectFeaturesNV);
   VkPhysicalDeviceMemoryDecompressionFeaturesNV supported_VkPhysicalDeviceMemoryDecompressionFeaturesNV = {
      .sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MEMORY_DECOMPRESSION_FEATURES_NV,
      .pNext = NULL,
   };
   __vk_append_struct(&supported_features2, &supported_VkPhysicalDeviceMemoryDecompressionFeaturesNV);
   VkPhysicalDeviceShadingRateImageFeaturesNV supported_VkPhysicalDeviceShadingRateImageFeaturesNV = {
      .sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADING_RATE_IMAGE_FEATURES_NV,
      .pNext = NULL,
   };
   __vk_append_struct(&supported_features2, &supported_VkPhysicalDeviceShadingRateImageFeaturesNV);
   VkPhysicalDeviceInvocationMaskFeaturesHUAWEI supported_VkPhysicalDeviceInvocationMaskFeaturesHUAWEI = {
      .sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_INVOCATION_MASK_FEATURES_HUAWEI,
      .pNext = NULL,
   };
   __vk_append_struct(&supported_features2, &supported_VkPhysicalDeviceInvocationMaskFeaturesHUAWEI);
   VkPhysicalDeviceMeshShaderFeaturesNV supported_VkPhysicalDeviceMeshShaderFeaturesNV = {
      .sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MESH_SHADER_FEATURES_NV,
      .pNext = NULL,
   };
   __vk_append_struct(&supported_features2, &supported_VkPhysicalDeviceMeshShaderFeaturesNV);
   VkPhysicalDeviceMeshShaderFeaturesEXT supported_VkPhysicalDeviceMeshShaderFeaturesEXT = {
      .sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MESH_SHADER_FEATURES_EXT,
      .pNext = NULL,
   };
   __vk_append_struct(&supported_features2, &supported_VkPhysicalDeviceMeshShaderFeaturesEXT);
   VkPhysicalDeviceAccelerationStructureFeaturesKHR supported_VkPhysicalDeviceAccelerationStructureFeaturesKHR = {
      .sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ACCELERATION_STRUCTURE_FEATURES_KHR,
      .pNext = NULL,
   };
   __vk_append_struct(&supported_features2, &supported_VkPhysicalDeviceAccelerationStructureFeaturesKHR);
   VkPhysicalDeviceRayTracingPipelineFeaturesKHR supported_VkPhysicalDeviceRayTracingPipelineFeaturesKHR = {
      .sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_PIPELINE_FEATURES_KHR,
      .pNext = NULL,
   };
   __vk_append_struct(&supported_features2, &supported_VkPhysicalDeviceRayTracingPipelineFeaturesKHR);
   VkPhysicalDeviceRayQueryFeaturesKHR supported_VkPhysicalDeviceRayQueryFeaturesKHR = {
      .sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_QUERY_FEATURES_KHR,
      .pNext = NULL,
   };
   __vk_append_struct(&supported_features2, &supported_VkPhysicalDeviceRayQueryFeaturesKHR);
   VkPhysicalDeviceRayTracingMaintenance1FeaturesKHR supported_VkPhysicalDeviceRayTracingMaintenance1FeaturesKHR = {
      .sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_MAINTENANCE_1_FEATURES_KHR,
      .pNext = NULL,
   };
   __vk_append_struct(&supported_features2, &supported_VkPhysicalDeviceRayTracingMaintenance1FeaturesKHR);
   VkPhysicalDeviceFragmentDensityMapFeaturesEXT supported_VkPhysicalDeviceFragmentDensityMapFeaturesEXT = {
      .sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_FEATURES_EXT,
      .pNext = NULL,
   };
   __vk_append_struct(&supported_features2, &supported_VkPhysicalDeviceFragmentDensityMapFeaturesEXT);
   VkPhysicalDeviceFragmentDensityMap2FeaturesEXT supported_VkPhysicalDeviceFragmentDensityMap2FeaturesEXT = {
      .sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_2_FEATURES_EXT,
      .pNext = NULL,
   };
   __vk_append_struct(&supported_features2, &supported_VkPhysicalDeviceFragmentDensityMap2FeaturesEXT);
   VkPhysicalDeviceFragmentDensityMapOffsetFeaturesQCOM supported_VkPhysicalDeviceFragmentDensityMapOffsetFeaturesQCOM = {
      .sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_DENSITY_MAP_OFFSET_FEATURES_QCOM,
      .pNext = NULL,
   };
   __vk_append_struct(&supported_features2, &supported_VkPhysicalDeviceFragmentDensityMapOffsetFeaturesQCOM);
   VkPhysicalDeviceScalarBlockLayoutFeatures supported_VkPhysicalDeviceScalarBlockLayoutFeatures = {
      .sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SCALAR_BLOCK_LAYOUT_FEATURES,
      .pNext = NULL,
   };
   __vk_append_struct(&supported_features2, &supported_VkPhysicalDeviceScalarBlockLayoutFeatures);
   VkPhysicalDeviceUniformBufferStandardLayoutFeatures supported_VkPhysicalDeviceUniformBufferStandardLayoutFeatures = {
      .sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_UNIFORM_BUFFER_STANDARD_LAYOUT_FEATURES,
      .pNext = NULL,
   };
   __vk_append_struct(&supported_features2, &supported_VkPhysicalDeviceUniformBufferStandardLayoutFeatures);
   VkPhysicalDeviceDepthClipEnableFeaturesEXT supported_VkPhysicalDeviceDepthClipEnableFeaturesEXT = {
      .sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEPTH_CLIP_ENABLE_FEATURES_EXT,
      .pNext = NULL,
   };
   __vk_append_struct(&supported_features2, &supported_VkPhysicalDeviceDepthClipEnableFeaturesEXT);
   VkPhysicalDeviceMemoryPriorityFeaturesEXT supported_VkPhysicalDeviceMemoryPriorityFeaturesEXT = {
      .sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MEMORY_PRIORITY_FEATURES_EXT,
      .pNext = NULL,
   };
   __vk_append_struct(&supported_features2, &supported_VkPhysicalDeviceMemoryPriorityFeaturesEXT);
   VkPhysicalDevicePageableDeviceLocalMemoryFeaturesEXT supported_VkPhysicalDevicePageableDeviceLocalMemoryFeaturesEXT = {
      .sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PAGEABLE_DEVICE_LOCAL_MEMORY_FEATURES_EXT,
      .pNext = NULL,
   };
   __vk_append_struct(&supported_features2, &supported_VkPhysicalDevicePageableDeviceLocalMemoryFeaturesEXT);
   VkPhysicalDeviceBufferDeviceAddressFeatures supported_VkPhysicalDeviceBufferDeviceAddressFeatures = {
      .sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_BUFFER_DEVICE_ADDRESS_FEATURES,
      .pNext = NULL,
   };
   __vk_append_struct(&supported_features2, &supported_VkPhysicalDeviceBufferDeviceAddressFeatures);
   VkPhysicalDeviceBufferDeviceAddressFeaturesEXT supported_VkPhysicalDeviceBufferDeviceAddressFeaturesEXT = {
      .sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_BUFFER_DEVICE_ADDRESS_FEATURES_EXT,
      .pNext = NULL,
   };
   __vk_append_struct(&supported_features2, &supported_VkPhysicalDeviceBufferDeviceAddressFeaturesEXT);
   VkPhysicalDeviceImagelessFramebufferFeatures supported_VkPhysicalDeviceImagelessFramebufferFeatures = {
      .sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGELESS_FRAMEBUFFER_FEATURES,
      .pNext = NULL,
   };
   __vk_append_struct(&supported_features2, &supported_VkPhysicalDeviceImagelessFramebufferFeatures);
   VkPhysicalDeviceTextureCompressionASTCHDRFeatures supported_VkPhysicalDeviceTextureCompressionASTCHDRFeatures = {
      .sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TEXTURE_COMPRESSION_ASTC_HDR_FEATURES,
      .pNext = NULL,
   };
   __vk_append_struct(&supported_features2, &supported_VkPhysicalDeviceTextureCompressionASTCHDRFeatures);
   VkPhysicalDeviceCooperativeMatrixFeaturesNV supported_VkPhysicalDeviceCooperativeMatrixFeaturesNV = {
      .sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COOPERATIVE_MATRIX_FEATURES_NV,
      .pNext = NULL,
   };
   __vk_append_struct(&supported_features2, &supported_VkPhysicalDeviceCooperativeMatrixFeaturesNV);
   VkPhysicalDeviceYcbcrImageArraysFeaturesEXT supported_VkPhysicalDeviceYcbcrImageArraysFeaturesEXT = {
      .sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_YCBCR_IMAGE_ARRAYS_FEATURES_EXT,
      .pNext = NULL,
   };
   __vk_append_struct(&supported_features2, &supported_VkPhysicalDeviceYcbcrImageArraysFeaturesEXT);
   VkPhysicalDevicePresentBarrierFeaturesNV supported_VkPhysicalDevicePresentBarrierFeaturesNV = {
      .sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PRESENT_BARRIER_FEATURES_NV,
      .pNext = NULL,
   };
   __vk_append_struct(&supported_features2, &supported_VkPhysicalDevicePresentBarrierFeaturesNV);
   VkPhysicalDevicePerformanceQueryFeaturesKHR supported_VkPhysicalDevicePerformanceQueryFeaturesKHR = {
      .sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PERFORMANCE_QUERY_FEATURES_KHR,
      .pNext = NULL,
   };
   __vk_append_struct(&supported_features2, &supported_VkPhysicalDevicePerformanceQueryFeaturesKHR);
   VkPhysicalDeviceCoverageReductionModeFeaturesNV supported_VkPhysicalDeviceCoverageReductionModeFeaturesNV = {
      .sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COVERAGE_REDUCTION_MODE_FEATURES_NV,
      .pNext = NULL,
   };
   __vk_append_struct(&supported_features2, &supported_VkPhysicalDeviceCoverageReductionModeFeaturesNV);
   VkPhysicalDeviceShaderIntegerFunctions2FeaturesINTEL supported_VkPhysicalDeviceShaderIntegerFunctions2FeaturesINTEL = {
      .sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_INTEGER_FUNCTIONS_2_FEATURES_INTEL,
      .pNext = NULL,
   };
   __vk_append_struct(&supported_features2, &supported_VkPhysicalDeviceShaderIntegerFunctions2FeaturesINTEL);
   VkPhysicalDeviceShaderClockFeaturesKHR supported_VkPhysicalDeviceShaderClockFeaturesKHR = {
      .sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_CLOCK_FEATURES_KHR,
      .pNext = NULL,
   };
   __vk_append_struct(&supported_features2, &supported_VkPhysicalDeviceShaderClockFeaturesKHR);
   VkPhysicalDeviceIndexTypeUint8FeaturesKHR supported_VkPhysicalDeviceIndexTypeUint8FeaturesKHR = {
      .sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_INDEX_TYPE_UINT8_FEATURES_KHR,
      .pNext = NULL,
   };
   __vk_append_struct(&supported_features2, &supported_VkPhysicalDeviceIndexTypeUint8FeaturesKHR);
   VkPhysicalDeviceShaderSMBuiltinsFeaturesNV supported_VkPhysicalDeviceShaderSMBuiltinsFeaturesNV = {
      .sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_SM_BUILTINS_FEATURES_NV,
      .pNext = NULL,
   };
   __vk_append_struct(&supported_features2, &supported_VkPhysicalDeviceShaderSMBuiltinsFeaturesNV);
   VkPhysicalDeviceFragmentShaderInterlockFeaturesEXT supported_VkPhysicalDeviceFragmentShaderInterlockFeaturesEXT = {
      .sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_SHADER_INTERLOCK_FEATURES_EXT,
      .pNext = NULL,
   };
   __vk_append_struct(&supported_features2, &supported_VkPhysicalDeviceFragmentShaderInterlockFeaturesEXT);
   VkPhysicalDeviceSeparateDepthStencilLayoutsFeatures supported_VkPhysicalDeviceSeparateDepthStencilLayoutsFeatures = {
      .sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SEPARATE_DEPTH_STENCIL_LAYOUTS_FEATURES,
      .pNext = NULL,
   };
   __vk_append_struct(&supported_features2, &supported_VkPhysicalDeviceSeparateDepthStencilLayoutsFeatures);
   VkPhysicalDevicePrimitiveTopologyListRestartFeaturesEXT supported_VkPhysicalDevicePrimitiveTopologyListRestartFeaturesEXT = {
      .sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PRIMITIVE_TOPOLOGY_LIST_RESTART_FEATURES_EXT,
      .pNext = NULL,
   };
   __vk_append_struct(&supported_features2, &supported_VkPhysicalDevicePrimitiveTopologyListRestartFeaturesEXT);
   VkPhysicalDevicePipelineExecutablePropertiesFeaturesKHR supported_VkPhysicalDevicePipelineExecutablePropertiesFeaturesKHR = {
      .sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PIPELINE_EXECUTABLE_PROPERTIES_FEATURES_KHR,
      .pNext = NULL,
   };
   __vk_append_struct(&supported_features2, &supported_VkPhysicalDevicePipelineExecutablePropertiesFeaturesKHR);
   VkPhysicalDeviceShaderDemoteToHelperInvocationFeatures supported_VkPhysicalDeviceShaderDemoteToHelperInvocationFeatures = {
      .sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_DEMOTE_TO_HELPER_INVOCATION_FEATURES,
      .pNext = NULL,
   };
   __vk_append_struct(&supported_features2, &supported_VkPhysicalDeviceShaderDemoteToHelperInvocationFeatures);
   VkPhysicalDeviceTexelBufferAlignmentFeaturesEXT supported_VkPhysicalDeviceTexelBufferAlignmentFeaturesEXT = {
      .sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TEXEL_BUFFER_ALIGNMENT_FEATURES_EXT,
      .pNext = NULL,
   };
   __vk_append_struct(&supported_features2, &supported_VkPhysicalDeviceTexelBufferAlignmentFeaturesEXT);
   VkPhysicalDeviceSubgroupSizeControlFeatures supported_VkPhysicalDeviceSubgroupSizeControlFeatures = {
      .sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SUBGROUP_SIZE_CONTROL_FEATURES,
      .pNext = NULL,
   };
   __vk_append_struct(&supported_features2, &supported_VkPhysicalDeviceSubgroupSizeControlFeatures);
   VkPhysicalDeviceLineRasterizationFeaturesKHR supported_VkPhysicalDeviceLineRasterizationFeaturesKHR = {
      .sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_LINE_RASTERIZATION_FEATURES_KHR,
      .pNext = NULL,
   };
   __vk_append_struct(&supported_features2, &supported_VkPhysicalDeviceLineRasterizationFeaturesKHR);
   VkPhysicalDevicePipelineCreationCacheControlFeatures supported_VkPhysicalDevicePipelineCreationCacheControlFeatures = {
      .sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PIPELINE_CREATION_CACHE_CONTROL_FEATURES,
      .pNext = NULL,
   };
   __vk_append_struct(&supported_features2, &supported_VkPhysicalDevicePipelineCreationCacheControlFeatures);
   VkPhysicalDeviceVulkan11Features supported_VkPhysicalDeviceVulkan11Features = {
      .sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_1_1_FEATURES,
      .pNext = NULL,
   };
   __vk_append_struct(&supported_features2, &supported_VkPhysicalDeviceVulkan11Features);
   VkPhysicalDeviceVulkan12Features supported_VkPhysicalDeviceVulkan12Features = {
      .sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_1_2_FEATURES,
      .pNext = NULL,
   };
   __vk_append_struct(&supported_features2, &supported_VkPhysicalDeviceVulkan12Features);
   VkPhysicalDeviceVulkan13Features supported_VkPhysicalDeviceVulkan13Features = {
      .sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VULKAN_1_3_FEATURES,
      .pNext = NULL,
   };
   __vk_append_struct(&supported_features2, &supported_VkPhysicalDeviceVulkan13Features);
   VkPhysicalDeviceCoherentMemoryFeaturesAMD supported_VkPhysicalDeviceCoherentMemoryFeaturesAMD = {
      .sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COHERENT_MEMORY_FEATURES_AMD,
      .pNext = NULL,
   };
   __vk_append_struct(&supported_features2, &supported_VkPhysicalDeviceCoherentMemoryFeaturesAMD);
   VkPhysicalDeviceCustomBorderColorFeaturesEXT supported_VkPhysicalDeviceCustomBorderColorFeaturesEXT = {
      .sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CUSTOM_BORDER_COLOR_FEATURES_EXT,
      .pNext = NULL,
   };
   __vk_append_struct(&supported_features2, &supported_VkPhysicalDeviceCustomBorderColorFeaturesEXT);
   VkPhysicalDeviceBorderColorSwizzleFeaturesEXT supported_VkPhysicalDeviceBorderColorSwizzleFeaturesEXT = {
      .sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_BORDER_COLOR_SWIZZLE_FEATURES_EXT,
      .pNext = NULL,
   };
   __vk_append_struct(&supported_features2, &supported_VkPhysicalDeviceBorderColorSwizzleFeaturesEXT);
   VkPhysicalDeviceExtendedDynamicStateFeaturesEXT supported_VkPhysicalDeviceExtendedDynamicStateFeaturesEXT = {
      .sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTENDED_DYNAMIC_STATE_FEATURES_EXT,
      .pNext = NULL,
   };
   __vk_append_struct(&supported_features2, &supported_VkPhysicalDeviceExtendedDynamicStateFeaturesEXT);
   VkPhysicalDeviceExtendedDynamicState2FeaturesEXT supported_VkPhysicalDeviceExtendedDynamicState2FeaturesEXT = {
      .sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTENDED_DYNAMIC_STATE_2_FEATURES_EXT,
      .pNext = NULL,
   };
   __vk_append_struct(&supported_features2, &supported_VkPhysicalDeviceExtendedDynamicState2FeaturesEXT);
   VkPhysicalDeviceExtendedDynamicState3FeaturesEXT supported_VkPhysicalDeviceExtendedDynamicState3FeaturesEXT = {
      .sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTENDED_DYNAMIC_STATE_3_FEATURES_EXT,
      .pNext = NULL,
   };
   __vk_append_struct(&supported_features2, &supported_VkPhysicalDeviceExtendedDynamicState3FeaturesEXT);
   VkPhysicalDeviceDiagnosticsConfigFeaturesNV supported_VkPhysicalDeviceDiagnosticsConfigFeaturesNV = {
      .sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DIAGNOSTICS_CONFIG_FEATURES_NV,
      .pNext = NULL,
   };
   __vk_append_struct(&supported_features2, &supported_VkPhysicalDeviceDiagnosticsConfigFeaturesNV);
   VkPhysicalDeviceZeroInitializeWorkgroupMemoryFeatures supported_VkPhysicalDeviceZeroInitializeWorkgroupMemoryFeatures = {
      .sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ZERO_INITIALIZE_WORKGROUP_MEMORY_FEATURES,
      .pNext = NULL,
   };
   __vk_append_struct(&supported_features2, &supported_VkPhysicalDeviceZeroInitializeWorkgroupMemoryFeatures);
   VkPhysicalDeviceShaderSubgroupUniformControlFlowFeaturesKHR supported_VkPhysicalDeviceShaderSubgroupUniformControlFlowFeaturesKHR = {
      .sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_SUBGROUP_UNIFORM_CONTROL_FLOW_FEATURES_KHR,
      .pNext = NULL,
   };
   __vk_append_struct(&supported_features2, &supported_VkPhysicalDeviceShaderSubgroupUniformControlFlowFeaturesKHR);
   VkPhysicalDeviceRobustness2FeaturesEXT supported_VkPhysicalDeviceRobustness2FeaturesEXT = {
      .sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ROBUSTNESS_2_FEATURES_EXT,
      .pNext = NULL,
   };
   __vk_append_struct(&supported_features2, &supported_VkPhysicalDeviceRobustness2FeaturesEXT);
   VkPhysicalDeviceImageRobustnessFeatures supported_VkPhysicalDeviceImageRobustnessFeatures = {
      .sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_ROBUSTNESS_FEATURES,
      .pNext = NULL,
   };
   __vk_append_struct(&supported_features2, &supported_VkPhysicalDeviceImageRobustnessFeatures);
   VkPhysicalDeviceWorkgroupMemoryExplicitLayoutFeaturesKHR supported_VkPhysicalDeviceWorkgroupMemoryExplicitLayoutFeaturesKHR = {
      .sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_WORKGROUP_MEMORY_EXPLICIT_LAYOUT_FEATURES_KHR,
      .pNext = NULL,
   };
   __vk_append_struct(&supported_features2, &supported_VkPhysicalDeviceWorkgroupMemoryExplicitLayoutFeaturesKHR);
   VkPhysicalDevice4444FormatsFeaturesEXT supported_VkPhysicalDevice4444FormatsFeaturesEXT = {
      .sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_4444_FORMATS_FEATURES_EXT,
      .pNext = NULL,
   };
   __vk_append_struct(&supported_features2, &supported_VkPhysicalDevice4444FormatsFeaturesEXT);
   VkPhysicalDeviceSubpassShadingFeaturesHUAWEI supported_VkPhysicalDeviceSubpassShadingFeaturesHUAWEI = {
      .sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SUBPASS_SHADING_FEATURES_HUAWEI,
      .pNext = NULL,
   };
   __vk_append_struct(&supported_features2, &supported_VkPhysicalDeviceSubpassShadingFeaturesHUAWEI);
   VkPhysicalDeviceClusterCullingShaderFeaturesHUAWEI supported_VkPhysicalDeviceClusterCullingShaderFeaturesHUAWEI = {
      .sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CLUSTER_CULLING_SHADER_FEATURES_HUAWEI,
      .pNext = NULL,
   };
   __vk_append_struct(&supported_features2, &supported_VkPhysicalDeviceClusterCullingShaderFeaturesHUAWEI);
   VkPhysicalDeviceShaderImageAtomicInt64FeaturesEXT supported_VkPhysicalDeviceShaderImageAtomicInt64FeaturesEXT = {
      .sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_IMAGE_ATOMIC_INT64_FEATURES_EXT,
      .pNext = NULL,
   };
   __vk_append_struct(&supported_features2, &supported_VkPhysicalDeviceShaderImageAtomicInt64FeaturesEXT);
   VkPhysicalDeviceFragmentShadingRateFeaturesKHR supported_VkPhysicalDeviceFragmentShadingRateFeaturesKHR = {
      .sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_SHADING_RATE_FEATURES_KHR,
      .pNext = NULL,
   };
   __vk_append_struct(&supported_features2, &supported_VkPhysicalDeviceFragmentShadingRateFeaturesKHR);
   VkPhysicalDeviceShaderTerminateInvocationFeatures supported_VkPhysicalDeviceShaderTerminateInvocationFeatures = {
      .sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_TERMINATE_INVOCATION_FEATURES,
      .pNext = NULL,
   };
   __vk_append_struct(&supported_features2, &supported_VkPhysicalDeviceShaderTerminateInvocationFeatures);
   VkPhysicalDeviceFragmentShadingRateEnumsFeaturesNV supported_VkPhysicalDeviceFragmentShadingRateEnumsFeaturesNV = {
      .sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_SHADING_RATE_ENUMS_FEATURES_NV,
      .pNext = NULL,
   };
   __vk_append_struct(&supported_features2, &supported_VkPhysicalDeviceFragmentShadingRateEnumsFeaturesNV);
   VkPhysicalDeviceImage2DViewOf3DFeaturesEXT supported_VkPhysicalDeviceImage2DViewOf3DFeaturesEXT = {
      .sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_2D_VIEW_OF_3D_FEATURES_EXT,
      .pNext = NULL,
   };
   __vk_append_struct(&supported_features2, &supported_VkPhysicalDeviceImage2DViewOf3DFeaturesEXT);
   VkPhysicalDeviceImageSlicedViewOf3DFeaturesEXT supported_VkPhysicalDeviceImageSlicedViewOf3DFeaturesEXT = {
      .sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_SLICED_VIEW_OF_3D_FEATURES_EXT,
      .pNext = NULL,
   };
   __vk_append_struct(&supported_features2, &supported_VkPhysicalDeviceImageSlicedViewOf3DFeaturesEXT);
   VkPhysicalDeviceAttachmentFeedbackLoopDynamicStateFeaturesEXT supported_VkPhysicalDeviceAttachmentFeedbackLoopDynamicStateFeaturesEXT = {
      .sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ATTACHMENT_FEEDBACK_LOOP_DYNAMIC_STATE_FEATURES_EXT,
      .pNext = NULL,
   };
   __vk_append_struct(&supported_features2, &supported_VkPhysicalDeviceAttachmentFeedbackLoopDynamicStateFeaturesEXT);
   VkPhysicalDeviceLegacyVertexAttributesFeaturesEXT supported_VkPhysicalDeviceLegacyVertexAttributesFeaturesEXT = {
      .sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_LEGACY_VERTEX_ATTRIBUTES_FEATURES_EXT,
      .pNext = NULL,
   };
   __vk_append_struct(&supported_features2, &supported_VkPhysicalDeviceLegacyVertexAttributesFeaturesEXT);
   VkPhysicalDeviceMutableDescriptorTypeFeaturesEXT supported_VkPhysicalDeviceMutableDescriptorTypeFeaturesEXT = {
      .sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MUTABLE_DESCRIPTOR_TYPE_FEATURES_EXT,
      .pNext = NULL,
   };
   __vk_append_struct(&supported_features2, &supported_VkPhysicalDeviceMutableDescriptorTypeFeaturesEXT);
   VkPhysicalDeviceDepthClipControlFeaturesEXT supported_VkPhysicalDeviceDepthClipControlFeaturesEXT = {
      .sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEPTH_CLIP_CONTROL_FEATURES_EXT,
      .pNext = NULL,
   };
   __vk_append_struct(&supported_features2, &supported_VkPhysicalDeviceDepthClipControlFeaturesEXT);
   VkPhysicalDeviceVertexInputDynamicStateFeaturesEXT supported_VkPhysicalDeviceVertexInputDynamicStateFeaturesEXT = {
      .sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VERTEX_INPUT_DYNAMIC_STATE_FEATURES_EXT,
      .pNext = NULL,
   };
   __vk_append_struct(&supported_features2, &supported_VkPhysicalDeviceVertexInputDynamicStateFeaturesEXT);
   VkPhysicalDeviceExternalMemoryRDMAFeaturesNV supported_VkPhysicalDeviceExternalMemoryRDMAFeaturesNV = {
      .sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTERNAL_MEMORY_RDMA_FEATURES_NV,
      .pNext = NULL,
   };
   __vk_append_struct(&supported_features2, &supported_VkPhysicalDeviceExternalMemoryRDMAFeaturesNV);
   VkPhysicalDeviceShaderRelaxedExtendedInstructionFeaturesKHR supported_VkPhysicalDeviceShaderRelaxedExtendedInstructionFeaturesKHR = {
      .sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_RELAXED_EXTENDED_INSTRUCTION_FEATURES_KHR,
      .pNext = NULL,
   };
   __vk_append_struct(&supported_features2, &supported_VkPhysicalDeviceShaderRelaxedExtendedInstructionFeaturesKHR);
   VkPhysicalDeviceColorWriteEnableFeaturesEXT supported_VkPhysicalDeviceColorWriteEnableFeaturesEXT = {
      .sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COLOR_WRITE_ENABLE_FEATURES_EXT,
      .pNext = NULL,
   };
   __vk_append_struct(&supported_features2, &supported_VkPhysicalDeviceColorWriteEnableFeaturesEXT);
   VkPhysicalDeviceSynchronization2Features supported_VkPhysicalDeviceSynchronization2Features = {
      .sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SYNCHRONIZATION_2_FEATURES,
      .pNext = NULL,
   };
   __vk_append_struct(&supported_features2, &supported_VkPhysicalDeviceSynchronization2Features);
   VkPhysicalDeviceHostImageCopyFeaturesEXT supported_VkPhysicalDeviceHostImageCopyFeaturesEXT = {
      .sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_HOST_IMAGE_COPY_FEATURES_EXT,
      .pNext = NULL,
   };
   __vk_append_struct(&supported_features2, &supported_VkPhysicalDeviceHostImageCopyFeaturesEXT);
   VkPhysicalDevicePrimitivesGeneratedQueryFeaturesEXT supported_VkPhysicalDevicePrimitivesGeneratedQueryFeaturesEXT = {
      .sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PRIMITIVES_GENERATED_QUERY_FEATURES_EXT,
      .pNext = NULL,
   };
   __vk_append_struct(&supported_features2, &supported_VkPhysicalDevicePrimitivesGeneratedQueryFeaturesEXT);
   VkPhysicalDeviceLegacyDitheringFeaturesEXT supported_VkPhysicalDeviceLegacyDitheringFeaturesEXT = {
      .sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_LEGACY_DITHERING_FEATURES_EXT,
      .pNext = NULL,
   };
   __vk_append_struct(&supported_features2, &supported_VkPhysicalDeviceLegacyDitheringFeaturesEXT);
   VkPhysicalDeviceMultisampledRenderToSingleSampledFeaturesEXT supported_VkPhysicalDeviceMultisampledRenderToSingleSampledFeaturesEXT = {
      .sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTISAMPLED_RENDER_TO_SINGLE_SAMPLED_FEATURES_EXT,
      .pNext = NULL,
   };
   __vk_append_struct(&supported_features2, &supported_VkPhysicalDeviceMultisampledRenderToSingleSampledFeaturesEXT);
   VkPhysicalDevicePipelineProtectedAccessFeaturesEXT supported_VkPhysicalDevicePipelineProtectedAccessFeaturesEXT = {
      .sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PIPELINE_PROTECTED_ACCESS_FEATURES_EXT,
      .pNext = NULL,
   };
   __vk_append_struct(&supported_features2, &supported_VkPhysicalDevicePipelineProtectedAccessFeaturesEXT);
   VkPhysicalDeviceVideoMaintenance1FeaturesKHR supported_VkPhysicalDeviceVideoMaintenance1FeaturesKHR = {
      .sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VIDEO_MAINTENANCE_1_FEATURES_KHR,
      .pNext = NULL,
   };
   __vk_append_struct(&supported_features2, &supported_VkPhysicalDeviceVideoMaintenance1FeaturesKHR);
   VkPhysicalDeviceInheritedViewportScissorFeaturesNV supported_VkPhysicalDeviceInheritedViewportScissorFeaturesNV = {
      .sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_INHERITED_VIEWPORT_SCISSOR_FEATURES_NV,
      .pNext = NULL,
   };
   __vk_append_struct(&supported_features2, &supported_VkPhysicalDeviceInheritedViewportScissorFeaturesNV);
   VkPhysicalDeviceYcbcr2Plane444FormatsFeaturesEXT supported_VkPhysicalDeviceYcbcr2Plane444FormatsFeaturesEXT = {
      .sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_YCBCR_2_PLANE_444_FORMATS_FEATURES_EXT,
      .pNext = NULL,
   };
   __vk_append_struct(&supported_features2, &supported_VkPhysicalDeviceYcbcr2Plane444FormatsFeaturesEXT);
   VkPhysicalDeviceProvokingVertexFeaturesEXT supported_VkPhysicalDeviceProvokingVertexFeaturesEXT = {
      .sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PROVOKING_VERTEX_FEATURES_EXT,
      .pNext = NULL,
   };
   __vk_append_struct(&supported_features2, &supported_VkPhysicalDeviceProvokingVertexFeaturesEXT);
   VkPhysicalDeviceDescriptorBufferFeaturesEXT supported_VkPhysicalDeviceDescriptorBufferFeaturesEXT = {
      .sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DESCRIPTOR_BUFFER_FEATURES_EXT,
      .pNext = NULL,
   };
   __vk_append_struct(&supported_features2, &supported_VkPhysicalDeviceDescriptorBufferFeaturesEXT);
   VkPhysicalDeviceShaderIntegerDotProductFeatures supported_VkPhysicalDeviceShaderIntegerDotProductFeatures = {
      .sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_INTEGER_DOT_PRODUCT_FEATURES,
      .pNext = NULL,
   };
   __vk_append_struct(&supported_features2, &supported_VkPhysicalDeviceShaderIntegerDotProductFeatures);
   VkPhysicalDeviceFragmentShaderBarycentricFeaturesKHR supported_VkPhysicalDeviceFragmentShaderBarycentricFeaturesKHR = {
      .sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAGMENT_SHADER_BARYCENTRIC_FEATURES_KHR,
      .pNext = NULL,
   };
   __vk_append_struct(&supported_features2, &supported_VkPhysicalDeviceFragmentShaderBarycentricFeaturesKHR);
   VkPhysicalDeviceRayTracingMotionBlurFeaturesNV supported_VkPhysicalDeviceRayTracingMotionBlurFeaturesNV = {
      .sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_MOTION_BLUR_FEATURES_NV,
      .pNext = NULL,
   };
   __vk_append_struct(&supported_features2, &supported_VkPhysicalDeviceRayTracingMotionBlurFeaturesNV);
   VkPhysicalDeviceRayTracingValidationFeaturesNV supported_VkPhysicalDeviceRayTracingValidationFeaturesNV = {
      .sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_VALIDATION_FEATURES_NV,
      .pNext = NULL,
   };
   __vk_append_struct(&supported_features2, &supported_VkPhysicalDeviceRayTracingValidationFeaturesNV);
   VkPhysicalDeviceRGBA10X6FormatsFeaturesEXT supported_VkPhysicalDeviceRGBA10X6FormatsFeaturesEXT = {
      .sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RGBA10X6_FORMATS_FEATURES_EXT,
      .pNext = NULL,
   };
   __vk_append_struct(&supported_features2, &supported_VkPhysicalDeviceRGBA10X6FormatsFeaturesEXT);
   VkPhysicalDeviceDynamicRenderingFeatures supported_VkPhysicalDeviceDynamicRenderingFeatures = {
      .sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DYNAMIC_RENDERING_FEATURES,
      .pNext = NULL,
   };
   __vk_append_struct(&supported_features2, &supported_VkPhysicalDeviceDynamicRenderingFeatures);
   VkPhysicalDeviceImageViewMinLodFeaturesEXT supported_VkPhysicalDeviceImageViewMinLodFeaturesEXT = {
      .sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_VIEW_MIN_LOD_FEATURES_EXT,
      .pNext = NULL,
   };
   __vk_append_struct(&supported_features2, &supported_VkPhysicalDeviceImageViewMinLodFeaturesEXT);
   VkPhysicalDeviceRasterizationOrderAttachmentAccessFeaturesEXT supported_VkPhysicalDeviceRasterizationOrderAttachmentAccessFeaturesEXT = {
      .sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RASTERIZATION_ORDER_ATTACHMENT_ACCESS_FEATURES_EXT,
      .pNext = NULL,
   };
   __vk_append_struct(&supported_features2, &supported_VkPhysicalDeviceRasterizationOrderAttachmentAccessFeaturesEXT);
   VkPhysicalDeviceLinearColorAttachmentFeaturesNV supported_VkPhysicalDeviceLinearColorAttachmentFeaturesNV = {
      .sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_LINEAR_COLOR_ATTACHMENT_FEATURES_NV,
      .pNext = NULL,
   };
   __vk_append_struct(&supported_features2, &supported_VkPhysicalDeviceLinearColorAttachmentFeaturesNV);
   VkPhysicalDeviceGraphicsPipelineLibraryFeaturesEXT supported_VkPhysicalDeviceGraphicsPipelineLibraryFeaturesEXT = {
      .sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_GRAPHICS_PIPELINE_LIBRARY_FEATURES_EXT,
      .pNext = NULL,
   };
   __vk_append_struct(&supported_features2, &supported_VkPhysicalDeviceGraphicsPipelineLibraryFeaturesEXT);
   VkPhysicalDeviceDescriptorSetHostMappingFeaturesVALVE supported_VkPhysicalDeviceDescriptorSetHostMappingFeaturesVALVE = {
      .sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DESCRIPTOR_SET_HOST_MAPPING_FEATURES_VALVE,
      .pNext = NULL,
   };
   __vk_append_struct(&supported_features2, &supported_VkPhysicalDeviceDescriptorSetHostMappingFeaturesVALVE);
   VkPhysicalDeviceNestedCommandBufferFeaturesEXT supported_VkPhysicalDeviceNestedCommandBufferFeaturesEXT = {
      .sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_NESTED_COMMAND_BUFFER_FEATURES_EXT,
      .pNext = NULL,
   };
   __vk_append_struct(&supported_features2, &supported_VkPhysicalDeviceNestedCommandBufferFeaturesEXT);
   VkPhysicalDeviceShaderModuleIdentifierFeaturesEXT supported_VkPhysicalDeviceShaderModuleIdentifierFeaturesEXT = {
      .sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_MODULE_IDENTIFIER_FEATURES_EXT,
      .pNext = NULL,
   };
   __vk_append_struct(&supported_features2, &supported_VkPhysicalDeviceShaderModuleIdentifierFeaturesEXT);
   VkPhysicalDeviceImageCompressionControlFeaturesEXT supported_VkPhysicalDeviceImageCompressionControlFeaturesEXT = {
      .sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_COMPRESSION_CONTROL_FEATURES_EXT,
      .pNext = NULL,
   };
   __vk_append_struct(&supported_features2, &supported_VkPhysicalDeviceImageCompressionControlFeaturesEXT);
   VkPhysicalDeviceImageCompressionControlSwapchainFeaturesEXT supported_VkPhysicalDeviceImageCompressionControlSwapchainFeaturesEXT = {
      .sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_COMPRESSION_CONTROL_SWAPCHAIN_FEATURES_EXT,
      .pNext = NULL,
   };
   __vk_append_struct(&supported_features2, &supported_VkPhysicalDeviceImageCompressionControlSwapchainFeaturesEXT);
   VkPhysicalDeviceSubpassMergeFeedbackFeaturesEXT supported_VkPhysicalDeviceSubpassMergeFeedbackFeaturesEXT = {
      .sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SUBPASS_MERGE_FEEDBACK_FEATURES_EXT,
      .pNext = NULL,
   };
   __vk_append_struct(&supported_features2, &supported_VkPhysicalDeviceSubpassMergeFeedbackFeaturesEXT);
   VkPhysicalDeviceOpacityMicromapFeaturesEXT supported_VkPhysicalDeviceOpacityMicromapFeaturesEXT = {
      .sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_OPACITY_MICROMAP_FEATURES_EXT,
      .pNext = NULL,
   };
   __vk_append_struct(&supported_features2, &supported_VkPhysicalDeviceOpacityMicromapFeaturesEXT);
   VkPhysicalDevicePipelinePropertiesFeaturesEXT supported_VkPhysicalDevicePipelinePropertiesFeaturesEXT = {
      .sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PIPELINE_PROPERTIES_FEATURES_EXT,
      .pNext = NULL,
   };
   __vk_append_struct(&supported_features2, &supported_VkPhysicalDevicePipelinePropertiesFeaturesEXT);
   VkPhysicalDeviceShaderEarlyAndLateFragmentTestsFeaturesAMD supported_VkPhysicalDeviceShaderEarlyAndLateFragmentTestsFeaturesAMD = {
      .sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_EARLY_AND_LATE_FRAGMENT_TESTS_FEATURES_AMD,
      .pNext = NULL,
   };
   __vk_append_struct(&supported_features2, &supported_VkPhysicalDeviceShaderEarlyAndLateFragmentTestsFeaturesAMD);
   VkPhysicalDeviceNonSeamlessCubeMapFeaturesEXT supported_VkPhysicalDeviceNonSeamlessCubeMapFeaturesEXT = {
      .sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_NON_SEAMLESS_CUBE_MAP_FEATURES_EXT,
      .pNext = NULL,
   };
   __vk_append_struct(&supported_features2, &supported_VkPhysicalDeviceNonSeamlessCubeMapFeaturesEXT);
   VkPhysicalDevicePipelineRobustnessFeaturesEXT supported_VkPhysicalDevicePipelineRobustnessFeaturesEXT = {
      .sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PIPELINE_ROBUSTNESS_FEATURES_EXT,
      .pNext = NULL,
   };
   __vk_append_struct(&supported_features2, &supported_VkPhysicalDevicePipelineRobustnessFeaturesEXT);
   VkPhysicalDeviceImageProcessingFeaturesQCOM supported_VkPhysicalDeviceImageProcessingFeaturesQCOM = {
      .sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_PROCESSING_FEATURES_QCOM,
      .pNext = NULL,
   };
   __vk_append_struct(&supported_features2, &supported_VkPhysicalDeviceImageProcessingFeaturesQCOM);
   VkPhysicalDeviceTilePropertiesFeaturesQCOM supported_VkPhysicalDeviceTilePropertiesFeaturesQCOM = {
      .sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_TILE_PROPERTIES_FEATURES_QCOM,
      .pNext = NULL,
   };
   __vk_append_struct(&supported_features2, &supported_VkPhysicalDeviceTilePropertiesFeaturesQCOM);
   VkPhysicalDeviceAmigoProfilingFeaturesSEC supported_VkPhysicalDeviceAmigoProfilingFeaturesSEC = {
      .sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_AMIGO_PROFILING_FEATURES_SEC,
      .pNext = NULL,
   };
   __vk_append_struct(&supported_features2, &supported_VkPhysicalDeviceAmigoProfilingFeaturesSEC);
   VkPhysicalDeviceAttachmentFeedbackLoopLayoutFeaturesEXT supported_VkPhysicalDeviceAttachmentFeedbackLoopLayoutFeaturesEXT = {
      .sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ATTACHMENT_FEEDBACK_LOOP_LAYOUT_FEATURES_EXT,
      .pNext = NULL,
   };
   __vk_append_struct(&supported_features2, &supported_VkPhysicalDeviceAttachmentFeedbackLoopLayoutFeaturesEXT);
   VkPhysicalDeviceDepthClampZeroOneFeaturesEXT supported_VkPhysicalDeviceDepthClampZeroOneFeaturesEXT = {
      .sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEPTH_CLAMP_ZERO_ONE_FEATURES_EXT,
      .pNext = NULL,
   };
   __vk_append_struct(&supported_features2, &supported_VkPhysicalDeviceDepthClampZeroOneFeaturesEXT);
   VkPhysicalDeviceAddressBindingReportFeaturesEXT supported_VkPhysicalDeviceAddressBindingReportFeaturesEXT = {
      .sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_ADDRESS_BINDING_REPORT_FEATURES_EXT,
      .pNext = NULL,
   };
   __vk_append_struct(&supported_features2, &supported_VkPhysicalDeviceAddressBindingReportFeaturesEXT);
   VkPhysicalDeviceOpticalFlowFeaturesNV supported_VkPhysicalDeviceOpticalFlowFeaturesNV = {
      .sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_OPTICAL_FLOW_FEATURES_NV,
      .pNext = NULL,
   };
   __vk_append_struct(&supported_features2, &supported_VkPhysicalDeviceOpticalFlowFeaturesNV);
   VkPhysicalDeviceFaultFeaturesEXT supported_VkPhysicalDeviceFaultFeaturesEXT = {
      .sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FAULT_FEATURES_EXT,
      .pNext = NULL,
   };
   __vk_append_struct(&supported_features2, &supported_VkPhysicalDeviceFaultFeaturesEXT);
   VkPhysicalDevicePipelineLibraryGroupHandlesFeaturesEXT supported_VkPhysicalDevicePipelineLibraryGroupHandlesFeaturesEXT = {
      .sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PIPELINE_LIBRARY_GROUP_HANDLES_FEATURES_EXT,
      .pNext = NULL,
   };
   __vk_append_struct(&supported_features2, &supported_VkPhysicalDevicePipelineLibraryGroupHandlesFeaturesEXT);
   VkPhysicalDeviceShaderCoreBuiltinsFeaturesARM supported_VkPhysicalDeviceShaderCoreBuiltinsFeaturesARM = {
      .sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_CORE_BUILTINS_FEATURES_ARM,
      .pNext = NULL,
   };
   __vk_append_struct(&supported_features2, &supported_VkPhysicalDeviceShaderCoreBuiltinsFeaturesARM);
   VkPhysicalDeviceFrameBoundaryFeaturesEXT supported_VkPhysicalDeviceFrameBoundaryFeaturesEXT = {
      .sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FRAME_BOUNDARY_FEATURES_EXT,
      .pNext = NULL,
   };
   __vk_append_struct(&supported_features2, &supported_VkPhysicalDeviceFrameBoundaryFeaturesEXT);
   VkPhysicalDeviceDynamicRenderingUnusedAttachmentsFeaturesEXT supported_VkPhysicalDeviceDynamicRenderingUnusedAttachmentsFeaturesEXT = {
      .sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DYNAMIC_RENDERING_UNUSED_ATTACHMENTS_FEATURES_EXT,
      .pNext = NULL,
   };
   __vk_append_struct(&supported_features2, &supported_VkPhysicalDeviceDynamicRenderingUnusedAttachmentsFeaturesEXT);
   VkPhysicalDeviceSwapchainMaintenance1FeaturesEXT supported_VkPhysicalDeviceSwapchainMaintenance1FeaturesEXT = {
      .sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SWAPCHAIN_MAINTENANCE_1_FEATURES_EXT,
      .pNext = NULL,
   };
   __vk_append_struct(&supported_features2, &supported_VkPhysicalDeviceSwapchainMaintenance1FeaturesEXT);
   VkPhysicalDeviceDepthBiasControlFeaturesEXT supported_VkPhysicalDeviceDepthBiasControlFeaturesEXT = {
      .sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DEPTH_BIAS_CONTROL_FEATURES_EXT,
      .pNext = NULL,
   };
   __vk_append_struct(&supported_features2, &supported_VkPhysicalDeviceDepthBiasControlFeaturesEXT);
   VkPhysicalDeviceRayTracingInvocationReorderFeaturesNV supported_VkPhysicalDeviceRayTracingInvocationReorderFeaturesNV = {
      .sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_INVOCATION_REORDER_FEATURES_NV,
      .pNext = NULL,
   };
   __vk_append_struct(&supported_features2, &supported_VkPhysicalDeviceRayTracingInvocationReorderFeaturesNV);
   VkPhysicalDeviceExtendedSparseAddressSpaceFeaturesNV supported_VkPhysicalDeviceExtendedSparseAddressSpaceFeaturesNV = {
      .sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_EXTENDED_SPARSE_ADDRESS_SPACE_FEATURES_NV,
      .pNext = NULL,
   };
   __vk_append_struct(&supported_features2, &supported_VkPhysicalDeviceExtendedSparseAddressSpaceFeaturesNV);
   VkPhysicalDeviceMultiviewPerViewViewportsFeaturesQCOM supported_VkPhysicalDeviceMultiviewPerViewViewportsFeaturesQCOM = {
      .sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTIVIEW_PER_VIEW_VIEWPORTS_FEATURES_QCOM,
      .pNext = NULL,
   };
   __vk_append_struct(&supported_features2, &supported_VkPhysicalDeviceMultiviewPerViewViewportsFeaturesQCOM);
   VkPhysicalDeviceRayTracingPositionFetchFeaturesKHR supported_VkPhysicalDeviceRayTracingPositionFetchFeaturesKHR = {
      .sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAY_TRACING_POSITION_FETCH_FEATURES_KHR,
      .pNext = NULL,
   };
   __vk_append_struct(&supported_features2, &supported_VkPhysicalDeviceRayTracingPositionFetchFeaturesKHR);
   VkPhysicalDeviceMultiviewPerViewRenderAreasFeaturesQCOM supported_VkPhysicalDeviceMultiviewPerViewRenderAreasFeaturesQCOM = {
      .sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTIVIEW_PER_VIEW_RENDER_AREAS_FEATURES_QCOM,
      .pNext = NULL,
   };
   __vk_append_struct(&supported_features2, &supported_VkPhysicalDeviceMultiviewPerViewRenderAreasFeaturesQCOM);
   VkPhysicalDeviceShaderObjectFeaturesEXT supported_VkPhysicalDeviceShaderObjectFeaturesEXT = {
      .sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_OBJECT_FEATURES_EXT,
      .pNext = NULL,
   };
   __vk_append_struct(&supported_features2, &supported_VkPhysicalDeviceShaderObjectFeaturesEXT);
   VkPhysicalDeviceShaderTileImageFeaturesEXT supported_VkPhysicalDeviceShaderTileImageFeaturesEXT = {
      .sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_TILE_IMAGE_FEATURES_EXT,
      .pNext = NULL,
   };
   __vk_append_struct(&supported_features2, &supported_VkPhysicalDeviceShaderTileImageFeaturesEXT);
   VkPhysicalDeviceCooperativeMatrixFeaturesKHR supported_VkPhysicalDeviceCooperativeMatrixFeaturesKHR = {
      .sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_COOPERATIVE_MATRIX_FEATURES_KHR,
      .pNext = NULL,
   };
   __vk_append_struct(&supported_features2, &supported_VkPhysicalDeviceCooperativeMatrixFeaturesKHR);
   VkPhysicalDeviceCubicClampFeaturesQCOM supported_VkPhysicalDeviceCubicClampFeaturesQCOM = {
      .sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CUBIC_CLAMP_FEATURES_QCOM,
      .pNext = NULL,
   };
   __vk_append_struct(&supported_features2, &supported_VkPhysicalDeviceCubicClampFeaturesQCOM);
   VkPhysicalDeviceYcbcrDegammaFeaturesQCOM supported_VkPhysicalDeviceYcbcrDegammaFeaturesQCOM = {
      .sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_YCBCR_DEGAMMA_FEATURES_QCOM,
      .pNext = NULL,
   };
   __vk_append_struct(&supported_features2, &supported_VkPhysicalDeviceYcbcrDegammaFeaturesQCOM);
   VkPhysicalDeviceCubicWeightsFeaturesQCOM supported_VkPhysicalDeviceCubicWeightsFeaturesQCOM = {
      .sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_CUBIC_WEIGHTS_FEATURES_QCOM,
      .pNext = NULL,
   };
   __vk_append_struct(&supported_features2, &supported_VkPhysicalDeviceCubicWeightsFeaturesQCOM);
   VkPhysicalDeviceImageProcessing2FeaturesQCOM supported_VkPhysicalDeviceImageProcessing2FeaturesQCOM = {
      .sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_PROCESSING_2_FEATURES_QCOM,
      .pNext = NULL,
   };
   __vk_append_struct(&supported_features2, &supported_VkPhysicalDeviceImageProcessing2FeaturesQCOM);
   VkPhysicalDeviceDescriptorPoolOverallocationFeaturesNV supported_VkPhysicalDeviceDescriptorPoolOverallocationFeaturesNV = {
      .sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DESCRIPTOR_POOL_OVERALLOCATION_FEATURES_NV,
      .pNext = NULL,
   };
   __vk_append_struct(&supported_features2, &supported_VkPhysicalDeviceDescriptorPoolOverallocationFeaturesNV);
   VkPhysicalDevicePerStageDescriptorSetFeaturesNV supported_VkPhysicalDevicePerStageDescriptorSetFeaturesNV = {
      .sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_PER_STAGE_DESCRIPTOR_SET_FEATURES_NV,
      .pNext = NULL,
   };
   __vk_append_struct(&supported_features2, &supported_VkPhysicalDevicePerStageDescriptorSetFeaturesNV);
   VkPhysicalDeviceSchedulingControlsFeaturesARM supported_VkPhysicalDeviceSchedulingControlsFeaturesARM = {
      .sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SCHEDULING_CONTROLS_FEATURES_ARM,
      .pNext = NULL,
   };
   __vk_append_struct(&supported_features2, &supported_VkPhysicalDeviceSchedulingControlsFeaturesARM);
   VkPhysicalDeviceRelaxedLineRasterizationFeaturesIMG supported_VkPhysicalDeviceRelaxedLineRasterizationFeaturesIMG = {
      .sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RELAXED_LINE_RASTERIZATION_FEATURES_IMG,
      .pNext = NULL,
   };
   __vk_append_struct(&supported_features2, &supported_VkPhysicalDeviceRelaxedLineRasterizationFeaturesIMG);
   VkPhysicalDeviceRenderPassStripedFeaturesARM supported_VkPhysicalDeviceRenderPassStripedFeaturesARM = {
      .sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RENDER_PASS_STRIPED_FEATURES_ARM,
      .pNext = NULL,
   };
   __vk_append_struct(&supported_features2, &supported_VkPhysicalDeviceRenderPassStripedFeaturesARM);
   VkPhysicalDeviceShaderMaximalReconvergenceFeaturesKHR supported_VkPhysicalDeviceShaderMaximalReconvergenceFeaturesKHR = {
      .sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_MAXIMAL_RECONVERGENCE_FEATURES_KHR,
      .pNext = NULL,
   };
   __vk_append_struct(&supported_features2, &supported_VkPhysicalDeviceShaderMaximalReconvergenceFeaturesKHR);
   VkPhysicalDeviceShaderSubgroupRotateFeaturesKHR supported_VkPhysicalDeviceShaderSubgroupRotateFeaturesKHR = {
      .sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_SUBGROUP_ROTATE_FEATURES_KHR,
      .pNext = NULL,
   };
   __vk_append_struct(&supported_features2, &supported_VkPhysicalDeviceShaderSubgroupRotateFeaturesKHR);
   VkPhysicalDeviceShaderExpectAssumeFeaturesKHR supported_VkPhysicalDeviceShaderExpectAssumeFeaturesKHR = {
      .sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_EXPECT_ASSUME_FEATURES_KHR,
      .pNext = NULL,
   };
   __vk_append_struct(&supported_features2, &supported_VkPhysicalDeviceShaderExpectAssumeFeaturesKHR);
   VkPhysicalDeviceShaderFloatControls2FeaturesKHR supported_VkPhysicalDeviceShaderFloatControls2FeaturesKHR = {
      .sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_FLOAT_CONTROLS_2_FEATURES_KHR,
      .pNext = NULL,
   };
   __vk_append_struct(&supported_features2, &supported_VkPhysicalDeviceShaderFloatControls2FeaturesKHR);
   VkPhysicalDeviceDynamicRenderingLocalReadFeaturesKHR supported_VkPhysicalDeviceDynamicRenderingLocalReadFeaturesKHR = {
      .sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DYNAMIC_RENDERING_LOCAL_READ_FEATURES_KHR,
      .pNext = NULL,
   };
   __vk_append_struct(&supported_features2, &supported_VkPhysicalDeviceDynamicRenderingLocalReadFeaturesKHR);
   VkPhysicalDeviceShaderQuadControlFeaturesKHR supported_VkPhysicalDeviceShaderQuadControlFeaturesKHR = {
      .sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_QUAD_CONTROL_FEATURES_KHR,
      .pNext = NULL,
   };
   __vk_append_struct(&supported_features2, &supported_VkPhysicalDeviceShaderQuadControlFeaturesKHR);
   VkPhysicalDeviceShaderAtomicFloat16VectorFeaturesNV supported_VkPhysicalDeviceShaderAtomicFloat16VectorFeaturesNV = {
      .sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_ATOMIC_FLOAT16_VECTOR_FEATURES_NV,
      .pNext = NULL,
   };
   __vk_append_struct(&supported_features2, &supported_VkPhysicalDeviceShaderAtomicFloat16VectorFeaturesNV);
   VkPhysicalDeviceMapMemoryPlacedFeaturesEXT supported_VkPhysicalDeviceMapMemoryPlacedFeaturesEXT = {
      .sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MAP_MEMORY_PLACED_FEATURES_EXT,
      .pNext = NULL,
   };
   __vk_append_struct(&supported_features2, &supported_VkPhysicalDeviceMapMemoryPlacedFeaturesEXT);
   VkPhysicalDeviceRawAccessChainsFeaturesNV supported_VkPhysicalDeviceRawAccessChainsFeaturesNV = {
      .sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_RAW_ACCESS_CHAINS_FEATURES_NV,
      .pNext = NULL,
   };
   __vk_append_struct(&supported_features2, &supported_VkPhysicalDeviceRawAccessChainsFeaturesNV);
   VkPhysicalDeviceImageAlignmentControlFeaturesMESA supported_VkPhysicalDeviceImageAlignmentControlFeaturesMESA = {
      .sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_IMAGE_ALIGNMENT_CONTROL_FEATURES_MESA,
      .pNext = NULL,
   };
   __vk_append_struct(&supported_features2, &supported_VkPhysicalDeviceImageAlignmentControlFeaturesMESA);
   VkPhysicalDeviceShaderReplicatedCompositesFeaturesEXT supported_VkPhysicalDeviceShaderReplicatedCompositesFeaturesEXT = {
      .sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_REPLICATED_COMPOSITES_FEATURES_EXT,
      .pNext = NULL,
   };
   __vk_append_struct(&supported_features2, &supported_VkPhysicalDeviceShaderReplicatedCompositesFeaturesEXT);

   physical_device->dispatch_table.GetPhysicalDeviceFeatures2(
      vk_physical_device, &supported_features2);

   vk_set_physical_device_features(&physical_device->vk.supported_features,
                                   &supported_features2);
}
