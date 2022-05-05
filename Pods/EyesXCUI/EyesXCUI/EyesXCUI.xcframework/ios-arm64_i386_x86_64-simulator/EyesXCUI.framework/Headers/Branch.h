// Licensed under the Applitools SDK License, which can be found here: https://www.applitools.com/eula/sdk

#import <Foundation/Foundation.h>

@interface Branch : NSObject

@property (readonly, copy, nonatomic) NSString *branchId;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, assign, nonatomic) BOOL isDeleted;

@end

