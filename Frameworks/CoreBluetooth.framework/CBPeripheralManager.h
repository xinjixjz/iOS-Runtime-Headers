/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreBluetooth.framework/CoreBluetooth
 */

@class <CBPeripheralManagerDelegate>, CBXpcConnection, NSLock, NSMutableArray, NSMutableDictionary;

@interface CBPeripheralManager : NSObject <CBXpcConnectionDelegate> {
    BOOL _advertising;
    NSMutableDictionary *_centrals;
    NSMutableDictionary *_characteristicIDs;
    CBXpcConnection *_connection;
    <CBPeripheralManagerDelegate> *_delegate;
    BOOL _readyForUpdates;
    NSMutableArray *_services;
    int _state;
    NSLock *_updateLock;
    BOOL _waitingForReady;
}

@property <CBPeripheralManagerDelegate> * delegate;
@property(readonly) BOOL isAdvertising;
@property(readonly) int state;

+ (int)authorizationStatus;

- (void)addService:(id)arg1;
- (id)centralFromArgs:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (void)handleAdvertisingStarted:(id)arg1;
- (void)handleAdvertisingStopped:(id)arg1;
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
- (void)removeAllServices;
- (void)removeService:(id)arg1;
- (void)respondToRequest:(id)arg1 withResult:(int)arg2;
- (void)sendMsg:(int)arg1 args:(id)arg2;
- (void)setDelegate:(id)arg1;
- (void)setDesiredConnectionLatency:(int)arg1 forCentral:(id)arg2;
- (void)startAdvertising:(id)arg1;
- (int)state;
- (void)stopAdvertising;
- (BOOL)updateValue:(id)arg1 forCharacteristic:(id)arg2 onSubscribedCentrals:(id)arg3;
- (void)xpcConnection:(id)arg1 didReceiveMsg:(int)arg2 args:(id)arg3;
- (void)xpcConnectionDidReset:(id)arg1;
- (void)xpcConnectionIsInvalid:(id)arg1;

@end
