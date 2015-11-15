//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIKBShape.h>

#import "NSCoding.h"
#import "NSCopying.h"
#import "UIKBCacheKey.h"

@class NSArray, NSString, UIKBAttributeList;

@interface UIKBKey : UIKBShape <NSCoding, NSCopying, UIKBCacheKey>
{
    NSString *m_name;
    NSString *m_representedString;
    NSString *m_displayString;
    NSString *m_displayType;
    NSString *m_interactionType;
    NSString *m_variantType;
    UIKBAttributeList *m_attributes;
    unsigned int m_displayTypeHint;
    NSString *m_displayRowHint;
    NSArray *m_variantKeys;
    NSString *m_overrideDisplayString;
    NSString *m_clientVariantRepresentedString;
    NSString *m_clientVariantActionName;
    BOOL m_visible;
    BOOL m_ghost;
    int m_splitMode;
    NSArray *m_flicks;
}

+ (id)keyWithKey:(id)arg1;
+ (id)key;
@property(nonatomic) int splitMode; // @synthesize splitMode=m_splitMode;
@property(retain, nonatomic) NSArray *flicks; // @synthesize flicks=m_flicks;
@property(copy, nonatomic) NSString *clientVariantActionName; // @synthesize clientVariantActionName=m_clientVariantActionName;
@property(copy, nonatomic) NSString *clientVariantRepresentedString; // @synthesize clientVariantRepresentedString=m_clientVariantRepresentedString;
@property(copy, nonatomic) NSString *overrideDisplayString; // @synthesize overrideDisplayString=m_overrideDisplayString;
@property(copy, nonatomic) NSArray *variantKeys; // @synthesize variantKeys=m_variantKeys;
@property(retain, nonatomic) NSString *displayRowHint; // @synthesize displayRowHint=m_displayRowHint;
@property(nonatomic) unsigned int displayTypeHint; // @synthesize displayTypeHint=m_displayTypeHint;
@property(nonatomic) BOOL isGhost; // @synthesize isGhost=m_ghost;
@property(nonatomic) BOOL visible; // @synthesize visible=m_visible;
@property(copy, nonatomic) UIKBAttributeList *attributes; // @synthesize attributes=m_attributes;
@property(copy, nonatomic) NSString *variantType; // @synthesize variantType=m_variantType;
@property(copy, nonatomic) NSString *interactionType; // @synthesize interactionType=m_interactionType;
@property(copy, nonatomic) NSString *displayType; // @synthesize displayType=m_displayType;
@property(copy, nonatomic) NSString *displayString; // @synthesize displayString=m_displayString;
@property(copy, nonatomic) NSString *representedString; // @synthesize representedString=m_representedString;
@property(copy, nonatomic) NSString *name; // @synthesize name=m_name;
- (BOOL)behavesAsShiftKey;
@property(readonly, nonatomic) NSString *cacheKey;
- (void)removeClientVariantActionInfo;
@property(readonly, nonatomic) BOOL isClientVariantOverride;
- (void)setTextAlignment:(int)arg1;
- (int)textAlignment;
@property(copy, nonatomic) NSString *rendering;
@property(copy, nonatomic) NSString *tint;
@property(nonatomic) BOOL disabled;
- (id)variantPopupBias;
- (void)setVariantPopupBias:(id)arg1;
- (id)variantDisplayString;
- (void)mergeAttributes:(id)arg1;
@property(nonatomic) BOOL hidden;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithName:(id)arg1 representedString:(id)arg2 displayString:(id)arg3 displayType:(id)arg4 interactionType:(id)arg5 variantType:(id)arg6 attributes:(id)arg7 geometry:(id)arg8 frame:(struct CGRect)arg9 paddedFrame:(struct CGRect)arg10 ghost:(BOOL)arg11;
- (id)initWithName:(id)arg1 representedString:(id)arg2 displayString:(id)arg3 displayType:(id)arg4 interactionType:(id)arg5 variantType:(id)arg6 attributes:(id)arg7 geometry:(id)arg8 frame:(struct CGRect)arg9 paddedFrame:(struct CGRect)arg10;
- (id)init;

@end
