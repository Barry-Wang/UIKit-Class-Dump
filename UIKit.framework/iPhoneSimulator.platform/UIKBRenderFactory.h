//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableArray, UIKBRenderConfig;

@interface UIKBRenderFactory : NSObject
{
    UIKBRenderConfig *_renderConfig;
    NSMutableArray *_segmentTraits;
    double _rivenSizeFactor;
    _Bool _lightweightFactory;
    double _scale;
}

+ (id)segmentedControlColor:(_Bool)arg1;
+ (id)cacheKeyForString:(id)arg1 withRenderFlags:(long long)arg2 renderConfig:(id)arg3;
+ (id)lightweightFactoryForVisualStyle:(CDStruct_961fb75c)arg1 renderConfig:(id)arg2;
+ (id)factoryForVisualStyle:(CDStruct_961fb75c)arg1 renderConfig:(id)arg2;
+ (Class)factoryClassForVisualStyle:(CDStruct_961fb75c)arg1;
+ (long long)_graphicsQuality;
+ (_Bool)_enabled;
@property(nonatomic) double scale; // @synthesize scale=_scale;
@property(nonatomic) _Bool lightweightFactory; // @synthesize lightweightFactory=_lightweightFactory;
@property(nonatomic) double rivenSizeFactor; // @synthesize rivenSizeFactor=_rivenSizeFactor;
@property(readonly, nonatomic) NSArray *segmentTraits; // @synthesize segmentTraits=_segmentTraits;
@property(readonly, nonatomic) UIKBRenderConfig *renderConfig; // @synthesize renderConfig=_renderConfig;
- (void)_customizeTraits:(id)arg1 forPopupForKey:(id)arg2 withRenderConfig:(id)arg3 keycapsFontName:(id)arg4;
- (id)thinTextFontName;
- (id)lightTextFontName;
- (id)lightPadKeycapsFontName;
- (id)thinKeycapsFontName;
- (id)lightKeycapsFontName;
- (id)controlKeyBackgroundColorName;
- (id)defaultKeyBackgroundColorName;
- (void)removeAllLayoutSegments;
- (void)addLayoutSegment:(id)arg1;
- (_Bool)useBlueThemingForKey:(id)arg1;
- (_Bool)shouldClearBaseDisplayStringForVariants;
- (id)displayContentsForKey:(id)arg1;
- (id)keyImageNameWithSkinnyVariation:(id)arg1;
- (double)skinnyKeyThreshold;
- (id)shiftOnKeyImageName;
- (id)shiftKeyImageName;
- (id)deleteKeyImageName;
- (id)handwritingMoreKeyImageName;
- (id)muttitapReverseKeyImageName;
- (id)multitapCompleteKeyImageName;
- (id)dismissKeyImageName;
- (id)dictationKeyImageName;
- (id)globalEmojiKeyImageName;
- (id)globalKeyImageName;
- (id)traitsHashStringForKey:(id)arg1 withGeometry:(id)arg2 controlOpacities:(_Bool)arg3;
- (id)traitsForKey:(id)arg1 onKeyplane:(id)arg2;
- (id)_traitsForKey:(id)arg1 onKeyplane:(id)arg2;
- (id)backgroundTraitsForKeyplane:(id)arg1;
- (void)setupLayoutSegments;
- (void)lowQualityTraits:(id)arg1;
- (double)translucentGapWidth;
- (void)scaleTraits:(id)arg1;
- (double)RivenFactor:(double)arg1;
- (id)initWithRenderConfig:(id)arg1 skipLayoutSegments:(_Bool)arg2;
- (void)dealloc;
- (void)modifyTraitsForDetachedInputSwitcher:(id)arg1 withKey:(id)arg2;
- (double)keyCornerRadius;

@end
