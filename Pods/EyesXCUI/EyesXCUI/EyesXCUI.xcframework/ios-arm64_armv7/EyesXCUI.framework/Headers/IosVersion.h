//
//  IosVersion.h
//  EyesXCUI
//
//  Created by Anton Chuev on 09.04.2021.
//  Copyright © 2021 Applitools. All rights reserved.
//

#ifndef IosVersion_h
#define IosVersion_h

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSInteger, IosVersion) {
    IosVersionLatest = 0,
    IosVersionOneVersionBack,
    IosVersionCanary
};

#endif /* IosVersion_h */
