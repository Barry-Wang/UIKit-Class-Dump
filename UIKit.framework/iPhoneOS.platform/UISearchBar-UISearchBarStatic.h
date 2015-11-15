//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UISearchBar.h>

@interface UISearchBar (UISearchBarStatic)
- (void)_updateBackgroundToBackdropStyle:(long long)arg1;
- (id)_scopeBarBackgroundView;
- (id)_backgroundView;
- (void)_setEnabled:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_setScopeBarSegmentsEnabled:(_Bool)arg1;
- (void)_setEnabled:(_Bool)arg1;
- (_Bool)_isEnabled;
- (_Bool)isFirstResponder;
- (_Bool)resignFirstResponder;
- (_Bool)canResignFirstResponder;
- (_Bool)becomeFirstResponder;
- (_Bool)canBecomeFirstResponder;
- (void)reloadInputViews;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)_searchFieldEditingChanged;
- (void)_searchFieldReturnPressed;
- (void)_searchFieldEndEditing;
- (void)_searchFieldBeginEditing;
- (void)_resultsListButtonPressed;
- (void)_bookmarkButtonPressed;
- (void)_cancelButtonPressed;
- (void)_destroyCancelButton;
- (void)_setupCancelButtonWithAppearance:(id)arg1;
- (void)_setupCancelButton;
- (void)_setAutoDisableCancelButton:(_Bool)arg1;
- (void)_setCancelButtonText:(id)arg1;
- (void)_setupPromptLabel;
- (_Bool)_textFieldShouldScrollToVisibleWhenBecomingFirstResponder:(id)arg1;
- (_Bool)textFieldShouldEndEditing:(id)arg1;
- (_Bool)textFieldShouldBeginEditing:(id)arg1;
- (void)_updateOpacity;
- (void)_setupSearchField;
- (void)tintColorDidChange;
- (void)_updateMagnifyingGlassView;
- (void)_updateSearchFieldArt;
- (_Bool)_consideredInBarWithSuperview:(id)arg1;
- (_Bool)_isInBar;
- (void)setPretendsIsInBar:(_Bool)arg1;
- (_Bool)pretendsIsInBar;
@end
