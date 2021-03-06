//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIWindow.h>

@class UITraitCollection, _UIHostedWindowHostingHandle;

@interface _UIHostedWindow : UIWindow
{
    _Bool _wantsTraitPropigation;
    long long _hostTintAdjustmentMode;
    UITraitCollection *_hostTraitCollection;
    long long _toWindowOrientation;
    long long _fromWindowOrientation;
}

@property(nonatomic, getter=_fromWindowOrientation, setter=_setFromWindowOrientation:) long long fromWindowOrientation; // @synthesize fromWindowOrientation=_fromWindowOrientation;
@property(nonatomic, getter=_toWindowOrientation, setter=_setToWindowOrientation:) long long toWindowOrientation; // @synthesize toWindowOrientation=_toWindowOrientation;
@property(nonatomic, setter=_setWantsTraitPropigation:) _Bool _wantsTraitPropigation; // @synthesize _wantsTraitPropigation;
@property(nonatomic, setter=_setHostTraitCollection:) UITraitCollection *_hostTraitCollection; // @synthesize _hostTraitCollection;
@property(nonatomic, setter=_setHostTintAdjustmentMode:) long long _hostTintAdjustmentMode; // @synthesize _hostTintAdjustmentMode;
- (_Bool)_presentActionSheet:(id)arg1 inView:(id)arg2 fromYCoordinate:(double)arg3;
- (id)_traitCollectionForSize:(struct CGSize)arg1 screenCollection:(id)arg2 virtualHorizontalSizeClass:(long long)arg3 virtualVerticalSizeClass:(long long)arg4;
- (_Bool)_shouldPropigateTraitCollectionChanges;
- (struct CGRect)_sceneBounds;
- (void)setScreen:(id)arg1;
- (void)_configureContextOptions:(id)arg1;
- (long long)_defaultTintAdjustmentMode;
- (_Bool)_isOffsetByScreenJail;
- (_Bool)_isRotatedByScreenJail;
- (_Bool)_isClippedByScreenJail;
- (_Bool)_isScaledByScreenJail;
- (_Bool)_isConstrainedByScreenJail;
- (_Bool)_needsShakesWhenInactive;
- (void)_updateTransformLayerForClassicPresentation;
- (void)_updateAppTintView;
- (void)_unregisterScrollToTopView:(id)arg1;
- (void)_registerScrollToTopView:(id)arg1;
- (_Bool)_usesWindowServerHitTesting;
@property(readonly, nonatomic) _UIHostedWindowHostingHandle *hostingHandle;
- (unsigned int)contextID;
- (_Bool)_canPromoteFromKeyWindowStack;
- (_Bool)_isWindowServerHostingManaged;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

