//
//  ViewController.m
//  IMSDKTest
//
//  Created by Deemo on 2017/11/6.
//  Copyright © 2017年 ICSOC. All rights reserved.
//

#import "ViewController.h"
#import <IMSDK/IMSDK.h>

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    [IMSDKTest printTest];

    [self creatIMSDKView];
}

- (void)creatIMSDKView {
    IMSDKView *sdkView = [[IMSDKView alloc] initWithFrame:CGRectMake(20, 20, 100, 100)];
    [self.view addSubview:sdkView];
}

@end
