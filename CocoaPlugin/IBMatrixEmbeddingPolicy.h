//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//


@interface IBMatrixEmbeddingPolicy : IBSubviewEmbeddingPolicy
{
}

- (id)presentationGroupingKey;
- (BOOL)canEmbedObjects:(id)arg1 fromDocument:(id)arg2;
- (id)embedObjects:(id)arg1 fromDocument:(id)arg2;
- (void)transitionControlsCell:(id)arg1 toMatrix:(id)arg2 inDocument:(id)arg3 row:(long long)arg4 col:(long long)arg5;
- (id)containerName;
- (id)init;

@end