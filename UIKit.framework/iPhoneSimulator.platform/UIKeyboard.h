//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIKeyboardImplGeometryDelegate.h"

@class UITextInputTraits;

@interface UIKeyboard : UIView <UIKeyboardImplGeometryDelegate>
{
    UIView *m_snapshot;
    UITextInputTraits *m_defaultTraits;
    _Bool m_typingDisabled;
    _Bool m_minimized;
    _Bool m_respondingToImplGeometryChange;
    long long m_orientation;
    long long m_idiom;
    _Bool m_hasExplicitOrientation;
}

+ (_Bool)splitKeyboardEnabled;
+ (_Bool)isInHardwareKeyboardMode;
+ (struct CGSize)keyboardSizeForInterfaceOrientation:(long long)arg1;
+ (struct CGSize)sizeForInterfaceOrientation:(long long)arg1;
+ (_Bool)shouldMinimizeForHardwareKeyboard;
+ (_Bool)respondsToProxGesture;
+ (_Bool)isOnScreen;
+ (struct CGRect)defaultFrameForInterfaceOrientation:(long long)arg1;
+ (struct CGSize)defaultSizeForInterfaceOrientation:(long long)arg1;
+ (struct CGSize)defaultSize;
+ (void)removeAllDynamicDictionaries;
+ (void)initImplementationNow;
+ (void)clearActiveForScreen:(id)arg1;
+ (void)makeKeyboardActive:(id)arg1 forScreen:(id)arg2;
+ (id)activeKeyboardForScreen:(id)arg1;
+ (void)_clearActiveKeyboard;
+ (id)activeKeyboard;
@property(nonatomic) long long keyboardIdiom; // @synthesize keyboardIdiom=m_idiom;
- (void)_resizeForKeyplaneSize:(struct CGSize)arg1 splitWidthsChanged:(_Bool)arg2;
@property(nonatomic) _Bool showsCandidatesInline;
- (_Bool)canDismiss;
- (void)implBoundsHeightChangeDone:(double)arg1 suppressNotification:(_Bool)arg2;
- (void)prepareForImplBoundsHeightChange:(double)arg1 suppressNotification:(_Bool)arg2;
- (struct UIPeripheralAnimationGeometry)geometryForImplHeightDelta:(double)arg1;
- (void)keyboardMinMaximized:(id)arg1 finished:(id)arg2 context:(id)arg3;
@property(nonatomic, getter=isMinimized) _Bool minimized;
- (void)maximize;
- (void)minimize;
- (void)_setPasscodeOutlineAlpha:(double)arg1;
- (void)_setRenderConfig:(id)arg1;
- (id)targetWindow;
- (void)responseContextDidChange;
- (void)setCorrectionLearningAllowed:(_Bool)arg1;
- (struct UIPeripheralAnimationGeometry)geometryForMinimize:(_Bool)arg1;
- (void)syncMinimizedStateToHardwareKeyboardAttachedState;
- (_Bool)shouldSaveMinimizationState;
- (void)setShowPredictionBar:(_Bool)arg1;
- (_Bool)showPredictionBar;
- (void)setDisableInteraction:(_Bool)arg1;
- (_Bool)disableInteraction;
- (void)setCursorLocation:(long long)arg1;
- (long long)cursorLocation;
- (void)_moveWithEvent:(id)arg1;
- (void)_wheelChangedWithEvent:(id)arg1;
- (void)remoteControlReceivedWithEvent:(id)arg1;
- (void)_physicalButtonsCancelled:(id)arg1 withEvent:(id)arg2;
- (void)_physicalButtonsEnded:(id)arg1 withEvent:(id)arg2;
- (void)_physicalButtonsBegan:(id)arg1 withEvent:(id)arg2;
- (_Bool)canHandleEvent:(id)arg1;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (int)textEffectsVisibilityLevel;
- (void)displayLayer:(id)arg1;
- (void)setNeedsDisplay;
- (void)_deactivateForBackgrounding;
- (void)deactivate;
- (_Bool)isActive;
- (void)activate;
@property(nonatomic) _Bool typingEnabled;
- (void)takeSnapshot;
- (void)clearSnapshot;
- (id)delegate;
- (void)setDefaultTextInputTraits:(id)arg1;
- (id)defaultTextInputTraits;
- (void)setReturnKeyEnabled:(_Bool)arg1;
- (_Bool)returnKeyEnabled;
@property(nonatomic) _Bool caretVisible;
@property(nonatomic) _Bool caretBlinks;
- (_Bool)hasAutocorrectPrompt;
- (void)acceptAutocorrection;
- (void)removeAutocorrectPrompt;
- (void)geometryChangeDone:(_Bool)arg1;
- (void)prepareForGeometryChange;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (_Bool)pointInside:(struct CGPoint)arg1 forEvent:(struct __GSEvent *)arg2;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)setOrientation:(long long)arg1;
- (long long)interfaceOrientation;
- (void)updateLayout;
- (void)setFrame:(struct CGRect)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)didMoveToWindow;
- (void)willMoveToWindow:(id)arg1;
- (void)clearActivePerScreenIfNeeded;
- (_Bool)isActivePerScreen;
- (void)dealloc;
- (id)initLazily;
- (id)initWithDefaultSize;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)_initWithFrame:(struct CGRect)arg1 lazily:(_Bool)arg2;
- (void)autoAdjustOrientationForSize:(struct CGSize)arg1;
- (void)autoAdjustOrientation;
- (void)manualKeyboardWasOrderedOut;
- (void)manualKeyboardWillBeOrderedOut;
- (void)manualKeyboardWasOrderedIn;
- (void)manualKeyboardWillBeOrderedIn;
- (long long)_positionInCandidateList:(id)arg1;
- (_Bool)_hasCandidates;
- (void)_acceptCurrentCandidate;
- (id)_getAutocorrection;
- (void)_setAutocorrects:(_Bool)arg1;
- (void)_setInputMode:(id)arg1;
- (id)_typeCharacter:(id)arg1 withError:(struct CGPoint)arg2 shouldTypeVariants:(_Bool)arg3 baseKeyForVariants:(_Bool)arg4;
- (id)_touchPoint:(struct CGPoint)arg1;
- (void)_setSplit:(_Bool)arg1;
- (void)_setUndocked:(_Bool)arg1;
- (void)_changeToKeyplane:(id)arg1;
- (id)_keyplaneNamed:(id)arg1;
- (id)_keyplaneForKey:(id)arg1;
- (id)_baseKeyForRepresentedString:(id)arg1;
- (id)_getLocalizedInputMode;
- (id)_getCurrentKeyboardName;
- (id)_getCurrentKeyplaneName;
- (_Bool)_isAutomaticKeyboard;

@end

