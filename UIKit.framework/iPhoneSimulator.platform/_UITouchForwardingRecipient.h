//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIResponder;

__attribute__((visibility("hidden")))
@interface _UITouchForwardingRecipient : NSObject
{
    UIResponder *fromResponder;
    UIResponder *responder;
    long long recordedPhase;
    long long autocompletedPhase;
}

@property(nonatomic) long long autocompletedPhase; // @synthesize autocompletedPhase;
@property(nonatomic) long long recordedPhase; // @synthesize recordedPhase;
@property(nonatomic) UIResponder *responder; // @synthesize responder;
@property(nonatomic) UIResponder *fromResponder; // @synthesize fromResponder;
- (id)description;
- (id)initWithResponder:(id)arg1 fromResponder:(id)arg2;

@end

