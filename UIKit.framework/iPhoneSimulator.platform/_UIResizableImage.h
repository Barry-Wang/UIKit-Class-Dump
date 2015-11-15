//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIImage.h>

__attribute__((visibility("hidden")))
@interface _UIResizableImage : UIImage
{
    BOOL _alwaysStretches;
    struct UIEdgeInsets _capInsets;
}

- (BOOL)_isTiledWhenStretchedToSize:(struct CGSize)arg1;
- (void)_setAlwaysStretches:(BOOL)arg1;
- (BOOL)_isResizable;
- (struct CGRect)_contentStretchInPixels;
- (struct UIEdgeInsets)capInsets;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithImage:(id)arg1 capInsets:(struct UIEdgeInsets)arg2;

@end
