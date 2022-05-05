// Licensed under the Applitools SDK License, which can be found here: https://www.applitools.com/eula/sdk

#import <Foundation/Foundation.h>

@class StartInfo, Branch, ExpectedAppOutput, ActualAppOutput;

@interface SessionResults : NSObject

@property (readonly, copy, nonatomic) NSString *sessionResultsId;
@property (readonly, assign, nonatomic) NSInteger revision;
@property (readonly, copy, nonatomic) NSString *runningSessionId;
@property (readonly, assign, nonatomic) BOOL isAborted;
@property (readonly, assign, nonatomic) BOOL isStarred;
@property (readonly, strong, nonatomic) StartInfo *startInfo;
@property (readonly, copy, nonatomic) NSString *batchId;
@property (readonly, copy, nonatomic) NSString *secretToken;
@property (readonly, copy, nonatomic) NSString *state;
@property (readonly, copy, nonatomic) NSString *status;
@property (readonly, assign, nonatomic) BOOL isDefaultStatus;
@property (readonly, copy, nonatomic) NSString *startedAt;
@property (readonly, assign, nonatomic) NSInteger duration;
@property (readonly, assign, nonatomic) BOOL isDifferent;
@property (readonly, strong, nonatomic) Branch *branch;
@property (readonly, copy, nonatomic) NSArray<ExpectedAppOutput *> *expectedAppOutput;
@property (readonly, copy, nonatomic) NSArray<ActualAppOutput *> *actualAppOutput;
@property (readonly, copy, nonatomic) NSString *baselineId;
@property (readonly, copy, nonatomic) NSString *baselineRevId;
@property (readonly, copy, nonatomic) NSString *scenarioId;
@property (readonly, copy, nonatomic) NSString *scenarioName;
@property (readonly, copy, nonatomic) NSString *appId;
@property (readonly, copy, nonatomic) NSString *baselineModelId;
@property (readonly, copy, nonatomic) NSString *baselineEnvId;
@property (readonly, copy, nonatomic) NSString *appName;
@property (readonly, copy, nonatomic) NSString *baselineBranchName;
@property (readonly, assign, nonatomic) BOOL isNew;

@end

