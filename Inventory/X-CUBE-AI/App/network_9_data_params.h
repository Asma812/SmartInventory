/**
  ******************************************************************************
  * @file    network_9_data_params.h
  * @author  AST Embedded Analytics Research Platform
  * @date    Thu Apr 11 17:14:26 2024
  * @brief   AI Tool Automatic Code Generator for Embedded NN computing
  ******************************************************************************
  * Copyright (c) 2024 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  ******************************************************************************
  */

#ifndef NETWORK_9_DATA_PARAMS_H
#define NETWORK_9_DATA_PARAMS_H
#pragma once

#include "ai_platform.h"

/*
#define AI_NETWORK_9_DATA_WEIGHTS_PARAMS \
  (AI_HANDLE_PTR(&ai_network_9_data_weights_params[1]))
*/

#define AI_NETWORK_9_DATA_CONFIG               (NULL)


#define AI_NETWORK_9_DATA_ACTIVATIONS_SIZES \
  { 2458816, }
#define AI_NETWORK_9_DATA_ACTIVATIONS_SIZE     (2458816)
#define AI_NETWORK_9_DATA_ACTIVATIONS_COUNT    (1)
#define AI_NETWORK_9_DATA_ACTIVATION_1_SIZE    (2458816)



#define AI_NETWORK_9_DATA_WEIGHTS_SIZES \
  { 1728, 64, 576, 64, 512, 32, 1536, 192, 1728, 192, 1536, 32, 1536, 192, 1728, 192, 1536, 32, 1536, 192, 1728, 192, 3072, 64, 6144, 384, 3456, 384, 6144, 64, 6144, 384, 3456, 384, 6144, 64, 6144, 384, 3456, 384, 9216, 96, 13824, 576, 5184, 576, 13824, 96, 13824, 576, 5184, 576, 13824, 96, 13824, 576, 5184, 576, 13824, 96, 13824, 576, 5184, 576, 18432, 128, 24576, 768, 6912, 768, 24576, 128, 24576, 768, 6912, 768, 24576, 128, 24576, 768, 6912, 768, 43008, 224, 75264, 1344, 12096, 1344, 75264, 224, 75264, 1344, 12096, 1344, 75264, 224, 75264, 1344, 12096, 1344, 150528, 448, 573440, 5120, 512000, 400, 12000, }
