#ifndef NETWORK_9_DATA_H
#define NETWORK_9_DATA_H
#pragma once

#include "network_9_config.h"
#include "network_9_data_params.h"

AI_DEPRECATED
#define AI_NETWORK_9_DATA_ACTIVATIONS(ptr_)  \
  ai_network_9_data_activations_buffer_get(AI_HANDLE_PTR(ptr_))

AI_DEPRECATED
#define AI_NETWORK_9_DATA_WEIGHTS(ptr_)  \
  ai_network_9_data_weights_buffer_get(AI_HANDLE_PTR(ptr_))


AI_API_DECLARE_BEGIN


extern const ai_u64 s_network_9_Conv1_conv2d_weights_array_u64[216];
extern const ai_u64 s_network_9_Conv1_conv2d_bias_array_u64[8];
extern const ai_u64 s_network_9_expanded_conv_depthwise_conv2d_weights_array_u64[72];
extern const ai_u64 s_network_9_expanded_conv_depthwise_conv2d_bias_array_u64[8];
extern const ai_u64 s_network_9_expanded_conv_project_conv2d_weights_array_u64[64];
extern const ai_u64 s_network_9_expanded_conv_project_conv2d_bias_array_u64[4];
extern const ai_u64 s_network_9_block_1_expand_conv2d_weights_array_u64[192];
extern const ai_u64 s_network_9_block_1_expand_conv2d_bias_array_u64[24];
extern const ai_u64 s_network_9_block_1_depthwise_conv2d_weights_array_u64[216];
extern const ai_u64 s_network_9_block_1_depthwise_conv2d_bias_array_u64[24];
extern const ai_u64 s_network_9_block_1_project_conv2d_weights_array_u64[192];
extern const ai_u64 s_network_9_block_1_project_conv2d_bias_array_u64[4];
extern const ai_u64 s_network_9_block_2_expand_conv2d_weights_array_u64[192];
extern const ai_u64 s_network_9_block_2_expand_conv2d_bias_array_u64[24];
extern const ai_u64 s_network_9_block_2_depthwise_conv2d_weights_array_u64[216];
extern const ai_u64 s_network_9_block_2_depthwise_conv2d_bias_array_u64[24];
extern const ai_u64 s_network_9_block_2_project_conv2d_weights_array_u64[192];
extern const ai_u64 s_network_9_block_2_project_conv2d_bias_array_u64[4];
extern const ai_u64 s_network_9_block_3_expand_conv2d_weights_array_u64[192];
extern const ai_u64 s_network_9_block_3_expand_conv2d_bias_array_u64[24];
extern const ai_u64 s_network_9_block_3_depthwise_conv2d_weights_array_u64[216];
extern const ai_u64 s_network_9_block_3_depthwise_conv2d_bias_array_u64[24];
extern const ai_u64 s_network_9_block_3_project_conv2d_weights_array_u64[384];
extern const ai_u64 s_network_9_block_3_project_conv2d_bias_array_u64[8];
extern const ai_u64 s_network_9_block_4_expand_conv2d_weights_array_u64[768];
extern const ai_u64 s_network_9_block_4_expand_conv2d_bias_array_u64[48];
extern const ai_u64 s_network_9_block_4_depthwise_conv2d_weights_array_u64[432];
extern const ai_u64 s_network_9_block_4_depthwise_conv2d_bias_array_u64[48];
extern const ai_u64 s_network_9_block_4_project_conv2d_weights_array_u64[768];
extern const ai_u64 s_network_9_block_4_project_conv2d_bias_array_u64[8];
extern const ai_u64 s_network_9_block_5_expand_conv2d_weights_array_u64[768];
extern const ai_u64 s_network_9_block_5_expand_conv2d_bias_array_u64[48];
extern const ai_u64 s_network_9_block_5_depthwise_conv2d_weights_array_u64[432];
extern const ai_u64 s_network_9_block_5_depthwise_conv2d_bias_array_u64[48];
extern const ai_u64 s_network_9_block_5_project_conv2d_weights_array_u64[768];
extern const ai_u64 s_network_9_block_5_project_conv2d_bias_array_u64[8];
extern const ai_u64 s_network_9_block_6_expand_conv2d_weights_array_u64[768];
extern const ai_u64 s_network_9_block_6_expand_conv2d_bias_array_u64[48];
extern const ai_u64 s_network_9_block_6_depthwise_conv2d_weights_array_u64[432];
extern const ai_u64 s_network_9_block_6_depthwise_conv2d_bias_array_u64[48];
extern const ai_u64 s_network_9_block_6_project_conv2d_weights_array_u64[1152];
extern const ai_u64 s_network_9_block_6_project_conv2d_bias_array_u64[12];
extern const ai_u64 s_network_9_block_7_expand_conv2d_weights_array_u64[1728];
extern const ai_u64 s_network_9_block_7_expand_conv2d_bias_array_u64[72];
extern const ai_u64 s_network_9_block_7_depthwise_conv2d_weights_array_u64[648];
extern const ai_u64 s_network_9_block_7_depthwise_conv2d_bias_array_u64[72];
extern const ai_u64 s_network_9_block_7_project_conv2d_weights_array_u64[1728];
extern const ai_u64 s_network_9_block_7_project_conv2d_bias_array_u64[12];
extern const ai_u64 s_network_9_block_8_expand_conv2d_weights_array_u64[1728];
extern const ai_u64 s_network_9_block_8_expand_conv2d_bias_array_u64[72];
extern const ai_u64 s_network_9_block_8_depthwise_conv2d_weights_array_u64[648];
extern const ai_u64 s_network_9_block_8_depthwise_conv2d_bias_array_u64[72];
extern const ai_u64 s_network_9_block_8_project_conv2d_weights_array_u64[1728];
extern const ai_u64 s_network_9_block_8_project_conv2d_bias_array_u64[12];
extern const ai_u64 s_network_9_block_9_expand_conv2d_weights_array_u64[1728];
extern const ai_u64 s_network_9_block_9_expand_conv2d_bias_array_u64[72];
extern const ai_u64 s_network_9_block_9_depthwise_conv2d_weights_array_u64[648];
extern const ai_u64 s_network_9_block_9_depthwise_conv2d_bias_array_u64[72];
extern const ai_u64 s_network_9_block_9_project_conv2d_weights_array_u64[1728];
extern const ai_u64 s_network_9_block_9_project_conv2d_bias_array_u64[12];
extern const ai_u64 s_network_9_block_10_expand_conv2d_weights_array_u64[1728];
extern const ai_u64 s_network_9_block_10_expand_conv2d_bias_array_u64[72];
extern const ai_u64 s_network_9_block_10_depthwise_conv2d_weights_array_u64[648];
extern const ai_u64 s_network_9_block_10_depthwise_conv2d_bias_array_u64[72];
extern const ai_u64 s_network_9_block_10_project_conv2d_weights_array_u64[2304];
extern const ai_u64 s_network_9_block_10_project_conv2d_bias_array_u64[16];
extern const ai_u64 s_network_9_block_11_expand_conv2d_weights_array_u64[3072];
extern const ai_u64 s_network_9_block_11_expand_conv2d_bias_array_u64[96];
extern const ai_u64 s_network_9_block_11_depthwise_conv2d_weights_array_u64[864];
extern const ai_u64 s_network_9_block_11_depthwise_conv2d_bias_array_u64[96];
extern const ai_u64 s_network_9_block_11_project_conv2d_weights_array_u64[3072];
extern const ai_u64 s_network_9_block_11_project_conv2d_bias_array_u64[16];
extern const ai_u64 s_network_9_block_12_expand_conv2d_weights_array_u64[3072];
extern const ai_u64 s_network_9_block_12_expand_conv2d_bias_array_u64[96];
extern const ai_u64 s_network_9_block_12_depthwise_conv2d_weights_array_u64[864];
extern const ai_u64 s_network_9_block_12_depthwise_conv2d_bias_array_u64[96];
extern const ai_u64 s_network_9_block_12_project_conv2d_weights_array_u64[3072];
extern const ai_u64 s_network_9_block_12_project_conv2d_bias_array_u64[16];
extern const ai_u64 s_network_9_block_13_expand_conv2d_weights_array_u64[3072];
extern const ai_u64 s_network_9_block_13_expand_conv2d_bias_array_u64[96];
extern const ai_u64 s_network_9_block_13_depthwise_conv2d_weights_array_u64[864];
extern const ai_u64 s_network_9_block_13_depthwise_conv2d_bias_array_u64[96];
extern const ai_u64 s_network_9_block_13_project_conv2d_weights_array_u64[5376];
extern const ai_u64 s_network_9_block_13_project_conv2d_bias_array_u64[28];
extern const ai_u64 s_network_9_block_14_expand_conv2d_weights_array_u64[9408];
extern const ai_u64 s_network_9_block_14_expand_conv2d_bias_array_u64[168];
extern const ai_u64 s_network_9_block_14_depthwise_conv2d_weights_array_u64[1512];
extern const ai_u64 s_network_9_block_14_depthwise_conv2d_bias_array_u64[168];
extern const ai_u64 s_network_9_block_14_project_conv2d_weights_array_u64[9408];
extern const ai_u64 s_network_9_block_14_project_conv2d_bias_array_u64[28];
extern const ai_u64 s_network_9_block_15_expand_conv2d_weights_array_u64[9408];
extern const ai_u64 s_network_9_block_15_expand_conv2d_bias_array_u64[168];
extern const ai_u64 s_network_9_block_15_depthwise_conv2d_weights_array_u64[1512];
extern const ai_u64 s_network_9_block_15_depthwise_conv2d_bias_array_u64[168];
extern const ai_u64 s_network_9_block_15_project_conv2d_weights_array_u64[9408];
extern const ai_u64 s_network_9_block_15_project_conv2d_bias_array_u64[28];
extern const ai_u64 s_network_9_block_16_expand_conv2d_weights_array_u64[9408];
extern const ai_u64 s_network_9_block_16_expand_conv2d_bias_array_u64[168];
extern const ai_u64 s_network_9_block_16_depthwise_conv2d_weights_array_u64[1512];
extern const ai_u64 s_network_9_block_16_depthwise_conv2d_bias_array_u64[168];
extern const ai_u64 s_network_9_block_16_project_conv2d_weights_array_u64[18816];
extern const ai_u64 s_network_9_block_16_project_conv2d_bias_array_u64[56];
extern const ai_u64 s_network_9_Conv_1_conv2d_weights_array_u64[71680];
extern const ai_u64 s_network_9_Conv_1_conv2d_bias_array_u64[640];
extern const ai_u64 s_network_9_dense_Dense1_dense_weights_array_u64[64000];
extern const ai_u64 s_network_9_dense_Dense1_dense_bias_array_u64[50];
extern const ai_u64 s_network_9_dense_Dense2_dense_weights_array_u64[1500];



/*!
 * @brief Get network activations buffer initialized struct.
 * @ingroup network_9_data
 * @param[in] ptr a pointer to the activations array storage area
 * @return an ai_buffer initialized struct
 */
AI_DEPRECATED
AI_API_ENTRY
ai_buffer ai_network_9_data_activations_buffer_get(const ai_handle ptr);

/*!
 * @brief Get network weights buffer initialized struct.
 * @ingroup network_9_data
 * @param[in] ptr a pointer to the weights array storage area
 * @return an ai_buffer initialized struct
 */
AI_DEPRECATED
AI_API_ENTRY
ai_buffer ai_network_9_data_weights_buffer_get(const ai_handle ptr);

/*!
 * @brief Get network weights array pointer as a handle ptr.
 * @ingroup network_9_data
 * @return a ai_handle pointer to the weights array
 */
AI_DEPRECATED
AI_API_ENTRY
ai_handle ai_network_9_data_weights_get(void);


/*!
 * @brief Get network params configuration data structure.
 * @ingroup network_9_data
 * @return true if a valid configuration is present, false otherwise
 */
AI_API_ENTRY
ai_bool ai_network_9_data_params_get(ai_network_params* params);


AI_API_DECLARE_END

#endif /* NETWORK_9_DATA_H */
