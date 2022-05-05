// Licensed under the Applitools SDK License, which can be found here: https://www.applitools.com/eula/sdk

#import <Foundation/Foundation.h>
#import "AccessibilityLevel.h"
#import "AccessibilityGuidelinesVersion.h"

NS_ASSUME_NONNULL_BEGIN

@interface AccessibilitySettings : NSObject <NSCopying>

@property (assign, nonatomic) AccessibilityLevel level;
@property (assign, nonatomic) AccessibilityGuidelinesVersion guidelinesVersion;

- (instancetype)initWithLevel:(AccessibilityLevel)level guidelinesVersion:(AccessibilityGuidelinesVersion)guidelinesVersion;

@end

NS_ASSUME_NONNULL_END
