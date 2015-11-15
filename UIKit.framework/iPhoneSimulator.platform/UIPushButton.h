//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIControl.h>

@class NSString, UIFont;

@interface UIPushButton : UIControl
{
    NSString *_title;
    UIFont *_font;
    struct CGSize _shadowOffset;
    struct CGSize _imageOffset;
    struct CGSize _titlePadding;
    struct __CFDictionary *_info;
    float _minimumFontPointSize;
    struct {
        unsigned int selected:1;
        unsigned int drawShadow:1;
        unsigned int disableAutosizeToFit:1;
        unsigned int drawContentsCentered:1;
        unsigned int reverseShadowDirectionWhenHighlighted:1;
        unsigned int stretchBackground:1;
        unsigned int showPressFeedback:1;
        unsigned int disabledDimsImage:1;
        unsigned int alwaysHandleScrollerMouseEvent:1;
        unsigned int drawsImageOnRight:1;
        unsigned int drawContentsCenteredHorizontally:1;
    } _pushButtonFlags;
}

+ (id)defaultFont;
- (void)setNeedsDisplay;
- (void)drawRect:(struct CGRect)arg1;
- (void)drawButtonPart:(int)arg1 inRect:(struct CGRect)arg2;
- (void)_drawImageAndTextPartInRect:(struct CGRect)arg1;
- (void)drawTitleAtPoint:(struct CGPoint)arg1 width:(float)arg2;
- (void)drawImageAtPoint:(struct CGPoint)arg1 fraction:(float)arg2;
- (void)_drawBezelPartInRect:(struct CGRect)arg1;
- (CDStruct_75b8db5d)_backgroundSlices:(struct CGSize)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (id)currentBackground;
- (id)currentShadowColor;
- (id)currentTitleColor;
- (id)currentImage;
- (id)backgroundForState:(unsigned int)arg1;
- (id)shadowColorForState:(unsigned int)arg1;
- (id)titleColorForState:(unsigned int)arg1;
- (id)imageForState:(unsigned int)arg1;
- (void)setDisabledDimsImage:(BOOL)arg1;
- (void)setBackground:(id)arg1 forState:(unsigned int)arg2;
- (void)setShadowColor:(id)arg1 forState:(unsigned int)arg2;
- (void)setTitleColor:(id)arg1 forState:(unsigned int)arg2;
- (void)setImage:(id)arg1 forState:(unsigned int)arg2;
- (BOOL)drawContentsCentered;
- (struct CGSize)imageOffset;
- (struct CGSize)shadowOffset;
- (BOOL)drawsShadow;
- (void)setDrawsImageOnRight:(BOOL)arg1;
- (void)setShowPressFeedback:(BOOL)arg1;
- (void)setDrawContentsCentered:(BOOL)arg1;
- (void)setDrawContentsCenteredHorizontally:(BOOL)arg1;
- (void)setStretchBackground:(BOOL)arg1;
- (void)setReverseShadowDirectionWhenHighlighted:(BOOL)arg1;
- (void)setShadowOffset:(float)arg1;
- (void)setDrawsShadow:(BOOL)arg1;
- (void)setImageOffset:(struct CGSize)arg1;
- (void)setTitlePadding:(struct CGSize)arg1;
- (void)_setAlwaysHandleScrollerMouseEvent:(BOOL)arg1;
- (BOOL)_alwaysHandleScrollerMouseEvent;
- (void)setTracking:(BOOL)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (struct CGPoint)pressFeedbackPosition;
- (void)sizeToFit;
- (BOOL)autosizesToFit;
- (float)minimumFontSize;
- (void)setMinimumFontSize:(float)arg1;
- (void)setAutosizesToFit:(BOOL)arg1;
- (id)titleFont;
- (void)setTitleFont:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (BOOL)isSelected;
- (void)setSelected:(BOOL)arg1;
- (BOOL)isPressed;
- (void)setEnabled:(BOOL)arg1;
- (unsigned int)state;
- (void)dealloc;
- (id)initWithImage:(id)arg1;
- (id)initWithTitle:(id)arg1 autosizesToFit:(BOOL)arg2;
- (id)initWithTitle:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
