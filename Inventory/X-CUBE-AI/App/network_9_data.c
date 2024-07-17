/**
  ******************************************************************************
  * @file    network_9_data.c
  * @author  AST Embedded Analytics Research Platform
  * @date    Thu Apr 11 17:14:26 2024
  * @brief   AI Tool Automatic Code Generator for Embedded NN computing
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2024 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  ******************************************************************************
  */
#include "network_9_data.h"
#include "ai_platform_interface.h"

AI_API_DECLARE_BEGIN
ai_buffer g_network_9_data_map_activations[AI_NETWORK_9_DATA_ACTIVATIONS_COUNT] = {
  AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
    AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 2458816, 1, 1),
    2458816, NULL, 0x0),    /* pool4 */
  };
ai_buffer g_network_9_data_map_weights[AI_NETWORK_9_DATA_WEIGHTS_COUNT] = {
  AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
    AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 1728, 1, 1),
    1728, NULL, s_network_9_Conv1_conv2d_weights_array_u64),   /* Conv1_conv2d_weights_array */
  AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
    AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 64, 1, 1),
    64, NULL, s_network_9_Conv1_conv2d_bias_array_u64),   /* Conv1_conv2d_bias_array */
  AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
    AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 576, 1, 1),
    576, NULL, s_network_9_expanded_conv_depthwise_conv2d_weights_array_u64),   /* expanded_conv_depthwise_conv2d_weights_array */
  AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
    AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 64, 1, 1),
    64, NULL, s_network_9_expanded_conv_depthwise_conv2d_bias_array_u64),   /* expanded_conv_depthwise_conv2d_bias_array */
  AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
    AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 512, 1, 1),
    512, NULL, s_network_9_expanded_conv_project_conv2d_weights_array_u64),   /* expanded_conv_project_conv2d_weights_array */
  AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
    AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 32, 1, 1),
    32, NULL, s_network_9_expanded_conv_project_conv2d_bias_array_u64),   /* expanded_conv_project_conv2d_bias_array */
  AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
    AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 1536, 1, 1),
    1536, NULL, s_network_9_block_1_expand_conv2d_weights_array_u64),   /* block_1_expand_conv2d_weights_array */
  AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
    AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 192, 1, 1),
    192, NULL, s_network_9_block_1_expand_conv2d_bias_array_u64),   /* block_1_expand_conv2d_bias_array */
  AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
    AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 1728, 1, 1),
    1728, NULL, s_network_9_block_1_depthwise_conv2d_weights_array_u64),   /* block_1_depthwise_conv2d_weights_array */
  AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
    AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 192, 1, 1),
    192, NULL, s_network_9_block_1_depthwise_conv2d_bias_array_u64),   /* block_1_depthwise_conv2d_bias_array */
  AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
    AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 1536, 1, 1),
    1536, NULL, s_network_9_block_1_project_conv2d_weights_array_u64),   /* block_1_project_conv2d_weights_array */
  AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
    AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 32, 1, 1),
    32, NULL, s_network_9_block_1_project_conv2d_bias_array_u64),   /* block_1_project_conv2d_bias_array */
  AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
    AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 1536, 1, 1),
    1536, NULL, s_network_9_block_2_expand_conv2d_weights_array_u64),   /* block_2_expand_conv2d_weights_array */
  AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
    AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 192, 1, 1),
    192, NULL, s_network_9_block_2_expand_conv2d_bias_array_u64),   /* block_2_expand_conv2d_bias_array */
  AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
    AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 1728, 1, 1),
    1728, NULL, s_network_9_block_2_depthwise_conv2d_weights_array_u64),   /* block_2_depthwise_conv2d_weights_array */
  AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
    AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 192, 1, 1),
    192, NULL, s_network_9_block_2_depthwise_conv2d_bias_array_u64),   /* block_2_depthwise_conv2d_bias_array */
  AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
    AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 1536, 1, 1),
    1536, NULL, s_network_9_block_2_project_conv2d_weights_array_u64),   /* block_2_project_conv2d_weights_array */
  AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
    AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 32, 1, 1),
    32, NULL, s_network_9_block_2_project_conv2d_bias_array_u64),   /* block_2_project_conv2d_bias_array */
  AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
    AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 1536, 1, 1),
    1536, NULL, s_network_9_block_3_expand_conv2d_weights_array_u64),   /* block_3_expand_conv2d_weights_array */
  AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
    AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 192, 1, 1),
    192, NULL, s_network_9_block_3_expand_conv2d_bias_array_u64),   /* block_3_expand_conv2d_bias_array */
  AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
    AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 1728, 1, 1),
    1728, NULL, s_network_9_block_3_depthwise_conv2d_weights_array_u64),   /* block_3_depthwise_conv2d_weights_array */
  AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
    AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 192, 1, 1),
    192, NULL, s_network_9_block_3_depthwise_conv2d_bias_array_u64),   /* block_3_depthwise_conv2d_bias_array */
  AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
    AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 3072, 1, 1),
    3072, NULL, s_network_9_block_3_project_conv2d_weights_array_u64),   /* block_3_project_conv2d_weights_array */
  AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
    AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 64, 1, 1),
    64, NULL, s_network_9_block_3_project_conv2d_bias_array_u64),   /* block_3_project_conv2d_bias_array */
  AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
    AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 6144, 1, 1),
    6144, NULL, s_network_9_block_4_expand_conv2d_weights_array_u64),   /* block_4_expand_conv2d_weights_array */
  AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
    AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 384, 1, 1),
    384, NULL, s_network_9_block_4_expand_conv2d_bias_array_u64),   /* block_4_expand_conv2d_bias_array */
  AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
    AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 3456, 1, 1),
    3456, NULL, s_network_9_block_4_depthwise_conv2d_weights_array_u64),   /* block_4_depthwise_conv2d_weights_array */
  AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
    AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 384, 1, 1),
    384, NULL, s_network_9_block_4_depthwise_conv2d_bias_array_u64),   /* block_4_depthwise_conv2d_bias_array */
  AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
    AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 6144, 1, 1),
    6144, NULL, s_network_9_block_4_project_conv2d_weights_array_u64),   /* block_4_project_conv2d_weights_array */
  AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
    AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 64, 1, 1),
    64, NULL, s_network_9_block_4_project_conv2d_bias_array_u64),   /* block_4_project_conv2d_bias_array */
  AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
    AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 6144, 1, 1),
    6144, NULL, s_network_9_block_5_expand_conv2d_weights_array_u64),   /* block_5_expand_conv2d_weights_array */
  AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
    AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 384, 1, 1),
    384, NULL, s_network_9_block_5_expand_conv2d_bias_array_u64),   /* block_5_expand_conv2d_bias_array */
  AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
    AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 3456, 1, 1),
    3456, NULL, s_network_9_block_5_depthwise_conv2d_weights_array_u64),   /* block_5_depthwise_conv2d_weights_array */
  AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
    AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 384, 1, 1),
    384, NULL, s_network_9_block_5_depthwise_conv2d_bias_array_u64),   /* block_5_depthwise_conv2d_bias_array */
  AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
    AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 6144, 1, 1),
    6144, NULL, s_network_9_block_5_project_conv2d_weights_array_u64),   /* block_5_project_conv2d_weights_array */
  AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
    AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 64, 1, 1),
    64, NULL, s_network_9_block_5_project_conv2d_bias_array_u64),   /* block_5_project_conv2d_bias_array */
  AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
    AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 6144, 1, 1),
    6144, NULL, s_network_9_block_6_expand_conv2d_weights_array_u64),   /* block_6_expand_conv2d_weights_array */
  AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
    AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 384, 1, 1),
    384, NULL, s_network_9_block_6_expand_conv2d_bias_array_u64),   /* block_6_expand_conv2d_bias_array */
  AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
    AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 3456, 1, 1),
    3456, NULL, s_network_9_block_6_depthwise_conv2d_weights_array_u64),   /* block_6_depthwise_conv2d_weights_array */
  AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
    AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 384, 1, 1),
    384, NULL, s_network_9_block_6_depthwise_conv2d_bias_array_u64),   /* block_6_depthwise_conv2d_bias_array */
  AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
    AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 9216, 1, 1),
    9216, NULL, s_network_9_block_6_project_conv2d_weights_array_u64),   /* block_6_project_conv2d_weights_array */
  AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
    AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 96, 1, 1),
    96, NULL, s_network_9_block_6_project_conv2d_bias_array_u64),   /* block_6_project_conv2d_bias_array */
  AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
    AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 13824, 1, 1),
    13824, NULL, s_network_9_block_7_expand_conv2d_weights_array_u64),   /* block_7_expand_conv2d_weights_array */
  AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
    AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 576, 1, 1),
    576, NULL, s_network_9_block_7_expand_conv2d_bias_array_u64),   /* block_7_expand_conv2d_bias_array */
  AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
    AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 5184, 1, 1),
    5184, NULL, s_network_9_block_7_depthwise_conv2d_weights_array_u64),   /* block_7_depthwise_conv2d_weights_array */
  AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
    AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 576, 1, 1),
    576, NULL, s_network_9_block_7_depthwise_conv2d_bias_array_u64),   /* block_7_depthwise_conv2d_bias_array */
  AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
    AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 13824, 1, 1),
    13824, NULL, s_network_9_block_7_project_conv2d_weights_array_u64),   /* block_7_project_conv2d_weights_array */
  AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
    AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 96, 1, 1),
    96, NULL, s_network_9_block_7_project_conv2d_bias_array_u64),   /* block_7_project_conv2d_bias_array */
  AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
    AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 13824, 1, 1),
    13824, NULL, s_network_9_block_8_expand_conv2d_weights_array_u64),   /* block_8_expand_conv2d_weights_array */
  AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
    AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 576, 1, 1),
    576, NULL, s_network_9_block_8_expand_conv2d_bias_array_u64),   /* block_8_expand_conv2d_bias_array */
  AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
    AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 5184, 1, 1),
    5184, NULL, s_network_9_block_8_depthwise_conv2d_weights_array_u64),   /* block_8_depthwise_conv2d_weights_array */
  AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
    AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 576, 1, 1),
    576, NULL, s_network_9_block_8_depthwise_conv2d_bias_array_u64),   /* block_8_depthwise_conv2d_bias_array */
  AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
    AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 13824, 1, 1),
    13824, NULL, s_network_9_block_8_project_conv2d_weights_array_u64),   /* block_8_project_conv2d_weights_array */
  AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
    AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 96, 1, 1),
    96, NULL, s_network_9_block_8_project_conv2d_bias_array_u64),   /* block_8_project_conv2d_bias_array */
  AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
    AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 13824, 1, 1),
    13824, NULL, s_network_9_block_9_expand_conv2d_weights_array_u64),   /* block_9_expand_conv2d_weights_array */
  AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
    AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 576, 1, 1),
    576, NULL, s_network_9_block_9_expand_conv2d_bias_array_u64),   /* block_9_expand_conv2d_bias_array */
  AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
    AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 5184, 1, 1),
    5184, NULL, s_network_9_block_9_depthwise_conv2d_weights_array_u64),   /* block_9_depthwise_conv2d_weights_array */
  AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
    AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 576, 1, 1),
    576, NULL, s_network_9_block_9_depthwise_conv2d_bias_array_u64),   /* block_9_depthwise_conv2d_bias_array */
  AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
    AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 13824, 1, 1),
    13824, NULL, s_network_9_block_9_project_conv2d_weights_array_u64),   /* block_9_project_conv2d_weights_array */
  AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
    AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 96, 1, 1),
    96, NULL, s_network_9_block_9_project_conv2d_bias_array_u64),   /* block_9_project_conv2d_bias_array */
  AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
    AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 13824, 1, 1),
    13824, NULL, s_network_9_block_10_expand_conv2d_weights_array_u64),   /* block_10_expand_conv2d_weights_array */
  AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
    AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 576, 1, 1),
    576, NULL, s_network_9_block_10_expand_conv2d_bias_array_u64),   /* block_10_expand_conv2d_bias_array */
  AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
    AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 5184, 1, 1),
    5184, NULL, s_network_9_block_10_depthwise_conv2d_weights_array_u64),   /* block_10_depthwise_conv2d_weights_array */
  AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
    AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 576, 1, 1),
    576, NULL, s_network_9_block_10_depthwise_conv2d_bias_array_u64),   /* block_10_depthwise_conv2d_bias_array */
  AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
    AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 18432, 1, 1),
    18432, NULL, s_network_9_block_10_project_conv2d_weights_array_u64),   /* block_10_project_conv2d_weights_array */
  AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
    AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 128, 1, 1),
    128, NULL, s_network_9_block_10_project_conv2d_bias_array_u64),   /* block_10_project_conv2d_bias_array */
  AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
    AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 24576, 1, 1),
    24576, NULL, s_network_9_block_11_expand_conv2d_weights_array_u64),   /* block_11_expand_conv2d_weights_array */
  AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
    AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 768, 1, 1),
    768, NULL, s_network_9_block_11_expand_conv2d_bias_array_u64),   /* block_11_expand_conv2d_bias_array */
  AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
    AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 6912, 1, 1),
    6912, NULL, s_network_9_block_11_depthwise_conv2d_weights_array_u64),   /* block_11_depthwise_conv2d_weights_array */
  AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
    AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 768, 1, 1),
    768, NULL, s_network_9_block_11_depthwise_conv2d_bias_array_u64),   /* block_11_depthwise_conv2d_bias_array */
  AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
    AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 24576, 1, 1),
    24576, NULL, s_network_9_block_11_project_conv2d_weights_array_u64),   /* block_11_project_conv2d_weights_array */
  AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
    AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 128, 1, 1),
    128, NULL, s_network_9_block_11_project_conv2d_bias_array_u64),   /* block_11_project_conv2d_bias_array */
  AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
    AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 24576, 1, 1),
    24576, NULL, s_network_9_block_12_expand_conv2d_weights_array_u64),   /* block_12_expand_conv2d_weights_array */
  AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
    AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 768, 1, 1),
    768, NULL, s_network_9_block_12_expand_conv2d_bias_array_u64),   /* block_12_expand_conv2d_bias_array */
  AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
    AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 6912, 1, 1),
    6912, NULL, s_network_9_block_12_depthwise_conv2d_weights_array_u64),   /* block_12_depthwise_conv2d_weights_array */
  AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
    AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 768, 1, 1),
    768, NULL, s_network_9_block_12_depthwise_conv2d_bias_array_u64),   /* block_12_depthwise_conv2d_bias_array */
  AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
    AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 24576, 1, 1),
    24576, NULL, s_network_9_block_12_project_conv2d_weights_array_u64),   /* block_12_project_conv2d_weights_array */
  AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
    AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 128, 1, 1),
    128, NULL, s_network_9_block_12_project_conv2d_bias_array_u64),   /* block_12_project_conv2d_bias_array */
  AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
    AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 24576, 1, 1),
    24576, NULL, s_network_9_block_13_expand_conv2d_weights_array_u64),   /* block_13_expand_conv2d_weights_array */
  AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
    AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 768, 1, 1),
    768, NULL, s_network_9_block_13_expand_conv2d_bias_array_u64),   /* block_13_expand_conv2d_bias_array */
  AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
    AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 6912, 1, 1),
    6912, NULL, s_network_9_block_13_depthwise_conv2d_weights_array_u64),   /* block_13_depthwise_conv2d_weights_array */
  AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
    AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 768, 1, 1),
    768, NULL, s_network_9_block_13_depthwise_conv2d_bias_array_u64),   /* block_13_depthwise_conv2d_bias_array */
  AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
    AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 43008, 1, 1),
    43008, NULL, s_network_9_block_13_project_conv2d_weights_array_u64),   /* block_13_project_conv2d_weights_array */
  AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
    AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 224, 1, 1),
    224, NULL, s_network_9_block_13_project_conv2d_bias_array_u64),   /* block_13_project_conv2d_bias_array */
  AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
    AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 75264, 1, 1),
    75264, NULL, s_network_9_block_14_expand_conv2d_weights_array_u64),   /* block_14_expand_conv2d_weights_array */
  AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
    AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 1344, 1, 1),
    1344, NULL, s_network_9_block_14_expand_conv2d_bias_array_u64),   /* block_14_expand_conv2d_bias_array */
  AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
    AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 12096, 1, 1),
    12096, NULL, s_network_9_block_14_depthwise_conv2d_weights_array_u64),   /* block_14_depthwise_conv2d_weights_array */
  AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
    AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 1344, 1, 1),
    1344, NULL, s_network_9_block_14_depthwise_conv2d_bias_array_u64),   /* block_14_depthwise_conv2d_bias_array */
  AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
    AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 75264, 1, 1),
    75264, NULL, s_network_9_block_14_project_conv2d_weights_array_u64),   /* block_14_project_conv2d_weights_array */
  AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
    AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 224, 1, 1),
    224, NULL, s_network_9_block_14_project_conv2d_bias_array_u64),   /* block_14_project_conv2d_bias_array */
  AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
    AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 75264, 1, 1),
    75264, NULL, s_network_9_block_15_expand_conv2d_weights_array_u64),   /* block_15_expand_conv2d_weights_array */
  AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
    AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 1344, 1, 1),
    1344, NULL, s_network_9_block_15_expand_conv2d_bias_array_u64),   /* block_15_expand_conv2d_bias_array */
  AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
    AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 12096, 1, 1),
    12096, NULL, s_network_9_block_15_depthwise_conv2d_weights_array_u64),   /* block_15_depthwise_conv2d_weights_array */
  AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
    AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 1344, 1, 1),
    1344, NULL, s_network_9_block_15_depthwise_conv2d_bias_array_u64),   /* block_15_depthwise_conv2d_bias_array */
  AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
    AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 75264, 1, 1),
    75264, NULL, s_network_9_block_15_project_conv2d_weights_array_u64),   /* block_15_project_conv2d_weights_array */
  AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
    AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 224, 1, 1),
    224, NULL, s_network_9_block_15_project_conv2d_bias_array_u64),   /* block_15_project_conv2d_bias_array */
  AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
    AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 75264, 1, 1),
    75264, NULL, s_network_9_block_16_expand_conv2d_weights_array_u64),   /* block_16_expand_conv2d_weights_array */
  AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
    AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 1344, 1, 1),
    1344, NULL, s_network_9_block_16_expand_conv2d_bias_array_u64),   /* block_16_expand_conv2d_bias_array */
  AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
    AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 12096, 1, 1),
    12096, NULL, s_network_9_block_16_depthwise_conv2d_weights_array_u64),   /* block_16_depthwise_conv2d_weights_array */
  AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
    AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 1344, 1, 1),
    1344, NULL, s_network_9_block_16_depthwise_conv2d_bias_array_u64),   /* block_16_depthwise_conv2d_bias_array */
  AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
    AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 150528, 1, 1),
    150528, NULL, s_network_9_block_16_project_conv2d_weights_array_u64),   /* block_16_project_conv2d_weights_array */
  AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
    AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 448, 1, 1),
    448, NULL, s_network_9_block_16_project_conv2d_bias_array_u64),   /* block_16_project_conv2d_bias_array */
  AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
    AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 573440, 1, 1),
    573440, NULL, s_network_9_Conv_1_conv2d_weights_array_u64),   /* Conv_1_conv2d_weights_array */
  AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
    AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 5120, 1, 1),
    5120, NULL, s_network_9_Conv_1_conv2d_bias_array_u64),   /* Conv_1_conv2d_bias_array */
  AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
    AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 512000, 1, 1),
    512000, NULL, s_network_9_dense_Dense1_dense_weights_array_u64),   /* dense_Dense1_dense_weights_array */
  AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
    AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 400, 1, 1),
    400, NULL, s_network_9_dense_Dense1_dense_bias_array_u64),   /* dense_Dense1_dense_bias_array */
  AI_BUFFER_INIT(AI_FLAG_NONE,  AI_BUFFER_FORMAT_U8,
    AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, 12000, 1, 1),
    12000, NULL, s_network_9_dense_Dense2_dense_weights_array_u64),   /* dense_Dense2_dense_weights_array */
  };


/*!
 * @brief Get network activations buffer initialized struct.
 * @ingroup network_9_data
 * @param[in] ptr a pointer to the activations array storage area
 * @return an ai_buffer initialized struct
 */
AI_DEPRECATED
AI_API_ENTRY
ai_buffer ai_network_9_data_activations_buffer_get(const ai_handle ptr)
{
  ai_buffer buf = AI_BUFFER_INIT(
    AI_FLAG_NONE, AI_BUFFER_FORMAT_U8,
    AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, AI_NETWORK_9_DATA_ACTIVATIONS_SIZE, 1, AI_NETWORK_9_DATA_ACTIVATIONS_COUNT),
    AI_NETWORK_9_DATA_ACTIVATIONS_SIZE,
    NULL, ptr);
  return buf;
}

/*!
 * @brief Get network weights buffer initialized struct.
 * @ingroup network_9_data
 * @param[in] ptr a pointer to the weights array storage area
 * @return an ai_buffer initialized struct
 */
AI_DEPRECATED
AI_API_ENTRY
ai_buffer ai_network_9_data_weights_buffer_get(const ai_handle ptr)
{
  ai_buffer buf = AI_BUFFER_INIT(
    AI_FLAG_NONE, AI_BUFFER_FORMAT_U8|AI_BUFFER_FMT_FLAG_CONST,
    AI_BUFFER_SHAPE_INIT(AI_SHAPE_BCWH, 4, 1, AI_NETWORK_9_DATA_WEIGHTS_SIZE, 1, AI_NETWORK_9_DATA_WEIGHTS_COUNT),
    AI_NETWORK_9_DATA_WEIGHTS_SIZE,
    NULL, ptr);
  return buf;
}


/*!
 * @brief Get network weights array pointer as a handle ptr.
 * @ingroup network_9_data
 * @return a ai_handle pointer to the weights array
 */
AI_DEPRECATED
AI_API_ENTRY
ai_handle ai_network_9_data_weights_get(void)
{
  return AI_HANDLE_PTR(g_network_9_weights_table);

}


/*!
 * @brief Get network params configuration data structure.
 * @ingroup network_9_data
 * @return true if a valid configuration is present, false otherwise
 */
AI_API_ENTRY
ai_bool ai_network_9_data_params_get(ai_network_params* params)
{
  if (!params) return false;
  
  const ai_buffer_array map_activations = 
    AI_BUFFER_ARRAY_OBJ_INIT(AI_FLAG_NONE, AI_NETWORK_9_DATA_ACTIVATIONS_COUNT, g_network_9_data_map_activations);
  
  const ai_buffer_array map_weights = 
    AI_BUFFER_ARRAY_OBJ_INIT(AI_FLAG_NONE, AI_NETWORK_9_DATA_WEIGHTS_COUNT, g_network_9_data_map_weights);

  return ai_platform_bind_network_params(params, &map_weights, &map_activations);
}


AI_API_DECLARE_END
