Pod::Spec.new do |s|
s.name                = "Marketo-iOS-SDK"
s.version             = "0.7.1"
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

s.author              = { "Rudy Gomez" => "rgomez@marketo.com" }
s.source              = { :git => "https://github.com/Marketo/ios-sdk.git", :tag => s.version }
s.source_files		  = 'Marketo.framework/**/*.h'

s.platform            = :ios, '6.0'
s.requires_arc        = false

s.preserve_paths      = 'Marketo.framework'
s.public_header_files = 'Marketo.framework/**/*.h'
s.vendored_frameworks = "Marketo.framework"
s.frameworks          = 'SystemConfiguration', 'Security', 'CoreTelephony'
s.library			  = 'sqlite3'
s.resource_bundles 	  = {
    'MKTResources' => [
        'ResourcePod/**/*.{png,plist,storyboard}'
    ]
}
end
