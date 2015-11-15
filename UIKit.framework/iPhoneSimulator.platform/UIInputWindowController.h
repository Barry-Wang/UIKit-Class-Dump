//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UIGestureRecognizerDelegate.h"
#import "UIInputViewAnimationHost.h"
#import "UIKeyboardKeyplaneTransitionDelegate.h"
#import "UIScrollViewIntersectionDelegate.h"
#import "_UIRemoteKeyboardViewSource.h"

@class CADisplayLink, NSArray, NSLayoutConstraint, NSMutableArray, NSMutableDictionary, NSString, UIInputViewController, UIInputViewPlacementTransition, UIInputViewSet, UIInputViewSetNotificationInfo, UIInputViewSetPlacement, UIKBInputBackdropView, UIPanGestureRecognizer, UIScrollView, UIView;

__attribute__((visibility("hidden")))
@interface UIInputWindowController : UIViewController <UIScrollViewIntersectionDelegate, UIKeyboardKeyplaneTransitionDelegate, UIGestureRecognizerDelegate, UIInputViewAnimationHost, _UIRemoteKeyboardViewSource>
{
    NSMutableArray *_animationStyleStack;
    _Bool _suppressedCallbacks;
    _Bool _suppressedNotifications;
    _Bool _isChangingPlacement;
    _Bool _isChangingInputViews;
    _Bool _requiresConstraintUpdate;
    int _hiddenCount;
    unsigned long long _rotationState;
    NSMutableDictionary *_inputViewEdgeConstraints;
    NSMutableDictionary *_accessoryViewEdgeConstraints;
    NSMutableDictionary *_inputBackdropViewEdgeConstraints;
    NSMutableDictionary *_accessoryBackdropViewEdgeConstraints;
    UIView *_preRotationSnapshot;
    struct CGSize _preRotationInputViewSize;
    struct CGSize _preRotationInputAccessoryViewSize;
    struct CGAffineTransform _preRotationInputViewTransform;
    struct CGAffineTransform _preRotationInputAccessoryViewTransform;
    _Bool _isTranslating;
    _Bool _isSplitting;
    _Bool _splitLockState;
    CADisplayLink *_displayLink;
    double _lastBounceTime;
    double _lastTranslationNotificationTime;
    double _targetTranslation;
    double _initialTranslation;
    double _translationVelocity;
    UIPanGestureRecognizer *_translateRecognizer;
    CDUnknownBlockType _bounceCompletionBlock;
    SEL _interactiveTransitionCleanupSelector;
    UIScrollView *_scrollViewForTransition;
    _Bool _scrollViewTransitionFinishing;
    _Bool _scrollViewShowsHorizontalScrollIndicator;
    struct CGPoint _scrollViewTransitionPreviousPoint;
    UIInputViewSetNotificationInfo *_scrollViewNotificationInfo;
    struct CGRect _preLayoutHostViewFrame;
    _Bool _didOverridePreLayoutHostViewFrame;
    _Bool _didPostLayoutNotification;
    UIInputViewSetNotificationInfo *_keyboardHeightChangeNotificationInfo;
    _Bool _wasOnScreen;
    NSString *_lastKeyboardID;
    _Bool _shouldNotifyRemoteKeyboards;
    UIView *_hostView;
    UIInputViewSet *_inputViewSet;
    UIInputViewSetPlacement *_placement;
    UIInputViewController *_inputViewController;
    UIInputViewController *_inputAccessoryViewController;
    UIKBInputBackdropView *_inputBackdropView;
    UIKBInputBackdropView *_inputAccessoryBackdropView;
    NSArray *_visibilityConstraints;
    NSLayoutConstraint *_verticalVisibilityConstraint;
    UIInputViewSetPlacement *_postRotationPlacement;
    UIInputViewSet *_postRotationInputViewSet;
    UIInputViewSetNotificationInfo *_templateNotificationInfo;
    UIInputViewPlacementTransition *_currentTransition;
    id <_UIRemoteKeyboardControllerDelegate> _controllerDelegate;
    NSLayoutConstraint *_inputViewHeightConstraint;
    NSLayoutConstraint *_accessoryViewHeightConstraint;
}

