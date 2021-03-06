//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/_UIRefreshControlContentView.h>

@class NSMutableDictionary, UIActivityIndicatorView, UIImageView, UILabel;

__attribute__((visibility("hidden")))
@interface _UIRefreshControlDefaultContentView : _UIRefreshControlContentView
{
    _Bool _animationsAreValid;
    UIImageView *_imageView;
    UILabel *_textLabel;
    UIImageView *_arrow;
    UIActivityIndicatorView *_spinner;
    NSMutableDictionary *_snappingTextFromValues;
    NSMutableDictionary *_snappingImageFromValues;
    NSMutableDictionary *_snappingArrowFromValues;
    _Bool _areAnimationsValid;
}

@property(readonly, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(readonly, nonatomic) UIActivityIndicatorView *spinner; // @synthesize spinner=_spinner;
@property(readonly, nonatomic) UIImageView *arrow; // @synthesize arrow=_arrow;
@property(readonly, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic) _Bool areAnimationsValid; // @synthesize areAnimationsValid=_areAnimationsValid;
- (id)_regenerateArrow;
- (id)_regenerateCircle;
- (id)attributedTitle;
- (void)setAttributedTitle:(id)arg1;
- (void)setTintColor:(id)arg1;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (double)_heightAtWhichNoneOfTheInterfaceElementsAreVisibleEvenIfTheControlIsStillPartiallyOnScreen;
- (double)maximumSnappingHeight;
- (double)minimumSnappingHeight;
- (void)_spinOutMagic;
- (void)_refreshingMagic;
- (void)_snappingMagic;
- (void)_revealingMagic;
- (void)_fadeInMagic;
- (id)_revealingTextAnimations;
- (id)_revealingArrowAnimations;
- (id)_revealingImageAnimations;
- (void)_updateTimeOffsetOfRelevantLayers;
- (double)_currentTimeOffset;
- (double)_snappingTimeOffset;
- (void)didTransitionFromState:(int)arg1 toState:(int)arg2;
- (void)willTransitionFromState:(int)arg1 toState:(int)arg2;
- (void)refreshControlInvalidatedSnappingHeight;
- (long long)style;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

