//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class PKPrintSettings, PKPrinter, UIPrintInfo, UIPrintPageRenderer, UIPrintPanelViewController, UIPrintPaper, UIPrintingProgress;

__attribute__((visibility("hidden")))
@interface UIPrintInteractionControllerInternals : NSObject
{
    long long _pageCount;
    struct _NSRange _pageRange;
    long long _currentPage;
    UIPrintPanelViewController *_printPanelViewController;
    UIPrintingProgress *_printingProgress;
    PKPrinter *_printer;
    UIPrintPaper *_paper;
    PKPrintSettings *_printSettings;
    UIPrintInfo *_activePrintInfo;
    int _printInfoState;
    _Bool _supressNotifyDismissed;
    UIPrintPageRenderer *_formatterRenderer;
    _Bool _manualPrintPageEnabled;
}

- (void)dealloc;

@end

