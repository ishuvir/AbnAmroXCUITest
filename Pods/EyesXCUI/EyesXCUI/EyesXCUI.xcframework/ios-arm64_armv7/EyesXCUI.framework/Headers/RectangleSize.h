// Licensed under the Applitools SDK License, which can be found here: https://www.applitools.com/eula/sdk

#import <Foundation/Foundation.h>
#import <CoreGraphics/CoreGraphics.h>

NS_ASSUME_NONNULL_BEGIN

@interface RectangleSize : NSObject

@property (assign, readonly, nonatomic) CGFloat width;
@property (assign, readonly, nonatomic) CGFloat height;
@property (assign, readonly, nonatomic) CGSize size;

- (instancetype)initWithSize:(CGSize)size;
- (BOOL)isEmpty;

@end

NS_ASSUME_NONNULL_END
