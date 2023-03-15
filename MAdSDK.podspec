
Pod::Spec.new do |s|
  s.name             = 'MAdSDK'
  s.version          = '1.5'
  s.summary          = 'MAdiOS for iOS'
  s.license          = { :type => 'MIT', :file => 'Licenses/MAdSDK-LICENSE.txt' }
  s.description      = 'MAdSDK display ads.'
  s.homepage = 'http://developer.yahoo.com/flurry'
  s.author           = { 'MAdSDK' => 'integration@MAdSDK.com' }
  s.source           = { :git => 'https://github.com/asharmaa/MAdSDK.git', :tag => s.version.to_s }
  s.platforms        = { :ios => '13.0' }
  s.requires_arc     = false
  s.pod_target_xcconfig = { 'ONLY_ACTIVE_ARCH' => 'YES' }
  s.user_target_xcconfig = { 'ONLY_ACTIVE_ARCH' => 'YES' }
  s.default_subspec  = 'MAdiOS'
 

  s.subspec 'MAdiOS' do |ss|
    ss.ios.deployment_target = '13.0'
    ss.ios.frameworks = 'Foundation', 'SystemConfiguration', 'UIKit', 'Security'
    ss.ios.vendored_frameworks = 'MAdiOS.xcframework'
    ss.ios.dependency 'MAdSDK/OMSDK_Appnexus'

  end

   s.subspec 'OMSDK_Appnexus' do |ss|
    ss.ios.deployment_target = '13.0'
    ss.vendored_frameworks = "OMSDK_Appnexus.xcframework"
  end
end
