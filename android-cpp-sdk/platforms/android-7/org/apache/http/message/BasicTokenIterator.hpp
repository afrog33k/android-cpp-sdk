/*================================================================================
  code generated by: java2cpp
  class: org.apache.http.message.BasicTokenIterator
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_MESSAGE_BASICTOKENITERATOR_HPP_DECL
#define J2CPP_ORG_APACHE_HTTP_MESSAGE_BASICTOKENITERATOR_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace org { namespace apache { namespace http { class HeaderIterator; } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { class TokenIterator; } } } }


#include <java/lang/Object.hpp>
#include <java/lang/String.hpp>
#include <org/apache/http/HeaderIterator.hpp>
#include <org/apache/http/TokenIterator.hpp>


namespace j2cpp {

namespace org { namespace apache { namespace http { namespace message {

	class BasicTokenIterator;
	class BasicTokenIterator
		: public cpp_object<BasicTokenIterator>
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
		J2CPP_DECLARE_METHOD(13)
		J2CPP_DECLARE_FIELD(0)
		J2CPP_DECLARE_FIELD(1)
		J2CPP_DECLARE_FIELD(2)
		J2CPP_DECLARE_FIELD(3)
		J2CPP_DECLARE_FIELD(4)

		explicit BasicTokenIterator(jobject jobj)
		: cpp_object<BasicTokenIterator>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<org::apache::http::TokenIterator>() const;


		BasicTokenIterator(local_ref< org::apache::http::HeaderIterator > const&);
		cpp_boolean hasNext();
		local_ref< java::lang::String > nextToken();
		local_ref< java::lang::Object > next();
		void remove();

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), local_ref< java::lang::String > > HTTP_SEPARATORS;
	}; //class BasicTokenIterator

} //namespace message
} //namespace http
} //namespace apache
} //namespace org

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_MESSAGE_BASICTOKENITERATOR_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_MESSAGE_BASICTOKENITERATOR_HPP_IMPL
#define J2CPP_ORG_APACHE_HTTP_MESSAGE_BASICTOKENITERATOR_HPP_IMPL

namespace j2cpp {



org::apache::http::message::BasicTokenIterator::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jtype());
}

org::apache::http::message::BasicTokenIterator::operator local_ref<org::apache::http::TokenIterator>() const
{
	return local_ref<org::apache::http::TokenIterator>(get_jtype());
}


org::apache::http::message::BasicTokenIterator::BasicTokenIterator(local_ref< org::apache::http::HeaderIterator > const &a0)
: cpp_object<org::apache::http::message::BasicTokenIterator>(
	environment::get().get_jenv()->NewObject(
		get_class<org::apache::http::message::BasicTokenIterator::J2CPP_CLASS_NAME>(),
		get_method_id<org::apache::http::message::BasicTokenIterator::J2CPP_CLASS_NAME, org::apache::http::message::BasicTokenIterator::J2CPP_METHOD_NAME(0), org::apache::http::message::BasicTokenIterator::J2CPP_METHOD_SIGNATURE(0), false>(),
		a0.get_jtype()
	)
)
{
}


cpp_boolean org::apache::http::message::BasicTokenIterator::hasNext()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>()
		)
	);
}

local_ref< java::lang::String > org::apache::http::message::BasicTokenIterator::nextToken()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>()
		)
	);
}

local_ref< java::lang::Object > org::apache::http::message::BasicTokenIterator::next()
{
	return local_ref< java::lang::Object >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>()
		)
	);
}

void org::apache::http::message::BasicTokenIterator::remove()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>()
		)
	);
}











static_field<
	org::apache::http::message::BasicTokenIterator::J2CPP_CLASS_NAME,
	org::apache::http::message::BasicTokenIterator::J2CPP_FIELD_NAME(0),
	org::apache::http::message::BasicTokenIterator::J2CPP_FIELD_SIGNATURE(0),
	local_ref< java::lang::String >
> org::apache::http::message::BasicTokenIterator::HTTP_SEPARATORS;


J2CPP_DEFINE_CLASS(org::apache::http::message::BasicTokenIterator,"org/apache/http/message/BasicTokenIterator")
J2CPP_DEFINE_METHOD(org::apache::http::message::BasicTokenIterator,0,"<init>","(Lorg/apache/http/HeaderIterator;)V")
J2CPP_DEFINE_METHOD(org::apache::http::message::BasicTokenIterator,1,"hasNext","()Z")
J2CPP_DEFINE_METHOD(org::apache::http::message::BasicTokenIterator,2,"nextToken","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(org::apache::http::message::BasicTokenIterator,3,"next","()Ljava/lang/Object;")
J2CPP_DEFINE_METHOD(org::apache::http::message::BasicTokenIterator,4,"remove","()V")
J2CPP_DEFINE_METHOD(org::apache::http::message::BasicTokenIterator,5,"findNext","(I)I")
J2CPP_DEFINE_METHOD(org::apache::http::message::BasicTokenIterator,6,"createToken","(Ljava/lang/String;II)Ljava/lang/String;")
J2CPP_DEFINE_METHOD(org::apache::http::message::BasicTokenIterator,7,"findTokenStart","(I)I")
J2CPP_DEFINE_METHOD(org::apache::http::message::BasicTokenIterator,8,"findTokenSeparator","(I)I")
J2CPP_DEFINE_METHOD(org::apache::http::message::BasicTokenIterator,9,"findTokenEnd","(I)I")
J2CPP_DEFINE_METHOD(org::apache::http::message::BasicTokenIterator,10,"isTokenSeparator","(C)Z")
J2CPP_DEFINE_METHOD(org::apache::http::message::BasicTokenIterator,11,"isWhitespace","(C)Z")
J2CPP_DEFINE_METHOD(org::apache::http::message::BasicTokenIterator,12,"isTokenChar","(C)Z")
J2CPP_DEFINE_METHOD(org::apache::http::message::BasicTokenIterator,13,"isHttpSeparator","(C)Z")
J2CPP_DEFINE_FIELD(org::apache::http::message::BasicTokenIterator,0,"HTTP_SEPARATORS","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(org::apache::http::message::BasicTokenIterator,1,"headerIt","Lorg/apache/http/HeaderIterator;")
J2CPP_DEFINE_FIELD(org::apache::http::message::BasicTokenIterator,2,"currentHeader","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(org::apache::http::message::BasicTokenIterator,3,"currentToken","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(org::apache::http::message::BasicTokenIterator,4,"searchPos","I")

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_MESSAGE_BASICTOKENITERATOR_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION