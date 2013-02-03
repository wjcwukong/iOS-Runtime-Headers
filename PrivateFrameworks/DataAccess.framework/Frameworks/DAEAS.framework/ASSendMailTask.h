/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
 */

@class NSData, NSString;

@interface ASSendMailTask : ASTask {
    NSString *_messageID;
    NSData *_mimeMessage;
}

- (id)command;
- (int)commandCode;
- (int)connectionActionForResponse:(id)arg1;
- (id)contentType;
- (void)dealloc;
- (BOOL)expectsWBXML;
- (void)finishWithError:(id)arg1;
- (BOOL)getTopLevelToken:(char *)arg1 outStatusCodePage:(char *)arg2 outStatusToken:(char *)arg3;
- (id)initWithMessage:(id)arg1 messageID:(id)arg2;
- (id)parameterData;
- (BOOL)processContext:(id)arg1;
- (id)requestBody;
- (id)requestBodyStreamOutKnownSize:(int*)arg1;
- (int)taskStatusForExchangeStatus:(int)arg1;

@end