//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "NSCoding.h"
#import "UIBarPositioning.h"
#import "UIGestureRecognizerDelegate.h"
#import "UIStatusBarTinting.h"
#import "_UIBarPositioningInternal.h"
#import "_UIBasicAnimationFactory.h"
#import "_UIShadowedView.h"

@class NSArray, NSDictionary, NSMutableArray, NSString, UIColor, UIImage, UIImageView, UINavigationItem, UISwipeGestureRecognizer, _UIViewControllerTransitionContext;

@interface UINavigationBar : UIView <UIGestureRecognizerDelegate, _UIShadowedView, _UIBasicAnimationFactory, UIStatusBarTinting, _UIBarPositioningInternal, NSCoding, UIBarPositioning>
{
    NSMutableArray *_itemStack;
    double _rightMargin;
    unsigned int _state;
    id _delegate;
    UIView *_backgroundView;
    UIView *_titleView;
    NSArray *_leftViews;
    NSArray *_rightViews;
    UIView *_prompt;
    UIView *_accessoryView;
    UIColor *_barTintColor;
    id _appearanceStorage;
    id _currentAlert;
    struct {
        unsigned int animate:1;
        unsigned int animationDisabledCount:10;
        unsigned int transitioningBarStyle:1;
        unsigned int newBarStyle:3;
        unsigned int transitioningToTranslucent:1;
        unsigned int barStyle:3;
        unsigned int barTranslucence:3;
        unsigned int disableLayout:1;
        unsigned int backPressed:1;
        unsigned int animatePromptChange:1;
        unsigned int pendingHideBackButton:1;
        unsigned int titleAutosizesToFit:1;
        unsigned int usingNewAPI:1;
        unsigned int forceFullHeightInLandscape:1;
        unsigned int isLocked:1;
        unsigned int shouldUpdatePromptAfterTransition:1;
        unsigned int crossfadeItems:1;
        unsigned int autoAdjustTitle:1;
        unsigned int isContainedInPopover:1;
        unsigned int needsDrawRect:1;
        unsigned int animationCleanupCancelled:1;
        unsigned int layoutInProgress:1;
        unsigned int dynamicDuration:1;
        unsigned int isInteractive:1;
        unsigned int cancelledTransition:1;
        unsigned int animationCount:4;
        unsigned int backgroundLayoutNeedsUpdate:1;
        unsigned int backgroundImageNeedsUpdate:1;
    } _navbarFlags;
    UISwipeGestureRecognizer *_popSwipeGestureRecognizer;
    UIImageView *_backIndicatorView;
    NSMutableArray *_slideTransitionClippingViews;
    _UIViewControllerTransitionContext *_navControllerAnimatingContext;
    _Bool _needsUpdateBackIndicatorImage;
    _Bool _wantsLetterpressContent;
    _Bool __condensed;
    long long _barPosition;
    double _requestedMaxBackButtonWidth;
    NSString *_backdropViewLayerGroupName;
    NSMutableArray *__animationIds;
}

