// Licensed under the Applitools SDK License, which can be found here: https://www.applitools.com/eula/sdk

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@class AppOutput, Options;

@interface MatchWindowData : NSObject

@property (readonly, nonatomic) AppOutput *appOutput;
@property (readonly, nonatomic) Options *options;
@property (readonly, nonatomic) NSString *tag;
@property (readonly, nonatomic) NSString *agentSetup;

/*!
 @param appOutput The appOutput for the current matchWindow call.
 @param tag The tag of the window to be matched.
 @param options Encapsulates the "Options" section of the MatchExpectedOutput body data.
 */
- (instancetype)initWithAppOutput:(AppOutput *)appOutput tag:(NSString *)tag options:(Options *)options;
- (instancetype)initWithAppOutput:(AppOutput *)appOutput tag:(NSString *)tag options:(Options *)options agentSetup:(nullable NSString *)agentSetup;

@end

NS_ASSUME_NONNULL_END
