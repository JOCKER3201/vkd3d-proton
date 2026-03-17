#ifndef __VULKAN_PRIVATE_EXTENSIONS_H__
#define __VULKAN_PRIVATE_EXTENSIONS_H__

/* Add hacks here! */

#include <vulkan/vulkan.h>

#define VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADER_MIXED_FLOAT_DOT_PRODUCT_FEATURES_VALVE ((VkStructureType)1000592000)
#define VK_VALVE_SHADER_MIXED_FLOAT_DOT_PRODUCT_EXTENSION_NAME "VK_VALVE_shader_mixed_float_dot_product"

typedef struct VkPhysicalDeviceShaderMixedFloatDotProductFeaturesVALVE
{
    VkStructureType sType;
    void *pNext;
    VkBool32 shaderMixedFloatDotProductFloat16AccFloat32;
    VkBool32 shaderMixedFloatDotProductFloat16AccFloat16;
    VkBool32 shaderMixedFloatDotProductBFloat16Acc;
    VkBool32 shaderMixedFloatDotProductFloat8AccFloat32;
} VkPhysicalDeviceShaderMixedFloatDotProductFeaturesVALVE;

#endif
