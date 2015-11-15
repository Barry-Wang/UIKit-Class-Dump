//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSURL, UIImage;

__attribute__((visibility("hidden")))
@interface UIActivityItemURLRep : NSObject
{
    NSURL *_URL;
    UIImage *_thumbnail;
    int _attachmentURLType;
}

@property(nonatomic) int attachmentURLType; // @synthesize attachmentURLType=_attachmentURLType;
@property(retain, nonatomic) UIImage *thumbnail; // @synthesize thumbnail=_thumbnail;
@property(retain, nonatomic) NSURL *URL; // @synthesize URL=_URL;
- (id)scheme;
- (BOOL)isFileURL;
- (void)dealloc;

@end

