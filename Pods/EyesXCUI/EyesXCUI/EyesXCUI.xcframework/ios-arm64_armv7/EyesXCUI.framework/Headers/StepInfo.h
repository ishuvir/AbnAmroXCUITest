// Licensed under the Applitools SDK License, which can be found here: https://www.applitools.com/eula/sdk

#import <Foundation/Foundation.h>
#import "ApiUrls.h"
#import "AppUrls.h"

/**
* Encapsulates step information data received by the tests results.
*/
@interface StepInfo : NSObject

@property (readonly, nonatomic) ApiUrls *apiUrls;
@property (readonly, nonatomic) AppUrls *appUrls;
@property (readonly, nonatomic) NSString *name;
@property (assign, readonly, nonatomic) BOOL isDifferent;
@property (assign, readonly, nonatomic) BOOL hasBaselineImage;
@property (assign, readonly, nonatomic) BOOL hasCurrentImage;

@end