#define AI_NETWORK_9_DATA_WEIGHTS_SIZE         (2080752)
#define AI_NETWORK_9_DATA_WEIGHTS_COUNT        (107)
#define AI_NETWORK_9_DATA_WEIGHT_1_SIZE        (1728)
#define AI_NETWORK_9_DATA_WEIGHT_2_SIZE        (64)
#define AI_NETWORK_9_DATA_WEIGHT_3_SIZE        (576)
#define AI_NETWORK_9_DATA_WEIGHT_4_SIZE        (64)
#define AI_NETWORK_9_DATA_WEIGHT_5_SIZE        (512)
#define AI_NETWORK_9_DATA_WEIGHT_6_SIZE        (32)
#define AI_NETWORK_9_DATA_WEIGHT_7_SIZE        (1536)
#define AI_NETWORK_9_DATA_WEIGHT_8_SIZE        (192)
#define AI_NETWORK_9_DATA_WEIGHT_9_SIZE        (1728)
#define AI_NETWORK_9_DATA_WEIGHT_10_SIZE        (192)
#define AI_NETWORK_9_DATA_WEIGHT_11_SIZE        (1536)
#define AI_NETWORK_9_DATA_WEIGHT_12_SIZE        (32)
#define AI_NETWORK_9_DATA_WEIGHT_13_SIZE        (1536)
#define AI_NETWORK_9_DATA_WEIGHT_14_SIZE        (192)
#define AI_NETWORK_9_DATA_WEIGHT_15_SIZE        (1728)
#define AI_NETWORK_9_DATA_WEIGHT_16_SIZE        (192)
#define AI_NETWORK_9_DATA_WEIGHT_17_SIZE        (1536)
#define AI_NETWORK_9_DATA_WEIGHT_18_SIZE        (32)
#define AI_NETWORK_9_DATA_WEIGHT_19_SIZE        (1536)
#define AI_NETWORK_9_DATA_WEIGHT_20_SIZE        (192)
#define AI_NETWORK_9_DATA_WEIGHT_21_SIZE        (1728)
#define AI_NETWORK_9_DATA_WEIGHT_22_SIZE        (192)
#define AI_NETWORK_9_DATA_WEIGHT_23_SIZE        (3072)
#define AI_NETWORK_9_DATA_WEIGHT_24_SIZE        (64)
#define AI_NETWORK_9_DATA_WEIGHT_25_SIZE        (6144)
#define AI_NETWORK_9_DATA_WEIGHT_26_SIZE        (384)
#define AI_NETWORK_9_DATA_WEIGHT_27_SIZE        (3456)
#define AI_NETWORK_9_DATA_WEIGHT_28_SIZE        (384)
#define AI_NETWORK_9_DATA_WEIGHT_29_SIZE        (6144)
#define AI_NETWORK_9_DATA_WEIGHT_30_SIZE        (64)
#define AI_NETWORK_9_DATA_WEIGHT_31_SIZE        (6144)
#define AI_NETWORK_9_DATA_WEIGHT_32_SIZE        (384)
#define AI_NETWORK_9_DATA_WEIGHT_33_SIZE        (3456)
#define AI_NETWORK_9_DATA_WEIGHT_34_SIZE        (384)
#define AI_NETWORK_9_DATA_WEIGHT_35_SIZE        (6144)
#define AI_NETWORK_9_DATA_WEIGHT_36_SIZE        (64)
#define AI_NETWORK_9_DATA_WEIGHT_37_SIZE        (6144)
#define AI_NETWORK_9_DATA_WEIGHT_38_SIZE        (384)
#define AI_NETWORK_9_DATA_WEIGHT_39_SIZE        (3456)
#define AI_NETWORK_9_DATA_WEIGHT_40_SIZE        (384)
#define AI_NETWORK_9_DATA_WEIGHT_41_SIZE        (9216)
#define AI_NETWORK_9_DATA_WEIGHT_42_SIZE        (96)
#define AI_NETWORK_9_DATA_WEIGHT_43_SIZE        (13824)
#define AI_NETWORK_9_DATA_WEIGHT_44_SIZE        (576)
#define AI_NETWORK_9_DATA_WEIGHT_45_SIZE        (5184)
#define AI_NETWORK_9_DATA_WEIGHT_46_SIZE        (576)
#define AI_NETWORK_9_DATA_WEIGHT_47_SIZE        (13824)
#define AI_NETWORK_9_DATA_WEIGHT_48_SIZE        (96)
#define AI_NETWORK_9_DATA_WEIGHT_49_SIZE        (13824)
#define AI_NETWORK_9_DATA_WEIGHT_50_SIZE        (576)
#define AI_NETWORK_9_DATA_WEIGHT_51_SIZE        (5184)
#define AI_NETWORK_9_DATA_WEIGHT_52_SIZE        (576)
#define AI_NETWORK_9_DATA_WEIGHT_53_SIZE        (13824)
#define AI_NETWORK_9_DATA_WEIGHT_54_SIZE        (96)
#define AI_NETWORK_9_DATA_WEIGHT_55_SIZE        (13824)
#define AI_NETWORK_9_DATA_WEIGHT_56_SIZE        (576)
#define AI_NETWORK_9_DATA_WEIGHT_57_SIZE        (5184)
#define AI_NETWORK_9_DATA_WEIGHT_58_SIZE        (576)
#define AI_NETWORK_9_DATA_WEIGHT_59_SIZE        (13824)
#define AI_NETWORK_9_DATA_WEIGHT_60_SIZE        (96)
#define AI_NETWORK_9_DATA_WEIGHT_61_SIZE        (13824)
#define AI_NETWORK_9_DATA_WEIGHT_62_SIZE        (576)
#define AI_NETWORK_9_DATA_WEIGHT_63_SIZE        (5184)
#define AI_NETWORK_9_DATA_WEIGHT_64_SIZE        (576)
#define AI_NETWORK_9_DATA_WEIGHT_65_SIZE        (18432)
#define AI_NETWORK_9_DATA_WEIGHT_66_SIZE        (128)
#define AI_NETWORK_9_DATA_WEIGHT_67_SIZE        (24576)
#define AI_NETWORK_9_DATA_WEIGHT_68_SIZE        (768)
#define AI_NETWORK_9_DATA_WEIGHT_69_SIZE        (6912)
#define AI_NETWORK_9_DATA_WEIGHT_70_SIZE        (768)
#define AI_NETWORK_9_DATA_WEIGHT_71_SIZE        (24576)
#define AI_NETWORK_9_DATA_WEIGHT_72_SIZE        (128)
#define AI_NETWORK_9_DATA_WEIGHT_73_SIZE        (24576)
#define AI_NETWORK_9_DATA_WEIGHT_74_SIZE        (768)
#define AI_NETWORK_9_DATA_WEIGHT_75_SIZE        (6912)
#define AI_NETWORK_9_DATA_WEIGHT_76_SIZE        (768)
#define AI_NETWORK_9_DATA_WEIGHT_77_SIZE        (24576)
#define AI_NETWORK_9_DATA_WEIGHT_78_SIZE        (128)
#define AI_NETWORK_9_DATA_WEIGHT_79_SIZE        (24576)
#define AI_NETWORK_9_DATA_WEIGHT_80_SIZE        (768)
#define AI_NETWORK_9_DATA_WEIGHT_81_SIZE        (6912)
#define AI_NETWORK_9_DATA_WEIGHT_82_SIZE        (768)
#define AI_NETWORK_9_DATA_WEIGHT_83_SIZE        (43008)
#define AI_NETWORK_9_DATA_WEIGHT_84_SIZE        (224)
#define AI_NETWORK_9_DATA_WEIGHT_85_SIZE        (75264)
#define AI_NETWORK_9_DATA_WEIGHT_86_SIZE        (1344)
#define AI_NETWORK_9_DATA_WEIGHT_87_SIZE        (12096)
#define AI_NETWORK_9_DATA_WEIGHT_88_SIZE        (1344)
#define AI_NETWORK_9_DATA_WEIGHT_89_SIZE        (75264)
#define AI_NETWORK_9_DATA_WEIGHT_90_SIZE        (224)
#define AI_NETWORK_9_DATA_WEIGHT_91_SIZE        (75264)
#define AI_NETWORK_9_DATA_WEIGHT_92_SIZE        (1344)
#define AI_NETWORK_9_DATA_WEIGHT_93_SIZE        (12096)
#define AI_NETWORK_9_DATA_WEIGHT_94_SIZE        (1344)
#define AI_NETWORK_9_DATA_WEIGHT_95_SIZE        (75264)
#define AI_NETWORK_9_DATA_WEIGHT_96_SIZE        (224)
#define AI_NETWORK_9_DATA_WEIGHT_97_SIZE        (75264)
#define AI_NETWORK_9_DATA_WEIGHT_98_SIZE        (1344)
#define AI_NETWORK_9_DATA_WEIGHT_99_SIZE        (12096)
#define AI_NETWORK_9_DATA_WEIGHT_100_SIZE        (1344)
#define AI_NETWORK_9_DATA_WEIGHT_101_SIZE        (150528)
#define AI_NETWORK_9_DATA_WEIGHT_102_SIZE        (448)
#define AI_NETWORK_9_DATA_WEIGHT_103_SIZE        (573440)
#define AI_NETWORK_9_DATA_WEIGHT_104_SIZE        (5120)
#define AI_NETWORK_9_DATA_WEIGHT_105_SIZE        (512000)
#define AI_NETWORK_9_DATA_WEIGHT_106_SIZE        (400)
#define AI_NETWORK_9_DATA_WEIGHT_107_SIZE        (12000)



#define AI_NETWORK_9_DATA_ACTIVATIONS_TABLE_GET() \
  (&g_network_9_activations_table[1])

extern ai_handle g_network_9_activations_table[1 + 2];



#define AI_NETWORK_9_DATA_WEIGHTS_TABLE_GET() \
  (&g_network_9_weights_table[1])

extern ai_handle g_network_9_weights_table[107 + 2];


#endif    /* NETWORK_9_DATA_PARAMS_H */
