/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@class CPLConfiguration, CPLEngineScheduler, CPLEngineStore, CPLEngineSyncManager, CPLEngineSystemMonitor, CPLEngineTransport, CPLPlatformObject, CPLStatistics, CPLStatus, NSArray, NSDate, NSError, NSHashTable, NSObject<OS_dispatch_queue>, NSString, NSURL;

@interface CPLEngineLibrary : NSObject <CPLAbstractObject> {
    NSHashTable *_attachedObjects;
    NSURL *_clientLibraryBaseURL;
    BOOL _closed;
    NSURL *_cloudLibraryResourceStorageURL;
    NSURL *_cloudLibraryStateStorageURL;
    NSArray *_components;
    CPLConfiguration *_configuration;
    NSString *_libraryIdentifier;
    NSError *_openingError;
    CPLPlatformObject *_platformObject;
    NSObject<OS_dispatch_queue> *_queue;
    CPLEngineScheduler *_scheduler;
    CPLStatistics *_statistics;
    CPLStatus *_status;
    CPLEngineStore *_store;
    CPLEngineSyncManager *_syncManager;
    CPLEngineSystemMonitor *_systemMonitor;
    CPLEngineTransport *_transport;
}

@property(copy,readonly) NSURL * clientLibraryBaseURL;
@property(copy,readonly) NSURL * cloudLibraryResourceStorageURL;
@property(copy,readonly) NSURL * cloudLibraryStateStorageURL;
@property(readonly) CPLConfiguration * configuration;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(retain) NSDate * exitDeleteTime;
@property BOOL hasChangesToProcess;
@property(readonly) unsigned int hash;
@property BOOL iCloudLibraryExists;
@property BOOL iCloudLibraryHasBeenWiped;
@property BOOL isExceedingQuota;
@property(copy,readonly) NSString * libraryIdentifier;
@property(readonly) CPLPlatformObject * platformObject;
@property(readonly) CPLEngineScheduler * scheduler;
@property(readonly) CPLStatistics * statistics;
@property(readonly) CPLEngineStore * store;
@property(readonly) Class superclass;
@property(readonly) CPLEngineSyncManager * syncManager;
@property(readonly) CPLEngineSystemMonitor * systemMonitor;
@property(readonly) CPLEngineTransport * transport;

+ (id)platformImplementationProtocol;

- (void).cxx_destruct;
- (void)_closeNextComponent:(id)arg1 deactivate:(BOOL)arg2 lastError:(id)arg3 completionHandler:(id)arg4;
- (void)_openNextComponent:(id)arg1 completionHandler:(id)arg2;
- (void)_performBlockWithLibrary:(BOOL)arg1 enumerateAttachedObjects:(id)arg2;
- (void)attachObject:(id)arg1 withCompletionHandler:(id)arg2;
- (id)clientLibraryBaseURL;
- (void)closeAndDeactivate:(BOOL)arg1 completionHandler:(id)arg2;
- (id)cloudLibraryResourceStorageURL;
- (id)cloudLibraryStateStorageURL;
- (id)componentName;
- (id)configuration;
- (id)description;
- (void)detachObject:(id)arg1 withCompletionHandler:(id)arg2;
- (id)exitDeleteTime;
- (void)getListOfComponentsWithCompletionHandler:(id)arg1;
- (void)getStatusArrayForComponents:(id)arg1 completionHandler:(id)arg2;
- (void)getStatusForComponents:(id)arg1 completionHandler:(id)arg2;
- (BOOL)hasChangesToProcess;
- (BOOL)iCloudLibraryExists;
- (BOOL)iCloudLibraryHasBeenWiped;
- (id)initWithClientLibraryBaseURL:(id)arg1 cloudLibraryStateStorageURL:(id)arg2 cloudLibraryResourceStorageURL:(id)arg3 libraryIdentifier:(id)arg4;
- (BOOL)isExceedingQuota;
- (id)libraryIdentifier;
- (void)notifyAttachedObjectsPullQueueIsFull;
- (void)notifyAttachedObjectsResourceDidDowloadInBackground:(id)arg1;
- (void)notifyAttachedObjectsResourceDidFailBackgroundDownloadOfResource:(id)arg1;
- (void)notifyAttachedObjectsSizeOfResourcesToUploadDidChangeToSize:(unsigned long long)arg1 numberOfImages:(unsigned int)arg2 numberOfVideos:(unsigned int)arg3 numberOfOtherItems:(unsigned int)arg4;
- (void)notifyAttachedObjectsUploadTask:(id)arg1 didFinishWithError:(id)arg2;
- (void)notifyAttachedObjectsUploadTask:(id)arg1 didProgress:(float)arg2;
- (void)notifyAttachedObjectsUploadTaskDidStart:(id)arg1;
- (void)openWithCompletionHandler:(id)arg1;
- (id)platformObject;
- (void)reportUnsuccessfulSync;
- (id)scheduler;
- (void)setExitDeleteTime:(id)arg1;
- (void)setHasChangesToProcess:(BOOL)arg1;
- (void)setICloudLibraryExists:(BOOL)arg1;
- (void)setICloudLibraryHasBeenWiped:(BOOL)arg1;
- (void)setIsExceedingQuota:(BOOL)arg1;
- (void)startSyncSession;
- (id)statistics;
- (id)store;
- (id)syncManager;
- (id)systemMonitor;
- (id)transport;
- (void)updateAssetCountsFromServer:(id)arg1;
- (void)updateLastSuccessfullSyncDate:(id)arg1;

@end
