/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class AVAsset, NSError, NSSet;

@interface TSDMovieCompatibilityChecker : NSObject {
    struct { 
        int width; 
        int height; 
    AVAsset *mAsset;
    int mCompatibilityLevel;
    } mCustomMaxPlayableVideoDimensions;
    int mCustomMaxPlayableVideoPixelsPerFrame;
    NSSet *mCustomPlayableVideoCodecTypes;
    NSError *mError;
}

@property(readonly) int compatibilityLevel;
@property(readonly) NSError * error;

- (void)cancel;
- (void)checkCompatibilityUpToLevel:(int)arg1 completionHandler:(id)arg2;
- (void)checkCustomCompatibilityWithVideoCodecTypes:(id)arg1 maxPlayableVideoDimensions:(struct CGSize { float x1; float x2; })arg2 maxPlayableVideoPixelsPerFrame:(int)arg3 completionHandler:(id)arg4;
- (int)compatibilityLevel;
- (void)dealloc;
- (id)error;
- (id)init;
- (id)initWithAsset:(id)arg1;
- (BOOL)p_assetHasSupportedFileTypeOnAllDevices;
- (void)p_didFinishCheckingCompatibilityUpToLevel:(int)arg1 actualLevel:(int)arg2 didCancel:(BOOL)arg3 error:(id)arg4 completionHandler:(id)arg5;
- (BOOL)p_isAudioTrackPlayableOnAllDevices:(id)arg1;
- (BOOL)p_isH263VideoFormatPlayableOnAllDevices:(struct opaqueCMFormatDescription { }*)arg1;
- (BOOL)p_isH264VideoFormatPlayableOnAllDevices:(struct opaqueCMFormatDescription { }*)arg1;
- (BOOL)p_isLoadedAssetPlayableOnAllDevices;
- (BOOL)p_isMPEG4VideoFormatPlayableOnAllDevices:(struct opaqueCMFormatDescription { }*)arg1;
- (BOOL)p_isSorenson3VideoFormatPlayableOnAllDevices:(struct opaqueCMFormatDescription { }*)arg1;
- (BOOL)p_isVideoTrackPlayableOnAllDevices:(id)arg1;
- (id)p_sampleDescriptionExtensionAtomDataFromVideoFormatDescription:(struct opaqueCMFormatDescription { }*)arg1 forAtomType:(id)arg2;

@end
