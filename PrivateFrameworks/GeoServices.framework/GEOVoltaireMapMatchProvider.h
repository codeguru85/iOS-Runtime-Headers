/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class GEORequester;

@interface GEOVoltaireMapMatchProvider : NSObject <PBRequesterDelegate> {
    BOOL _cancelled;
    id _errorHandler;
    id _finishedHandler;
    GEORequester *_requester;
}

@property(retain) GEORequester * requester;

+ (void)_resetURL;
+ (id)providerURL;
+ (void)setUsePersistentConnection:(BOOL)arg1;

- (void)cancelRequest;
- (void)dealloc;
- (id)init;
- (void)requester:(id)arg1 didFailWithError:(id)arg2;
- (id)requester;
- (void)requesterDidCancel:(id)arg1;
- (void)requesterDidFinish:(id)arg1;
- (void)setRequester:(id)arg1;
- (void)startRequest:(id)arg1 finished:(id)arg2 error:(id)arg3;

@end
