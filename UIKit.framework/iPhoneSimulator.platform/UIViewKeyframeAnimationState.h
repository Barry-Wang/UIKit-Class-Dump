//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIViewAnimationState.h>

@class NSMutableDictionary, NSMutableSet;

__attribute__((visibility("hidden")))
@interface UIViewKeyframeAnimationState : UIViewAnimationState
{
    double _frameDuration;
    double _frameStartTime;
    long long _calculationMode;
    NSMutableSet *_keyframeLayers;
    NSMutableDictionary *_keyframeLayersForCurrentKeyFrameDict;
    _Bool _inFrame;
}

- (void)cleanupTrackedLayers;
- (void)dealloc;
- (void)pop;
- (void)addKeyframeWithRelativeStartTime:(double)arg1 relativeDuration:(double)arg2 animations:(CDUnknownBlockType)arg3;
- (id)actionForLayer:(id)arg1 forKey:(id)arg2 forView:(id)arg3;
- (void)setupWithDuration:(double)arg1 delay:(double)arg2 view:(id)arg3 options:(unsigned long long)arg4 factory:(id)arg5 parentState:(id)arg6 start:(CDUnknownBlockType)arg7 completion:(CDUnknownBlockType)arg8;
- (id)init;

@end
