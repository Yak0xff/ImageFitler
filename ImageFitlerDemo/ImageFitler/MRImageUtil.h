//
//  MRImageUtil.h
//  ImageFitlerDemo
//
//  Created by Robin.Chao on 14-6-15.
//  Copyright (c) 2014年 mRocker. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface MRImageUtil : NSObject

+ (UIImage*)imageWithImage:(UIImage*)inImage withColorMatrix:(const float*) f;

@end
