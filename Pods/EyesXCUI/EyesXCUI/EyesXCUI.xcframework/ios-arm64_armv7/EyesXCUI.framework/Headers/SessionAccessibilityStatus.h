// Licensed under the Applitools SDK License, which can be found here: https://www.applitools.com/eula/sdk

#import <Foundation/Foundation.h>
#import "AccessibilityLevel.h"
#import "AccessibilityGuidelinesVersion.h"

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSUInteger, AccessibilityStatus) {
    AccessibilityStatusPassed,
    AccessibilityStatusFailed
};

@interface SessionAccessibilityStatus : NSObject

@property (readonly, assign, nonatomic) AccessibilityStatus status;
@property (readonly, assign, nonatomic) AccessibilityLevel level;
@property (readonly, assign, nonatomic) AccessibilityGuidelinesVersion version;

@end

NS_ASSUME_NONNULL_END
