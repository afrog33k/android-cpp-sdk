/*================================================================================
  code generated by: java2cpp
  class: android.text.util.Rfc822Token
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_TEXT_UTIL_RFC822TOKEN_HPP_DECL
#define J2CPP_ANDROID_TEXT_UTIL_RFC822TOKEN_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace android { namespace text { namespace util {

	class Rfc822Token;
	class Rfc822Token
		: public cpp_object<Rfc822Token>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_METHOD(4)
		J2CPP_DECLARE_METHOD(5)
		J2CPP_DECLARE_METHOD(6)
		J2CPP_DECLARE_METHOD(7)
		J2CPP_DECLARE_METHOD(8)
		J2CPP_DECLARE_METHOD(9)
		J2CPP_DECLARE_METHOD(10)
		J2CPP_DECLARE_METHOD(11)
		J2CPP_DECLARE_METHOD(12)

		Rfc822Token(jobject jobj)
		: cpp_object<Rfc822Token>(jobj)
		{
		}

		local_ref< java::lang::String > getName();
		local_ref< java::lang::String > getAddress();
		local_ref< java::lang::String > getComment();
		void setName(local_ref< java::lang::String > const&);
		void setAddress(local_ref< java::lang::String > const&);
		void setComment(local_ref< java::lang::String > const&);
		local_ref< java::lang::String > toString();
		static local_ref< java::lang::String > quoteNameIfNecessary(local_ref< java::lang::String > const&);
		static local_ref< java::lang::String > quoteName(local_ref< java::lang::String > const&);
		static local_ref< java::lang::String > quoteComment(local_ref< java::lang::String > const&);
		cpp_int hashCode();
		cpp_boolean equals(local_ref< java::lang::Object > const&);
	}; //class Rfc822Token

} //namespace util
} //namespace text
} //namespace android


} //namespace j2cpp

#endif //J2CPP_ANDROID_TEXT_UTIL_RFC822TOKEN_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_TEXT_UTIL_RFC822TOKEN_HPP_IMPL
#define J2CPP_ANDROID_TEXT_UTIL_RFC822TOKEN_HPP_IMPL

namespace j2cpp {


template <>
local_ref< android::text::util::Rfc822Token > create< android::text::util::Rfc822Token>(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1, local_ref< java::lang::String > const &a2)
{
	return local_ref< android::text::util::Rfc822Token >(
		environment::get().get_jenv()->NewObject(
			get_class<android::text::util::Rfc822Token::J2CPP_CLASS_NAME>(),
			get_method_id<android::text::util::Rfc822Token::J2CPP_CLASS_NAME, android::text::util::Rfc822Token::J2CPP_METHOD_NAME(0), android::text::util::Rfc822Token::J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

local_ref< java::lang::String > android::text::util::Rfc822Token::getName()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>()
		)
	);
}

local_ref< java::lang::String > android::text::util::Rfc822Token::getAddress()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>()
		)
	);
}

local_ref< java::lang::String > android::text::util::Rfc822Token::getComment()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>()
		)
	);
}

void android::text::util::Rfc822Token::setName(local_ref< java::lang::String > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>(),
			a0.get_jtype()
		)
	);
}

void android::text::util::Rfc822Token::setAddress(local_ref< java::lang::String > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>(),
			a0.get_jtype()
		)
	);
}

void android::text::util::Rfc822Token::setComment(local_ref< java::lang::String > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::lang::String > android::text::util::Rfc822Token::toString()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(7), J2CPP_METHOD_SIGNATURE(7), false>()
		)
	);
}

local_ref< java::lang::String > android::text::util::Rfc822Token::quoteNameIfNecessary(local_ref< java::lang::String > const &a0)
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(8), J2CPP_METHOD_SIGNATURE(8), true>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::lang::String > android::text::util::Rfc822Token::quoteName(local_ref< java::lang::String > const &a0)
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(9), J2CPP_METHOD_SIGNATURE(9), true>(),
			a0.get_jtype()
		)
	);
}

local_ref< java::lang::String > android::text::util::Rfc822Token::quoteComment(local_ref< java::lang::String > const &a0)
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(10), J2CPP_METHOD_SIGNATURE(10), true>(),
			a0.get_jtype()
		)
	);
}

cpp_int android::text::util::Rfc822Token::hashCode()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(11), J2CPP_METHOD_SIGNATURE(11), false>()
		)
	);
}

cpp_boolean android::text::util::Rfc822Token::equals(local_ref< java::lang::Object > const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(12), J2CPP_METHOD_SIGNATURE(12), false>(),
			a0.get_jtype()
		)
	);
}


J2CPP_DEFINE_CLASS(android::text::util::Rfc822Token,"android/text/util/Rfc822Token")
J2CPP_DEFINE_METHOD(android::text::util::Rfc822Token,0,"<init>","(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(android::text::util::Rfc822Token,1,"getName","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::text::util::Rfc822Token,2,"getAddress","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::text::util::Rfc822Token,3,"getComment","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::text::util::Rfc822Token,4,"setName","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(android::text::util::Rfc822Token,5,"setAddress","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(android::text::util::Rfc822Token,6,"setComment","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(android::text::util::Rfc822Token,7,"toString","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::text::util::Rfc822Token,8,"quoteNameIfNecessary","(Ljava/lang/String;)Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::text::util::Rfc822Token,9,"quoteName","(Ljava/lang/String;)Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::text::util::Rfc822Token,10,"quoteComment","(Ljava/lang/String;)Ljava/lang/String;")
J2CPP_DEFINE_METHOD(android::text::util::Rfc822Token,11,"hashCode","()I")
J2CPP_DEFINE_METHOD(android::text::util::Rfc822Token,12,"equals","(Ljava/lang/Object;)Z")

} //namespace j2cpp

#endif //J2CPP_ANDROID_TEXT_UTIL_RFC822TOKEN_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION