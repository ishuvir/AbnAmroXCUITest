// Licensed under the Applitools SDK License, which can be found here: https://www.applitools.com/eula/sdk

#import <Foundation/Foundation.h>
#import <CoreGraphics/CoreGraphics.h>
#import "Region.h"
#import "AccessibilityRegionByRectangle.h"
#import "AccessibilitySettings.h"

NS_ASSUME_NONNULL_BEGIN

@interface DefaultMatchSettings : NSObject

/**
 Sets an array of accessibility regions.
 */
@property (copy, readonly, nonatomic) NSArray<AccessibilityRegionByRectangle *> *accessibility;
@property (strong, readonly, nonatomic, nullable) AccessibilitySettings *accessibilityValidation;
@property (copy, readonly, nonatomic) NSArray<Region *> *content;
@property (readonly, assign, nonatomic) BOOL enablePatterns;
@property (copy, readonly, nonatomic) NSArray<Region *> *floating;
@property (copy, readonly, nonatomic) NSArray<Region *> *ignore;
@property (assign, readonly, nonatomic) BOOL ignoreCaret;
@property (assign, readonly, nonatomic) BOOL ignoreDisplacements;
@property (copy, readonly, nonatomic) NSArray<Region *> *layout;
@property (copy, readonly, nonatomic) NSString *matchLevel;
@property (assign, readonly, nonatomic) NSInteger remainder;
@property (assign, readonly, nonatomic) NSInteger scale;
@property (assign, readonly, nonatomic) NSInteger splitBottomHeight;
@property (assign, readonly, nonatomic) NSInteger splitTopHeight;
@property (copy, readonly, nonatomic) NSArray<Region *> *strict;

@end

NS_ASSUME_NONNULL_END
