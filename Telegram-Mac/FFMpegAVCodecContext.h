//
//  FFMpegAVCodecContext.h
//  Telegram
//
//  Created by Mikhail Filimonov on 05/04/2019.
//  Copyright © 2019 Telegram. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "FFMpegAVSampleFormat.h"

NS_ASSUME_NONNULL_BEGIN

@class FFMpegAVCodec;
@class FFMpegAVFrame;

@interface FFMpegAVCodecContext : NSObject

- (instancetype)initWithCodec:(FFMpegAVCodec *)codec;

- (void *)impl;
- (int32_t)channels;
- (int32_t)sampleRate;
- (FFMpegAVSampleFormat)sampleFormat;

- (bool)open;
- (bool)receiveIntoFrame:(FFMpegAVFrame *)frame;
- (void)flushBuffers;

@end

NS_ASSUME_NONNULL_END
