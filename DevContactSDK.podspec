
Pod::Spec.new do |s|
  s.name             = "DevContactSDK"
  s.version          = "1.1"
  s.summary          = "DevContact iOS SDK by DevContact."

  s.homepage         = "https://github.com/DevContact/DevContactSDK-iOS"
  s.license          = { :type => "Commercial", :file => "LICENSE" }
  s.author           = { "DevContact" => "info@devcontact.com" }
  s.source           = { :git => "https://github.com/DevContact/DevContactSDK-iOS.git", :tag => s.version }

  s.platform     = :ios, '7.0'
  s.requires_arc = false

  s.frameworks = 'UIKit', 'Foundation', 'Security', 'CFNetwork', 'QuartzCore', 'CoreGraphics', 'SystemConfiguration', 'CoreData'
  s.library  = 'icucore'
  s.vendored_frameworks = "Pod/DevContactSDK.framework"
end
