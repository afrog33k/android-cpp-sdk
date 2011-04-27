/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: android.text.style.ParagraphStyle
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_TEXT_STYLE_PARAGRAPHSTYLE_HPP_DECL
#define J2CPP_ANDROID_TEXT_STYLE_PARAGRAPHSTYLE_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <java/lang/Object.hpp>


namespace j2cpp {

namespace android { namespace text { namespace style {

	class ParagraphStyle;
	class ParagraphStyle
		: public object<ParagraphStyle>
	{
	public:

		J2CPP_DECLARE_CLASS


		explicit ParagraphStyle(jobject jobj)
		: object<ParagraphStyle>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;

	}; //class ParagraphStyle

} //namespace style
} //namespace text
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_TEXT_STYLE_PARAGRAPHSTYLE_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_TEXT_STYLE_PARAGRAPHSTYLE_HPP_IMPL
#define J2CPP_ANDROID_TEXT_STYLE_PARAGRAPHSTYLE_HPP_IMPL

namespace j2cpp {



android::text::style::ParagraphStyle::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

J2CPP_DEFINE_CLASS(android::text::style::ParagraphStyle,"android/text/style/ParagraphStyle")

} //namespace j2cpp

#endif //J2CPP_ANDROID_TEXT_STYLE_PARAGRAPHSTYLE_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION