//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface MeCardCache : NSObject
{
    void *_me;
}

+ (void)provideMeCardIfAvailableToBlock:(CDUnknownBlockType)arg1;
+ (void)provideMeCardToBlock:(CDUnknownBlockType)arg1;
+ (void)_provideMeCardIfAvailableToBlock:(CDUnknownBlockType)arg1 otherwiseCompleteWithBlock:(CDUnknownBlockType)arg2;
+ (id)sharedCache;
- (void *)copyMeRecord;
- (void)setMeRecord:(void *)arg1;
- (void)_addressBookChanged:(id)arg1;
- (void)_requestMeCardWithBlock:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)init;

@end
