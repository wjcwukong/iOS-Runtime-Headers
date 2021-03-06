/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@class NSArray, NSString;

@interface _MFSecCMSDecoder : NSObject <MFCollectingDataConsumer> {
    long _SecCMSError;
    struct SecCmsDigestContextStr { } *_digest;
    struct SecCmsEnvelopedDataStr { } *_envelopedData;
    BOOL _isEncrypted;
    struct SecCmsMessageStr { } *_message;
    struct SecCmsSignedDataStr { } *_signedData;
    NSArray *_signers;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) long lastSecCMSError;
@property(readonly) NSArray * signers;
@property(readonly) Class superclass;

- (int)appendData:(id)arg1;
- (id)data;
- (void)dealloc;
- (void)done;
- (id)initWithPartData:(id)arg1 error:(id*)arg2;
- (BOOL)isContentEncrypted;
- (BOOL)isContentSigned;
- (long)lastSecCMSError;
- (id)signedData;
- (id)signers;
- (id)verifyAgainstSenders:(id)arg1 signingError:(id*)arg2;

@end
