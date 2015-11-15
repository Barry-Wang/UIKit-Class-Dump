//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIKeyboardCandidateInline.h>

@class UIKeyboardCandidateInlineFloatingView;

__attribute__((visibility("hidden")))
@interface UIKeyboardCandidateInlinePad : UIKeyboardCandidateInline
{
    UIKeyboardCandidateInlineFloatingView *_inlineView;
}

@property(retain, nonatomic) UIKeyboardCandidateInlineFloatingView *inlineView; // @synthesize inlineView=_inlineView;
- (BOOL)handleTabKeyWithShift:(BOOL)arg1;
- (BOOL)handleNumberKey:(unsigned int)arg1;
- (void)inlineShowPreviousCandidate;
- (void)inlineShowNextCandidate;
- (void)inlineShowCandidateAtIndex:(unsigned int)arg1;
- (void)hideInlineView;
- (void)showInlineView;
- (void)dealloc;

@end
