// Licensed under the Applitools SDK License, which can be found here: https://www.applitools.com/eula/sdk

#import <Foundation/Foundation.h>

@class TestResults, IosDeviceInfo;

NS_ASSUME_NONNULL_BEGIN

@interface TestResultContainer : NSObject

@property (readonly, nonatomic, nullable) TestResults *testResults;
@property (readonly, nonatomic) IosDeviceInfo *deviceInfo;
@property (readonly, nonatomic, nullable) NSError *error;

- (instancetype)initWithTestResults:(TestResults * _Nullable)testResults deviceInfo:(IosDeviceInfo *)deviceInfo error:(NSError * _Nullable)error;

@end

NS_ASSUME_NONNULL_END
