//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSAttributedString, NSMutableArray, UIMorphingLabel;

__attribute__((visibility("hidden")))
@interface UIMorphingLabelGlyphSet : NSObject
{
    UIMorphingLabel *_label;
    NSAttributedString *_attributedString;
    struct __CTLine *_line;
    NSMutableArray *_glyphViews;
    unsigned long long _glyphCount;
    unsigned short *_glyphs;
    struct CGRect *_glyphFrames;
    struct CGPoint *_glyphPositions;
    struct CGPoint _lineOrigin;
    double _lineWidth;
}

@property(readonly, nonatomic) double lineWidth; // @synthesize lineWidth=_lineWidth;
@property(readonly, nonatomic) struct CGPoint lineOrigin; // @synthesize lineOrigin=_lineOrigin;
@property(readonly, nonatomic) NSAttributedString *attributedString; // @synthesize attributedString=_attributedString;
@property(readonly, nonatomic) NSArray *glyphViews; // @synthesize glyphViews=_glyphViews;
@property(readonly, nonatomic) const struct CGPoint *glyphPositions; // @synthesize glyphPositions=_glyphPositions;
@property(readonly, nonatomic) const struct CGRect *glyphFrames; // @synthesize glyphFrames=_glyphFrames;
@property(readonly, nonatomic) const unsigned short *glyphs; // @synthesize glyphs=_glyphs;
@property(readonly, nonatomic) unsigned long long glyphCount; // @synthesize glyphCount=_glyphCount;
- (struct CGRect)boundingRectForGlyphsInRange:(struct _NSRange)arg1;
- (void)placeGlyphs;
- (void)removeGlyphs;
- (void)buildGlyphViews;
- (void)dealloc;
- (id)initWithLabel:(id)arg1 attributedString:(id)arg2;

@end

