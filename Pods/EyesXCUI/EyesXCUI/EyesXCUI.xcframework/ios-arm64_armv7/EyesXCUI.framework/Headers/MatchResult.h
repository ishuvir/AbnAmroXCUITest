// Licensed under the Applitools SDK License, which can be found here: https://www.applitools.com/eula/sdk

#import "EyesScreenshot.h"

@interface MatchResult : NSObject

@property (readonly, nonatomic) EyesScreenshot *screenshot;
@property (assign, nonatomic) BOOL asExpected;

@end
