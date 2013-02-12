/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@class NSArray, NSLock;

@interface SUPreOrderQueue : NSObject {
    NSLock *_lock;
    struct __CFSet { } *_observers;
}

@property(readonly) NSArray * items;

- (void)addObserver:(id)arg1;
- (BOOL)cancelItemAtIndex:(int)arg1;
- (BOOL)checkQueue;
- (void)dealloc;
- (id)items;
- (void)removeObserver:(id)arg1;
- (void)sendQueueChanged;

@end