+ (_Bool)_useCustomBackButtonAction;
+ (void)_setUseCustomBackButtonAction:(_Bool)arg1;
+ (void)_initializeForIdiom:(long long)arg1;
+ (void)setDefaultAnimationDuration:(double)arg1;
+ (id)defaultPromptFont;
+ (struct CGSize)defaultSizeWithPrompt;
+ (struct CGSize)defaultSize;
+ (struct CGSize)defaultSizeWithPromptForOrientation:(long long)arg1;
+ (struct CGSize)defaultSizeForOrientation:(long long)arg1;
+ (id)_statusBarBaseTintColorForStyle:(long long)arg1 translucent:(_Bool)arg2 tintColor:(id)arg3;
+ (id)_statusBarBaseTintColorForStyle:(long long)arg1 translucent:(_Bool)arg2 tintColor:(id)arg3 backgroundImage:(id)arg4 viewSize:(struct CGSize)arg5;
+ (id)_bottomColorForBackgroundImage:(id)arg1 viewSize:(struct CGSize)arg2;
@property(retain, nonatomic, setter=_setAnimationIds:) NSMutableArray *_animationIds; // @synthesize _animationIds=__animationIds;
@property(nonatomic, getter=_isCondensed, setter=_setCondensed:) _Bool _condensed; // @synthesize _condensed=__condensed;
@property(nonatomic, setter=_setWantsLetterpressContent:) _Bool _wantsLetterpressContent; // @synthesize _wantsLetterpressContent;
@property(retain, nonatomic, setter=_setBackdropViewLayerGroupName:) NSString *_backdropViewLayerGroupName; // @synthesize _backdropViewLayerGroupName;
@property(nonatomic, setter=_setRequestedMaxBackButtonWidth:) double _requestedMaxBackButtonWidth; // @synthesize _requestedMaxBackButtonWidth;
@property(nonatomic, setter=_setNeedsUpdateBackIndicatorImage:) _Bool _needsUpdateBackIndicatorImage; // @synthesize _needsUpdateBackIndicatorImage;
@property(readonly, nonatomic) long long barPosition; // @synthesize barPosition=_barPosition;
- (long long)_backgroundBackdropStyle;
- (void)_handlePopSwipe:(id)arg1;
- (_Bool)_gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)_shadowView;
- (void)_setAutoAdjustTitle:(_Bool)arg1;
- (void)_navBarButtonPressed:(id)arg1;
- (long long)_barStyle:(_Bool)arg1;
- (void)layoutSubviews;
- (double)_backIndicatorClippingMargin;
- (void)setNeedsLayout;
- (id)_itemStack;
- (void)_getTitleViewFrame:(struct CGRect *)arg1 leftViewFrames:(id)arg2 rightViewFrames:(id)arg3;
- (void)_getTitleViewFrame:(struct CGRect *)arg1 leftViewFrames:(id)arg2 rightViewFrames:(id)arg3 forItemAtIndex:(unsigned long long)arg4;
- (void)_getTitleViewFrame:(struct CGRect *)arg1 leftViewFrames:(id)arg2 rightViewFrames:(id)arg3 forItemAtIndex:(unsigned long long)arg4 returnedIdealWidthOfTextContent:(double *)arg5 availableLayoutWidthForTextContent:(double *)arg6 idealBackButtonWidth:(double *)arg7;
- (void)_fadeAllViewsIn;
- (void)_fadeViewsIn:(id)arg1;
- (void)_fadeAllViewsOut;
- (void)_fadeViewsOut:(id)arg1;
- (void)_fadeViewOut:(id)arg1;
- (void)_removeItemsFromSuperview:(id)arg1;
- (id)_allViews;
- (void)_startPopAnimationFromItems:(id)arg1 fromBarStyle:(long long)arg2 toItems:(id)arg3 toBarStyle:(long long)arg4;
- (void)_startPushAnimationFromItems:(id)arg1 fromBarStyle:(long long)arg2;
- (id)_timingFunctionForAnimationInView:(id)arg1 withKeyPath:(id)arg2;
- (id)_basicAnimationForView:(id)arg1 withKeyPath:(id)arg2;
- (void)_animateOldBackButtonView:(id)arg1 toNewBackButtonView:(id)arg2 duration:(double)arg3 initialFrameForIncomingView:(CDUnknownBlockType)arg4 destinationFrameForOutgoingView:(CDUnknownBlockType)arg5 animationCleanup:(CDUnknownBlockType)arg6;
- (double)_backTitleWidthOverTitleWidthForMatchingBackButtonView:(id)arg1 titleView:(id)arg2 withBackButtonWidth:(double)arg3;
- (void)_wrapView:(id)arg1 inClippingViewWithLeftBoundary:(double)arg2 rightBoundary:(double)arg3 leftMaskImage:(id)arg4 leftMaskIsChevron:(_Bool)arg5 rightMaskImage:(id)arg6;
- (void)_backgroundFadeDidFinish:(id)arg1 finished:(id)arg2 context:(id)arg3;
- (void)_startBarStyleAnimation:(long long)arg1 withTintColor:(id)arg2;
- (void)_crossFadeToBarBackgroundImageForItem:(id)arg1;
- (struct CGRect)_boundsForPrompt:(id)arg1 inRect:(struct CGRect)arg2 withFont:(id)arg3 barStyle:(long long)arg4;
- (void)_removeAccessoryView;
- (void)setTopItemAlpha:(double)arg1;
- (double)topItemAlpha;
- (struct CGRect)availableTitleArea;
- (void)_setVisualAltitudeBias:(struct CGSize)arg1;
- (void)_setVisualAltitude:(double)arg1;
- (void)setCenter:(struct CGPoint)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)_barSizeDidChangeAndSoDidHeight:(_Bool)arg1;
- (void)_layoutBackgroundViewConsideringAdaptiveBackdropAndChangedHeight:(_Bool)arg1;
- (long long)_barPosition;
- (void)_setBarPosition:(long long)arg1;
- (void)setAutoresizingMask:(unsigned long long)arg1;
- (void)_updateBackIndicatorImage;
- (id)_effectiveBackIndicatorTransitionMaskImage;
- (id)_effectiveBackIndicatorImage;
- (_Bool)_suppressBackIndicator;
- (void)_didChangeFromIdiom:(long long)arg1 onScreen:(id)arg2 traverseHierarchy:(_Bool)arg3;
- (void)_accessibilityButtonShapesDidChangeNotification:(id)arg1;
- (void)_accessibilityButtonShapesParametersDidChange;
- (void)_updateBackgroundImage;
- (void)showHideBackButtomAnimationDidStop:(id)arg1 finished:(id)arg2 context:(id)arg3;
- (void)showBackButton:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_hideButtonsAnimationDidStop:(id)arg1 finished:(id)arg2 context:(id)arg3;
- (void)hideButtons;
- (id)createButtonWithContents:(id)arg1 width:(double)arg2 barStyle:(long long)arg3 buttonStyle:(int)arg4 isRight:(_Bool)arg5;
- (void)setButton:(int)arg1 enabled:(_Bool)arg2;
- (void)_showLeftRightButtonsAnimationDidStop:(id)arg1 finished:(id)arg2 context:(id)arg3;
- (void)_setLeftViews:(id)arg1 rightViews:(id)arg2;
- (_Bool)_isIncomingButtonSameAsOutgoingButtonOnLeft:(_Bool)arg1;
- (void)_setLeftView:(id)arg1 rightView:(id)arg2;
- (void)showLeftButton:(id)arg1 withStyle:(int)arg2 rightButton:(id)arg3 withStyle:(int)arg4;
- (void)showButtonsWithLeft:(id)arg1 right:(id)arg2 leftBack:(_Bool)arg3;
- (void)showButtonsWithLeftTitle:(id)arg1 rightTitle:(id)arg2 leftBack:(_Bool)arg3;
- (void)showButtonsWithLeftTitle:(id)arg1 rightTitle:(id)arg2;
- (void)drawBackButtonBackgroundInRect:(struct CGRect)arg1 withStyle:(long long)arg2 pressed:(_Bool)arg3;
- (void)drawBackgroundInRect:(struct CGRect)arg1 withStyle:(long long)arg2;
- (unsigned int)animationDisabledCount;
- (_Bool)isAnimationEnabled;
- (void)enableAnimation;
- (void)disableAnimation;
- (struct CGRect)promptBounds;
- (id)promptView;
- (id)prompt;
- (void)setPrompt:(id)arg1;
- (void)updatePrompt;
- (id)currentBackButton;
- (_Bool)_shouldShowBackButtonForNavigationItem:(id)arg1;
- (id)_currentBackButtonForNthItemFromTop:(unsigned long long)arg1;
- (_Bool)_hasBackButton;
- (id)currentRightView;
- (id)_currentRightViews;
- (id)currentLeftView;
- (id)_currentLeftViews;
- (void)_decrementAnimationCountIfNecessary;
- (void)_incrementAnimationCountIfNecessary;
- (void)setTitleView:(id)arg1;
- (void)_updateTitleView;
- (_Bool)titleAutoresizesToFit;
- (void)setTitleAutoresizesToFit:(_Bool)arg1;
- (void)setRightMargin:(double)arg1;
- (id)_statusBarTintColor;
@property(retain, nonatomic) UIColor *barTintColor;
- (id)_effectiveBarTintColor;
- (void)_setIsContainedInPopover:(_Bool)arg1;
- (void)_propagateEffectiveBarTintColorWithPreviousColor:(id)arg1;
- (id)_titleTextColor;
- (id)buttonItemTextColor;
- (id)buttonItemShadowColor;
- (void)setForceFullHeightInLandscape:(_Bool)arg1;
- (_Bool)forceFullHeightInLandscape;
@property(nonatomic, getter=isTranslucent) _Bool translucent;
- (_Bool)_modernIsTranslucent;
- (_Bool)_hasInvisibleCustomBackgroundImage;
- (_Bool)_legacyIsTranslucent;
- (long long)_statusBarStyle;
@property(nonatomic) long long barStyle;
- (void)_setBarStyle:(long long)arg1;
- (void)_updateNavigationBarItemsForStyle:(long long)arg1;
- (void)_updateNavigationBarItemsForStyle:(long long)arg1 previousTintColor:(id)arg2;
- (void)willRemoveSubview:(id)arg1;
- (void)didAddSubview:(id)arg1;
- (void)_updateNavigationBarItem:(id)arg1 forStyle:(long long)arg2;
- (void)_updateNavigationBarItem:(id)arg1 forStyle:(long long)arg2 previousTintColor:(id)arg3;
@property(nonatomic) id <UINavigationBarDelegate> delegate;
- (void)removeConstraint:(id)arg1;
- (void)addConstraint:(id)arg1;
- (void)setTranslatesAutoresizingMaskIntoConstraints:(_Bool)arg1;
- (void)_didMoveFromWindow:(id)arg1 toWindow:(id)arg2;
- (void)_willMoveToWindow:(id)arg1;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)_handleMouseUpAtPoint:(struct CGPoint)arg1;
- (void)_popForTouchAtPoint:(struct CGPoint)arg1;
- (_Bool)_shouldPopForTouchAtPoint:(struct CGPoint)arg1;
- (void)_handleMouseDownAtPoint:(struct CGPoint)arg1;
- (void)_setBackIndicatorPressed:(_Bool)arg1 initialPress:(_Bool)arg2;
- (void)_evaluateBackIndicatorForHilightedState:(_Bool)arg1 ofBarButtonItem:(id)arg2 inNavigationItem:(id)arg3;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)hitTest:(struct CGPoint)arg1 forEvent:(struct __GSEvent *)arg2;
- (id)_commonHitTest:(struct CGPoint)arg1 forView:(id)arg2;
- (_Bool)_canHandleStatusBarTouchAtLocation:(struct CGPoint)arg1;
- (void)_navigationAnimationDidFinish:(id)arg1 finished:(id)arg2 context:(id)arg3;
- (void)_reenableUserInteractionWhenReadyWithContext:(id)arg1;
- (void)_reenableUserInteraction;
- (id)backButtonViewAtPoint:(struct CGPoint)arg1;
- (id)navigationItemAtPoint:(struct CGPoint)arg1;
- (void)_cancelInteractiveTransition;
- (void)_cancelInProgressPushOrPop;
- (id)navigationItems;
@property(copy, nonatomic) NSArray *items;
- (void)invalidateIntrinsicContentSize;
- (struct CGSize)intrinsicContentSize;
- (_Bool)_contentHuggingDefault_isUsuallyFixedHeight;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (long long)effectiveInterfaceOrientation;
- (void)setNavigationItems:(id)arg1;
- (void)_setupTopNavItem:(id)arg1 oldTopNavItem:(id)arg2;
- (void)_addItems:(id)arg1 withEffectiveDelegate:(id)arg2 transition:(int)arg3;
- (void)_addItem:(id)arg1 withEffectiveDelegate:(id)arg2 transition:(int)arg3;
- (void)_setItemsUpToItem:(id)arg1 transition:(id)arg2;
- (void)_setItems:(id)arg1 transition:(int)arg2;
- (void)_setItems:(id)arg1 transition:(int)arg2 reset:(_Bool)arg3;
- (_Bool)_didVisibleItemsChangeWithNewItems:(id)arg1 oldItems:(id)arg2;
- (void)setItems:(id)arg1 animated:(_Bool)arg2;
- (int)_transitionForOldItems:(id)arg1 newItems:(id)arg2;
@property(readonly, retain, nonatomic) UINavigationItem *backItem;
@property(readonly, retain, nonatomic) UINavigationItem *topItem;
- (void)popNavigationItem;
- (void)_prepareForPopAnimationWithNewTopItem:(id)arg1;
- (id)_popNavigationItemWithTransition:(int)arg1;
- (void)_pushNestedNavigationItem:(id)arg1;
- (void)_popNestedNavigationItem;
- (id)popNavigationItemAnimated:(_Bool)arg1;
- (void)pushNavigationItem:(id)arg1;
- (long long)_currentBarStyle;
- (void)_resetBackgroundImageAsNecessary;
- (_Bool)_wantsAdaptiveBackdrop;
- (_Bool)_wantsAdaptiveBackdropWhenNotHidden;
- (_Bool)_wantsAdaptiveBackdropForPalette;
- (_Bool)_barTranslucenceSuppressesAdaptiveBackdrop;
- (_Bool)_backgroundViewSuppressesAdaptiveBackdrop;
- (_Bool)_barStyleSuppressesAdaptiveBackdrop;
- (_Bool)_customBackgroundImageSuppressesAdaptiveBackdrop;
- (_Bool)_customBackgroundImageSuppressesAdaptiveBackdropForPalette;
- (void)_prepareForPushAnimationWithItems:(id)arg1;
- (void)_cancelInteractiveTransition:(double)arg1 completionSpeed:(double)arg2 completionCurve:(long long)arg3;
- (void)_finishInteractiveTransition:(double)arg1 completionSpeed:(double)arg2 completionCurve:(long long)arg3;
- (void)_updateInteractiveTransition:(double)arg1;
- (void)_updateInteractiveStatusBarTransitionPercent:(double)arg1 isFinished:(_Bool)arg2 didComplete:(_Bool)arg3 completionSpeed:(double)arg4 completionCurve:(long long)arg5;
- (void)_pushNavigationItem:(id)arg1 transition:(int)arg2;
- (void)_startInteractiveNavigationBarTransition;
- (void)pushNavigationItem:(id)arg1 animated:(_Bool)arg2;
- (void)_customViewChangedForButtonItem:(id)arg1;
- (void)setAccessoryView:(id)arg1 animate:(_Bool)arg2;
- (void)drawRect:(struct CGRect)arg1;
- (unsigned long long)_subviewIndexAboveBackground;
- (_Bool)_canDrawContent;
- (int)state;
- (id)_defaultTitleFontWithScaleAdjustment:(double)arg1;
- (id)_defaultTitleFont;
- (id)_defaultTitleFontFittingHeight:(double)arg1 withScaleAdjustment:(double)arg2;
- (void)setLocked:(_Bool)arg1;
- (_Bool)isLocked;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (void)_populateArchivedSubviews:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)_commonNavBarInit;
- (_Bool)_subclassImplementsDrawBackgroundInRect;
- (_Bool)_subclassImplementsDrawRect;
- (void)_updateOpacity;
- (struct CGSize)defaultSizeForOrientation:(long long)arg1;
- (double)defaultBackButtonAlignmentHeight;
- (void)setHidden:(_Bool)arg1;
- (id)_appearanceStorage;
- (_Bool)isMinibar;
- (void)_setActiveBarMetrics:(long long)arg1;
- (long long)_activeBarMetrics;
- (void)_setDefaultBarMetrics:(long long)arg1;
- (long long)_defaultBarMetrics;
- (void)_setDeferShadowToSearchBar:(_Bool)arg1;
- (_Bool)_deferShadowToSearchBar;
- (void)_setHidesShadow:(_Bool)arg1;
- (_Bool)_hidesShadow;
@property(retain, nonatomic) UIImage *shadowImage;
- (double)titleVerticalPositionAdjustmentForBarMetrics:(long long)arg1;
- (void)setTitleVerticalPositionAdjustment:(double)arg1 forBarMetrics:(long long)arg2;
@property(copy, nonatomic) NSDictionary *titleTextAttributes;
- (id)backgroundImageForBarPosition:(long long)arg1 barMetrics:(long long)arg2;
- (void)setBackgroundImage:(id)arg1 forBarPosition:(long long)arg2 barMetrics:(long long)arg3;
- (id)backgroundImageForBarMetrics:(long long)arg1;
- (void)setBackgroundImage:(id)arg1 forBarMetrics:(long long)arg2;
- (void)_effectiveBarTintColorDidChangeWithPreviousColor:(id)arg1;
@property(retain, nonatomic) UIColor *tintColor; // @dynamic tintColor;
- (void)_updatePaletteBackgroundIfNecessary;
- (void)_configurePaletteConstraintsIfNecessary;
- (void)_updateBackgroundColor;
- (void)_tintViewAppearanceDidChange;
- (id)_nthNavigationItemFromTop:(long long)arg1;
- (long long)_itemStackCount;
@property(nonatomic, setter=_setBackIndicatorLeftMargin:) double _backIndicatorLeftMargin;
- (double)_effectiveBackIndicatorLeftMargin;
@property(retain, nonatomic, setter=_setBackIndicatorImage:) UIImage *_backIndicatorImage;
@property(retain, nonatomic) UIImage *backIndicatorTransitionMaskImage;
@property(retain, nonatomic) UIImage *backIndicatorImage;
@property(readonly, nonatomic) double _heightIncludingBackground;
- (void)tintColorDidChange;
@property(readonly, nonatomic) long long _barTranslucence;
- (id)_effectiveDelegate;
- (void)_palette:(id)arg1 isAttaching:(_Bool)arg2 didComplete:(_Bool)arg3;
- (id)_backgroundViewForPalette:(id)arg1;
- (void)_setReversesButtonTextShadowOffsetWhenPressed:(_Bool)arg1;
- (void)_setButtonTextShadowOffset:(struct CGSize)arg1;
- (void)_setPressedButtonItemTextColor:(id)arg1 shadowColor:(id)arg2;
- (void)_setButtonItemTextColor:(id)arg1 shadowColor:(id)arg2;
- (void)_setButtonItemTextColor:(id)arg1 shadowColor:(id)arg2 forState:(unsigned long long)arg3;
- (void)_setBackButtonBackgroundImage:(id)arg1 mini:(id)arg2 forStates:(unsigned long long)arg3;
- (void)_setButtonBackgroundImage:(id)arg1 mini:(id)arg2 forStates:(unsigned long long)arg3;
- (void)_setBackgroundImage:(id)arg1 mini:(id)arg2;
- (void)_applySPIAppearanceToButtons;
@property(nonatomic, setter=_setShadowAlpha:) double _shadowAlpha;
@property(retain, nonatomic, setter=_setBackgroundView:) UIView *_backgroundView;
- (_Bool)isElementAccessibilityExposedToInterfaceBuilder;
- (double)_autolayoutSpacingAtEdge:(int)arg1 nextToNeighbor:(id)arg2;
- (double)_autolayoutSpacingAtEdge:(int)arg1 inContainer:(id)arg2;
- (_Bool)_hasCustomAutolayoutNeighborSpacing;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

