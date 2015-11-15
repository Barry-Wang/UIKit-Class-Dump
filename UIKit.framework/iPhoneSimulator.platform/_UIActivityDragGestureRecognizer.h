//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UILongPressGestureRecognizer.h>

#import "UIAutoscrollDelegate.h"
#import "_UIScrollNotification.h"

@class NSString, UIAutoscroll, UIScrollView;

__attribute__((visibility("hidden")))
@interface _UIActivityDragGestureRecognizer : UILongPressGestureRecognizer <UIAutoscrollDelegate, _UIScrollNotification>
{
    UIScrollView *_targetScrollView;
    UIAutoscroll *_autoscroll;
    struct UIEdgeInsets _draggingInsets;
}

@property(retain, nonatomic) UIAutoscroll *autoscroll; // @synthesize autoscroll=_autoscroll;
@property(retain, nonatomic) UIScrollView *targetScrollView; // @synthesize targetScrollView=_targetScrollView;
@property(nonatomic) struct UIEdgeInsets draggingInsets; // @synthesize draggingInsets=_draggingInsets;
- (int)autoscrollDirectionsForPoint:(struct CGPoint)arg1 inView:(id)arg2;
- (void)cancelAutoscroll;
- (void)beginAutoscrollAndUpdateDirectionIfNeeded;
- (void)_updateBackdropMaskViewsInScrollView:(id)arg1;
- (void)_didScroll;
- (void)autoscrollWillNotStart;
- (void)updateAutoscroll:(id)arg1;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)reset;
- (void)setState:(long long)arg1;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

