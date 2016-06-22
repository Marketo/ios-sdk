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
sudo gem install cocoapods
#####2. Change directory to your project directory and create a Podfile with smart defaults.
pod init
#####3. Open your Podfile.
open -a Xcode Podfile
#####4. Add the following line to your Podfile.
pod 'Marketo-iOS-SDK'
#####5. Save and close your Podfile.
#####6. Download and install Marketo iOS SDK.
pod install
#####7. Open workspace in Xcode. open App.xcworkspace

#Setup Swift Bridging Header  
#####1. Go to File > New > File and Select Header File:
![header](ScreenShots/Xcode-Choose-Header-File.png.png)

