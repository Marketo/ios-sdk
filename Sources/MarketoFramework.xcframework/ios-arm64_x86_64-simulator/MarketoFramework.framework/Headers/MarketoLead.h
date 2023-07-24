//
// MarketoLead.h
//
// Marketo Mobile Engagement framework
//
// Copyright (c) 2007-2016, Marketo, Inc. All rights reserved.

/*!
 * @header MarketoLead.h
 * @discussion The MarketoLead class is used associate a lead with attributes gathered by the application.
 * @updated 2015-04-29
 */

#import <Foundation/Foundation.h>

@interface MarketoLead : NSObject

- (id)init;

/*!
 * Update the lead's email.
 * @param email The email to be associated with the device
 */
- (void)setEmail:(NSString *)email;

/*!
 * Update the lead's gender.
 * @param gender String that represents lead's gender. ex. male, female
 */
- (void)setGender:(NSString *)gender;

/*!
 * Update the lead's first name.
 * @param firstName String containing lead's first name
 */
- (void)setFirstName:(NSString *)firstName;

/*!
 * Update the lead's last name.
 * @param lastName String containing lead's last name
 */
- (void)setLastName:(NSString *)lastName;

/*!
 * Update the lead's address.
 * @param address String containing address of the lead
 */
- (void)setAddress:(NSString *)address;

/*!
 * Update the lead's city.
 * @param city String containing name of the lead's city name
 */
- (void)setCity:(NSString *)city;

/*!
 * Update the lead's state.
 * @param state String containing the lead's state name
 */
- (void)setState:(NSString *)state;

/*!
 * Update the lead's country.
 * @param country String containing the lead's country name
 */
- (void)setCountry:(NSString *)country;

/*!
 * Update the lead's zipcode.
 * @param postalCode String containing then lead's postal code
 */
- (void)setPostalCode:(NSString *)postalCode;

/*!
 * Update the lead's install source. ex. _facebookAds or bannerAds.
 * @param leadSource String containing the lead's source
 */
- (void)setLeadSource:(NSString *)leadSource;

/*!
 * Update the lead's facebook id.
 * @param facebookId String that contains the lead's facebook id
 */
- (void)setFacebookId:(NSString *)facebookId;

/*!
 * Update the lead's twitter id.
 * @param twitterId String that contains the lead's twitter id
 */
- (void)setTwitterId:(NSString *)twitterId;

/*!
 * Update the lead's Linkedin id.
 * @param LinkedInId String that contains the lead's LinkedIn id
 */
- (void)setLinkedInId:(NSString *)LinkedInId;

/*!
 * Update the lead's users birthday.
 * @param birthday String that contains the lead's birthday with format MM/DD/YYYY
 */
- (void)setBirthDay:(NSString *)birthday;

/*!
 * Update the lead's facebook profile page url.
 * @param url String that contains the url of the lead's Facebook profile page
 */
- (void)setFacebookProfileURL:(NSString *)url;

/*!
 * Update the lead's facebook profile picture url.
 * @param url String that contains the url of the lead's Facebook profile picture
 */
- (void)setFacebookProfilePicURL:(NSString *)url;

/*!
 * Update the lead's custom attributes.
 * @param value String that represents the value of the custom field
 */
- (void)setFieldName:(NSString *)name withValue:(NSString *)value;

/*!
 * Return lead attributes.
 * @return userData Dictionary containing leadData
 */
- (NSDictionary *)userData;

@end
