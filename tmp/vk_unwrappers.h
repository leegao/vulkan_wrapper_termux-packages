

#ifndef VK_UNWRAPPER_H
#define VK_UNWRAPPER_H

#include "wrapper_private.h"
#include "vulkan/util/vk_alloc.h"

#ifdef __cplusplus
extern "C" {
#endif

struct temporary_objects {
    struct list_head objects;
};

struct temp_object_node {
    struct list_head link;
    void *ptr;
    struct wrapper_device *device;
};

static void free_temp_objects(struct temporary_objects* temp) {
    // Clean up temporary descriptor pools associated with this command buffer
    if (!list_is_empty(&temp->objects)) {
        list_for_each_entry_safe(struct temp_object_node, node, &temp->objects, link) {
            if (node->device) {
                vk_free(&node->device->vk.alloc, node->ptr);
                list_del(&node->link);
                vk_free(&node->device->vk.alloc, node);
            } else {
                free(node->ptr);
                list_del(&node->link);
                free(node);
            }
        }
    }
}


void
unwrap_VkAccelerationStructureBuildSizesInfoKHR_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkAccelerationStructureBuildSizesInfoKHR *out_info,
                          const VkAccelerationStructureBuildSizesInfoKHR *in_info);

void
unwrap_VkAccelerationStructureBuildSizesInfoKHR(struct temporary_objects*, struct wrapper_device *device,
                          VkAccelerationStructureBuildSizesInfoKHR *out_info,
                          const VkAccelerationStructureBuildSizesInfoKHR *in_info);


void
unwrap_VkAccelerationStructureCaptureDescriptorDataInfoEXT_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkAccelerationStructureCaptureDescriptorDataInfoEXT *out_info,
                          const VkAccelerationStructureCaptureDescriptorDataInfoEXT *in_info);

void
unwrap_VkAccelerationStructureCaptureDescriptorDataInfoEXT(struct temporary_objects*, struct wrapper_device *device,
                          VkAccelerationStructureCaptureDescriptorDataInfoEXT *out_info,
                          const VkAccelerationStructureCaptureDescriptorDataInfoEXT *in_info);


void
unwrap_VkAccelerationStructureCreateInfoKHR_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkAccelerationStructureCreateInfoKHR *out_info,
                          const VkAccelerationStructureCreateInfoKHR *in_info);

void
unwrap_VkAccelerationStructureCreateInfoKHR(struct temporary_objects*, struct wrapper_device *device,
                          VkAccelerationStructureCreateInfoKHR *out_info,
                          const VkAccelerationStructureCreateInfoKHR *in_info);


void
unwrap_VkAccelerationStructureCreateInfoNV_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkAccelerationStructureCreateInfoNV *out_info,
                          const VkAccelerationStructureCreateInfoNV *in_info);

void
unwrap_VkAccelerationStructureCreateInfoNV(struct temporary_objects*, struct wrapper_device *device,
                          VkAccelerationStructureCreateInfoNV *out_info,
                          const VkAccelerationStructureCreateInfoNV *in_info);


void
unwrap_VkAccelerationStructureDeviceAddressInfoKHR_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkAccelerationStructureDeviceAddressInfoKHR *out_info,
                          const VkAccelerationStructureDeviceAddressInfoKHR *in_info);

void
unwrap_VkAccelerationStructureDeviceAddressInfoKHR(struct temporary_objects*, struct wrapper_device *device,
                          VkAccelerationStructureDeviceAddressInfoKHR *out_info,
                          const VkAccelerationStructureDeviceAddressInfoKHR *in_info);


void
unwrap_VkAccelerationStructureGeometryAabbsDataKHR_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkAccelerationStructureGeometryAabbsDataKHR *out_info,
                          const VkAccelerationStructureGeometryAabbsDataKHR *in_info);

void
unwrap_VkAccelerationStructureGeometryAabbsDataKHR(struct temporary_objects*, struct wrapper_device *device,
                          VkAccelerationStructureGeometryAabbsDataKHR *out_info,
                          const VkAccelerationStructureGeometryAabbsDataKHR *in_info);


void
unwrap_VkAccelerationStructureGeometryInstancesDataKHR_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkAccelerationStructureGeometryInstancesDataKHR *out_info,
                          const VkAccelerationStructureGeometryInstancesDataKHR *in_info);

void
unwrap_VkAccelerationStructureGeometryInstancesDataKHR(struct temporary_objects*, struct wrapper_device *device,
                          VkAccelerationStructureGeometryInstancesDataKHR *out_info,
                          const VkAccelerationStructureGeometryInstancesDataKHR *in_info);


void
unwrap_VkAccelerationStructureGeometryKHR_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkAccelerationStructureGeometryKHR *out_info,
                          const VkAccelerationStructureGeometryKHR *in_info);

void
unwrap_VkAccelerationStructureGeometryKHR(struct temporary_objects*, struct wrapper_device *device,
                          VkAccelerationStructureGeometryKHR *out_info,
                          const VkAccelerationStructureGeometryKHR *in_info);


void
unwrap_VkAccelerationStructureGeometryMotionTrianglesDataNV_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkAccelerationStructureGeometryMotionTrianglesDataNV *out_info,
                          const VkAccelerationStructureGeometryMotionTrianglesDataNV *in_info);

void
unwrap_VkAccelerationStructureGeometryMotionTrianglesDataNV(struct temporary_objects*, struct wrapper_device *device,
                          VkAccelerationStructureGeometryMotionTrianglesDataNV *out_info,
                          const VkAccelerationStructureGeometryMotionTrianglesDataNV *in_info);


void
unwrap_VkAccelerationStructureGeometryTrianglesDataKHR_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkAccelerationStructureGeometryTrianglesDataKHR *out_info,
                          const VkAccelerationStructureGeometryTrianglesDataKHR *in_info);

void
unwrap_VkAccelerationStructureGeometryTrianglesDataKHR(struct temporary_objects*, struct wrapper_device *device,
                          VkAccelerationStructureGeometryTrianglesDataKHR *out_info,
                          const VkAccelerationStructureGeometryTrianglesDataKHR *in_info);


void
unwrap_VkAccelerationStructureInfoNV_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkAccelerationStructureInfoNV *out_info,
                          const VkAccelerationStructureInfoNV *in_info);

void
unwrap_VkAccelerationStructureInfoNV(struct temporary_objects*, struct wrapper_device *device,
                          VkAccelerationStructureInfoNV *out_info,
                          const VkAccelerationStructureInfoNV *in_info);


void
unwrap_VkAccelerationStructureMemoryRequirementsInfoNV_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkAccelerationStructureMemoryRequirementsInfoNV *out_info,
                          const VkAccelerationStructureMemoryRequirementsInfoNV *in_info);

void
unwrap_VkAccelerationStructureMemoryRequirementsInfoNV(struct temporary_objects*, struct wrapper_device *device,
                          VkAccelerationStructureMemoryRequirementsInfoNV *out_info,
                          const VkAccelerationStructureMemoryRequirementsInfoNV *in_info);


void
unwrap_VkAccelerationStructureMotionInfoNV_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkAccelerationStructureMotionInfoNV *out_info,
                          const VkAccelerationStructureMotionInfoNV *in_info);

void
unwrap_VkAccelerationStructureMotionInfoNV(struct temporary_objects*, struct wrapper_device *device,
                          VkAccelerationStructureMotionInfoNV *out_info,
                          const VkAccelerationStructureMotionInfoNV *in_info);


void
unwrap_VkAcquireNextImageInfoKHR_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkAcquireNextImageInfoKHR *out_info,
                          const VkAcquireNextImageInfoKHR *in_info);

void
unwrap_VkAcquireNextImageInfoKHR(struct temporary_objects*, struct wrapper_device *device,
                          VkAcquireNextImageInfoKHR *out_info,
                          const VkAcquireNextImageInfoKHR *in_info);


void
unwrap_VkAcquireProfilingLockInfoKHR_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkAcquireProfilingLockInfoKHR *out_info,
                          const VkAcquireProfilingLockInfoKHR *in_info);

void
unwrap_VkAcquireProfilingLockInfoKHR(struct temporary_objects*, struct wrapper_device *device,
                          VkAcquireProfilingLockInfoKHR *out_info,
                          const VkAcquireProfilingLockInfoKHR *in_info);


void
unwrap_VkAmigoProfilingSubmitInfoSEC_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkAmigoProfilingSubmitInfoSEC *out_info,
                          const VkAmigoProfilingSubmitInfoSEC *in_info);

void
unwrap_VkAmigoProfilingSubmitInfoSEC(struct temporary_objects*, struct wrapper_device *device,
                          VkAmigoProfilingSubmitInfoSEC *out_info,
                          const VkAmigoProfilingSubmitInfoSEC *in_info);


void
unwrap_VkAndroidHardwareBufferFormatProperties2ANDROID_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkAndroidHardwareBufferFormatProperties2ANDROID *out_info,
                          const VkAndroidHardwareBufferFormatProperties2ANDROID *in_info);

void
unwrap_VkAndroidHardwareBufferFormatProperties2ANDROID(struct temporary_objects*, struct wrapper_device *device,
                          VkAndroidHardwareBufferFormatProperties2ANDROID *out_info,
                          const VkAndroidHardwareBufferFormatProperties2ANDROID *in_info);


void
unwrap_VkAndroidHardwareBufferFormatPropertiesANDROID_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkAndroidHardwareBufferFormatPropertiesANDROID *out_info,
                          const VkAndroidHardwareBufferFormatPropertiesANDROID *in_info);

void
unwrap_VkAndroidHardwareBufferFormatPropertiesANDROID(struct temporary_objects*, struct wrapper_device *device,
                          VkAndroidHardwareBufferFormatPropertiesANDROID *out_info,
                          const VkAndroidHardwareBufferFormatPropertiesANDROID *in_info);


void
unwrap_VkAndroidHardwareBufferFormatResolvePropertiesANDROID_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkAndroidHardwareBufferFormatResolvePropertiesANDROID *out_info,
                          const VkAndroidHardwareBufferFormatResolvePropertiesANDROID *in_info);

void
unwrap_VkAndroidHardwareBufferFormatResolvePropertiesANDROID(struct temporary_objects*, struct wrapper_device *device,
                          VkAndroidHardwareBufferFormatResolvePropertiesANDROID *out_info,
                          const VkAndroidHardwareBufferFormatResolvePropertiesANDROID *in_info);


void
unwrap_VkAndroidHardwareBufferPropertiesANDROID_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkAndroidHardwareBufferPropertiesANDROID *out_info,
                          const VkAndroidHardwareBufferPropertiesANDROID *in_info);

void
unwrap_VkAndroidHardwareBufferPropertiesANDROID(struct temporary_objects*, struct wrapper_device *device,
                          VkAndroidHardwareBufferPropertiesANDROID *out_info,
                          const VkAndroidHardwareBufferPropertiesANDROID *in_info);


void
unwrap_VkAndroidHardwareBufferUsageANDROID_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkAndroidHardwareBufferUsageANDROID *out_info,
                          const VkAndroidHardwareBufferUsageANDROID *in_info);

void
unwrap_VkAndroidHardwareBufferUsageANDROID(struct temporary_objects*, struct wrapper_device *device,
                          VkAndroidHardwareBufferUsageANDROID *out_info,
                          const VkAndroidHardwareBufferUsageANDROID *in_info);


void
unwrap_VkAndroidSurfaceCreateInfoKHR_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkAndroidSurfaceCreateInfoKHR *out_info,
                          const VkAndroidSurfaceCreateInfoKHR *in_info);

void
unwrap_VkAndroidSurfaceCreateInfoKHR(struct temporary_objects*, struct wrapper_device *device,
                          VkAndroidSurfaceCreateInfoKHR *out_info,
                          const VkAndroidSurfaceCreateInfoKHR *in_info);


void
unwrap_VkApplicationInfo_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkApplicationInfo *out_info,
                          const VkApplicationInfo *in_info);

void
unwrap_VkApplicationInfo(struct temporary_objects*, struct wrapper_device *device,
                          VkApplicationInfo *out_info,
                          const VkApplicationInfo *in_info);


void
unwrap_VkAttachmentDescription2_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkAttachmentDescription2 *out_info,
                          const VkAttachmentDescription2 *in_info);

void
unwrap_VkAttachmentDescription2(struct temporary_objects*, struct wrapper_device *device,
                          VkAttachmentDescription2 *out_info,
                          const VkAttachmentDescription2 *in_info);


void
unwrap_VkAttachmentDescriptionStencilLayout_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkAttachmentDescriptionStencilLayout *out_info,
                          const VkAttachmentDescriptionStencilLayout *in_info);

void
unwrap_VkAttachmentDescriptionStencilLayout(struct temporary_objects*, struct wrapper_device *device,
                          VkAttachmentDescriptionStencilLayout *out_info,
                          const VkAttachmentDescriptionStencilLayout *in_info);


void
unwrap_VkAttachmentReference2_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkAttachmentReference2 *out_info,
                          const VkAttachmentReference2 *in_info);

void
unwrap_VkAttachmentReference2(struct temporary_objects*, struct wrapper_device *device,
                          VkAttachmentReference2 *out_info,
                          const VkAttachmentReference2 *in_info);


void
unwrap_VkAttachmentReferenceStencilLayout_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkAttachmentReferenceStencilLayout *out_info,
                          const VkAttachmentReferenceStencilLayout *in_info);

void
unwrap_VkAttachmentReferenceStencilLayout(struct temporary_objects*, struct wrapper_device *device,
                          VkAttachmentReferenceStencilLayout *out_info,
                          const VkAttachmentReferenceStencilLayout *in_info);


void
unwrap_VkAttachmentSampleCountInfoAMD_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkAttachmentSampleCountInfoAMD *out_info,
                          const VkAttachmentSampleCountInfoAMD *in_info);

void
unwrap_VkAttachmentSampleCountInfoAMD(struct temporary_objects*, struct wrapper_device *device,
                          VkAttachmentSampleCountInfoAMD *out_info,
                          const VkAttachmentSampleCountInfoAMD *in_info);


void
unwrap_VkBindAccelerationStructureMemoryInfoNV_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkBindAccelerationStructureMemoryInfoNV *out_info,
                          const VkBindAccelerationStructureMemoryInfoNV *in_info);

void
unwrap_VkBindAccelerationStructureMemoryInfoNV(struct temporary_objects*, struct wrapper_device *device,
                          VkBindAccelerationStructureMemoryInfoNV *out_info,
                          const VkBindAccelerationStructureMemoryInfoNV *in_info);


void
unwrap_VkBindBufferMemoryDeviceGroupInfo_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkBindBufferMemoryDeviceGroupInfo *out_info,
                          const VkBindBufferMemoryDeviceGroupInfo *in_info);

void
unwrap_VkBindBufferMemoryDeviceGroupInfo(struct temporary_objects*, struct wrapper_device *device,
                          VkBindBufferMemoryDeviceGroupInfo *out_info,
                          const VkBindBufferMemoryDeviceGroupInfo *in_info);


void
unwrap_VkBindBufferMemoryInfo_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkBindBufferMemoryInfo *out_info,
                          const VkBindBufferMemoryInfo *in_info);

void
unwrap_VkBindBufferMemoryInfo(struct temporary_objects*, struct wrapper_device *device,
                          VkBindBufferMemoryInfo *out_info,
                          const VkBindBufferMemoryInfo *in_info);


void
unwrap_VkBindDescriptorBufferEmbeddedSamplersInfoEXT_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkBindDescriptorBufferEmbeddedSamplersInfoEXT *out_info,
                          const VkBindDescriptorBufferEmbeddedSamplersInfoEXT *in_info);

void
unwrap_VkBindDescriptorBufferEmbeddedSamplersInfoEXT(struct temporary_objects*, struct wrapper_device *device,
                          VkBindDescriptorBufferEmbeddedSamplersInfoEXT *out_info,
                          const VkBindDescriptorBufferEmbeddedSamplersInfoEXT *in_info);


void
unwrap_VkBindDescriptorSetsInfoKHR_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkBindDescriptorSetsInfoKHR *out_info,
                          const VkBindDescriptorSetsInfoKHR *in_info);

void
unwrap_VkBindDescriptorSetsInfoKHR(struct temporary_objects*, struct wrapper_device *device,
                          VkBindDescriptorSetsInfoKHR *out_info,
                          const VkBindDescriptorSetsInfoKHR *in_info);


void
unwrap_VkBindImageMemoryDeviceGroupInfo_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkBindImageMemoryDeviceGroupInfo *out_info,
                          const VkBindImageMemoryDeviceGroupInfo *in_info);

void
unwrap_VkBindImageMemoryDeviceGroupInfo(struct temporary_objects*, struct wrapper_device *device,
                          VkBindImageMemoryDeviceGroupInfo *out_info,
                          const VkBindImageMemoryDeviceGroupInfo *in_info);


void
unwrap_VkBindImageMemoryInfo_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkBindImageMemoryInfo *out_info,
                          const VkBindImageMemoryInfo *in_info);

void
unwrap_VkBindImageMemoryInfo(struct temporary_objects*, struct wrapper_device *device,
                          VkBindImageMemoryInfo *out_info,
                          const VkBindImageMemoryInfo *in_info);


void
unwrap_VkBindImageMemorySwapchainInfoKHR_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkBindImageMemorySwapchainInfoKHR *out_info,
                          const VkBindImageMemorySwapchainInfoKHR *in_info);

void
unwrap_VkBindImageMemorySwapchainInfoKHR(struct temporary_objects*, struct wrapper_device *device,
                          VkBindImageMemorySwapchainInfoKHR *out_info,
                          const VkBindImageMemorySwapchainInfoKHR *in_info);


void
unwrap_VkBindImagePlaneMemoryInfo_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkBindImagePlaneMemoryInfo *out_info,
                          const VkBindImagePlaneMemoryInfo *in_info);

void
unwrap_VkBindImagePlaneMemoryInfo(struct temporary_objects*, struct wrapper_device *device,
                          VkBindImagePlaneMemoryInfo *out_info,
                          const VkBindImagePlaneMemoryInfo *in_info);


void
unwrap_VkBindMemoryStatusKHR_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkBindMemoryStatusKHR *out_info,
                          const VkBindMemoryStatusKHR *in_info);

void
unwrap_VkBindMemoryStatusKHR(struct temporary_objects*, struct wrapper_device *device,
                          VkBindMemoryStatusKHR *out_info,
                          const VkBindMemoryStatusKHR *in_info);


void
unwrap_VkBindSparseInfo_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkBindSparseInfo *out_info,
                          const VkBindSparseInfo *in_info);

void
unwrap_VkBindSparseInfo(struct temporary_objects*, struct wrapper_device *device,
                          VkBindSparseInfo *out_info,
                          const VkBindSparseInfo *in_info);


void
unwrap_VkBindVideoSessionMemoryInfoKHR_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkBindVideoSessionMemoryInfoKHR *out_info,
                          const VkBindVideoSessionMemoryInfoKHR *in_info);

void
unwrap_VkBindVideoSessionMemoryInfoKHR(struct temporary_objects*, struct wrapper_device *device,
                          VkBindVideoSessionMemoryInfoKHR *out_info,
                          const VkBindVideoSessionMemoryInfoKHR *in_info);


void
unwrap_VkBlitImageCubicWeightsInfoQCOM_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkBlitImageCubicWeightsInfoQCOM *out_info,
                          const VkBlitImageCubicWeightsInfoQCOM *in_info);

void
unwrap_VkBlitImageCubicWeightsInfoQCOM(struct temporary_objects*, struct wrapper_device *device,
                          VkBlitImageCubicWeightsInfoQCOM *out_info,
                          const VkBlitImageCubicWeightsInfoQCOM *in_info);


void
unwrap_VkBlitImageInfo2_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkBlitImageInfo2 *out_info,
                          const VkBlitImageInfo2 *in_info);

void
unwrap_VkBlitImageInfo2(struct temporary_objects*, struct wrapper_device *device,
                          VkBlitImageInfo2 *out_info,
                          const VkBlitImageInfo2 *in_info);


void
unwrap_VkBufferCaptureDescriptorDataInfoEXT_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkBufferCaptureDescriptorDataInfoEXT *out_info,
                          const VkBufferCaptureDescriptorDataInfoEXT *in_info);

void
unwrap_VkBufferCaptureDescriptorDataInfoEXT(struct temporary_objects*, struct wrapper_device *device,
                          VkBufferCaptureDescriptorDataInfoEXT *out_info,
                          const VkBufferCaptureDescriptorDataInfoEXT *in_info);


void
unwrap_VkBufferCopy2_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkBufferCopy2 *out_info,
                          const VkBufferCopy2 *in_info);

void
unwrap_VkBufferCopy2(struct temporary_objects*, struct wrapper_device *device,
                          VkBufferCopy2 *out_info,
                          const VkBufferCopy2 *in_info);


void
unwrap_VkBufferCreateInfo_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkBufferCreateInfo *out_info,
                          const VkBufferCreateInfo *in_info);

void
unwrap_VkBufferCreateInfo(struct temporary_objects*, struct wrapper_device *device,
                          VkBufferCreateInfo *out_info,
                          const VkBufferCreateInfo *in_info);


void
unwrap_VkBufferDeviceAddressCreateInfoEXT_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkBufferDeviceAddressCreateInfoEXT *out_info,
                          const VkBufferDeviceAddressCreateInfoEXT *in_info);

void
unwrap_VkBufferDeviceAddressCreateInfoEXT(struct temporary_objects*, struct wrapper_device *device,
                          VkBufferDeviceAddressCreateInfoEXT *out_info,
                          const VkBufferDeviceAddressCreateInfoEXT *in_info);


void
unwrap_VkBufferDeviceAddressInfo_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkBufferDeviceAddressInfo *out_info,
                          const VkBufferDeviceAddressInfo *in_info);

void
unwrap_VkBufferDeviceAddressInfo(struct temporary_objects*, struct wrapper_device *device,
                          VkBufferDeviceAddressInfo *out_info,
                          const VkBufferDeviceAddressInfo *in_info);


void
unwrap_VkBufferImageCopy2_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkBufferImageCopy2 *out_info,
                          const VkBufferImageCopy2 *in_info);

void
unwrap_VkBufferImageCopy2(struct temporary_objects*, struct wrapper_device *device,
                          VkBufferImageCopy2 *out_info,
                          const VkBufferImageCopy2 *in_info);


void
unwrap_VkBufferMemoryBarrier_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkBufferMemoryBarrier *out_info,
                          const VkBufferMemoryBarrier *in_info);

void
unwrap_VkBufferMemoryBarrier(struct temporary_objects*, struct wrapper_device *device,
                          VkBufferMemoryBarrier *out_info,
                          const VkBufferMemoryBarrier *in_info);


void
unwrap_VkBufferMemoryBarrier2_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkBufferMemoryBarrier2 *out_info,
                          const VkBufferMemoryBarrier2 *in_info);

void
unwrap_VkBufferMemoryBarrier2(struct temporary_objects*, struct wrapper_device *device,
                          VkBufferMemoryBarrier2 *out_info,
                          const VkBufferMemoryBarrier2 *in_info);


void
unwrap_VkBufferMemoryRequirementsInfo2_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkBufferMemoryRequirementsInfo2 *out_info,
                          const VkBufferMemoryRequirementsInfo2 *in_info);

void
unwrap_VkBufferMemoryRequirementsInfo2(struct temporary_objects*, struct wrapper_device *device,
                          VkBufferMemoryRequirementsInfo2 *out_info,
                          const VkBufferMemoryRequirementsInfo2 *in_info);


void
unwrap_VkBufferOpaqueCaptureAddressCreateInfo_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkBufferOpaqueCaptureAddressCreateInfo *out_info,
                          const VkBufferOpaqueCaptureAddressCreateInfo *in_info);

void
unwrap_VkBufferOpaqueCaptureAddressCreateInfo(struct temporary_objects*, struct wrapper_device *device,
                          VkBufferOpaqueCaptureAddressCreateInfo *out_info,
                          const VkBufferOpaqueCaptureAddressCreateInfo *in_info);


void
unwrap_VkBufferUsageFlags2CreateInfoKHR_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkBufferUsageFlags2CreateInfoKHR *out_info,
                          const VkBufferUsageFlags2CreateInfoKHR *in_info);

void
unwrap_VkBufferUsageFlags2CreateInfoKHR(struct temporary_objects*, struct wrapper_device *device,
                          VkBufferUsageFlags2CreateInfoKHR *out_info,
                          const VkBufferUsageFlags2CreateInfoKHR *in_info);


void
unwrap_VkBufferViewCreateInfo_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkBufferViewCreateInfo *out_info,
                          const VkBufferViewCreateInfo *in_info);

void
unwrap_VkBufferViewCreateInfo(struct temporary_objects*, struct wrapper_device *device,
                          VkBufferViewCreateInfo *out_info,
                          const VkBufferViewCreateInfo *in_info);


void
unwrap_VkCalibratedTimestampInfoKHR_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkCalibratedTimestampInfoKHR *out_info,
                          const VkCalibratedTimestampInfoKHR *in_info);

void
unwrap_VkCalibratedTimestampInfoKHR(struct temporary_objects*, struct wrapper_device *device,
                          VkCalibratedTimestampInfoKHR *out_info,
                          const VkCalibratedTimestampInfoKHR *in_info);


void
unwrap_VkCheckpointData2NV_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkCheckpointData2NV *out_info,
                          const VkCheckpointData2NV *in_info);

void
unwrap_VkCheckpointData2NV(struct temporary_objects*, struct wrapper_device *device,
                          VkCheckpointData2NV *out_info,
                          const VkCheckpointData2NV *in_info);


void
unwrap_VkCheckpointDataNV_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkCheckpointDataNV *out_info,
                          const VkCheckpointDataNV *in_info);

void
unwrap_VkCheckpointDataNV(struct temporary_objects*, struct wrapper_device *device,
                          VkCheckpointDataNV *out_info,
                          const VkCheckpointDataNV *in_info);


void
unwrap_VkCommandBufferAllocateInfo_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkCommandBufferAllocateInfo *out_info,
                          const VkCommandBufferAllocateInfo *in_info);

void
unwrap_VkCommandBufferAllocateInfo(struct temporary_objects*, struct wrapper_device *device,
                          VkCommandBufferAllocateInfo *out_info,
                          const VkCommandBufferAllocateInfo *in_info);


void
unwrap_VkCommandBufferBeginInfo_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkCommandBufferBeginInfo *out_info,
                          const VkCommandBufferBeginInfo *in_info);

void
unwrap_VkCommandBufferBeginInfo(struct temporary_objects*, struct wrapper_device *device,
                          VkCommandBufferBeginInfo *out_info,
                          const VkCommandBufferBeginInfo *in_info);


void
unwrap_VkCommandBufferInheritanceConditionalRenderingInfoEXT_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkCommandBufferInheritanceConditionalRenderingInfoEXT *out_info,
                          const VkCommandBufferInheritanceConditionalRenderingInfoEXT *in_info);

void
unwrap_VkCommandBufferInheritanceConditionalRenderingInfoEXT(struct temporary_objects*, struct wrapper_device *device,
                          VkCommandBufferInheritanceConditionalRenderingInfoEXT *out_info,
                          const VkCommandBufferInheritanceConditionalRenderingInfoEXT *in_info);


void
unwrap_VkCommandBufferInheritanceInfo_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkCommandBufferInheritanceInfo *out_info,
                          const VkCommandBufferInheritanceInfo *in_info);

void
unwrap_VkCommandBufferInheritanceInfo(struct temporary_objects*, struct wrapper_device *device,
                          VkCommandBufferInheritanceInfo *out_info,
                          const VkCommandBufferInheritanceInfo *in_info);


void
unwrap_VkCommandBufferInheritanceRenderPassTransformInfoQCOM_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkCommandBufferInheritanceRenderPassTransformInfoQCOM *out_info,
                          const VkCommandBufferInheritanceRenderPassTransformInfoQCOM *in_info);

void
unwrap_VkCommandBufferInheritanceRenderPassTransformInfoQCOM(struct temporary_objects*, struct wrapper_device *device,
                          VkCommandBufferInheritanceRenderPassTransformInfoQCOM *out_info,
                          const VkCommandBufferInheritanceRenderPassTransformInfoQCOM *in_info);


void
unwrap_VkCommandBufferInheritanceRenderingInfo_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkCommandBufferInheritanceRenderingInfo *out_info,
                          const VkCommandBufferInheritanceRenderingInfo *in_info);

void
unwrap_VkCommandBufferInheritanceRenderingInfo(struct temporary_objects*, struct wrapper_device *device,
                          VkCommandBufferInheritanceRenderingInfo *out_info,
                          const VkCommandBufferInheritanceRenderingInfo *in_info);


void
unwrap_VkCommandBufferInheritanceViewportScissorInfoNV_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkCommandBufferInheritanceViewportScissorInfoNV *out_info,
                          const VkCommandBufferInheritanceViewportScissorInfoNV *in_info);

void
unwrap_VkCommandBufferInheritanceViewportScissorInfoNV(struct temporary_objects*, struct wrapper_device *device,
                          VkCommandBufferInheritanceViewportScissorInfoNV *out_info,
                          const VkCommandBufferInheritanceViewportScissorInfoNV *in_info);


void
unwrap_VkCommandBufferSubmitInfo_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkCommandBufferSubmitInfo *out_info,
                          const VkCommandBufferSubmitInfo *in_info);

void
unwrap_VkCommandBufferSubmitInfo(struct temporary_objects*, struct wrapper_device *device,
                          VkCommandBufferSubmitInfo *out_info,
                          const VkCommandBufferSubmitInfo *in_info);


void
unwrap_VkCommandPoolCreateInfo_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkCommandPoolCreateInfo *out_info,
                          const VkCommandPoolCreateInfo *in_info);

void
unwrap_VkCommandPoolCreateInfo(struct temporary_objects*, struct wrapper_device *device,
                          VkCommandPoolCreateInfo *out_info,
                          const VkCommandPoolCreateInfo *in_info);


void
unwrap_VkComputePipelineCreateInfo_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkComputePipelineCreateInfo *out_info,
                          const VkComputePipelineCreateInfo *in_info);

void
unwrap_VkComputePipelineCreateInfo(struct temporary_objects*, struct wrapper_device *device,
                          VkComputePipelineCreateInfo *out_info,
                          const VkComputePipelineCreateInfo *in_info);


void
unwrap_VkComputePipelineIndirectBufferInfoNV_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkComputePipelineIndirectBufferInfoNV *out_info,
                          const VkComputePipelineIndirectBufferInfoNV *in_info);

void
unwrap_VkComputePipelineIndirectBufferInfoNV(struct temporary_objects*, struct wrapper_device *device,
                          VkComputePipelineIndirectBufferInfoNV *out_info,
                          const VkComputePipelineIndirectBufferInfoNV *in_info);


void
unwrap_VkConditionalRenderingBeginInfoEXT_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkConditionalRenderingBeginInfoEXT *out_info,
                          const VkConditionalRenderingBeginInfoEXT *in_info);

void
unwrap_VkConditionalRenderingBeginInfoEXT(struct temporary_objects*, struct wrapper_device *device,
                          VkConditionalRenderingBeginInfoEXT *out_info,
                          const VkConditionalRenderingBeginInfoEXT *in_info);


void
unwrap_VkCooperativeMatrixPropertiesKHR_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkCooperativeMatrixPropertiesKHR *out_info,
                          const VkCooperativeMatrixPropertiesKHR *in_info);

void
unwrap_VkCooperativeMatrixPropertiesKHR(struct temporary_objects*, struct wrapper_device *device,
                          VkCooperativeMatrixPropertiesKHR *out_info,
                          const VkCooperativeMatrixPropertiesKHR *in_info);


void
unwrap_VkCooperativeMatrixPropertiesNV_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkCooperativeMatrixPropertiesNV *out_info,
                          const VkCooperativeMatrixPropertiesNV *in_info);

void
unwrap_VkCooperativeMatrixPropertiesNV(struct temporary_objects*, struct wrapper_device *device,
                          VkCooperativeMatrixPropertiesNV *out_info,
                          const VkCooperativeMatrixPropertiesNV *in_info);


void
unwrap_VkCopyAccelerationStructureInfoKHR_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkCopyAccelerationStructureInfoKHR *out_info,
                          const VkCopyAccelerationStructureInfoKHR *in_info);

void
unwrap_VkCopyAccelerationStructureInfoKHR(struct temporary_objects*, struct wrapper_device *device,
                          VkCopyAccelerationStructureInfoKHR *out_info,
                          const VkCopyAccelerationStructureInfoKHR *in_info);


void
unwrap_VkCopyAccelerationStructureToMemoryInfoKHR_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkCopyAccelerationStructureToMemoryInfoKHR *out_info,
                          const VkCopyAccelerationStructureToMemoryInfoKHR *in_info);

void
unwrap_VkCopyAccelerationStructureToMemoryInfoKHR(struct temporary_objects*, struct wrapper_device *device,
                          VkCopyAccelerationStructureToMemoryInfoKHR *out_info,
                          const VkCopyAccelerationStructureToMemoryInfoKHR *in_info);


void
unwrap_VkCopyBufferInfo2_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkCopyBufferInfo2 *out_info,
                          const VkCopyBufferInfo2 *in_info);

void
unwrap_VkCopyBufferInfo2(struct temporary_objects*, struct wrapper_device *device,
                          VkCopyBufferInfo2 *out_info,
                          const VkCopyBufferInfo2 *in_info);


void
unwrap_VkCopyBufferToImageInfo2_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkCopyBufferToImageInfo2 *out_info,
                          const VkCopyBufferToImageInfo2 *in_info);

void
unwrap_VkCopyBufferToImageInfo2(struct temporary_objects*, struct wrapper_device *device,
                          VkCopyBufferToImageInfo2 *out_info,
                          const VkCopyBufferToImageInfo2 *in_info);


void
unwrap_VkCopyCommandTransformInfoQCOM_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkCopyCommandTransformInfoQCOM *out_info,
                          const VkCopyCommandTransformInfoQCOM *in_info);

void
unwrap_VkCopyCommandTransformInfoQCOM(struct temporary_objects*, struct wrapper_device *device,
                          VkCopyCommandTransformInfoQCOM *out_info,
                          const VkCopyCommandTransformInfoQCOM *in_info);


void
unwrap_VkCopyDescriptorSet_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkCopyDescriptorSet *out_info,
                          const VkCopyDescriptorSet *in_info);

void
unwrap_VkCopyDescriptorSet(struct temporary_objects*, struct wrapper_device *device,
                          VkCopyDescriptorSet *out_info,
                          const VkCopyDescriptorSet *in_info);


void
unwrap_VkCopyImageInfo2_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkCopyImageInfo2 *out_info,
                          const VkCopyImageInfo2 *in_info);

void
unwrap_VkCopyImageInfo2(struct temporary_objects*, struct wrapper_device *device,
                          VkCopyImageInfo2 *out_info,
                          const VkCopyImageInfo2 *in_info);


void
unwrap_VkCopyImageToBufferInfo2_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkCopyImageToBufferInfo2 *out_info,
                          const VkCopyImageToBufferInfo2 *in_info);

void
unwrap_VkCopyImageToBufferInfo2(struct temporary_objects*, struct wrapper_device *device,
                          VkCopyImageToBufferInfo2 *out_info,
                          const VkCopyImageToBufferInfo2 *in_info);


void
unwrap_VkCopyImageToImageInfoEXT_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkCopyImageToImageInfoEXT *out_info,
                          const VkCopyImageToImageInfoEXT *in_info);

void
unwrap_VkCopyImageToImageInfoEXT(struct temporary_objects*, struct wrapper_device *device,
                          VkCopyImageToImageInfoEXT *out_info,
                          const VkCopyImageToImageInfoEXT *in_info);


void
unwrap_VkCopyImageToMemoryInfoEXT_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkCopyImageToMemoryInfoEXT *out_info,
                          const VkCopyImageToMemoryInfoEXT *in_info);

void
unwrap_VkCopyImageToMemoryInfoEXT(struct temporary_objects*, struct wrapper_device *device,
                          VkCopyImageToMemoryInfoEXT *out_info,
                          const VkCopyImageToMemoryInfoEXT *in_info);


void
unwrap_VkCopyMemoryToAccelerationStructureInfoKHR_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkCopyMemoryToAccelerationStructureInfoKHR *out_info,
                          const VkCopyMemoryToAccelerationStructureInfoKHR *in_info);

void
unwrap_VkCopyMemoryToAccelerationStructureInfoKHR(struct temporary_objects*, struct wrapper_device *device,
                          VkCopyMemoryToAccelerationStructureInfoKHR *out_info,
                          const VkCopyMemoryToAccelerationStructureInfoKHR *in_info);


void
unwrap_VkCopyMemoryToImageInfoEXT_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkCopyMemoryToImageInfoEXT *out_info,
                          const VkCopyMemoryToImageInfoEXT *in_info);

void
unwrap_VkCopyMemoryToImageInfoEXT(struct temporary_objects*, struct wrapper_device *device,
                          VkCopyMemoryToImageInfoEXT *out_info,
                          const VkCopyMemoryToImageInfoEXT *in_info);


void
unwrap_VkCopyMemoryToMicromapInfoEXT_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkCopyMemoryToMicromapInfoEXT *out_info,
                          const VkCopyMemoryToMicromapInfoEXT *in_info);

void
unwrap_VkCopyMemoryToMicromapInfoEXT(struct temporary_objects*, struct wrapper_device *device,
                          VkCopyMemoryToMicromapInfoEXT *out_info,
                          const VkCopyMemoryToMicromapInfoEXT *in_info);


void
unwrap_VkCopyMicromapInfoEXT_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkCopyMicromapInfoEXT *out_info,
                          const VkCopyMicromapInfoEXT *in_info);

void
unwrap_VkCopyMicromapInfoEXT(struct temporary_objects*, struct wrapper_device *device,
                          VkCopyMicromapInfoEXT *out_info,
                          const VkCopyMicromapInfoEXT *in_info);


void
unwrap_VkCopyMicromapToMemoryInfoEXT_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkCopyMicromapToMemoryInfoEXT *out_info,
                          const VkCopyMicromapToMemoryInfoEXT *in_info);

void
unwrap_VkCopyMicromapToMemoryInfoEXT(struct temporary_objects*, struct wrapper_device *device,
                          VkCopyMicromapToMemoryInfoEXT *out_info,
                          const VkCopyMicromapToMemoryInfoEXT *in_info);


void
unwrap_VkCuFunctionCreateInfoNVX_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkCuFunctionCreateInfoNVX *out_info,
                          const VkCuFunctionCreateInfoNVX *in_info);

void
unwrap_VkCuFunctionCreateInfoNVX(struct temporary_objects*, struct wrapper_device *device,
                          VkCuFunctionCreateInfoNVX *out_info,
                          const VkCuFunctionCreateInfoNVX *in_info);


void
unwrap_VkCuModuleCreateInfoNVX_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkCuModuleCreateInfoNVX *out_info,
                          const VkCuModuleCreateInfoNVX *in_info);

void
unwrap_VkCuModuleCreateInfoNVX(struct temporary_objects*, struct wrapper_device *device,
                          VkCuModuleCreateInfoNVX *out_info,
                          const VkCuModuleCreateInfoNVX *in_info);


void
unwrap_VkCudaFunctionCreateInfoNV_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkCudaFunctionCreateInfoNV *out_info,
                          const VkCudaFunctionCreateInfoNV *in_info);

void
unwrap_VkCudaFunctionCreateInfoNV(struct temporary_objects*, struct wrapper_device *device,
                          VkCudaFunctionCreateInfoNV *out_info,
                          const VkCudaFunctionCreateInfoNV *in_info);


void
unwrap_VkCudaModuleCreateInfoNV_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkCudaModuleCreateInfoNV *out_info,
                          const VkCudaModuleCreateInfoNV *in_info);

void
unwrap_VkCudaModuleCreateInfoNV(struct temporary_objects*, struct wrapper_device *device,
                          VkCudaModuleCreateInfoNV *out_info,
                          const VkCudaModuleCreateInfoNV *in_info);


void
unwrap_VkDebugMarkerMarkerInfoEXT_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkDebugMarkerMarkerInfoEXT *out_info,
                          const VkDebugMarkerMarkerInfoEXT *in_info);

void
unwrap_VkDebugMarkerMarkerInfoEXT(struct temporary_objects*, struct wrapper_device *device,
                          VkDebugMarkerMarkerInfoEXT *out_info,
                          const VkDebugMarkerMarkerInfoEXT *in_info);


void
unwrap_VkDebugMarkerObjectNameInfoEXT_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkDebugMarkerObjectNameInfoEXT *out_info,
                          const VkDebugMarkerObjectNameInfoEXT *in_info);

void
unwrap_VkDebugMarkerObjectNameInfoEXT(struct temporary_objects*, struct wrapper_device *device,
                          VkDebugMarkerObjectNameInfoEXT *out_info,
                          const VkDebugMarkerObjectNameInfoEXT *in_info);


void
unwrap_VkDebugMarkerObjectTagInfoEXT_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkDebugMarkerObjectTagInfoEXT *out_info,
                          const VkDebugMarkerObjectTagInfoEXT *in_info);

void
unwrap_VkDebugMarkerObjectTagInfoEXT(struct temporary_objects*, struct wrapper_device *device,
                          VkDebugMarkerObjectTagInfoEXT *out_info,
                          const VkDebugMarkerObjectTagInfoEXT *in_info);


void
unwrap_VkDebugReportCallbackCreateInfoEXT_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkDebugReportCallbackCreateInfoEXT *out_info,
                          const VkDebugReportCallbackCreateInfoEXT *in_info);

void
unwrap_VkDebugReportCallbackCreateInfoEXT(struct temporary_objects*, struct wrapper_device *device,
                          VkDebugReportCallbackCreateInfoEXT *out_info,
                          const VkDebugReportCallbackCreateInfoEXT *in_info);


void
unwrap_VkDebugUtilsLabelEXT_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkDebugUtilsLabelEXT *out_info,
                          const VkDebugUtilsLabelEXT *in_info);

void
unwrap_VkDebugUtilsLabelEXT(struct temporary_objects*, struct wrapper_device *device,
                          VkDebugUtilsLabelEXT *out_info,
                          const VkDebugUtilsLabelEXT *in_info);


void
unwrap_VkDebugUtilsMessengerCallbackDataEXT_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkDebugUtilsMessengerCallbackDataEXT *out_info,
                          const VkDebugUtilsMessengerCallbackDataEXT *in_info);

void
unwrap_VkDebugUtilsMessengerCallbackDataEXT(struct temporary_objects*, struct wrapper_device *device,
                          VkDebugUtilsMessengerCallbackDataEXT *out_info,
                          const VkDebugUtilsMessengerCallbackDataEXT *in_info);


void
unwrap_VkDebugUtilsMessengerCreateInfoEXT_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkDebugUtilsMessengerCreateInfoEXT *out_info,
                          const VkDebugUtilsMessengerCreateInfoEXT *in_info);

void
unwrap_VkDebugUtilsMessengerCreateInfoEXT(struct temporary_objects*, struct wrapper_device *device,
                          VkDebugUtilsMessengerCreateInfoEXT *out_info,
                          const VkDebugUtilsMessengerCreateInfoEXT *in_info);


void
unwrap_VkDebugUtilsObjectNameInfoEXT_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkDebugUtilsObjectNameInfoEXT *out_info,
                          const VkDebugUtilsObjectNameInfoEXT *in_info);

void
unwrap_VkDebugUtilsObjectNameInfoEXT(struct temporary_objects*, struct wrapper_device *device,
                          VkDebugUtilsObjectNameInfoEXT *out_info,
                          const VkDebugUtilsObjectNameInfoEXT *in_info);


void
unwrap_VkDebugUtilsObjectTagInfoEXT_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkDebugUtilsObjectTagInfoEXT *out_info,
                          const VkDebugUtilsObjectTagInfoEXT *in_info);

void
unwrap_VkDebugUtilsObjectTagInfoEXT(struct temporary_objects*, struct wrapper_device *device,
                          VkDebugUtilsObjectTagInfoEXT *out_info,
                          const VkDebugUtilsObjectTagInfoEXT *in_info);


void
unwrap_VkDedicatedAllocationBufferCreateInfoNV_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkDedicatedAllocationBufferCreateInfoNV *out_info,
                          const VkDedicatedAllocationBufferCreateInfoNV *in_info);

void
unwrap_VkDedicatedAllocationBufferCreateInfoNV(struct temporary_objects*, struct wrapper_device *device,
                          VkDedicatedAllocationBufferCreateInfoNV *out_info,
                          const VkDedicatedAllocationBufferCreateInfoNV *in_info);


void
unwrap_VkDedicatedAllocationImageCreateInfoNV_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkDedicatedAllocationImageCreateInfoNV *out_info,
                          const VkDedicatedAllocationImageCreateInfoNV *in_info);

void
unwrap_VkDedicatedAllocationImageCreateInfoNV(struct temporary_objects*, struct wrapper_device *device,
                          VkDedicatedAllocationImageCreateInfoNV *out_info,
                          const VkDedicatedAllocationImageCreateInfoNV *in_info);


void
unwrap_VkDedicatedAllocationMemoryAllocateInfoNV_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkDedicatedAllocationMemoryAllocateInfoNV *out_info,
                          const VkDedicatedAllocationMemoryAllocateInfoNV *in_info);

void
unwrap_VkDedicatedAllocationMemoryAllocateInfoNV(struct temporary_objects*, struct wrapper_device *device,
                          VkDedicatedAllocationMemoryAllocateInfoNV *out_info,
                          const VkDedicatedAllocationMemoryAllocateInfoNV *in_info);


void
unwrap_VkDependencyInfo_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkDependencyInfo *out_info,
                          const VkDependencyInfo *in_info);

void
unwrap_VkDependencyInfo(struct temporary_objects*, struct wrapper_device *device,
                          VkDependencyInfo *out_info,
                          const VkDependencyInfo *in_info);


void
unwrap_VkDepthBiasInfoEXT_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkDepthBiasInfoEXT *out_info,
                          const VkDepthBiasInfoEXT *in_info);

void
unwrap_VkDepthBiasInfoEXT(struct temporary_objects*, struct wrapper_device *device,
                          VkDepthBiasInfoEXT *out_info,
                          const VkDepthBiasInfoEXT *in_info);


void
unwrap_VkDepthBiasRepresentationInfoEXT_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkDepthBiasRepresentationInfoEXT *out_info,
                          const VkDepthBiasRepresentationInfoEXT *in_info);

void
unwrap_VkDepthBiasRepresentationInfoEXT(struct temporary_objects*, struct wrapper_device *device,
                          VkDepthBiasRepresentationInfoEXT *out_info,
                          const VkDepthBiasRepresentationInfoEXT *in_info);


void
unwrap_VkDescriptorAddressInfoEXT_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkDescriptorAddressInfoEXT *out_info,
                          const VkDescriptorAddressInfoEXT *in_info);

void
unwrap_VkDescriptorAddressInfoEXT(struct temporary_objects*, struct wrapper_device *device,
                          VkDescriptorAddressInfoEXT *out_info,
                          const VkDescriptorAddressInfoEXT *in_info);


void
unwrap_VkDescriptorBufferBindingInfoEXT_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkDescriptorBufferBindingInfoEXT *out_info,
                          const VkDescriptorBufferBindingInfoEXT *in_info);

void
unwrap_VkDescriptorBufferBindingInfoEXT(struct temporary_objects*, struct wrapper_device *device,
                          VkDescriptorBufferBindingInfoEXT *out_info,
                          const VkDescriptorBufferBindingInfoEXT *in_info);


void
unwrap_VkDescriptorBufferBindingPushDescriptorBufferHandleEXT_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkDescriptorBufferBindingPushDescriptorBufferHandleEXT *out_info,
                          const VkDescriptorBufferBindingPushDescriptorBufferHandleEXT *in_info);

void
unwrap_VkDescriptorBufferBindingPushDescriptorBufferHandleEXT(struct temporary_objects*, struct wrapper_device *device,
                          VkDescriptorBufferBindingPushDescriptorBufferHandleEXT *out_info,
                          const VkDescriptorBufferBindingPushDescriptorBufferHandleEXT *in_info);


void
unwrap_VkDescriptorGetInfoEXT_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkDescriptorGetInfoEXT *out_info,
                          const VkDescriptorGetInfoEXT *in_info);

void
unwrap_VkDescriptorGetInfoEXT(struct temporary_objects*, struct wrapper_device *device,
                          VkDescriptorGetInfoEXT *out_info,
                          const VkDescriptorGetInfoEXT *in_info);


void
unwrap_VkDescriptorPoolCreateInfo_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkDescriptorPoolCreateInfo *out_info,
                          const VkDescriptorPoolCreateInfo *in_info);

void
unwrap_VkDescriptorPoolCreateInfo(struct temporary_objects*, struct wrapper_device *device,
                          VkDescriptorPoolCreateInfo *out_info,
                          const VkDescriptorPoolCreateInfo *in_info);


void
unwrap_VkDescriptorPoolInlineUniformBlockCreateInfo_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkDescriptorPoolInlineUniformBlockCreateInfo *out_info,
                          const VkDescriptorPoolInlineUniformBlockCreateInfo *in_info);

void
unwrap_VkDescriptorPoolInlineUniformBlockCreateInfo(struct temporary_objects*, struct wrapper_device *device,
                          VkDescriptorPoolInlineUniformBlockCreateInfo *out_info,
                          const VkDescriptorPoolInlineUniformBlockCreateInfo *in_info);


void
unwrap_VkDescriptorSetAllocateInfo_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkDescriptorSetAllocateInfo *out_info,
                          const VkDescriptorSetAllocateInfo *in_info);

void
unwrap_VkDescriptorSetAllocateInfo(struct temporary_objects*, struct wrapper_device *device,
                          VkDescriptorSetAllocateInfo *out_info,
                          const VkDescriptorSetAllocateInfo *in_info);


void
unwrap_VkDescriptorSetBindingReferenceVALVE_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkDescriptorSetBindingReferenceVALVE *out_info,
                          const VkDescriptorSetBindingReferenceVALVE *in_info);

void
unwrap_VkDescriptorSetBindingReferenceVALVE(struct temporary_objects*, struct wrapper_device *device,
                          VkDescriptorSetBindingReferenceVALVE *out_info,
                          const VkDescriptorSetBindingReferenceVALVE *in_info);


void
unwrap_VkDescriptorSetLayoutBindingFlagsCreateInfo_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkDescriptorSetLayoutBindingFlagsCreateInfo *out_info,
                          const VkDescriptorSetLayoutBindingFlagsCreateInfo *in_info);

void
unwrap_VkDescriptorSetLayoutBindingFlagsCreateInfo(struct temporary_objects*, struct wrapper_device *device,
                          VkDescriptorSetLayoutBindingFlagsCreateInfo *out_info,
                          const VkDescriptorSetLayoutBindingFlagsCreateInfo *in_info);


void
unwrap_VkDescriptorSetLayoutCreateInfo_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkDescriptorSetLayoutCreateInfo *out_info,
                          const VkDescriptorSetLayoutCreateInfo *in_info);

void
unwrap_VkDescriptorSetLayoutCreateInfo(struct temporary_objects*, struct wrapper_device *device,
                          VkDescriptorSetLayoutCreateInfo *out_info,
                          const VkDescriptorSetLayoutCreateInfo *in_info);


void
unwrap_VkDescriptorSetLayoutHostMappingInfoVALVE_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkDescriptorSetLayoutHostMappingInfoVALVE *out_info,
                          const VkDescriptorSetLayoutHostMappingInfoVALVE *in_info);

void
unwrap_VkDescriptorSetLayoutHostMappingInfoVALVE(struct temporary_objects*, struct wrapper_device *device,
                          VkDescriptorSetLayoutHostMappingInfoVALVE *out_info,
                          const VkDescriptorSetLayoutHostMappingInfoVALVE *in_info);


void
unwrap_VkDescriptorSetLayoutSupport_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkDescriptorSetLayoutSupport *out_info,
                          const VkDescriptorSetLayoutSupport *in_info);

void
unwrap_VkDescriptorSetLayoutSupport(struct temporary_objects*, struct wrapper_device *device,
                          VkDescriptorSetLayoutSupport *out_info,
                          const VkDescriptorSetLayoutSupport *in_info);


void
unwrap_VkDescriptorSetVariableDescriptorCountAllocateInfo_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkDescriptorSetVariableDescriptorCountAllocateInfo *out_info,
                          const VkDescriptorSetVariableDescriptorCountAllocateInfo *in_info);

void
unwrap_VkDescriptorSetVariableDescriptorCountAllocateInfo(struct temporary_objects*, struct wrapper_device *device,
                          VkDescriptorSetVariableDescriptorCountAllocateInfo *out_info,
                          const VkDescriptorSetVariableDescriptorCountAllocateInfo *in_info);


void
unwrap_VkDescriptorSetVariableDescriptorCountLayoutSupport_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkDescriptorSetVariableDescriptorCountLayoutSupport *out_info,
                          const VkDescriptorSetVariableDescriptorCountLayoutSupport *in_info);

void
unwrap_VkDescriptorSetVariableDescriptorCountLayoutSupport(struct temporary_objects*, struct wrapper_device *device,
                          VkDescriptorSetVariableDescriptorCountLayoutSupport *out_info,
                          const VkDescriptorSetVariableDescriptorCountLayoutSupport *in_info);


void
unwrap_VkDescriptorUpdateTemplateCreateInfo_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkDescriptorUpdateTemplateCreateInfo *out_info,
                          const VkDescriptorUpdateTemplateCreateInfo *in_info);

void
unwrap_VkDescriptorUpdateTemplateCreateInfo(struct temporary_objects*, struct wrapper_device *device,
                          VkDescriptorUpdateTemplateCreateInfo *out_info,
                          const VkDescriptorUpdateTemplateCreateInfo *in_info);


void
unwrap_VkDeviceAddressBindingCallbackDataEXT_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkDeviceAddressBindingCallbackDataEXT *out_info,
                          const VkDeviceAddressBindingCallbackDataEXT *in_info);

void
unwrap_VkDeviceAddressBindingCallbackDataEXT(struct temporary_objects*, struct wrapper_device *device,
                          VkDeviceAddressBindingCallbackDataEXT *out_info,
                          const VkDeviceAddressBindingCallbackDataEXT *in_info);


void
unwrap_VkDeviceBufferMemoryRequirements_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkDeviceBufferMemoryRequirements *out_info,
                          const VkDeviceBufferMemoryRequirements *in_info);

void
unwrap_VkDeviceBufferMemoryRequirements(struct temporary_objects*, struct wrapper_device *device,
                          VkDeviceBufferMemoryRequirements *out_info,
                          const VkDeviceBufferMemoryRequirements *in_info);


void
unwrap_VkDeviceCreateInfo_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkDeviceCreateInfo *out_info,
                          const VkDeviceCreateInfo *in_info);

void
unwrap_VkDeviceCreateInfo(struct temporary_objects*, struct wrapper_device *device,
                          VkDeviceCreateInfo *out_info,
                          const VkDeviceCreateInfo *in_info);


void
unwrap_VkDeviceDeviceMemoryReportCreateInfoEXT_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkDeviceDeviceMemoryReportCreateInfoEXT *out_info,
                          const VkDeviceDeviceMemoryReportCreateInfoEXT *in_info);

void
unwrap_VkDeviceDeviceMemoryReportCreateInfoEXT(struct temporary_objects*, struct wrapper_device *device,
                          VkDeviceDeviceMemoryReportCreateInfoEXT *out_info,
                          const VkDeviceDeviceMemoryReportCreateInfoEXT *in_info);


void
unwrap_VkDeviceDiagnosticsConfigCreateInfoNV_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkDeviceDiagnosticsConfigCreateInfoNV *out_info,
                          const VkDeviceDiagnosticsConfigCreateInfoNV *in_info);

void
unwrap_VkDeviceDiagnosticsConfigCreateInfoNV(struct temporary_objects*, struct wrapper_device *device,
                          VkDeviceDiagnosticsConfigCreateInfoNV *out_info,
                          const VkDeviceDiagnosticsConfigCreateInfoNV *in_info);


void
unwrap_VkDeviceEventInfoEXT_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkDeviceEventInfoEXT *out_info,
                          const VkDeviceEventInfoEXT *in_info);

void
unwrap_VkDeviceEventInfoEXT(struct temporary_objects*, struct wrapper_device *device,
                          VkDeviceEventInfoEXT *out_info,
                          const VkDeviceEventInfoEXT *in_info);


void
unwrap_VkDeviceFaultCountsEXT_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkDeviceFaultCountsEXT *out_info,
                          const VkDeviceFaultCountsEXT *in_info);

void
unwrap_VkDeviceFaultCountsEXT(struct temporary_objects*, struct wrapper_device *device,
                          VkDeviceFaultCountsEXT *out_info,
                          const VkDeviceFaultCountsEXT *in_info);


void
unwrap_VkDeviceFaultInfoEXT_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkDeviceFaultInfoEXT *out_info,
                          const VkDeviceFaultInfoEXT *in_info);

void
unwrap_VkDeviceFaultInfoEXT(struct temporary_objects*, struct wrapper_device *device,
                          VkDeviceFaultInfoEXT *out_info,
                          const VkDeviceFaultInfoEXT *in_info);


void
unwrap_VkDeviceGroupBindSparseInfo_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkDeviceGroupBindSparseInfo *out_info,
                          const VkDeviceGroupBindSparseInfo *in_info);

void
unwrap_VkDeviceGroupBindSparseInfo(struct temporary_objects*, struct wrapper_device *device,
                          VkDeviceGroupBindSparseInfo *out_info,
                          const VkDeviceGroupBindSparseInfo *in_info);


void
unwrap_VkDeviceGroupCommandBufferBeginInfo_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkDeviceGroupCommandBufferBeginInfo *out_info,
                          const VkDeviceGroupCommandBufferBeginInfo *in_info);

void
unwrap_VkDeviceGroupCommandBufferBeginInfo(struct temporary_objects*, struct wrapper_device *device,
                          VkDeviceGroupCommandBufferBeginInfo *out_info,
                          const VkDeviceGroupCommandBufferBeginInfo *in_info);


void
unwrap_VkDeviceGroupDeviceCreateInfo_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkDeviceGroupDeviceCreateInfo *out_info,
                          const VkDeviceGroupDeviceCreateInfo *in_info);

void
unwrap_VkDeviceGroupDeviceCreateInfo(struct temporary_objects*, struct wrapper_device *device,
                          VkDeviceGroupDeviceCreateInfo *out_info,
                          const VkDeviceGroupDeviceCreateInfo *in_info);


void
unwrap_VkDeviceGroupPresentCapabilitiesKHR_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkDeviceGroupPresentCapabilitiesKHR *out_info,
                          const VkDeviceGroupPresentCapabilitiesKHR *in_info);

void
unwrap_VkDeviceGroupPresentCapabilitiesKHR(struct temporary_objects*, struct wrapper_device *device,
                          VkDeviceGroupPresentCapabilitiesKHR *out_info,
                          const VkDeviceGroupPresentCapabilitiesKHR *in_info);


void
unwrap_VkDeviceGroupPresentInfoKHR_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkDeviceGroupPresentInfoKHR *out_info,
                          const VkDeviceGroupPresentInfoKHR *in_info);

void
unwrap_VkDeviceGroupPresentInfoKHR(struct temporary_objects*, struct wrapper_device *device,
                          VkDeviceGroupPresentInfoKHR *out_info,
                          const VkDeviceGroupPresentInfoKHR *in_info);


void
unwrap_VkDeviceGroupRenderPassBeginInfo_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkDeviceGroupRenderPassBeginInfo *out_info,
                          const VkDeviceGroupRenderPassBeginInfo *in_info);

void
unwrap_VkDeviceGroupRenderPassBeginInfo(struct temporary_objects*, struct wrapper_device *device,
                          VkDeviceGroupRenderPassBeginInfo *out_info,
                          const VkDeviceGroupRenderPassBeginInfo *in_info);


void
unwrap_VkDeviceGroupSubmitInfo_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkDeviceGroupSubmitInfo *out_info,
                          const VkDeviceGroupSubmitInfo *in_info);

void
unwrap_VkDeviceGroupSubmitInfo(struct temporary_objects*, struct wrapper_device *device,
                          VkDeviceGroupSubmitInfo *out_info,
                          const VkDeviceGroupSubmitInfo *in_info);


void
unwrap_VkDeviceGroupSwapchainCreateInfoKHR_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkDeviceGroupSwapchainCreateInfoKHR *out_info,
                          const VkDeviceGroupSwapchainCreateInfoKHR *in_info);

void
unwrap_VkDeviceGroupSwapchainCreateInfoKHR(struct temporary_objects*, struct wrapper_device *device,
                          VkDeviceGroupSwapchainCreateInfoKHR *out_info,
                          const VkDeviceGroupSwapchainCreateInfoKHR *in_info);


void
unwrap_VkDeviceImageMemoryRequirements_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkDeviceImageMemoryRequirements *out_info,
                          const VkDeviceImageMemoryRequirements *in_info);

void
unwrap_VkDeviceImageMemoryRequirements(struct temporary_objects*, struct wrapper_device *device,
                          VkDeviceImageMemoryRequirements *out_info,
                          const VkDeviceImageMemoryRequirements *in_info);


void
unwrap_VkDeviceImageSubresourceInfoKHR_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkDeviceImageSubresourceInfoKHR *out_info,
                          const VkDeviceImageSubresourceInfoKHR *in_info);

void
unwrap_VkDeviceImageSubresourceInfoKHR(struct temporary_objects*, struct wrapper_device *device,
                          VkDeviceImageSubresourceInfoKHR *out_info,
                          const VkDeviceImageSubresourceInfoKHR *in_info);


void
unwrap_VkDeviceMemoryOpaqueCaptureAddressInfo_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkDeviceMemoryOpaqueCaptureAddressInfo *out_info,
                          const VkDeviceMemoryOpaqueCaptureAddressInfo *in_info);

void
unwrap_VkDeviceMemoryOpaqueCaptureAddressInfo(struct temporary_objects*, struct wrapper_device *device,
                          VkDeviceMemoryOpaqueCaptureAddressInfo *out_info,
                          const VkDeviceMemoryOpaqueCaptureAddressInfo *in_info);


void
unwrap_VkDeviceMemoryOverallocationCreateInfoAMD_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkDeviceMemoryOverallocationCreateInfoAMD *out_info,
                          const VkDeviceMemoryOverallocationCreateInfoAMD *in_info);

void
unwrap_VkDeviceMemoryOverallocationCreateInfoAMD(struct temporary_objects*, struct wrapper_device *device,
                          VkDeviceMemoryOverallocationCreateInfoAMD *out_info,
                          const VkDeviceMemoryOverallocationCreateInfoAMD *in_info);


void
unwrap_VkDeviceMemoryReportCallbackDataEXT_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkDeviceMemoryReportCallbackDataEXT *out_info,
                          const VkDeviceMemoryReportCallbackDataEXT *in_info);

void
unwrap_VkDeviceMemoryReportCallbackDataEXT(struct temporary_objects*, struct wrapper_device *device,
                          VkDeviceMemoryReportCallbackDataEXT *out_info,
                          const VkDeviceMemoryReportCallbackDataEXT *in_info);


void
unwrap_VkDevicePrivateDataCreateInfo_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkDevicePrivateDataCreateInfo *out_info,
                          const VkDevicePrivateDataCreateInfo *in_info);

void
unwrap_VkDevicePrivateDataCreateInfo(struct temporary_objects*, struct wrapper_device *device,
                          VkDevicePrivateDataCreateInfo *out_info,
                          const VkDevicePrivateDataCreateInfo *in_info);


void
unwrap_VkDeviceQueueCreateInfo_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkDeviceQueueCreateInfo *out_info,
                          const VkDeviceQueueCreateInfo *in_info);

void
unwrap_VkDeviceQueueCreateInfo(struct temporary_objects*, struct wrapper_device *device,
                          VkDeviceQueueCreateInfo *out_info,
                          const VkDeviceQueueCreateInfo *in_info);


void
unwrap_VkDeviceQueueGlobalPriorityCreateInfoKHR_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkDeviceQueueGlobalPriorityCreateInfoKHR *out_info,
                          const VkDeviceQueueGlobalPriorityCreateInfoKHR *in_info);

void
unwrap_VkDeviceQueueGlobalPriorityCreateInfoKHR(struct temporary_objects*, struct wrapper_device *device,
                          VkDeviceQueueGlobalPriorityCreateInfoKHR *out_info,
                          const VkDeviceQueueGlobalPriorityCreateInfoKHR *in_info);


void
unwrap_VkDeviceQueueInfo2_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkDeviceQueueInfo2 *out_info,
                          const VkDeviceQueueInfo2 *in_info);

void
unwrap_VkDeviceQueueInfo2(struct temporary_objects*, struct wrapper_device *device,
                          VkDeviceQueueInfo2 *out_info,
                          const VkDeviceQueueInfo2 *in_info);


void
unwrap_VkDeviceQueueShaderCoreControlCreateInfoARM_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkDeviceQueueShaderCoreControlCreateInfoARM *out_info,
                          const VkDeviceQueueShaderCoreControlCreateInfoARM *in_info);

void
unwrap_VkDeviceQueueShaderCoreControlCreateInfoARM(struct temporary_objects*, struct wrapper_device *device,
                          VkDeviceQueueShaderCoreControlCreateInfoARM *out_info,
                          const VkDeviceQueueShaderCoreControlCreateInfoARM *in_info);


void
unwrap_VkDirectDriverLoadingInfoLUNARG_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkDirectDriverLoadingInfoLUNARG *out_info,
                          const VkDirectDriverLoadingInfoLUNARG *in_info);

void
unwrap_VkDirectDriverLoadingInfoLUNARG(struct temporary_objects*, struct wrapper_device *device,
                          VkDirectDriverLoadingInfoLUNARG *out_info,
                          const VkDirectDriverLoadingInfoLUNARG *in_info);


void
unwrap_VkDirectDriverLoadingListLUNARG_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkDirectDriverLoadingListLUNARG *out_info,
                          const VkDirectDriverLoadingListLUNARG *in_info);

void
unwrap_VkDirectDriverLoadingListLUNARG(struct temporary_objects*, struct wrapper_device *device,
                          VkDirectDriverLoadingListLUNARG *out_info,
                          const VkDirectDriverLoadingListLUNARG *in_info);


void
unwrap_VkDisplayEventInfoEXT_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkDisplayEventInfoEXT *out_info,
                          const VkDisplayEventInfoEXT *in_info);

void
unwrap_VkDisplayEventInfoEXT(struct temporary_objects*, struct wrapper_device *device,
                          VkDisplayEventInfoEXT *out_info,
                          const VkDisplayEventInfoEXT *in_info);


void
unwrap_VkDisplayModeCreateInfoKHR_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkDisplayModeCreateInfoKHR *out_info,
                          const VkDisplayModeCreateInfoKHR *in_info);

void
unwrap_VkDisplayModeCreateInfoKHR(struct temporary_objects*, struct wrapper_device *device,
                          VkDisplayModeCreateInfoKHR *out_info,
                          const VkDisplayModeCreateInfoKHR *in_info);


void
unwrap_VkDisplayModeProperties2KHR_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkDisplayModeProperties2KHR *out_info,
                          const VkDisplayModeProperties2KHR *in_info);

void
unwrap_VkDisplayModeProperties2KHR(struct temporary_objects*, struct wrapper_device *device,
                          VkDisplayModeProperties2KHR *out_info,
                          const VkDisplayModeProperties2KHR *in_info);


void
unwrap_VkDisplayNativeHdrSurfaceCapabilitiesAMD_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkDisplayNativeHdrSurfaceCapabilitiesAMD *out_info,
                          const VkDisplayNativeHdrSurfaceCapabilitiesAMD *in_info);

void
unwrap_VkDisplayNativeHdrSurfaceCapabilitiesAMD(struct temporary_objects*, struct wrapper_device *device,
                          VkDisplayNativeHdrSurfaceCapabilitiesAMD *out_info,
                          const VkDisplayNativeHdrSurfaceCapabilitiesAMD *in_info);


void
unwrap_VkDisplayPlaneCapabilities2KHR_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkDisplayPlaneCapabilities2KHR *out_info,
                          const VkDisplayPlaneCapabilities2KHR *in_info);

void
unwrap_VkDisplayPlaneCapabilities2KHR(struct temporary_objects*, struct wrapper_device *device,
                          VkDisplayPlaneCapabilities2KHR *out_info,
                          const VkDisplayPlaneCapabilities2KHR *in_info);


void
unwrap_VkDisplayPlaneInfo2KHR_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkDisplayPlaneInfo2KHR *out_info,
                          const VkDisplayPlaneInfo2KHR *in_info);

void
unwrap_VkDisplayPlaneInfo2KHR(struct temporary_objects*, struct wrapper_device *device,
                          VkDisplayPlaneInfo2KHR *out_info,
                          const VkDisplayPlaneInfo2KHR *in_info);


void
unwrap_VkDisplayPlaneProperties2KHR_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkDisplayPlaneProperties2KHR *out_info,
                          const VkDisplayPlaneProperties2KHR *in_info);

void
unwrap_VkDisplayPlaneProperties2KHR(struct temporary_objects*, struct wrapper_device *device,
                          VkDisplayPlaneProperties2KHR *out_info,
                          const VkDisplayPlaneProperties2KHR *in_info);


void
unwrap_VkDisplayPowerInfoEXT_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkDisplayPowerInfoEXT *out_info,
                          const VkDisplayPowerInfoEXT *in_info);

void
unwrap_VkDisplayPowerInfoEXT(struct temporary_objects*, struct wrapper_device *device,
                          VkDisplayPowerInfoEXT *out_info,
                          const VkDisplayPowerInfoEXT *in_info);


void
unwrap_VkDisplayPresentInfoKHR_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkDisplayPresentInfoKHR *out_info,
                          const VkDisplayPresentInfoKHR *in_info);

void
unwrap_VkDisplayPresentInfoKHR(struct temporary_objects*, struct wrapper_device *device,
                          VkDisplayPresentInfoKHR *out_info,
                          const VkDisplayPresentInfoKHR *in_info);


void
unwrap_VkDisplayProperties2KHR_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkDisplayProperties2KHR *out_info,
                          const VkDisplayProperties2KHR *in_info);

void
unwrap_VkDisplayProperties2KHR(struct temporary_objects*, struct wrapper_device *device,
                          VkDisplayProperties2KHR *out_info,
                          const VkDisplayProperties2KHR *in_info);


void
unwrap_VkDisplaySurfaceCreateInfoKHR_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkDisplaySurfaceCreateInfoKHR *out_info,
                          const VkDisplaySurfaceCreateInfoKHR *in_info);

void
unwrap_VkDisplaySurfaceCreateInfoKHR(struct temporary_objects*, struct wrapper_device *device,
                          VkDisplaySurfaceCreateInfoKHR *out_info,
                          const VkDisplaySurfaceCreateInfoKHR *in_info);


void
unwrap_VkDrmFormatModifierPropertiesList2EXT_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkDrmFormatModifierPropertiesList2EXT *out_info,
                          const VkDrmFormatModifierPropertiesList2EXT *in_info);

void
unwrap_VkDrmFormatModifierPropertiesList2EXT(struct temporary_objects*, struct wrapper_device *device,
                          VkDrmFormatModifierPropertiesList2EXT *out_info,
                          const VkDrmFormatModifierPropertiesList2EXT *in_info);


void
unwrap_VkDrmFormatModifierPropertiesListEXT_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkDrmFormatModifierPropertiesListEXT *out_info,
                          const VkDrmFormatModifierPropertiesListEXT *in_info);

void
unwrap_VkDrmFormatModifierPropertiesListEXT(struct temporary_objects*, struct wrapper_device *device,
                          VkDrmFormatModifierPropertiesListEXT *out_info,
                          const VkDrmFormatModifierPropertiesListEXT *in_info);


void
unwrap_VkEventCreateInfo_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkEventCreateInfo *out_info,
                          const VkEventCreateInfo *in_info);

void
unwrap_VkEventCreateInfo(struct temporary_objects*, struct wrapper_device *device,
                          VkEventCreateInfo *out_info,
                          const VkEventCreateInfo *in_info);


void
unwrap_VkExportFenceCreateInfo_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkExportFenceCreateInfo *out_info,
                          const VkExportFenceCreateInfo *in_info);

void
unwrap_VkExportFenceCreateInfo(struct temporary_objects*, struct wrapper_device *device,
                          VkExportFenceCreateInfo *out_info,
                          const VkExportFenceCreateInfo *in_info);


void
unwrap_VkExportMemoryAllocateInfo_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkExportMemoryAllocateInfo *out_info,
                          const VkExportMemoryAllocateInfo *in_info);

void
unwrap_VkExportMemoryAllocateInfo(struct temporary_objects*, struct wrapper_device *device,
                          VkExportMemoryAllocateInfo *out_info,
                          const VkExportMemoryAllocateInfo *in_info);


void
unwrap_VkExportMemoryAllocateInfoNV_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkExportMemoryAllocateInfoNV *out_info,
                          const VkExportMemoryAllocateInfoNV *in_info);

void
unwrap_VkExportMemoryAllocateInfoNV(struct temporary_objects*, struct wrapper_device *device,
                          VkExportMemoryAllocateInfoNV *out_info,
                          const VkExportMemoryAllocateInfoNV *in_info);


void
unwrap_VkExportSemaphoreCreateInfo_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkExportSemaphoreCreateInfo *out_info,
                          const VkExportSemaphoreCreateInfo *in_info);

void
unwrap_VkExportSemaphoreCreateInfo(struct temporary_objects*, struct wrapper_device *device,
                          VkExportSemaphoreCreateInfo *out_info,
                          const VkExportSemaphoreCreateInfo *in_info);


void
unwrap_VkExternalBufferProperties_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkExternalBufferProperties *out_info,
                          const VkExternalBufferProperties *in_info);

void
unwrap_VkExternalBufferProperties(struct temporary_objects*, struct wrapper_device *device,
                          VkExternalBufferProperties *out_info,
                          const VkExternalBufferProperties *in_info);


void
unwrap_VkExternalFenceProperties_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkExternalFenceProperties *out_info,
                          const VkExternalFenceProperties *in_info);

void
unwrap_VkExternalFenceProperties(struct temporary_objects*, struct wrapper_device *device,
                          VkExternalFenceProperties *out_info,
                          const VkExternalFenceProperties *in_info);


void
unwrap_VkExternalFormatANDROID_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkExternalFormatANDROID *out_info,
                          const VkExternalFormatANDROID *in_info);

void
unwrap_VkExternalFormatANDROID(struct temporary_objects*, struct wrapper_device *device,
                          VkExternalFormatANDROID *out_info,
                          const VkExternalFormatANDROID *in_info);


void
unwrap_VkExternalImageFormatProperties_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkExternalImageFormatProperties *out_info,
                          const VkExternalImageFormatProperties *in_info);

void
unwrap_VkExternalImageFormatProperties(struct temporary_objects*, struct wrapper_device *device,
                          VkExternalImageFormatProperties *out_info,
                          const VkExternalImageFormatProperties *in_info);


void
unwrap_VkExternalMemoryAcquireUnmodifiedEXT_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkExternalMemoryAcquireUnmodifiedEXT *out_info,
                          const VkExternalMemoryAcquireUnmodifiedEXT *in_info);

void
unwrap_VkExternalMemoryAcquireUnmodifiedEXT(struct temporary_objects*, struct wrapper_device *device,
                          VkExternalMemoryAcquireUnmodifiedEXT *out_info,
                          const VkExternalMemoryAcquireUnmodifiedEXT *in_info);


void
unwrap_VkExternalMemoryBufferCreateInfo_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkExternalMemoryBufferCreateInfo *out_info,
                          const VkExternalMemoryBufferCreateInfo *in_info);

void
unwrap_VkExternalMemoryBufferCreateInfo(struct temporary_objects*, struct wrapper_device *device,
                          VkExternalMemoryBufferCreateInfo *out_info,
                          const VkExternalMemoryBufferCreateInfo *in_info);


void
unwrap_VkExternalMemoryImageCreateInfo_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkExternalMemoryImageCreateInfo *out_info,
                          const VkExternalMemoryImageCreateInfo *in_info);

void
unwrap_VkExternalMemoryImageCreateInfo(struct temporary_objects*, struct wrapper_device *device,
                          VkExternalMemoryImageCreateInfo *out_info,
                          const VkExternalMemoryImageCreateInfo *in_info);


void
unwrap_VkExternalMemoryImageCreateInfoNV_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkExternalMemoryImageCreateInfoNV *out_info,
                          const VkExternalMemoryImageCreateInfoNV *in_info);

void
unwrap_VkExternalMemoryImageCreateInfoNV(struct temporary_objects*, struct wrapper_device *device,
                          VkExternalMemoryImageCreateInfoNV *out_info,
                          const VkExternalMemoryImageCreateInfoNV *in_info);


void
unwrap_VkExternalSemaphoreProperties_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkExternalSemaphoreProperties *out_info,
                          const VkExternalSemaphoreProperties *in_info);

void
unwrap_VkExternalSemaphoreProperties(struct temporary_objects*, struct wrapper_device *device,
                          VkExternalSemaphoreProperties *out_info,
                          const VkExternalSemaphoreProperties *in_info);


void
unwrap_VkFenceCreateInfo_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkFenceCreateInfo *out_info,
                          const VkFenceCreateInfo *in_info);

void
unwrap_VkFenceCreateInfo(struct temporary_objects*, struct wrapper_device *device,
                          VkFenceCreateInfo *out_info,
                          const VkFenceCreateInfo *in_info);


void
unwrap_VkFenceGetFdInfoKHR_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkFenceGetFdInfoKHR *out_info,
                          const VkFenceGetFdInfoKHR *in_info);

void
unwrap_VkFenceGetFdInfoKHR(struct temporary_objects*, struct wrapper_device *device,
                          VkFenceGetFdInfoKHR *out_info,
                          const VkFenceGetFdInfoKHR *in_info);


void
unwrap_VkFilterCubicImageViewImageFormatPropertiesEXT_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkFilterCubicImageViewImageFormatPropertiesEXT *out_info,
                          const VkFilterCubicImageViewImageFormatPropertiesEXT *in_info);

void
unwrap_VkFilterCubicImageViewImageFormatPropertiesEXT(struct temporary_objects*, struct wrapper_device *device,
                          VkFilterCubicImageViewImageFormatPropertiesEXT *out_info,
                          const VkFilterCubicImageViewImageFormatPropertiesEXT *in_info);


void
unwrap_VkFormatProperties2_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkFormatProperties2 *out_info,
                          const VkFormatProperties2 *in_info);

void
unwrap_VkFormatProperties2(struct temporary_objects*, struct wrapper_device *device,
                          VkFormatProperties2 *out_info,
                          const VkFormatProperties2 *in_info);


void
unwrap_VkFormatProperties3_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkFormatProperties3 *out_info,
                          const VkFormatProperties3 *in_info);

void
unwrap_VkFormatProperties3(struct temporary_objects*, struct wrapper_device *device,
                          VkFormatProperties3 *out_info,
                          const VkFormatProperties3 *in_info);


void
unwrap_VkFragmentShadingRateAttachmentInfoKHR_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkFragmentShadingRateAttachmentInfoKHR *out_info,
                          const VkFragmentShadingRateAttachmentInfoKHR *in_info);

void
unwrap_VkFragmentShadingRateAttachmentInfoKHR(struct temporary_objects*, struct wrapper_device *device,
                          VkFragmentShadingRateAttachmentInfoKHR *out_info,
                          const VkFragmentShadingRateAttachmentInfoKHR *in_info);


void
unwrap_VkFrameBoundaryEXT_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkFrameBoundaryEXT *out_info,
                          const VkFrameBoundaryEXT *in_info);

void
unwrap_VkFrameBoundaryEXT(struct temporary_objects*, struct wrapper_device *device,
                          VkFrameBoundaryEXT *out_info,
                          const VkFrameBoundaryEXT *in_info);


void
unwrap_VkFramebufferAttachmentImageInfo_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkFramebufferAttachmentImageInfo *out_info,
                          const VkFramebufferAttachmentImageInfo *in_info);

void
unwrap_VkFramebufferAttachmentImageInfo(struct temporary_objects*, struct wrapper_device *device,
                          VkFramebufferAttachmentImageInfo *out_info,
                          const VkFramebufferAttachmentImageInfo *in_info);


void
unwrap_VkFramebufferAttachmentsCreateInfo_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkFramebufferAttachmentsCreateInfo *out_info,
                          const VkFramebufferAttachmentsCreateInfo *in_info);

void
unwrap_VkFramebufferAttachmentsCreateInfo(struct temporary_objects*, struct wrapper_device *device,
                          VkFramebufferAttachmentsCreateInfo *out_info,
                          const VkFramebufferAttachmentsCreateInfo *in_info);


void
unwrap_VkFramebufferCreateInfo_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkFramebufferCreateInfo *out_info,
                          const VkFramebufferCreateInfo *in_info);

void
unwrap_VkFramebufferCreateInfo(struct temporary_objects*, struct wrapper_device *device,
                          VkFramebufferCreateInfo *out_info,
                          const VkFramebufferCreateInfo *in_info);


void
unwrap_VkFramebufferMixedSamplesCombinationNV_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkFramebufferMixedSamplesCombinationNV *out_info,
                          const VkFramebufferMixedSamplesCombinationNV *in_info);

void
unwrap_VkFramebufferMixedSamplesCombinationNV(struct temporary_objects*, struct wrapper_device *device,
                          VkFramebufferMixedSamplesCombinationNV *out_info,
                          const VkFramebufferMixedSamplesCombinationNV *in_info);


void
unwrap_VkGeneratedCommandsInfoNV_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkGeneratedCommandsInfoNV *out_info,
                          const VkGeneratedCommandsInfoNV *in_info);

void
unwrap_VkGeneratedCommandsInfoNV(struct temporary_objects*, struct wrapper_device *device,
                          VkGeneratedCommandsInfoNV *out_info,
                          const VkGeneratedCommandsInfoNV *in_info);


void
unwrap_VkGeneratedCommandsMemoryRequirementsInfoNV_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkGeneratedCommandsMemoryRequirementsInfoNV *out_info,
                          const VkGeneratedCommandsMemoryRequirementsInfoNV *in_info);

void
unwrap_VkGeneratedCommandsMemoryRequirementsInfoNV(struct temporary_objects*, struct wrapper_device *device,
                          VkGeneratedCommandsMemoryRequirementsInfoNV *out_info,
                          const VkGeneratedCommandsMemoryRequirementsInfoNV *in_info);


void
unwrap_VkGeometryAABBNV_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkGeometryAABBNV *out_info,
                          const VkGeometryAABBNV *in_info);

void
unwrap_VkGeometryAABBNV(struct temporary_objects*, struct wrapper_device *device,
                          VkGeometryAABBNV *out_info,
                          const VkGeometryAABBNV *in_info);


void
unwrap_VkGeometryNV_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkGeometryNV *out_info,
                          const VkGeometryNV *in_info);

void
unwrap_VkGeometryNV(struct temporary_objects*, struct wrapper_device *device,
                          VkGeometryNV *out_info,
                          const VkGeometryNV *in_info);


void
unwrap_VkGeometryTrianglesNV_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkGeometryTrianglesNV *out_info,
                          const VkGeometryTrianglesNV *in_info);

void
unwrap_VkGeometryTrianglesNV(struct temporary_objects*, struct wrapper_device *device,
                          VkGeometryTrianglesNV *out_info,
                          const VkGeometryTrianglesNV *in_info);


void
unwrap_VkGetLatencyMarkerInfoNV_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkGetLatencyMarkerInfoNV *out_info,
                          const VkGetLatencyMarkerInfoNV *in_info);

void
unwrap_VkGetLatencyMarkerInfoNV(struct temporary_objects*, struct wrapper_device *device,
                          VkGetLatencyMarkerInfoNV *out_info,
                          const VkGetLatencyMarkerInfoNV *in_info);


void
unwrap_VkGraphicsPipelineCreateInfo_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkGraphicsPipelineCreateInfo *out_info,
                          const VkGraphicsPipelineCreateInfo *in_info);

void
unwrap_VkGraphicsPipelineCreateInfo(struct temporary_objects*, struct wrapper_device *device,
                          VkGraphicsPipelineCreateInfo *out_info,
                          const VkGraphicsPipelineCreateInfo *in_info);


void
unwrap_VkGraphicsPipelineLibraryCreateInfoEXT_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkGraphicsPipelineLibraryCreateInfoEXT *out_info,
                          const VkGraphicsPipelineLibraryCreateInfoEXT *in_info);

void
unwrap_VkGraphicsPipelineLibraryCreateInfoEXT(struct temporary_objects*, struct wrapper_device *device,
                          VkGraphicsPipelineLibraryCreateInfoEXT *out_info,
                          const VkGraphicsPipelineLibraryCreateInfoEXT *in_info);


void
unwrap_VkGraphicsPipelineShaderGroupsCreateInfoNV_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkGraphicsPipelineShaderGroupsCreateInfoNV *out_info,
                          const VkGraphicsPipelineShaderGroupsCreateInfoNV *in_info);

void
unwrap_VkGraphicsPipelineShaderGroupsCreateInfoNV(struct temporary_objects*, struct wrapper_device *device,
                          VkGraphicsPipelineShaderGroupsCreateInfoNV *out_info,
                          const VkGraphicsPipelineShaderGroupsCreateInfoNV *in_info);


void
unwrap_VkGraphicsShaderGroupCreateInfoNV_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkGraphicsShaderGroupCreateInfoNV *out_info,
                          const VkGraphicsShaderGroupCreateInfoNV *in_info);

void
unwrap_VkGraphicsShaderGroupCreateInfoNV(struct temporary_objects*, struct wrapper_device *device,
                          VkGraphicsShaderGroupCreateInfoNV *out_info,
                          const VkGraphicsShaderGroupCreateInfoNV *in_info);


void
unwrap_VkHdrMetadataEXT_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkHdrMetadataEXT *out_info,
                          const VkHdrMetadataEXT *in_info);

void
unwrap_VkHdrMetadataEXT(struct temporary_objects*, struct wrapper_device *device,
                          VkHdrMetadataEXT *out_info,
                          const VkHdrMetadataEXT *in_info);


void
unwrap_VkHeadlessSurfaceCreateInfoEXT_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkHeadlessSurfaceCreateInfoEXT *out_info,
                          const VkHeadlessSurfaceCreateInfoEXT *in_info);

void
unwrap_VkHeadlessSurfaceCreateInfoEXT(struct temporary_objects*, struct wrapper_device *device,
                          VkHeadlessSurfaceCreateInfoEXT *out_info,
                          const VkHeadlessSurfaceCreateInfoEXT *in_info);


void
unwrap_VkHostImageCopyDevicePerformanceQueryEXT_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkHostImageCopyDevicePerformanceQueryEXT *out_info,
                          const VkHostImageCopyDevicePerformanceQueryEXT *in_info);

void
unwrap_VkHostImageCopyDevicePerformanceQueryEXT(struct temporary_objects*, struct wrapper_device *device,
                          VkHostImageCopyDevicePerformanceQueryEXT *out_info,
                          const VkHostImageCopyDevicePerformanceQueryEXT *in_info);


void
unwrap_VkHostImageLayoutTransitionInfoEXT_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkHostImageLayoutTransitionInfoEXT *out_info,
                          const VkHostImageLayoutTransitionInfoEXT *in_info);

void
unwrap_VkHostImageLayoutTransitionInfoEXT(struct temporary_objects*, struct wrapper_device *device,
                          VkHostImageLayoutTransitionInfoEXT *out_info,
                          const VkHostImageLayoutTransitionInfoEXT *in_info);


void
unwrap_VkImageAlignmentControlCreateInfoMESA_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkImageAlignmentControlCreateInfoMESA *out_info,
                          const VkImageAlignmentControlCreateInfoMESA *in_info);

void
unwrap_VkImageAlignmentControlCreateInfoMESA(struct temporary_objects*, struct wrapper_device *device,
                          VkImageAlignmentControlCreateInfoMESA *out_info,
                          const VkImageAlignmentControlCreateInfoMESA *in_info);


void
unwrap_VkImageBlit2_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkImageBlit2 *out_info,
                          const VkImageBlit2 *in_info);

void
unwrap_VkImageBlit2(struct temporary_objects*, struct wrapper_device *device,
                          VkImageBlit2 *out_info,
                          const VkImageBlit2 *in_info);


void
unwrap_VkImageCaptureDescriptorDataInfoEXT_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkImageCaptureDescriptorDataInfoEXT *out_info,
                          const VkImageCaptureDescriptorDataInfoEXT *in_info);

void
unwrap_VkImageCaptureDescriptorDataInfoEXT(struct temporary_objects*, struct wrapper_device *device,
                          VkImageCaptureDescriptorDataInfoEXT *out_info,
                          const VkImageCaptureDescriptorDataInfoEXT *in_info);


void
unwrap_VkImageCompressionControlEXT_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkImageCompressionControlEXT *out_info,
                          const VkImageCompressionControlEXT *in_info);

void
unwrap_VkImageCompressionControlEXT(struct temporary_objects*, struct wrapper_device *device,
                          VkImageCompressionControlEXT *out_info,
                          const VkImageCompressionControlEXT *in_info);


void
unwrap_VkImageCompressionPropertiesEXT_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkImageCompressionPropertiesEXT *out_info,
                          const VkImageCompressionPropertiesEXT *in_info);

void
unwrap_VkImageCompressionPropertiesEXT(struct temporary_objects*, struct wrapper_device *device,
                          VkImageCompressionPropertiesEXT *out_info,
                          const VkImageCompressionPropertiesEXT *in_info);


void
unwrap_VkImageCopy2_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkImageCopy2 *out_info,
                          const VkImageCopy2 *in_info);

void
unwrap_VkImageCopy2(struct temporary_objects*, struct wrapper_device *device,
                          VkImageCopy2 *out_info,
                          const VkImageCopy2 *in_info);


void
unwrap_VkImageCreateInfo_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkImageCreateInfo *out_info,
                          const VkImageCreateInfo *in_info);

void
unwrap_VkImageCreateInfo(struct temporary_objects*, struct wrapper_device *device,
                          VkImageCreateInfo *out_info,
                          const VkImageCreateInfo *in_info);


void
unwrap_VkImageDrmFormatModifierExplicitCreateInfoEXT_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkImageDrmFormatModifierExplicitCreateInfoEXT *out_info,
                          const VkImageDrmFormatModifierExplicitCreateInfoEXT *in_info);

void
unwrap_VkImageDrmFormatModifierExplicitCreateInfoEXT(struct temporary_objects*, struct wrapper_device *device,
                          VkImageDrmFormatModifierExplicitCreateInfoEXT *out_info,
                          const VkImageDrmFormatModifierExplicitCreateInfoEXT *in_info);


void
unwrap_VkImageDrmFormatModifierListCreateInfoEXT_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkImageDrmFormatModifierListCreateInfoEXT *out_info,
                          const VkImageDrmFormatModifierListCreateInfoEXT *in_info);

void
unwrap_VkImageDrmFormatModifierListCreateInfoEXT(struct temporary_objects*, struct wrapper_device *device,
                          VkImageDrmFormatModifierListCreateInfoEXT *out_info,
                          const VkImageDrmFormatModifierListCreateInfoEXT *in_info);


void
unwrap_VkImageDrmFormatModifierPropertiesEXT_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkImageDrmFormatModifierPropertiesEXT *out_info,
                          const VkImageDrmFormatModifierPropertiesEXT *in_info);

void
unwrap_VkImageDrmFormatModifierPropertiesEXT(struct temporary_objects*, struct wrapper_device *device,
                          VkImageDrmFormatModifierPropertiesEXT *out_info,
                          const VkImageDrmFormatModifierPropertiesEXT *in_info);


void
unwrap_VkImageFormatListCreateInfo_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkImageFormatListCreateInfo *out_info,
                          const VkImageFormatListCreateInfo *in_info);

void
unwrap_VkImageFormatListCreateInfo(struct temporary_objects*, struct wrapper_device *device,
                          VkImageFormatListCreateInfo *out_info,
                          const VkImageFormatListCreateInfo *in_info);


void
unwrap_VkImageFormatProperties2_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkImageFormatProperties2 *out_info,
                          const VkImageFormatProperties2 *in_info);

void
unwrap_VkImageFormatProperties2(struct temporary_objects*, struct wrapper_device *device,
                          VkImageFormatProperties2 *out_info,
                          const VkImageFormatProperties2 *in_info);


void
unwrap_VkImageMemoryBarrier_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkImageMemoryBarrier *out_info,
                          const VkImageMemoryBarrier *in_info);

void
unwrap_VkImageMemoryBarrier(struct temporary_objects*, struct wrapper_device *device,
                          VkImageMemoryBarrier *out_info,
                          const VkImageMemoryBarrier *in_info);


void
unwrap_VkImageMemoryBarrier2_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkImageMemoryBarrier2 *out_info,
                          const VkImageMemoryBarrier2 *in_info);

void
unwrap_VkImageMemoryBarrier2(struct temporary_objects*, struct wrapper_device *device,
                          VkImageMemoryBarrier2 *out_info,
                          const VkImageMemoryBarrier2 *in_info);


void
unwrap_VkImageMemoryRequirementsInfo2_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkImageMemoryRequirementsInfo2 *out_info,
                          const VkImageMemoryRequirementsInfo2 *in_info);

void
unwrap_VkImageMemoryRequirementsInfo2(struct temporary_objects*, struct wrapper_device *device,
                          VkImageMemoryRequirementsInfo2 *out_info,
                          const VkImageMemoryRequirementsInfo2 *in_info);


void
unwrap_VkImagePlaneMemoryRequirementsInfo_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkImagePlaneMemoryRequirementsInfo *out_info,
                          const VkImagePlaneMemoryRequirementsInfo *in_info);

void
unwrap_VkImagePlaneMemoryRequirementsInfo(struct temporary_objects*, struct wrapper_device *device,
                          VkImagePlaneMemoryRequirementsInfo *out_info,
                          const VkImagePlaneMemoryRequirementsInfo *in_info);


void
unwrap_VkImageResolve2_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkImageResolve2 *out_info,
                          const VkImageResolve2 *in_info);

void
unwrap_VkImageResolve2(struct temporary_objects*, struct wrapper_device *device,
                          VkImageResolve2 *out_info,
                          const VkImageResolve2 *in_info);


void
unwrap_VkImageSparseMemoryRequirementsInfo2_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkImageSparseMemoryRequirementsInfo2 *out_info,
                          const VkImageSparseMemoryRequirementsInfo2 *in_info);

void
unwrap_VkImageSparseMemoryRequirementsInfo2(struct temporary_objects*, struct wrapper_device *device,
                          VkImageSparseMemoryRequirementsInfo2 *out_info,
                          const VkImageSparseMemoryRequirementsInfo2 *in_info);


void
unwrap_VkImageStencilUsageCreateInfo_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkImageStencilUsageCreateInfo *out_info,
                          const VkImageStencilUsageCreateInfo *in_info);

void
unwrap_VkImageStencilUsageCreateInfo(struct temporary_objects*, struct wrapper_device *device,
                          VkImageStencilUsageCreateInfo *out_info,
                          const VkImageStencilUsageCreateInfo *in_info);


void
unwrap_VkImageSubresource2KHR_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkImageSubresource2KHR *out_info,
                          const VkImageSubresource2KHR *in_info);

void
unwrap_VkImageSubresource2KHR(struct temporary_objects*, struct wrapper_device *device,
                          VkImageSubresource2KHR *out_info,
                          const VkImageSubresource2KHR *in_info);


void
unwrap_VkImageSwapchainCreateInfoKHR_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkImageSwapchainCreateInfoKHR *out_info,
                          const VkImageSwapchainCreateInfoKHR *in_info);

void
unwrap_VkImageSwapchainCreateInfoKHR(struct temporary_objects*, struct wrapper_device *device,
                          VkImageSwapchainCreateInfoKHR *out_info,
                          const VkImageSwapchainCreateInfoKHR *in_info);


void
unwrap_VkImageToMemoryCopyEXT_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkImageToMemoryCopyEXT *out_info,
                          const VkImageToMemoryCopyEXT *in_info);

void
unwrap_VkImageToMemoryCopyEXT(struct temporary_objects*, struct wrapper_device *device,
                          VkImageToMemoryCopyEXT *out_info,
                          const VkImageToMemoryCopyEXT *in_info);


void
unwrap_VkImageViewASTCDecodeModeEXT_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkImageViewASTCDecodeModeEXT *out_info,
                          const VkImageViewASTCDecodeModeEXT *in_info);

void
unwrap_VkImageViewASTCDecodeModeEXT(struct temporary_objects*, struct wrapper_device *device,
                          VkImageViewASTCDecodeModeEXT *out_info,
                          const VkImageViewASTCDecodeModeEXT *in_info);


void
unwrap_VkImageViewAddressPropertiesNVX_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkImageViewAddressPropertiesNVX *out_info,
                          const VkImageViewAddressPropertiesNVX *in_info);

void
unwrap_VkImageViewAddressPropertiesNVX(struct temporary_objects*, struct wrapper_device *device,
                          VkImageViewAddressPropertiesNVX *out_info,
                          const VkImageViewAddressPropertiesNVX *in_info);


void
unwrap_VkImageViewCaptureDescriptorDataInfoEXT_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkImageViewCaptureDescriptorDataInfoEXT *out_info,
                          const VkImageViewCaptureDescriptorDataInfoEXT *in_info);

void
unwrap_VkImageViewCaptureDescriptorDataInfoEXT(struct temporary_objects*, struct wrapper_device *device,
                          VkImageViewCaptureDescriptorDataInfoEXT *out_info,
                          const VkImageViewCaptureDescriptorDataInfoEXT *in_info);


void
unwrap_VkImageViewCreateInfo_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkImageViewCreateInfo *out_info,
                          const VkImageViewCreateInfo *in_info);

void
unwrap_VkImageViewCreateInfo(struct temporary_objects*, struct wrapper_device *device,
                          VkImageViewCreateInfo *out_info,
                          const VkImageViewCreateInfo *in_info);


void
unwrap_VkImageViewHandleInfoNVX_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkImageViewHandleInfoNVX *out_info,
                          const VkImageViewHandleInfoNVX *in_info);

void
unwrap_VkImageViewHandleInfoNVX(struct temporary_objects*, struct wrapper_device *device,
                          VkImageViewHandleInfoNVX *out_info,
                          const VkImageViewHandleInfoNVX *in_info);


void
unwrap_VkImageViewMinLodCreateInfoEXT_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkImageViewMinLodCreateInfoEXT *out_info,
                          const VkImageViewMinLodCreateInfoEXT *in_info);

void
unwrap_VkImageViewMinLodCreateInfoEXT(struct temporary_objects*, struct wrapper_device *device,
                          VkImageViewMinLodCreateInfoEXT *out_info,
                          const VkImageViewMinLodCreateInfoEXT *in_info);


void
unwrap_VkImageViewSampleWeightCreateInfoQCOM_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkImageViewSampleWeightCreateInfoQCOM *out_info,
                          const VkImageViewSampleWeightCreateInfoQCOM *in_info);

void
unwrap_VkImageViewSampleWeightCreateInfoQCOM(struct temporary_objects*, struct wrapper_device *device,
                          VkImageViewSampleWeightCreateInfoQCOM *out_info,
                          const VkImageViewSampleWeightCreateInfoQCOM *in_info);


void
unwrap_VkImageViewSlicedCreateInfoEXT_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkImageViewSlicedCreateInfoEXT *out_info,
                          const VkImageViewSlicedCreateInfoEXT *in_info);

void
unwrap_VkImageViewSlicedCreateInfoEXT(struct temporary_objects*, struct wrapper_device *device,
                          VkImageViewSlicedCreateInfoEXT *out_info,
                          const VkImageViewSlicedCreateInfoEXT *in_info);


void
unwrap_VkImageViewUsageCreateInfo_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkImageViewUsageCreateInfo *out_info,
                          const VkImageViewUsageCreateInfo *in_info);

void
unwrap_VkImageViewUsageCreateInfo(struct temporary_objects*, struct wrapper_device *device,
                          VkImageViewUsageCreateInfo *out_info,
                          const VkImageViewUsageCreateInfo *in_info);


void
unwrap_VkImportAndroidHardwareBufferInfoANDROID_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkImportAndroidHardwareBufferInfoANDROID *out_info,
                          const VkImportAndroidHardwareBufferInfoANDROID *in_info);

void
unwrap_VkImportAndroidHardwareBufferInfoANDROID(struct temporary_objects*, struct wrapper_device *device,
                          VkImportAndroidHardwareBufferInfoANDROID *out_info,
                          const VkImportAndroidHardwareBufferInfoANDROID *in_info);


void
unwrap_VkImportFenceFdInfoKHR_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkImportFenceFdInfoKHR *out_info,
                          const VkImportFenceFdInfoKHR *in_info);

void
unwrap_VkImportFenceFdInfoKHR(struct temporary_objects*, struct wrapper_device *device,
                          VkImportFenceFdInfoKHR *out_info,
                          const VkImportFenceFdInfoKHR *in_info);


void
unwrap_VkImportMemoryFdInfoKHR_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkImportMemoryFdInfoKHR *out_info,
                          const VkImportMemoryFdInfoKHR *in_info);

void
unwrap_VkImportMemoryFdInfoKHR(struct temporary_objects*, struct wrapper_device *device,
                          VkImportMemoryFdInfoKHR *out_info,
                          const VkImportMemoryFdInfoKHR *in_info);


void
unwrap_VkImportMemoryHostPointerInfoEXT_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkImportMemoryHostPointerInfoEXT *out_info,
                          const VkImportMemoryHostPointerInfoEXT *in_info);

void
unwrap_VkImportMemoryHostPointerInfoEXT(struct temporary_objects*, struct wrapper_device *device,
                          VkImportMemoryHostPointerInfoEXT *out_info,
                          const VkImportMemoryHostPointerInfoEXT *in_info);


void
unwrap_VkImportSemaphoreFdInfoKHR_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkImportSemaphoreFdInfoKHR *out_info,
                          const VkImportSemaphoreFdInfoKHR *in_info);

void
unwrap_VkImportSemaphoreFdInfoKHR(struct temporary_objects*, struct wrapper_device *device,
                          VkImportSemaphoreFdInfoKHR *out_info,
                          const VkImportSemaphoreFdInfoKHR *in_info);


void
unwrap_VkIndirectCommandsLayoutCreateInfoNV_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkIndirectCommandsLayoutCreateInfoNV *out_info,
                          const VkIndirectCommandsLayoutCreateInfoNV *in_info);

void
unwrap_VkIndirectCommandsLayoutCreateInfoNV(struct temporary_objects*, struct wrapper_device *device,
                          VkIndirectCommandsLayoutCreateInfoNV *out_info,
                          const VkIndirectCommandsLayoutCreateInfoNV *in_info);


void
unwrap_VkIndirectCommandsLayoutTokenNV_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkIndirectCommandsLayoutTokenNV *out_info,
                          const VkIndirectCommandsLayoutTokenNV *in_info);

void
unwrap_VkIndirectCommandsLayoutTokenNV(struct temporary_objects*, struct wrapper_device *device,
                          VkIndirectCommandsLayoutTokenNV *out_info,
                          const VkIndirectCommandsLayoutTokenNV *in_info);


void
unwrap_VkInitializePerformanceApiInfoINTEL_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkInitializePerformanceApiInfoINTEL *out_info,
                          const VkInitializePerformanceApiInfoINTEL *in_info);

void
unwrap_VkInitializePerformanceApiInfoINTEL(struct temporary_objects*, struct wrapper_device *device,
                          VkInitializePerformanceApiInfoINTEL *out_info,
                          const VkInitializePerformanceApiInfoINTEL *in_info);


void
unwrap_VkLatencySleepInfoNV_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkLatencySleepInfoNV *out_info,
                          const VkLatencySleepInfoNV *in_info);

void
unwrap_VkLatencySleepInfoNV(struct temporary_objects*, struct wrapper_device *device,
                          VkLatencySleepInfoNV *out_info,
                          const VkLatencySleepInfoNV *in_info);


void
unwrap_VkLatencySleepModeInfoNV_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkLatencySleepModeInfoNV *out_info,
                          const VkLatencySleepModeInfoNV *in_info);

void
unwrap_VkLatencySleepModeInfoNV(struct temporary_objects*, struct wrapper_device *device,
                          VkLatencySleepModeInfoNV *out_info,
                          const VkLatencySleepModeInfoNV *in_info);


void
unwrap_VkLatencySubmissionPresentIdNV_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkLatencySubmissionPresentIdNV *out_info,
                          const VkLatencySubmissionPresentIdNV *in_info);

void
unwrap_VkLatencySubmissionPresentIdNV(struct temporary_objects*, struct wrapper_device *device,
                          VkLatencySubmissionPresentIdNV *out_info,
                          const VkLatencySubmissionPresentIdNV *in_info);


void
unwrap_VkLatencySurfaceCapabilitiesNV_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkLatencySurfaceCapabilitiesNV *out_info,
                          const VkLatencySurfaceCapabilitiesNV *in_info);

void
unwrap_VkLatencySurfaceCapabilitiesNV(struct temporary_objects*, struct wrapper_device *device,
                          VkLatencySurfaceCapabilitiesNV *out_info,
                          const VkLatencySurfaceCapabilitiesNV *in_info);


void
unwrap_VkLatencyTimingsFrameReportNV_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkLatencyTimingsFrameReportNV *out_info,
                          const VkLatencyTimingsFrameReportNV *in_info);

void
unwrap_VkLatencyTimingsFrameReportNV(struct temporary_objects*, struct wrapper_device *device,
                          VkLatencyTimingsFrameReportNV *out_info,
                          const VkLatencyTimingsFrameReportNV *in_info);


void
unwrap_VkLayerSettingsCreateInfoEXT_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkLayerSettingsCreateInfoEXT *out_info,
                          const VkLayerSettingsCreateInfoEXT *in_info);

void
unwrap_VkLayerSettingsCreateInfoEXT(struct temporary_objects*, struct wrapper_device *device,
                          VkLayerSettingsCreateInfoEXT *out_info,
                          const VkLayerSettingsCreateInfoEXT *in_info);


void
unwrap_VkMappedMemoryRange_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkMappedMemoryRange *out_info,
                          const VkMappedMemoryRange *in_info);

void
unwrap_VkMappedMemoryRange(struct temporary_objects*, struct wrapper_device *device,
                          VkMappedMemoryRange *out_info,
                          const VkMappedMemoryRange *in_info);


void
unwrap_VkMemoryAllocateFlagsInfo_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkMemoryAllocateFlagsInfo *out_info,
                          const VkMemoryAllocateFlagsInfo *in_info);

void
unwrap_VkMemoryAllocateFlagsInfo(struct temporary_objects*, struct wrapper_device *device,
                          VkMemoryAllocateFlagsInfo *out_info,
                          const VkMemoryAllocateFlagsInfo *in_info);


void
unwrap_VkMemoryAllocateInfo_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkMemoryAllocateInfo *out_info,
                          const VkMemoryAllocateInfo *in_info);

void
unwrap_VkMemoryAllocateInfo(struct temporary_objects*, struct wrapper_device *device,
                          VkMemoryAllocateInfo *out_info,
                          const VkMemoryAllocateInfo *in_info);


void
unwrap_VkMemoryBarrier_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkMemoryBarrier *out_info,
                          const VkMemoryBarrier *in_info);

void
unwrap_VkMemoryBarrier(struct temporary_objects*, struct wrapper_device *device,
                          VkMemoryBarrier *out_info,
                          const VkMemoryBarrier *in_info);


void
unwrap_VkMemoryBarrier2_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkMemoryBarrier2 *out_info,
                          const VkMemoryBarrier2 *in_info);

void
unwrap_VkMemoryBarrier2(struct temporary_objects*, struct wrapper_device *device,
                          VkMemoryBarrier2 *out_info,
                          const VkMemoryBarrier2 *in_info);


void
unwrap_VkMemoryDedicatedAllocateInfo_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkMemoryDedicatedAllocateInfo *out_info,
                          const VkMemoryDedicatedAllocateInfo *in_info);

void
unwrap_VkMemoryDedicatedAllocateInfo(struct temporary_objects*, struct wrapper_device *device,
                          VkMemoryDedicatedAllocateInfo *out_info,
                          const VkMemoryDedicatedAllocateInfo *in_info);


void
unwrap_VkMemoryDedicatedRequirements_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkMemoryDedicatedRequirements *out_info,
                          const VkMemoryDedicatedRequirements *in_info);

void
unwrap_VkMemoryDedicatedRequirements(struct temporary_objects*, struct wrapper_device *device,
                          VkMemoryDedicatedRequirements *out_info,
                          const VkMemoryDedicatedRequirements *in_info);


void
unwrap_VkMemoryFdPropertiesKHR_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkMemoryFdPropertiesKHR *out_info,
                          const VkMemoryFdPropertiesKHR *in_info);

void
unwrap_VkMemoryFdPropertiesKHR(struct temporary_objects*, struct wrapper_device *device,
                          VkMemoryFdPropertiesKHR *out_info,
                          const VkMemoryFdPropertiesKHR *in_info);


void
unwrap_VkMemoryGetAndroidHardwareBufferInfoANDROID_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkMemoryGetAndroidHardwareBufferInfoANDROID *out_info,
                          const VkMemoryGetAndroidHardwareBufferInfoANDROID *in_info);

void
unwrap_VkMemoryGetAndroidHardwareBufferInfoANDROID(struct temporary_objects*, struct wrapper_device *device,
                          VkMemoryGetAndroidHardwareBufferInfoANDROID *out_info,
                          const VkMemoryGetAndroidHardwareBufferInfoANDROID *in_info);


void
unwrap_VkMemoryGetFdInfoKHR_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkMemoryGetFdInfoKHR *out_info,
                          const VkMemoryGetFdInfoKHR *in_info);

void
unwrap_VkMemoryGetFdInfoKHR(struct temporary_objects*, struct wrapper_device *device,
                          VkMemoryGetFdInfoKHR *out_info,
                          const VkMemoryGetFdInfoKHR *in_info);


void
unwrap_VkMemoryGetRemoteAddressInfoNV_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkMemoryGetRemoteAddressInfoNV *out_info,
                          const VkMemoryGetRemoteAddressInfoNV *in_info);

void
unwrap_VkMemoryGetRemoteAddressInfoNV(struct temporary_objects*, struct wrapper_device *device,
                          VkMemoryGetRemoteAddressInfoNV *out_info,
                          const VkMemoryGetRemoteAddressInfoNV *in_info);


void
unwrap_VkMemoryHostPointerPropertiesEXT_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkMemoryHostPointerPropertiesEXT *out_info,
                          const VkMemoryHostPointerPropertiesEXT *in_info);

void
unwrap_VkMemoryHostPointerPropertiesEXT(struct temporary_objects*, struct wrapper_device *device,
                          VkMemoryHostPointerPropertiesEXT *out_info,
                          const VkMemoryHostPointerPropertiesEXT *in_info);


void
unwrap_VkMemoryMapInfoKHR_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkMemoryMapInfoKHR *out_info,
                          const VkMemoryMapInfoKHR *in_info);

void
unwrap_VkMemoryMapInfoKHR(struct temporary_objects*, struct wrapper_device *device,
                          VkMemoryMapInfoKHR *out_info,
                          const VkMemoryMapInfoKHR *in_info);


void
unwrap_VkMemoryMapPlacedInfoEXT_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkMemoryMapPlacedInfoEXT *out_info,
                          const VkMemoryMapPlacedInfoEXT *in_info);

void
unwrap_VkMemoryMapPlacedInfoEXT(struct temporary_objects*, struct wrapper_device *device,
                          VkMemoryMapPlacedInfoEXT *out_info,
                          const VkMemoryMapPlacedInfoEXT *in_info);


void
unwrap_VkMemoryOpaqueCaptureAddressAllocateInfo_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkMemoryOpaqueCaptureAddressAllocateInfo *out_info,
                          const VkMemoryOpaqueCaptureAddressAllocateInfo *in_info);

void
unwrap_VkMemoryOpaqueCaptureAddressAllocateInfo(struct temporary_objects*, struct wrapper_device *device,
                          VkMemoryOpaqueCaptureAddressAllocateInfo *out_info,
                          const VkMemoryOpaqueCaptureAddressAllocateInfo *in_info);


void
unwrap_VkMemoryPriorityAllocateInfoEXT_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkMemoryPriorityAllocateInfoEXT *out_info,
                          const VkMemoryPriorityAllocateInfoEXT *in_info);

void
unwrap_VkMemoryPriorityAllocateInfoEXT(struct temporary_objects*, struct wrapper_device *device,
                          VkMemoryPriorityAllocateInfoEXT *out_info,
                          const VkMemoryPriorityAllocateInfoEXT *in_info);


void
unwrap_VkMemoryRequirements2_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkMemoryRequirements2 *out_info,
                          const VkMemoryRequirements2 *in_info);

void
unwrap_VkMemoryRequirements2(struct temporary_objects*, struct wrapper_device *device,
                          VkMemoryRequirements2 *out_info,
                          const VkMemoryRequirements2 *in_info);


void
unwrap_VkMemoryToImageCopyEXT_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkMemoryToImageCopyEXT *out_info,
                          const VkMemoryToImageCopyEXT *in_info);

void
unwrap_VkMemoryToImageCopyEXT(struct temporary_objects*, struct wrapper_device *device,
                          VkMemoryToImageCopyEXT *out_info,
                          const VkMemoryToImageCopyEXT *in_info);


void
unwrap_VkMemoryUnmapInfoKHR_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkMemoryUnmapInfoKHR *out_info,
                          const VkMemoryUnmapInfoKHR *in_info);

void
unwrap_VkMemoryUnmapInfoKHR(struct temporary_objects*, struct wrapper_device *device,
                          VkMemoryUnmapInfoKHR *out_info,
                          const VkMemoryUnmapInfoKHR *in_info);


void
unwrap_VkMicromapBuildSizesInfoEXT_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkMicromapBuildSizesInfoEXT *out_info,
                          const VkMicromapBuildSizesInfoEXT *in_info);

void
unwrap_VkMicromapBuildSizesInfoEXT(struct temporary_objects*, struct wrapper_device *device,
                          VkMicromapBuildSizesInfoEXT *out_info,
                          const VkMicromapBuildSizesInfoEXT *in_info);


void
unwrap_VkMicromapCreateInfoEXT_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkMicromapCreateInfoEXT *out_info,
                          const VkMicromapCreateInfoEXT *in_info);

void
unwrap_VkMicromapCreateInfoEXT(struct temporary_objects*, struct wrapper_device *device,
                          VkMicromapCreateInfoEXT *out_info,
                          const VkMicromapCreateInfoEXT *in_info);


void
unwrap_VkMultisamplePropertiesEXT_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkMultisamplePropertiesEXT *out_info,
                          const VkMultisamplePropertiesEXT *in_info);

void
unwrap_VkMultisamplePropertiesEXT(struct temporary_objects*, struct wrapper_device *device,
                          VkMultisamplePropertiesEXT *out_info,
                          const VkMultisamplePropertiesEXT *in_info);


void
unwrap_VkMultisampledRenderToSingleSampledInfoEXT_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkMultisampledRenderToSingleSampledInfoEXT *out_info,
                          const VkMultisampledRenderToSingleSampledInfoEXT *in_info);

void
unwrap_VkMultisampledRenderToSingleSampledInfoEXT(struct temporary_objects*, struct wrapper_device *device,
                          VkMultisampledRenderToSingleSampledInfoEXT *out_info,
                          const VkMultisampledRenderToSingleSampledInfoEXT *in_info);


void
unwrap_VkMultiviewPerViewAttributesInfoNVX_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkMultiviewPerViewAttributesInfoNVX *out_info,
                          const VkMultiviewPerViewAttributesInfoNVX *in_info);

void
unwrap_VkMultiviewPerViewAttributesInfoNVX(struct temporary_objects*, struct wrapper_device *device,
                          VkMultiviewPerViewAttributesInfoNVX *out_info,
                          const VkMultiviewPerViewAttributesInfoNVX *in_info);


void
unwrap_VkMultiviewPerViewRenderAreasRenderPassBeginInfoQCOM_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkMultiviewPerViewRenderAreasRenderPassBeginInfoQCOM *out_info,
                          const VkMultiviewPerViewRenderAreasRenderPassBeginInfoQCOM *in_info);

void
unwrap_VkMultiviewPerViewRenderAreasRenderPassBeginInfoQCOM(struct temporary_objects*, struct wrapper_device *device,
                          VkMultiviewPerViewRenderAreasRenderPassBeginInfoQCOM *out_info,
                          const VkMultiviewPerViewRenderAreasRenderPassBeginInfoQCOM *in_info);


void
unwrap_VkMutableDescriptorTypeCreateInfoEXT_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkMutableDescriptorTypeCreateInfoEXT *out_info,
                          const VkMutableDescriptorTypeCreateInfoEXT *in_info);

void
unwrap_VkMutableDescriptorTypeCreateInfoEXT(struct temporary_objects*, struct wrapper_device *device,
                          VkMutableDescriptorTypeCreateInfoEXT *out_info,
                          const VkMutableDescriptorTypeCreateInfoEXT *in_info);


void
unwrap_VkNativeBufferANDROID_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkNativeBufferANDROID *out_info,
                          const VkNativeBufferANDROID *in_info);

void
unwrap_VkNativeBufferANDROID(struct temporary_objects*, struct wrapper_device *device,
                          VkNativeBufferANDROID *out_info,
                          const VkNativeBufferANDROID *in_info);


void
unwrap_VkOpaqueCaptureDescriptorDataCreateInfoEXT_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkOpaqueCaptureDescriptorDataCreateInfoEXT *out_info,
                          const VkOpaqueCaptureDescriptorDataCreateInfoEXT *in_info);

void
unwrap_VkOpaqueCaptureDescriptorDataCreateInfoEXT(struct temporary_objects*, struct wrapper_device *device,
                          VkOpaqueCaptureDescriptorDataCreateInfoEXT *out_info,
                          const VkOpaqueCaptureDescriptorDataCreateInfoEXT *in_info);


void
unwrap_VkOpticalFlowExecuteInfoNV_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkOpticalFlowExecuteInfoNV *out_info,
                          const VkOpticalFlowExecuteInfoNV *in_info);

void
unwrap_VkOpticalFlowExecuteInfoNV(struct temporary_objects*, struct wrapper_device *device,
                          VkOpticalFlowExecuteInfoNV *out_info,
                          const VkOpticalFlowExecuteInfoNV *in_info);


void
unwrap_VkOpticalFlowImageFormatInfoNV_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkOpticalFlowImageFormatInfoNV *out_info,
                          const VkOpticalFlowImageFormatInfoNV *in_info);

void
unwrap_VkOpticalFlowImageFormatInfoNV(struct temporary_objects*, struct wrapper_device *device,
                          VkOpticalFlowImageFormatInfoNV *out_info,
                          const VkOpticalFlowImageFormatInfoNV *in_info);


void
unwrap_VkOpticalFlowImageFormatPropertiesNV_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkOpticalFlowImageFormatPropertiesNV *out_info,
                          const VkOpticalFlowImageFormatPropertiesNV *in_info);

void
unwrap_VkOpticalFlowImageFormatPropertiesNV(struct temporary_objects*, struct wrapper_device *device,
                          VkOpticalFlowImageFormatPropertiesNV *out_info,
                          const VkOpticalFlowImageFormatPropertiesNV *in_info);


void
unwrap_VkOpticalFlowSessionCreateInfoNV_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkOpticalFlowSessionCreateInfoNV *out_info,
                          const VkOpticalFlowSessionCreateInfoNV *in_info);

void
unwrap_VkOpticalFlowSessionCreateInfoNV(struct temporary_objects*, struct wrapper_device *device,
                          VkOpticalFlowSessionCreateInfoNV *out_info,
                          const VkOpticalFlowSessionCreateInfoNV *in_info);


void
unwrap_VkOpticalFlowSessionCreatePrivateDataInfoNV_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkOpticalFlowSessionCreatePrivateDataInfoNV *out_info,
                          const VkOpticalFlowSessionCreatePrivateDataInfoNV *in_info);

void
unwrap_VkOpticalFlowSessionCreatePrivateDataInfoNV(struct temporary_objects*, struct wrapper_device *device,
                          VkOpticalFlowSessionCreatePrivateDataInfoNV *out_info,
                          const VkOpticalFlowSessionCreatePrivateDataInfoNV *in_info);


void
unwrap_VkOutOfBandQueueTypeInfoNV_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkOutOfBandQueueTypeInfoNV *out_info,
                          const VkOutOfBandQueueTypeInfoNV *in_info);

void
unwrap_VkOutOfBandQueueTypeInfoNV(struct temporary_objects*, struct wrapper_device *device,
                          VkOutOfBandQueueTypeInfoNV *out_info,
                          const VkOutOfBandQueueTypeInfoNV *in_info);


void
unwrap_VkPerformanceConfigurationAcquireInfoINTEL_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPerformanceConfigurationAcquireInfoINTEL *out_info,
                          const VkPerformanceConfigurationAcquireInfoINTEL *in_info);

void
unwrap_VkPerformanceConfigurationAcquireInfoINTEL(struct temporary_objects*, struct wrapper_device *device,
                          VkPerformanceConfigurationAcquireInfoINTEL *out_info,
                          const VkPerformanceConfigurationAcquireInfoINTEL *in_info);


void
unwrap_VkPerformanceCounterDescriptionKHR_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPerformanceCounterDescriptionKHR *out_info,
                          const VkPerformanceCounterDescriptionKHR *in_info);

void
unwrap_VkPerformanceCounterDescriptionKHR(struct temporary_objects*, struct wrapper_device *device,
                          VkPerformanceCounterDescriptionKHR *out_info,
                          const VkPerformanceCounterDescriptionKHR *in_info);


void
unwrap_VkPerformanceCounterKHR_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPerformanceCounterKHR *out_info,
                          const VkPerformanceCounterKHR *in_info);

void
unwrap_VkPerformanceCounterKHR(struct temporary_objects*, struct wrapper_device *device,
                          VkPerformanceCounterKHR *out_info,
                          const VkPerformanceCounterKHR *in_info);


void
unwrap_VkPerformanceMarkerInfoINTEL_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPerformanceMarkerInfoINTEL *out_info,
                          const VkPerformanceMarkerInfoINTEL *in_info);

void
unwrap_VkPerformanceMarkerInfoINTEL(struct temporary_objects*, struct wrapper_device *device,
                          VkPerformanceMarkerInfoINTEL *out_info,
                          const VkPerformanceMarkerInfoINTEL *in_info);


void
unwrap_VkPerformanceOverrideInfoINTEL_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPerformanceOverrideInfoINTEL *out_info,
                          const VkPerformanceOverrideInfoINTEL *in_info);

void
unwrap_VkPerformanceOverrideInfoINTEL(struct temporary_objects*, struct wrapper_device *device,
                          VkPerformanceOverrideInfoINTEL *out_info,
                          const VkPerformanceOverrideInfoINTEL *in_info);


void
unwrap_VkPerformanceQuerySubmitInfoKHR_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPerformanceQuerySubmitInfoKHR *out_info,
                          const VkPerformanceQuerySubmitInfoKHR *in_info);

void
unwrap_VkPerformanceQuerySubmitInfoKHR(struct temporary_objects*, struct wrapper_device *device,
                          VkPerformanceQuerySubmitInfoKHR *out_info,
                          const VkPerformanceQuerySubmitInfoKHR *in_info);


void
unwrap_VkPerformanceStreamMarkerInfoINTEL_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPerformanceStreamMarkerInfoINTEL *out_info,
                          const VkPerformanceStreamMarkerInfoINTEL *in_info);

void
unwrap_VkPerformanceStreamMarkerInfoINTEL(struct temporary_objects*, struct wrapper_device *device,
                          VkPerformanceStreamMarkerInfoINTEL *out_info,
                          const VkPerformanceStreamMarkerInfoINTEL *in_info);


void
unwrap_VkPhysicalDevice16BitStorageFeatures_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDevice16BitStorageFeatures *out_info,
                          const VkPhysicalDevice16BitStorageFeatures *in_info);

void
unwrap_VkPhysicalDevice16BitStorageFeatures(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDevice16BitStorageFeatures *out_info,
                          const VkPhysicalDevice16BitStorageFeatures *in_info);


void
unwrap_VkPhysicalDevice4444FormatsFeaturesEXT_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDevice4444FormatsFeaturesEXT *out_info,
                          const VkPhysicalDevice4444FormatsFeaturesEXT *in_info);

void
unwrap_VkPhysicalDevice4444FormatsFeaturesEXT(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDevice4444FormatsFeaturesEXT *out_info,
                          const VkPhysicalDevice4444FormatsFeaturesEXT *in_info);


void
unwrap_VkPhysicalDevice8BitStorageFeatures_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDevice8BitStorageFeatures *out_info,
                          const VkPhysicalDevice8BitStorageFeatures *in_info);

void
unwrap_VkPhysicalDevice8BitStorageFeatures(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDevice8BitStorageFeatures *out_info,
                          const VkPhysicalDevice8BitStorageFeatures *in_info);


void
unwrap_VkPhysicalDeviceASTCDecodeFeaturesEXT_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceASTCDecodeFeaturesEXT *out_info,
                          const VkPhysicalDeviceASTCDecodeFeaturesEXT *in_info);

void
unwrap_VkPhysicalDeviceASTCDecodeFeaturesEXT(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceASTCDecodeFeaturesEXT *out_info,
                          const VkPhysicalDeviceASTCDecodeFeaturesEXT *in_info);


void
unwrap_VkPhysicalDeviceAccelerationStructureFeaturesKHR_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceAccelerationStructureFeaturesKHR *out_info,
                          const VkPhysicalDeviceAccelerationStructureFeaturesKHR *in_info);

void
unwrap_VkPhysicalDeviceAccelerationStructureFeaturesKHR(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceAccelerationStructureFeaturesKHR *out_info,
                          const VkPhysicalDeviceAccelerationStructureFeaturesKHR *in_info);


void
unwrap_VkPhysicalDeviceAccelerationStructurePropertiesKHR_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceAccelerationStructurePropertiesKHR *out_info,
                          const VkPhysicalDeviceAccelerationStructurePropertiesKHR *in_info);

void
unwrap_VkPhysicalDeviceAccelerationStructurePropertiesKHR(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceAccelerationStructurePropertiesKHR *out_info,
                          const VkPhysicalDeviceAccelerationStructurePropertiesKHR *in_info);


void
unwrap_VkPhysicalDeviceAddressBindingReportFeaturesEXT_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceAddressBindingReportFeaturesEXT *out_info,
                          const VkPhysicalDeviceAddressBindingReportFeaturesEXT *in_info);

void
unwrap_VkPhysicalDeviceAddressBindingReportFeaturesEXT(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceAddressBindingReportFeaturesEXT *out_info,
                          const VkPhysicalDeviceAddressBindingReportFeaturesEXT *in_info);


void
unwrap_VkPhysicalDeviceAmigoProfilingFeaturesSEC_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceAmigoProfilingFeaturesSEC *out_info,
                          const VkPhysicalDeviceAmigoProfilingFeaturesSEC *in_info);

void
unwrap_VkPhysicalDeviceAmigoProfilingFeaturesSEC(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceAmigoProfilingFeaturesSEC *out_info,
                          const VkPhysicalDeviceAmigoProfilingFeaturesSEC *in_info);


void
unwrap_VkPhysicalDeviceAttachmentFeedbackLoopDynamicStateFeaturesEXT_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceAttachmentFeedbackLoopDynamicStateFeaturesEXT *out_info,
                          const VkPhysicalDeviceAttachmentFeedbackLoopDynamicStateFeaturesEXT *in_info);

void
unwrap_VkPhysicalDeviceAttachmentFeedbackLoopDynamicStateFeaturesEXT(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceAttachmentFeedbackLoopDynamicStateFeaturesEXT *out_info,
                          const VkPhysicalDeviceAttachmentFeedbackLoopDynamicStateFeaturesEXT *in_info);


void
unwrap_VkPhysicalDeviceAttachmentFeedbackLoopLayoutFeaturesEXT_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceAttachmentFeedbackLoopLayoutFeaturesEXT *out_info,
                          const VkPhysicalDeviceAttachmentFeedbackLoopLayoutFeaturesEXT *in_info);

void
unwrap_VkPhysicalDeviceAttachmentFeedbackLoopLayoutFeaturesEXT(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceAttachmentFeedbackLoopLayoutFeaturesEXT *out_info,
                          const VkPhysicalDeviceAttachmentFeedbackLoopLayoutFeaturesEXT *in_info);


void
unwrap_VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT *out_info,
                          const VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT *in_info);

void
unwrap_VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT *out_info,
                          const VkPhysicalDeviceBlendOperationAdvancedFeaturesEXT *in_info);


void
unwrap_VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT *out_info,
                          const VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT *in_info);

void
unwrap_VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT *out_info,
                          const VkPhysicalDeviceBlendOperationAdvancedPropertiesEXT *in_info);


void
unwrap_VkPhysicalDeviceBorderColorSwizzleFeaturesEXT_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceBorderColorSwizzleFeaturesEXT *out_info,
                          const VkPhysicalDeviceBorderColorSwizzleFeaturesEXT *in_info);

void
unwrap_VkPhysicalDeviceBorderColorSwizzleFeaturesEXT(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceBorderColorSwizzleFeaturesEXT *out_info,
                          const VkPhysicalDeviceBorderColorSwizzleFeaturesEXT *in_info);


void
unwrap_VkPhysicalDeviceBufferDeviceAddressFeatures_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceBufferDeviceAddressFeatures *out_info,
                          const VkPhysicalDeviceBufferDeviceAddressFeatures *in_info);

void
unwrap_VkPhysicalDeviceBufferDeviceAddressFeatures(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceBufferDeviceAddressFeatures *out_info,
                          const VkPhysicalDeviceBufferDeviceAddressFeatures *in_info);


void
unwrap_VkPhysicalDeviceBufferDeviceAddressFeaturesEXT_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceBufferDeviceAddressFeaturesEXT *out_info,
                          const VkPhysicalDeviceBufferDeviceAddressFeaturesEXT *in_info);

void
unwrap_VkPhysicalDeviceBufferDeviceAddressFeaturesEXT(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceBufferDeviceAddressFeaturesEXT *out_info,
                          const VkPhysicalDeviceBufferDeviceAddressFeaturesEXT *in_info);


void
unwrap_VkPhysicalDeviceClusterCullingShaderFeaturesHUAWEI_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceClusterCullingShaderFeaturesHUAWEI *out_info,
                          const VkPhysicalDeviceClusterCullingShaderFeaturesHUAWEI *in_info);

void
unwrap_VkPhysicalDeviceClusterCullingShaderFeaturesHUAWEI(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceClusterCullingShaderFeaturesHUAWEI *out_info,
                          const VkPhysicalDeviceClusterCullingShaderFeaturesHUAWEI *in_info);


void
unwrap_VkPhysicalDeviceClusterCullingShaderPropertiesHUAWEI_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceClusterCullingShaderPropertiesHUAWEI *out_info,
                          const VkPhysicalDeviceClusterCullingShaderPropertiesHUAWEI *in_info);

void
unwrap_VkPhysicalDeviceClusterCullingShaderPropertiesHUAWEI(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceClusterCullingShaderPropertiesHUAWEI *out_info,
                          const VkPhysicalDeviceClusterCullingShaderPropertiesHUAWEI *in_info);


void
unwrap_VkPhysicalDeviceClusterCullingShaderVrsFeaturesHUAWEI_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceClusterCullingShaderVrsFeaturesHUAWEI *out_info,
                          const VkPhysicalDeviceClusterCullingShaderVrsFeaturesHUAWEI *in_info);

void
unwrap_VkPhysicalDeviceClusterCullingShaderVrsFeaturesHUAWEI(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceClusterCullingShaderVrsFeaturesHUAWEI *out_info,
                          const VkPhysicalDeviceClusterCullingShaderVrsFeaturesHUAWEI *in_info);


void
unwrap_VkPhysicalDeviceCoherentMemoryFeaturesAMD_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceCoherentMemoryFeaturesAMD *out_info,
                          const VkPhysicalDeviceCoherentMemoryFeaturesAMD *in_info);

void
unwrap_VkPhysicalDeviceCoherentMemoryFeaturesAMD(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceCoherentMemoryFeaturesAMD *out_info,
                          const VkPhysicalDeviceCoherentMemoryFeaturesAMD *in_info);


void
unwrap_VkPhysicalDeviceColorWriteEnableFeaturesEXT_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceColorWriteEnableFeaturesEXT *out_info,
                          const VkPhysicalDeviceColorWriteEnableFeaturesEXT *in_info);

void
unwrap_VkPhysicalDeviceColorWriteEnableFeaturesEXT(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceColorWriteEnableFeaturesEXT *out_info,
                          const VkPhysicalDeviceColorWriteEnableFeaturesEXT *in_info);


void
unwrap_VkPhysicalDeviceComputeShaderDerivativesFeaturesNV_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceComputeShaderDerivativesFeaturesNV *out_info,
                          const VkPhysicalDeviceComputeShaderDerivativesFeaturesNV *in_info);

void
unwrap_VkPhysicalDeviceComputeShaderDerivativesFeaturesNV(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceComputeShaderDerivativesFeaturesNV *out_info,
                          const VkPhysicalDeviceComputeShaderDerivativesFeaturesNV *in_info);


void
unwrap_VkPhysicalDeviceConditionalRenderingFeaturesEXT_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceConditionalRenderingFeaturesEXT *out_info,
                          const VkPhysicalDeviceConditionalRenderingFeaturesEXT *in_info);

void
unwrap_VkPhysicalDeviceConditionalRenderingFeaturesEXT(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceConditionalRenderingFeaturesEXT *out_info,
                          const VkPhysicalDeviceConditionalRenderingFeaturesEXT *in_info);


void
unwrap_VkPhysicalDeviceConservativeRasterizationPropertiesEXT_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceConservativeRasterizationPropertiesEXT *out_info,
                          const VkPhysicalDeviceConservativeRasterizationPropertiesEXT *in_info);

void
unwrap_VkPhysicalDeviceConservativeRasterizationPropertiesEXT(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceConservativeRasterizationPropertiesEXT *out_info,
                          const VkPhysicalDeviceConservativeRasterizationPropertiesEXT *in_info);


void
unwrap_VkPhysicalDeviceCooperativeMatrixFeaturesKHR_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceCooperativeMatrixFeaturesKHR *out_info,
                          const VkPhysicalDeviceCooperativeMatrixFeaturesKHR *in_info);

void
unwrap_VkPhysicalDeviceCooperativeMatrixFeaturesKHR(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceCooperativeMatrixFeaturesKHR *out_info,
                          const VkPhysicalDeviceCooperativeMatrixFeaturesKHR *in_info);


void
unwrap_VkPhysicalDeviceCooperativeMatrixFeaturesNV_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceCooperativeMatrixFeaturesNV *out_info,
                          const VkPhysicalDeviceCooperativeMatrixFeaturesNV *in_info);

void
unwrap_VkPhysicalDeviceCooperativeMatrixFeaturesNV(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceCooperativeMatrixFeaturesNV *out_info,
                          const VkPhysicalDeviceCooperativeMatrixFeaturesNV *in_info);


void
unwrap_VkPhysicalDeviceCooperativeMatrixPropertiesKHR_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceCooperativeMatrixPropertiesKHR *out_info,
                          const VkPhysicalDeviceCooperativeMatrixPropertiesKHR *in_info);

void
unwrap_VkPhysicalDeviceCooperativeMatrixPropertiesKHR(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceCooperativeMatrixPropertiesKHR *out_info,
                          const VkPhysicalDeviceCooperativeMatrixPropertiesKHR *in_info);


void
unwrap_VkPhysicalDeviceCooperativeMatrixPropertiesNV_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceCooperativeMatrixPropertiesNV *out_info,
                          const VkPhysicalDeviceCooperativeMatrixPropertiesNV *in_info);

void
unwrap_VkPhysicalDeviceCooperativeMatrixPropertiesNV(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceCooperativeMatrixPropertiesNV *out_info,
                          const VkPhysicalDeviceCooperativeMatrixPropertiesNV *in_info);


void
unwrap_VkPhysicalDeviceCopyMemoryIndirectFeaturesNV_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceCopyMemoryIndirectFeaturesNV *out_info,
                          const VkPhysicalDeviceCopyMemoryIndirectFeaturesNV *in_info);

void
unwrap_VkPhysicalDeviceCopyMemoryIndirectFeaturesNV(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceCopyMemoryIndirectFeaturesNV *out_info,
                          const VkPhysicalDeviceCopyMemoryIndirectFeaturesNV *in_info);


void
unwrap_VkPhysicalDeviceCopyMemoryIndirectPropertiesNV_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceCopyMemoryIndirectPropertiesNV *out_info,
                          const VkPhysicalDeviceCopyMemoryIndirectPropertiesNV *in_info);

void
unwrap_VkPhysicalDeviceCopyMemoryIndirectPropertiesNV(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceCopyMemoryIndirectPropertiesNV *out_info,
                          const VkPhysicalDeviceCopyMemoryIndirectPropertiesNV *in_info);


void
unwrap_VkPhysicalDeviceCornerSampledImageFeaturesNV_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceCornerSampledImageFeaturesNV *out_info,
                          const VkPhysicalDeviceCornerSampledImageFeaturesNV *in_info);

void
unwrap_VkPhysicalDeviceCornerSampledImageFeaturesNV(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceCornerSampledImageFeaturesNV *out_info,
                          const VkPhysicalDeviceCornerSampledImageFeaturesNV *in_info);


void
unwrap_VkPhysicalDeviceCoverageReductionModeFeaturesNV_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceCoverageReductionModeFeaturesNV *out_info,
                          const VkPhysicalDeviceCoverageReductionModeFeaturesNV *in_info);

void
unwrap_VkPhysicalDeviceCoverageReductionModeFeaturesNV(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceCoverageReductionModeFeaturesNV *out_info,
                          const VkPhysicalDeviceCoverageReductionModeFeaturesNV *in_info);


void
unwrap_VkPhysicalDeviceCubicClampFeaturesQCOM_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceCubicClampFeaturesQCOM *out_info,
                          const VkPhysicalDeviceCubicClampFeaturesQCOM *in_info);

void
unwrap_VkPhysicalDeviceCubicClampFeaturesQCOM(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceCubicClampFeaturesQCOM *out_info,
                          const VkPhysicalDeviceCubicClampFeaturesQCOM *in_info);


void
unwrap_VkPhysicalDeviceCubicWeightsFeaturesQCOM_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceCubicWeightsFeaturesQCOM *out_info,
                          const VkPhysicalDeviceCubicWeightsFeaturesQCOM *in_info);

void
unwrap_VkPhysicalDeviceCubicWeightsFeaturesQCOM(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceCubicWeightsFeaturesQCOM *out_info,
                          const VkPhysicalDeviceCubicWeightsFeaturesQCOM *in_info);


void
unwrap_VkPhysicalDeviceCudaKernelLaunchFeaturesNV_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceCudaKernelLaunchFeaturesNV *out_info,
                          const VkPhysicalDeviceCudaKernelLaunchFeaturesNV *in_info);

void
unwrap_VkPhysicalDeviceCudaKernelLaunchFeaturesNV(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceCudaKernelLaunchFeaturesNV *out_info,
                          const VkPhysicalDeviceCudaKernelLaunchFeaturesNV *in_info);


void
unwrap_VkPhysicalDeviceCudaKernelLaunchPropertiesNV_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceCudaKernelLaunchPropertiesNV *out_info,
                          const VkPhysicalDeviceCudaKernelLaunchPropertiesNV *in_info);

void
unwrap_VkPhysicalDeviceCudaKernelLaunchPropertiesNV(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceCudaKernelLaunchPropertiesNV *out_info,
                          const VkPhysicalDeviceCudaKernelLaunchPropertiesNV *in_info);


void
unwrap_VkPhysicalDeviceCustomBorderColorFeaturesEXT_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceCustomBorderColorFeaturesEXT *out_info,
                          const VkPhysicalDeviceCustomBorderColorFeaturesEXT *in_info);

void
unwrap_VkPhysicalDeviceCustomBorderColorFeaturesEXT(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceCustomBorderColorFeaturesEXT *out_info,
                          const VkPhysicalDeviceCustomBorderColorFeaturesEXT *in_info);


void
unwrap_VkPhysicalDeviceCustomBorderColorPropertiesEXT_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceCustomBorderColorPropertiesEXT *out_info,
                          const VkPhysicalDeviceCustomBorderColorPropertiesEXT *in_info);

void
unwrap_VkPhysicalDeviceCustomBorderColorPropertiesEXT(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceCustomBorderColorPropertiesEXT *out_info,
                          const VkPhysicalDeviceCustomBorderColorPropertiesEXT *in_info);


void
unwrap_VkPhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV *out_info,
                          const VkPhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV *in_info);

void
unwrap_VkPhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV *out_info,
                          const VkPhysicalDeviceDedicatedAllocationImageAliasingFeaturesNV *in_info);


void
unwrap_VkPhysicalDeviceDepthBiasControlFeaturesEXT_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceDepthBiasControlFeaturesEXT *out_info,
                          const VkPhysicalDeviceDepthBiasControlFeaturesEXT *in_info);

void
unwrap_VkPhysicalDeviceDepthBiasControlFeaturesEXT(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceDepthBiasControlFeaturesEXT *out_info,
                          const VkPhysicalDeviceDepthBiasControlFeaturesEXT *in_info);


void
unwrap_VkPhysicalDeviceDepthClampZeroOneFeaturesEXT_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceDepthClampZeroOneFeaturesEXT *out_info,
                          const VkPhysicalDeviceDepthClampZeroOneFeaturesEXT *in_info);

void
unwrap_VkPhysicalDeviceDepthClampZeroOneFeaturesEXT(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceDepthClampZeroOneFeaturesEXT *out_info,
                          const VkPhysicalDeviceDepthClampZeroOneFeaturesEXT *in_info);


void
unwrap_VkPhysicalDeviceDepthClipControlFeaturesEXT_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceDepthClipControlFeaturesEXT *out_info,
                          const VkPhysicalDeviceDepthClipControlFeaturesEXT *in_info);

void
unwrap_VkPhysicalDeviceDepthClipControlFeaturesEXT(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceDepthClipControlFeaturesEXT *out_info,
                          const VkPhysicalDeviceDepthClipControlFeaturesEXT *in_info);


void
unwrap_VkPhysicalDeviceDepthClipEnableFeaturesEXT_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceDepthClipEnableFeaturesEXT *out_info,
                          const VkPhysicalDeviceDepthClipEnableFeaturesEXT *in_info);

void
unwrap_VkPhysicalDeviceDepthClipEnableFeaturesEXT(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceDepthClipEnableFeaturesEXT *out_info,
                          const VkPhysicalDeviceDepthClipEnableFeaturesEXT *in_info);


void
unwrap_VkPhysicalDeviceDepthStencilResolveProperties_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceDepthStencilResolveProperties *out_info,
                          const VkPhysicalDeviceDepthStencilResolveProperties *in_info);

void
unwrap_VkPhysicalDeviceDepthStencilResolveProperties(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceDepthStencilResolveProperties *out_info,
                          const VkPhysicalDeviceDepthStencilResolveProperties *in_info);


void
unwrap_VkPhysicalDeviceDescriptorBufferDensityMapPropertiesEXT_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceDescriptorBufferDensityMapPropertiesEXT *out_info,
                          const VkPhysicalDeviceDescriptorBufferDensityMapPropertiesEXT *in_info);

void
unwrap_VkPhysicalDeviceDescriptorBufferDensityMapPropertiesEXT(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceDescriptorBufferDensityMapPropertiesEXT *out_info,
                          const VkPhysicalDeviceDescriptorBufferDensityMapPropertiesEXT *in_info);


void
unwrap_VkPhysicalDeviceDescriptorBufferFeaturesEXT_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceDescriptorBufferFeaturesEXT *out_info,
                          const VkPhysicalDeviceDescriptorBufferFeaturesEXT *in_info);

void
unwrap_VkPhysicalDeviceDescriptorBufferFeaturesEXT(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceDescriptorBufferFeaturesEXT *out_info,
                          const VkPhysicalDeviceDescriptorBufferFeaturesEXT *in_info);


void
unwrap_VkPhysicalDeviceDescriptorBufferPropertiesEXT_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceDescriptorBufferPropertiesEXT *out_info,
                          const VkPhysicalDeviceDescriptorBufferPropertiesEXT *in_info);

void
unwrap_VkPhysicalDeviceDescriptorBufferPropertiesEXT(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceDescriptorBufferPropertiesEXT *out_info,
                          const VkPhysicalDeviceDescriptorBufferPropertiesEXT *in_info);


void
unwrap_VkPhysicalDeviceDescriptorIndexingFeatures_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceDescriptorIndexingFeatures *out_info,
                          const VkPhysicalDeviceDescriptorIndexingFeatures *in_info);

void
unwrap_VkPhysicalDeviceDescriptorIndexingFeatures(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceDescriptorIndexingFeatures *out_info,
                          const VkPhysicalDeviceDescriptorIndexingFeatures *in_info);


void
unwrap_VkPhysicalDeviceDescriptorIndexingProperties_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceDescriptorIndexingProperties *out_info,
                          const VkPhysicalDeviceDescriptorIndexingProperties *in_info);

void
unwrap_VkPhysicalDeviceDescriptorIndexingProperties(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceDescriptorIndexingProperties *out_info,
                          const VkPhysicalDeviceDescriptorIndexingProperties *in_info);


void
unwrap_VkPhysicalDeviceDescriptorPoolOverallocationFeaturesNV_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceDescriptorPoolOverallocationFeaturesNV *out_info,
                          const VkPhysicalDeviceDescriptorPoolOverallocationFeaturesNV *in_info);

void
unwrap_VkPhysicalDeviceDescriptorPoolOverallocationFeaturesNV(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceDescriptorPoolOverallocationFeaturesNV *out_info,
                          const VkPhysicalDeviceDescriptorPoolOverallocationFeaturesNV *in_info);


void
unwrap_VkPhysicalDeviceDescriptorSetHostMappingFeaturesVALVE_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceDescriptorSetHostMappingFeaturesVALVE *out_info,
                          const VkPhysicalDeviceDescriptorSetHostMappingFeaturesVALVE *in_info);

void
unwrap_VkPhysicalDeviceDescriptorSetHostMappingFeaturesVALVE(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceDescriptorSetHostMappingFeaturesVALVE *out_info,
                          const VkPhysicalDeviceDescriptorSetHostMappingFeaturesVALVE *in_info);


void
unwrap_VkPhysicalDeviceDeviceGeneratedCommandsComputeFeaturesNV_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceDeviceGeneratedCommandsComputeFeaturesNV *out_info,
                          const VkPhysicalDeviceDeviceGeneratedCommandsComputeFeaturesNV *in_info);

void
unwrap_VkPhysicalDeviceDeviceGeneratedCommandsComputeFeaturesNV(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceDeviceGeneratedCommandsComputeFeaturesNV *out_info,
                          const VkPhysicalDeviceDeviceGeneratedCommandsComputeFeaturesNV *in_info);


void
unwrap_VkPhysicalDeviceDeviceGeneratedCommandsFeaturesNV_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceDeviceGeneratedCommandsFeaturesNV *out_info,
                          const VkPhysicalDeviceDeviceGeneratedCommandsFeaturesNV *in_info);

void
unwrap_VkPhysicalDeviceDeviceGeneratedCommandsFeaturesNV(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceDeviceGeneratedCommandsFeaturesNV *out_info,
                          const VkPhysicalDeviceDeviceGeneratedCommandsFeaturesNV *in_info);


void
unwrap_VkPhysicalDeviceDeviceGeneratedCommandsPropertiesNV_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceDeviceGeneratedCommandsPropertiesNV *out_info,
                          const VkPhysicalDeviceDeviceGeneratedCommandsPropertiesNV *in_info);

void
unwrap_VkPhysicalDeviceDeviceGeneratedCommandsPropertiesNV(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceDeviceGeneratedCommandsPropertiesNV *out_info,
                          const VkPhysicalDeviceDeviceGeneratedCommandsPropertiesNV *in_info);


void
unwrap_VkPhysicalDeviceDeviceMemoryReportFeaturesEXT_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceDeviceMemoryReportFeaturesEXT *out_info,
                          const VkPhysicalDeviceDeviceMemoryReportFeaturesEXT *in_info);

void
unwrap_VkPhysicalDeviceDeviceMemoryReportFeaturesEXT(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceDeviceMemoryReportFeaturesEXT *out_info,
                          const VkPhysicalDeviceDeviceMemoryReportFeaturesEXT *in_info);


void
unwrap_VkPhysicalDeviceDiagnosticsConfigFeaturesNV_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceDiagnosticsConfigFeaturesNV *out_info,
                          const VkPhysicalDeviceDiagnosticsConfigFeaturesNV *in_info);

void
unwrap_VkPhysicalDeviceDiagnosticsConfigFeaturesNV(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceDiagnosticsConfigFeaturesNV *out_info,
                          const VkPhysicalDeviceDiagnosticsConfigFeaturesNV *in_info);


void
unwrap_VkPhysicalDeviceDiscardRectanglePropertiesEXT_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceDiscardRectanglePropertiesEXT *out_info,
                          const VkPhysicalDeviceDiscardRectanglePropertiesEXT *in_info);

void
unwrap_VkPhysicalDeviceDiscardRectanglePropertiesEXT(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceDiscardRectanglePropertiesEXT *out_info,
                          const VkPhysicalDeviceDiscardRectanglePropertiesEXT *in_info);


void
unwrap_VkPhysicalDeviceDriverProperties_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceDriverProperties *out_info,
                          const VkPhysicalDeviceDriverProperties *in_info);

void
unwrap_VkPhysicalDeviceDriverProperties(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceDriverProperties *out_info,
                          const VkPhysicalDeviceDriverProperties *in_info);


void
unwrap_VkPhysicalDeviceDrmPropertiesEXT_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceDrmPropertiesEXT *out_info,
                          const VkPhysicalDeviceDrmPropertiesEXT *in_info);

void
unwrap_VkPhysicalDeviceDrmPropertiesEXT(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceDrmPropertiesEXT *out_info,
                          const VkPhysicalDeviceDrmPropertiesEXT *in_info);


void
unwrap_VkPhysicalDeviceDynamicRenderingFeatures_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceDynamicRenderingFeatures *out_info,
                          const VkPhysicalDeviceDynamicRenderingFeatures *in_info);

void
unwrap_VkPhysicalDeviceDynamicRenderingFeatures(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceDynamicRenderingFeatures *out_info,
                          const VkPhysicalDeviceDynamicRenderingFeatures *in_info);


void
unwrap_VkPhysicalDeviceDynamicRenderingLocalReadFeaturesKHR_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceDynamicRenderingLocalReadFeaturesKHR *out_info,
                          const VkPhysicalDeviceDynamicRenderingLocalReadFeaturesKHR *in_info);

void
unwrap_VkPhysicalDeviceDynamicRenderingLocalReadFeaturesKHR(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceDynamicRenderingLocalReadFeaturesKHR *out_info,
                          const VkPhysicalDeviceDynamicRenderingLocalReadFeaturesKHR *in_info);


void
unwrap_VkPhysicalDeviceDynamicRenderingUnusedAttachmentsFeaturesEXT_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceDynamicRenderingUnusedAttachmentsFeaturesEXT *out_info,
                          const VkPhysicalDeviceDynamicRenderingUnusedAttachmentsFeaturesEXT *in_info);

void
unwrap_VkPhysicalDeviceDynamicRenderingUnusedAttachmentsFeaturesEXT(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceDynamicRenderingUnusedAttachmentsFeaturesEXT *out_info,
                          const VkPhysicalDeviceDynamicRenderingUnusedAttachmentsFeaturesEXT *in_info);


void
unwrap_VkPhysicalDeviceExclusiveScissorFeaturesNV_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceExclusiveScissorFeaturesNV *out_info,
                          const VkPhysicalDeviceExclusiveScissorFeaturesNV *in_info);

void
unwrap_VkPhysicalDeviceExclusiveScissorFeaturesNV(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceExclusiveScissorFeaturesNV *out_info,
                          const VkPhysicalDeviceExclusiveScissorFeaturesNV *in_info);


void
unwrap_VkPhysicalDeviceExtendedDynamicState2FeaturesEXT_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceExtendedDynamicState2FeaturesEXT *out_info,
                          const VkPhysicalDeviceExtendedDynamicState2FeaturesEXT *in_info);

void
unwrap_VkPhysicalDeviceExtendedDynamicState2FeaturesEXT(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceExtendedDynamicState2FeaturesEXT *out_info,
                          const VkPhysicalDeviceExtendedDynamicState2FeaturesEXT *in_info);


void
unwrap_VkPhysicalDeviceExtendedDynamicState3FeaturesEXT_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceExtendedDynamicState3FeaturesEXT *out_info,
                          const VkPhysicalDeviceExtendedDynamicState3FeaturesEXT *in_info);

void
unwrap_VkPhysicalDeviceExtendedDynamicState3FeaturesEXT(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceExtendedDynamicState3FeaturesEXT *out_info,
                          const VkPhysicalDeviceExtendedDynamicState3FeaturesEXT *in_info);


void
unwrap_VkPhysicalDeviceExtendedDynamicState3PropertiesEXT_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceExtendedDynamicState3PropertiesEXT *out_info,
                          const VkPhysicalDeviceExtendedDynamicState3PropertiesEXT *in_info);

void
unwrap_VkPhysicalDeviceExtendedDynamicState3PropertiesEXT(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceExtendedDynamicState3PropertiesEXT *out_info,
                          const VkPhysicalDeviceExtendedDynamicState3PropertiesEXT *in_info);


void
unwrap_VkPhysicalDeviceExtendedDynamicStateFeaturesEXT_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceExtendedDynamicStateFeaturesEXT *out_info,
                          const VkPhysicalDeviceExtendedDynamicStateFeaturesEXT *in_info);

void
unwrap_VkPhysicalDeviceExtendedDynamicStateFeaturesEXT(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceExtendedDynamicStateFeaturesEXT *out_info,
                          const VkPhysicalDeviceExtendedDynamicStateFeaturesEXT *in_info);


void
unwrap_VkPhysicalDeviceExtendedSparseAddressSpaceFeaturesNV_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceExtendedSparseAddressSpaceFeaturesNV *out_info,
                          const VkPhysicalDeviceExtendedSparseAddressSpaceFeaturesNV *in_info);

void
unwrap_VkPhysicalDeviceExtendedSparseAddressSpaceFeaturesNV(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceExtendedSparseAddressSpaceFeaturesNV *out_info,
                          const VkPhysicalDeviceExtendedSparseAddressSpaceFeaturesNV *in_info);


void
unwrap_VkPhysicalDeviceExtendedSparseAddressSpacePropertiesNV_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceExtendedSparseAddressSpacePropertiesNV *out_info,
                          const VkPhysicalDeviceExtendedSparseAddressSpacePropertiesNV *in_info);

void
unwrap_VkPhysicalDeviceExtendedSparseAddressSpacePropertiesNV(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceExtendedSparseAddressSpacePropertiesNV *out_info,
                          const VkPhysicalDeviceExtendedSparseAddressSpacePropertiesNV *in_info);


void
unwrap_VkPhysicalDeviceExternalBufferInfo_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceExternalBufferInfo *out_info,
                          const VkPhysicalDeviceExternalBufferInfo *in_info);

void
unwrap_VkPhysicalDeviceExternalBufferInfo(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceExternalBufferInfo *out_info,
                          const VkPhysicalDeviceExternalBufferInfo *in_info);


void
unwrap_VkPhysicalDeviceExternalFenceInfo_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceExternalFenceInfo *out_info,
                          const VkPhysicalDeviceExternalFenceInfo *in_info);

void
unwrap_VkPhysicalDeviceExternalFenceInfo(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceExternalFenceInfo *out_info,
                          const VkPhysicalDeviceExternalFenceInfo *in_info);


void
unwrap_VkPhysicalDeviceExternalFormatResolveFeaturesANDROID_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceExternalFormatResolveFeaturesANDROID *out_info,
                          const VkPhysicalDeviceExternalFormatResolveFeaturesANDROID *in_info);

void
unwrap_VkPhysicalDeviceExternalFormatResolveFeaturesANDROID(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceExternalFormatResolveFeaturesANDROID *out_info,
                          const VkPhysicalDeviceExternalFormatResolveFeaturesANDROID *in_info);


void
unwrap_VkPhysicalDeviceExternalFormatResolvePropertiesANDROID_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceExternalFormatResolvePropertiesANDROID *out_info,
                          const VkPhysicalDeviceExternalFormatResolvePropertiesANDROID *in_info);

void
unwrap_VkPhysicalDeviceExternalFormatResolvePropertiesANDROID(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceExternalFormatResolvePropertiesANDROID *out_info,
                          const VkPhysicalDeviceExternalFormatResolvePropertiesANDROID *in_info);


void
unwrap_VkPhysicalDeviceExternalImageFormatInfo_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceExternalImageFormatInfo *out_info,
                          const VkPhysicalDeviceExternalImageFormatInfo *in_info);

void
unwrap_VkPhysicalDeviceExternalImageFormatInfo(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceExternalImageFormatInfo *out_info,
                          const VkPhysicalDeviceExternalImageFormatInfo *in_info);


void
unwrap_VkPhysicalDeviceExternalMemoryHostPropertiesEXT_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceExternalMemoryHostPropertiesEXT *out_info,
                          const VkPhysicalDeviceExternalMemoryHostPropertiesEXT *in_info);

void
unwrap_VkPhysicalDeviceExternalMemoryHostPropertiesEXT(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceExternalMemoryHostPropertiesEXT *out_info,
                          const VkPhysicalDeviceExternalMemoryHostPropertiesEXT *in_info);


void
unwrap_VkPhysicalDeviceExternalMemoryRDMAFeaturesNV_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceExternalMemoryRDMAFeaturesNV *out_info,
                          const VkPhysicalDeviceExternalMemoryRDMAFeaturesNV *in_info);

void
unwrap_VkPhysicalDeviceExternalMemoryRDMAFeaturesNV(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceExternalMemoryRDMAFeaturesNV *out_info,
                          const VkPhysicalDeviceExternalMemoryRDMAFeaturesNV *in_info);


void
unwrap_VkPhysicalDeviceExternalSemaphoreInfo_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceExternalSemaphoreInfo *out_info,
                          const VkPhysicalDeviceExternalSemaphoreInfo *in_info);

void
unwrap_VkPhysicalDeviceExternalSemaphoreInfo(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceExternalSemaphoreInfo *out_info,
                          const VkPhysicalDeviceExternalSemaphoreInfo *in_info);


void
unwrap_VkPhysicalDeviceFaultFeaturesEXT_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceFaultFeaturesEXT *out_info,
                          const VkPhysicalDeviceFaultFeaturesEXT *in_info);

void
unwrap_VkPhysicalDeviceFaultFeaturesEXT(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceFaultFeaturesEXT *out_info,
                          const VkPhysicalDeviceFaultFeaturesEXT *in_info);


void
unwrap_VkPhysicalDeviceFeatures2_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceFeatures2 *out_info,
                          const VkPhysicalDeviceFeatures2 *in_info);

void
unwrap_VkPhysicalDeviceFeatures2(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceFeatures2 *out_info,
                          const VkPhysicalDeviceFeatures2 *in_info);


void
unwrap_VkPhysicalDeviceFloatControlsProperties_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceFloatControlsProperties *out_info,
                          const VkPhysicalDeviceFloatControlsProperties *in_info);

void
unwrap_VkPhysicalDeviceFloatControlsProperties(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceFloatControlsProperties *out_info,
                          const VkPhysicalDeviceFloatControlsProperties *in_info);


void
unwrap_VkPhysicalDeviceFragmentDensityMap2FeaturesEXT_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceFragmentDensityMap2FeaturesEXT *out_info,
                          const VkPhysicalDeviceFragmentDensityMap2FeaturesEXT *in_info);

void
unwrap_VkPhysicalDeviceFragmentDensityMap2FeaturesEXT(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceFragmentDensityMap2FeaturesEXT *out_info,
                          const VkPhysicalDeviceFragmentDensityMap2FeaturesEXT *in_info);


void
unwrap_VkPhysicalDeviceFragmentDensityMap2PropertiesEXT_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceFragmentDensityMap2PropertiesEXT *out_info,
                          const VkPhysicalDeviceFragmentDensityMap2PropertiesEXT *in_info);

void
unwrap_VkPhysicalDeviceFragmentDensityMap2PropertiesEXT(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceFragmentDensityMap2PropertiesEXT *out_info,
                          const VkPhysicalDeviceFragmentDensityMap2PropertiesEXT *in_info);


void
unwrap_VkPhysicalDeviceFragmentDensityMapFeaturesEXT_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceFragmentDensityMapFeaturesEXT *out_info,
                          const VkPhysicalDeviceFragmentDensityMapFeaturesEXT *in_info);

void
unwrap_VkPhysicalDeviceFragmentDensityMapFeaturesEXT(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceFragmentDensityMapFeaturesEXT *out_info,
                          const VkPhysicalDeviceFragmentDensityMapFeaturesEXT *in_info);


void
unwrap_VkPhysicalDeviceFragmentDensityMapOffsetFeaturesQCOM_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceFragmentDensityMapOffsetFeaturesQCOM *out_info,
                          const VkPhysicalDeviceFragmentDensityMapOffsetFeaturesQCOM *in_info);

void
unwrap_VkPhysicalDeviceFragmentDensityMapOffsetFeaturesQCOM(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceFragmentDensityMapOffsetFeaturesQCOM *out_info,
                          const VkPhysicalDeviceFragmentDensityMapOffsetFeaturesQCOM *in_info);


void
unwrap_VkPhysicalDeviceFragmentDensityMapOffsetPropertiesQCOM_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceFragmentDensityMapOffsetPropertiesQCOM *out_info,
                          const VkPhysicalDeviceFragmentDensityMapOffsetPropertiesQCOM *in_info);

void
unwrap_VkPhysicalDeviceFragmentDensityMapOffsetPropertiesQCOM(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceFragmentDensityMapOffsetPropertiesQCOM *out_info,
                          const VkPhysicalDeviceFragmentDensityMapOffsetPropertiesQCOM *in_info);


void
unwrap_VkPhysicalDeviceFragmentDensityMapPropertiesEXT_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceFragmentDensityMapPropertiesEXT *out_info,
                          const VkPhysicalDeviceFragmentDensityMapPropertiesEXT *in_info);

void
unwrap_VkPhysicalDeviceFragmentDensityMapPropertiesEXT(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceFragmentDensityMapPropertiesEXT *out_info,
                          const VkPhysicalDeviceFragmentDensityMapPropertiesEXT *in_info);


void
unwrap_VkPhysicalDeviceFragmentShaderBarycentricFeaturesKHR_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceFragmentShaderBarycentricFeaturesKHR *out_info,
                          const VkPhysicalDeviceFragmentShaderBarycentricFeaturesKHR *in_info);

void
unwrap_VkPhysicalDeviceFragmentShaderBarycentricFeaturesKHR(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceFragmentShaderBarycentricFeaturesKHR *out_info,
                          const VkPhysicalDeviceFragmentShaderBarycentricFeaturesKHR *in_info);


void
unwrap_VkPhysicalDeviceFragmentShaderBarycentricPropertiesKHR_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceFragmentShaderBarycentricPropertiesKHR *out_info,
                          const VkPhysicalDeviceFragmentShaderBarycentricPropertiesKHR *in_info);

void
unwrap_VkPhysicalDeviceFragmentShaderBarycentricPropertiesKHR(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceFragmentShaderBarycentricPropertiesKHR *out_info,
                          const VkPhysicalDeviceFragmentShaderBarycentricPropertiesKHR *in_info);


void
unwrap_VkPhysicalDeviceFragmentShaderInterlockFeaturesEXT_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceFragmentShaderInterlockFeaturesEXT *out_info,
                          const VkPhysicalDeviceFragmentShaderInterlockFeaturesEXT *in_info);

void
unwrap_VkPhysicalDeviceFragmentShaderInterlockFeaturesEXT(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceFragmentShaderInterlockFeaturesEXT *out_info,
                          const VkPhysicalDeviceFragmentShaderInterlockFeaturesEXT *in_info);


void
unwrap_VkPhysicalDeviceFragmentShadingRateEnumsFeaturesNV_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceFragmentShadingRateEnumsFeaturesNV *out_info,
                          const VkPhysicalDeviceFragmentShadingRateEnumsFeaturesNV *in_info);

void
unwrap_VkPhysicalDeviceFragmentShadingRateEnumsFeaturesNV(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceFragmentShadingRateEnumsFeaturesNV *out_info,
                          const VkPhysicalDeviceFragmentShadingRateEnumsFeaturesNV *in_info);


void
unwrap_VkPhysicalDeviceFragmentShadingRateEnumsPropertiesNV_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceFragmentShadingRateEnumsPropertiesNV *out_info,
                          const VkPhysicalDeviceFragmentShadingRateEnumsPropertiesNV *in_info);

void
unwrap_VkPhysicalDeviceFragmentShadingRateEnumsPropertiesNV(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceFragmentShadingRateEnumsPropertiesNV *out_info,
                          const VkPhysicalDeviceFragmentShadingRateEnumsPropertiesNV *in_info);


void
unwrap_VkPhysicalDeviceFragmentShadingRateFeaturesKHR_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceFragmentShadingRateFeaturesKHR *out_info,
                          const VkPhysicalDeviceFragmentShadingRateFeaturesKHR *in_info);

void
unwrap_VkPhysicalDeviceFragmentShadingRateFeaturesKHR(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceFragmentShadingRateFeaturesKHR *out_info,
                          const VkPhysicalDeviceFragmentShadingRateFeaturesKHR *in_info);


void
unwrap_VkPhysicalDeviceFragmentShadingRateKHR_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceFragmentShadingRateKHR *out_info,
                          const VkPhysicalDeviceFragmentShadingRateKHR *in_info);

void
unwrap_VkPhysicalDeviceFragmentShadingRateKHR(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceFragmentShadingRateKHR *out_info,
                          const VkPhysicalDeviceFragmentShadingRateKHR *in_info);


void
unwrap_VkPhysicalDeviceFragmentShadingRatePropertiesKHR_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceFragmentShadingRatePropertiesKHR *out_info,
                          const VkPhysicalDeviceFragmentShadingRatePropertiesKHR *in_info);

void
unwrap_VkPhysicalDeviceFragmentShadingRatePropertiesKHR(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceFragmentShadingRatePropertiesKHR *out_info,
                          const VkPhysicalDeviceFragmentShadingRatePropertiesKHR *in_info);


void
unwrap_VkPhysicalDeviceFrameBoundaryFeaturesEXT_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceFrameBoundaryFeaturesEXT *out_info,
                          const VkPhysicalDeviceFrameBoundaryFeaturesEXT *in_info);

void
unwrap_VkPhysicalDeviceFrameBoundaryFeaturesEXT(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceFrameBoundaryFeaturesEXT *out_info,
                          const VkPhysicalDeviceFrameBoundaryFeaturesEXT *in_info);


void
unwrap_VkPhysicalDeviceGlobalPriorityQueryFeaturesKHR_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceGlobalPriorityQueryFeaturesKHR *out_info,
                          const VkPhysicalDeviceGlobalPriorityQueryFeaturesKHR *in_info);

void
unwrap_VkPhysicalDeviceGlobalPriorityQueryFeaturesKHR(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceGlobalPriorityQueryFeaturesKHR *out_info,
                          const VkPhysicalDeviceGlobalPriorityQueryFeaturesKHR *in_info);


void
unwrap_VkPhysicalDeviceGraphicsPipelineLibraryFeaturesEXT_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceGraphicsPipelineLibraryFeaturesEXT *out_info,
                          const VkPhysicalDeviceGraphicsPipelineLibraryFeaturesEXT *in_info);

void
unwrap_VkPhysicalDeviceGraphicsPipelineLibraryFeaturesEXT(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceGraphicsPipelineLibraryFeaturesEXT *out_info,
                          const VkPhysicalDeviceGraphicsPipelineLibraryFeaturesEXT *in_info);


void
unwrap_VkPhysicalDeviceGraphicsPipelineLibraryPropertiesEXT_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceGraphicsPipelineLibraryPropertiesEXT *out_info,
                          const VkPhysicalDeviceGraphicsPipelineLibraryPropertiesEXT *in_info);

void
unwrap_VkPhysicalDeviceGraphicsPipelineLibraryPropertiesEXT(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceGraphicsPipelineLibraryPropertiesEXT *out_info,
                          const VkPhysicalDeviceGraphicsPipelineLibraryPropertiesEXT *in_info);


void
unwrap_VkPhysicalDeviceHostImageCopyFeaturesEXT_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceHostImageCopyFeaturesEXT *out_info,
                          const VkPhysicalDeviceHostImageCopyFeaturesEXT *in_info);

void
unwrap_VkPhysicalDeviceHostImageCopyFeaturesEXT(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceHostImageCopyFeaturesEXT *out_info,
                          const VkPhysicalDeviceHostImageCopyFeaturesEXT *in_info);


void
unwrap_VkPhysicalDeviceHostImageCopyPropertiesEXT_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceHostImageCopyPropertiesEXT *out_info,
                          const VkPhysicalDeviceHostImageCopyPropertiesEXT *in_info);

void
unwrap_VkPhysicalDeviceHostImageCopyPropertiesEXT(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceHostImageCopyPropertiesEXT *out_info,
                          const VkPhysicalDeviceHostImageCopyPropertiesEXT *in_info);


void
unwrap_VkPhysicalDeviceHostQueryResetFeatures_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceHostQueryResetFeatures *out_info,
                          const VkPhysicalDeviceHostQueryResetFeatures *in_info);

void
unwrap_VkPhysicalDeviceHostQueryResetFeatures(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceHostQueryResetFeatures *out_info,
                          const VkPhysicalDeviceHostQueryResetFeatures *in_info);


void
unwrap_VkPhysicalDeviceIDProperties_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceIDProperties *out_info,
                          const VkPhysicalDeviceIDProperties *in_info);

void
unwrap_VkPhysicalDeviceIDProperties(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceIDProperties *out_info,
                          const VkPhysicalDeviceIDProperties *in_info);


void
unwrap_VkPhysicalDeviceImage2DViewOf3DFeaturesEXT_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceImage2DViewOf3DFeaturesEXT *out_info,
                          const VkPhysicalDeviceImage2DViewOf3DFeaturesEXT *in_info);

void
unwrap_VkPhysicalDeviceImage2DViewOf3DFeaturesEXT(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceImage2DViewOf3DFeaturesEXT *out_info,
                          const VkPhysicalDeviceImage2DViewOf3DFeaturesEXT *in_info);


void
unwrap_VkPhysicalDeviceImageAlignmentControlFeaturesMESA_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceImageAlignmentControlFeaturesMESA *out_info,
                          const VkPhysicalDeviceImageAlignmentControlFeaturesMESA *in_info);

void
unwrap_VkPhysicalDeviceImageAlignmentControlFeaturesMESA(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceImageAlignmentControlFeaturesMESA *out_info,
                          const VkPhysicalDeviceImageAlignmentControlFeaturesMESA *in_info);


void
unwrap_VkPhysicalDeviceImageAlignmentControlPropertiesMESA_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceImageAlignmentControlPropertiesMESA *out_info,
                          const VkPhysicalDeviceImageAlignmentControlPropertiesMESA *in_info);

void
unwrap_VkPhysicalDeviceImageAlignmentControlPropertiesMESA(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceImageAlignmentControlPropertiesMESA *out_info,
                          const VkPhysicalDeviceImageAlignmentControlPropertiesMESA *in_info);


void
unwrap_VkPhysicalDeviceImageCompressionControlFeaturesEXT_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceImageCompressionControlFeaturesEXT *out_info,
                          const VkPhysicalDeviceImageCompressionControlFeaturesEXT *in_info);

void
unwrap_VkPhysicalDeviceImageCompressionControlFeaturesEXT(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceImageCompressionControlFeaturesEXT *out_info,
                          const VkPhysicalDeviceImageCompressionControlFeaturesEXT *in_info);


void
unwrap_VkPhysicalDeviceImageCompressionControlSwapchainFeaturesEXT_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceImageCompressionControlSwapchainFeaturesEXT *out_info,
                          const VkPhysicalDeviceImageCompressionControlSwapchainFeaturesEXT *in_info);

void
unwrap_VkPhysicalDeviceImageCompressionControlSwapchainFeaturesEXT(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceImageCompressionControlSwapchainFeaturesEXT *out_info,
                          const VkPhysicalDeviceImageCompressionControlSwapchainFeaturesEXT *in_info);


void
unwrap_VkPhysicalDeviceImageDrmFormatModifierInfoEXT_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceImageDrmFormatModifierInfoEXT *out_info,
                          const VkPhysicalDeviceImageDrmFormatModifierInfoEXT *in_info);

void
unwrap_VkPhysicalDeviceImageDrmFormatModifierInfoEXT(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceImageDrmFormatModifierInfoEXT *out_info,
                          const VkPhysicalDeviceImageDrmFormatModifierInfoEXT *in_info);


void
unwrap_VkPhysicalDeviceImageFormatInfo2_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceImageFormatInfo2 *out_info,
                          const VkPhysicalDeviceImageFormatInfo2 *in_info);

void
unwrap_VkPhysicalDeviceImageFormatInfo2(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceImageFormatInfo2 *out_info,
                          const VkPhysicalDeviceImageFormatInfo2 *in_info);


void
unwrap_VkPhysicalDeviceImageProcessing2FeaturesQCOM_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceImageProcessing2FeaturesQCOM *out_info,
                          const VkPhysicalDeviceImageProcessing2FeaturesQCOM *in_info);

void
unwrap_VkPhysicalDeviceImageProcessing2FeaturesQCOM(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceImageProcessing2FeaturesQCOM *out_info,
                          const VkPhysicalDeviceImageProcessing2FeaturesQCOM *in_info);


void
unwrap_VkPhysicalDeviceImageProcessing2PropertiesQCOM_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceImageProcessing2PropertiesQCOM *out_info,
                          const VkPhysicalDeviceImageProcessing2PropertiesQCOM *in_info);

void
unwrap_VkPhysicalDeviceImageProcessing2PropertiesQCOM(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceImageProcessing2PropertiesQCOM *out_info,
                          const VkPhysicalDeviceImageProcessing2PropertiesQCOM *in_info);


void
unwrap_VkPhysicalDeviceImageProcessingFeaturesQCOM_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceImageProcessingFeaturesQCOM *out_info,
                          const VkPhysicalDeviceImageProcessingFeaturesQCOM *in_info);

void
unwrap_VkPhysicalDeviceImageProcessingFeaturesQCOM(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceImageProcessingFeaturesQCOM *out_info,
                          const VkPhysicalDeviceImageProcessingFeaturesQCOM *in_info);


void
unwrap_VkPhysicalDeviceImageProcessingPropertiesQCOM_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceImageProcessingPropertiesQCOM *out_info,
                          const VkPhysicalDeviceImageProcessingPropertiesQCOM *in_info);

void
unwrap_VkPhysicalDeviceImageProcessingPropertiesQCOM(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceImageProcessingPropertiesQCOM *out_info,
                          const VkPhysicalDeviceImageProcessingPropertiesQCOM *in_info);


void
unwrap_VkPhysicalDeviceImageRobustnessFeatures_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceImageRobustnessFeatures *out_info,
                          const VkPhysicalDeviceImageRobustnessFeatures *in_info);

void
unwrap_VkPhysicalDeviceImageRobustnessFeatures(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceImageRobustnessFeatures *out_info,
                          const VkPhysicalDeviceImageRobustnessFeatures *in_info);


void
unwrap_VkPhysicalDeviceImageSlicedViewOf3DFeaturesEXT_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceImageSlicedViewOf3DFeaturesEXT *out_info,
                          const VkPhysicalDeviceImageSlicedViewOf3DFeaturesEXT *in_info);

void
unwrap_VkPhysicalDeviceImageSlicedViewOf3DFeaturesEXT(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceImageSlicedViewOf3DFeaturesEXT *out_info,
                          const VkPhysicalDeviceImageSlicedViewOf3DFeaturesEXT *in_info);


void
unwrap_VkPhysicalDeviceImageViewImageFormatInfoEXT_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceImageViewImageFormatInfoEXT *out_info,
                          const VkPhysicalDeviceImageViewImageFormatInfoEXT *in_info);

void
unwrap_VkPhysicalDeviceImageViewImageFormatInfoEXT(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceImageViewImageFormatInfoEXT *out_info,
                          const VkPhysicalDeviceImageViewImageFormatInfoEXT *in_info);


void
unwrap_VkPhysicalDeviceImageViewMinLodFeaturesEXT_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceImageViewMinLodFeaturesEXT *out_info,
                          const VkPhysicalDeviceImageViewMinLodFeaturesEXT *in_info);

void
unwrap_VkPhysicalDeviceImageViewMinLodFeaturesEXT(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceImageViewMinLodFeaturesEXT *out_info,
                          const VkPhysicalDeviceImageViewMinLodFeaturesEXT *in_info);


void
unwrap_VkPhysicalDeviceImagelessFramebufferFeatures_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceImagelessFramebufferFeatures *out_info,
                          const VkPhysicalDeviceImagelessFramebufferFeatures *in_info);

void
unwrap_VkPhysicalDeviceImagelessFramebufferFeatures(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceImagelessFramebufferFeatures *out_info,
                          const VkPhysicalDeviceImagelessFramebufferFeatures *in_info);


void
unwrap_VkPhysicalDeviceIndexTypeUint8FeaturesKHR_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceIndexTypeUint8FeaturesKHR *out_info,
                          const VkPhysicalDeviceIndexTypeUint8FeaturesKHR *in_info);

void
unwrap_VkPhysicalDeviceIndexTypeUint8FeaturesKHR(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceIndexTypeUint8FeaturesKHR *out_info,
                          const VkPhysicalDeviceIndexTypeUint8FeaturesKHR *in_info);


void
unwrap_VkPhysicalDeviceInheritedViewportScissorFeaturesNV_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceInheritedViewportScissorFeaturesNV *out_info,
                          const VkPhysicalDeviceInheritedViewportScissorFeaturesNV *in_info);

void
unwrap_VkPhysicalDeviceInheritedViewportScissorFeaturesNV(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceInheritedViewportScissorFeaturesNV *out_info,
                          const VkPhysicalDeviceInheritedViewportScissorFeaturesNV *in_info);


void
unwrap_VkPhysicalDeviceInlineUniformBlockFeatures_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceInlineUniformBlockFeatures *out_info,
                          const VkPhysicalDeviceInlineUniformBlockFeatures *in_info);

void
unwrap_VkPhysicalDeviceInlineUniformBlockFeatures(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceInlineUniformBlockFeatures *out_info,
                          const VkPhysicalDeviceInlineUniformBlockFeatures *in_info);


void
unwrap_VkPhysicalDeviceInlineUniformBlockProperties_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceInlineUniformBlockProperties *out_info,
                          const VkPhysicalDeviceInlineUniformBlockProperties *in_info);

void
unwrap_VkPhysicalDeviceInlineUniformBlockProperties(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceInlineUniformBlockProperties *out_info,
                          const VkPhysicalDeviceInlineUniformBlockProperties *in_info);


void
unwrap_VkPhysicalDeviceInvocationMaskFeaturesHUAWEI_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceInvocationMaskFeaturesHUAWEI *out_info,
                          const VkPhysicalDeviceInvocationMaskFeaturesHUAWEI *in_info);

void
unwrap_VkPhysicalDeviceInvocationMaskFeaturesHUAWEI(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceInvocationMaskFeaturesHUAWEI *out_info,
                          const VkPhysicalDeviceInvocationMaskFeaturesHUAWEI *in_info);


void
unwrap_VkPhysicalDeviceLayeredApiPropertiesKHR_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceLayeredApiPropertiesKHR *out_info,
                          const VkPhysicalDeviceLayeredApiPropertiesKHR *in_info);

void
unwrap_VkPhysicalDeviceLayeredApiPropertiesKHR(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceLayeredApiPropertiesKHR *out_info,
                          const VkPhysicalDeviceLayeredApiPropertiesKHR *in_info);


void
unwrap_VkPhysicalDeviceLayeredApiPropertiesListKHR_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceLayeredApiPropertiesListKHR *out_info,
                          const VkPhysicalDeviceLayeredApiPropertiesListKHR *in_info);

void
unwrap_VkPhysicalDeviceLayeredApiPropertiesListKHR(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceLayeredApiPropertiesListKHR *out_info,
                          const VkPhysicalDeviceLayeredApiPropertiesListKHR *in_info);


void
unwrap_VkPhysicalDeviceLayeredApiVulkanPropertiesKHR_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceLayeredApiVulkanPropertiesKHR *out_info,
                          const VkPhysicalDeviceLayeredApiVulkanPropertiesKHR *in_info);

void
unwrap_VkPhysicalDeviceLayeredApiVulkanPropertiesKHR(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceLayeredApiVulkanPropertiesKHR *out_info,
                          const VkPhysicalDeviceLayeredApiVulkanPropertiesKHR *in_info);


void
unwrap_VkPhysicalDeviceLayeredDriverPropertiesMSFT_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceLayeredDriverPropertiesMSFT *out_info,
                          const VkPhysicalDeviceLayeredDriverPropertiesMSFT *in_info);

void
unwrap_VkPhysicalDeviceLayeredDriverPropertiesMSFT(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceLayeredDriverPropertiesMSFT *out_info,
                          const VkPhysicalDeviceLayeredDriverPropertiesMSFT *in_info);


void
unwrap_VkPhysicalDeviceLegacyDitheringFeaturesEXT_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceLegacyDitheringFeaturesEXT *out_info,
                          const VkPhysicalDeviceLegacyDitheringFeaturesEXT *in_info);

void
unwrap_VkPhysicalDeviceLegacyDitheringFeaturesEXT(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceLegacyDitheringFeaturesEXT *out_info,
                          const VkPhysicalDeviceLegacyDitheringFeaturesEXT *in_info);


void
unwrap_VkPhysicalDeviceLegacyVertexAttributesFeaturesEXT_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceLegacyVertexAttributesFeaturesEXT *out_info,
                          const VkPhysicalDeviceLegacyVertexAttributesFeaturesEXT *in_info);

void
unwrap_VkPhysicalDeviceLegacyVertexAttributesFeaturesEXT(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceLegacyVertexAttributesFeaturesEXT *out_info,
                          const VkPhysicalDeviceLegacyVertexAttributesFeaturesEXT *in_info);


void
unwrap_VkPhysicalDeviceLegacyVertexAttributesPropertiesEXT_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceLegacyVertexAttributesPropertiesEXT *out_info,
                          const VkPhysicalDeviceLegacyVertexAttributesPropertiesEXT *in_info);

void
unwrap_VkPhysicalDeviceLegacyVertexAttributesPropertiesEXT(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceLegacyVertexAttributesPropertiesEXT *out_info,
                          const VkPhysicalDeviceLegacyVertexAttributesPropertiesEXT *in_info);


void
unwrap_VkPhysicalDeviceLineRasterizationFeaturesKHR_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceLineRasterizationFeaturesKHR *out_info,
                          const VkPhysicalDeviceLineRasterizationFeaturesKHR *in_info);

void
unwrap_VkPhysicalDeviceLineRasterizationFeaturesKHR(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceLineRasterizationFeaturesKHR *out_info,
                          const VkPhysicalDeviceLineRasterizationFeaturesKHR *in_info);


void
unwrap_VkPhysicalDeviceLineRasterizationPropertiesKHR_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceLineRasterizationPropertiesKHR *out_info,
                          const VkPhysicalDeviceLineRasterizationPropertiesKHR *in_info);

void
unwrap_VkPhysicalDeviceLineRasterizationPropertiesKHR(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceLineRasterizationPropertiesKHR *out_info,
                          const VkPhysicalDeviceLineRasterizationPropertiesKHR *in_info);


void
unwrap_VkPhysicalDeviceLinearColorAttachmentFeaturesNV_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceLinearColorAttachmentFeaturesNV *out_info,
                          const VkPhysicalDeviceLinearColorAttachmentFeaturesNV *in_info);

void
unwrap_VkPhysicalDeviceLinearColorAttachmentFeaturesNV(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceLinearColorAttachmentFeaturesNV *out_info,
                          const VkPhysicalDeviceLinearColorAttachmentFeaturesNV *in_info);


void
unwrap_VkPhysicalDeviceMaintenance3Properties_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceMaintenance3Properties *out_info,
                          const VkPhysicalDeviceMaintenance3Properties *in_info);

void
unwrap_VkPhysicalDeviceMaintenance3Properties(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceMaintenance3Properties *out_info,
                          const VkPhysicalDeviceMaintenance3Properties *in_info);


void
unwrap_VkPhysicalDeviceMaintenance4Features_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceMaintenance4Features *out_info,
                          const VkPhysicalDeviceMaintenance4Features *in_info);

void
unwrap_VkPhysicalDeviceMaintenance4Features(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceMaintenance4Features *out_info,
                          const VkPhysicalDeviceMaintenance4Features *in_info);


void
unwrap_VkPhysicalDeviceMaintenance4Properties_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceMaintenance4Properties *out_info,
                          const VkPhysicalDeviceMaintenance4Properties *in_info);

void
unwrap_VkPhysicalDeviceMaintenance4Properties(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceMaintenance4Properties *out_info,
                          const VkPhysicalDeviceMaintenance4Properties *in_info);


void
unwrap_VkPhysicalDeviceMaintenance5FeaturesKHR_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceMaintenance5FeaturesKHR *out_info,
                          const VkPhysicalDeviceMaintenance5FeaturesKHR *in_info);

void
unwrap_VkPhysicalDeviceMaintenance5FeaturesKHR(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceMaintenance5FeaturesKHR *out_info,
                          const VkPhysicalDeviceMaintenance5FeaturesKHR *in_info);


void
unwrap_VkPhysicalDeviceMaintenance5PropertiesKHR_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceMaintenance5PropertiesKHR *out_info,
                          const VkPhysicalDeviceMaintenance5PropertiesKHR *in_info);

void
unwrap_VkPhysicalDeviceMaintenance5PropertiesKHR(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceMaintenance5PropertiesKHR *out_info,
                          const VkPhysicalDeviceMaintenance5PropertiesKHR *in_info);


void
unwrap_VkPhysicalDeviceMaintenance6FeaturesKHR_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceMaintenance6FeaturesKHR *out_info,
                          const VkPhysicalDeviceMaintenance6FeaturesKHR *in_info);

void
unwrap_VkPhysicalDeviceMaintenance6FeaturesKHR(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceMaintenance6FeaturesKHR *out_info,
                          const VkPhysicalDeviceMaintenance6FeaturesKHR *in_info);


void
unwrap_VkPhysicalDeviceMaintenance6PropertiesKHR_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceMaintenance6PropertiesKHR *out_info,
                          const VkPhysicalDeviceMaintenance6PropertiesKHR *in_info);

void
unwrap_VkPhysicalDeviceMaintenance6PropertiesKHR(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceMaintenance6PropertiesKHR *out_info,
                          const VkPhysicalDeviceMaintenance6PropertiesKHR *in_info);


void
unwrap_VkPhysicalDeviceMaintenance7FeaturesKHR_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceMaintenance7FeaturesKHR *out_info,
                          const VkPhysicalDeviceMaintenance7FeaturesKHR *in_info);

void
unwrap_VkPhysicalDeviceMaintenance7FeaturesKHR(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceMaintenance7FeaturesKHR *out_info,
                          const VkPhysicalDeviceMaintenance7FeaturesKHR *in_info);


void
unwrap_VkPhysicalDeviceMaintenance7PropertiesKHR_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceMaintenance7PropertiesKHR *out_info,
                          const VkPhysicalDeviceMaintenance7PropertiesKHR *in_info);

void
unwrap_VkPhysicalDeviceMaintenance7PropertiesKHR(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceMaintenance7PropertiesKHR *out_info,
                          const VkPhysicalDeviceMaintenance7PropertiesKHR *in_info);


void
unwrap_VkPhysicalDeviceMapMemoryPlacedFeaturesEXT_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceMapMemoryPlacedFeaturesEXT *out_info,
                          const VkPhysicalDeviceMapMemoryPlacedFeaturesEXT *in_info);

void
unwrap_VkPhysicalDeviceMapMemoryPlacedFeaturesEXT(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceMapMemoryPlacedFeaturesEXT *out_info,
                          const VkPhysicalDeviceMapMemoryPlacedFeaturesEXT *in_info);


void
unwrap_VkPhysicalDeviceMapMemoryPlacedPropertiesEXT_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceMapMemoryPlacedPropertiesEXT *out_info,
                          const VkPhysicalDeviceMapMemoryPlacedPropertiesEXT *in_info);

void
unwrap_VkPhysicalDeviceMapMemoryPlacedPropertiesEXT(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceMapMemoryPlacedPropertiesEXT *out_info,
                          const VkPhysicalDeviceMapMemoryPlacedPropertiesEXT *in_info);


void
unwrap_VkPhysicalDeviceMemoryBudgetPropertiesEXT_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceMemoryBudgetPropertiesEXT *out_info,
                          const VkPhysicalDeviceMemoryBudgetPropertiesEXT *in_info);

void
unwrap_VkPhysicalDeviceMemoryBudgetPropertiesEXT(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceMemoryBudgetPropertiesEXT *out_info,
                          const VkPhysicalDeviceMemoryBudgetPropertiesEXT *in_info);


void
unwrap_VkPhysicalDeviceMemoryDecompressionFeaturesNV_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceMemoryDecompressionFeaturesNV *out_info,
                          const VkPhysicalDeviceMemoryDecompressionFeaturesNV *in_info);

void
unwrap_VkPhysicalDeviceMemoryDecompressionFeaturesNV(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceMemoryDecompressionFeaturesNV *out_info,
                          const VkPhysicalDeviceMemoryDecompressionFeaturesNV *in_info);


void
unwrap_VkPhysicalDeviceMemoryDecompressionPropertiesNV_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceMemoryDecompressionPropertiesNV *out_info,
                          const VkPhysicalDeviceMemoryDecompressionPropertiesNV *in_info);

void
unwrap_VkPhysicalDeviceMemoryDecompressionPropertiesNV(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceMemoryDecompressionPropertiesNV *out_info,
                          const VkPhysicalDeviceMemoryDecompressionPropertiesNV *in_info);


void
unwrap_VkPhysicalDeviceMemoryPriorityFeaturesEXT_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceMemoryPriorityFeaturesEXT *out_info,
                          const VkPhysicalDeviceMemoryPriorityFeaturesEXT *in_info);

void
unwrap_VkPhysicalDeviceMemoryPriorityFeaturesEXT(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceMemoryPriorityFeaturesEXT *out_info,
                          const VkPhysicalDeviceMemoryPriorityFeaturesEXT *in_info);


void
unwrap_VkPhysicalDeviceMemoryProperties2_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceMemoryProperties2 *out_info,
                          const VkPhysicalDeviceMemoryProperties2 *in_info);

void
unwrap_VkPhysicalDeviceMemoryProperties2(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceMemoryProperties2 *out_info,
                          const VkPhysicalDeviceMemoryProperties2 *in_info);


void
unwrap_VkPhysicalDeviceMeshShaderFeaturesEXT_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceMeshShaderFeaturesEXT *out_info,
                          const VkPhysicalDeviceMeshShaderFeaturesEXT *in_info);

void
unwrap_VkPhysicalDeviceMeshShaderFeaturesEXT(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceMeshShaderFeaturesEXT *out_info,
                          const VkPhysicalDeviceMeshShaderFeaturesEXT *in_info);


void
unwrap_VkPhysicalDeviceMeshShaderFeaturesNV_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceMeshShaderFeaturesNV *out_info,
                          const VkPhysicalDeviceMeshShaderFeaturesNV *in_info);

void
unwrap_VkPhysicalDeviceMeshShaderFeaturesNV(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceMeshShaderFeaturesNV *out_info,
                          const VkPhysicalDeviceMeshShaderFeaturesNV *in_info);


void
unwrap_VkPhysicalDeviceMeshShaderPropertiesEXT_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceMeshShaderPropertiesEXT *out_info,
                          const VkPhysicalDeviceMeshShaderPropertiesEXT *in_info);

void
unwrap_VkPhysicalDeviceMeshShaderPropertiesEXT(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceMeshShaderPropertiesEXT *out_info,
                          const VkPhysicalDeviceMeshShaderPropertiesEXT *in_info);


void
unwrap_VkPhysicalDeviceMeshShaderPropertiesNV_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceMeshShaderPropertiesNV *out_info,
                          const VkPhysicalDeviceMeshShaderPropertiesNV *in_info);

void
unwrap_VkPhysicalDeviceMeshShaderPropertiesNV(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceMeshShaderPropertiesNV *out_info,
                          const VkPhysicalDeviceMeshShaderPropertiesNV *in_info);


void
unwrap_VkPhysicalDeviceMultiDrawFeaturesEXT_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceMultiDrawFeaturesEXT *out_info,
                          const VkPhysicalDeviceMultiDrawFeaturesEXT *in_info);

void
unwrap_VkPhysicalDeviceMultiDrawFeaturesEXT(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceMultiDrawFeaturesEXT *out_info,
                          const VkPhysicalDeviceMultiDrawFeaturesEXT *in_info);


void
unwrap_VkPhysicalDeviceMultiDrawPropertiesEXT_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceMultiDrawPropertiesEXT *out_info,
                          const VkPhysicalDeviceMultiDrawPropertiesEXT *in_info);

void
unwrap_VkPhysicalDeviceMultiDrawPropertiesEXT(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceMultiDrawPropertiesEXT *out_info,
                          const VkPhysicalDeviceMultiDrawPropertiesEXT *in_info);


void
unwrap_VkPhysicalDeviceMultisampledRenderToSingleSampledFeaturesEXT_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceMultisampledRenderToSingleSampledFeaturesEXT *out_info,
                          const VkPhysicalDeviceMultisampledRenderToSingleSampledFeaturesEXT *in_info);

void
unwrap_VkPhysicalDeviceMultisampledRenderToSingleSampledFeaturesEXT(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceMultisampledRenderToSingleSampledFeaturesEXT *out_info,
                          const VkPhysicalDeviceMultisampledRenderToSingleSampledFeaturesEXT *in_info);


void
unwrap_VkPhysicalDeviceMultiviewFeatures_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceMultiviewFeatures *out_info,
                          const VkPhysicalDeviceMultiviewFeatures *in_info);

void
unwrap_VkPhysicalDeviceMultiviewFeatures(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceMultiviewFeatures *out_info,
                          const VkPhysicalDeviceMultiviewFeatures *in_info);


void
unwrap_VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX *out_info,
                          const VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX *in_info);

void
unwrap_VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX *out_info,
                          const VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX *in_info);


void
unwrap_VkPhysicalDeviceMultiviewPerViewRenderAreasFeaturesQCOM_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceMultiviewPerViewRenderAreasFeaturesQCOM *out_info,
                          const VkPhysicalDeviceMultiviewPerViewRenderAreasFeaturesQCOM *in_info);

void
unwrap_VkPhysicalDeviceMultiviewPerViewRenderAreasFeaturesQCOM(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceMultiviewPerViewRenderAreasFeaturesQCOM *out_info,
                          const VkPhysicalDeviceMultiviewPerViewRenderAreasFeaturesQCOM *in_info);


void
unwrap_VkPhysicalDeviceMultiviewPerViewViewportsFeaturesQCOM_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceMultiviewPerViewViewportsFeaturesQCOM *out_info,
                          const VkPhysicalDeviceMultiviewPerViewViewportsFeaturesQCOM *in_info);

void
unwrap_VkPhysicalDeviceMultiviewPerViewViewportsFeaturesQCOM(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceMultiviewPerViewViewportsFeaturesQCOM *out_info,
                          const VkPhysicalDeviceMultiviewPerViewViewportsFeaturesQCOM *in_info);


void
unwrap_VkPhysicalDeviceMultiviewProperties_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceMultiviewProperties *out_info,
                          const VkPhysicalDeviceMultiviewProperties *in_info);

void
unwrap_VkPhysicalDeviceMultiviewProperties(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceMultiviewProperties *out_info,
                          const VkPhysicalDeviceMultiviewProperties *in_info);


void
unwrap_VkPhysicalDeviceMutableDescriptorTypeFeaturesEXT_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceMutableDescriptorTypeFeaturesEXT *out_info,
                          const VkPhysicalDeviceMutableDescriptorTypeFeaturesEXT *in_info);

void
unwrap_VkPhysicalDeviceMutableDescriptorTypeFeaturesEXT(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceMutableDescriptorTypeFeaturesEXT *out_info,
                          const VkPhysicalDeviceMutableDescriptorTypeFeaturesEXT *in_info);


void
unwrap_VkPhysicalDeviceNestedCommandBufferFeaturesEXT_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceNestedCommandBufferFeaturesEXT *out_info,
                          const VkPhysicalDeviceNestedCommandBufferFeaturesEXT *in_info);

void
unwrap_VkPhysicalDeviceNestedCommandBufferFeaturesEXT(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceNestedCommandBufferFeaturesEXT *out_info,
                          const VkPhysicalDeviceNestedCommandBufferFeaturesEXT *in_info);


void
unwrap_VkPhysicalDeviceNestedCommandBufferPropertiesEXT_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceNestedCommandBufferPropertiesEXT *out_info,
                          const VkPhysicalDeviceNestedCommandBufferPropertiesEXT *in_info);

void
unwrap_VkPhysicalDeviceNestedCommandBufferPropertiesEXT(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceNestedCommandBufferPropertiesEXT *out_info,
                          const VkPhysicalDeviceNestedCommandBufferPropertiesEXT *in_info);


void
unwrap_VkPhysicalDeviceNonSeamlessCubeMapFeaturesEXT_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceNonSeamlessCubeMapFeaturesEXT *out_info,
                          const VkPhysicalDeviceNonSeamlessCubeMapFeaturesEXT *in_info);

void
unwrap_VkPhysicalDeviceNonSeamlessCubeMapFeaturesEXT(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceNonSeamlessCubeMapFeaturesEXT *out_info,
                          const VkPhysicalDeviceNonSeamlessCubeMapFeaturesEXT *in_info);


void
unwrap_VkPhysicalDeviceOpacityMicromapFeaturesEXT_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceOpacityMicromapFeaturesEXT *out_info,
                          const VkPhysicalDeviceOpacityMicromapFeaturesEXT *in_info);

void
unwrap_VkPhysicalDeviceOpacityMicromapFeaturesEXT(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceOpacityMicromapFeaturesEXT *out_info,
                          const VkPhysicalDeviceOpacityMicromapFeaturesEXT *in_info);


void
unwrap_VkPhysicalDeviceOpacityMicromapPropertiesEXT_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceOpacityMicromapPropertiesEXT *out_info,
                          const VkPhysicalDeviceOpacityMicromapPropertiesEXT *in_info);

void
unwrap_VkPhysicalDeviceOpacityMicromapPropertiesEXT(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceOpacityMicromapPropertiesEXT *out_info,
                          const VkPhysicalDeviceOpacityMicromapPropertiesEXT *in_info);


void
unwrap_VkPhysicalDeviceOpticalFlowFeaturesNV_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceOpticalFlowFeaturesNV *out_info,
                          const VkPhysicalDeviceOpticalFlowFeaturesNV *in_info);

void
unwrap_VkPhysicalDeviceOpticalFlowFeaturesNV(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceOpticalFlowFeaturesNV *out_info,
                          const VkPhysicalDeviceOpticalFlowFeaturesNV *in_info);


void
unwrap_VkPhysicalDeviceOpticalFlowPropertiesNV_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceOpticalFlowPropertiesNV *out_info,
                          const VkPhysicalDeviceOpticalFlowPropertiesNV *in_info);

void
unwrap_VkPhysicalDeviceOpticalFlowPropertiesNV(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceOpticalFlowPropertiesNV *out_info,
                          const VkPhysicalDeviceOpticalFlowPropertiesNV *in_info);


void
unwrap_VkPhysicalDevicePCIBusInfoPropertiesEXT_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDevicePCIBusInfoPropertiesEXT *out_info,
                          const VkPhysicalDevicePCIBusInfoPropertiesEXT *in_info);

void
unwrap_VkPhysicalDevicePCIBusInfoPropertiesEXT(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDevicePCIBusInfoPropertiesEXT *out_info,
                          const VkPhysicalDevicePCIBusInfoPropertiesEXT *in_info);


void
unwrap_VkPhysicalDevicePageableDeviceLocalMemoryFeaturesEXT_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDevicePageableDeviceLocalMemoryFeaturesEXT *out_info,
                          const VkPhysicalDevicePageableDeviceLocalMemoryFeaturesEXT *in_info);

void
unwrap_VkPhysicalDevicePageableDeviceLocalMemoryFeaturesEXT(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDevicePageableDeviceLocalMemoryFeaturesEXT *out_info,
                          const VkPhysicalDevicePageableDeviceLocalMemoryFeaturesEXT *in_info);


void
unwrap_VkPhysicalDevicePerStageDescriptorSetFeaturesNV_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDevicePerStageDescriptorSetFeaturesNV *out_info,
                          const VkPhysicalDevicePerStageDescriptorSetFeaturesNV *in_info);

void
unwrap_VkPhysicalDevicePerStageDescriptorSetFeaturesNV(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDevicePerStageDescriptorSetFeaturesNV *out_info,
                          const VkPhysicalDevicePerStageDescriptorSetFeaturesNV *in_info);


void
unwrap_VkPhysicalDevicePerformanceQueryFeaturesKHR_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDevicePerformanceQueryFeaturesKHR *out_info,
                          const VkPhysicalDevicePerformanceQueryFeaturesKHR *in_info);

void
unwrap_VkPhysicalDevicePerformanceQueryFeaturesKHR(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDevicePerformanceQueryFeaturesKHR *out_info,
                          const VkPhysicalDevicePerformanceQueryFeaturesKHR *in_info);


void
unwrap_VkPhysicalDevicePerformanceQueryPropertiesKHR_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDevicePerformanceQueryPropertiesKHR *out_info,
                          const VkPhysicalDevicePerformanceQueryPropertiesKHR *in_info);

void
unwrap_VkPhysicalDevicePerformanceQueryPropertiesKHR(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDevicePerformanceQueryPropertiesKHR *out_info,
                          const VkPhysicalDevicePerformanceQueryPropertiesKHR *in_info);


void
unwrap_VkPhysicalDevicePipelineCreationCacheControlFeatures_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDevicePipelineCreationCacheControlFeatures *out_info,
                          const VkPhysicalDevicePipelineCreationCacheControlFeatures *in_info);

void
unwrap_VkPhysicalDevicePipelineCreationCacheControlFeatures(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDevicePipelineCreationCacheControlFeatures *out_info,
                          const VkPhysicalDevicePipelineCreationCacheControlFeatures *in_info);


void
unwrap_VkPhysicalDevicePipelineExecutablePropertiesFeaturesKHR_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDevicePipelineExecutablePropertiesFeaturesKHR *out_info,
                          const VkPhysicalDevicePipelineExecutablePropertiesFeaturesKHR *in_info);

void
unwrap_VkPhysicalDevicePipelineExecutablePropertiesFeaturesKHR(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDevicePipelineExecutablePropertiesFeaturesKHR *out_info,
                          const VkPhysicalDevicePipelineExecutablePropertiesFeaturesKHR *in_info);


void
unwrap_VkPhysicalDevicePipelineLibraryGroupHandlesFeaturesEXT_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDevicePipelineLibraryGroupHandlesFeaturesEXT *out_info,
                          const VkPhysicalDevicePipelineLibraryGroupHandlesFeaturesEXT *in_info);

void
unwrap_VkPhysicalDevicePipelineLibraryGroupHandlesFeaturesEXT(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDevicePipelineLibraryGroupHandlesFeaturesEXT *out_info,
                          const VkPhysicalDevicePipelineLibraryGroupHandlesFeaturesEXT *in_info);


void
unwrap_VkPhysicalDevicePipelinePropertiesFeaturesEXT_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDevicePipelinePropertiesFeaturesEXT *out_info,
                          const VkPhysicalDevicePipelinePropertiesFeaturesEXT *in_info);

void
unwrap_VkPhysicalDevicePipelinePropertiesFeaturesEXT(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDevicePipelinePropertiesFeaturesEXT *out_info,
                          const VkPhysicalDevicePipelinePropertiesFeaturesEXT *in_info);


void
unwrap_VkPhysicalDevicePipelineProtectedAccessFeaturesEXT_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDevicePipelineProtectedAccessFeaturesEXT *out_info,
                          const VkPhysicalDevicePipelineProtectedAccessFeaturesEXT *in_info);

void
unwrap_VkPhysicalDevicePipelineProtectedAccessFeaturesEXT(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDevicePipelineProtectedAccessFeaturesEXT *out_info,
                          const VkPhysicalDevicePipelineProtectedAccessFeaturesEXT *in_info);


void
unwrap_VkPhysicalDevicePipelineRobustnessFeaturesEXT_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDevicePipelineRobustnessFeaturesEXT *out_info,
                          const VkPhysicalDevicePipelineRobustnessFeaturesEXT *in_info);

void
unwrap_VkPhysicalDevicePipelineRobustnessFeaturesEXT(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDevicePipelineRobustnessFeaturesEXT *out_info,
                          const VkPhysicalDevicePipelineRobustnessFeaturesEXT *in_info);


void
unwrap_VkPhysicalDevicePipelineRobustnessPropertiesEXT_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDevicePipelineRobustnessPropertiesEXT *out_info,
                          const VkPhysicalDevicePipelineRobustnessPropertiesEXT *in_info);

void
unwrap_VkPhysicalDevicePipelineRobustnessPropertiesEXT(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDevicePipelineRobustnessPropertiesEXT *out_info,
                          const VkPhysicalDevicePipelineRobustnessPropertiesEXT *in_info);


void
unwrap_VkPhysicalDevicePointClippingProperties_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDevicePointClippingProperties *out_info,
                          const VkPhysicalDevicePointClippingProperties *in_info);

void
unwrap_VkPhysicalDevicePointClippingProperties(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDevicePointClippingProperties *out_info,
                          const VkPhysicalDevicePointClippingProperties *in_info);


void
unwrap_VkPhysicalDevicePresentBarrierFeaturesNV_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDevicePresentBarrierFeaturesNV *out_info,
                          const VkPhysicalDevicePresentBarrierFeaturesNV *in_info);

void
unwrap_VkPhysicalDevicePresentBarrierFeaturesNV(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDevicePresentBarrierFeaturesNV *out_info,
                          const VkPhysicalDevicePresentBarrierFeaturesNV *in_info);


void
unwrap_VkPhysicalDevicePresentIdFeaturesKHR_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDevicePresentIdFeaturesKHR *out_info,
                          const VkPhysicalDevicePresentIdFeaturesKHR *in_info);

void
unwrap_VkPhysicalDevicePresentIdFeaturesKHR(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDevicePresentIdFeaturesKHR *out_info,
                          const VkPhysicalDevicePresentIdFeaturesKHR *in_info);


void
unwrap_VkPhysicalDevicePresentWaitFeaturesKHR_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDevicePresentWaitFeaturesKHR *out_info,
                          const VkPhysicalDevicePresentWaitFeaturesKHR *in_info);

void
unwrap_VkPhysicalDevicePresentWaitFeaturesKHR(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDevicePresentWaitFeaturesKHR *out_info,
                          const VkPhysicalDevicePresentWaitFeaturesKHR *in_info);


void
unwrap_VkPhysicalDevicePresentationPropertiesANDROID_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDevicePresentationPropertiesANDROID *out_info,
                          const VkPhysicalDevicePresentationPropertiesANDROID *in_info);

void
unwrap_VkPhysicalDevicePresentationPropertiesANDROID(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDevicePresentationPropertiesANDROID *out_info,
                          const VkPhysicalDevicePresentationPropertiesANDROID *in_info);


void
unwrap_VkPhysicalDevicePrimitiveTopologyListRestartFeaturesEXT_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDevicePrimitiveTopologyListRestartFeaturesEXT *out_info,
                          const VkPhysicalDevicePrimitiveTopologyListRestartFeaturesEXT *in_info);

void
unwrap_VkPhysicalDevicePrimitiveTopologyListRestartFeaturesEXT(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDevicePrimitiveTopologyListRestartFeaturesEXT *out_info,
                          const VkPhysicalDevicePrimitiveTopologyListRestartFeaturesEXT *in_info);


void
unwrap_VkPhysicalDevicePrimitivesGeneratedQueryFeaturesEXT_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDevicePrimitivesGeneratedQueryFeaturesEXT *out_info,
                          const VkPhysicalDevicePrimitivesGeneratedQueryFeaturesEXT *in_info);

void
unwrap_VkPhysicalDevicePrimitivesGeneratedQueryFeaturesEXT(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDevicePrimitivesGeneratedQueryFeaturesEXT *out_info,
                          const VkPhysicalDevicePrimitivesGeneratedQueryFeaturesEXT *in_info);


void
unwrap_VkPhysicalDevicePrivateDataFeatures_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDevicePrivateDataFeatures *out_info,
                          const VkPhysicalDevicePrivateDataFeatures *in_info);

void
unwrap_VkPhysicalDevicePrivateDataFeatures(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDevicePrivateDataFeatures *out_info,
                          const VkPhysicalDevicePrivateDataFeatures *in_info);


void
unwrap_VkPhysicalDeviceProperties2_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceProperties2 *out_info,
                          const VkPhysicalDeviceProperties2 *in_info);

void
unwrap_VkPhysicalDeviceProperties2(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceProperties2 *out_info,
                          const VkPhysicalDeviceProperties2 *in_info);


void
unwrap_VkPhysicalDeviceProtectedMemoryFeatures_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceProtectedMemoryFeatures *out_info,
                          const VkPhysicalDeviceProtectedMemoryFeatures *in_info);

void
unwrap_VkPhysicalDeviceProtectedMemoryFeatures(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceProtectedMemoryFeatures *out_info,
                          const VkPhysicalDeviceProtectedMemoryFeatures *in_info);


void
unwrap_VkPhysicalDeviceProtectedMemoryProperties_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceProtectedMemoryProperties *out_info,
                          const VkPhysicalDeviceProtectedMemoryProperties *in_info);

void
unwrap_VkPhysicalDeviceProtectedMemoryProperties(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceProtectedMemoryProperties *out_info,
                          const VkPhysicalDeviceProtectedMemoryProperties *in_info);


void
unwrap_VkPhysicalDeviceProvokingVertexFeaturesEXT_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceProvokingVertexFeaturesEXT *out_info,
                          const VkPhysicalDeviceProvokingVertexFeaturesEXT *in_info);

void
unwrap_VkPhysicalDeviceProvokingVertexFeaturesEXT(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceProvokingVertexFeaturesEXT *out_info,
                          const VkPhysicalDeviceProvokingVertexFeaturesEXT *in_info);


void
unwrap_VkPhysicalDeviceProvokingVertexPropertiesEXT_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceProvokingVertexPropertiesEXT *out_info,
                          const VkPhysicalDeviceProvokingVertexPropertiesEXT *in_info);

void
unwrap_VkPhysicalDeviceProvokingVertexPropertiesEXT(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceProvokingVertexPropertiesEXT *out_info,
                          const VkPhysicalDeviceProvokingVertexPropertiesEXT *in_info);


void
unwrap_VkPhysicalDevicePushDescriptorPropertiesKHR_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDevicePushDescriptorPropertiesKHR *out_info,
                          const VkPhysicalDevicePushDescriptorPropertiesKHR *in_info);

void
unwrap_VkPhysicalDevicePushDescriptorPropertiesKHR(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDevicePushDescriptorPropertiesKHR *out_info,
                          const VkPhysicalDevicePushDescriptorPropertiesKHR *in_info);


void
unwrap_VkPhysicalDeviceRGBA10X6FormatsFeaturesEXT_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceRGBA10X6FormatsFeaturesEXT *out_info,
                          const VkPhysicalDeviceRGBA10X6FormatsFeaturesEXT *in_info);

void
unwrap_VkPhysicalDeviceRGBA10X6FormatsFeaturesEXT(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceRGBA10X6FormatsFeaturesEXT *out_info,
                          const VkPhysicalDeviceRGBA10X6FormatsFeaturesEXT *in_info);


void
unwrap_VkPhysicalDeviceRasterizationOrderAttachmentAccessFeaturesEXT_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceRasterizationOrderAttachmentAccessFeaturesEXT *out_info,
                          const VkPhysicalDeviceRasterizationOrderAttachmentAccessFeaturesEXT *in_info);

void
unwrap_VkPhysicalDeviceRasterizationOrderAttachmentAccessFeaturesEXT(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceRasterizationOrderAttachmentAccessFeaturesEXT *out_info,
                          const VkPhysicalDeviceRasterizationOrderAttachmentAccessFeaturesEXT *in_info);


void
unwrap_VkPhysicalDeviceRawAccessChainsFeaturesNV_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceRawAccessChainsFeaturesNV *out_info,
                          const VkPhysicalDeviceRawAccessChainsFeaturesNV *in_info);

void
unwrap_VkPhysicalDeviceRawAccessChainsFeaturesNV(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceRawAccessChainsFeaturesNV *out_info,
                          const VkPhysicalDeviceRawAccessChainsFeaturesNV *in_info);


void
unwrap_VkPhysicalDeviceRayQueryFeaturesKHR_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceRayQueryFeaturesKHR *out_info,
                          const VkPhysicalDeviceRayQueryFeaturesKHR *in_info);

void
unwrap_VkPhysicalDeviceRayQueryFeaturesKHR(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceRayQueryFeaturesKHR *out_info,
                          const VkPhysicalDeviceRayQueryFeaturesKHR *in_info);


void
unwrap_VkPhysicalDeviceRayTracingInvocationReorderFeaturesNV_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceRayTracingInvocationReorderFeaturesNV *out_info,
                          const VkPhysicalDeviceRayTracingInvocationReorderFeaturesNV *in_info);

void
unwrap_VkPhysicalDeviceRayTracingInvocationReorderFeaturesNV(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceRayTracingInvocationReorderFeaturesNV *out_info,
                          const VkPhysicalDeviceRayTracingInvocationReorderFeaturesNV *in_info);


void
unwrap_VkPhysicalDeviceRayTracingInvocationReorderPropertiesNV_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceRayTracingInvocationReorderPropertiesNV *out_info,
                          const VkPhysicalDeviceRayTracingInvocationReorderPropertiesNV *in_info);

void
unwrap_VkPhysicalDeviceRayTracingInvocationReorderPropertiesNV(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceRayTracingInvocationReorderPropertiesNV *out_info,
                          const VkPhysicalDeviceRayTracingInvocationReorderPropertiesNV *in_info);


void
unwrap_VkPhysicalDeviceRayTracingMaintenance1FeaturesKHR_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceRayTracingMaintenance1FeaturesKHR *out_info,
                          const VkPhysicalDeviceRayTracingMaintenance1FeaturesKHR *in_info);

void
unwrap_VkPhysicalDeviceRayTracingMaintenance1FeaturesKHR(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceRayTracingMaintenance1FeaturesKHR *out_info,
                          const VkPhysicalDeviceRayTracingMaintenance1FeaturesKHR *in_info);


void
unwrap_VkPhysicalDeviceRayTracingMotionBlurFeaturesNV_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceRayTracingMotionBlurFeaturesNV *out_info,
                          const VkPhysicalDeviceRayTracingMotionBlurFeaturesNV *in_info);

void
unwrap_VkPhysicalDeviceRayTracingMotionBlurFeaturesNV(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceRayTracingMotionBlurFeaturesNV *out_info,
                          const VkPhysicalDeviceRayTracingMotionBlurFeaturesNV *in_info);


void
unwrap_VkPhysicalDeviceRayTracingPipelineFeaturesKHR_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceRayTracingPipelineFeaturesKHR *out_info,
                          const VkPhysicalDeviceRayTracingPipelineFeaturesKHR *in_info);

void
unwrap_VkPhysicalDeviceRayTracingPipelineFeaturesKHR(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceRayTracingPipelineFeaturesKHR *out_info,
                          const VkPhysicalDeviceRayTracingPipelineFeaturesKHR *in_info);


void
unwrap_VkPhysicalDeviceRayTracingPipelinePropertiesKHR_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceRayTracingPipelinePropertiesKHR *out_info,
                          const VkPhysicalDeviceRayTracingPipelinePropertiesKHR *in_info);

void
unwrap_VkPhysicalDeviceRayTracingPipelinePropertiesKHR(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceRayTracingPipelinePropertiesKHR *out_info,
                          const VkPhysicalDeviceRayTracingPipelinePropertiesKHR *in_info);


void
unwrap_VkPhysicalDeviceRayTracingPositionFetchFeaturesKHR_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceRayTracingPositionFetchFeaturesKHR *out_info,
                          const VkPhysicalDeviceRayTracingPositionFetchFeaturesKHR *in_info);

void
unwrap_VkPhysicalDeviceRayTracingPositionFetchFeaturesKHR(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceRayTracingPositionFetchFeaturesKHR *out_info,
                          const VkPhysicalDeviceRayTracingPositionFetchFeaturesKHR *in_info);


void
unwrap_VkPhysicalDeviceRayTracingPropertiesNV_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceRayTracingPropertiesNV *out_info,
                          const VkPhysicalDeviceRayTracingPropertiesNV *in_info);

void
unwrap_VkPhysicalDeviceRayTracingPropertiesNV(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceRayTracingPropertiesNV *out_info,
                          const VkPhysicalDeviceRayTracingPropertiesNV *in_info);


void
unwrap_VkPhysicalDeviceRayTracingValidationFeaturesNV_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceRayTracingValidationFeaturesNV *out_info,
                          const VkPhysicalDeviceRayTracingValidationFeaturesNV *in_info);

void
unwrap_VkPhysicalDeviceRayTracingValidationFeaturesNV(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceRayTracingValidationFeaturesNV *out_info,
                          const VkPhysicalDeviceRayTracingValidationFeaturesNV *in_info);


void
unwrap_VkPhysicalDeviceRelaxedLineRasterizationFeaturesIMG_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceRelaxedLineRasterizationFeaturesIMG *out_info,
                          const VkPhysicalDeviceRelaxedLineRasterizationFeaturesIMG *in_info);

void
unwrap_VkPhysicalDeviceRelaxedLineRasterizationFeaturesIMG(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceRelaxedLineRasterizationFeaturesIMG *out_info,
                          const VkPhysicalDeviceRelaxedLineRasterizationFeaturesIMG *in_info);


void
unwrap_VkPhysicalDeviceRenderPassStripedFeaturesARM_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceRenderPassStripedFeaturesARM *out_info,
                          const VkPhysicalDeviceRenderPassStripedFeaturesARM *in_info);

void
unwrap_VkPhysicalDeviceRenderPassStripedFeaturesARM(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceRenderPassStripedFeaturesARM *out_info,
                          const VkPhysicalDeviceRenderPassStripedFeaturesARM *in_info);


void
unwrap_VkPhysicalDeviceRenderPassStripedPropertiesARM_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceRenderPassStripedPropertiesARM *out_info,
                          const VkPhysicalDeviceRenderPassStripedPropertiesARM *in_info);

void
unwrap_VkPhysicalDeviceRenderPassStripedPropertiesARM(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceRenderPassStripedPropertiesARM *out_info,
                          const VkPhysicalDeviceRenderPassStripedPropertiesARM *in_info);


void
unwrap_VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV *out_info,
                          const VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV *in_info);

void
unwrap_VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV *out_info,
                          const VkPhysicalDeviceRepresentativeFragmentTestFeaturesNV *in_info);


void
unwrap_VkPhysicalDeviceRobustness2FeaturesEXT_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceRobustness2FeaturesEXT *out_info,
                          const VkPhysicalDeviceRobustness2FeaturesEXT *in_info);

void
unwrap_VkPhysicalDeviceRobustness2FeaturesEXT(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceRobustness2FeaturesEXT *out_info,
                          const VkPhysicalDeviceRobustness2FeaturesEXT *in_info);


void
unwrap_VkPhysicalDeviceRobustness2PropertiesEXT_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceRobustness2PropertiesEXT *out_info,
                          const VkPhysicalDeviceRobustness2PropertiesEXT *in_info);

void
unwrap_VkPhysicalDeviceRobustness2PropertiesEXT(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceRobustness2PropertiesEXT *out_info,
                          const VkPhysicalDeviceRobustness2PropertiesEXT *in_info);


void
unwrap_VkPhysicalDeviceSampleLocationsPropertiesEXT_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceSampleLocationsPropertiesEXT *out_info,
                          const VkPhysicalDeviceSampleLocationsPropertiesEXT *in_info);

void
unwrap_VkPhysicalDeviceSampleLocationsPropertiesEXT(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceSampleLocationsPropertiesEXT *out_info,
                          const VkPhysicalDeviceSampleLocationsPropertiesEXT *in_info);


void
unwrap_VkPhysicalDeviceSamplerFilterMinmaxProperties_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceSamplerFilterMinmaxProperties *out_info,
                          const VkPhysicalDeviceSamplerFilterMinmaxProperties *in_info);

void
unwrap_VkPhysicalDeviceSamplerFilterMinmaxProperties(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceSamplerFilterMinmaxProperties *out_info,
                          const VkPhysicalDeviceSamplerFilterMinmaxProperties *in_info);


void
unwrap_VkPhysicalDeviceSamplerYcbcrConversionFeatures_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceSamplerYcbcrConversionFeatures *out_info,
                          const VkPhysicalDeviceSamplerYcbcrConversionFeatures *in_info);

void
unwrap_VkPhysicalDeviceSamplerYcbcrConversionFeatures(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceSamplerYcbcrConversionFeatures *out_info,
                          const VkPhysicalDeviceSamplerYcbcrConversionFeatures *in_info);


void
unwrap_VkPhysicalDeviceScalarBlockLayoutFeatures_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceScalarBlockLayoutFeatures *out_info,
                          const VkPhysicalDeviceScalarBlockLayoutFeatures *in_info);

void
unwrap_VkPhysicalDeviceScalarBlockLayoutFeatures(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceScalarBlockLayoutFeatures *out_info,
                          const VkPhysicalDeviceScalarBlockLayoutFeatures *in_info);


void
unwrap_VkPhysicalDeviceSchedulingControlsFeaturesARM_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceSchedulingControlsFeaturesARM *out_info,
                          const VkPhysicalDeviceSchedulingControlsFeaturesARM *in_info);

void
unwrap_VkPhysicalDeviceSchedulingControlsFeaturesARM(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceSchedulingControlsFeaturesARM *out_info,
                          const VkPhysicalDeviceSchedulingControlsFeaturesARM *in_info);


void
unwrap_VkPhysicalDeviceSchedulingControlsPropertiesARM_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceSchedulingControlsPropertiesARM *out_info,
                          const VkPhysicalDeviceSchedulingControlsPropertiesARM *in_info);

void
unwrap_VkPhysicalDeviceSchedulingControlsPropertiesARM(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceSchedulingControlsPropertiesARM *out_info,
                          const VkPhysicalDeviceSchedulingControlsPropertiesARM *in_info);


void
unwrap_VkPhysicalDeviceSeparateDepthStencilLayoutsFeatures_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceSeparateDepthStencilLayoutsFeatures *out_info,
                          const VkPhysicalDeviceSeparateDepthStencilLayoutsFeatures *in_info);

void
unwrap_VkPhysicalDeviceSeparateDepthStencilLayoutsFeatures(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceSeparateDepthStencilLayoutsFeatures *out_info,
                          const VkPhysicalDeviceSeparateDepthStencilLayoutsFeatures *in_info);


void
unwrap_VkPhysicalDeviceShaderAtomicFloat16VectorFeaturesNV_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceShaderAtomicFloat16VectorFeaturesNV *out_info,
                          const VkPhysicalDeviceShaderAtomicFloat16VectorFeaturesNV *in_info);

void
unwrap_VkPhysicalDeviceShaderAtomicFloat16VectorFeaturesNV(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceShaderAtomicFloat16VectorFeaturesNV *out_info,
                          const VkPhysicalDeviceShaderAtomicFloat16VectorFeaturesNV *in_info);


void
unwrap_VkPhysicalDeviceShaderAtomicFloat2FeaturesEXT_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceShaderAtomicFloat2FeaturesEXT *out_info,
                          const VkPhysicalDeviceShaderAtomicFloat2FeaturesEXT *in_info);

void
unwrap_VkPhysicalDeviceShaderAtomicFloat2FeaturesEXT(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceShaderAtomicFloat2FeaturesEXT *out_info,
                          const VkPhysicalDeviceShaderAtomicFloat2FeaturesEXT *in_info);


void
unwrap_VkPhysicalDeviceShaderAtomicFloatFeaturesEXT_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceShaderAtomicFloatFeaturesEXT *out_info,
                          const VkPhysicalDeviceShaderAtomicFloatFeaturesEXT *in_info);

void
unwrap_VkPhysicalDeviceShaderAtomicFloatFeaturesEXT(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceShaderAtomicFloatFeaturesEXT *out_info,
                          const VkPhysicalDeviceShaderAtomicFloatFeaturesEXT *in_info);


void
unwrap_VkPhysicalDeviceShaderAtomicInt64Features_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceShaderAtomicInt64Features *out_info,
                          const VkPhysicalDeviceShaderAtomicInt64Features *in_info);

void
unwrap_VkPhysicalDeviceShaderAtomicInt64Features(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceShaderAtomicInt64Features *out_info,
                          const VkPhysicalDeviceShaderAtomicInt64Features *in_info);


void
unwrap_VkPhysicalDeviceShaderClockFeaturesKHR_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceShaderClockFeaturesKHR *out_info,
                          const VkPhysicalDeviceShaderClockFeaturesKHR *in_info);

void
unwrap_VkPhysicalDeviceShaderClockFeaturesKHR(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceShaderClockFeaturesKHR *out_info,
                          const VkPhysicalDeviceShaderClockFeaturesKHR *in_info);


void
unwrap_VkPhysicalDeviceShaderCoreBuiltinsFeaturesARM_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceShaderCoreBuiltinsFeaturesARM *out_info,
                          const VkPhysicalDeviceShaderCoreBuiltinsFeaturesARM *in_info);

void
unwrap_VkPhysicalDeviceShaderCoreBuiltinsFeaturesARM(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceShaderCoreBuiltinsFeaturesARM *out_info,
                          const VkPhysicalDeviceShaderCoreBuiltinsFeaturesARM *in_info);


void
unwrap_VkPhysicalDeviceShaderCoreBuiltinsPropertiesARM_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceShaderCoreBuiltinsPropertiesARM *out_info,
                          const VkPhysicalDeviceShaderCoreBuiltinsPropertiesARM *in_info);

void
unwrap_VkPhysicalDeviceShaderCoreBuiltinsPropertiesARM(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceShaderCoreBuiltinsPropertiesARM *out_info,
                          const VkPhysicalDeviceShaderCoreBuiltinsPropertiesARM *in_info);


void
unwrap_VkPhysicalDeviceShaderCoreProperties2AMD_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceShaderCoreProperties2AMD *out_info,
                          const VkPhysicalDeviceShaderCoreProperties2AMD *in_info);

void
unwrap_VkPhysicalDeviceShaderCoreProperties2AMD(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceShaderCoreProperties2AMD *out_info,
                          const VkPhysicalDeviceShaderCoreProperties2AMD *in_info);


void
unwrap_VkPhysicalDeviceShaderCorePropertiesAMD_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceShaderCorePropertiesAMD *out_info,
                          const VkPhysicalDeviceShaderCorePropertiesAMD *in_info);

void
unwrap_VkPhysicalDeviceShaderCorePropertiesAMD(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceShaderCorePropertiesAMD *out_info,
                          const VkPhysicalDeviceShaderCorePropertiesAMD *in_info);


void
unwrap_VkPhysicalDeviceShaderCorePropertiesARM_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceShaderCorePropertiesARM *out_info,
                          const VkPhysicalDeviceShaderCorePropertiesARM *in_info);

void
unwrap_VkPhysicalDeviceShaderCorePropertiesARM(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceShaderCorePropertiesARM *out_info,
                          const VkPhysicalDeviceShaderCorePropertiesARM *in_info);


void
unwrap_VkPhysicalDeviceShaderDemoteToHelperInvocationFeatures_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceShaderDemoteToHelperInvocationFeatures *out_info,
                          const VkPhysicalDeviceShaderDemoteToHelperInvocationFeatures *in_info);

void
unwrap_VkPhysicalDeviceShaderDemoteToHelperInvocationFeatures(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceShaderDemoteToHelperInvocationFeatures *out_info,
                          const VkPhysicalDeviceShaderDemoteToHelperInvocationFeatures *in_info);


void
unwrap_VkPhysicalDeviceShaderDrawParametersFeatures_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceShaderDrawParametersFeatures *out_info,
                          const VkPhysicalDeviceShaderDrawParametersFeatures *in_info);

void
unwrap_VkPhysicalDeviceShaderDrawParametersFeatures(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceShaderDrawParametersFeatures *out_info,
                          const VkPhysicalDeviceShaderDrawParametersFeatures *in_info);


void
unwrap_VkPhysicalDeviceShaderEarlyAndLateFragmentTestsFeaturesAMD_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceShaderEarlyAndLateFragmentTestsFeaturesAMD *out_info,
                          const VkPhysicalDeviceShaderEarlyAndLateFragmentTestsFeaturesAMD *in_info);

void
unwrap_VkPhysicalDeviceShaderEarlyAndLateFragmentTestsFeaturesAMD(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceShaderEarlyAndLateFragmentTestsFeaturesAMD *out_info,
                          const VkPhysicalDeviceShaderEarlyAndLateFragmentTestsFeaturesAMD *in_info);


void
unwrap_VkPhysicalDeviceShaderExpectAssumeFeaturesKHR_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceShaderExpectAssumeFeaturesKHR *out_info,
                          const VkPhysicalDeviceShaderExpectAssumeFeaturesKHR *in_info);

void
unwrap_VkPhysicalDeviceShaderExpectAssumeFeaturesKHR(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceShaderExpectAssumeFeaturesKHR *out_info,
                          const VkPhysicalDeviceShaderExpectAssumeFeaturesKHR *in_info);


void
unwrap_VkPhysicalDeviceShaderFloat16Int8Features_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceShaderFloat16Int8Features *out_info,
                          const VkPhysicalDeviceShaderFloat16Int8Features *in_info);

void
unwrap_VkPhysicalDeviceShaderFloat16Int8Features(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceShaderFloat16Int8Features *out_info,
                          const VkPhysicalDeviceShaderFloat16Int8Features *in_info);


void
unwrap_VkPhysicalDeviceShaderFloatControls2FeaturesKHR_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceShaderFloatControls2FeaturesKHR *out_info,
                          const VkPhysicalDeviceShaderFloatControls2FeaturesKHR *in_info);

void
unwrap_VkPhysicalDeviceShaderFloatControls2FeaturesKHR(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceShaderFloatControls2FeaturesKHR *out_info,
                          const VkPhysicalDeviceShaderFloatControls2FeaturesKHR *in_info);


void
unwrap_VkPhysicalDeviceShaderImageAtomicInt64FeaturesEXT_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceShaderImageAtomicInt64FeaturesEXT *out_info,
                          const VkPhysicalDeviceShaderImageAtomicInt64FeaturesEXT *in_info);

void
unwrap_VkPhysicalDeviceShaderImageAtomicInt64FeaturesEXT(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceShaderImageAtomicInt64FeaturesEXT *out_info,
                          const VkPhysicalDeviceShaderImageAtomicInt64FeaturesEXT *in_info);


void
unwrap_VkPhysicalDeviceShaderImageFootprintFeaturesNV_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceShaderImageFootprintFeaturesNV *out_info,
                          const VkPhysicalDeviceShaderImageFootprintFeaturesNV *in_info);

void
unwrap_VkPhysicalDeviceShaderImageFootprintFeaturesNV(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceShaderImageFootprintFeaturesNV *out_info,
                          const VkPhysicalDeviceShaderImageFootprintFeaturesNV *in_info);


void
unwrap_VkPhysicalDeviceShaderIntegerDotProductFeatures_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceShaderIntegerDotProductFeatures *out_info,
                          const VkPhysicalDeviceShaderIntegerDotProductFeatures *in_info);

void
unwrap_VkPhysicalDeviceShaderIntegerDotProductFeatures(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceShaderIntegerDotProductFeatures *out_info,
                          const VkPhysicalDeviceShaderIntegerDotProductFeatures *in_info);


void
unwrap_VkPhysicalDeviceShaderIntegerDotProductProperties_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceShaderIntegerDotProductProperties *out_info,
                          const VkPhysicalDeviceShaderIntegerDotProductProperties *in_info);

void
unwrap_VkPhysicalDeviceShaderIntegerDotProductProperties(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceShaderIntegerDotProductProperties *out_info,
                          const VkPhysicalDeviceShaderIntegerDotProductProperties *in_info);


void
unwrap_VkPhysicalDeviceShaderIntegerFunctions2FeaturesINTEL_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceShaderIntegerFunctions2FeaturesINTEL *out_info,
                          const VkPhysicalDeviceShaderIntegerFunctions2FeaturesINTEL *in_info);

void
unwrap_VkPhysicalDeviceShaderIntegerFunctions2FeaturesINTEL(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceShaderIntegerFunctions2FeaturesINTEL *out_info,
                          const VkPhysicalDeviceShaderIntegerFunctions2FeaturesINTEL *in_info);


void
unwrap_VkPhysicalDeviceShaderMaximalReconvergenceFeaturesKHR_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceShaderMaximalReconvergenceFeaturesKHR *out_info,
                          const VkPhysicalDeviceShaderMaximalReconvergenceFeaturesKHR *in_info);

void
unwrap_VkPhysicalDeviceShaderMaximalReconvergenceFeaturesKHR(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceShaderMaximalReconvergenceFeaturesKHR *out_info,
                          const VkPhysicalDeviceShaderMaximalReconvergenceFeaturesKHR *in_info);


void
unwrap_VkPhysicalDeviceShaderModuleIdentifierFeaturesEXT_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceShaderModuleIdentifierFeaturesEXT *out_info,
                          const VkPhysicalDeviceShaderModuleIdentifierFeaturesEXT *in_info);

void
unwrap_VkPhysicalDeviceShaderModuleIdentifierFeaturesEXT(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceShaderModuleIdentifierFeaturesEXT *out_info,
                          const VkPhysicalDeviceShaderModuleIdentifierFeaturesEXT *in_info);


void
unwrap_VkPhysicalDeviceShaderModuleIdentifierPropertiesEXT_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceShaderModuleIdentifierPropertiesEXT *out_info,
                          const VkPhysicalDeviceShaderModuleIdentifierPropertiesEXT *in_info);

void
unwrap_VkPhysicalDeviceShaderModuleIdentifierPropertiesEXT(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceShaderModuleIdentifierPropertiesEXT *out_info,
                          const VkPhysicalDeviceShaderModuleIdentifierPropertiesEXT *in_info);


void
unwrap_VkPhysicalDeviceShaderObjectFeaturesEXT_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceShaderObjectFeaturesEXT *out_info,
                          const VkPhysicalDeviceShaderObjectFeaturesEXT *in_info);

void
unwrap_VkPhysicalDeviceShaderObjectFeaturesEXT(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceShaderObjectFeaturesEXT *out_info,
                          const VkPhysicalDeviceShaderObjectFeaturesEXT *in_info);


void
unwrap_VkPhysicalDeviceShaderObjectPropertiesEXT_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceShaderObjectPropertiesEXT *out_info,
                          const VkPhysicalDeviceShaderObjectPropertiesEXT *in_info);

void
unwrap_VkPhysicalDeviceShaderObjectPropertiesEXT(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceShaderObjectPropertiesEXT *out_info,
                          const VkPhysicalDeviceShaderObjectPropertiesEXT *in_info);


void
unwrap_VkPhysicalDeviceShaderQuadControlFeaturesKHR_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceShaderQuadControlFeaturesKHR *out_info,
                          const VkPhysicalDeviceShaderQuadControlFeaturesKHR *in_info);

void
unwrap_VkPhysicalDeviceShaderQuadControlFeaturesKHR(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceShaderQuadControlFeaturesKHR *out_info,
                          const VkPhysicalDeviceShaderQuadControlFeaturesKHR *in_info);


void
unwrap_VkPhysicalDeviceShaderRelaxedExtendedInstructionFeaturesKHR_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceShaderRelaxedExtendedInstructionFeaturesKHR *out_info,
                          const VkPhysicalDeviceShaderRelaxedExtendedInstructionFeaturesKHR *in_info);

void
unwrap_VkPhysicalDeviceShaderRelaxedExtendedInstructionFeaturesKHR(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceShaderRelaxedExtendedInstructionFeaturesKHR *out_info,
                          const VkPhysicalDeviceShaderRelaxedExtendedInstructionFeaturesKHR *in_info);


void
unwrap_VkPhysicalDeviceShaderReplicatedCompositesFeaturesEXT_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceShaderReplicatedCompositesFeaturesEXT *out_info,
                          const VkPhysicalDeviceShaderReplicatedCompositesFeaturesEXT *in_info);

void
unwrap_VkPhysicalDeviceShaderReplicatedCompositesFeaturesEXT(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceShaderReplicatedCompositesFeaturesEXT *out_info,
                          const VkPhysicalDeviceShaderReplicatedCompositesFeaturesEXT *in_info);


void
unwrap_VkPhysicalDeviceShaderSMBuiltinsFeaturesNV_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceShaderSMBuiltinsFeaturesNV *out_info,
                          const VkPhysicalDeviceShaderSMBuiltinsFeaturesNV *in_info);

void
unwrap_VkPhysicalDeviceShaderSMBuiltinsFeaturesNV(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceShaderSMBuiltinsFeaturesNV *out_info,
                          const VkPhysicalDeviceShaderSMBuiltinsFeaturesNV *in_info);


void
unwrap_VkPhysicalDeviceShaderSMBuiltinsPropertiesNV_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceShaderSMBuiltinsPropertiesNV *out_info,
                          const VkPhysicalDeviceShaderSMBuiltinsPropertiesNV *in_info);

void
unwrap_VkPhysicalDeviceShaderSMBuiltinsPropertiesNV(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceShaderSMBuiltinsPropertiesNV *out_info,
                          const VkPhysicalDeviceShaderSMBuiltinsPropertiesNV *in_info);


void
unwrap_VkPhysicalDeviceShaderSubgroupExtendedTypesFeatures_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceShaderSubgroupExtendedTypesFeatures *out_info,
                          const VkPhysicalDeviceShaderSubgroupExtendedTypesFeatures *in_info);

void
unwrap_VkPhysicalDeviceShaderSubgroupExtendedTypesFeatures(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceShaderSubgroupExtendedTypesFeatures *out_info,
                          const VkPhysicalDeviceShaderSubgroupExtendedTypesFeatures *in_info);


void
unwrap_VkPhysicalDeviceShaderSubgroupRotateFeaturesKHR_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceShaderSubgroupRotateFeaturesKHR *out_info,
                          const VkPhysicalDeviceShaderSubgroupRotateFeaturesKHR *in_info);

void
unwrap_VkPhysicalDeviceShaderSubgroupRotateFeaturesKHR(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceShaderSubgroupRotateFeaturesKHR *out_info,
                          const VkPhysicalDeviceShaderSubgroupRotateFeaturesKHR *in_info);


void
unwrap_VkPhysicalDeviceShaderSubgroupUniformControlFlowFeaturesKHR_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceShaderSubgroupUniformControlFlowFeaturesKHR *out_info,
                          const VkPhysicalDeviceShaderSubgroupUniformControlFlowFeaturesKHR *in_info);

void
unwrap_VkPhysicalDeviceShaderSubgroupUniformControlFlowFeaturesKHR(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceShaderSubgroupUniformControlFlowFeaturesKHR *out_info,
                          const VkPhysicalDeviceShaderSubgroupUniformControlFlowFeaturesKHR *in_info);


void
unwrap_VkPhysicalDeviceShaderTerminateInvocationFeatures_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceShaderTerminateInvocationFeatures *out_info,
                          const VkPhysicalDeviceShaderTerminateInvocationFeatures *in_info);

void
unwrap_VkPhysicalDeviceShaderTerminateInvocationFeatures(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceShaderTerminateInvocationFeatures *out_info,
                          const VkPhysicalDeviceShaderTerminateInvocationFeatures *in_info);


void
unwrap_VkPhysicalDeviceShaderTileImageFeaturesEXT_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceShaderTileImageFeaturesEXT *out_info,
                          const VkPhysicalDeviceShaderTileImageFeaturesEXT *in_info);

void
unwrap_VkPhysicalDeviceShaderTileImageFeaturesEXT(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceShaderTileImageFeaturesEXT *out_info,
                          const VkPhysicalDeviceShaderTileImageFeaturesEXT *in_info);


void
unwrap_VkPhysicalDeviceShaderTileImagePropertiesEXT_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceShaderTileImagePropertiesEXT *out_info,
                          const VkPhysicalDeviceShaderTileImagePropertiesEXT *in_info);

void
unwrap_VkPhysicalDeviceShaderTileImagePropertiesEXT(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceShaderTileImagePropertiesEXT *out_info,
                          const VkPhysicalDeviceShaderTileImagePropertiesEXT *in_info);


void
unwrap_VkPhysicalDeviceShadingRateImageFeaturesNV_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceShadingRateImageFeaturesNV *out_info,
                          const VkPhysicalDeviceShadingRateImageFeaturesNV *in_info);

void
unwrap_VkPhysicalDeviceShadingRateImageFeaturesNV(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceShadingRateImageFeaturesNV *out_info,
                          const VkPhysicalDeviceShadingRateImageFeaturesNV *in_info);


void
unwrap_VkPhysicalDeviceShadingRateImagePropertiesNV_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceShadingRateImagePropertiesNV *out_info,
                          const VkPhysicalDeviceShadingRateImagePropertiesNV *in_info);

void
unwrap_VkPhysicalDeviceShadingRateImagePropertiesNV(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceShadingRateImagePropertiesNV *out_info,
                          const VkPhysicalDeviceShadingRateImagePropertiesNV *in_info);


void
unwrap_VkPhysicalDeviceSparseImageFormatInfo2_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceSparseImageFormatInfo2 *out_info,
                          const VkPhysicalDeviceSparseImageFormatInfo2 *in_info);

void
unwrap_VkPhysicalDeviceSparseImageFormatInfo2(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceSparseImageFormatInfo2 *out_info,
                          const VkPhysicalDeviceSparseImageFormatInfo2 *in_info);


void
unwrap_VkPhysicalDeviceSubgroupProperties_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceSubgroupProperties *out_info,
                          const VkPhysicalDeviceSubgroupProperties *in_info);

void
unwrap_VkPhysicalDeviceSubgroupProperties(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceSubgroupProperties *out_info,
                          const VkPhysicalDeviceSubgroupProperties *in_info);


void
unwrap_VkPhysicalDeviceSubgroupSizeControlFeatures_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceSubgroupSizeControlFeatures *out_info,
                          const VkPhysicalDeviceSubgroupSizeControlFeatures *in_info);

void
unwrap_VkPhysicalDeviceSubgroupSizeControlFeatures(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceSubgroupSizeControlFeatures *out_info,
                          const VkPhysicalDeviceSubgroupSizeControlFeatures *in_info);


void
unwrap_VkPhysicalDeviceSubgroupSizeControlProperties_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceSubgroupSizeControlProperties *out_info,
                          const VkPhysicalDeviceSubgroupSizeControlProperties *in_info);

void
unwrap_VkPhysicalDeviceSubgroupSizeControlProperties(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceSubgroupSizeControlProperties *out_info,
                          const VkPhysicalDeviceSubgroupSizeControlProperties *in_info);


void
unwrap_VkPhysicalDeviceSubpassMergeFeedbackFeaturesEXT_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceSubpassMergeFeedbackFeaturesEXT *out_info,
                          const VkPhysicalDeviceSubpassMergeFeedbackFeaturesEXT *in_info);

void
unwrap_VkPhysicalDeviceSubpassMergeFeedbackFeaturesEXT(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceSubpassMergeFeedbackFeaturesEXT *out_info,
                          const VkPhysicalDeviceSubpassMergeFeedbackFeaturesEXT *in_info);


void
unwrap_VkPhysicalDeviceSubpassShadingFeaturesHUAWEI_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceSubpassShadingFeaturesHUAWEI *out_info,
                          const VkPhysicalDeviceSubpassShadingFeaturesHUAWEI *in_info);

void
unwrap_VkPhysicalDeviceSubpassShadingFeaturesHUAWEI(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceSubpassShadingFeaturesHUAWEI *out_info,
                          const VkPhysicalDeviceSubpassShadingFeaturesHUAWEI *in_info);


void
unwrap_VkPhysicalDeviceSubpassShadingPropertiesHUAWEI_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceSubpassShadingPropertiesHUAWEI *out_info,
                          const VkPhysicalDeviceSubpassShadingPropertiesHUAWEI *in_info);

void
unwrap_VkPhysicalDeviceSubpassShadingPropertiesHUAWEI(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceSubpassShadingPropertiesHUAWEI *out_info,
                          const VkPhysicalDeviceSubpassShadingPropertiesHUAWEI *in_info);


void
unwrap_VkPhysicalDeviceSurfaceInfo2KHR_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceSurfaceInfo2KHR *out_info,
                          const VkPhysicalDeviceSurfaceInfo2KHR *in_info);

void
unwrap_VkPhysicalDeviceSurfaceInfo2KHR(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceSurfaceInfo2KHR *out_info,
                          const VkPhysicalDeviceSurfaceInfo2KHR *in_info);


void
unwrap_VkPhysicalDeviceSwapchainMaintenance1FeaturesEXT_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceSwapchainMaintenance1FeaturesEXT *out_info,
                          const VkPhysicalDeviceSwapchainMaintenance1FeaturesEXT *in_info);

void
unwrap_VkPhysicalDeviceSwapchainMaintenance1FeaturesEXT(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceSwapchainMaintenance1FeaturesEXT *out_info,
                          const VkPhysicalDeviceSwapchainMaintenance1FeaturesEXT *in_info);


void
unwrap_VkPhysicalDeviceSynchronization2Features_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceSynchronization2Features *out_info,
                          const VkPhysicalDeviceSynchronization2Features *in_info);

void
unwrap_VkPhysicalDeviceSynchronization2Features(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceSynchronization2Features *out_info,
                          const VkPhysicalDeviceSynchronization2Features *in_info);


void
unwrap_VkPhysicalDeviceTexelBufferAlignmentFeaturesEXT_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceTexelBufferAlignmentFeaturesEXT *out_info,
                          const VkPhysicalDeviceTexelBufferAlignmentFeaturesEXT *in_info);

void
unwrap_VkPhysicalDeviceTexelBufferAlignmentFeaturesEXT(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceTexelBufferAlignmentFeaturesEXT *out_info,
                          const VkPhysicalDeviceTexelBufferAlignmentFeaturesEXT *in_info);


void
unwrap_VkPhysicalDeviceTexelBufferAlignmentProperties_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceTexelBufferAlignmentProperties *out_info,
                          const VkPhysicalDeviceTexelBufferAlignmentProperties *in_info);

void
unwrap_VkPhysicalDeviceTexelBufferAlignmentProperties(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceTexelBufferAlignmentProperties *out_info,
                          const VkPhysicalDeviceTexelBufferAlignmentProperties *in_info);


void
unwrap_VkPhysicalDeviceTextureCompressionASTCHDRFeatures_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceTextureCompressionASTCHDRFeatures *out_info,
                          const VkPhysicalDeviceTextureCompressionASTCHDRFeatures *in_info);

void
unwrap_VkPhysicalDeviceTextureCompressionASTCHDRFeatures(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceTextureCompressionASTCHDRFeatures *out_info,
                          const VkPhysicalDeviceTextureCompressionASTCHDRFeatures *in_info);


void
unwrap_VkPhysicalDeviceTilePropertiesFeaturesQCOM_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceTilePropertiesFeaturesQCOM *out_info,
                          const VkPhysicalDeviceTilePropertiesFeaturesQCOM *in_info);

void
unwrap_VkPhysicalDeviceTilePropertiesFeaturesQCOM(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceTilePropertiesFeaturesQCOM *out_info,
                          const VkPhysicalDeviceTilePropertiesFeaturesQCOM *in_info);


void
unwrap_VkPhysicalDeviceTimelineSemaphoreFeatures_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceTimelineSemaphoreFeatures *out_info,
                          const VkPhysicalDeviceTimelineSemaphoreFeatures *in_info);

void
unwrap_VkPhysicalDeviceTimelineSemaphoreFeatures(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceTimelineSemaphoreFeatures *out_info,
                          const VkPhysicalDeviceTimelineSemaphoreFeatures *in_info);


void
unwrap_VkPhysicalDeviceTimelineSemaphoreProperties_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceTimelineSemaphoreProperties *out_info,
                          const VkPhysicalDeviceTimelineSemaphoreProperties *in_info);

void
unwrap_VkPhysicalDeviceTimelineSemaphoreProperties(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceTimelineSemaphoreProperties *out_info,
                          const VkPhysicalDeviceTimelineSemaphoreProperties *in_info);


void
unwrap_VkPhysicalDeviceToolProperties_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceToolProperties *out_info,
                          const VkPhysicalDeviceToolProperties *in_info);

void
unwrap_VkPhysicalDeviceToolProperties(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceToolProperties *out_info,
                          const VkPhysicalDeviceToolProperties *in_info);


void
unwrap_VkPhysicalDeviceTransformFeedbackFeaturesEXT_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceTransformFeedbackFeaturesEXT *out_info,
                          const VkPhysicalDeviceTransformFeedbackFeaturesEXT *in_info);

void
unwrap_VkPhysicalDeviceTransformFeedbackFeaturesEXT(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceTransformFeedbackFeaturesEXT *out_info,
                          const VkPhysicalDeviceTransformFeedbackFeaturesEXT *in_info);


void
unwrap_VkPhysicalDeviceTransformFeedbackPropertiesEXT_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceTransformFeedbackPropertiesEXT *out_info,
                          const VkPhysicalDeviceTransformFeedbackPropertiesEXT *in_info);

void
unwrap_VkPhysicalDeviceTransformFeedbackPropertiesEXT(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceTransformFeedbackPropertiesEXT *out_info,
                          const VkPhysicalDeviceTransformFeedbackPropertiesEXT *in_info);


void
unwrap_VkPhysicalDeviceUniformBufferStandardLayoutFeatures_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceUniformBufferStandardLayoutFeatures *out_info,
                          const VkPhysicalDeviceUniformBufferStandardLayoutFeatures *in_info);

void
unwrap_VkPhysicalDeviceUniformBufferStandardLayoutFeatures(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceUniformBufferStandardLayoutFeatures *out_info,
                          const VkPhysicalDeviceUniformBufferStandardLayoutFeatures *in_info);


void
unwrap_VkPhysicalDeviceVariablePointersFeatures_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceVariablePointersFeatures *out_info,
                          const VkPhysicalDeviceVariablePointersFeatures *in_info);

void
unwrap_VkPhysicalDeviceVariablePointersFeatures(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceVariablePointersFeatures *out_info,
                          const VkPhysicalDeviceVariablePointersFeatures *in_info);


void
unwrap_VkPhysicalDeviceVertexAttributeDivisorFeaturesKHR_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceVertexAttributeDivisorFeaturesKHR *out_info,
                          const VkPhysicalDeviceVertexAttributeDivisorFeaturesKHR *in_info);

void
unwrap_VkPhysicalDeviceVertexAttributeDivisorFeaturesKHR(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceVertexAttributeDivisorFeaturesKHR *out_info,
                          const VkPhysicalDeviceVertexAttributeDivisorFeaturesKHR *in_info);


void
unwrap_VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT *out_info,
                          const VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT *in_info);

void
unwrap_VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT *out_info,
                          const VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT *in_info);


void
unwrap_VkPhysicalDeviceVertexAttributeDivisorPropertiesKHR_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceVertexAttributeDivisorPropertiesKHR *out_info,
                          const VkPhysicalDeviceVertexAttributeDivisorPropertiesKHR *in_info);

void
unwrap_VkPhysicalDeviceVertexAttributeDivisorPropertiesKHR(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceVertexAttributeDivisorPropertiesKHR *out_info,
                          const VkPhysicalDeviceVertexAttributeDivisorPropertiesKHR *in_info);


void
unwrap_VkPhysicalDeviceVertexInputDynamicStateFeaturesEXT_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceVertexInputDynamicStateFeaturesEXT *out_info,
                          const VkPhysicalDeviceVertexInputDynamicStateFeaturesEXT *in_info);

void
unwrap_VkPhysicalDeviceVertexInputDynamicStateFeaturesEXT(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceVertexInputDynamicStateFeaturesEXT *out_info,
                          const VkPhysicalDeviceVertexInputDynamicStateFeaturesEXT *in_info);


void
unwrap_VkPhysicalDeviceVideoEncodeQualityLevelInfoKHR_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceVideoEncodeQualityLevelInfoKHR *out_info,
                          const VkPhysicalDeviceVideoEncodeQualityLevelInfoKHR *in_info);

void
unwrap_VkPhysicalDeviceVideoEncodeQualityLevelInfoKHR(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceVideoEncodeQualityLevelInfoKHR *out_info,
                          const VkPhysicalDeviceVideoEncodeQualityLevelInfoKHR *in_info);


void
unwrap_VkPhysicalDeviceVideoFormatInfoKHR_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceVideoFormatInfoKHR *out_info,
                          const VkPhysicalDeviceVideoFormatInfoKHR *in_info);

void
unwrap_VkPhysicalDeviceVideoFormatInfoKHR(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceVideoFormatInfoKHR *out_info,
                          const VkPhysicalDeviceVideoFormatInfoKHR *in_info);


void
unwrap_VkPhysicalDeviceVideoMaintenance1FeaturesKHR_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceVideoMaintenance1FeaturesKHR *out_info,
                          const VkPhysicalDeviceVideoMaintenance1FeaturesKHR *in_info);

void
unwrap_VkPhysicalDeviceVideoMaintenance1FeaturesKHR(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceVideoMaintenance1FeaturesKHR *out_info,
                          const VkPhysicalDeviceVideoMaintenance1FeaturesKHR *in_info);


void
unwrap_VkPhysicalDeviceVulkan11Features_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceVulkan11Features *out_info,
                          const VkPhysicalDeviceVulkan11Features *in_info);

void
unwrap_VkPhysicalDeviceVulkan11Features(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceVulkan11Features *out_info,
                          const VkPhysicalDeviceVulkan11Features *in_info);


void
unwrap_VkPhysicalDeviceVulkan11Properties_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceVulkan11Properties *out_info,
                          const VkPhysicalDeviceVulkan11Properties *in_info);

void
unwrap_VkPhysicalDeviceVulkan11Properties(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceVulkan11Properties *out_info,
                          const VkPhysicalDeviceVulkan11Properties *in_info);


void
unwrap_VkPhysicalDeviceVulkan12Features_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceVulkan12Features *out_info,
                          const VkPhysicalDeviceVulkan12Features *in_info);

void
unwrap_VkPhysicalDeviceVulkan12Features(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceVulkan12Features *out_info,
                          const VkPhysicalDeviceVulkan12Features *in_info);


void
unwrap_VkPhysicalDeviceVulkan12Properties_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceVulkan12Properties *out_info,
                          const VkPhysicalDeviceVulkan12Properties *in_info);

void
unwrap_VkPhysicalDeviceVulkan12Properties(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceVulkan12Properties *out_info,
                          const VkPhysicalDeviceVulkan12Properties *in_info);


void
unwrap_VkPhysicalDeviceVulkan13Features_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceVulkan13Features *out_info,
                          const VkPhysicalDeviceVulkan13Features *in_info);

void
unwrap_VkPhysicalDeviceVulkan13Features(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceVulkan13Features *out_info,
                          const VkPhysicalDeviceVulkan13Features *in_info);


void
unwrap_VkPhysicalDeviceVulkan13Properties_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceVulkan13Properties *out_info,
                          const VkPhysicalDeviceVulkan13Properties *in_info);

void
unwrap_VkPhysicalDeviceVulkan13Properties(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceVulkan13Properties *out_info,
                          const VkPhysicalDeviceVulkan13Properties *in_info);


void
unwrap_VkPhysicalDeviceVulkanMemoryModelFeatures_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceVulkanMemoryModelFeatures *out_info,
                          const VkPhysicalDeviceVulkanMemoryModelFeatures *in_info);

void
unwrap_VkPhysicalDeviceVulkanMemoryModelFeatures(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceVulkanMemoryModelFeatures *out_info,
                          const VkPhysicalDeviceVulkanMemoryModelFeatures *in_info);


void
unwrap_VkPhysicalDeviceWorkgroupMemoryExplicitLayoutFeaturesKHR_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceWorkgroupMemoryExplicitLayoutFeaturesKHR *out_info,
                          const VkPhysicalDeviceWorkgroupMemoryExplicitLayoutFeaturesKHR *in_info);

void
unwrap_VkPhysicalDeviceWorkgroupMemoryExplicitLayoutFeaturesKHR(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceWorkgroupMemoryExplicitLayoutFeaturesKHR *out_info,
                          const VkPhysicalDeviceWorkgroupMemoryExplicitLayoutFeaturesKHR *in_info);


void
unwrap_VkPhysicalDeviceYcbcr2Plane444FormatsFeaturesEXT_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceYcbcr2Plane444FormatsFeaturesEXT *out_info,
                          const VkPhysicalDeviceYcbcr2Plane444FormatsFeaturesEXT *in_info);

void
unwrap_VkPhysicalDeviceYcbcr2Plane444FormatsFeaturesEXT(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceYcbcr2Plane444FormatsFeaturesEXT *out_info,
                          const VkPhysicalDeviceYcbcr2Plane444FormatsFeaturesEXT *in_info);


void
unwrap_VkPhysicalDeviceYcbcrDegammaFeaturesQCOM_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceYcbcrDegammaFeaturesQCOM *out_info,
                          const VkPhysicalDeviceYcbcrDegammaFeaturesQCOM *in_info);

void
unwrap_VkPhysicalDeviceYcbcrDegammaFeaturesQCOM(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceYcbcrDegammaFeaturesQCOM *out_info,
                          const VkPhysicalDeviceYcbcrDegammaFeaturesQCOM *in_info);


void
unwrap_VkPhysicalDeviceYcbcrImageArraysFeaturesEXT_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceYcbcrImageArraysFeaturesEXT *out_info,
                          const VkPhysicalDeviceYcbcrImageArraysFeaturesEXT *in_info);

void
unwrap_VkPhysicalDeviceYcbcrImageArraysFeaturesEXT(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceYcbcrImageArraysFeaturesEXT *out_info,
                          const VkPhysicalDeviceYcbcrImageArraysFeaturesEXT *in_info);


void
unwrap_VkPhysicalDeviceZeroInitializeWorkgroupMemoryFeatures_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceZeroInitializeWorkgroupMemoryFeatures *out_info,
                          const VkPhysicalDeviceZeroInitializeWorkgroupMemoryFeatures *in_info);

void
unwrap_VkPhysicalDeviceZeroInitializeWorkgroupMemoryFeatures(struct temporary_objects*, struct wrapper_device *device,
                          VkPhysicalDeviceZeroInitializeWorkgroupMemoryFeatures *out_info,
                          const VkPhysicalDeviceZeroInitializeWorkgroupMemoryFeatures *in_info);


void
unwrap_VkPipelineCacheCreateInfo_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPipelineCacheCreateInfo *out_info,
                          const VkPipelineCacheCreateInfo *in_info);

void
unwrap_VkPipelineCacheCreateInfo(struct temporary_objects*, struct wrapper_device *device,
                          VkPipelineCacheCreateInfo *out_info,
                          const VkPipelineCacheCreateInfo *in_info);


void
unwrap_VkPipelineColorBlendAdvancedStateCreateInfoEXT_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPipelineColorBlendAdvancedStateCreateInfoEXT *out_info,
                          const VkPipelineColorBlendAdvancedStateCreateInfoEXT *in_info);

void
unwrap_VkPipelineColorBlendAdvancedStateCreateInfoEXT(struct temporary_objects*, struct wrapper_device *device,
                          VkPipelineColorBlendAdvancedStateCreateInfoEXT *out_info,
                          const VkPipelineColorBlendAdvancedStateCreateInfoEXT *in_info);


void
unwrap_VkPipelineColorBlendStateCreateInfo_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPipelineColorBlendStateCreateInfo *out_info,
                          const VkPipelineColorBlendStateCreateInfo *in_info);

void
unwrap_VkPipelineColorBlendStateCreateInfo(struct temporary_objects*, struct wrapper_device *device,
                          VkPipelineColorBlendStateCreateInfo *out_info,
                          const VkPipelineColorBlendStateCreateInfo *in_info);


void
unwrap_VkPipelineColorWriteCreateInfoEXT_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPipelineColorWriteCreateInfoEXT *out_info,
                          const VkPipelineColorWriteCreateInfoEXT *in_info);

void
unwrap_VkPipelineColorWriteCreateInfoEXT(struct temporary_objects*, struct wrapper_device *device,
                          VkPipelineColorWriteCreateInfoEXT *out_info,
                          const VkPipelineColorWriteCreateInfoEXT *in_info);


void
unwrap_VkPipelineCompilerControlCreateInfoAMD_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPipelineCompilerControlCreateInfoAMD *out_info,
                          const VkPipelineCompilerControlCreateInfoAMD *in_info);

void
unwrap_VkPipelineCompilerControlCreateInfoAMD(struct temporary_objects*, struct wrapper_device *device,
                          VkPipelineCompilerControlCreateInfoAMD *out_info,
                          const VkPipelineCompilerControlCreateInfoAMD *in_info);


void
unwrap_VkPipelineCoverageModulationStateCreateInfoNV_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPipelineCoverageModulationStateCreateInfoNV *out_info,
                          const VkPipelineCoverageModulationStateCreateInfoNV *in_info);

void
unwrap_VkPipelineCoverageModulationStateCreateInfoNV(struct temporary_objects*, struct wrapper_device *device,
                          VkPipelineCoverageModulationStateCreateInfoNV *out_info,
                          const VkPipelineCoverageModulationStateCreateInfoNV *in_info);


void
unwrap_VkPipelineCoverageReductionStateCreateInfoNV_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPipelineCoverageReductionStateCreateInfoNV *out_info,
                          const VkPipelineCoverageReductionStateCreateInfoNV *in_info);

void
unwrap_VkPipelineCoverageReductionStateCreateInfoNV(struct temporary_objects*, struct wrapper_device *device,
                          VkPipelineCoverageReductionStateCreateInfoNV *out_info,
                          const VkPipelineCoverageReductionStateCreateInfoNV *in_info);


void
unwrap_VkPipelineCoverageToColorStateCreateInfoNV_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPipelineCoverageToColorStateCreateInfoNV *out_info,
                          const VkPipelineCoverageToColorStateCreateInfoNV *in_info);

void
unwrap_VkPipelineCoverageToColorStateCreateInfoNV(struct temporary_objects*, struct wrapper_device *device,
                          VkPipelineCoverageToColorStateCreateInfoNV *out_info,
                          const VkPipelineCoverageToColorStateCreateInfoNV *in_info);


void
unwrap_VkPipelineCreateFlags2CreateInfoKHR_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPipelineCreateFlags2CreateInfoKHR *out_info,
                          const VkPipelineCreateFlags2CreateInfoKHR *in_info);

void
unwrap_VkPipelineCreateFlags2CreateInfoKHR(struct temporary_objects*, struct wrapper_device *device,
                          VkPipelineCreateFlags2CreateInfoKHR *out_info,
                          const VkPipelineCreateFlags2CreateInfoKHR *in_info);


void
unwrap_VkPipelineDepthStencilStateCreateInfo_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPipelineDepthStencilStateCreateInfo *out_info,
                          const VkPipelineDepthStencilStateCreateInfo *in_info);

void
unwrap_VkPipelineDepthStencilStateCreateInfo(struct temporary_objects*, struct wrapper_device *device,
                          VkPipelineDepthStencilStateCreateInfo *out_info,
                          const VkPipelineDepthStencilStateCreateInfo *in_info);


void
unwrap_VkPipelineDiscardRectangleStateCreateInfoEXT_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPipelineDiscardRectangleStateCreateInfoEXT *out_info,
                          const VkPipelineDiscardRectangleStateCreateInfoEXT *in_info);

void
unwrap_VkPipelineDiscardRectangleStateCreateInfoEXT(struct temporary_objects*, struct wrapper_device *device,
                          VkPipelineDiscardRectangleStateCreateInfoEXT *out_info,
                          const VkPipelineDiscardRectangleStateCreateInfoEXT *in_info);


void
unwrap_VkPipelineDynamicStateCreateInfo_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPipelineDynamicStateCreateInfo *out_info,
                          const VkPipelineDynamicStateCreateInfo *in_info);

void
unwrap_VkPipelineDynamicStateCreateInfo(struct temporary_objects*, struct wrapper_device *device,
                          VkPipelineDynamicStateCreateInfo *out_info,
                          const VkPipelineDynamicStateCreateInfo *in_info);


void
unwrap_VkPipelineExecutableInfoKHR_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPipelineExecutableInfoKHR *out_info,
                          const VkPipelineExecutableInfoKHR *in_info);

void
unwrap_VkPipelineExecutableInfoKHR(struct temporary_objects*, struct wrapper_device *device,
                          VkPipelineExecutableInfoKHR *out_info,
                          const VkPipelineExecutableInfoKHR *in_info);


void
unwrap_VkPipelineExecutableInternalRepresentationKHR_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPipelineExecutableInternalRepresentationKHR *out_info,
                          const VkPipelineExecutableInternalRepresentationKHR *in_info);

void
unwrap_VkPipelineExecutableInternalRepresentationKHR(struct temporary_objects*, struct wrapper_device *device,
                          VkPipelineExecutableInternalRepresentationKHR *out_info,
                          const VkPipelineExecutableInternalRepresentationKHR *in_info);


void
unwrap_VkPipelineExecutablePropertiesKHR_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPipelineExecutablePropertiesKHR *out_info,
                          const VkPipelineExecutablePropertiesKHR *in_info);

void
unwrap_VkPipelineExecutablePropertiesKHR(struct temporary_objects*, struct wrapper_device *device,
                          VkPipelineExecutablePropertiesKHR *out_info,
                          const VkPipelineExecutablePropertiesKHR *in_info);


void
unwrap_VkPipelineExecutableStatisticKHR_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPipelineExecutableStatisticKHR *out_info,
                          const VkPipelineExecutableStatisticKHR *in_info);

void
unwrap_VkPipelineExecutableStatisticKHR(struct temporary_objects*, struct wrapper_device *device,
                          VkPipelineExecutableStatisticKHR *out_info,
                          const VkPipelineExecutableStatisticKHR *in_info);


void
unwrap_VkPipelineFragmentShadingRateEnumStateCreateInfoNV_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPipelineFragmentShadingRateEnumStateCreateInfoNV *out_info,
                          const VkPipelineFragmentShadingRateEnumStateCreateInfoNV *in_info);

void
unwrap_VkPipelineFragmentShadingRateEnumStateCreateInfoNV(struct temporary_objects*, struct wrapper_device *device,
                          VkPipelineFragmentShadingRateEnumStateCreateInfoNV *out_info,
                          const VkPipelineFragmentShadingRateEnumStateCreateInfoNV *in_info);


void
unwrap_VkPipelineFragmentShadingRateStateCreateInfoKHR_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPipelineFragmentShadingRateStateCreateInfoKHR *out_info,
                          const VkPipelineFragmentShadingRateStateCreateInfoKHR *in_info);

void
unwrap_VkPipelineFragmentShadingRateStateCreateInfoKHR(struct temporary_objects*, struct wrapper_device *device,
                          VkPipelineFragmentShadingRateStateCreateInfoKHR *out_info,
                          const VkPipelineFragmentShadingRateStateCreateInfoKHR *in_info);


void
unwrap_VkPipelineIndirectDeviceAddressInfoNV_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPipelineIndirectDeviceAddressInfoNV *out_info,
                          const VkPipelineIndirectDeviceAddressInfoNV *in_info);

void
unwrap_VkPipelineIndirectDeviceAddressInfoNV(struct temporary_objects*, struct wrapper_device *device,
                          VkPipelineIndirectDeviceAddressInfoNV *out_info,
                          const VkPipelineIndirectDeviceAddressInfoNV *in_info);


void
unwrap_VkPipelineInfoKHR_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPipelineInfoKHR *out_info,
                          const VkPipelineInfoKHR *in_info);

void
unwrap_VkPipelineInfoKHR(struct temporary_objects*, struct wrapper_device *device,
                          VkPipelineInfoKHR *out_info,
                          const VkPipelineInfoKHR *in_info);


void
unwrap_VkPipelineInputAssemblyStateCreateInfo_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPipelineInputAssemblyStateCreateInfo *out_info,
                          const VkPipelineInputAssemblyStateCreateInfo *in_info);

void
unwrap_VkPipelineInputAssemblyStateCreateInfo(struct temporary_objects*, struct wrapper_device *device,
                          VkPipelineInputAssemblyStateCreateInfo *out_info,
                          const VkPipelineInputAssemblyStateCreateInfo *in_info);


void
unwrap_VkPipelineLayoutCreateInfo_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPipelineLayoutCreateInfo *out_info,
                          const VkPipelineLayoutCreateInfo *in_info);

void
unwrap_VkPipelineLayoutCreateInfo(struct temporary_objects*, struct wrapper_device *device,
                          VkPipelineLayoutCreateInfo *out_info,
                          const VkPipelineLayoutCreateInfo *in_info);


void
unwrap_VkPipelineLibraryCreateInfoKHR_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPipelineLibraryCreateInfoKHR *out_info,
                          const VkPipelineLibraryCreateInfoKHR *in_info);

void
unwrap_VkPipelineLibraryCreateInfoKHR(struct temporary_objects*, struct wrapper_device *device,
                          VkPipelineLibraryCreateInfoKHR *out_info,
                          const VkPipelineLibraryCreateInfoKHR *in_info);


void
unwrap_VkPipelinePropertiesIdentifierEXT_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPipelinePropertiesIdentifierEXT *out_info,
                          const VkPipelinePropertiesIdentifierEXT *in_info);

void
unwrap_VkPipelinePropertiesIdentifierEXT(struct temporary_objects*, struct wrapper_device *device,
                          VkPipelinePropertiesIdentifierEXT *out_info,
                          const VkPipelinePropertiesIdentifierEXT *in_info);


void
unwrap_VkPipelineRasterizationConservativeStateCreateInfoEXT_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPipelineRasterizationConservativeStateCreateInfoEXT *out_info,
                          const VkPipelineRasterizationConservativeStateCreateInfoEXT *in_info);

void
unwrap_VkPipelineRasterizationConservativeStateCreateInfoEXT(struct temporary_objects*, struct wrapper_device *device,
                          VkPipelineRasterizationConservativeStateCreateInfoEXT *out_info,
                          const VkPipelineRasterizationConservativeStateCreateInfoEXT *in_info);


void
unwrap_VkPipelineRasterizationDepthClipStateCreateInfoEXT_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPipelineRasterizationDepthClipStateCreateInfoEXT *out_info,
                          const VkPipelineRasterizationDepthClipStateCreateInfoEXT *in_info);

void
unwrap_VkPipelineRasterizationDepthClipStateCreateInfoEXT(struct temporary_objects*, struct wrapper_device *device,
                          VkPipelineRasterizationDepthClipStateCreateInfoEXT *out_info,
                          const VkPipelineRasterizationDepthClipStateCreateInfoEXT *in_info);


void
unwrap_VkPipelineRasterizationLineStateCreateInfoKHR_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPipelineRasterizationLineStateCreateInfoKHR *out_info,
                          const VkPipelineRasterizationLineStateCreateInfoKHR *in_info);

void
unwrap_VkPipelineRasterizationLineStateCreateInfoKHR(struct temporary_objects*, struct wrapper_device *device,
                          VkPipelineRasterizationLineStateCreateInfoKHR *out_info,
                          const VkPipelineRasterizationLineStateCreateInfoKHR *in_info);


void
unwrap_VkPipelineRasterizationProvokingVertexStateCreateInfoEXT_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPipelineRasterizationProvokingVertexStateCreateInfoEXT *out_info,
                          const VkPipelineRasterizationProvokingVertexStateCreateInfoEXT *in_info);

void
unwrap_VkPipelineRasterizationProvokingVertexStateCreateInfoEXT(struct temporary_objects*, struct wrapper_device *device,
                          VkPipelineRasterizationProvokingVertexStateCreateInfoEXT *out_info,
                          const VkPipelineRasterizationProvokingVertexStateCreateInfoEXT *in_info);


void
unwrap_VkPipelineRasterizationStateCreateInfo_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPipelineRasterizationStateCreateInfo *out_info,
                          const VkPipelineRasterizationStateCreateInfo *in_info);

void
unwrap_VkPipelineRasterizationStateCreateInfo(struct temporary_objects*, struct wrapper_device *device,
                          VkPipelineRasterizationStateCreateInfo *out_info,
                          const VkPipelineRasterizationStateCreateInfo *in_info);


void
unwrap_VkPipelineRasterizationStateRasterizationOrderAMD_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPipelineRasterizationStateRasterizationOrderAMD *out_info,
                          const VkPipelineRasterizationStateRasterizationOrderAMD *in_info);

void
unwrap_VkPipelineRasterizationStateRasterizationOrderAMD(struct temporary_objects*, struct wrapper_device *device,
                          VkPipelineRasterizationStateRasterizationOrderAMD *out_info,
                          const VkPipelineRasterizationStateRasterizationOrderAMD *in_info);


void
unwrap_VkPipelineRasterizationStateStreamCreateInfoEXT_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPipelineRasterizationStateStreamCreateInfoEXT *out_info,
                          const VkPipelineRasterizationStateStreamCreateInfoEXT *in_info);

void
unwrap_VkPipelineRasterizationStateStreamCreateInfoEXT(struct temporary_objects*, struct wrapper_device *device,
                          VkPipelineRasterizationStateStreamCreateInfoEXT *out_info,
                          const VkPipelineRasterizationStateStreamCreateInfoEXT *in_info);


void
unwrap_VkPipelineRenderingCreateInfo_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPipelineRenderingCreateInfo *out_info,
                          const VkPipelineRenderingCreateInfo *in_info);

void
unwrap_VkPipelineRenderingCreateInfo(struct temporary_objects*, struct wrapper_device *device,
                          VkPipelineRenderingCreateInfo *out_info,
                          const VkPipelineRenderingCreateInfo *in_info);


void
unwrap_VkPipelineRepresentativeFragmentTestStateCreateInfoNV_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPipelineRepresentativeFragmentTestStateCreateInfoNV *out_info,
                          const VkPipelineRepresentativeFragmentTestStateCreateInfoNV *in_info);

void
unwrap_VkPipelineRepresentativeFragmentTestStateCreateInfoNV(struct temporary_objects*, struct wrapper_device *device,
                          VkPipelineRepresentativeFragmentTestStateCreateInfoNV *out_info,
                          const VkPipelineRepresentativeFragmentTestStateCreateInfoNV *in_info);


void
unwrap_VkPipelineRobustnessCreateInfoEXT_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPipelineRobustnessCreateInfoEXT *out_info,
                          const VkPipelineRobustnessCreateInfoEXT *in_info);

void
unwrap_VkPipelineRobustnessCreateInfoEXT(struct temporary_objects*, struct wrapper_device *device,
                          VkPipelineRobustnessCreateInfoEXT *out_info,
                          const VkPipelineRobustnessCreateInfoEXT *in_info);


void
unwrap_VkPipelineSampleLocationsStateCreateInfoEXT_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPipelineSampleLocationsStateCreateInfoEXT *out_info,
                          const VkPipelineSampleLocationsStateCreateInfoEXT *in_info);

void
unwrap_VkPipelineSampleLocationsStateCreateInfoEXT(struct temporary_objects*, struct wrapper_device *device,
                          VkPipelineSampleLocationsStateCreateInfoEXT *out_info,
                          const VkPipelineSampleLocationsStateCreateInfoEXT *in_info);


void
unwrap_VkPipelineShaderStageCreateInfo_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPipelineShaderStageCreateInfo *out_info,
                          const VkPipelineShaderStageCreateInfo *in_info);

void
unwrap_VkPipelineShaderStageCreateInfo(struct temporary_objects*, struct wrapper_device *device,
                          VkPipelineShaderStageCreateInfo *out_info,
                          const VkPipelineShaderStageCreateInfo *in_info);


void
unwrap_VkPipelineShaderStageModuleIdentifierCreateInfoEXT_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPipelineShaderStageModuleIdentifierCreateInfoEXT *out_info,
                          const VkPipelineShaderStageModuleIdentifierCreateInfoEXT *in_info);

void
unwrap_VkPipelineShaderStageModuleIdentifierCreateInfoEXT(struct temporary_objects*, struct wrapper_device *device,
                          VkPipelineShaderStageModuleIdentifierCreateInfoEXT *out_info,
                          const VkPipelineShaderStageModuleIdentifierCreateInfoEXT *in_info);


void
unwrap_VkPipelineShaderStageRequiredSubgroupSizeCreateInfo_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPipelineShaderStageRequiredSubgroupSizeCreateInfo *out_info,
                          const VkPipelineShaderStageRequiredSubgroupSizeCreateInfo *in_info);

void
unwrap_VkPipelineShaderStageRequiredSubgroupSizeCreateInfo(struct temporary_objects*, struct wrapper_device *device,
                          VkPipelineShaderStageRequiredSubgroupSizeCreateInfo *out_info,
                          const VkPipelineShaderStageRequiredSubgroupSizeCreateInfo *in_info);


void
unwrap_VkPipelineTessellationDomainOriginStateCreateInfo_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPipelineTessellationDomainOriginStateCreateInfo *out_info,
                          const VkPipelineTessellationDomainOriginStateCreateInfo *in_info);

void
unwrap_VkPipelineTessellationDomainOriginStateCreateInfo(struct temporary_objects*, struct wrapper_device *device,
                          VkPipelineTessellationDomainOriginStateCreateInfo *out_info,
                          const VkPipelineTessellationDomainOriginStateCreateInfo *in_info);


void
unwrap_VkPipelineTessellationStateCreateInfo_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPipelineTessellationStateCreateInfo *out_info,
                          const VkPipelineTessellationStateCreateInfo *in_info);

void
unwrap_VkPipelineTessellationStateCreateInfo(struct temporary_objects*, struct wrapper_device *device,
                          VkPipelineTessellationStateCreateInfo *out_info,
                          const VkPipelineTessellationStateCreateInfo *in_info);


void
unwrap_VkPipelineVertexInputDivisorStateCreateInfoKHR_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPipelineVertexInputDivisorStateCreateInfoKHR *out_info,
                          const VkPipelineVertexInputDivisorStateCreateInfoKHR *in_info);

void
unwrap_VkPipelineVertexInputDivisorStateCreateInfoKHR(struct temporary_objects*, struct wrapper_device *device,
                          VkPipelineVertexInputDivisorStateCreateInfoKHR *out_info,
                          const VkPipelineVertexInputDivisorStateCreateInfoKHR *in_info);


void
unwrap_VkPipelineVertexInputStateCreateInfo_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPipelineVertexInputStateCreateInfo *out_info,
                          const VkPipelineVertexInputStateCreateInfo *in_info);

void
unwrap_VkPipelineVertexInputStateCreateInfo(struct temporary_objects*, struct wrapper_device *device,
                          VkPipelineVertexInputStateCreateInfo *out_info,
                          const VkPipelineVertexInputStateCreateInfo *in_info);


void
unwrap_VkPipelineViewportCoarseSampleOrderStateCreateInfoNV_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPipelineViewportCoarseSampleOrderStateCreateInfoNV *out_info,
                          const VkPipelineViewportCoarseSampleOrderStateCreateInfoNV *in_info);

void
unwrap_VkPipelineViewportCoarseSampleOrderStateCreateInfoNV(struct temporary_objects*, struct wrapper_device *device,
                          VkPipelineViewportCoarseSampleOrderStateCreateInfoNV *out_info,
                          const VkPipelineViewportCoarseSampleOrderStateCreateInfoNV *in_info);


void
unwrap_VkPipelineViewportDepthClipControlCreateInfoEXT_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPipelineViewportDepthClipControlCreateInfoEXT *out_info,
                          const VkPipelineViewportDepthClipControlCreateInfoEXT *in_info);

void
unwrap_VkPipelineViewportDepthClipControlCreateInfoEXT(struct temporary_objects*, struct wrapper_device *device,
                          VkPipelineViewportDepthClipControlCreateInfoEXT *out_info,
                          const VkPipelineViewportDepthClipControlCreateInfoEXT *in_info);


void
unwrap_VkPipelineViewportExclusiveScissorStateCreateInfoNV_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPipelineViewportExclusiveScissorStateCreateInfoNV *out_info,
                          const VkPipelineViewportExclusiveScissorStateCreateInfoNV *in_info);

void
unwrap_VkPipelineViewportExclusiveScissorStateCreateInfoNV(struct temporary_objects*, struct wrapper_device *device,
                          VkPipelineViewportExclusiveScissorStateCreateInfoNV *out_info,
                          const VkPipelineViewportExclusiveScissorStateCreateInfoNV *in_info);


void
unwrap_VkPipelineViewportShadingRateImageStateCreateInfoNV_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPipelineViewportShadingRateImageStateCreateInfoNV *out_info,
                          const VkPipelineViewportShadingRateImageStateCreateInfoNV *in_info);

void
unwrap_VkPipelineViewportShadingRateImageStateCreateInfoNV(struct temporary_objects*, struct wrapper_device *device,
                          VkPipelineViewportShadingRateImageStateCreateInfoNV *out_info,
                          const VkPipelineViewportShadingRateImageStateCreateInfoNV *in_info);


void
unwrap_VkPipelineViewportStateCreateInfo_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPipelineViewportStateCreateInfo *out_info,
                          const VkPipelineViewportStateCreateInfo *in_info);

void
unwrap_VkPipelineViewportStateCreateInfo(struct temporary_objects*, struct wrapper_device *device,
                          VkPipelineViewportStateCreateInfo *out_info,
                          const VkPipelineViewportStateCreateInfo *in_info);


void
unwrap_VkPipelineViewportSwizzleStateCreateInfoNV_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPipelineViewportSwizzleStateCreateInfoNV *out_info,
                          const VkPipelineViewportSwizzleStateCreateInfoNV *in_info);

void
unwrap_VkPipelineViewportSwizzleStateCreateInfoNV(struct temporary_objects*, struct wrapper_device *device,
                          VkPipelineViewportSwizzleStateCreateInfoNV *out_info,
                          const VkPipelineViewportSwizzleStateCreateInfoNV *in_info);


void
unwrap_VkPipelineViewportWScalingStateCreateInfoNV_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPipelineViewportWScalingStateCreateInfoNV *out_info,
                          const VkPipelineViewportWScalingStateCreateInfoNV *in_info);

void
unwrap_VkPipelineViewportWScalingStateCreateInfoNV(struct temporary_objects*, struct wrapper_device *device,
                          VkPipelineViewportWScalingStateCreateInfoNV *out_info,
                          const VkPipelineViewportWScalingStateCreateInfoNV *in_info);


void
unwrap_VkPresentIdKHR_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPresentIdKHR *out_info,
                          const VkPresentIdKHR *in_info);

void
unwrap_VkPresentIdKHR(struct temporary_objects*, struct wrapper_device *device,
                          VkPresentIdKHR *out_info,
                          const VkPresentIdKHR *in_info);


void
unwrap_VkPresentInfoKHR_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPresentInfoKHR *out_info,
                          const VkPresentInfoKHR *in_info);

void
unwrap_VkPresentInfoKHR(struct temporary_objects*, struct wrapper_device *device,
                          VkPresentInfoKHR *out_info,
                          const VkPresentInfoKHR *in_info);


void
unwrap_VkPresentRegionsKHR_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPresentRegionsKHR *out_info,
                          const VkPresentRegionsKHR *in_info);

void
unwrap_VkPresentRegionsKHR(struct temporary_objects*, struct wrapper_device *device,
                          VkPresentRegionsKHR *out_info,
                          const VkPresentRegionsKHR *in_info);


void
unwrap_VkPresentTimesInfoGOOGLE_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPresentTimesInfoGOOGLE *out_info,
                          const VkPresentTimesInfoGOOGLE *in_info);

void
unwrap_VkPresentTimesInfoGOOGLE(struct temporary_objects*, struct wrapper_device *device,
                          VkPresentTimesInfoGOOGLE *out_info,
                          const VkPresentTimesInfoGOOGLE *in_info);


void
unwrap_VkPrivateDataSlotCreateInfo_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPrivateDataSlotCreateInfo *out_info,
                          const VkPrivateDataSlotCreateInfo *in_info);

void
unwrap_VkPrivateDataSlotCreateInfo(struct temporary_objects*, struct wrapper_device *device,
                          VkPrivateDataSlotCreateInfo *out_info,
                          const VkPrivateDataSlotCreateInfo *in_info);


void
unwrap_VkProtectedSubmitInfo_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkProtectedSubmitInfo *out_info,
                          const VkProtectedSubmitInfo *in_info);

void
unwrap_VkProtectedSubmitInfo(struct temporary_objects*, struct wrapper_device *device,
                          VkProtectedSubmitInfo *out_info,
                          const VkProtectedSubmitInfo *in_info);


void
unwrap_VkPushConstantsInfoKHR_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPushConstantsInfoKHR *out_info,
                          const VkPushConstantsInfoKHR *in_info);

void
unwrap_VkPushConstantsInfoKHR(struct temporary_objects*, struct wrapper_device *device,
                          VkPushConstantsInfoKHR *out_info,
                          const VkPushConstantsInfoKHR *in_info);


void
unwrap_VkPushDescriptorSetInfoKHR_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPushDescriptorSetInfoKHR *out_info,
                          const VkPushDescriptorSetInfoKHR *in_info);

void
unwrap_VkPushDescriptorSetInfoKHR(struct temporary_objects*, struct wrapper_device *device,
                          VkPushDescriptorSetInfoKHR *out_info,
                          const VkPushDescriptorSetInfoKHR *in_info);


void
unwrap_VkPushDescriptorSetWithTemplateInfoKHR_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkPushDescriptorSetWithTemplateInfoKHR *out_info,
                          const VkPushDescriptorSetWithTemplateInfoKHR *in_info);

void
unwrap_VkPushDescriptorSetWithTemplateInfoKHR(struct temporary_objects*, struct wrapper_device *device,
                          VkPushDescriptorSetWithTemplateInfoKHR *out_info,
                          const VkPushDescriptorSetWithTemplateInfoKHR *in_info);


void
unwrap_VkQueryLowLatencySupportNV_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkQueryLowLatencySupportNV *out_info,
                          const VkQueryLowLatencySupportNV *in_info);

void
unwrap_VkQueryLowLatencySupportNV(struct temporary_objects*, struct wrapper_device *device,
                          VkQueryLowLatencySupportNV *out_info,
                          const VkQueryLowLatencySupportNV *in_info);


void
unwrap_VkQueryPoolCreateInfo_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkQueryPoolCreateInfo *out_info,
                          const VkQueryPoolCreateInfo *in_info);

void
unwrap_VkQueryPoolCreateInfo(struct temporary_objects*, struct wrapper_device *device,
                          VkQueryPoolCreateInfo *out_info,
                          const VkQueryPoolCreateInfo *in_info);


void
unwrap_VkQueryPoolPerformanceCreateInfoKHR_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkQueryPoolPerformanceCreateInfoKHR *out_info,
                          const VkQueryPoolPerformanceCreateInfoKHR *in_info);

void
unwrap_VkQueryPoolPerformanceCreateInfoKHR(struct temporary_objects*, struct wrapper_device *device,
                          VkQueryPoolPerformanceCreateInfoKHR *out_info,
                          const VkQueryPoolPerformanceCreateInfoKHR *in_info);


void
unwrap_VkQueryPoolPerformanceQueryCreateInfoINTEL_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkQueryPoolPerformanceQueryCreateInfoINTEL *out_info,
                          const VkQueryPoolPerformanceQueryCreateInfoINTEL *in_info);

void
unwrap_VkQueryPoolPerformanceQueryCreateInfoINTEL(struct temporary_objects*, struct wrapper_device *device,
                          VkQueryPoolPerformanceQueryCreateInfoINTEL *out_info,
                          const VkQueryPoolPerformanceQueryCreateInfoINTEL *in_info);


void
unwrap_VkQueryPoolVideoEncodeFeedbackCreateInfoKHR_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkQueryPoolVideoEncodeFeedbackCreateInfoKHR *out_info,
                          const VkQueryPoolVideoEncodeFeedbackCreateInfoKHR *in_info);

void
unwrap_VkQueryPoolVideoEncodeFeedbackCreateInfoKHR(struct temporary_objects*, struct wrapper_device *device,
                          VkQueryPoolVideoEncodeFeedbackCreateInfoKHR *out_info,
                          const VkQueryPoolVideoEncodeFeedbackCreateInfoKHR *in_info);


void
unwrap_VkQueueFamilyCheckpointProperties2NV_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkQueueFamilyCheckpointProperties2NV *out_info,
                          const VkQueueFamilyCheckpointProperties2NV *in_info);

void
unwrap_VkQueueFamilyCheckpointProperties2NV(struct temporary_objects*, struct wrapper_device *device,
                          VkQueueFamilyCheckpointProperties2NV *out_info,
                          const VkQueueFamilyCheckpointProperties2NV *in_info);


void
unwrap_VkQueueFamilyCheckpointPropertiesNV_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkQueueFamilyCheckpointPropertiesNV *out_info,
                          const VkQueueFamilyCheckpointPropertiesNV *in_info);

void
unwrap_VkQueueFamilyCheckpointPropertiesNV(struct temporary_objects*, struct wrapper_device *device,
                          VkQueueFamilyCheckpointPropertiesNV *out_info,
                          const VkQueueFamilyCheckpointPropertiesNV *in_info);


void
unwrap_VkQueueFamilyGlobalPriorityPropertiesKHR_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkQueueFamilyGlobalPriorityPropertiesKHR *out_info,
                          const VkQueueFamilyGlobalPriorityPropertiesKHR *in_info);

void
unwrap_VkQueueFamilyGlobalPriorityPropertiesKHR(struct temporary_objects*, struct wrapper_device *device,
                          VkQueueFamilyGlobalPriorityPropertiesKHR *out_info,
                          const VkQueueFamilyGlobalPriorityPropertiesKHR *in_info);


void
unwrap_VkQueueFamilyProperties2_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkQueueFamilyProperties2 *out_info,
                          const VkQueueFamilyProperties2 *in_info);

void
unwrap_VkQueueFamilyProperties2(struct temporary_objects*, struct wrapper_device *device,
                          VkQueueFamilyProperties2 *out_info,
                          const VkQueueFamilyProperties2 *in_info);


void
unwrap_VkQueueFamilyQueryResultStatusPropertiesKHR_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkQueueFamilyQueryResultStatusPropertiesKHR *out_info,
                          const VkQueueFamilyQueryResultStatusPropertiesKHR *in_info);

void
unwrap_VkQueueFamilyQueryResultStatusPropertiesKHR(struct temporary_objects*, struct wrapper_device *device,
                          VkQueueFamilyQueryResultStatusPropertiesKHR *out_info,
                          const VkQueueFamilyQueryResultStatusPropertiesKHR *in_info);


void
unwrap_VkQueueFamilyVideoPropertiesKHR_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkQueueFamilyVideoPropertiesKHR *out_info,
                          const VkQueueFamilyVideoPropertiesKHR *in_info);

void
unwrap_VkQueueFamilyVideoPropertiesKHR(struct temporary_objects*, struct wrapper_device *device,
                          VkQueueFamilyVideoPropertiesKHR *out_info,
                          const VkQueueFamilyVideoPropertiesKHR *in_info);


void
unwrap_VkRayTracingPipelineCreateInfoKHR_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkRayTracingPipelineCreateInfoKHR *out_info,
                          const VkRayTracingPipelineCreateInfoKHR *in_info);

void
unwrap_VkRayTracingPipelineCreateInfoKHR(struct temporary_objects*, struct wrapper_device *device,
                          VkRayTracingPipelineCreateInfoKHR *out_info,
                          const VkRayTracingPipelineCreateInfoKHR *in_info);


void
unwrap_VkRayTracingPipelineCreateInfoNV_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkRayTracingPipelineCreateInfoNV *out_info,
                          const VkRayTracingPipelineCreateInfoNV *in_info);

void
unwrap_VkRayTracingPipelineCreateInfoNV(struct temporary_objects*, struct wrapper_device *device,
                          VkRayTracingPipelineCreateInfoNV *out_info,
                          const VkRayTracingPipelineCreateInfoNV *in_info);


void
unwrap_VkRayTracingPipelineInterfaceCreateInfoKHR_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkRayTracingPipelineInterfaceCreateInfoKHR *out_info,
                          const VkRayTracingPipelineInterfaceCreateInfoKHR *in_info);

void
unwrap_VkRayTracingPipelineInterfaceCreateInfoKHR(struct temporary_objects*, struct wrapper_device *device,
                          VkRayTracingPipelineInterfaceCreateInfoKHR *out_info,
                          const VkRayTracingPipelineInterfaceCreateInfoKHR *in_info);


void
unwrap_VkRayTracingShaderGroupCreateInfoKHR_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkRayTracingShaderGroupCreateInfoKHR *out_info,
                          const VkRayTracingShaderGroupCreateInfoKHR *in_info);

void
unwrap_VkRayTracingShaderGroupCreateInfoKHR(struct temporary_objects*, struct wrapper_device *device,
                          VkRayTracingShaderGroupCreateInfoKHR *out_info,
                          const VkRayTracingShaderGroupCreateInfoKHR *in_info);


void
unwrap_VkRayTracingShaderGroupCreateInfoNV_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkRayTracingShaderGroupCreateInfoNV *out_info,
                          const VkRayTracingShaderGroupCreateInfoNV *in_info);

void
unwrap_VkRayTracingShaderGroupCreateInfoNV(struct temporary_objects*, struct wrapper_device *device,
                          VkRayTracingShaderGroupCreateInfoNV *out_info,
                          const VkRayTracingShaderGroupCreateInfoNV *in_info);


void
unwrap_VkReleaseSwapchainImagesInfoEXT_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkReleaseSwapchainImagesInfoEXT *out_info,
                          const VkReleaseSwapchainImagesInfoEXT *in_info);

void
unwrap_VkReleaseSwapchainImagesInfoEXT(struct temporary_objects*, struct wrapper_device *device,
                          VkReleaseSwapchainImagesInfoEXT *out_info,
                          const VkReleaseSwapchainImagesInfoEXT *in_info);


void
unwrap_VkRenderPassAttachmentBeginInfo_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkRenderPassAttachmentBeginInfo *out_info,
                          const VkRenderPassAttachmentBeginInfo *in_info);

void
unwrap_VkRenderPassAttachmentBeginInfo(struct temporary_objects*, struct wrapper_device *device,
                          VkRenderPassAttachmentBeginInfo *out_info,
                          const VkRenderPassAttachmentBeginInfo *in_info);


void
unwrap_VkRenderPassBeginInfo_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkRenderPassBeginInfo *out_info,
                          const VkRenderPassBeginInfo *in_info);

void
unwrap_VkRenderPassBeginInfo(struct temporary_objects*, struct wrapper_device *device,
                          VkRenderPassBeginInfo *out_info,
                          const VkRenderPassBeginInfo *in_info);


void
unwrap_VkRenderPassCreateInfo_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkRenderPassCreateInfo *out_info,
                          const VkRenderPassCreateInfo *in_info);

void
unwrap_VkRenderPassCreateInfo(struct temporary_objects*, struct wrapper_device *device,
                          VkRenderPassCreateInfo *out_info,
                          const VkRenderPassCreateInfo *in_info);


void
unwrap_VkRenderPassCreateInfo2_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkRenderPassCreateInfo2 *out_info,
                          const VkRenderPassCreateInfo2 *in_info);

void
unwrap_VkRenderPassCreateInfo2(struct temporary_objects*, struct wrapper_device *device,
                          VkRenderPassCreateInfo2 *out_info,
                          const VkRenderPassCreateInfo2 *in_info);


void
unwrap_VkRenderPassCreationControlEXT_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkRenderPassCreationControlEXT *out_info,
                          const VkRenderPassCreationControlEXT *in_info);

void
unwrap_VkRenderPassCreationControlEXT(struct temporary_objects*, struct wrapper_device *device,
                          VkRenderPassCreationControlEXT *out_info,
                          const VkRenderPassCreationControlEXT *in_info);


void
unwrap_VkRenderPassCreationFeedbackCreateInfoEXT_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkRenderPassCreationFeedbackCreateInfoEXT *out_info,
                          const VkRenderPassCreationFeedbackCreateInfoEXT *in_info);

void
unwrap_VkRenderPassCreationFeedbackCreateInfoEXT(struct temporary_objects*, struct wrapper_device *device,
                          VkRenderPassCreationFeedbackCreateInfoEXT *out_info,
                          const VkRenderPassCreationFeedbackCreateInfoEXT *in_info);


void
unwrap_VkRenderPassFragmentDensityMapCreateInfoEXT_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkRenderPassFragmentDensityMapCreateInfoEXT *out_info,
                          const VkRenderPassFragmentDensityMapCreateInfoEXT *in_info);

void
unwrap_VkRenderPassFragmentDensityMapCreateInfoEXT(struct temporary_objects*, struct wrapper_device *device,
                          VkRenderPassFragmentDensityMapCreateInfoEXT *out_info,
                          const VkRenderPassFragmentDensityMapCreateInfoEXT *in_info);


void
unwrap_VkRenderPassInputAttachmentAspectCreateInfo_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkRenderPassInputAttachmentAspectCreateInfo *out_info,
                          const VkRenderPassInputAttachmentAspectCreateInfo *in_info);

void
unwrap_VkRenderPassInputAttachmentAspectCreateInfo(struct temporary_objects*, struct wrapper_device *device,
                          VkRenderPassInputAttachmentAspectCreateInfo *out_info,
                          const VkRenderPassInputAttachmentAspectCreateInfo *in_info);


void
unwrap_VkRenderPassMultiviewCreateInfo_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkRenderPassMultiviewCreateInfo *out_info,
                          const VkRenderPassMultiviewCreateInfo *in_info);

void
unwrap_VkRenderPassMultiviewCreateInfo(struct temporary_objects*, struct wrapper_device *device,
                          VkRenderPassMultiviewCreateInfo *out_info,
                          const VkRenderPassMultiviewCreateInfo *in_info);


void
unwrap_VkRenderPassSampleLocationsBeginInfoEXT_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkRenderPassSampleLocationsBeginInfoEXT *out_info,
                          const VkRenderPassSampleLocationsBeginInfoEXT *in_info);

void
unwrap_VkRenderPassSampleLocationsBeginInfoEXT(struct temporary_objects*, struct wrapper_device *device,
                          VkRenderPassSampleLocationsBeginInfoEXT *out_info,
                          const VkRenderPassSampleLocationsBeginInfoEXT *in_info);


void
unwrap_VkRenderPassStripeBeginInfoARM_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkRenderPassStripeBeginInfoARM *out_info,
                          const VkRenderPassStripeBeginInfoARM *in_info);

void
unwrap_VkRenderPassStripeBeginInfoARM(struct temporary_objects*, struct wrapper_device *device,
                          VkRenderPassStripeBeginInfoARM *out_info,
                          const VkRenderPassStripeBeginInfoARM *in_info);


void
unwrap_VkRenderPassStripeInfoARM_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkRenderPassStripeInfoARM *out_info,
                          const VkRenderPassStripeInfoARM *in_info);

void
unwrap_VkRenderPassStripeInfoARM(struct temporary_objects*, struct wrapper_device *device,
                          VkRenderPassStripeInfoARM *out_info,
                          const VkRenderPassStripeInfoARM *in_info);


void
unwrap_VkRenderPassStripeSubmitInfoARM_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkRenderPassStripeSubmitInfoARM *out_info,
                          const VkRenderPassStripeSubmitInfoARM *in_info);

void
unwrap_VkRenderPassStripeSubmitInfoARM(struct temporary_objects*, struct wrapper_device *device,
                          VkRenderPassStripeSubmitInfoARM *out_info,
                          const VkRenderPassStripeSubmitInfoARM *in_info);


void
unwrap_VkRenderPassSubpassFeedbackCreateInfoEXT_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkRenderPassSubpassFeedbackCreateInfoEXT *out_info,
                          const VkRenderPassSubpassFeedbackCreateInfoEXT *in_info);

void
unwrap_VkRenderPassSubpassFeedbackCreateInfoEXT(struct temporary_objects*, struct wrapper_device *device,
                          VkRenderPassSubpassFeedbackCreateInfoEXT *out_info,
                          const VkRenderPassSubpassFeedbackCreateInfoEXT *in_info);


void
unwrap_VkRenderPassTransformBeginInfoQCOM_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkRenderPassTransformBeginInfoQCOM *out_info,
                          const VkRenderPassTransformBeginInfoQCOM *in_info);

void
unwrap_VkRenderPassTransformBeginInfoQCOM(struct temporary_objects*, struct wrapper_device *device,
                          VkRenderPassTransformBeginInfoQCOM *out_info,
                          const VkRenderPassTransformBeginInfoQCOM *in_info);


void
unwrap_VkRenderingAreaInfoKHR_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkRenderingAreaInfoKHR *out_info,
                          const VkRenderingAreaInfoKHR *in_info);

void
unwrap_VkRenderingAreaInfoKHR(struct temporary_objects*, struct wrapper_device *device,
                          VkRenderingAreaInfoKHR *out_info,
                          const VkRenderingAreaInfoKHR *in_info);


void
unwrap_VkRenderingAttachmentInfo_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkRenderingAttachmentInfo *out_info,
                          const VkRenderingAttachmentInfo *in_info);

void
unwrap_VkRenderingAttachmentInfo(struct temporary_objects*, struct wrapper_device *device,
                          VkRenderingAttachmentInfo *out_info,
                          const VkRenderingAttachmentInfo *in_info);


void
unwrap_VkRenderingAttachmentLocationInfoKHR_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkRenderingAttachmentLocationInfoKHR *out_info,
                          const VkRenderingAttachmentLocationInfoKHR *in_info);

void
unwrap_VkRenderingAttachmentLocationInfoKHR(struct temporary_objects*, struct wrapper_device *device,
                          VkRenderingAttachmentLocationInfoKHR *out_info,
                          const VkRenderingAttachmentLocationInfoKHR *in_info);


void
unwrap_VkRenderingFragmentDensityMapAttachmentInfoEXT_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkRenderingFragmentDensityMapAttachmentInfoEXT *out_info,
                          const VkRenderingFragmentDensityMapAttachmentInfoEXT *in_info);

void
unwrap_VkRenderingFragmentDensityMapAttachmentInfoEXT(struct temporary_objects*, struct wrapper_device *device,
                          VkRenderingFragmentDensityMapAttachmentInfoEXT *out_info,
                          const VkRenderingFragmentDensityMapAttachmentInfoEXT *in_info);


void
unwrap_VkRenderingFragmentShadingRateAttachmentInfoKHR_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkRenderingFragmentShadingRateAttachmentInfoKHR *out_info,
                          const VkRenderingFragmentShadingRateAttachmentInfoKHR *in_info);

void
unwrap_VkRenderingFragmentShadingRateAttachmentInfoKHR(struct temporary_objects*, struct wrapper_device *device,
                          VkRenderingFragmentShadingRateAttachmentInfoKHR *out_info,
                          const VkRenderingFragmentShadingRateAttachmentInfoKHR *in_info);


void
unwrap_VkRenderingInfo_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkRenderingInfo *out_info,
                          const VkRenderingInfo *in_info);

void
unwrap_VkRenderingInfo(struct temporary_objects*, struct wrapper_device *device,
                          VkRenderingInfo *out_info,
                          const VkRenderingInfo *in_info);


void
unwrap_VkRenderingInputAttachmentIndexInfoKHR_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkRenderingInputAttachmentIndexInfoKHR *out_info,
                          const VkRenderingInputAttachmentIndexInfoKHR *in_info);

void
unwrap_VkRenderingInputAttachmentIndexInfoKHR(struct temporary_objects*, struct wrapper_device *device,
                          VkRenderingInputAttachmentIndexInfoKHR *out_info,
                          const VkRenderingInputAttachmentIndexInfoKHR *in_info);


void
unwrap_VkResolveImageInfo2_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkResolveImageInfo2 *out_info,
                          const VkResolveImageInfo2 *in_info);

void
unwrap_VkResolveImageInfo2(struct temporary_objects*, struct wrapper_device *device,
                          VkResolveImageInfo2 *out_info,
                          const VkResolveImageInfo2 *in_info);


void
unwrap_VkSampleLocationsInfoEXT_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkSampleLocationsInfoEXT *out_info,
                          const VkSampleLocationsInfoEXT *in_info);

void
unwrap_VkSampleLocationsInfoEXT(struct temporary_objects*, struct wrapper_device *device,
                          VkSampleLocationsInfoEXT *out_info,
                          const VkSampleLocationsInfoEXT *in_info);


void
unwrap_VkSamplerBlockMatchWindowCreateInfoQCOM_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkSamplerBlockMatchWindowCreateInfoQCOM *out_info,
                          const VkSamplerBlockMatchWindowCreateInfoQCOM *in_info);

void
unwrap_VkSamplerBlockMatchWindowCreateInfoQCOM(struct temporary_objects*, struct wrapper_device *device,
                          VkSamplerBlockMatchWindowCreateInfoQCOM *out_info,
                          const VkSamplerBlockMatchWindowCreateInfoQCOM *in_info);


void
unwrap_VkSamplerBorderColorComponentMappingCreateInfoEXT_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkSamplerBorderColorComponentMappingCreateInfoEXT *out_info,
                          const VkSamplerBorderColorComponentMappingCreateInfoEXT *in_info);

void
unwrap_VkSamplerBorderColorComponentMappingCreateInfoEXT(struct temporary_objects*, struct wrapper_device *device,
                          VkSamplerBorderColorComponentMappingCreateInfoEXT *out_info,
                          const VkSamplerBorderColorComponentMappingCreateInfoEXT *in_info);


void
unwrap_VkSamplerCaptureDescriptorDataInfoEXT_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkSamplerCaptureDescriptorDataInfoEXT *out_info,
                          const VkSamplerCaptureDescriptorDataInfoEXT *in_info);

void
unwrap_VkSamplerCaptureDescriptorDataInfoEXT(struct temporary_objects*, struct wrapper_device *device,
                          VkSamplerCaptureDescriptorDataInfoEXT *out_info,
                          const VkSamplerCaptureDescriptorDataInfoEXT *in_info);


void
unwrap_VkSamplerCreateInfo_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkSamplerCreateInfo *out_info,
                          const VkSamplerCreateInfo *in_info);

void
unwrap_VkSamplerCreateInfo(struct temporary_objects*, struct wrapper_device *device,
                          VkSamplerCreateInfo *out_info,
                          const VkSamplerCreateInfo *in_info);


void
unwrap_VkSamplerCubicWeightsCreateInfoQCOM_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkSamplerCubicWeightsCreateInfoQCOM *out_info,
                          const VkSamplerCubicWeightsCreateInfoQCOM *in_info);

void
unwrap_VkSamplerCubicWeightsCreateInfoQCOM(struct temporary_objects*, struct wrapper_device *device,
                          VkSamplerCubicWeightsCreateInfoQCOM *out_info,
                          const VkSamplerCubicWeightsCreateInfoQCOM *in_info);


void
unwrap_VkSamplerCustomBorderColorCreateInfoEXT_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkSamplerCustomBorderColorCreateInfoEXT *out_info,
                          const VkSamplerCustomBorderColorCreateInfoEXT *in_info);

void
unwrap_VkSamplerCustomBorderColorCreateInfoEXT(struct temporary_objects*, struct wrapper_device *device,
                          VkSamplerCustomBorderColorCreateInfoEXT *out_info,
                          const VkSamplerCustomBorderColorCreateInfoEXT *in_info);


void
unwrap_VkSamplerReductionModeCreateInfo_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkSamplerReductionModeCreateInfo *out_info,
                          const VkSamplerReductionModeCreateInfo *in_info);

void
unwrap_VkSamplerReductionModeCreateInfo(struct temporary_objects*, struct wrapper_device *device,
                          VkSamplerReductionModeCreateInfo *out_info,
                          const VkSamplerReductionModeCreateInfo *in_info);


void
unwrap_VkSamplerYcbcrConversionCreateInfo_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkSamplerYcbcrConversionCreateInfo *out_info,
                          const VkSamplerYcbcrConversionCreateInfo *in_info);

void
unwrap_VkSamplerYcbcrConversionCreateInfo(struct temporary_objects*, struct wrapper_device *device,
                          VkSamplerYcbcrConversionCreateInfo *out_info,
                          const VkSamplerYcbcrConversionCreateInfo *in_info);


void
unwrap_VkSamplerYcbcrConversionImageFormatProperties_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkSamplerYcbcrConversionImageFormatProperties *out_info,
                          const VkSamplerYcbcrConversionImageFormatProperties *in_info);

void
unwrap_VkSamplerYcbcrConversionImageFormatProperties(struct temporary_objects*, struct wrapper_device *device,
                          VkSamplerYcbcrConversionImageFormatProperties *out_info,
                          const VkSamplerYcbcrConversionImageFormatProperties *in_info);


void
unwrap_VkSamplerYcbcrConversionInfo_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkSamplerYcbcrConversionInfo *out_info,
                          const VkSamplerYcbcrConversionInfo *in_info);

void
unwrap_VkSamplerYcbcrConversionInfo(struct temporary_objects*, struct wrapper_device *device,
                          VkSamplerYcbcrConversionInfo *out_info,
                          const VkSamplerYcbcrConversionInfo *in_info);


void
unwrap_VkSamplerYcbcrConversionYcbcrDegammaCreateInfoQCOM_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkSamplerYcbcrConversionYcbcrDegammaCreateInfoQCOM *out_info,
                          const VkSamplerYcbcrConversionYcbcrDegammaCreateInfoQCOM *in_info);

void
unwrap_VkSamplerYcbcrConversionYcbcrDegammaCreateInfoQCOM(struct temporary_objects*, struct wrapper_device *device,
                          VkSamplerYcbcrConversionYcbcrDegammaCreateInfoQCOM *out_info,
                          const VkSamplerYcbcrConversionYcbcrDegammaCreateInfoQCOM *in_info);


void
unwrap_VkSemaphoreCreateInfo_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkSemaphoreCreateInfo *out_info,
                          const VkSemaphoreCreateInfo *in_info);

void
unwrap_VkSemaphoreCreateInfo(struct temporary_objects*, struct wrapper_device *device,
                          VkSemaphoreCreateInfo *out_info,
                          const VkSemaphoreCreateInfo *in_info);


void
unwrap_VkSemaphoreGetFdInfoKHR_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkSemaphoreGetFdInfoKHR *out_info,
                          const VkSemaphoreGetFdInfoKHR *in_info);

void
unwrap_VkSemaphoreGetFdInfoKHR(struct temporary_objects*, struct wrapper_device *device,
                          VkSemaphoreGetFdInfoKHR *out_info,
                          const VkSemaphoreGetFdInfoKHR *in_info);


void
unwrap_VkSemaphoreSignalInfo_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkSemaphoreSignalInfo *out_info,
                          const VkSemaphoreSignalInfo *in_info);

void
unwrap_VkSemaphoreSignalInfo(struct temporary_objects*, struct wrapper_device *device,
                          VkSemaphoreSignalInfo *out_info,
                          const VkSemaphoreSignalInfo *in_info);


void
unwrap_VkSemaphoreSubmitInfo_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkSemaphoreSubmitInfo *out_info,
                          const VkSemaphoreSubmitInfo *in_info);

void
unwrap_VkSemaphoreSubmitInfo(struct temporary_objects*, struct wrapper_device *device,
                          VkSemaphoreSubmitInfo *out_info,
                          const VkSemaphoreSubmitInfo *in_info);


void
unwrap_VkSemaphoreTypeCreateInfo_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkSemaphoreTypeCreateInfo *out_info,
                          const VkSemaphoreTypeCreateInfo *in_info);

void
unwrap_VkSemaphoreTypeCreateInfo(struct temporary_objects*, struct wrapper_device *device,
                          VkSemaphoreTypeCreateInfo *out_info,
                          const VkSemaphoreTypeCreateInfo *in_info);


void
unwrap_VkSemaphoreWaitInfo_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkSemaphoreWaitInfo *out_info,
                          const VkSemaphoreWaitInfo *in_info);

void
unwrap_VkSemaphoreWaitInfo(struct temporary_objects*, struct wrapper_device *device,
                          VkSemaphoreWaitInfo *out_info,
                          const VkSemaphoreWaitInfo *in_info);


void
unwrap_VkSetDescriptorBufferOffsetsInfoEXT_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkSetDescriptorBufferOffsetsInfoEXT *out_info,
                          const VkSetDescriptorBufferOffsetsInfoEXT *in_info);

void
unwrap_VkSetDescriptorBufferOffsetsInfoEXT(struct temporary_objects*, struct wrapper_device *device,
                          VkSetDescriptorBufferOffsetsInfoEXT *out_info,
                          const VkSetDescriptorBufferOffsetsInfoEXT *in_info);


void
unwrap_VkSetLatencyMarkerInfoNV_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkSetLatencyMarkerInfoNV *out_info,
                          const VkSetLatencyMarkerInfoNV *in_info);

void
unwrap_VkSetLatencyMarkerInfoNV(struct temporary_objects*, struct wrapper_device *device,
                          VkSetLatencyMarkerInfoNV *out_info,
                          const VkSetLatencyMarkerInfoNV *in_info);


void
unwrap_VkShaderCreateInfoEXT_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkShaderCreateInfoEXT *out_info,
                          const VkShaderCreateInfoEXT *in_info);

void
unwrap_VkShaderCreateInfoEXT(struct temporary_objects*, struct wrapper_device *device,
                          VkShaderCreateInfoEXT *out_info,
                          const VkShaderCreateInfoEXT *in_info);


void
unwrap_VkShaderModuleIdentifierEXT_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkShaderModuleIdentifierEXT *out_info,
                          const VkShaderModuleIdentifierEXT *in_info);

void
unwrap_VkShaderModuleIdentifierEXT(struct temporary_objects*, struct wrapper_device *device,
                          VkShaderModuleIdentifierEXT *out_info,
                          const VkShaderModuleIdentifierEXT *in_info);


void
unwrap_VkShaderModuleValidationCacheCreateInfoEXT_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkShaderModuleValidationCacheCreateInfoEXT *out_info,
                          const VkShaderModuleValidationCacheCreateInfoEXT *in_info);

void
unwrap_VkShaderModuleValidationCacheCreateInfoEXT(struct temporary_objects*, struct wrapper_device *device,
                          VkShaderModuleValidationCacheCreateInfoEXT *out_info,
                          const VkShaderModuleValidationCacheCreateInfoEXT *in_info);


void
unwrap_VkSharedPresentSurfaceCapabilitiesKHR_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkSharedPresentSurfaceCapabilitiesKHR *out_info,
                          const VkSharedPresentSurfaceCapabilitiesKHR *in_info);

void
unwrap_VkSharedPresentSurfaceCapabilitiesKHR(struct temporary_objects*, struct wrapper_device *device,
                          VkSharedPresentSurfaceCapabilitiesKHR *out_info,
                          const VkSharedPresentSurfaceCapabilitiesKHR *in_info);


void
unwrap_VkSparseImageFormatProperties2_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkSparseImageFormatProperties2 *out_info,
                          const VkSparseImageFormatProperties2 *in_info);

void
unwrap_VkSparseImageFormatProperties2(struct temporary_objects*, struct wrapper_device *device,
                          VkSparseImageFormatProperties2 *out_info,
                          const VkSparseImageFormatProperties2 *in_info);


void
unwrap_VkSparseImageMemoryRequirements2_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkSparseImageMemoryRequirements2 *out_info,
                          const VkSparseImageMemoryRequirements2 *in_info);

void
unwrap_VkSparseImageMemoryRequirements2(struct temporary_objects*, struct wrapper_device *device,
                          VkSparseImageMemoryRequirements2 *out_info,
                          const VkSparseImageMemoryRequirements2 *in_info);


void
unwrap_VkSubmitInfo_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkSubmitInfo *out_info,
                          const VkSubmitInfo *in_info);

void
unwrap_VkSubmitInfo(struct temporary_objects*, struct wrapper_device *device,
                          VkSubmitInfo *out_info,
                          const VkSubmitInfo *in_info);


void
unwrap_VkSubmitInfo2_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkSubmitInfo2 *out_info,
                          const VkSubmitInfo2 *in_info);

void
unwrap_VkSubmitInfo2(struct temporary_objects*, struct wrapper_device *device,
                          VkSubmitInfo2 *out_info,
                          const VkSubmitInfo2 *in_info);


void
unwrap_VkSubpassBeginInfo_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkSubpassBeginInfo *out_info,
                          const VkSubpassBeginInfo *in_info);

void
unwrap_VkSubpassBeginInfo(struct temporary_objects*, struct wrapper_device *device,
                          VkSubpassBeginInfo *out_info,
                          const VkSubpassBeginInfo *in_info);


void
unwrap_VkSubpassDependency2_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkSubpassDependency2 *out_info,
                          const VkSubpassDependency2 *in_info);

void
unwrap_VkSubpassDependency2(struct temporary_objects*, struct wrapper_device *device,
                          VkSubpassDependency2 *out_info,
                          const VkSubpassDependency2 *in_info);


void
unwrap_VkSubpassDescription2_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkSubpassDescription2 *out_info,
                          const VkSubpassDescription2 *in_info);

void
unwrap_VkSubpassDescription2(struct temporary_objects*, struct wrapper_device *device,
                          VkSubpassDescription2 *out_info,
                          const VkSubpassDescription2 *in_info);


void
unwrap_VkSubpassDescriptionDepthStencilResolve_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkSubpassDescriptionDepthStencilResolve *out_info,
                          const VkSubpassDescriptionDepthStencilResolve *in_info);

void
unwrap_VkSubpassDescriptionDepthStencilResolve(struct temporary_objects*, struct wrapper_device *device,
                          VkSubpassDescriptionDepthStencilResolve *out_info,
                          const VkSubpassDescriptionDepthStencilResolve *in_info);


void
unwrap_VkSubpassEndInfo_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkSubpassEndInfo *out_info,
                          const VkSubpassEndInfo *in_info);

void
unwrap_VkSubpassEndInfo(struct temporary_objects*, struct wrapper_device *device,
                          VkSubpassEndInfo *out_info,
                          const VkSubpassEndInfo *in_info);


void
unwrap_VkSubpassFragmentDensityMapOffsetEndInfoQCOM_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkSubpassFragmentDensityMapOffsetEndInfoQCOM *out_info,
                          const VkSubpassFragmentDensityMapOffsetEndInfoQCOM *in_info);

void
unwrap_VkSubpassFragmentDensityMapOffsetEndInfoQCOM(struct temporary_objects*, struct wrapper_device *device,
                          VkSubpassFragmentDensityMapOffsetEndInfoQCOM *out_info,
                          const VkSubpassFragmentDensityMapOffsetEndInfoQCOM *in_info);


void
unwrap_VkSubpassResolvePerformanceQueryEXT_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkSubpassResolvePerformanceQueryEXT *out_info,
                          const VkSubpassResolvePerformanceQueryEXT *in_info);

void
unwrap_VkSubpassResolvePerformanceQueryEXT(struct temporary_objects*, struct wrapper_device *device,
                          VkSubpassResolvePerformanceQueryEXT *out_info,
                          const VkSubpassResolvePerformanceQueryEXT *in_info);


void
unwrap_VkSubpassShadingPipelineCreateInfoHUAWEI_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkSubpassShadingPipelineCreateInfoHUAWEI *out_info,
                          const VkSubpassShadingPipelineCreateInfoHUAWEI *in_info);

void
unwrap_VkSubpassShadingPipelineCreateInfoHUAWEI(struct temporary_objects*, struct wrapper_device *device,
                          VkSubpassShadingPipelineCreateInfoHUAWEI *out_info,
                          const VkSubpassShadingPipelineCreateInfoHUAWEI *in_info);


void
unwrap_VkSubresourceHostMemcpySizeEXT_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkSubresourceHostMemcpySizeEXT *out_info,
                          const VkSubresourceHostMemcpySizeEXT *in_info);

void
unwrap_VkSubresourceHostMemcpySizeEXT(struct temporary_objects*, struct wrapper_device *device,
                          VkSubresourceHostMemcpySizeEXT *out_info,
                          const VkSubresourceHostMemcpySizeEXT *in_info);


void
unwrap_VkSubresourceLayout2KHR_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkSubresourceLayout2KHR *out_info,
                          const VkSubresourceLayout2KHR *in_info);

void
unwrap_VkSubresourceLayout2KHR(struct temporary_objects*, struct wrapper_device *device,
                          VkSubresourceLayout2KHR *out_info,
                          const VkSubresourceLayout2KHR *in_info);


void
unwrap_VkSurfaceCapabilities2EXT_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkSurfaceCapabilities2EXT *out_info,
                          const VkSurfaceCapabilities2EXT *in_info);

void
unwrap_VkSurfaceCapabilities2EXT(struct temporary_objects*, struct wrapper_device *device,
                          VkSurfaceCapabilities2EXT *out_info,
                          const VkSurfaceCapabilities2EXT *in_info);


void
unwrap_VkSurfaceCapabilities2KHR_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkSurfaceCapabilities2KHR *out_info,
                          const VkSurfaceCapabilities2KHR *in_info);

void
unwrap_VkSurfaceCapabilities2KHR(struct temporary_objects*, struct wrapper_device *device,
                          VkSurfaceCapabilities2KHR *out_info,
                          const VkSurfaceCapabilities2KHR *in_info);


void
unwrap_VkSurfaceCapabilitiesPresentBarrierNV_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkSurfaceCapabilitiesPresentBarrierNV *out_info,
                          const VkSurfaceCapabilitiesPresentBarrierNV *in_info);

void
unwrap_VkSurfaceCapabilitiesPresentBarrierNV(struct temporary_objects*, struct wrapper_device *device,
                          VkSurfaceCapabilitiesPresentBarrierNV *out_info,
                          const VkSurfaceCapabilitiesPresentBarrierNV *in_info);


void
unwrap_VkSurfaceFormat2KHR_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkSurfaceFormat2KHR *out_info,
                          const VkSurfaceFormat2KHR *in_info);

void
unwrap_VkSurfaceFormat2KHR(struct temporary_objects*, struct wrapper_device *device,
                          VkSurfaceFormat2KHR *out_info,
                          const VkSurfaceFormat2KHR *in_info);


void
unwrap_VkSurfacePresentModeCompatibilityEXT_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkSurfacePresentModeCompatibilityEXT *out_info,
                          const VkSurfacePresentModeCompatibilityEXT *in_info);

void
unwrap_VkSurfacePresentModeCompatibilityEXT(struct temporary_objects*, struct wrapper_device *device,
                          VkSurfacePresentModeCompatibilityEXT *out_info,
                          const VkSurfacePresentModeCompatibilityEXT *in_info);


void
unwrap_VkSurfacePresentModeEXT_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkSurfacePresentModeEXT *out_info,
                          const VkSurfacePresentModeEXT *in_info);

void
unwrap_VkSurfacePresentModeEXT(struct temporary_objects*, struct wrapper_device *device,
                          VkSurfacePresentModeEXT *out_info,
                          const VkSurfacePresentModeEXT *in_info);


void
unwrap_VkSurfacePresentScalingCapabilitiesEXT_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkSurfacePresentScalingCapabilitiesEXT *out_info,
                          const VkSurfacePresentScalingCapabilitiesEXT *in_info);

void
unwrap_VkSurfacePresentScalingCapabilitiesEXT(struct temporary_objects*, struct wrapper_device *device,
                          VkSurfacePresentScalingCapabilitiesEXT *out_info,
                          const VkSurfacePresentScalingCapabilitiesEXT *in_info);


void
unwrap_VkSurfaceProtectedCapabilitiesKHR_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkSurfaceProtectedCapabilitiesKHR *out_info,
                          const VkSurfaceProtectedCapabilitiesKHR *in_info);

void
unwrap_VkSurfaceProtectedCapabilitiesKHR(struct temporary_objects*, struct wrapper_device *device,
                          VkSurfaceProtectedCapabilitiesKHR *out_info,
                          const VkSurfaceProtectedCapabilitiesKHR *in_info);


void
unwrap_VkSwapchainCounterCreateInfoEXT_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkSwapchainCounterCreateInfoEXT *out_info,
                          const VkSwapchainCounterCreateInfoEXT *in_info);

void
unwrap_VkSwapchainCounterCreateInfoEXT(struct temporary_objects*, struct wrapper_device *device,
                          VkSwapchainCounterCreateInfoEXT *out_info,
                          const VkSwapchainCounterCreateInfoEXT *in_info);


void
unwrap_VkSwapchainCreateInfoKHR_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkSwapchainCreateInfoKHR *out_info,
                          const VkSwapchainCreateInfoKHR *in_info);

void
unwrap_VkSwapchainCreateInfoKHR(struct temporary_objects*, struct wrapper_device *device,
                          VkSwapchainCreateInfoKHR *out_info,
                          const VkSwapchainCreateInfoKHR *in_info);


void
unwrap_VkSwapchainDisplayNativeHdrCreateInfoAMD_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkSwapchainDisplayNativeHdrCreateInfoAMD *out_info,
                          const VkSwapchainDisplayNativeHdrCreateInfoAMD *in_info);

void
unwrap_VkSwapchainDisplayNativeHdrCreateInfoAMD(struct temporary_objects*, struct wrapper_device *device,
                          VkSwapchainDisplayNativeHdrCreateInfoAMD *out_info,
                          const VkSwapchainDisplayNativeHdrCreateInfoAMD *in_info);


void
unwrap_VkSwapchainImageCreateInfoANDROID_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkSwapchainImageCreateInfoANDROID *out_info,
                          const VkSwapchainImageCreateInfoANDROID *in_info);

void
unwrap_VkSwapchainImageCreateInfoANDROID(struct temporary_objects*, struct wrapper_device *device,
                          VkSwapchainImageCreateInfoANDROID *out_info,
                          const VkSwapchainImageCreateInfoANDROID *in_info);


void
unwrap_VkSwapchainLatencyCreateInfoNV_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkSwapchainLatencyCreateInfoNV *out_info,
                          const VkSwapchainLatencyCreateInfoNV *in_info);

void
unwrap_VkSwapchainLatencyCreateInfoNV(struct temporary_objects*, struct wrapper_device *device,
                          VkSwapchainLatencyCreateInfoNV *out_info,
                          const VkSwapchainLatencyCreateInfoNV *in_info);


void
unwrap_VkSwapchainPresentBarrierCreateInfoNV_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkSwapchainPresentBarrierCreateInfoNV *out_info,
                          const VkSwapchainPresentBarrierCreateInfoNV *in_info);

void
unwrap_VkSwapchainPresentBarrierCreateInfoNV(struct temporary_objects*, struct wrapper_device *device,
                          VkSwapchainPresentBarrierCreateInfoNV *out_info,
                          const VkSwapchainPresentBarrierCreateInfoNV *in_info);


void
unwrap_VkSwapchainPresentFenceInfoEXT_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkSwapchainPresentFenceInfoEXT *out_info,
                          const VkSwapchainPresentFenceInfoEXT *in_info);

void
unwrap_VkSwapchainPresentFenceInfoEXT(struct temporary_objects*, struct wrapper_device *device,
                          VkSwapchainPresentFenceInfoEXT *out_info,
                          const VkSwapchainPresentFenceInfoEXT *in_info);


void
unwrap_VkSwapchainPresentModeInfoEXT_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkSwapchainPresentModeInfoEXT *out_info,
                          const VkSwapchainPresentModeInfoEXT *in_info);

void
unwrap_VkSwapchainPresentModeInfoEXT(struct temporary_objects*, struct wrapper_device *device,
                          VkSwapchainPresentModeInfoEXT *out_info,
                          const VkSwapchainPresentModeInfoEXT *in_info);


void
unwrap_VkSwapchainPresentModesCreateInfoEXT_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkSwapchainPresentModesCreateInfoEXT *out_info,
                          const VkSwapchainPresentModesCreateInfoEXT *in_info);

void
unwrap_VkSwapchainPresentModesCreateInfoEXT(struct temporary_objects*, struct wrapper_device *device,
                          VkSwapchainPresentModesCreateInfoEXT *out_info,
                          const VkSwapchainPresentModesCreateInfoEXT *in_info);


void
unwrap_VkSwapchainPresentScalingCreateInfoEXT_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkSwapchainPresentScalingCreateInfoEXT *out_info,
                          const VkSwapchainPresentScalingCreateInfoEXT *in_info);

void
unwrap_VkSwapchainPresentScalingCreateInfoEXT(struct temporary_objects*, struct wrapper_device *device,
                          VkSwapchainPresentScalingCreateInfoEXT *out_info,
                          const VkSwapchainPresentScalingCreateInfoEXT *in_info);


void
unwrap_VkTextureLODGatherFormatPropertiesAMD_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkTextureLODGatherFormatPropertiesAMD *out_info,
                          const VkTextureLODGatherFormatPropertiesAMD *in_info);

void
unwrap_VkTextureLODGatherFormatPropertiesAMD(struct temporary_objects*, struct wrapper_device *device,
                          VkTextureLODGatherFormatPropertiesAMD *out_info,
                          const VkTextureLODGatherFormatPropertiesAMD *in_info);


void
unwrap_VkTilePropertiesQCOM_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkTilePropertiesQCOM *out_info,
                          const VkTilePropertiesQCOM *in_info);

void
unwrap_VkTilePropertiesQCOM(struct temporary_objects*, struct wrapper_device *device,
                          VkTilePropertiesQCOM *out_info,
                          const VkTilePropertiesQCOM *in_info);


void
unwrap_VkTimelineSemaphoreSubmitInfo_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkTimelineSemaphoreSubmitInfo *out_info,
                          const VkTimelineSemaphoreSubmitInfo *in_info);

void
unwrap_VkTimelineSemaphoreSubmitInfo(struct temporary_objects*, struct wrapper_device *device,
                          VkTimelineSemaphoreSubmitInfo *out_info,
                          const VkTimelineSemaphoreSubmitInfo *in_info);


void
unwrap_VkValidationCacheCreateInfoEXT_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkValidationCacheCreateInfoEXT *out_info,
                          const VkValidationCacheCreateInfoEXT *in_info);

void
unwrap_VkValidationCacheCreateInfoEXT(struct temporary_objects*, struct wrapper_device *device,
                          VkValidationCacheCreateInfoEXT *out_info,
                          const VkValidationCacheCreateInfoEXT *in_info);


void
unwrap_VkValidationFeaturesEXT_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkValidationFeaturesEXT *out_info,
                          const VkValidationFeaturesEXT *in_info);

void
unwrap_VkValidationFeaturesEXT(struct temporary_objects*, struct wrapper_device *device,
                          VkValidationFeaturesEXT *out_info,
                          const VkValidationFeaturesEXT *in_info);


void
unwrap_VkValidationFlagsEXT_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkValidationFlagsEXT *out_info,
                          const VkValidationFlagsEXT *in_info);

void
unwrap_VkValidationFlagsEXT(struct temporary_objects*, struct wrapper_device *device,
                          VkValidationFlagsEXT *out_info,
                          const VkValidationFlagsEXT *in_info);


void
unwrap_VkVertexInputAttributeDescription2EXT_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkVertexInputAttributeDescription2EXT *out_info,
                          const VkVertexInputAttributeDescription2EXT *in_info);

void
unwrap_VkVertexInputAttributeDescription2EXT(struct temporary_objects*, struct wrapper_device *device,
                          VkVertexInputAttributeDescription2EXT *out_info,
                          const VkVertexInputAttributeDescription2EXT *in_info);


void
unwrap_VkVertexInputBindingDescription2EXT_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkVertexInputBindingDescription2EXT *out_info,
                          const VkVertexInputBindingDescription2EXT *in_info);

void
unwrap_VkVertexInputBindingDescription2EXT(struct temporary_objects*, struct wrapper_device *device,
                          VkVertexInputBindingDescription2EXT *out_info,
                          const VkVertexInputBindingDescription2EXT *in_info);


void
unwrap_VkVideoBeginCodingInfoKHR_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkVideoBeginCodingInfoKHR *out_info,
                          const VkVideoBeginCodingInfoKHR *in_info);

void
unwrap_VkVideoBeginCodingInfoKHR(struct temporary_objects*, struct wrapper_device *device,
                          VkVideoBeginCodingInfoKHR *out_info,
                          const VkVideoBeginCodingInfoKHR *in_info);


void
unwrap_VkVideoCapabilitiesKHR_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkVideoCapabilitiesKHR *out_info,
                          const VkVideoCapabilitiesKHR *in_info);

void
unwrap_VkVideoCapabilitiesKHR(struct temporary_objects*, struct wrapper_device *device,
                          VkVideoCapabilitiesKHR *out_info,
                          const VkVideoCapabilitiesKHR *in_info);


void
unwrap_VkVideoCodingControlInfoKHR_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkVideoCodingControlInfoKHR *out_info,
                          const VkVideoCodingControlInfoKHR *in_info);

void
unwrap_VkVideoCodingControlInfoKHR(struct temporary_objects*, struct wrapper_device *device,
                          VkVideoCodingControlInfoKHR *out_info,
                          const VkVideoCodingControlInfoKHR *in_info);


void
unwrap_VkVideoDecodeAV1CapabilitiesKHR_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkVideoDecodeAV1CapabilitiesKHR *out_info,
                          const VkVideoDecodeAV1CapabilitiesKHR *in_info);

void
unwrap_VkVideoDecodeAV1CapabilitiesKHR(struct temporary_objects*, struct wrapper_device *device,
                          VkVideoDecodeAV1CapabilitiesKHR *out_info,
                          const VkVideoDecodeAV1CapabilitiesKHR *in_info);


void
unwrap_VkVideoDecodeAV1DpbSlotInfoKHR_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkVideoDecodeAV1DpbSlotInfoKHR *out_info,
                          const VkVideoDecodeAV1DpbSlotInfoKHR *in_info);

void
unwrap_VkVideoDecodeAV1DpbSlotInfoKHR(struct temporary_objects*, struct wrapper_device *device,
                          VkVideoDecodeAV1DpbSlotInfoKHR *out_info,
                          const VkVideoDecodeAV1DpbSlotInfoKHR *in_info);


void
unwrap_VkVideoDecodeAV1PictureInfoKHR_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkVideoDecodeAV1PictureInfoKHR *out_info,
                          const VkVideoDecodeAV1PictureInfoKHR *in_info);

void
unwrap_VkVideoDecodeAV1PictureInfoKHR(struct temporary_objects*, struct wrapper_device *device,
                          VkVideoDecodeAV1PictureInfoKHR *out_info,
                          const VkVideoDecodeAV1PictureInfoKHR *in_info);


void
unwrap_VkVideoDecodeAV1ProfileInfoKHR_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkVideoDecodeAV1ProfileInfoKHR *out_info,
                          const VkVideoDecodeAV1ProfileInfoKHR *in_info);

void
unwrap_VkVideoDecodeAV1ProfileInfoKHR(struct temporary_objects*, struct wrapper_device *device,
                          VkVideoDecodeAV1ProfileInfoKHR *out_info,
                          const VkVideoDecodeAV1ProfileInfoKHR *in_info);


void
unwrap_VkVideoDecodeAV1SessionParametersCreateInfoKHR_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkVideoDecodeAV1SessionParametersCreateInfoKHR *out_info,
                          const VkVideoDecodeAV1SessionParametersCreateInfoKHR *in_info);

void
unwrap_VkVideoDecodeAV1SessionParametersCreateInfoKHR(struct temporary_objects*, struct wrapper_device *device,
                          VkVideoDecodeAV1SessionParametersCreateInfoKHR *out_info,
                          const VkVideoDecodeAV1SessionParametersCreateInfoKHR *in_info);


void
unwrap_VkVideoDecodeCapabilitiesKHR_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkVideoDecodeCapabilitiesKHR *out_info,
                          const VkVideoDecodeCapabilitiesKHR *in_info);

void
unwrap_VkVideoDecodeCapabilitiesKHR(struct temporary_objects*, struct wrapper_device *device,
                          VkVideoDecodeCapabilitiesKHR *out_info,
                          const VkVideoDecodeCapabilitiesKHR *in_info);


void
unwrap_VkVideoDecodeH264CapabilitiesKHR_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkVideoDecodeH264CapabilitiesKHR *out_info,
                          const VkVideoDecodeH264CapabilitiesKHR *in_info);

void
unwrap_VkVideoDecodeH264CapabilitiesKHR(struct temporary_objects*, struct wrapper_device *device,
                          VkVideoDecodeH264CapabilitiesKHR *out_info,
                          const VkVideoDecodeH264CapabilitiesKHR *in_info);


void
unwrap_VkVideoDecodeH264DpbSlotInfoKHR_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkVideoDecodeH264DpbSlotInfoKHR *out_info,
                          const VkVideoDecodeH264DpbSlotInfoKHR *in_info);

void
unwrap_VkVideoDecodeH264DpbSlotInfoKHR(struct temporary_objects*, struct wrapper_device *device,
                          VkVideoDecodeH264DpbSlotInfoKHR *out_info,
                          const VkVideoDecodeH264DpbSlotInfoKHR *in_info);


void
unwrap_VkVideoDecodeH264PictureInfoKHR_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkVideoDecodeH264PictureInfoKHR *out_info,
                          const VkVideoDecodeH264PictureInfoKHR *in_info);

void
unwrap_VkVideoDecodeH264PictureInfoKHR(struct temporary_objects*, struct wrapper_device *device,
                          VkVideoDecodeH264PictureInfoKHR *out_info,
                          const VkVideoDecodeH264PictureInfoKHR *in_info);


void
unwrap_VkVideoDecodeH264ProfileInfoKHR_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkVideoDecodeH264ProfileInfoKHR *out_info,
                          const VkVideoDecodeH264ProfileInfoKHR *in_info);

void
unwrap_VkVideoDecodeH264ProfileInfoKHR(struct temporary_objects*, struct wrapper_device *device,
                          VkVideoDecodeH264ProfileInfoKHR *out_info,
                          const VkVideoDecodeH264ProfileInfoKHR *in_info);


void
unwrap_VkVideoDecodeH264SessionParametersAddInfoKHR_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkVideoDecodeH264SessionParametersAddInfoKHR *out_info,
                          const VkVideoDecodeH264SessionParametersAddInfoKHR *in_info);

void
unwrap_VkVideoDecodeH264SessionParametersAddInfoKHR(struct temporary_objects*, struct wrapper_device *device,
                          VkVideoDecodeH264SessionParametersAddInfoKHR *out_info,
                          const VkVideoDecodeH264SessionParametersAddInfoKHR *in_info);


void
unwrap_VkVideoDecodeH264SessionParametersCreateInfoKHR_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkVideoDecodeH264SessionParametersCreateInfoKHR *out_info,
                          const VkVideoDecodeH264SessionParametersCreateInfoKHR *in_info);

void
unwrap_VkVideoDecodeH264SessionParametersCreateInfoKHR(struct temporary_objects*, struct wrapper_device *device,
                          VkVideoDecodeH264SessionParametersCreateInfoKHR *out_info,
                          const VkVideoDecodeH264SessionParametersCreateInfoKHR *in_info);


void
unwrap_VkVideoDecodeH265CapabilitiesKHR_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkVideoDecodeH265CapabilitiesKHR *out_info,
                          const VkVideoDecodeH265CapabilitiesKHR *in_info);

void
unwrap_VkVideoDecodeH265CapabilitiesKHR(struct temporary_objects*, struct wrapper_device *device,
                          VkVideoDecodeH265CapabilitiesKHR *out_info,
                          const VkVideoDecodeH265CapabilitiesKHR *in_info);


void
unwrap_VkVideoDecodeH265DpbSlotInfoKHR_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkVideoDecodeH265DpbSlotInfoKHR *out_info,
                          const VkVideoDecodeH265DpbSlotInfoKHR *in_info);

void
unwrap_VkVideoDecodeH265DpbSlotInfoKHR(struct temporary_objects*, struct wrapper_device *device,
                          VkVideoDecodeH265DpbSlotInfoKHR *out_info,
                          const VkVideoDecodeH265DpbSlotInfoKHR *in_info);


void
unwrap_VkVideoDecodeH265PictureInfoKHR_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkVideoDecodeH265PictureInfoKHR *out_info,
                          const VkVideoDecodeH265PictureInfoKHR *in_info);

void
unwrap_VkVideoDecodeH265PictureInfoKHR(struct temporary_objects*, struct wrapper_device *device,
                          VkVideoDecodeH265PictureInfoKHR *out_info,
                          const VkVideoDecodeH265PictureInfoKHR *in_info);


void
unwrap_VkVideoDecodeH265ProfileInfoKHR_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkVideoDecodeH265ProfileInfoKHR *out_info,
                          const VkVideoDecodeH265ProfileInfoKHR *in_info);

void
unwrap_VkVideoDecodeH265ProfileInfoKHR(struct temporary_objects*, struct wrapper_device *device,
                          VkVideoDecodeH265ProfileInfoKHR *out_info,
                          const VkVideoDecodeH265ProfileInfoKHR *in_info);


void
unwrap_VkVideoDecodeH265SessionParametersAddInfoKHR_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkVideoDecodeH265SessionParametersAddInfoKHR *out_info,
                          const VkVideoDecodeH265SessionParametersAddInfoKHR *in_info);

void
unwrap_VkVideoDecodeH265SessionParametersAddInfoKHR(struct temporary_objects*, struct wrapper_device *device,
                          VkVideoDecodeH265SessionParametersAddInfoKHR *out_info,
                          const VkVideoDecodeH265SessionParametersAddInfoKHR *in_info);


void
unwrap_VkVideoDecodeH265SessionParametersCreateInfoKHR_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkVideoDecodeH265SessionParametersCreateInfoKHR *out_info,
                          const VkVideoDecodeH265SessionParametersCreateInfoKHR *in_info);

void
unwrap_VkVideoDecodeH265SessionParametersCreateInfoKHR(struct temporary_objects*, struct wrapper_device *device,
                          VkVideoDecodeH265SessionParametersCreateInfoKHR *out_info,
                          const VkVideoDecodeH265SessionParametersCreateInfoKHR *in_info);


void
unwrap_VkVideoDecodeInfoKHR_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkVideoDecodeInfoKHR *out_info,
                          const VkVideoDecodeInfoKHR *in_info);

void
unwrap_VkVideoDecodeInfoKHR(struct temporary_objects*, struct wrapper_device *device,
                          VkVideoDecodeInfoKHR *out_info,
                          const VkVideoDecodeInfoKHR *in_info);


void
unwrap_VkVideoDecodeUsageInfoKHR_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkVideoDecodeUsageInfoKHR *out_info,
                          const VkVideoDecodeUsageInfoKHR *in_info);

void
unwrap_VkVideoDecodeUsageInfoKHR(struct temporary_objects*, struct wrapper_device *device,
                          VkVideoDecodeUsageInfoKHR *out_info,
                          const VkVideoDecodeUsageInfoKHR *in_info);


void
unwrap_VkVideoEncodeCapabilitiesKHR_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkVideoEncodeCapabilitiesKHR *out_info,
                          const VkVideoEncodeCapabilitiesKHR *in_info);

void
unwrap_VkVideoEncodeCapabilitiesKHR(struct temporary_objects*, struct wrapper_device *device,
                          VkVideoEncodeCapabilitiesKHR *out_info,
                          const VkVideoEncodeCapabilitiesKHR *in_info);


void
unwrap_VkVideoEncodeH264CapabilitiesKHR_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkVideoEncodeH264CapabilitiesKHR *out_info,
                          const VkVideoEncodeH264CapabilitiesKHR *in_info);

void
unwrap_VkVideoEncodeH264CapabilitiesKHR(struct temporary_objects*, struct wrapper_device *device,
                          VkVideoEncodeH264CapabilitiesKHR *out_info,
                          const VkVideoEncodeH264CapabilitiesKHR *in_info);


void
unwrap_VkVideoEncodeH264DpbSlotInfoKHR_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkVideoEncodeH264DpbSlotInfoKHR *out_info,
                          const VkVideoEncodeH264DpbSlotInfoKHR *in_info);

void
unwrap_VkVideoEncodeH264DpbSlotInfoKHR(struct temporary_objects*, struct wrapper_device *device,
                          VkVideoEncodeH264DpbSlotInfoKHR *out_info,
                          const VkVideoEncodeH264DpbSlotInfoKHR *in_info);


void
unwrap_VkVideoEncodeH264GopRemainingFrameInfoKHR_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkVideoEncodeH264GopRemainingFrameInfoKHR *out_info,
                          const VkVideoEncodeH264GopRemainingFrameInfoKHR *in_info);

void
unwrap_VkVideoEncodeH264GopRemainingFrameInfoKHR(struct temporary_objects*, struct wrapper_device *device,
                          VkVideoEncodeH264GopRemainingFrameInfoKHR *out_info,
                          const VkVideoEncodeH264GopRemainingFrameInfoKHR *in_info);


void
unwrap_VkVideoEncodeH264NaluSliceInfoKHR_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkVideoEncodeH264NaluSliceInfoKHR *out_info,
                          const VkVideoEncodeH264NaluSliceInfoKHR *in_info);

void
unwrap_VkVideoEncodeH264NaluSliceInfoKHR(struct temporary_objects*, struct wrapper_device *device,
                          VkVideoEncodeH264NaluSliceInfoKHR *out_info,
                          const VkVideoEncodeH264NaluSliceInfoKHR *in_info);


void
unwrap_VkVideoEncodeH264PictureInfoKHR_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkVideoEncodeH264PictureInfoKHR *out_info,
                          const VkVideoEncodeH264PictureInfoKHR *in_info);

void
unwrap_VkVideoEncodeH264PictureInfoKHR(struct temporary_objects*, struct wrapper_device *device,
                          VkVideoEncodeH264PictureInfoKHR *out_info,
                          const VkVideoEncodeH264PictureInfoKHR *in_info);


void
unwrap_VkVideoEncodeH264ProfileInfoKHR_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkVideoEncodeH264ProfileInfoKHR *out_info,
                          const VkVideoEncodeH264ProfileInfoKHR *in_info);

void
unwrap_VkVideoEncodeH264ProfileInfoKHR(struct temporary_objects*, struct wrapper_device *device,
                          VkVideoEncodeH264ProfileInfoKHR *out_info,
                          const VkVideoEncodeH264ProfileInfoKHR *in_info);


void
unwrap_VkVideoEncodeH264QualityLevelPropertiesKHR_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkVideoEncodeH264QualityLevelPropertiesKHR *out_info,
                          const VkVideoEncodeH264QualityLevelPropertiesKHR *in_info);

void
unwrap_VkVideoEncodeH264QualityLevelPropertiesKHR(struct temporary_objects*, struct wrapper_device *device,
                          VkVideoEncodeH264QualityLevelPropertiesKHR *out_info,
                          const VkVideoEncodeH264QualityLevelPropertiesKHR *in_info);


void
unwrap_VkVideoEncodeH264RateControlInfoKHR_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkVideoEncodeH264RateControlInfoKHR *out_info,
                          const VkVideoEncodeH264RateControlInfoKHR *in_info);

void
unwrap_VkVideoEncodeH264RateControlInfoKHR(struct temporary_objects*, struct wrapper_device *device,
                          VkVideoEncodeH264RateControlInfoKHR *out_info,
                          const VkVideoEncodeH264RateControlInfoKHR *in_info);


void
unwrap_VkVideoEncodeH264RateControlLayerInfoKHR_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkVideoEncodeH264RateControlLayerInfoKHR *out_info,
                          const VkVideoEncodeH264RateControlLayerInfoKHR *in_info);

void
unwrap_VkVideoEncodeH264RateControlLayerInfoKHR(struct temporary_objects*, struct wrapper_device *device,
                          VkVideoEncodeH264RateControlLayerInfoKHR *out_info,
                          const VkVideoEncodeH264RateControlLayerInfoKHR *in_info);


void
unwrap_VkVideoEncodeH264SessionCreateInfoKHR_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkVideoEncodeH264SessionCreateInfoKHR *out_info,
                          const VkVideoEncodeH264SessionCreateInfoKHR *in_info);

void
unwrap_VkVideoEncodeH264SessionCreateInfoKHR(struct temporary_objects*, struct wrapper_device *device,
                          VkVideoEncodeH264SessionCreateInfoKHR *out_info,
                          const VkVideoEncodeH264SessionCreateInfoKHR *in_info);


void
unwrap_VkVideoEncodeH264SessionParametersAddInfoKHR_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkVideoEncodeH264SessionParametersAddInfoKHR *out_info,
                          const VkVideoEncodeH264SessionParametersAddInfoKHR *in_info);

void
unwrap_VkVideoEncodeH264SessionParametersAddInfoKHR(struct temporary_objects*, struct wrapper_device *device,
                          VkVideoEncodeH264SessionParametersAddInfoKHR *out_info,
                          const VkVideoEncodeH264SessionParametersAddInfoKHR *in_info);


void
unwrap_VkVideoEncodeH264SessionParametersCreateInfoKHR_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkVideoEncodeH264SessionParametersCreateInfoKHR *out_info,
                          const VkVideoEncodeH264SessionParametersCreateInfoKHR *in_info);

void
unwrap_VkVideoEncodeH264SessionParametersCreateInfoKHR(struct temporary_objects*, struct wrapper_device *device,
                          VkVideoEncodeH264SessionParametersCreateInfoKHR *out_info,
                          const VkVideoEncodeH264SessionParametersCreateInfoKHR *in_info);


void
unwrap_VkVideoEncodeH264SessionParametersFeedbackInfoKHR_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkVideoEncodeH264SessionParametersFeedbackInfoKHR *out_info,
                          const VkVideoEncodeH264SessionParametersFeedbackInfoKHR *in_info);

void
unwrap_VkVideoEncodeH264SessionParametersFeedbackInfoKHR(struct temporary_objects*, struct wrapper_device *device,
                          VkVideoEncodeH264SessionParametersFeedbackInfoKHR *out_info,
                          const VkVideoEncodeH264SessionParametersFeedbackInfoKHR *in_info);


void
unwrap_VkVideoEncodeH264SessionParametersGetInfoKHR_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkVideoEncodeH264SessionParametersGetInfoKHR *out_info,
                          const VkVideoEncodeH264SessionParametersGetInfoKHR *in_info);

void
unwrap_VkVideoEncodeH264SessionParametersGetInfoKHR(struct temporary_objects*, struct wrapper_device *device,
                          VkVideoEncodeH264SessionParametersGetInfoKHR *out_info,
                          const VkVideoEncodeH264SessionParametersGetInfoKHR *in_info);


void
unwrap_VkVideoEncodeH265CapabilitiesKHR_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkVideoEncodeH265CapabilitiesKHR *out_info,
                          const VkVideoEncodeH265CapabilitiesKHR *in_info);

void
unwrap_VkVideoEncodeH265CapabilitiesKHR(struct temporary_objects*, struct wrapper_device *device,
                          VkVideoEncodeH265CapabilitiesKHR *out_info,
                          const VkVideoEncodeH265CapabilitiesKHR *in_info);


void
unwrap_VkVideoEncodeH265DpbSlotInfoKHR_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkVideoEncodeH265DpbSlotInfoKHR *out_info,
                          const VkVideoEncodeH265DpbSlotInfoKHR *in_info);

void
unwrap_VkVideoEncodeH265DpbSlotInfoKHR(struct temporary_objects*, struct wrapper_device *device,
                          VkVideoEncodeH265DpbSlotInfoKHR *out_info,
                          const VkVideoEncodeH265DpbSlotInfoKHR *in_info);


void
unwrap_VkVideoEncodeH265GopRemainingFrameInfoKHR_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkVideoEncodeH265GopRemainingFrameInfoKHR *out_info,
                          const VkVideoEncodeH265GopRemainingFrameInfoKHR *in_info);

void
unwrap_VkVideoEncodeH265GopRemainingFrameInfoKHR(struct temporary_objects*, struct wrapper_device *device,
                          VkVideoEncodeH265GopRemainingFrameInfoKHR *out_info,
                          const VkVideoEncodeH265GopRemainingFrameInfoKHR *in_info);


void
unwrap_VkVideoEncodeH265NaluSliceSegmentInfoKHR_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkVideoEncodeH265NaluSliceSegmentInfoKHR *out_info,
                          const VkVideoEncodeH265NaluSliceSegmentInfoKHR *in_info);

void
unwrap_VkVideoEncodeH265NaluSliceSegmentInfoKHR(struct temporary_objects*, struct wrapper_device *device,
                          VkVideoEncodeH265NaluSliceSegmentInfoKHR *out_info,
                          const VkVideoEncodeH265NaluSliceSegmentInfoKHR *in_info);


void
unwrap_VkVideoEncodeH265PictureInfoKHR_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkVideoEncodeH265PictureInfoKHR *out_info,
                          const VkVideoEncodeH265PictureInfoKHR *in_info);

void
unwrap_VkVideoEncodeH265PictureInfoKHR(struct temporary_objects*, struct wrapper_device *device,
                          VkVideoEncodeH265PictureInfoKHR *out_info,
                          const VkVideoEncodeH265PictureInfoKHR *in_info);


void
unwrap_VkVideoEncodeH265ProfileInfoKHR_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkVideoEncodeH265ProfileInfoKHR *out_info,
                          const VkVideoEncodeH265ProfileInfoKHR *in_info);

void
unwrap_VkVideoEncodeH265ProfileInfoKHR(struct temporary_objects*, struct wrapper_device *device,
                          VkVideoEncodeH265ProfileInfoKHR *out_info,
                          const VkVideoEncodeH265ProfileInfoKHR *in_info);


void
unwrap_VkVideoEncodeH265QualityLevelPropertiesKHR_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkVideoEncodeH265QualityLevelPropertiesKHR *out_info,
                          const VkVideoEncodeH265QualityLevelPropertiesKHR *in_info);

void
unwrap_VkVideoEncodeH265QualityLevelPropertiesKHR(struct temporary_objects*, struct wrapper_device *device,
                          VkVideoEncodeH265QualityLevelPropertiesKHR *out_info,
                          const VkVideoEncodeH265QualityLevelPropertiesKHR *in_info);


void
unwrap_VkVideoEncodeH265RateControlInfoKHR_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkVideoEncodeH265RateControlInfoKHR *out_info,
                          const VkVideoEncodeH265RateControlInfoKHR *in_info);

void
unwrap_VkVideoEncodeH265RateControlInfoKHR(struct temporary_objects*, struct wrapper_device *device,
                          VkVideoEncodeH265RateControlInfoKHR *out_info,
                          const VkVideoEncodeH265RateControlInfoKHR *in_info);


void
unwrap_VkVideoEncodeH265RateControlLayerInfoKHR_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkVideoEncodeH265RateControlLayerInfoKHR *out_info,
                          const VkVideoEncodeH265RateControlLayerInfoKHR *in_info);

void
unwrap_VkVideoEncodeH265RateControlLayerInfoKHR(struct temporary_objects*, struct wrapper_device *device,
                          VkVideoEncodeH265RateControlLayerInfoKHR *out_info,
                          const VkVideoEncodeH265RateControlLayerInfoKHR *in_info);


void
unwrap_VkVideoEncodeH265SessionCreateInfoKHR_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkVideoEncodeH265SessionCreateInfoKHR *out_info,
                          const VkVideoEncodeH265SessionCreateInfoKHR *in_info);

void
unwrap_VkVideoEncodeH265SessionCreateInfoKHR(struct temporary_objects*, struct wrapper_device *device,
                          VkVideoEncodeH265SessionCreateInfoKHR *out_info,
                          const VkVideoEncodeH265SessionCreateInfoKHR *in_info);


void
unwrap_VkVideoEncodeH265SessionParametersAddInfoKHR_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkVideoEncodeH265SessionParametersAddInfoKHR *out_info,
                          const VkVideoEncodeH265SessionParametersAddInfoKHR *in_info);

void
unwrap_VkVideoEncodeH265SessionParametersAddInfoKHR(struct temporary_objects*, struct wrapper_device *device,
                          VkVideoEncodeH265SessionParametersAddInfoKHR *out_info,
                          const VkVideoEncodeH265SessionParametersAddInfoKHR *in_info);


void
unwrap_VkVideoEncodeH265SessionParametersCreateInfoKHR_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkVideoEncodeH265SessionParametersCreateInfoKHR *out_info,
                          const VkVideoEncodeH265SessionParametersCreateInfoKHR *in_info);

void
unwrap_VkVideoEncodeH265SessionParametersCreateInfoKHR(struct temporary_objects*, struct wrapper_device *device,
                          VkVideoEncodeH265SessionParametersCreateInfoKHR *out_info,
                          const VkVideoEncodeH265SessionParametersCreateInfoKHR *in_info);


void
unwrap_VkVideoEncodeH265SessionParametersFeedbackInfoKHR_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkVideoEncodeH265SessionParametersFeedbackInfoKHR *out_info,
                          const VkVideoEncodeH265SessionParametersFeedbackInfoKHR *in_info);

void
unwrap_VkVideoEncodeH265SessionParametersFeedbackInfoKHR(struct temporary_objects*, struct wrapper_device *device,
                          VkVideoEncodeH265SessionParametersFeedbackInfoKHR *out_info,
                          const VkVideoEncodeH265SessionParametersFeedbackInfoKHR *in_info);


void
unwrap_VkVideoEncodeH265SessionParametersGetInfoKHR_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkVideoEncodeH265SessionParametersGetInfoKHR *out_info,
                          const VkVideoEncodeH265SessionParametersGetInfoKHR *in_info);

void
unwrap_VkVideoEncodeH265SessionParametersGetInfoKHR(struct temporary_objects*, struct wrapper_device *device,
                          VkVideoEncodeH265SessionParametersGetInfoKHR *out_info,
                          const VkVideoEncodeH265SessionParametersGetInfoKHR *in_info);


void
unwrap_VkVideoEncodeInfoKHR_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkVideoEncodeInfoKHR *out_info,
                          const VkVideoEncodeInfoKHR *in_info);

void
unwrap_VkVideoEncodeInfoKHR(struct temporary_objects*, struct wrapper_device *device,
                          VkVideoEncodeInfoKHR *out_info,
                          const VkVideoEncodeInfoKHR *in_info);


void
unwrap_VkVideoEncodeQualityLevelInfoKHR_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkVideoEncodeQualityLevelInfoKHR *out_info,
                          const VkVideoEncodeQualityLevelInfoKHR *in_info);

void
unwrap_VkVideoEncodeQualityLevelInfoKHR(struct temporary_objects*, struct wrapper_device *device,
                          VkVideoEncodeQualityLevelInfoKHR *out_info,
                          const VkVideoEncodeQualityLevelInfoKHR *in_info);


void
unwrap_VkVideoEncodeQualityLevelPropertiesKHR_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkVideoEncodeQualityLevelPropertiesKHR *out_info,
                          const VkVideoEncodeQualityLevelPropertiesKHR *in_info);

void
unwrap_VkVideoEncodeQualityLevelPropertiesKHR(struct temporary_objects*, struct wrapper_device *device,
                          VkVideoEncodeQualityLevelPropertiesKHR *out_info,
                          const VkVideoEncodeQualityLevelPropertiesKHR *in_info);


void
unwrap_VkVideoEncodeRateControlInfoKHR_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkVideoEncodeRateControlInfoKHR *out_info,
                          const VkVideoEncodeRateControlInfoKHR *in_info);

void
unwrap_VkVideoEncodeRateControlInfoKHR(struct temporary_objects*, struct wrapper_device *device,
                          VkVideoEncodeRateControlInfoKHR *out_info,
                          const VkVideoEncodeRateControlInfoKHR *in_info);


void
unwrap_VkVideoEncodeRateControlLayerInfoKHR_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkVideoEncodeRateControlLayerInfoKHR *out_info,
                          const VkVideoEncodeRateControlLayerInfoKHR *in_info);

void
unwrap_VkVideoEncodeRateControlLayerInfoKHR(struct temporary_objects*, struct wrapper_device *device,
                          VkVideoEncodeRateControlLayerInfoKHR *out_info,
                          const VkVideoEncodeRateControlLayerInfoKHR *in_info);


void
unwrap_VkVideoEncodeSessionParametersFeedbackInfoKHR_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkVideoEncodeSessionParametersFeedbackInfoKHR *out_info,
                          const VkVideoEncodeSessionParametersFeedbackInfoKHR *in_info);

void
unwrap_VkVideoEncodeSessionParametersFeedbackInfoKHR(struct temporary_objects*, struct wrapper_device *device,
                          VkVideoEncodeSessionParametersFeedbackInfoKHR *out_info,
                          const VkVideoEncodeSessionParametersFeedbackInfoKHR *in_info);


void
unwrap_VkVideoEncodeSessionParametersGetInfoKHR_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkVideoEncodeSessionParametersGetInfoKHR *out_info,
                          const VkVideoEncodeSessionParametersGetInfoKHR *in_info);

void
unwrap_VkVideoEncodeSessionParametersGetInfoKHR(struct temporary_objects*, struct wrapper_device *device,
                          VkVideoEncodeSessionParametersGetInfoKHR *out_info,
                          const VkVideoEncodeSessionParametersGetInfoKHR *in_info);


void
unwrap_VkVideoEncodeUsageInfoKHR_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkVideoEncodeUsageInfoKHR *out_info,
                          const VkVideoEncodeUsageInfoKHR *in_info);

void
unwrap_VkVideoEncodeUsageInfoKHR(struct temporary_objects*, struct wrapper_device *device,
                          VkVideoEncodeUsageInfoKHR *out_info,
                          const VkVideoEncodeUsageInfoKHR *in_info);


void
unwrap_VkVideoEndCodingInfoKHR_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkVideoEndCodingInfoKHR *out_info,
                          const VkVideoEndCodingInfoKHR *in_info);

void
unwrap_VkVideoEndCodingInfoKHR(struct temporary_objects*, struct wrapper_device *device,
                          VkVideoEndCodingInfoKHR *out_info,
                          const VkVideoEndCodingInfoKHR *in_info);


void
unwrap_VkVideoFormatPropertiesKHR_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkVideoFormatPropertiesKHR *out_info,
                          const VkVideoFormatPropertiesKHR *in_info);

void
unwrap_VkVideoFormatPropertiesKHR(struct temporary_objects*, struct wrapper_device *device,
                          VkVideoFormatPropertiesKHR *out_info,
                          const VkVideoFormatPropertiesKHR *in_info);


void
unwrap_VkVideoInlineQueryInfoKHR_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkVideoInlineQueryInfoKHR *out_info,
                          const VkVideoInlineQueryInfoKHR *in_info);

void
unwrap_VkVideoInlineQueryInfoKHR(struct temporary_objects*, struct wrapper_device *device,
                          VkVideoInlineQueryInfoKHR *out_info,
                          const VkVideoInlineQueryInfoKHR *in_info);


void
unwrap_VkVideoPictureResourceInfoKHR_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkVideoPictureResourceInfoKHR *out_info,
                          const VkVideoPictureResourceInfoKHR *in_info);

void
unwrap_VkVideoPictureResourceInfoKHR(struct temporary_objects*, struct wrapper_device *device,
                          VkVideoPictureResourceInfoKHR *out_info,
                          const VkVideoPictureResourceInfoKHR *in_info);


void
unwrap_VkVideoProfileInfoKHR_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkVideoProfileInfoKHR *out_info,
                          const VkVideoProfileInfoKHR *in_info);

void
unwrap_VkVideoProfileInfoKHR(struct temporary_objects*, struct wrapper_device *device,
                          VkVideoProfileInfoKHR *out_info,
                          const VkVideoProfileInfoKHR *in_info);


void
unwrap_VkVideoProfileListInfoKHR_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkVideoProfileListInfoKHR *out_info,
                          const VkVideoProfileListInfoKHR *in_info);

void
unwrap_VkVideoProfileListInfoKHR(struct temporary_objects*, struct wrapper_device *device,
                          VkVideoProfileListInfoKHR *out_info,
                          const VkVideoProfileListInfoKHR *in_info);


void
unwrap_VkVideoReferenceSlotInfoKHR_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkVideoReferenceSlotInfoKHR *out_info,
                          const VkVideoReferenceSlotInfoKHR *in_info);

void
unwrap_VkVideoReferenceSlotInfoKHR(struct temporary_objects*, struct wrapper_device *device,
                          VkVideoReferenceSlotInfoKHR *out_info,
                          const VkVideoReferenceSlotInfoKHR *in_info);


void
unwrap_VkVideoSessionCreateInfoKHR_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkVideoSessionCreateInfoKHR *out_info,
                          const VkVideoSessionCreateInfoKHR *in_info);

void
unwrap_VkVideoSessionCreateInfoKHR(struct temporary_objects*, struct wrapper_device *device,
                          VkVideoSessionCreateInfoKHR *out_info,
                          const VkVideoSessionCreateInfoKHR *in_info);


void
unwrap_VkVideoSessionMemoryRequirementsKHR_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkVideoSessionMemoryRequirementsKHR *out_info,
                          const VkVideoSessionMemoryRequirementsKHR *in_info);

void
unwrap_VkVideoSessionMemoryRequirementsKHR(struct temporary_objects*, struct wrapper_device *device,
                          VkVideoSessionMemoryRequirementsKHR *out_info,
                          const VkVideoSessionMemoryRequirementsKHR *in_info);


void
unwrap_VkVideoSessionParametersCreateInfoKHR_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkVideoSessionParametersCreateInfoKHR *out_info,
                          const VkVideoSessionParametersCreateInfoKHR *in_info);

void
unwrap_VkVideoSessionParametersCreateInfoKHR(struct temporary_objects*, struct wrapper_device *device,
                          VkVideoSessionParametersCreateInfoKHR *out_info,
                          const VkVideoSessionParametersCreateInfoKHR *in_info);


void
unwrap_VkVideoSessionParametersUpdateInfoKHR_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkVideoSessionParametersUpdateInfoKHR *out_info,
                          const VkVideoSessionParametersUpdateInfoKHR *in_info);

void
unwrap_VkVideoSessionParametersUpdateInfoKHR(struct temporary_objects*, struct wrapper_device *device,
                          VkVideoSessionParametersUpdateInfoKHR *out_info,
                          const VkVideoSessionParametersUpdateInfoKHR *in_info);


void
unwrap_VkWriteDescriptorSet_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkWriteDescriptorSet *out_info,
                          const VkWriteDescriptorSet *in_info);

void
unwrap_VkWriteDescriptorSet(struct temporary_objects*, struct wrapper_device *device,
                          VkWriteDescriptorSet *out_info,
                          const VkWriteDescriptorSet *in_info);


void
unwrap_VkWriteDescriptorSetAccelerationStructureKHR_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkWriteDescriptorSetAccelerationStructureKHR *out_info,
                          const VkWriteDescriptorSetAccelerationStructureKHR *in_info);

void
unwrap_VkWriteDescriptorSetAccelerationStructureKHR(struct temporary_objects*, struct wrapper_device *device,
                          VkWriteDescriptorSetAccelerationStructureKHR *out_info,
                          const VkWriteDescriptorSetAccelerationStructureKHR *in_info);


void
unwrap_VkWriteDescriptorSetAccelerationStructureNV_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkWriteDescriptorSetAccelerationStructureNV *out_info,
                          const VkWriteDescriptorSetAccelerationStructureNV *in_info);

void
unwrap_VkWriteDescriptorSetAccelerationStructureNV(struct temporary_objects*, struct wrapper_device *device,
                          VkWriteDescriptorSetAccelerationStructureNV *out_info,
                          const VkWriteDescriptorSetAccelerationStructureNV *in_info);


void
unwrap_VkWriteDescriptorSetInlineUniformBlock_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkWriteDescriptorSetInlineUniformBlock *out_info,
                          const VkWriteDescriptorSetInlineUniformBlock *in_info);

void
unwrap_VkWriteDescriptorSetInlineUniformBlock(struct temporary_objects*, struct wrapper_device *device,
                          VkWriteDescriptorSetInlineUniformBlock *out_info,
                          const VkWriteDescriptorSetInlineUniformBlock *in_info);


void
unwrap_VkXcbSurfaceCreateInfoKHR_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkXcbSurfaceCreateInfoKHR *out_info,
                          const VkXcbSurfaceCreateInfoKHR *in_info);

void
unwrap_VkXcbSurfaceCreateInfoKHR(struct temporary_objects*, struct wrapper_device *device,
                          VkXcbSurfaceCreateInfoKHR *out_info,
                          const VkXcbSurfaceCreateInfoKHR *in_info);


void
unwrap_VkXlibSurfaceCreateInfoKHR_members_only(struct temporary_objects*, struct wrapper_device *device,
                          VkXlibSurfaceCreateInfoKHR *out_info,
                          const VkXlibSurfaceCreateInfoKHR *in_info);

void
unwrap_VkXlibSurfaceCreateInfoKHR(struct temporary_objects*, struct wrapper_device *device,
                          VkXlibSurfaceCreateInfoKHR *out_info,
                          const VkXlibSurfaceCreateInfoKHR *in_info);


// uses = ['VkCommandBuffer']
#define NEEDS_UNWRAPPING_VkCommandBuffer
// uses = ['VkCommandBuffer']
#define NEEDS_UNWRAPPING_VkCommandBufferSubmitInfo
// uses = ['VkDevice']
#define NEEDS_UNWRAPPING_VkDevice
// uses = ['VkDeviceGroupDeviceCreateInfo']
#define NEEDS_UNWRAPPING_VkDeviceCreateInfo
// uses = ['VkPhysicalDevice']
#define NEEDS_UNWRAPPING_VkDeviceGroupDeviceCreateInfo
// uses = ['VkInstance']
#define NEEDS_UNWRAPPING_VkInstance
// uses = ['VkPhysicalDevice']
#define NEEDS_UNWRAPPING_VkPhysicalDevice
// uses = ['VkQueue']
#define NEEDS_UNWRAPPING_VkQueue
// uses = ['VkCommandBuffer']
#define NEEDS_UNWRAPPING_VkSubmitInfo
// uses = ['VkCommandBufferSubmitInfo']
#define NEEDS_UNWRAPPING_VkSubmitInfo2

#ifdef __cplusplus
}
#endif

#endif /* VK_UNWRAPPER_H */