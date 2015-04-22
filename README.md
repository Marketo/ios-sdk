# Marketo iOS-framework 0.3.2

## Setup

<strong>Cocoapod Users</strong>

If you are using then add following line in you Podfile


platform :ios, '6.0' <br>
pod 'Marketo-iOS-SDK', :git =>'https://github.com/Marketo/ios-sdk.git'

Or 

<strong>Step I: Unzip and Install</strong>

1. Make sure you are using the latest version of Xcode (v4.6+) and targeting iOS 4.3 or higher.
2. Download https://github.com/Marketo/ios-sdk/archive/master.zip
2. Unzip the file and drag the Marketo.framework folder into your Xcode project folder target.


<strong>Step II: Link libraries</strong>

1.Select you project in Xcode<br>
2.Click your app name under Targets<br>
3.Select the Build Phases tab<br>
4.Expand the Link Binary With Libraries<br>


<strong> Step III: Add the following frameworks:</strong>

1.SystemConfiguration.framework<br>
2.Security.framework<br>
3.CoreTelephony.framework<br>
4.libsqlite3.dylib

## Configure

<strong>Import, Buld & Run</strong>

1. Login to Marketo Admin
2. Create a mobile application
3. Copy snipet with Secret Key & Munchkin-id
4. Open your AppDelegate.m file. Import Marketo header
5. Paste snipet into application:didFinishLaunchingWithOptions:
2. Build your application. 

<strong>Run!</strong>
