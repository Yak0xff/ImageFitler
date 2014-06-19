//
//  UIImage+Alpha.h
//  ImageFitlerDemo
//
//  Created by Robin.Chao on 14-6-15.
//  Copyright (c) 2014年 mRocker. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIImage (Alpha)

- (BOOL) hasAlpha;
- (UIImage *)imageWithAlpha;
- (UIImage *)transparentBorderImage:(NSUInteger)borderSize;
- (CGImageRef)newBorderMask:(NSUInteger)borderSize size:(CGSize)size;

@end
