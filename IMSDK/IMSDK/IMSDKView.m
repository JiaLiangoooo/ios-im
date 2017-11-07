//
//  IMSDKView.m
//  IMSDK
//
//  Created by Deemo on 2017/11/6.
//  Copyright © 2017年 ICSOC. All rights reserved.
//

#import "IMSDKView.h"
#import "AFNetworking.h"

@interface IMSDKView()

@property (strong, nonatomic) UIImageView *imageView;

@end

@implementation IMSDKView

- (instancetype)initWithFrame:(CGRect)frame
{
    self = [super initWithFrame:frame];
    if (self) {
        self.imageView = [[UIImageView alloc] initWithFrame:self.bounds];
        self.imageView.autoresizingMask = UIViewAutoresizingFlexibleWidth | UIViewAutoresizingFlexibleHeight;
        self.imageView.image = [UIImage imageNamed:@"IMSDK.bundle/ICON.png"];
        [self addSubview:self.imageView];
    }
    return self;
}

@end
