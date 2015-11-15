//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSDictionary;

@interface UITraitCollection : NSObject <NSCopying, NSSecureCoding>
{
    CDStruct_cf4bd6d1 _builtinTraits;
    NSDictionary *_clientDefinedTraits;
}

+ (id)_emptyTraitCollection;
+ (id)_traitCollectionWithValue:(id)arg1 forTraitNamed:(id)arg2;
+ (id)traitCollectionWithVerticalSizeClass:(long long)arg1;
+ (id)traitCollectionWithHorizontalSizeClass:(long long)arg1;
+ (id)traitCollectionWithDisplayScale:(double)arg1;
+ (id)traitCollectionWithInteractionModel:(long long)arg1;
+ (id)traitCollectionWithTouchLevel:(long long)arg1;
+ (id)traitCollectionWithUserInterfaceIdiom:(long long)arg1;
+ (id)traitCollectionWithTraitsFromCollections:(id)arg1;
+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) long long verticalSizeClass;
@property(readonly, nonatomic) long long horizontalSizeClass;
@property(readonly, nonatomic) double displayScale;
- (long long)interactionModel;
- (long long)touchLevel;
@property(readonly, nonatomic) long long userInterfaceIdiom;
- (id)_valueForTraitNamed:(id)arg1;
- (_Bool)_matchesIntersectionWithTraitCollection:(id)arg1;
- (_Bool)containsTraitsInCollection:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)dealloc;
- (id)init;
- (id)_initWithBuiltinTraitStorage:(CDStruct_cf4bd6d1 *)arg1 clientDefinedTraits:(id)arg2;
- (id)_namedImageDescription;

@end

