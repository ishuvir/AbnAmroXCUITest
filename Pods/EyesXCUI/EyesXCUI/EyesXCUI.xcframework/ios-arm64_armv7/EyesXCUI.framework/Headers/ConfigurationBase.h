// Licensed under the Applitools SDK License, which can be found here: https://www.applitools.com/eula/sdk

#import "SessionType.h"
#import "AccessibilitySettings.h"
#import "MatchLevel.h"
#import <Foundation/Foundation.h>
#import <CoreGraphics/CoreGraphics.h>

NS_ASSUME_NONNULL_BEGIN

@class BatchInfo, ImageMatchSettings, AbstractProxySettings;

@interface ConfigurationBase : NSObject <NSCopying>

@property (copy, nonatomic) NSString *branchName;
@property (copy, nonatomic) NSString *parentBranchName;
@property (copy, nonatomic) NSString *baselineBranchName;
@property (copy, nonatomic) NSString *agentId;
@property (assign, nonatomic) MatchLevel matchLevel;
@property (assign, nonatomic) BOOL saveDiffs;
@property (assign, nonatomic) BOOL ignoreCaret;
@property (assign, nonatomic) SessionType sessionType;
@property (strong, nonatomic) BatchInfo *batch;
@property (copy, nonatomic, nullable) NSString *baselineEnvName;
@property (copy, nonatomic) NSString *appName;
@property (copy, nonatomic) NSString *testName;
@property (assign, nonatomic) CGSize viewportSize;
@property (assign, nonatomic) BOOL ignoreDisplacements;
@property (assign, nonatomic) BOOL enablePatterns;
@property (strong, nonatomic) ImageMatchSettings *defaultMatchSettings;
@property (assign, nonatomic) NSInteger matchTimeout;
@property (copy, nonatomic) NSString *hostApp;
@property (copy, nonatomic) NSString *hostingAppInfo;
@property (copy, nonatomic) NSString *hostOS;
@property (copy, nonatomic) NSString *osInfo;
@property (assign, nonatomic) BOOL saveNewTests;
@property (assign, nonatomic) BOOL saveFailedTests;
@property (copy, nonatomic) NSString *apiKey;
@property (copy, nonatomic) NSString *serverUrl;
@property (strong, nonatomic) AbstractProxySettings *proxy;
@property (strong, nonatomic, nullable) AccessibilitySettings *accessibilityValidation;
@property (assign, nonatomic) NSInteger stitchOverlap;

- (instancetype)initWithTestName:(NSString *)testName;
- (instancetype)initWithAppName:(NSString *)appName testName:(NSString *)testName viewportSize:(CGSize)viewportSize;
- (instancetype)initWithConfiguration:(ConfigurationBase *)configuration;

@end

NS_ASSUME_NONNULL_END
