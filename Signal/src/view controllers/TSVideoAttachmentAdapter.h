//
//  TSAttachementAdapter.h
//  Signal
//
//  Created by Frederic Jacobs on 17/12/14.
//  Copyright (c) 2014 Open Whisper Systems. All rights reserved.
//

#import <JSQMessagesViewController/JSQVideoMediaItem.h>
#import "TSAttachmentStream.h"
#import <Foundation/Foundation.h>

@interface TSVideoAttachmentAdapter : JSQVideoMediaItem

@property NSString *attachmentId;
@property (nonatomic,strong) NSString* contentType;

- (instancetype)initWithAttachment:(TSAttachmentStream*)attachment;

- (BOOL)isImage;
- (BOOL)isAudio;
- (BOOL)isVideo;



@end