//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIKeyboardLayoutEmoji.h>

#import "UIGestureRecognizerDelegate.h"

@class UIButton, UIGestureRecognizer;

__attribute__((visibility("hidden")))
@interface UIKeyboardLayoutEmoji_iPad : UIKeyboardLayoutEmoji <UIGestureRecognizerDelegate>
{
    UIGestureRecognizer *_longPressForMenu;
    UIGestureRecognizer *_translateRecognizer;
    UIButton *_spaceButton;
    UIButton *_dismissButton;
    struct CGRect _spaceFrame;
    struct CGRect _dismissFrame;
}

@property(readonly) struct CGRect dismissFrame; // @synthesize dismissFrame=_dismissFrame;
@property(readonly) struct CGRect spaceFrame; // @synthesize spaceFrame=_spaceFrame;
- (void)updateControlButtonImages;
- (void)layoutSubviews;
- (struct CGRect)categoryFrame;
- (void)generateControlKeyRects;
- (struct CGSize)rightControlSize;
- (struct CGSize)leftControlSize;
- (void)dismissTranslateDetected:(id)arg1;
- (void)showSplitControlMenu:(id)arg1;
- (void)dismiss;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)spaceUp;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end
