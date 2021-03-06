/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPRangeArray : NSObject <NSCopying> {
    void *_rangeVectorOpaque;
}

@property(readonly) unsigned int finish;
@property(readonly) BOOL isEmpty;
@property(readonly) unsigned int rangeCount;
@property(readonly) unsigned int start;

- (void)addRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)enumerateRangesInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 usingBlock:(id)arg2;
- (void)enumerateRangesUsingBlock:(id)arg1;
- (unsigned int)finish;
- (id)init;
- (id)initWithRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (id)initWithRangeVector:(const void*)arg1;
- (BOOL)isEmpty;
- (struct _NSRange { unsigned int x1; unsigned int x2; })rangeAtIndex:(unsigned int)arg1;
- (unsigned int)rangeCount;
- (struct _NSRange { unsigned int x1; unsigned int x2; }*)rangeReferenceAtIndex:(unsigned int)arg1;
- (void)removeRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (unsigned int)start;

@end
