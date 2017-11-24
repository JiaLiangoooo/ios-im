//
//  IMSDKMessageTest.m
//  IMSDK
//
//  Created by Deemo on 2017/11/24.
//  Copyright © 2017年 ICSOC. All rights reserved.
//

#import "IMSDKMessageTest.h"
#import "GPBArray.h"
#import "Message.pbobjc.h"
#import "GPBMessage.h"

@implementation IMSDKMessageTest

NSData *messageData;

- (void)sendMessage {
    SendMessage *message = [SendMessage new];
    message.appKey = @"1";
    message.from = @"2";
    message.to = @"3";
    message.chatType = 4;
    message.msgType = 5;
    message.createTime = 6;
    message.content = @"7";
    message.audioDuration = 8;
    message.thumbnail = @"9";
    message.sourceType = 10;
    message.sequence = 11;
    message.id_p = 12;
    message.status = 13;
    
    messageData = message.data;
    NSLog(@"sendMessage:__%@ \t data:__ %@ \t data_length__:%ld",message, messageData,(unsigned long)messageData.length);
}

- (void)getMessage {
    NSError *error;
    SendMessage *message = [SendMessage parseFromData:messageData error:&error];
    message.id_p = -12;
    NSLog(@"getMessage:__%@ \t data:__ %@ \t data_length__:%ld",message, messageData,(unsigned long)messageData.length);
}

@end
