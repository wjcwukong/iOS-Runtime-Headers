/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@class NSObject<OS_dispatch_group>, NSObject<OS_dispatch_queue>;

@interface BWJPEGEncoderNode : BWNode {
    struct OpaqueVTPixelTransferSession { } *_pixelTransferSession;
    NSObject<OS_dispatch_group> *_thumbnailGenerationGroup;
    NSObject<OS_dispatch_queue> *_thumbnailGenerationQueue;
}

+ (void)initialize;

- (void)_encodeJPEGForSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 stillImageSettings:(id)arg2 outputSurface:(struct __IOSurface {}**)arg3 outputSurfaceSize:(int*)arg4;
- (void)_generateThumbnailForSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 stillImageSettings:(id)arg2 outputSurface:(struct __IOSurface {}**)arg3;
- (void)dealloc;
- (void)didSelectFormat:(id)arg1 forInput:(id)arg2;
- (id)init;
- (id)nodeSubType;
- (id)nodeType;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 forInput:(id)arg2;

@end
