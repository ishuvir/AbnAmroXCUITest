// Licensed under the Applitools SDK License, which can be found here: https://www.applitools.com/eula/sdk

#import <Foundation/Foundation.h>
#import <XCTest/XCTest.h>
#import "XCUICheckSettings.h"
#import "Region.h"

@interface Target : NSObject

+ (XCUICheckSettings *)window;
+ (XCUICheckSettings *)element:(XCUIElement *)element;
+ (XCUICheckSettings *)region:(Region *)region;

@end
