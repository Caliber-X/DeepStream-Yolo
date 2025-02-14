/*
 * Created by Marcos Luciano
 * https://www.github.com/marcoslucianops
 */

#ifndef __REORG_R_LAYER_H__
#define __REORG_R_LAYER_H__

#include <map>
#include <vector>
#include <cassert>

#include "NvInfer.h"

nvinfer1::ILayer* reorgRLayer(
    int layerIdx,
    nvinfer1::ITensor* input,
    nvinfer1::INetworkDefinition* network);

#endif
