/*================================================================================
  code generated by: java2cpp
  class: org.apache.http.impl.cookie.RFC2965DomainAttributeHandler
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_IMPL_COOKIE_RFC2965DOMAINATTRIBUTEHANDLER_HPP_DECL
#define J2CPP_ORG_APACHE_HTTP_IMPL_COOKIE_RFC2965DOMAINATTRIBUTEHANDLER_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace cookie { class SetCookie; } } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace cookie { class CookieOrigin; } } } } }
namespace j2cpp { namespace org { namespace apache { namespace http { namespace cookie { class Cookie; } } } } }


#include <java/lang/String.hpp>
#include <org/apache/http/cookie/Cookie.hpp>
#include <org/apache/http/cookie/CookieOrigin.hpp>
#include <org/apache/http/cookie/SetCookie.hpp>


namespace j2cpp {

namespace org { namespace apache { namespace http { namespace impl { namespace cookie {

	class RFC2965DomainAttributeHandler;
	class RFC2965DomainAttributeHandler
		: public cpp_object<RFC2965DomainAttributeHandler>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
		J2CPP_DECLARE_METHOD(4)

		RFC2965DomainAttributeHandler(jobject jobj)
		: cpp_object<RFC2965DomainAttributeHandler>(jobj)
		{
		}

		void parse(local_ref< org::apache::http::cookie::SetCookie > const&, local_ref< java::lang::String > const&);
		cpp_boolean domainMatch(local_ref< java::lang::String > const&, local_ref< java::lang::String > const&);
		void validate(local_ref< org::apache::http::cookie::Cookie > const&, local_ref< org::apache::http::cookie::CookieOrigin > const&);
		cpp_boolean match(local_ref< org::apache::http::cookie::Cookie > const&, local_ref< org::apache::http::cookie::CookieOrigin > const&);
	}; //class RFC2965DomainAttributeHandler

} //namespace cookie
} //namespace impl
} //namespace http
} //namespace apache
} //namespace org


} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_IMPL_COOKIE_RFC2965DOMAINATTRIBUTEHANDLER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_IMPL_COOKIE_RFC2965DOMAINATTRIBUTEHANDLER_HPP_IMPL
#define J2CPP_ORG_APACHE_HTTP_IMPL_COOKIE_RFC2965DOMAINATTRIBUTEHANDLER_HPP_IMPL

namespace j2cpp {


template <>
local_ref< org::apache::http::impl::cookie::RFC2965DomainAttributeHandler > create< org::apache::http::impl::cookie::RFC2965DomainAttributeHandler>()
{
	return local_ref< org::apache::http::impl::cookie::RFC2965DomainAttributeHandler >(
		environment::get().get_jenv()->NewObject(
			get_class<org::apache::http::impl::cookie::RFC2965DomainAttributeHandler::J2CPP_CLASS_NAME>(),
			get_method_id<org::apache::http::impl::cookie::RFC2965DomainAttributeHandler::J2CPP_CLASS_NAME, org::apache::http::impl::cookie::RFC2965DomainAttributeHandler::J2CPP_METHOD_NAME(0), org::apache::http::impl::cookie::RFC2965DomainAttributeHandler::J2CPP_METHOD_SIGNATURE(0), false>()
		)
	);
}

void org::apache::http::impl::cookie::RFC2965DomainAttributeHandler::parse(local_ref< org::apache::http::cookie::SetCookie > const &a0, local_ref< java::lang::String > const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

cpp_boolean org::apache::http::impl::cookie::RFC2965DomainAttributeHandler::domainMatch(local_ref< java::lang::String > const &a0, local_ref< java::lang::String > const &a1)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void org::apache::http::impl::cookie::RFC2965DomainAttributeHandler::validate(local_ref< org::apache::http::cookie::Cookie > const &a0, local_ref< org::apache::http::cookie::CookieOrigin > const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

cpp_boolean org::apache::http::impl::cookie::RFC2965DomainAttributeHandler::match(local_ref< org::apache::http::cookie::Cookie > const &a0, local_ref< org::apache::http::cookie::CookieOrigin > const &a1)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}


J2CPP_DEFINE_CLASS(org::apache::http::impl::cookie::RFC2965DomainAttributeHandler,"org/apache/http/impl/cookie/RFC2965DomainAttributeHandler")
J2CPP_DEFINE_METHOD(org::apache::http::impl::cookie::RFC2965DomainAttributeHandler,0,"<init>","()V")
J2CPP_DEFINE_METHOD(org::apache::http::impl::cookie::RFC2965DomainAttributeHandler,1,"parse","(Lorg/apache/http/cookie/SetCookie;Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(org::apache::http::impl::cookie::RFC2965DomainAttributeHandler,2,"domainMatch","(Ljava/lang/String;Ljava/lang/String;)Z")
J2CPP_DEFINE_METHOD(org::apache::http::impl::cookie::RFC2965DomainAttributeHandler,3,"validate","(Lorg/apache/http/cookie/Cookie;Lorg/apache/http/cookie/CookieOrigin;)V")
J2CPP_DEFINE_METHOD(org::apache::http::impl::cookie::RFC2965DomainAttributeHandler,4,"match","(Lorg/apache/http/cookie/Cookie;Lorg/apache/http/cookie/CookieOrigin;)Z")

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_IMPL_COOKIE_RFC2965DOMAINATTRIBUTEHANDLER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION