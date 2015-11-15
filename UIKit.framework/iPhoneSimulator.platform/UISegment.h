//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIImageView.h>

@class UIColor, UIView, _UISegmentedControlAppearanceStorage;

__attribute__((visibility("hidden")))
@interface UISegment : UIImageView
{
    UIView *_info;
    _UISegmentedControlAppearanceStorage *_appearanceStorage;
    float _width;
    struct CGSize _contentOffset;
    UIColor *_tintColor;
    int _barStyle;
    struct {
        unsigned int style:3;
        unsigned int size:2;
        unsigned int selected:1;
        unsigned int highlighted:1;
        unsigned int showDivider:1;
        unsigned int hasImage:1;
        unsigned int isDisclosure:1;
        unsigned int position:3;
        unsigned int autosizeText:1;
        unsigned int isMomentary:1;
    } _segmentFlags;
}

- (float)_idealWidth;
- (float)_paddingForLeft:(BOOL)arg1;
- (BOOL)useBlockyMagnificationInClassic;
- (id)hitTest:(struct CGPoint)arg1 forEvent:(struct __GSEvent *)arg2;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)infoName;
- (id)info;
- (void)setInfo:(id)arg1;
- (void)setContentOffset:(struct CGSize)arg1;
- (void)setPosition:(unsigned int)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)_positionInfo;
- (struct CGSize)contentSize;
- (float)_barHeight;
- (struct CGRect)contentRect;
- (void)animateRemoveForWidth:(float)arg1;
- (void)animateAdd:(BOOL)arg1;
- (void)setShowDivider:(BOOL)arg1;
@property int controlSize;
@property(getter=isMomentary) BOOL momentary;
- (void)setHighlighted:(BOOL)arg1;
- (BOOL)isHighlighted;
@property(getter=isSelected) BOOL selected;
- (void)setEnabled:(BOOL)arg1;
- (void)_setEnabledAppearance:(BOOL)arg1;
- (void)setAutosizeText:(BOOL)arg1;
- (void)setTintColor:(id)arg1;
- (void)setBarStyle:(int)arg1;
- (id)disabledTextColor;
- (void)_updateTextColors;
- (id)_currentOptionsStyleTextShadowColor;
- (id)_currentOptionsStyleTextColor;
- (void)_updateBackgroundImage;
- (void)_updateTexturedBackgroundImage;
- (id)_texturedFillImage;
- (id)_texturedRightCapImage;
- (id)_texturedLeftCapImage;
- (void)_tileImage:(id)arg1 inRect:(struct CGRect)arg2;
- (void)updateDividerViewToMatchSegment:(id)arg1;
- (void)insertDividerView;
- (id)_dividerImageForRight:(BOOL)arg1;
- (id)_dividerImageForRight:(BOOL)arg1 isCustom:(char *)arg2;
- (unsigned int)_segmentState;
- (BOOL)_isInMiniBar;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (void)_populateArchivedSubviews:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithInfo:(id)arg1 style:(int)arg2 size:(int)arg3 barStyle:(int)arg4 tintColor:(id)arg5 appearanceStorage:(id)arg6 position:(unsigned int)arg7 isDisclosure:(BOOL)arg8 autosizeText:(BOOL)arg9;
- (void)_commonInitWithInfo:(id)arg1 position:(unsigned int)arg2 autosizeText:(BOOL)arg3;

@end
