// Licensed under the Applitools SDK License, which can be found here: https://www.applitools.com/eula/sdk
#import <Foundation/Foundation.h>
#import "SessionType.h"

@class AppEnvironment, BatchInfo, ImageMatchSettings, StartSessionProperty;

@interface SessionStartInfo : NSObject

@property (readonly, copy, nonatomic) NSString *agentId;
@property (readonly, assign, nonatomic) SessionType sessionType;
@property (readonly, copy, nonatomic) NSString *appName;
@property (readonly, copy, nonatomic) NSString *testName;
@property (readonly, copy, nonatomic) NSString *baselineEnvName;
@property (readonly, nonatomic) AppEnvironment *appEnv;
@property (readonly, nonatomic) BatchInfo *batchInfo;
@property (readonly, copy, nonatomic) NSString *branchName;
@property (readonly, copy, nonatomic) NSString *parentBranchName;
@property (readonly, copy, nonatomic) NSString *baselineBranchName;
@property (readonly, nonatomic) ImageMatchSettings *defaultMatchSettings;
@property (readonly, copy, nonatomic) NSArray<StartSessionProperty *> *properties;

/*!
 @abstract Setup StartInfo instance with data, such as agentId, appName etc.
 */
- (instancetype)initWithAgentId:(NSString *)agentId
                    sessionType:(SessionType)sessionType
                        appName:(NSString *)appName
                       testName:(NSString *)testName
                baselineEnvName:(NSString *)baselineEnvName
                 appEnvironment:(AppEnvironment *)appEnv
                      batchInfo:(BatchInfo *)batchInfo
                     branchName:(NSString *)branchName
               parentBranchName:(NSString *)parentBranchName
             baselineBranchName:(NSString *)baselineBranchName
                      saveDiffs:(BOOL)saveDiffs
           defaultMatchSettings:(ImageMatchSettings *)defaultMatchSettings;

@end