+ (id)tranformedUserInfoForNotificationName:(id)arg1 userInfo:(id)arg2;
+ (_Bool)_shouldForwardViewWillTransitionToSize;
+ (_Bool)_doesOverrideLegacyFullScreenLayout;
@property(retain, nonatomic) NSLayoutConstraint *accessoryViewHeightConstraint; // @synthesize accessoryViewHeightConstraint=_accessoryViewHeightConstraint;
@property(retain, nonatomic) NSLayoutConstraint *inputViewHeightConstraint; // @synthesize inputViewHeightConstraint=_inputViewHeightConstraint;
@property(retain, nonatomic) id <_UIRemoteKeyboardControllerDelegate> controllerDelegate; // @synthesize controllerDelegate=_controllerDelegate;
@property(nonatomic) _Bool shouldNotifyRemoteKeyboards; // @synthesize shouldNotifyRemoteKeyboards=_shouldNotifyRemoteKeyboards;
@property(retain, nonatomic) UIInputViewPlacementTransition *currentTransition; // @synthesize currentTransition=_currentTransition;
@property(retain, nonatomic) UIInputViewSetNotificationInfo *templateNotificationInfo; // @synthesize templateNotificationInfo=_templateNotificationInfo;
@property(retain, nonatomic) UIInputViewSet *postRotationInputViewSet; // @synthesize postRotationInputViewSet=_postRotationInputViewSet;
@property(retain, nonatomic) UIInputViewSetPlacement *postRotationPlacement; // @synthesize postRotationPlacement=_postRotationPlacement;
@property(retain, nonatomic) NSLayoutConstraint *verticalVisibilityConstraint; // @synthesize verticalVisibilityConstraint=_verticalVisibilityConstraint;
@property(retain, nonatomic) NSArray *visibilityConstraints; // @synthesize visibilityConstraints=_visibilityConstraints;
@property(retain, nonatomic, setter=setInputAccessoryBackdropView:) UIKBInputBackdropView *_inputAccessoryBackdropView; // @synthesize _inputAccessoryBackdropView;
@property(retain, nonatomic, setter=setInputBackdropView:) UIKBInputBackdropView *_inputBackdropView; // @synthesize _inputBackdropView;
@property(retain, nonatomic) UIInputViewController *_inputAccessoryViewController; // @synthesize _inputAccessoryViewController;
@property(retain, nonatomic) UIInputViewController *_inputViewController; // @synthesize _inputViewController;
@property(nonatomic) UIInputViewSetPlacement *placement; // @synthesize placement=_placement;
@property(retain, nonatomic) UIInputViewSet *inputViewSet; // @synthesize inputViewSet=_inputViewSet;
@property(readonly, nonatomic) UIView *hostView; // @synthesize hostView=_hostView;
- (void)candidateBarWillChangeHeight:(double)arg1 withDuration:(double)arg2;
- (void)setInterfaceAutorotationDisabled:(_Bool)arg1;
- (void)keyboardHeightChangeDone;
- (void)prepareKeyboardHeightChangeWithDelta:(double)arg1 duration:(double)arg2;
- (void)extendKeyboardBackdropHeight:(double)arg1 withDuration:(double)arg2;
- (void)animateAccessoryViewVisibility:(_Bool)arg1 withDuration:(double)arg2;
- (_Bool)isTranslating;
- (_Bool)isChangingPlacement;
- (_Bool)isRotating;
- (_Bool)isUndocked;
- (_Bool)isOnScreen;
- (struct CGRect)visibleFrame;
- (id)inputViewSnapshotOfView:(id)arg1 afterScreenUpdates:(_Bool)arg2;
- (void)setInputView:(id)arg1 accessoryView:(id)arg2;
- (void)setRotationAwarePlacement:(id)arg1;
- (void)setPlacement:(id)arg1 starting:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (unsigned long long)changeToInputViewSet:(id)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)initializeTranslateGestureRecognizer;
- (void)translateToPlacement:(id)arg1;
- (void)window:(id)arg1 statusBarWillChangeFromHeight:(double)arg2 toHeight:(double)arg3;
- (void)_finishRotationFromInterfaceOrientation:(long long)arg1;
- (void)_rotateToOrientation:(long long)arg1 duration:(double)arg2;
- (void)_prepareForRotationToOrientation:(long long)arg1 duration:(double)arg2;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)_getRotationContentSettings:(CDStruct_8bdd0ba6 *)arg1;
- (_Bool)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
- (id)_viewControllerForAutorotation;
- (id)windowForAutorotation;
- (void)clearInteractiveTransitionStateIfNecessary;
- (void)setInputViewsHidden:(_Bool)arg1;
- (void)updateToPlacement:(id)arg1 withNormalAnimationsAndNotifications:(_Bool)arg2;
- (struct CGRect)transitioningFrame;
- (id)transitioningView;
- (void)syncToExistingAnimations;
- (void)moveFromPlacement:(id)arg1 toPlacement:(id)arg2 starting:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
- (_Bool)mergeTransitionIfNecessaryWithTransition:(id)arg1;
- (void)performOperations:(CDUnknownBlockType)arg1 withAnimationStyle:(id)arg2;
- (id)nextAnimationStyle;
- (void)popAnimationStyle;
- (void)pushAnimationStyle:(id)arg1;
- (void)checkPlaceholdersForRemoteKeyboards;
- (void)viewDidLayoutSubviews;
- (void)viewWillLayoutSubviews;
- (void)_forcePreLayoutHostViewFrame;
- (void)updateAppearStatesForPlacement:(id)arg1 start:(_Bool)arg2 animated:(_Bool)arg3;
- (void)changeChild:(unsigned long long)arg1 toAppearState:(int)arg2 animated:(_Bool)arg3;
- (int)appearStateForChild:(unsigned long long)arg1 placement:(id)arg2 start:(_Bool)arg3;
- (void)postEndNotifications:(unsigned long long)arg1 withInfo:(id)arg2;
- (void)postStartNotifications:(unsigned long long)arg1 withInfo:(id)arg2;
- (id)initialNotificationInfo;
- (void)updateVisibilityConstraintsForPlacement:(id)arg1;
- (void)updateViewConstraints;
- (void)updateConstraintInsets;
- (void)updateViewSizingConstraints;
- (void)clearViewSizingConstraints:(unsigned long long)arg1;
- (struct UIEdgeInsets)_aligningInsetsForChildInputViewController:(id)arg1;
- (_Bool)_subviewUsesClassicLayout:(id)arg1;
- (void)rebuildConstraints:(id)arg1 forView:(id)arg2 toMatchView:(id)arg3;
- (id)viewMatchingConstraintForAttribute:(long long)arg1 primaryView:(id)arg2 secondaryView:(id)arg3;
- (void)performWithSafeTransitionFrames:(CDUnknownBlockType)arg1;
- (void)performOperations:(CDUnknownBlockType)arg1 withTemplateNotificationInfo:(id)arg2;
- (void)performWithoutCallbacksOrNotifications:(CDUnknownBlockType)arg1;
- (void)performWithoutAppearanceCallbacks:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) UIView *_inputAccessoryView;
@property(readonly, nonatomic) UIView *_inputView;
- (void)didSuspend:(id)arg1;
- (void)willResume:(id)arg1;
- (void)registerPowerLogEvent:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (void)didReceiveMemoryWarning;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)scrollView:(id)arg1 didFinishPanGesture:(id)arg2;
- (void)scrollView:(id)arg1 didPanWithGesture:(id)arg2;
- (void)completeKeyboardDismiss:(unsigned long long)arg1;
- (void)finishScrollViewTransition;
- (void)hideScrollViewHorizontalScrollIndicator:(_Bool)arg1;
- (void)updateScrollViewContentInsetBottom:(double)arg1;
- (void)fillInNotificationInfo:(id)arg1 forDismissMode:(unsigned long long)arg2;
- (unsigned long long)keyboardDismissModeForPublicMode:(long long)arg1;
- (void)_updateBackdropViews;
- (void)transitionDidFinish:(_Bool)arg1;
- (void)finishTransitionWithCompletion:(CDUnknownBlockType)arg1;
- (void)updateProgress:(double)arg1 startHeight:(double)arg2 endHeight:(double)arg3;
- (void)prepareForTransition;
- (void)setAccessoryViewVisible:(_Bool)arg1 delay:(double)arg2;
- (void)undock;
- (void)dock;
- (void)_updateBounceAnimation:(id)arg1;
- (void)invalidateDisplayLink;
- (void)bounceAnimationDidFinish;
- (void)translateDetected:(id)arg1;
- (int)_clipCornersOfView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

