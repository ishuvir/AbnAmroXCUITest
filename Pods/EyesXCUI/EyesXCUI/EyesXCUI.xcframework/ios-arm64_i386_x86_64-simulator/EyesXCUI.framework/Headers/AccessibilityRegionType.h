// Licensed under the Applitools SDK License, which can be found here: https://www.applitools.com/eula/sdk

#ifndef AccessibilityRegionType_h
#define AccessibilityRegionType_h

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSUInteger, AccessibilityRegionType) {
    AccessibilityRegionTypeIgnoreContrast,
    AccessibilityRegionTypeRegularText,
    AccessibilityRegionTypeLargeText,
    AccessibilityRegionTypeBoldText,
    AccessibilityRegionTypeGraphicalObject
};

#endif /* AccessibilityRegionType_h */
