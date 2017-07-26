//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface QLKeyBoardPageLayout : NSObject
{
    unsigned long long _rowPerPage;
    unsigned long long _columnPerPage;
    double _pageWidth;
    double _verticleSpacing;
    double _horizontalSpacing;
    double _pageHeight;
    unsigned long long _totalItemNumber;
    struct UIEdgeInsets _pageInsets;
}

@property(nonatomic) unsigned long long totalItemNumber; // @synthesize totalItemNumber=_totalItemNumber;
@property(nonatomic) double pageHeight; // @synthesize pageHeight=_pageHeight;
@property(nonatomic) double horizontalSpacing; // @synthesize horizontalSpacing=_horizontalSpacing;
@property(nonatomic) double verticleSpacing; // @synthesize verticleSpacing=_verticleSpacing;
@property(nonatomic) struct UIEdgeInsets pageInsets; // @synthesize pageInsets=_pageInsets;
@property(nonatomic) double pageWidth; // @synthesize pageWidth=_pageWidth;
@property(nonatomic) unsigned long long columnPerPage; // @synthesize columnPerPage=_columnPerPage;
@property(nonatomic) unsigned long long rowPerPage; // @synthesize rowPerPage=_rowPerPage;
- (struct CGRect)cellFrameByIndex:(unsigned long long)arg1;
- (id)init;

@end
