//
//  MRViewController.m
//  ImageFitlerDemo
//
//  Created by Robin.Chao on 14-6-15.
//  Copyright (c) 2014年 mRocker. All rights reserved.
//

#import "MRViewController.h"
#import "MRFilterProcessViewController.h"
#import "UIImage+Cut.h"

@interface MRViewController ()<UINavigationControllerDelegate,UIImagePickerControllerDelegate,FilterProcessDelegate>{
    
    UIImageView *imageView;
}

@end

@implementation MRViewController

- (void)viewDidLoad
{
    [super viewDidLoad];
	// Do any additional setup after loading the view, typically from a nib.
    
    
    UIButton *leftBtn = [UIButton buttonWithType:UIButtonTypeCustom];
    [leftBtn setTitle:@"拍照" forState:UIControlStateNormal];
    [leftBtn setTitleColor:[UIColor redColor] forState:UIControlStateNormal];
    [leftBtn setFrame:CGRectMake(10, 20, 100, 50)];
    [leftBtn addTarget:self action:@selector(takePhoto:) forControlEvents:UIControlEventTouchUpInside];
    [self.view addSubview:leftBtn];
    
    
    imageView = [[UIImageView alloc] initWithFrame:CGRectMake(20, 50, 300, 300)];
    [self.view addSubview:imageView];
}

- (void)takePhoto:(id)sender {
    UIImagePickerController *pickerViewController = [[UIImagePickerController alloc] init];
    if([UIImagePickerController isSourceTypeAvailable:UIImagePickerControllerSourceTypeCamera]){
        [pickerViewController setSourceType:UIImagePickerControllerSourceTypeCamera];
    }else{
        [pickerViewController setSourceType:UIImagePickerControllerSourceTypePhotoLibrary];
    }
    pickerViewController.delegate = self;
    [self presentViewController:pickerViewController animated:YES completion:NULL];
}

- (void)imagePickerController:(UIImagePickerController *)picker didFinishPickingMediaWithInfo:(NSDictionary *)info{
    
    UIImage *sourceImage = [info objectForKey:UIImagePickerControllerOriginalImage];
    sourceImage = [sourceImage clipImageWithScaleWithsize:CGSizeMake(320, 480)] ;
    
    [picker dismissViewControllerAnimated:NO completion:^{
        MRFilterProcessViewController *filterProcessViewController = [[MRFilterProcessViewController alloc] init];
        filterProcessViewController.currentImage = sourceImage;
        filterProcessViewController.delegate = self;
        [self presentViewController:filterProcessViewController animated:YES completion:NULL];

    }];
}

-(void)filterProcessSuccess:(UIImage *)image{
    [imageView setImage:image];
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
