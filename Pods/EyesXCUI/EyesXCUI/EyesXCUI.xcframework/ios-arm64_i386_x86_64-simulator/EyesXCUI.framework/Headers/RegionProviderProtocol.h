// Licensed under the Applitools SDK License, which can be found here: https://www.applitools.com/eula/sdk

#import "Region.h"

@protocol RegionProviderProtocol <NSObject>

- (Region *)getRegion;

@end
