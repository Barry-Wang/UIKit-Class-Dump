//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface UIActivity : NSObject
{
    CDUnknownBlockType _activityCompletionHandler;
}

+ (id)_activityImageForPrerenderedImage:(id)arg1;
+ (id)_activityGenericImage:(id)arg1;
+ (id)_activityFunctionImage:(id)arg1;
+ (id)_activityImageForApplication:(id)arg1;
@property(copy, nonatomic) CDUnknownBlockType activityCompletionHandler; // @synthesize activityCompletionHandler=_activityCompletionHandler;
- (void)activityDidFinish:(BOOL)arg1;
- (void)performActivity;
- (id)activityViewController;
- (void)prepareWithActivityItems:(id)arg1;
- (BOOL)canPerformWithActivityItems:(id)arg1;
- (id)activityImage;
- (id)activityTitle;
- (id)activityType;
- (void)dealloc;
- (void)_setSubject:(id)arg1;
- (BOOL)_dismissActivityFromViewController:(id)arg1 animated:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (BOOL)_presentActivityOnViewController:(id)arg1 animated:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_cleanup;
- (id)_embeddedActivityViewController;
- (void)_setActivityCompletionHandler:(CDUnknownBlockType)arg1;
- (BOOL)_canAdjustOrder;
- (id)_beforeActivity;
- (id)_activityImage;
- (BOOL)_canPerformWithSuppliedActivityItems:(id)arg1;

@end
