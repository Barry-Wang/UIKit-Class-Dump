//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UISegmentedControl.h>

@interface UISegmentedControl (DeprecatedMethods)
+ (float)defaultHeight;
- (int)selectedSegment;
- (void)setSelectedSegment:(int)arg1;
- (BOOL)isEnabledForSegment:(unsigned int)arg1;
- (void)setEnabled:(BOOL)arg1 forSegment:(unsigned int)arg2;
- (struct CGSize)contentOffsetForSegment:(unsigned int)arg1;
- (void)setContentOffset:(struct CGSize)arg1 forSegment:(unsigned int)arg2;
- (float)widthForSegment:(unsigned int)arg1;
- (void)setWidth:(float)arg1 forSegment:(unsigned int)arg2;
- (id)imageForSegment:(unsigned int)arg1;
- (void)setImage:(id)arg1 forSegment:(unsigned int)arg2;
- (id)titleForSegment:(unsigned int)arg1;
- (void)setTitle:(id)arg1 forSegment:(unsigned int)arg2;
- (void)removeSegment:(unsigned int)arg1 animated:(BOOL)arg2;
- (void)insertSegment:(unsigned int)arg1 withImage:(id)arg2 animated:(BOOL)arg3;
- (void)insertSegment:(unsigned int)arg1 withTitle:(id)arg2 animated:(BOOL)arg3;
- (void)addSegmentWithTitle:(id)arg1;
- (void)selectSegment:(int)arg1;
- (void)setImagePadding:(struct CGSize)arg1 forSegment:(unsigned int)arg2;
- (void)setAlwaysNotifiesDelegateOfSegmentClicks:(BOOL)arg1;
- (void)setMomentaryClick:(BOOL)arg1;
- (void)setShowsDisclosure:(BOOL)arg1;
- (void)setDelegate:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 withStyle:(int)arg2 withItems:(id)arg3;
@end
