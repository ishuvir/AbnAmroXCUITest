// Licensed under the Applitools SDK License, which can be found here: https://www.applitools.com/eula/sdk

#import <Foundation/Foundation.h>

@class AbstractProxySettings;

NS_ASSUME_NONNULL_BEGIN

@interface RunnerOptions : NSObject

- (RunnerOptions *)testConcurrency:(NSInteger)testConcurrency;
- (RunnerOptions *)apiKey:(NSString *)apiKey;
- (RunnerOptions *)serverUrl:(NSString *)serverUrl;
- (RunnerOptions *)proxy:(AbstractProxySettings *)proxy;

- (NSInteger)testConcurrency;
- (NSString *)apiKey;
- (NSString *)serverUrl;
- (AbstractProxySettings *)proxy;

@end

NS_ASSUME_NONNULL_END
