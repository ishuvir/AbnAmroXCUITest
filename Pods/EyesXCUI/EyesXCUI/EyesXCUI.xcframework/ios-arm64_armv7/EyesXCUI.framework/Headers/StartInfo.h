//
//  StartInfo.h
// Licensed under the Applitools SDK License, which can be found here: https://www.applitools.com/eula/sdk

#import <Foundation/Foundation.h>

@class  DefaultMatchSettings;

@interface StartInfo : NSObject

@property (readonly, copy, nonatomic) NSString *sessionType;
@property (readonly, assign, nonatomic) BOOL isTransient;
@property (readonly, assign, nonatomic) BOOL ignoreBaseline;
@property (readonly, copy, nonatomic) NSString *appIdOrName;
@property (readonly, assign, nonatomic) BOOL compareWithParentBranch;
@property (readonly, copy, nonatomic) NSString *scenarioIdOrName;
@property (readonly, copy, nonatomic) NSString *matchLevel;
@property (readonly, strong, nonatomic) DefaultMatchSettings *defaultMatchSettings;
@property (readonly, copy, nonatomic) NSString *agentId;

@end

