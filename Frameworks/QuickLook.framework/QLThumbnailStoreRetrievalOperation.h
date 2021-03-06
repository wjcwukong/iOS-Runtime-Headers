/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@class NSData, NSDictionary, NSError, NSURL, QLThumbnailAddition;

@interface QLThumbnailStoreRetrievalOperation : NSOperation {
    QLThumbnailAddition *_addition;
    NSURL *_documentURL;
    NSError *_error;
    BOOL _executing;
    BOOL _finished;
}

@property(retain) NSError * error;
@property(getter=isExecuting) BOOL executing;
@property(getter=isFinished) BOOL finished;
@property(readonly) NSData * serializedQuickLookMetadataDictionary;
@property(readonly) NSDictionary * thumbnailImagesDictionary;

- (BOOL)_finishIfCancelled;
- (void)_finishWithError:(id)arg1;
- (void)cancel;
- (void)dealloc;
- (id)description;
- (id)error;
- (id)initWithDocumentAtURL:(id)arg1;
- (BOOL)isConcurrent;
- (BOOL)isExecuting;
- (BOOL)isFinished;
- (void)main;
- (id)serializedQuickLookMetadataDictionary;
- (void)setError:(id)arg1;
- (void)setExecuting:(BOOL)arg1;
- (void)setFinished:(BOOL)arg1;
- (void)start;
- (id)thumbnailImagesDictionary;

@end
