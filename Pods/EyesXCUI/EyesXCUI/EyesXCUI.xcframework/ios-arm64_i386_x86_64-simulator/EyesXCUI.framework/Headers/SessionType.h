// Licensed under the Applitools SDK License, which can be found here: https://www.applitools.com/eula/sdk

#ifndef SessionType_h
#define SessionType_h

#import <Foundation/Foundation.h>

/**
 * The type of the session.
 */
typedef NS_ENUM(NSUInteger, SessionType)
{
    SessionTypeSequential, // Default type of sessions.
    SessionTypeProgression // A timing test session
};

#endif /* SessionType_h */
