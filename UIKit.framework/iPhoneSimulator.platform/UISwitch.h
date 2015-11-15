//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIControl.h>

#import "NSCoding.h"
#import "UIGestureRecognizerDelegate.h"

@class NSString, UIColor, UIImage, UILongPressGestureRecognizer, UIPanGestureRecognizer, UIView<_UISwitchInternalViewProtocol>;

@interface UISwitch : UIControl <UIGestureRecognizerDelegate, NSCoding>
{
    UILongPressGestureRecognizer *_pressGesture;
    UIPanGestureRecognizer *_panGesture;
    UIView<_UISwitchInternalViewProtocol> *_control;
    _Bool _onStateChangedByLongPressGestureRecognizer;
    _Bool _onStateChangedByPanGestureRecognizer;
    _Bool _on;
    double _enabledAlpha;
}

+ (Class)_internalViewClass;
@property(nonatomic, getter=isOn) _Bool on; // @synthesize on=_on;
@property(nonatomic) double enabledAlpha; // @synthesize enabledAlpha=_enabledAlpha;
@property(nonatomic, getter=_alwaysShowOnOffLabel, setter=_setAlwaysShowsOnOffLabel:) _Bool alwaysShowOnOffLabel;
- (void)_populateArchivedSubviews:(id)arg1;
@property(retain, nonatomic) UIImage *onImage;
@property(retain, nonatomic) UIImage *offImage;
@property(retain, nonatomic) UIColor *thumbTintColor;
@property(retain, nonatomic) UIColor *tintColor;
@property(retain, nonatomic) UIColor *onTintColor;
- (id)_onTintColor;
- (void)_setOnTintColor:(id)arg1;
@property(retain, nonatomic, getter=_onColor, setter=_setOnColor:) UIColor *onColor;
- (void)setEnabled:(_Bool)arg1;
- (void)setAlpha:(double)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGSize)_intrinsicSizeWithinSize:(struct CGSize)arg1;
- (struct UIEdgeInsets)alignmentRectInsets;
- (_Bool)_contentHuggingDefault_isUsuallyFixedHeight;
- (_Bool)_contentHuggingDefault_isUsuallyFixedWidth;
- (void)_onAnimationDidStop:(id)arg1 finished:(id)arg2 context:(void *)arg3;
- (void)setOn:(_Bool)arg1 animated:(_Bool)arg2;
- (void)dealloc;
- (void)_animateToOn:(_Bool)arg1 withDuration:(double)arg2 sendAction:(_Bool)arg3;
- (void)encodeWithCoder:(id)arg1;
- (_Bool)_shouldAlterCodedFrame;
- (void)_encodeFrameWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;
- (void)_handleLongPressNL:(id)arg1;
- (void)_handleTapNL:(id)arg1;
- (void)_handlePanNL:(id)arg1;
- (_Bool)_handleTranslationInPanGestureRecognizer:(id)arg1;
- (_Bool)_gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)_commonInitNewLookNeue1;
- (void)_commonInitNewLook;
- (_Bool)_useOldSize;
- (void)_setKnobBounceMass:(double)arg1;
- (double)_knobBounceMass;
- (void)_setKnobBounceStiffness:(double)arg1;
- (double)_knobBounceStiffness;
- (void)_setKnobBounceDamping:(double)arg1;
- (double)_knobBounceDamping;
- (void)_setKnobBounceDuration:(double)arg1;
- (double)_knobBounceDuration;
- (void)_setPressed:(_Bool)arg1 on:(_Bool)arg2 animated:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)setAlternateColors:(_Bool)arg1;
- (id)_scriptingInfo;
- (_Bool)isElementAccessibilityExposedToInterfaceBuilder;
- (unsigned long long)defaultAccessibilityTraits;
- (_Bool)isAccessibilityElementByDefault;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

