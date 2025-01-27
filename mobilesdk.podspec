Pod::Spec.new do |spec|
    spec.name                     = 'mobilesdk'
    spec.version                  = '1.0.0'
    spec.homepage                 = 'https://www.accesspaysuite.com/'
    spec.source                   = { :git=> 'https://github.com/Pay360/mobilesdk_ios_spec.git', :tag=> spec.version }
    spec.authors                  = 'Access PaySuite'
    spec.license                  = { :type => 'Copyright', :text => <<-LICENSE
Copyright 2024
Access PaySuite
LICENSE
}
    spec.summary                  = 'PaySuite Mobile SDK'
    spec.vendored_frameworks      = 'mobilesdk.xcframework'
    spec.libraries                = 'c++'
    spec.ios.deployment_target    = '17.5'
                
                
                
                
                
    spec.resources = ['build/compose/cocoapods/compose-resources']
end