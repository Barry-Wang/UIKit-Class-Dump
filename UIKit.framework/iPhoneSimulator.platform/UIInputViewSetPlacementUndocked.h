//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIInputViewSetPlacement.h>

__attribute__((visibility("hidden")))
@interface UIInputViewSetPlacementUndocked : UIInputViewSetPlacement
{
    double _normalizedOffset;
}

+ (id)placementWithUndockedOffset:(double)arg1;
@property(nonatomic) double normalizedOffset; // @synthesize normalizedOffset=_normalizedOffset;
- (_Bool)isUndocked;
- (_Bool)inputViewWillAppear;
- (_Bool)isEqual:(id)arg1;
- (id)verticalConstraintForInputViewSet:(id)arg1 hostView:(id)arg2 containerView:(id)arg3;

@end

