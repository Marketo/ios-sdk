//
// Marketo.h
//
// Marketo Mobile Engagement framework
//
// Copyright (c) 2007-2016, Marketo, Inc. All rights reserved.

/*!
 * @header Marketo.h
 * @discussion The Marketo class is used to initialize the Marketo SDK.
 */

#import <Marketo/MKTSecuritySignature.h>
#import <Marketo/MarketoActionMetaData.h>
#import <Marketo/MarketoLead.h>
#import <UIKit/UIKit.h>
#import <UserNotifications/UserNotifications.h>
@interface Marketo : NSObject

/*!
 * Returns the App Secret used to initialize Marketo SDK.
 */
@property (nonatomic, readonly) NSString *appSecret;

/*!
 * Returns a singleton that is an instance of Marketo SDK.
 * @return Singleton instance of class Marketo.
 */
+ (Marketo *)sharedInstance;

/*!
 * Initializes Marketo SDK. This method should be called before calling any other Marketo SDK method.
 * @param appSecret An app secret used to initialize the app
 * @param munchkinID Used to connect to marketo end-point
 */
- (void)initializeWithMunchkinID:(NSString *)munchkinID appSecret:(NSString *)appSecret launchOptions:(NSDictionary *)launchOptions;

/*!
 * The timeout interval, in seconds. If during a connection attempt the request remains idle for longer
 * than the timeout interval, the request is considered to have timed out.
 * The default timeout interval is 10 seconds.
 */
- (void)setTimeoutInterval:(NSInteger)seconds;

/*!
 * Reports an action to the Marketo server
 * @param actionName The action to be reported
 * @param metaData Optional - Use the setter methods to send metadata
 *           ex:-     {
 *            			"Action Type":"Shopping",
 *            			"Action Details":"RedShirt",
 *            			"Action Metric":10,
 *                      "Action Length":30
 *           			}
 */
- (void)reportAction:(NSString *)actionName withMetaData:(MarketoActionMetaData *)metaData;

/*!
 * This function updates a single lead record from Marketo.
 * If a lead without a matching email isn't found in the database, a new one is created
 * @param lead Marketo Lead Object
 */
- (void)associateLead:(MarketoLead *)lead;

/*!
 * This function registers a Push Token.
 * If a Push Token is already registered, just use registered token.
 * @param deviceToken Token in form of NSData
 */
- (void)registerPushDeviceToken:(NSData *)deviceToken;

/*!
 * This function unregisters a Push Token.
 * If a Push Token is already registered, call unregisterPushDeviceToken to unregister token.
 */
- (void)unregisterPushDeviceToken;

/*!
 * This tracks the push notification by sending an activity.
 * @param userInfo Dictionary containing push payload
 */
- (void)trackPushNotification:(NSDictionary *)userInfo;

/*!
 * This function allows you to handle a push notificaiton appropriatly.
 * @param userInfo Dictionary containing push payload
 */
- (void)handlePushNotification:(NSDictionary *)userInfo;

/*!
 * This function checks to see if a push token is already registered.
 * @return true if push token has already been registered
 */
- (BOOL)isPushRegistered;

/*!
 * Deep link handler for Marketo Url and scheema
 * @param application The singleton app object
 * @param url The URL resource to open. This resource can be a network resource or a file. For information about the Apple-registered URL schemes, see
 * @param sourceApplication The bundle ID of the app that is requesting your app to open the URL (url)
 * @param annotation A property list object supplied by the source app to communicate information to the receiving app.
 */
- (BOOL)application:(UIApplication *)application openURL:(NSURL *)url sourceApplication:(NSString *)sourceApplication annotation:(id)annotation;

/*!
* Override System's didReceiveLocalNotification method to Operate PushNotification
* @param application The singleton app object
 * @param notification UILocalNotification object supplied by the source app.
*/
- (void)application:(UIApplication *)application didReceiveLocalNotification:(UILocalNotification *)notification;

/*!
 * Override System's userNotificationCenter method to Operate PushNotification
 * @param center The UNUserNotificationCenter object supplied by the source app.
 * @param response UNNotificationResponse object supplied by the source app.
 * @param completionHandler object supplied by the source app.
 */
- (void)userNotificationCenter:(UNUserNotificationCenter *)center
didReceiveNotificationResponse:(UNNotificationResponse *)response
         withCompletionHandler:(void(^)())completionHandler;
/*!
 * Set security Signature for Authentication
 * @param token - The Security Token recived from client server
 */
- (void)setSecureSignature:(MKTSecuritySignature *)conf;

/*!
 * Remove security Signature from SDK .
 *
 */
- (void)removeSecureSignature;

/*!
 * Returns a BOOL for the SDK enabled the Secure mode or not .
 *
 */
- (BOOL)isSecureModeEnabled;

/*!
 * Returns a Device ID used by SDK.
 *
 */
- (NSString *)getDeviceId;

/*!
 * Force report all data to Server.
 *
 */
- (void)reportAll;

/*!
 * This object should be initialized via shared instance
 */
- (id)init __attribute__ ((unavailable ("cannot use init for this class, use +(Marketo*)sharedInstance instead")));

@end
