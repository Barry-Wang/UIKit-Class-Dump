//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "NSCoding.h"
#import "UIGestureRecognizerDelegate.h"
#import "UITabBarDelegate.h"

@class NSArray, NSMutableArray, NSString, UIMoreNavigationController, UINavigationController, UITabBar, UITapGestureRecognizer, UIView;

@interface UITabBarController : UIViewController <UIGestureRecognizerDelegate, UITabBarDelegate, NSCoding>
{
    UITabBar *_tabBar;
    UIView *_containerView;
    UIView *_viewControllerTransitionView;
    id _tabBarItemsToViewControllers;
    UIViewController *_selectedViewController;
    UIMoreNavigationController *_moreNavigationController;
    NSArray *_customizableViewControllers;
    id <UITabBarControllerDelegate><UITabBarControllerDelegate_Private> _delegate;
    UIViewController *_selectedViewControllerDuringWillAppear;
    UIViewController *_transientViewController;
    unsigned long long _customMaxItems;
    unsigned long long _defaultMaxItems;
    long long _tabBarPosition;
    UITapGestureRecognizer *_backGestureRecognizer;
    UITapGestureRecognizer *_selectGestureRecognizer;
    struct {
        unsigned int isShowingMoreItem:1;
        unsigned int needsToRebuildItems:1;
        unsigned int isBarHidden:1;
        unsigned int editButtonOnLeft:1;
        unsigned int barLayoutIsValid:1;
        unsigned int reselectTab:1;
        unsigned int delegateSupportedInterfaceOrientations:1;
        unsigned int delegatePreferredInterfaceOrientationForPresentation:1;
    } _tabBarControllerFlags;
    NSMutableArray *_moreChildViewControllers;
    UIView *_accessoryView;
    id <UIViewControllerAnimatedTransitioning> __animator;
    id <UIViewControllerInteractiveTransitioning> __interactor;
    NSString *__backdropGroupName;
}

