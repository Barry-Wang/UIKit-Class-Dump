//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSOperation.h"

#import "UIActivityItemSource.h"

@class NSString;

@interface UIActivityItemProvider : NSOperation <UIActivityItemSource>
{
    NSString *_status;
    float _progress;
    id _providedItem;
    id _placeholderItem;
    NSString *_activityType;
}

@property(readonly, nonatomic) NSString *activityType; // @synthesize activityType=_activityType;
@property(retain, nonatomic) id placeholderItem; // @synthesize placeholderItem=_placeholderItem;
@property(retain, nonatomic) id providedItem; // @synthesize providedItem=_providedItem;
@property(nonatomic) float progress; // @synthesize progress=_progress;
@property(copy, nonatomic) NSString *status; // @synthesize status=_status;
- (id)activityViewController:(id)arg1 itemForActivityType:(id)arg2;
- (id)activityViewControllerPlaceholderItem:(id)arg1;
- (void)main;
- (id)item;
- (void)_setActivityType:(id)arg1;
- (void)dealloc;
- (id)initWithPlaceholderItem:(id)arg1;

@end

