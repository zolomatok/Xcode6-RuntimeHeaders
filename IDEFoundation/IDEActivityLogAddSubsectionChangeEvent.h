//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IDEActivityLogAddSubsectionChangeEvent : IDEActivityLogChangeEvent
{
    IDEActivityLogSection *_subsection;
}

@property(readonly) IDEActivityLogSection *subsection; // @synthesize subsection=_subsection;
- (void).cxx_destruct;
- (id)description;
- (id)addedChild;
- (id)initWithSection:(id)arg1 subsection:(id)arg2;

@end