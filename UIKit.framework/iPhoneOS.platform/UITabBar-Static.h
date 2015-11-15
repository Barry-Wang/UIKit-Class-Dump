//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UITabBar.h>

#import "_UIBackdropViewGraphicsQualityChangeDelegate.h"

@interface UITabBar (Static) <_UIBackdropViewGraphicsQualityChangeDelegate>
- (id)hitTest:(struct CGPoint)arg1 forEvent:(struct __GSEvent *)arg2;
- (void)_positionTabBarButtons:(id)arg1 ignoringItem:(id)arg2;
- (void)_configureItems:(id)arg1;
- (void)_updateDividerImagesIfNecessary;
- (void)_configureTabBarReplacingItem:(id)arg1 withNewItem:(id)arg2 dragging:(_Bool)arg3 swapping:(_Bool)arg4;
- (void)_updateAppearanceCustomizationIfNecessaryForItem:(id)arg1;
- (void)_customizeWithAvailableItems:(id)arg1;
- (void)_finishCustomizeAnimation:(id)arg1;
- (void)_customizeDoneButtonAction:(id)arg1;
- (void)_dismissCustomizeSheet:(_Bool)arg1;
- (void)_adjustButtonSelection:(id)arg1;
- (void)_buttonCancel:(id)arg1;
- (void)_buttonUp:(id)arg1;
- (void)_buttonDownDelayed:(id)arg1;
- (void)_buttonDown:(id)arg1;
- (void)backdropView:(id)arg1 didChangeToGraphicsQuality:(long long)arg2;
- (id)backdropView:(id)arg1 willChangeToGraphicsQuality:(long long)arg2;
- (void)_updateBackgroundImage;
- (void)_setVisualAltitudeBias:(struct CGSize)arg1;
- (void)_setVisualAltitude:(double)arg1;
@end

