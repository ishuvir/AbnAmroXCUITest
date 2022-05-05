// Licensed under the Applitools SDK License, which can be found here: https://www.applitools.com/eula/sdk

#import "EyesBase.h"
#import "CheckSettings.h"
#import "Configuration.h"
#import <XCTest/XCTest.h>

NS_ASSUME_NONNULL_BEGIN

@interface Eyes : EyesBase

@property (strong, nonatomic) Configuration *configuration;

/**
 Whether Eyes should force a full page screenshot or not.
 Current version of the SDK supports getting the full page screenshot only if scrollable view is UITableView or inherited from it.
 */
@property (assign, nonatomic) BOOL forceFullPageScreenshot;

/**
 The application that is supposed to be tested. [XCUIApplication new] instance by default.
 */
@property (strong, nonatomic, nullable) XCUIApplication *testedApplication;

/**
 @abstract Takes a snapshot of the application under test and matches it with the expected output.
 @param tag An optional tag to be associated with the snapshot.
 */
- (void)checkWindowWithTag:(nullable NSString *)tag;

/**
 @abstract Takes a snapshot of the application under test and matches a region of a specific element with the expected region output.
 @param element The element which represents the region to check.
 @param tag An optional tag to be associated with the snapshot.
 */
- (void)checkElement:(XCUIElement *)element tag:(nullable NSString *)tag;

/**
 @abstract Takes a snapshot of the application under test and matches a region of a specific element with the expected region output.
 @param region The region to check.
 @param tag An optional tag to be associated with the snapshot.
 */
- (void)checkRegion:(Region *)region tag:(nullable NSString *)tag;

- (void)closeAsync;

- (void)abortAsync;

/**
 Sets path to the instrument library: either UFG_lib.xcframework or EyesiOSHelper.xcframework.
 It should look like, /path/to/INSTRUMENT_LIB_NAME.xcframework
 */
+ (void)setInstrumentLibraryPath:(NSString *)instrumentLibraryPath;

/**
 Returns path the instrument library, that was set.
 */
+ (nullable NSString *)instrumentLibraryPath;

@end


@interface Eyes (FluentInterface)

- (void)checkWithTag:(nullable NSString *)tag andSettings:(id <CheckSettingsProtocol>)checkSettings;

@end

NS_ASSUME_NONNULL_END
