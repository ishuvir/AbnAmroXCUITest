// Licensed under the Applitools SDK License, which can be found here: https://www.applitools.com/eula/sdk

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "IosVersion.h"
#import "IosDeviceName.h"
#import "ScreenOrientation.h"

NS_ASSUME_NONNULL_BEGIN

@interface IosDeviceInfo : NSObject

@property (assign, readonly, nonatomic) IosDeviceName deviceName;
@property (assign, readonly, nonatomic) IosVersion iosVersion;
@property (assign, readonly, nonatomic) ScreenOrientation screenOrientation;

- (instancetype)init NS_UNAVAILABLE;
+ (instancetype)new NS_UNAVAILABLE;

- (instancetype)initWithDeviceName:(IosDeviceName)deviceName;
- (instancetype)initWithDeviceName:(IosDeviceName)deviceName iOSVersion:(IosVersion)version;
- (instancetype)initWithDeviceName:(IosDeviceName)deviceName screenOrientation:(ScreenOrientation)screenOrientation;
- (instancetype)initWithDeviceName:(IosDeviceName)deviceName screenOrientation:(ScreenOrientation)screenOrientation iOSVersion:(IosVersion)version;

@end

NS_ASSUME_NONNULL_END
