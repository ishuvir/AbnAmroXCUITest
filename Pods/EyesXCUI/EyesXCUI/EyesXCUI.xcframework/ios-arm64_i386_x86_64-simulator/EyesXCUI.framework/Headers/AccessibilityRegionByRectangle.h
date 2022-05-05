// Licensed under the Applitools SDK License, which can be found here: https://www.applitools.com/eula/sdk

#import "AccessibilityRegionType.h"
#import "Region.h"
#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface AccessibilityRegionByRectangle : NSObject<NSCopying>

@property (readonly, assign, nonatomic) NSInteger left;
@property (readonly, assign, nonatomic) NSInteger top;
@property (readonly, assign, nonatomic) NSInteger width;
@property (readonly, assign, nonatomic) NSInteger height;
@property (readonly, assign, nonatomic) AccessibilityRegionType type;
@property (readonly, nonatomic) Region *region;

- (instancetype)initWithLeft:(NSInteger)left
                         top:(NSInteger)top
                       width:(NSInteger)width
                      height:(NSInteger)height
                  regionType:(AccessibilityRegionType)type;

- (instancetype)initWithRegion:(Region *)region regionType:(AccessibilityRegionType)type;

@end

NS_ASSUME_NONNULL_END

