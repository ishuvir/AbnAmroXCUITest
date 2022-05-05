// Licensed under the Applitools SDK License, which can be found here: https://www.applitools.com/eula/sdk

#import <Foundation/Foundation.h>

@class Region;

@interface Annotations : NSObject

@property (readonly, copy, nonatomic) NSArray<Region *> *ignore;
@property (readonly, copy, nonatomic) NSArray<Region *> *strict;
@property (readonly, copy, nonatomic) NSArray<Region *> *content;
@property (readonly, copy, nonatomic) NSArray<Region *> *layout;

@end
