//
//  RenderInfo.h
//  EyesXCUI
//
//  Created by Anton Chuev on 13.04.2021.
//  Copyright © 2021 Applitools. All rights reserved.
//

#import <Foundation/Foundation.h>

@class IosDeviceInfo;

NS_ASSUME_NONNULL_BEGIN

@interface JobInfo : NSObject

- (instancetype)initWithDeviceInfo:(IosDeviceInfo *)deviceInfo;

@end

NS_ASSUME_NONNULL_END
