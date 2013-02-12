/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class NSString, NSURL;

@interface PLAudioInternal : MLPhotoMemoryStorage {
    NSString *_temporaryPath;
    NSString *_title;
    NSURL *_url;
}

- (int)imageID;
- (id)imageWithFormat:(int)arg1;
- (BOOL)isAudio;
- (BOOL)isVideo;
- (id)title;

@end