//
// MarketoActionMetadata.h
//
// Marketo Mobile Engagement framework
//
// Copyright (c) 2007-2016, Marketo, Inc. All rights reserved.

/*!
 * @header MarketoActionMetaData.h
 * @discussion The MarketoActionMetaData class is used to encapsulate the action's metadata.
 * @updated 2015-04-29
 */

#import <Foundation/Foundation.h>

@interface MarketoActionMetaData : NSObject

- (id)init;

/*!
 * Set the action type
 * @param type String phrase that describes the type of action
 */
- (void)setType:(NSString *)type;

/*!
 * Set the action details
 * @param details String that contains more details about the action
 */
- (void)setDetails:(NSString *)details;

/*!
 * Set the action metric
 * @param metric Number that represents the metric of the action
 */
- (void)setMetric:(NSNumber *)metric;

/*!
 * Set the action length
 * @param length Number that represents the length of the action
 */
- (void)setLength:(NSNumber *)length;

///*!
// * Set custom action metadata.
// * @param value String containing the value of the custom field
// */
//-(void) setFieldName:(NSString *) name withValue:(NSString *) value;

/*!
 * Return action metadata.
 * @return userData Dictionary containing action metadata
 */
- (NSDictionary *)actionMetadata;

@end