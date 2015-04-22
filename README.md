# Marketo iOS-framework 0.3.2

## Initializing the SDK

Easiest way to add Marketo iOS SDK into your project is to use <a href="https://cocoapods.org">CocoaPods</a>:

<ol>
<li>Install Cocoapods by running <code>sudo gem install cocoapods</code>.</li>
<li>Create a file in your Xcode project directory called Podfile or CocoaPods provides a <code>pod init</code> command to create a Podfile with smart defaults</li>
<li>Add the following line to your Podfile</br>
<code>
pod 'Marketo-iOS-SDK', :git =>'https://github.com/Marketo/ios-sdk.git'
</code>
</li>
<li>Run pod install within your Xcode project directory. CocoaPods will download and install the Marketo iOS SDK.</li>
<li>Onceinstallation is complete,open up this workspace in Xcode.</li>
</ol>

## Initializing the SDK

1. Login to Marketo Admin
2. Create a new mobile application
3. Copy & paste the snipet with Secret Key & Munchkin-id
4. Open your AppDelegate.m file. Import Marketo.h 
5. Paste snipet into application:didFinishLaunchingWithOptions:
2. Build & run your application. 

You can also install the Marketo iOS SDK manually. To install it manually follow these steps.

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
