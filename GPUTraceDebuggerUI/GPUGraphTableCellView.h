//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface GPUGraphTableCellView : NSTableCellView
{
    BOOL _showBaseline;
    GPUInvestigatorReportResource *_reportResource;
}

@property(nonatomic) BOOL showBaseline; // @synthesize showBaseline=_showBaseline;
@property(nonatomic) __weak GPUInvestigatorReportResource *reportResource; // @synthesize reportResource=_reportResource;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;

@end