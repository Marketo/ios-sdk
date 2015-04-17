//
// Marketo.h
//
// Marketo mobile engagement framework
// Version: 0.2
//
// Copyright (c) 2007-2015, Marketo, Inc. All rights reserved.


#import <Foundation/Foundation.h>

@interface MarketoLead : NSObject

- (id) init;

/**
 Update the lead's eamil
 */
-(void) setEmail:(NSString *) email;

/**
 Update the lead's gender e.g. male, female
 */
-(void) setGender:(NSString *) gender;

/**
 Update the lead's first name.
 */
-(void) setFirstName:(NSString *) firstName;

/** 
 Update the lead's last name.
*/
-(void) setLastName:(NSString *) lastName;

/**
 Update the lead's address.
 */
-(void) setAddress:(NSString *) address;

/**
 Update the lead's city.
 */
-(void) setCity:(NSString *) city;

/**
 Update the lead's state.
 */
-(void) setState:(NSString *) state;

/**
 Update the lead's country.
 */
-(void) setCountry:(NSString *) country;

/**
 Update the lead's zipcode.
 */
-(void) setPostalCode:(NSString *) postalCode;

/**
Update the lead's install source e.g. _facebookAds or bannerAds.
*/
-(void) setLeadSource:(NSString *) leadSource;

/**
 Update the lead's facebook id.
*/
-(void) setFacebookId:(NSString *) facebookId;

/**
 Update the lead's twitter id.
 */
-(void) setTwitterId:(NSString *) twitterId;

/**
 Update the lead's twitter id.
 */
-(void) setLinkedInId:(NSString *) LinkedInId;

/**
 Update the lead's users birthday in the format MM/DD/YYYY.
*/
-(void) setBirthDay:(NSString *) birthday;

/**
 Update the lead's facebook profile page url.
 */
-(void) setFacebookProfileURL:(NSString *) url;

/**
 Update the lead's faceboook profile picture url.
 */
-(void) setFacebookProfilePicURL:(NSString *) url;

/**
 Update the lead's custom attributes.
*/
-(void) setFieldName:(NSString *) name withValue:(NSString *) value;

/**
 Return lead attributes.
 */
-(NSDictionary *) userData;

@end
