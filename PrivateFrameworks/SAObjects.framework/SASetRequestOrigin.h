/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSNumber, NSString, NSDate;

@interface SASetRequestOrigin : SABaseCommand <SAServerBoundCommand> {
}

@property double latitude;
@property double longitude;
@property double verticalAccuracy;
@property double horizontalAccuracy;
@property(retain) NSNumber * age;
@property double altitude;
@property(copy) NSString * desiredAccuracy;
@property double direction;
@property double speed;
@property(copy) NSString * status;
@property(copy) NSDate * timestamp;
@property(copy) NSString * refId;
@property(copy) NSString * aceId;

+ (id)setRequestOrigin;
+ (id)setRequestOriginWithDictionary:(id)arg1 context:(id)arg2;

- (id)groupIdentifier;
- (void)setStatus:(id)arg1;
- (id)status;
- (void)setLongitude:(double)arg1;
- (void)setLatitude:(double)arg1;
- (double)direction;
- (void)setDirection:(double)arg1;
- (id)timestamp;
- (double)speed;
- (void)setTimestamp:(id)arg1;
- (void)setSpeed:(double)arg1;
- (double)altitude;
- (double)verticalAccuracy;
- (double)horizontalAccuracy;
- (id)desiredAccuracy;
- (void)setDesiredAccuracy:(id)arg1;
- (double)latitude;
- (double)longitude;
- (void)setHorizontalAccuracy:(double)arg1;
- (id)encodedClassName;
- (id)age;
- (void)setAge:(id)arg1;
- (void)setVerticalAccuracy:(double)arg1;
- (void)setAltitude:(double)arg1;

@end