# Marketo iOS-framework 0.3.2
=============


<strong>Step I: Configure Your Application</strong>

1. Login to Marketo Admin
2. Create a mobile application
3. Get Marketo Secret Key


<strong>Step I: Cocoapod Users</strong>

If you are using then add following line in you Podfile


platform :ios, '6.0' <br>
pod 'Marketo-iOS-SDK', :git =>'https://github.com/Marketo/ios-sdk.git'

Or 

<strong>Step II: Unzip and Install</strong>

1. Make sure you are using the latest version of Xcode (v4.6+) and targeting iOS 4.3 or higher.
2. Download https://github.com/Marketo/ios-sdk/archive/master.zip
2. Unzip the file and drag the Marketo.framework folder into your Xcode project folder target.


<strong>Step II|: Link libraries</strong>

1.Select you project in Xcode<br>
2.Click your app name under Targets<br>
3.Select the Build Phases tab<br>
4.Expand the Link Binary With Libraries<br>


<strong> Step IV: Add the following frameworks:</strong>

1.SystemConfiguration.framework<br>
2.Security.framework<br>
3.CoreTelephony.framework<br>
4.CoreData.framework

<strong> Step V: Import, Buld & Run</strong>

1. Open your AppDelegate.m file. Import Marketo header
2. Build your application. 

<strong>Run!</strong>
