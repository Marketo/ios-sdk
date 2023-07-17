//
// MKTSecuritySignature
// Marketo
// Marketo Mobile Engagement framework
//
// Copyright (c) 2007-2016, Marketo, Inc. All rights reserved.

/*!
 * @header MKTSecuritySignature
 * @discussion The MKTSecuritySignature class is used for secure communication.
 * @updated 2015-04-29
 */

#import <Foundation/Foundation.h>

@interface MKTSecuritySignature : NSObject

/*!
 * Returns a MKTSecuritySignature Object .
 * @return instance of class MKTSecuritySignature.
 */
- (id)initWithAccessKey:(NSString *)accessKey signature:(NSString *)signature timestamp:(NSString *)timestamp email:(NSString *)email;

/*!
 * Returns a AccessKey .
 * @return NSString containing AccessKey
 */
- (NSString *)getAccessKey;

/*!
 * Returns a Signature .
 * @return NSString containing Signature
 */
- (NSString *)getSignature;

/*!
 * Returns a TimeStamp .
 * @return NSString containing TimeStamp
 */
- (NSString *)getTimeStamp;

/*!
 * Returns a getEmail .
 * @return NSString containing Email
 */
- (NSString *)getEmail;

/*!
 * Returns MKTSecuritySignature valid or not  .
 * @return BOOL for MKTSecuritySignature is Valid .
 */
- (BOOL)isValid;

@end
