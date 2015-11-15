//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class _UIMotionEffectAcceleratedOutputRange;

__attribute__((visibility("hidden")))
@interface _UIViewerRelativeDevicePose : NSObject <NSCopying, NSCoding>
{
    _UIMotionEffectAcceleratedOutputRange *_acceleratedOutputRange;
    double _planarRotationAngle;
    struct UIOffset _viewerOffset;
}

@property(nonatomic) double planarRotationAngle; // @synthesize planarRotationAngle=_planarRotationAngle;
@property(nonatomic) struct UIOffset viewerOffset; // @synthesize viewerOffset=_viewerOffset;
- (struct UIOffset)_acceleratedOutputForViewerOffset:(struct UIOffset)arg1 accelerationBoostFactor:(struct CGPoint)arg2;
- (void)_setAcceleration:(struct CGPoint)arg1 fixingOutputForViewerOffset:(struct UIOffset)arg2;
- (void)_reset;
- (id)_acceleratedOutputRange;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;

@end

