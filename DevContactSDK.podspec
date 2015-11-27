
Pod::Spec.new do |s|
  s.name             = "DevContactSDK"
  s.version          = "1.0.0"
  s.summary          = "DevContact iOS SDK by DevContact."

#s.description      = "This the DevContact iOS SDK."

  s.homepage         = "https://github.com/DevContact/DevContactSDK-iOS"
  s.license          = "DevContact: Copyright 2015 DevContact, Inc. All Rights Reserved. Use of this software is subject to the terms and conditions of the DevContact Software and Services Agreement located at https://www.devcontact.com/terms."
  s.author           = { "DevContact" => "info@devcontact.com" }
  s.source           = { :git => "https://github.com/DevContact/DevContactSDK.git", :tag => s.version.to_s }

  s.platform     = :ios, '7.0'
  s.requires_arc = false

  s.resource = "Pod/DevContactSDK.bundle"
  s.frameworks = 'UIKit', 'Foundation', 'Security', 'CFNetwork', 'QuartzCore', 'CoreGraphics', 'SystemConfiguration', 'CoreData'
  s.vendored_frameworks = "Pod/DevContactSDK.framework"
end
