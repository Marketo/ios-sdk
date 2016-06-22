# Marketo Mobile SDK for iOS 0.6.0

The Marketo Mobile SDK allows integration with Marketo Mobile Engagement (MME).  

Installation instructions and more are [here](http://developers.marketo.com/documentation/mobile/ "Marketo for Mobile").

Change Log

v0.6.0
- InApp Notifications

v0.5.1 - v0.5.3
- Fixed new_install bug
- Fix for version bug

v0.5.0
- Advanced secure access
- Bitcode refactor

#Marketo iOS SDK Installation Guide
##Prerequisites
#####1. Register an application in Marketo Admin portal, get your application secret key and munchkin id.
#####2. Configure Android Push access learn here
#####3. Configure iOS Push access learn [here](http://developers.marketo.com/documentation/mobile/ "Marketo for Mobile").
##Install Framework via cocoapods 
#####1. Install CocoaPods.
``` 
sudo gem install cocoapods 
```
#####2. Change directory to your project directory and create a Podfile with smart defaults.
```
pod init
```
#####3. Open your Podfile.
```
open -a Xcode Podfile
```
#####4. Add the following line to your Podfile.
```
pod 'Marketo-iOS-SDK'
```
#####5. Save and close your Podfile.
#####6. Download and install Marketo iOS SDK.
```
pod install
```
#####7. Open workspace in Xcode. open App.xcworkspace

#Setup Swift Bridging Header  
#####1. Go to File > New > File and Select Header File:
![header](ScreenShots/Xcode-Choose-Header-File.png)

#####2. Name the file <ProjectName>-Bridging-Header
#####3. Go to Project->Target->Build Phases->Swift Compiler - Code Generation-> Add the following path to Objective-Bridging 
#####Header: $(PODS_ROOT)/<ProjectName>-Bridging-Header.h
![header](ScreenShots/build-phases.png)

#SDK Initialization 
#####Before you can use the Marketo iOS SDK, you must initialize it with your Munchkin Account Id and App Secret Key.  You can find each of these in the Marketo Admin area underneath Mobile Apps.
#####1. Open your AppDelegate.m or Bridging file (Swift) and import the Marketo.h header file.
```iOS
import <Marketo/Marketo.h>
```
#####2. Paste the following code inside the application:didFinishLaunchingWithOptions: function.
```iOS
// Objective-C
Marketo *sharedInstance = [Marketo sharedInstance];
[sharedInstance initializeWithMunchkinID:@"munchkinAccountId" appSecret:@"secretKey" launchOptions:launchOptions];

// Swift
let sharedInstance: Marketo = Marketo.sharedInstance()
sharedInstance.initializeWithMunchkinID("munchkinAccountId", appSecret: "secretKey", launchOptions: launchOptions)
```

#####3. Replace munkinAccountId and secretKey above using your Munchkin Account Id and Secret Key which are found in the Marketo Admin Mobile Apps section.
![header](ScreenShots/amobile2.png)

 #Setup Push Notification
#####1. Initiate Push notification Service : To enable push notification add below code .
```
// Objective-C
- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions{
if ([application respondsToSelector:@selector (registerUserNotificationSettings:)])
    {
#ifdef __IPHONE_8_0
        UIUserNotificationSettings *settings =
        [UIUserNotificationSettings settingsForTypes:(UIRemoteNotificationTypeBadge | UIRemoteNotificationTypeSound | UIRemoteNotificationTypeAlert) categories:nil];
        [application registerUserNotificationSettings:settings];
#endif
    }
    else
    {
        UIRemoteNotificationType myTypes = UIRemoteNotificationTypeBadge | UIRemoteNotificationTypeAlert | UIRemoteNotificationTypeSound;
        [application registerForRemoteNotificationTypes:myTypes];
    }
}

// Swift

  let settings = UIUserNotificationSettings(forTypes: [.Alert, .Badge, .Sound], categories: nil)
        UIApplication.sharedApplication().registerUserNotificationSettings(settings)
        UIApplication.sharedApplication().registerForRemoteNotifications()
        
```


