Pod::Spec.new do |s|
s.name                = "Marketo-iOS-SDK"
s.version             = "0.8.5"
s.summary             = "Add Marketo Mobile Engagement to your project."
s.description         = <<-DESC
                            MarketoPod provides the following features:

                            * Create lead on app install
                            * Associate lead with user
                            * Track user actions
                            * Send push notifications
                            * In-app notifications
                            * Triggered campaigns
                        DESC
s.homepage            = "https://github.com/Marketo/ios-sdk.git"
s.license             = {
:type => 'Copyright',
:text => <<-LICENSE
Copyright 2015 Marketo, Inc. All rights reserved.
LICENSE
}

s.author              = { "Marketo, Adobe company" => "mbijapur@marketo.com" }
s.source              = { :git => "https://github.com/Marketo/ios-sdk.git", :tag => s.version, :branch => 'master' }
s.source_files		  = 'Sources/MarketoFramework.xcframework/**/*.h'

s.platform            = :ios, '12.0'
s.requires_arc        = false

s.preserve_paths      = 'Sources/MarketoFramework.xcframework'
s.public_header_files = 'Sources/MarketoFramework.xcframework/**/*.h'
s.vendored_frameworks = "Sources/MarketoFramework.xcframework"
s.frameworks          = 'SystemConfiguration', 'Security', 'CoreTelephony'
s.library			  = 'sqlite3'
s.resource_bundles 	  = {
    'MKTResources' => [
        'ResourcePod/**/*.{png,storyboard}'
    ]
}
end
