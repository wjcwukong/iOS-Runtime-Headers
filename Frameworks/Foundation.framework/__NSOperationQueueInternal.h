/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSObject<OS_dispatch_queue>, NSOperation;

@interface __NSOperationQueueInternal : NSObject {
    struct _opaque_pthread_mutex_t { 
        long __sig; 
        BOOL __opaque[40]; 
    int __actualMaxNumOps;
    NSObject<OS_dispatch_queue> *__dispatch_queue;
    NSOperation *__firstOperation;
    NSOperation *__firstPriOperation[5];
    NSOperation *__lastOperation;
    NSOperation *__lastPriOperation[5];
    unsigned char __mainQ;
    int __maxNumOps;
    BOOL __nameBuffer[160];
    int __numExecOps;
    unsigned char __overcommit;
    NSOperation *__pendingFirstOperation;
    NSOperation *__pendingLastOperation;
    NSObject<OS_dispatch_queue> *__pending_barrier;
    BOOL __propertyQOS;
    } __queueLock;
    unsigned char __suspended;
    unsigned int __unused2;
}

- (void)dealloc;
- (void)finalize;
- (id)init;

@end
