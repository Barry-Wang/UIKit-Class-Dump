//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface UIAccessibilityCustomAction : NSObject
{
    id _weakTarget;
    NSString *_name;
    SEL _selector;
}

@property(nonatomic) SEL selector; // @synthesize selector=_selector;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) __weak id target;
- (void)dealloc;
- (id)initWithName:(id)arg1 target:(id)arg2 selector:(SEL)arg3;

@end

