Pod::Spec.new do |s|
  s.name         = "TPKeyboardAvoiding"
  s.version      = "0.1"
  s.summary      = "A drop-in universal solution for moving text fields out of the way of the keyboard in iOS with support for keyboard Done button"
  s.homepage     = "http://atastypixel.com/blog/a-drop-in-universal-solution-for-moving-text-fields-out-of-the-way-of-the-keyboard/"

  # s.license      = { :type => 'MIT (example)', :file => 'FILE_LICENSE' }

  s.author       = { "Joshua Moore" => "josh@motionmobs.com" }

  s.source       = {
    :git => "https://github.com/joshuamoore/TPKeyboardAvoiding.git",
    :tag => "0.1"
  }

  s.platform     = :ios, '5.0'

  s.source_files = '*.{h,m}'

  s.requires_arc = true
end
