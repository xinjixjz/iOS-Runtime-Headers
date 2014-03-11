/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@class NSNumber, NSString;

@interface AFSpeechRequestOptions : NSObject <NSSecureCoding> {
    double _activationEventTime;
    NSString *_btDeviceAddress;
    int _event;
    double _expectedActivationEventTime;
    NSNumber *_homeButtonUpFromBeep;
    BOOL _isEyesFree;
    BOOL _isInitialBringUp;
    NSString *_serverCommandId;
    BOOL _useAutomaticEndpointing;
}

@property int activationEvent;
@property double activationEventTime;
@property(copy) NSString * btDeviceAddress;
@property double expectedActivationEventTime;
@property(copy) NSNumber * homeButtonUpFromBeep;
@property BOOL isEyesFree;
@property BOOL isInitialBringUp;
@property(copy) NSString * serverCommandId;
@property BOOL useAutomaticEndpointing;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (int)activationEvent;
- (double)activationEventTime;
- (id)btDeviceAddress;
- (void)encodeWithCoder:(id)arg1;
- (double)expectedActivationEventTime;
- (id)homeButtonUpFromBeep;
- (id)initWithActivationEvent:(int)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEyesFree;
- (BOOL)isInitialBringUp;
- (id)serverCommandId;
- (void)setActivationEvent:(int)arg1;
- (void)setActivationEventTime:(double)arg1;
- (void)setBtDeviceAddress:(id)arg1;
- (void)setExpectedActivationEventTime:(double)arg1;
- (void)setHomeButtonUpFromBeep:(id)arg1;
- (void)setIsEyesFree:(BOOL)arg1;
- (void)setIsInitialBringUp:(BOOL)arg1;
- (void)setServerCommandId:(id)arg1;
- (void)setUseAutomaticEndpointing:(BOOL)arg1;
- (BOOL)useAutomaticEndpointing;

@end