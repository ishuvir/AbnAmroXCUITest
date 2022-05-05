// Licensed under the Applitools SDK License, which can be found here: https://www.applitools.com/eula/sdk

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface StartSessionProperty : NSObject

@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSString *value;

- (instancetype)initWithName:(NSString *)name value:(NSString *)value;

@end

NS_ASSUME_NONNULL_END
