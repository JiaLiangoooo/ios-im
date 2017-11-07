//
//  IMSDKTest.m
//  IMSDK
//
//  Created by Deemo on 2017/11/6.
//  Copyright © 2017年 ICSOC. All rights reserved.
//

#import "IMSDKTest.h"
#import "AFNetworking.h"

@implementation IMSDKTest

+ (void)printTest {
    NSLog(@"IMSDK Test");
    NSURLSessionConfiguration *configuration = [NSURLSessionConfiguration defaultSessionConfiguration];
    AFURLSessionManager *manager = [[AFURLSessionManager alloc] initWithSessionConfiguration:configuration];
    
    NSURL *URL = [NSURL URLWithString:@"https://www.baidu.com"];
    NSURLRequest *request = [NSURLRequest requestWithURL:URL];
    
    NSURLSessionDataTask *dataTask = [manager dataTaskWithRequest:request completionHandler:^(NSURLResponse *response, id responseObject, NSError *error) {
        if (error) {
            NSLog(@"Error: %@", error);
        } else {
            NSLog(@"%@ %@", response, responseObject);
        }
    }];
    [dataTask resume];
    
}
@end
