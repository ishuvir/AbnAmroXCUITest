// Licensed under the Applitools SDK License, which can be found here: https://www.applitools.com/eula/sdk

#import "MatchLevel.h"
#import "AccessibilitySettings.h"
#import "AccessibilityRegionByRectangle.h"
#import <Foundation/Foundation.h>

@class Region, FloatingMatchSettings, AccessibilityRegion;

NS_ASSUME_NONNULL_BEGIN

/**
 Encapsulates match settings for a session.
 */
@interface ImageMatchSettings : NSObject <NSCopying>

/**
 The "strictness" level of the match.
 */
@property (assign, nonatomic) MatchLevel matchLevel;

/**
 The parameters for the "IgnoreCaret" match settings.
 */
@property (assign, nonatomic) BOOL ignoreCaret;

/**
 Defined whether or not to handle movement of entire parts of the page.
 */
@property (assign, nonatomic) BOOL ignoreDispacements;

@property (assign, nonatomic) BOOL enablePatterns;

@property (assign, nonatomic) NSInteger splitBottomHeight;

@property (assign, nonatomic) NSInteger splitTopHeight;

@property (assign, nonatomic) NSInteger remainder;

@property (assign, nonatomic) NSInteger scale;

/**
 The array of regions to ignore.
 */
@property (copy, nonatomic) NSArray<Region *> *ignoredRegions;

/**
 The array of regions to check using the Layout method.
 */
@property (copy, nonatomic) NSArray<Region *> *layoutRegions;

/**
 The array of regions to check using the Strict method.
 */
@property (copy, nonatomic) NSArray<Region *> *strictRegions;

/**
 The arrayof regions to check using the Content method.
 */
@property (copy, nonatomic) NSArray<Region *> *contentRegions;

/**
 Sets an array of floating regions.
 */
@property (copy, nonatomic) NSArray<FloatingMatchSettings *> *floatingRegions;

/**
 Sets an array of accessibility regions.
 */
@property (copy, nonatomic) NSArray<AccessibilityRegionByRectangle *> *accessibility;

@property (strong, nonatomic, nullable) AccessibilitySettings *accessibilityValidation;

+ (instancetype)defaultImageMatchSettings;
- (instancetype)initWithMatchLevel:(MatchLevel)matchLevel;

@end

NS_ASSUME_NONNULL_END
