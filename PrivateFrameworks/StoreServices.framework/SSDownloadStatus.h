/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class SSDownloadPhase, NSError;



@interface SSDownloadStatus : NSObject <NSCopying>
{
    SSDownloadPhase *_activePhase;
    NSError *_error;
    BOOL _failed;
    BOOL _paused;
}

@property(getter=isFailedTransient,readonly) BOOL failedTransient;
@property(getter=isPausable,readonly) BOOL pausable;
@property(readonly) float percentComplete;
@property(getter=isPaused) BOOL paused;
@property(getter=isFailed) BOOL failed;
@property(retain) NSError *error;
@property(readonly) SSDownloadPhase *activePhase;


- (BOOL)isFailedTransient;
- (BOOL)isPausable;
- (void)setOperationProgress:(id)arg1;
- (id)copyPropertyListEncoding;
- (id)initWithPropertyListEncoding:(id)arg1;
- (id)error;
- (float)percentComplete;
- (void)setPaused:(BOOL)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (BOOL)isPaused;
- (id)activePhase;
- (BOOL)isFailed;
- (void)setFailed:(BOOL)arg1;
- (void)setError:(id)arg1;

@end