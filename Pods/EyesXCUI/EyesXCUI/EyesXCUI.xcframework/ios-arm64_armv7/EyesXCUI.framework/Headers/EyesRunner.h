// Licensed under the Applitools SDK License, which can be found here: https://www.applitools.com/eula/sdk

#import <Foundation/Foundation.h>

@class TestResultsSummary, TestResults, ServerConnector, AbstractProxySettings;

NS_ASSUME_NONNULL_BEGIN

/**
 Use ClassicRunner class instead please.
 */
@interface EyesRunner : NSObject

@property (strong, nonatomic) ServerConnector *serverConnector;
@property (copy, nonatomic) NSString *apiKey;
@property (copy, nonatomic) NSString *serverUrl;
@property (strong, nonatomic, nullable) AbstractProxySettings *proxy;

- (TestResultsSummary *)getAllTestResults;
- (TestResultsSummary *)getAllTestResultsShouldThrowException:(BOOL)shouldThrowException;

@end

NS_ASSUME_NONNULL_END
