/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Radio.framework/Radio
 */

@class NSURL;

@interface RadioArtwork : NSObject <NSCopying> {
    struct CGSize { 
        float width; 
        float height; 
    NSURL *_URL;
    } _pixelSize;
}

@property(readonly) NSURL * URL;
@property(readonly) struct CGSize { float x1; float x2; } pixelSize;
@property(readonly) struct CGSize { float x1; float x2; } pointSize;

- (void).cxx_destruct;
- (id)URL;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned int)hash;
- (id)initWithArtworkDictionary:(id)arg1;
- (id)initWithArtworkURL:(id)arg1 pixelSize:(struct CGSize { float x1; float x2; })arg2;
- (BOOL)isEqual:(id)arg1;
- (struct CGSize { float x1; float x2; })pixelSize;
- (struct CGSize { float x1; float x2; })pointSize;

@end