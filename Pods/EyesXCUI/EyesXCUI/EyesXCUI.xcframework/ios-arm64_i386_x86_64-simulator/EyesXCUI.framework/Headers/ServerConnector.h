// Licensed under the Applitools SDK License, which can be found here: https://www.applitools.com/eula/sdk


#import <Foundation/Foundation.h>

@class SessionStartInfo, RunningSession, RESTClient, MatchWindowData, MatchResult, TestResults, RenderingInfo, AppEnvironment, JobInfo;

@interface ServerConnector : NSObject

@property (copy, nonatomic) NSString *apiKey;
@property (copy, nonatomic) NSString *serverURL;
@property (strong, nonatomic) RESTClient *restClient;
@property (strong, nonatomic) RenderingInfo *renderingInfo;

/*!
 @param serverURL The URI of the rest server.
 @param apiKey The API key of your applitools Eyes account.
 @returns An instance of server connector.
 */
+ (instancetype)connectorWithServerURL:(NSString *)serverURL apiKey:(NSString *)apiKey;

/*!
 @abstract Starts a new running session in the agent. Based on the given parameters, this running session will either be linked to an existing session, or to
 a completely new session.
 @param sessionStartInfo The start parameters for the session.
 @param completionHandler A block object to be executed when session is created or error occured. This block has no return value and takes one argument: RunningSession object which represents the current running session.
 */
- (void)startSessionWithInfo:(SessionStartInfo *)sessionStartInfo completionHandler:(void(^)(RunningSession *session, NSError *error))completionHandler;

/*!
 @abstract Matches the current window (held by the WebDriver) to the expected window.
 @param runningSession The current agent's running session.
 @param matchData Encapsulation of a capture taken from the application.
 */
- (void)matchWindowForSession:(RunningSession *)runningSession matchData:(MatchWindowData *)matchData completionHandler:(void(^)(MatchResult *matchResult, NSError *error))completionHandler;
;

/*!
 @abstract Stops the running session.
 @param runningSession Object for the stopped running session.
 @param isAborted Session must be aborted.
 @param save Baseline of the test should be updated.
 @param completionHandler A block object to be executed when session is stopped or error occured. This block has no return value and takes one argument: TestResults object which          represents the result of current test.
 */
- (void)stopSession:(RunningSession *)runningSession isAborted:(BOOL)isAborted save:(BOOL)save completionHandler:(void(^)(TestResults *result, NSError *error))completionHandler;

- (void)takeJobInfoForJobs:(NSArray<JobInfo *> *)jobsInfo completionHandler:(void (^)(NSArray<AppEnvironment *> *, NSError *))completionHandler;

@end
