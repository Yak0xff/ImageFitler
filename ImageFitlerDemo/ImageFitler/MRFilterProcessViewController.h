//
//  MRFilterProcessViewController.h
//  ImageFitlerDemo
//
//  Created by Robin.Chao on 14-6-15.
//  Copyright (c) 2014年 mRocker. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol FilterProcessDelegate <NSObject>

- (void)filterProcessSuccess:(UIImage *)image;

@end

@interface MRFilterProcessViewController : UIViewController

@property (nonatomic, strong) UIImage *currentImage;

@property (nonatomic, assign) id <FilterProcessDelegate> delegate;

@end
