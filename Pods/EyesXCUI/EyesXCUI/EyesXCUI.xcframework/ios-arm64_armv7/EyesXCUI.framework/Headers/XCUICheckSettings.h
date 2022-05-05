// Licensed under the Applitools SDK License, which can be found here: https://www.applitools.com/eula/sdk

#import "CheckSettings.h"
#import "Region.h"
#import <XCTest/XCTest.h>

NS_ASSUME_NONNULL_BEGIN

@protocol XCUICheckTargetProtocol <NSObject>

- (nullable XCUIElement *)targetElement;

@end

@interface XCUICheckSettings : CheckSettings <XCUICheckTargetProtocol>

- (instancetype)initWithTargetElement:(XCUIElement *)targetElement;

- (instancetype)ignoreXCUIElements:(NSArray<XCUIElement *> *)elements;
- (instancetype)layoutXCUIElements:(NSArray<XCUIElement *> *)elements;
- (instancetype)strictXCUIElements:(NSArray<XCUIElement *> *)elements;
- (instancetype)contentXCUIElements:(NSArray<XCUIElement *> *)elements;

- (instancetype)floatingXCUIElement:(XCUIElement *)element maxUpOffset:(NSInteger)maxUpOffset maxDownOffset:(NSInteger)maxDownOffset maxRightOffset:(NSInteger)maxRightOffset maxLeftOffset:(NSInteger)maxLeftOffset;
- (instancetype)accessibilityXCUIElelement:(XCUIElement *)element type:(AccessibilityRegionType)type;

- (instancetype)region:(Region *)region;

- (instancetype)statusBarExists:(BOOL)statusBarExists API_AVAILABLE(ios(13));

@end

NS_ASSUME_NONNULL_END
