//
// MarketoActionMetadata.h
//
// Marketo mobile engagement framework
// Version: 0.2
//
// Copyright (c) 2007-2015, Marketo, Inc. All rights reserved.

#import <Foundation/Foundation.h>

@interface MarketoActionMetaData : NSObject

- (id) init;

/**
 Set the action type
 */
-(void) setType:(NSString *) type;

/**
 Set the action details
 */
-(void) setDetails:(NSString *) details;

/**
 Set the action metric
 */
-(void) setMetric:(NSNumber *) metric;

/**
 Set the action length
 */
-(void) setLength:(NSNumber *) length;

///**
//Set custom action metadata.
// */
//-(void) setFieldName:(NSString *) name withValue:(NSString *) value;

/**
 Return action metadata.
 */
-(NSDictionary *) actionMetadata;

@end