+ (_Bool)_shouldSendLegacyMethodsFromViewWillTransitionToSize;
+ (_Bool)_shouldForwardViewWillTransitionToSize;
+ (Class)_moreNavigationControllerClass;
+ (_Bool)_directlySetsContentOverlayInsetsForChildren;
+ (_Bool)doesOverrideSupportedInterfaceOrientations;
+ (_Bool)doesOverridePreferredInterfaceOrientationForPresentation;
@property(retain, nonatomic, getter=_backdropGroupName, setter=_setBackdropGroupName:) NSString *_backdropGroupName; // @synthesize _backdropGroupName=__backdropGroupName;
@property(retain, nonatomic, setter=_setInteractor:) id <UIViewControllerInteractiveTransitioning> _interactor; // @synthesize _interactor=__interactor;
@property(retain, nonatomic, setter=_setAnimator:) id <UIViewControllerAnimatedTransitioning> _animator; // @synthesize _animator=__animator;
@property(nonatomic) id <UITabBarControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic, setter=_setAccessoryView:) UIView *_accessoryView; // @synthesize _accessoryView;
@property(nonatomic) NSMutableArray *moreChildViewControllers; // @synthesize moreChildViewControllers=_moreChildViewControllers;
- (void)_setBadgeValue:(id)arg1 forTabBarItem:(id)arg2;
- (id)rotatingSnapshotViewForWindow:(id)arg1;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (void)willAnimateSecondHalfOfRotationFromInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)didAnimateFirstHalfOfRotationToInterfaceOrientation:(long long)arg1;
- (void)willAnimateFirstHalfOfRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (struct CGSize)sizeForChildContentContainer:(id)arg1 withParentContainerSize:(struct CGSize)arg2;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)_getRotationContentSettings:(CDStruct_8bdd0ba6 *)arg1;
- (_Bool)_shouldUseOnePartRotation;
- (id)rotatingFooterView;
- (id)rotatingHeaderView;
- (_Bool)_isSupportedInterfaceOrientation:(long long)arg1;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (long long)preferredInterfaceOrientationForPresentation;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)_shouldSynthesizeSupportedOrientations;
- (_Bool)_doAllViewControllersSupportInterfaceOrientation:(long long)arg1;
- (_Bool)_allowsAutorotation;
- (void)_setMaximumNumberOfItems:(unsigned long long)arg1;
- (unsigned long long)_effectiveMaxItems;
- (_Bool)showsEditButtonOnLeft;
- (void)setShowsEditButtonOnLeft:(_Bool)arg1;
- (void)revealTabBarSelection;
- (void)concealTabBarSelection;
- (void)setTransientViewController:(id)arg1 animated:(_Bool)arg2;
- (void)setTransientViewController:(id)arg1;
- (id)transientViewController;
- (void)transitionViewDidComplete:(id)arg1 fromView:(id)arg2 toView:(id)arg3;
- (void)transitionFromViewController:(id)arg1 toViewController:(id)arg2 transition:(int)arg3 shouldSetSelected:(_Bool)arg4;
- (id)_customAnimatorForFromViewController:(id)arg1 toViewController:(id)arg2;
- (id)_customInteractionControllerForAnimator:(id)arg1;
- (struct CGRect)_frameForWrapperViewForViewController:(id)arg1;
- (id)transitionCoordinator;
- (struct CGRect)_frameForViewController:(id)arg1;
- (struct UIEdgeInsets)_edgeInsetsForChildViewController:(id)arg1 insetsAreAbsolute:(_Bool *)arg2;
- (void)_updateLayoutForStatusBarAndInterfaceOrientation;
- (id)_transitionView;
- (void)transitionFromViewController:(id)arg1 toViewController:(id)arg2;
- (void)_tabBarItemClicked:(id)arg1;
- (id)_viewControllerForTabBarItem:(id)arg1;
- (void)_setTabBarPosition:(long long)arg1;
- (long long)_effectiveTabBarPosition;
- (id)_backdropBarGroupName;
- (long long)_tabBarPosition;
@property(readonly, nonatomic) UITabBar *tabBar;
- (id)_viewControllersInTabBar;
- (id)allViewControllers;
- (void)showBarWithTransition:(int)arg1;
- (void)_showBarWithTransition:(int)arg1 isExplicit:(_Bool)arg2;
- (void)hideBarWithTransition:(int)arg1;
- (void)_hideBarWithTransition:(int)arg1 isExplicit:(_Bool)arg2;
- (void)animationDidStop:(id)arg1 finished:(id)arg2 context:(id)arg3;
- (_Bool)_isBarHidden;
- (void)tabBar:(id)arg1 didEndCustomizingItems:(id)arg2 changed:(_Bool)arg3;
- (void)tabBar:(id)arg1 willEndCustomizingItems:(id)arg2 changed:(_Bool)arg3;
- (id)_viewsWithDisabledInteractionGivenTransitionContext:(id)arg1;
- (void)tabBarSizingDidChange:(id)arg1;
- (void)tabBar:(id)arg1 willBeginCustomizingItems:(id)arg2;
- (void)beginCustomizingTabBar:(id)arg1;
@property(copy, nonatomic) NSArray *customizableViewControllers; // @synthesize customizableViewControllers=_customizableViewControllers;
@property(readonly, nonatomic) UINavigationController *moreNavigationController;
- (void)setRestorationIdentifier:(id)arg1;
- (void)_setMoreNavigationControllerRestorationIdentifier;
- (id)_existingMoreNavigationController;
- (_Bool)_allowsCustomizing;
- (id)childViewControllerForStatusBarHidden;
- (id)childViewControllerForStatusBarStyle;
- (void)_setSelectedViewController:(id)arg1;
@property(nonatomic) UIViewController *selectedViewController;
@property(nonatomic) unsigned long long selectedIndex;
- (id)_viewControllerForSelectAtIndex:(unsigned long long)arg1;
- (_Bool)_allowSelectionWithinMoreList;
- (id)_selectedViewControllerInTabBar;
- (void)setViewControllers:(id)arg1 animated:(_Bool)arg2;
- (void)_rebuildTabBarItemsAnimated:(_Bool)arg1;
- (void)_rebuildTabBarItemsIfNeeded;
@property(copy, nonatomic) NSArray *viewControllers;
- (void)_configureTargetActionForTabBarItem:(id)arg1;
- (_Bool)_isTabBarFocused;
- (id)_responderSelectionContainerViewForResponder:(id)arg1;
- (void)_performSelectGesture:(id)arg1;
- (void)_performBackGesture:(id)arg1;
- (_Bool)_gestureRecognizerShouldBegin:(id)arg1;
- (void)_updateLayoutForTraitCollection:(id)arg1;
- (void)_willChangeToIdiom:(long long)arg1 onScreen:(id)arg2;
- (_Bool)_reallyWantsFullScreenLayout;
- (void)updateTabBarItemForViewController:(id)arg1;
- (void)_setSelectedTabBarItem:(id)arg1;
- (void)purgeMemoryForReason:(int)arg1;
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (_Bool)_isPresentationContextByDefault;
- (void)loadView;
- (void)_layoutContainerView;
- (void)setView:(id)arg1;
- (void)setTabBar:(id)arg1;
- (void)_setTabBarVisualAltitude;
- (void)_prepareTabBar;
- (void)__viewWillLayoutSubviews;
- (void)_selectDefaultViewControllerIfNecessaryWithAppearanceTransitions:(_Bool)arg1;
- (id)_wrapperViewForViewController:(id)arg1;
- (void)_layoutViewController:(id)arg1;
- (id)_deepestUnambiguousResponder;
- (_Bool)becomeFirstResponder;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (_Bool)_shouldPersistViewWhenCoding;
- (void)_populateArchivedChildViewControllers:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)decodeRestorableStateWithCoder:(id)arg1;
- (void)encodeRestorableStateWithCoder:(id)arg1;
- (_Bool)_ignoreUnselectedTabsForStateRestoration;
- (id)_allContainedViewControllers;
- (id)_additionalViewControllersToCheckForUserActivity;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

