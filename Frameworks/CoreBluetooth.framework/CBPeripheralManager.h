/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreBluetooth.framework/CoreBluetooth
 */

@class <CBPeripheralManagerDelegate>, CBPairingAgent, CBXpcConnection, NSLock, NSMapTable, NSMutableArray, NSMutableDictionary, NSString;

@interface CBPeripheralManager : NSObject <CBPairingAgentParentDelegate, CBXpcConnectionDelegate> {
    struct { 
        unsigned int willRestoreState : 1; 
        unsigned int didAddService : 1; 
        unsigned int didReceiveReadRequest : 1; 
        unsigned int didReceiveWriteRequests : 1; 
        unsigned int centralDidSubscribeToCharacteristic : 1; 
        unsigned int centralDidUnsubscribeFromCharacteristic : 1; 
        unsigned int didStartAdvertising : 1; 
        unsigned int isReadyToUpdate : 1; 
        unsigned int centralDidConnect : 1; 
        unsigned int centralDidUpdateConnectionParameters : 1; 
    NSMapTable *_centrals;
    NSMutableDictionary *_characteristicIDs;
    CBXpcConnection *_connection;
    <CBPeripheralManagerDelegate> *_delegate;
    } _delegateFlags;
    BOOL _isAdvertising;
    CBPairingAgent *_pairingAgent;
    BOOL _readyForUpdates;
    NSMutableArray *_services;
    int _state;
    NSLock *_updateLock;
    BOOL _waitingForReady;
}

@property(copy,readonly) NSString * debugDescription;
@property <CBPeripheralManagerDelegate> * delegate;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property BOOL isAdvertising;
@property(readonly) CBPairingAgent * sharedPairingAgent;
@property int state;
@property(readonly) Class superclass;

+ (int)authorizationStatus;

- (void)addService:(id)arg1;
- (id)centralWithInfo:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (void)forEachCentral:(id)arg1;
- (void)handleAdvertisingStarted:(id)arg1;
- (void)handleAdvertisingStopped:(id)arg1;
- (void)handleCentralMsg:(int)arg1 args:(id)arg2;
- (void)handleConnectionParametersUpdated:(id)arg1;
- (void)handleGetAttributeValue:(id)arg1;
- (void)handleMTUChanged:(id)arg1;
- (void)handleNotificationAdded:(id)arg1;
- (void)handleNotificationRemoved:(id)arg1;
- (void)handleReadyForUpdates:(id)arg1;
- (void)handleRestoringState:(id)arg1;
- (void)handleServiceAdded:(id)arg1;
- (void)handleSetAttributeValues:(id)arg1;
- (void)handleSolicitedServicesFound:(id)arg1;
- (void)handleStateUpdated:(id)arg1;
- (id)initWithDelegate:(id)arg1 queue:(id)arg2 options:(id)arg3;
- (id)initWithDelegate:(id)arg1 queue:(id)arg2;
- (BOOL)isAdvertising;
- (BOOL)isMsgAllowedAlways:(int)arg1;
- (BOOL)isMsgAllowedWhenOff:(int)arg1;
- (id)peerWithInfo:(id)arg1;
- (oneway void)release;
- (void)removeAllServices;
- (void)removeService:(id)arg1;
- (void)respondToRequest:(id)arg1 withResult:(int)arg2;
- (BOOL)sendMsg:(int)arg1 args:(id)arg2;
- (id)sendSyncMsg:(int)arg1 args:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)setDesiredConnectionLatency:(int)arg1 forCentral:(id)arg2;
- (void)setIsAdvertising:(BOOL)arg1;
- (void)setState:(int)arg1;
- (id)sharedPairingAgent;
- (void)startAdvertising:(id)arg1;
- (int)state;
- (void)stopAdvertising;
- (BOOL)updateValue:(id)arg1 forCharacteristic:(id)arg2 onSubscribedCentrals:(id)arg3;
- (void)xpcConnection:(id)arg1 didReceiveMsg:(unsigned short)arg2 args:(id)arg3;
- (void)xpcConnectionDidFinalize:(id)arg1;
- (void)xpcConnectionDidReset:(id)arg1;
- (void)xpcConnectionIsInvalid:(id)arg1;

@end
