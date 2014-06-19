//
//  ColorMatrix.h
//  ImageFitlerDemo
//
//  Created by Robin.Chao on 14-6-15.
//  Copyright (c) 2014年 mRocker. All rights reserved.
//

#ifndef ImageFitlerDemo_ColorMatrix_h
#define ImageFitlerDemo_ColorMatrix_h

//LOMO
const float colormatrix_lomo[] = {
    1.7f,  0.1f,  0.1f,  0.f,  -73.1f,
     0.f,  1.7f,  0.1f,  0.f,  -73.1f,
     0.f,  0.1f,  1.6f,  0.f,  -73.1f,
     0.f,  0.f,    0.f,  1.0f,   0.f };

//黑白
const float colormatrix_heibai[] = {
    0.8f,  1.6f, 0.2f, 0.f,  -163.9f,
    0.8f,  1.6f, 0.2f, 0.f,  -163.9f,
    0.8f,  1.6f, 0.2f, 0.f,  -163.9f,
     0.f,  0.f,   0.f, 1.0f,    0.f };
//复古
const float colormatrix_huajiu[] = {
    0.2f, 0.5f, 0.1f, 0.f, 40.8f,
    0.2f, 0.5f, 0.1f, 0.f, 40.8f,
    0.2f, 0.5f, 0.1f, 0.f, 40.8f,
     0.f,  0.f,  0.f, 1.f,  0.f };

//哥特
const float colormatrix_gete[] = {
     1.9f,  -0.3f, -0.2f,  0.f, -87.0f,
    -0.2f,   1.7f, -0.1f,  0.f, -87.0f,
    -0.1f,  -0.6f,  2.0f,  0.f, -87.0f,
      0.f,    0.f,   0.f, 1.0f,   0.f };

//锐化
const float colormatrix_ruise[] = {
     4.8f, -1.0f,  -0.1f,  0.f, -388.4f,
    -0.5f,  4.4f,  -0.1f,  0.f, -388.4f,
    -0.5f, -1.0f,   5.2f,  0.f, -388.4f,
     0.f,    0.f,    0.f, 1.0f,    0.f };


//淡雅
const float colormatrix_danya[] = {
    0.6f, 0.3f, 0.1f, 0.f, 73.3f,
    0.2f, 0.7f, 0.1f, 0.f, 73.3f,
    0.2f, 0.3f, 0.4f, 0.f, 73.3f,
    0.f,   0.f, 0.f,  1.0f, 0.f };

//酒红
const float colormatrix_jiuhong[] = {
    1.2f,0.0f, 0.0f, 0.0f,0.0f,
    0.0f,0.9f, 0.0f, 0.0f,0.0f,
    0.0f,0.0f, 0.8f, 0.0f,0.0f,
    0, 0, 0, 1.0f, 0 };

//清宁
const float colormatrix_qingning[] = {
    0.9f, 0, 0, 0, 0,
    0, 1.1f,0, 0, 0,
    0, 0, 0.9f, 0, 0,
    0, 0, 0, 1.0f, 0 };

//浪漫
const float colormatrix_langman[] = {
    0.9f, 0, 0, 0, 63.0f,
    0, 0.9f,0, 0, 63.0f,
    0, 0, 0.9f, 0, 63.0f,
    0, 0, 0, 1.0f, 0 };

//光晕
const float colormatrix_guangyun[] = {
    0.9f, 0, 0,  0, 64.9f,
    0, 0.9f,0,  0, 64.9f,
    0, 0, 0.9f,  0, 64.9f,
    0, 0, 0, 1.0f, 0 };

//蓝调
const float colormatrix_landiao[] = {
    2.1f, -1.4f, 0.6f, 0.0f, -31.0f,
    -0.3f, 2.0f, -0.3f, 0.0f, -31.0f,
    -1.1f, -0.2f, 2.6f, 0.0f, -31.0f,
    0.0f, 0.0f, 0.0f, 1.0f, 0.0f
};

//梦幻
const float colormatrix_menghuan[] = {
    0.8f, 0.3f, 0.1f, 0.0f, 46.5f,
    0.1f, 0.9f, 0.0f, 0.0f, 46.5f,
    0.1f, 0.3f, 0.7f, 0.0f, 46.5f,
    0.0f, 0.0f, 0.0f, 1.0f, 0.0f
};

//夜色
const float colormatrix_yese[] = {
    1.0f, 0.0f, 0.0f, 0.0f, -66.6f,
    0.0f, 1.1f, 0.0f, 0.0f, -66.6f,
    0.0f, 0.0f, 1.0f, 0.0f, -66.6f,
    0.0f, 0.0f, 0.0f, 1.0f, 0.0f
};

//灰度
const float colormatrix_gray[] = {
    0.3086, 0.6094, 0.0820, 0.0f, 0.0f,
    0.3086, 0.6094, 0.0820, 0.0f, 0.0f,
    0.3086, 0.6094, 0.0820, 0.0f, 0.0f,
    0.0f, 0.0f, 0.0f, 1.0f, 0.0f
};

#endif
