//
//  FFMpegAVIOContext.h
//  Telegram
//
//  Created by Mikhail Filimonov on 05/04/2019.
//  Copyright © 2019 Telegram. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

#define FFMPEG_AVSEEK_SIZE 0x10000

@interface FFMpegAVIOContext : NSObject

- (instancetype _Nullable)initWithBufferSize:(int32_t)bufferSize opaqueContext:(void * const)opaqueContext readPacket:(int (*)(void * _Nullable opaque, uint8_t * _Nullable buf, int buf_size))readPacket seek:(int64_t (*)(void * _Nullable opaque, int64_t offset, int whence))seek;

- (void *)impl;

@end

NS_ASSUME_NONNULL_END
