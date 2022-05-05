// Licensed under the Applitools SDK License, which can be found here: https://www.applitools.com/eula/sdk

#import <Foundation/Foundation.h>

/**
 A batch of tests.
 */
@interface BatchInfo : NSObject <NSCopying>

/**
 The name of batch or nil if anonymous.
 */
@property (readonly, copy, nonatomic) NSString *name;
    
/**
 Batch start time converted to string.
 */
@property (readonly, copy, nonatomic) NSString *startedAtString;
    
/**
 The id of the current batch.
 */
@property (copy, nonatomic) NSString *batchId;

/**
 Connect batches to one another.
 */
@property (copy, nonatomic) NSString *sequenceName;

/**
  Flag that determines if Eyes should inform user about batch is completed. NO by deafult.
 */
@property (assign, nonatomic, getter = isNotifyOnCompletion) BOOL notifyOnCompletion;

/**
 Creates a new BatchInfo instance.
 @param name Name of batch or nil if anonymous.
 */
- (instancetype)initWithName:(NSString *)name;

/**
 Creates a new BatchInfo instance.
 @param name Name of batch or nil if anonymous.
 @param startedAt Batch start time
 */
- (instancetype)initWithName:(NSString *)name startedAt:(NSDate *)startedAt;

@end
