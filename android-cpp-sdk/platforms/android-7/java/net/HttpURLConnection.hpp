/*================================================================================
  code generated by: java2cpp
  class: java.net.HttpURLConnection
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_NET_HTTPURLCONNECTION_HPP_DECL
#define J2CPP_JAVA_NET_HTTPURLCONNECTION_HPP_DECL


namespace j2cpp { namespace java { namespace net { class URLConnection; } } }
namespace j2cpp { namespace java { namespace io { class InputStream; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace security { class Permission; } } }


#include <java/io/InputStream.hpp>
#include <java/lang/String.hpp>
#include <java/net/URLConnection.hpp>
#include <java/security/Permission.hpp>


namespace j2cpp {

namespace java { namespace net {

	class HttpURLConnection;
	class HttpURLConnection
		: public cpp_object<HttpURLConnection>
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
		J2CPP_DECLARE_METHOD(14)
		J2CPP_DECLARE_METHOD(15)
		J2CPP_DECLARE_FIELD(0)
		J2CPP_DECLARE_FIELD(1)
		J2CPP_DECLARE_FIELD(2)
		J2CPP_DECLARE_FIELD(3)
		J2CPP_DECLARE_FIELD(4)
		J2CPP_DECLARE_FIELD(5)
		J2CPP_DECLARE_FIELD(6)
		J2CPP_DECLARE_FIELD(7)
		J2CPP_DECLARE_FIELD(8)
		J2CPP_DECLARE_FIELD(9)
		J2CPP_DECLARE_FIELD(10)
		J2CPP_DECLARE_FIELD(11)
		J2CPP_DECLARE_FIELD(12)
		J2CPP_DECLARE_FIELD(13)
		J2CPP_DECLARE_FIELD(14)
		J2CPP_DECLARE_FIELD(15)
		J2CPP_DECLARE_FIELD(16)
		J2CPP_DECLARE_FIELD(17)
		J2CPP_DECLARE_FIELD(18)
		J2CPP_DECLARE_FIELD(19)
		J2CPP_DECLARE_FIELD(20)
		J2CPP_DECLARE_FIELD(21)
		J2CPP_DECLARE_FIELD(22)
		J2CPP_DECLARE_FIELD(23)
		J2CPP_DECLARE_FIELD(24)
		J2CPP_DECLARE_FIELD(25)
		J2CPP_DECLARE_FIELD(26)
		J2CPP_DECLARE_FIELD(27)
		J2CPP_DECLARE_FIELD(28)
		J2CPP_DECLARE_FIELD(29)
		J2CPP_DECLARE_FIELD(30)
		J2CPP_DECLARE_FIELD(31)
		J2CPP_DECLARE_FIELD(32)
		J2CPP_DECLARE_FIELD(33)
		J2CPP_DECLARE_FIELD(34)
		J2CPP_DECLARE_FIELD(35)
		J2CPP_DECLARE_FIELD(36)
		J2CPP_DECLARE_FIELD(37)
		J2CPP_DECLARE_FIELD(38)
		J2CPP_DECLARE_FIELD(39)
		J2CPP_DECLARE_FIELD(40)
		J2CPP_DECLARE_FIELD(41)

		explicit HttpURLConnection(jobject jobj)
		: cpp_object<HttpURLConnection>(jobj)
		{
		}

		operator local_ref<java::net::URLConnection>() const;


		void disconnect();
		local_ref< java::io::InputStream > getErrorStream();
		static cpp_boolean getFollowRedirects();
		local_ref< java::security::Permission > getPermission();
		local_ref< java::lang::String > getRequestMethod();
		cpp_int getResponseCode();
		local_ref< java::lang::String > getResponseMessage();
		static void setFollowRedirects(cpp_boolean const&);
		void setRequestMethod(local_ref< java::lang::String > const&);
		cpp_boolean usingProxy();
		cpp_boolean getInstanceFollowRedirects();
		void setInstanceFollowRedirects(cpp_boolean const&);
		cpp_long getHeaderFieldDate(local_ref< java::lang::String > const&, cpp_long const&);
		void setFixedLengthStreamingMode(cpp_int const&);
		void setChunkedStreamingMode(cpp_int const&);

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(6), J2CPP_FIELD_SIGNATURE(6), cpp_int > HTTP_ACCEPTED;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(7), J2CPP_FIELD_SIGNATURE(7), cpp_int > HTTP_BAD_GATEWAY;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(8), J2CPP_FIELD_SIGNATURE(8), cpp_int > HTTP_BAD_METHOD;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(9), J2CPP_FIELD_SIGNATURE(9), cpp_int > HTTP_BAD_REQUEST;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(10), J2CPP_FIELD_SIGNATURE(10), cpp_int > HTTP_CLIENT_TIMEOUT;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(11), J2CPP_FIELD_SIGNATURE(11), cpp_int > HTTP_CONFLICT;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(12), J2CPP_FIELD_SIGNATURE(12), cpp_int > HTTP_CREATED;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(13), J2CPP_FIELD_SIGNATURE(13), cpp_int > HTTP_ENTITY_TOO_LARGE;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(14), J2CPP_FIELD_SIGNATURE(14), cpp_int > HTTP_FORBIDDEN;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(15), J2CPP_FIELD_SIGNATURE(15), cpp_int > HTTP_GATEWAY_TIMEOUT;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(16), J2CPP_FIELD_SIGNATURE(16), cpp_int > HTTP_GONE;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(17), J2CPP_FIELD_SIGNATURE(17), cpp_int > HTTP_INTERNAL_ERROR;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(18), J2CPP_FIELD_SIGNATURE(18), cpp_int > HTTP_LENGTH_REQUIRED;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(19), J2CPP_FIELD_SIGNATURE(19), cpp_int > HTTP_MOVED_PERM;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(20), J2CPP_FIELD_SIGNATURE(20), cpp_int > HTTP_MOVED_TEMP;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(21), J2CPP_FIELD_SIGNATURE(21), cpp_int > HTTP_MULT_CHOICE;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(22), J2CPP_FIELD_SIGNATURE(22), cpp_int > HTTP_NO_CONTENT;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(23), J2CPP_FIELD_SIGNATURE(23), cpp_int > HTTP_NOT_ACCEPTABLE;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(24), J2CPP_FIELD_SIGNATURE(24), cpp_int > HTTP_NOT_AUTHORITATIVE;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(25), J2CPP_FIELD_SIGNATURE(25), cpp_int > HTTP_NOT_FOUND;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(26), J2CPP_FIELD_SIGNATURE(26), cpp_int > HTTP_NOT_IMPLEMENTED;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(27), J2CPP_FIELD_SIGNATURE(27), cpp_int > HTTP_NOT_MODIFIED;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(28), J2CPP_FIELD_SIGNATURE(28), cpp_int > HTTP_OK;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(29), J2CPP_FIELD_SIGNATURE(29), cpp_int > HTTP_PARTIAL;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(30), J2CPP_FIELD_SIGNATURE(30), cpp_int > HTTP_PAYMENT_REQUIRED;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(31), J2CPP_FIELD_SIGNATURE(31), cpp_int > HTTP_PRECON_FAILED;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(32), J2CPP_FIELD_SIGNATURE(32), cpp_int > HTTP_PROXY_AUTH;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(33), J2CPP_FIELD_SIGNATURE(33), cpp_int > HTTP_REQ_TOO_LONG;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(34), J2CPP_FIELD_SIGNATURE(34), cpp_int > HTTP_RESET;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(35), J2CPP_FIELD_SIGNATURE(35), cpp_int > HTTP_SEE_OTHER;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(36), J2CPP_FIELD_SIGNATURE(36), cpp_int > HTTP_SERVER_ERROR;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(37), J2CPP_FIELD_SIGNATURE(37), cpp_int > HTTP_USE_PROXY;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(38), J2CPP_FIELD_SIGNATURE(38), cpp_int > HTTP_UNAUTHORIZED;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(39), J2CPP_FIELD_SIGNATURE(39), cpp_int > HTTP_UNSUPPORTED_TYPE;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(40), J2CPP_FIELD_SIGNATURE(40), cpp_int > HTTP_UNAVAILABLE;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(41), J2CPP_FIELD_SIGNATURE(41), cpp_int > HTTP_VERSION;
	}; //class HttpURLConnection

} //namespace net
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_NET_HTTPURLCONNECTION_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_NET_HTTPURLCONNECTION_HPP_IMPL
#define J2CPP_JAVA_NET_HTTPURLCONNECTION_HPP_IMPL

namespace j2cpp {



java::net::HttpURLConnection::operator local_ref<java::net::URLConnection>() const
{
	return local_ref<java::net::URLConnection>(get_jtype());
}


void java::net::HttpURLConnection::disconnect()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>()
		)
	);
}

local_ref< java::io::InputStream > java::net::HttpURLConnection::getErrorStream()
{
	return local_ref< java::io::InputStream >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>()
		)
	);
}

cpp_boolean java::net::HttpURLConnection::getFollowRedirects()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallStaticBooleanMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), true>()
		)
	);
}

local_ref< java::security::Permission > java::net::HttpURLConnection::getPermission()
{
	return local_ref< java::security::Permission >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>()
		)
	);
}

local_ref< java::lang::String > java::net::HttpURLConnection::getRequestMethod()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>()
		)
	);
}

cpp_int java::net::HttpURLConnection::getResponseCode()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>()
		)
	);
}

local_ref< java::lang::String > java::net::HttpURLConnection::getResponseMessage()
{
	return local_ref< java::lang::String >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(7), J2CPP_METHOD_SIGNATURE(7), false>()
		)
	);
}

void java::net::HttpURLConnection::setFollowRedirects(cpp_boolean const &a0)
{
	return void(
		environment::get().get_jenv()->CallStaticVoidMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(8), J2CPP_METHOD_SIGNATURE(8), true>(),
			a0.get_jtype()
		)
	);
}

void java::net::HttpURLConnection::setRequestMethod(local_ref< java::lang::String > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(9), J2CPP_METHOD_SIGNATURE(9), false>(),
			a0.get_jtype()
		)
	);
}

cpp_boolean java::net::HttpURLConnection::usingProxy()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(10), J2CPP_METHOD_SIGNATURE(10), false>()
		)
	);
}

cpp_boolean java::net::HttpURLConnection::getInstanceFollowRedirects()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(11), J2CPP_METHOD_SIGNATURE(11), false>()
		)
	);
}

void java::net::HttpURLConnection::setInstanceFollowRedirects(cpp_boolean const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(12), J2CPP_METHOD_SIGNATURE(12), false>(),
			a0.get_jtype()
		)
	);
}

cpp_long java::net::HttpURLConnection::getHeaderFieldDate(local_ref< java::lang::String > const &a0, cpp_long const &a1)
{
	return cpp_long(
		environment::get().get_jenv()->CallLongMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(13), J2CPP_METHOD_SIGNATURE(13), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void java::net::HttpURLConnection::setFixedLengthStreamingMode(cpp_int const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(14), J2CPP_METHOD_SIGNATURE(14), false>(),
			a0.get_jtype()
		)
	);
}

void java::net::HttpURLConnection::setChunkedStreamingMode(cpp_int const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(15), J2CPP_METHOD_SIGNATURE(15), false>(),
			a0.get_jtype()
		)
	);
}


static_field<
	java::net::HttpURLConnection::J2CPP_CLASS_NAME,
	java::net::HttpURLConnection::J2CPP_FIELD_NAME(6),
	java::net::HttpURLConnection::J2CPP_FIELD_SIGNATURE(6),
	cpp_int
> java::net::HttpURLConnection::HTTP_ACCEPTED;

static_field<
	java::net::HttpURLConnection::J2CPP_CLASS_NAME,
	java::net::HttpURLConnection::J2CPP_FIELD_NAME(7),
	java::net::HttpURLConnection::J2CPP_FIELD_SIGNATURE(7),
	cpp_int
> java::net::HttpURLConnection::HTTP_BAD_GATEWAY;

static_field<
	java::net::HttpURLConnection::J2CPP_CLASS_NAME,
	java::net::HttpURLConnection::J2CPP_FIELD_NAME(8),
	java::net::HttpURLConnection::J2CPP_FIELD_SIGNATURE(8),
	cpp_int
> java::net::HttpURLConnection::HTTP_BAD_METHOD;

static_field<
	java::net::HttpURLConnection::J2CPP_CLASS_NAME,
	java::net::HttpURLConnection::J2CPP_FIELD_NAME(9),
	java::net::HttpURLConnection::J2CPP_FIELD_SIGNATURE(9),
	cpp_int
> java::net::HttpURLConnection::HTTP_BAD_REQUEST;

static_field<
	java::net::HttpURLConnection::J2CPP_CLASS_NAME,
	java::net::HttpURLConnection::J2CPP_FIELD_NAME(10),
	java::net::HttpURLConnection::J2CPP_FIELD_SIGNATURE(10),
	cpp_int
> java::net::HttpURLConnection::HTTP_CLIENT_TIMEOUT;

static_field<
	java::net::HttpURLConnection::J2CPP_CLASS_NAME,
	java::net::HttpURLConnection::J2CPP_FIELD_NAME(11),
	java::net::HttpURLConnection::J2CPP_FIELD_SIGNATURE(11),
	cpp_int
> java::net::HttpURLConnection::HTTP_CONFLICT;

static_field<
	java::net::HttpURLConnection::J2CPP_CLASS_NAME,
	java::net::HttpURLConnection::J2CPP_FIELD_NAME(12),
	java::net::HttpURLConnection::J2CPP_FIELD_SIGNATURE(12),
	cpp_int
> java::net::HttpURLConnection::HTTP_CREATED;

static_field<
	java::net::HttpURLConnection::J2CPP_CLASS_NAME,
	java::net::HttpURLConnection::J2CPP_FIELD_NAME(13),
	java::net::HttpURLConnection::J2CPP_FIELD_SIGNATURE(13),
	cpp_int
> java::net::HttpURLConnection::HTTP_ENTITY_TOO_LARGE;

static_field<
	java::net::HttpURLConnection::J2CPP_CLASS_NAME,
	java::net::HttpURLConnection::J2CPP_FIELD_NAME(14),
	java::net::HttpURLConnection::J2CPP_FIELD_SIGNATURE(14),
	cpp_int
> java::net::HttpURLConnection::HTTP_FORBIDDEN;

static_field<
	java::net::HttpURLConnection::J2CPP_CLASS_NAME,
	java::net::HttpURLConnection::J2CPP_FIELD_NAME(15),
	java::net::HttpURLConnection::J2CPP_FIELD_SIGNATURE(15),
	cpp_int
> java::net::HttpURLConnection::HTTP_GATEWAY_TIMEOUT;

static_field<
	java::net::HttpURLConnection::J2CPP_CLASS_NAME,
	java::net::HttpURLConnection::J2CPP_FIELD_NAME(16),
	java::net::HttpURLConnection::J2CPP_FIELD_SIGNATURE(16),
	cpp_int
> java::net::HttpURLConnection::HTTP_GONE;

static_field<
	java::net::HttpURLConnection::J2CPP_CLASS_NAME,
	java::net::HttpURLConnection::J2CPP_FIELD_NAME(17),
	java::net::HttpURLConnection::J2CPP_FIELD_SIGNATURE(17),
	cpp_int
> java::net::HttpURLConnection::HTTP_INTERNAL_ERROR;

static_field<
	java::net::HttpURLConnection::J2CPP_CLASS_NAME,
	java::net::HttpURLConnection::J2CPP_FIELD_NAME(18),
	java::net::HttpURLConnection::J2CPP_FIELD_SIGNATURE(18),
	cpp_int
> java::net::HttpURLConnection::HTTP_LENGTH_REQUIRED;

static_field<
	java::net::HttpURLConnection::J2CPP_CLASS_NAME,
	java::net::HttpURLConnection::J2CPP_FIELD_NAME(19),
	java::net::HttpURLConnection::J2CPP_FIELD_SIGNATURE(19),
	cpp_int
> java::net::HttpURLConnection::HTTP_MOVED_PERM;

static_field<
	java::net::HttpURLConnection::J2CPP_CLASS_NAME,
	java::net::HttpURLConnection::J2CPP_FIELD_NAME(20),
	java::net::HttpURLConnection::J2CPP_FIELD_SIGNATURE(20),
	cpp_int
> java::net::HttpURLConnection::HTTP_MOVED_TEMP;

static_field<
	java::net::HttpURLConnection::J2CPP_CLASS_NAME,
	java::net::HttpURLConnection::J2CPP_FIELD_NAME(21),
	java::net::HttpURLConnection::J2CPP_FIELD_SIGNATURE(21),
	cpp_int
> java::net::HttpURLConnection::HTTP_MULT_CHOICE;

static_field<
	java::net::HttpURLConnection::J2CPP_CLASS_NAME,
	java::net::HttpURLConnection::J2CPP_FIELD_NAME(22),
	java::net::HttpURLConnection::J2CPP_FIELD_SIGNATURE(22),
	cpp_int
> java::net::HttpURLConnection::HTTP_NO_CONTENT;

static_field<
	java::net::HttpURLConnection::J2CPP_CLASS_NAME,
	java::net::HttpURLConnection::J2CPP_FIELD_NAME(23),
	java::net::HttpURLConnection::J2CPP_FIELD_SIGNATURE(23),
	cpp_int
> java::net::HttpURLConnection::HTTP_NOT_ACCEPTABLE;

static_field<
	java::net::HttpURLConnection::J2CPP_CLASS_NAME,
	java::net::HttpURLConnection::J2CPP_FIELD_NAME(24),
	java::net::HttpURLConnection::J2CPP_FIELD_SIGNATURE(24),
	cpp_int
> java::net::HttpURLConnection::HTTP_NOT_AUTHORITATIVE;

static_field<
	java::net::HttpURLConnection::J2CPP_CLASS_NAME,
	java::net::HttpURLConnection::J2CPP_FIELD_NAME(25),
	java::net::HttpURLConnection::J2CPP_FIELD_SIGNATURE(25),
	cpp_int
> java::net::HttpURLConnection::HTTP_NOT_FOUND;

static_field<
	java::net::HttpURLConnection::J2CPP_CLASS_NAME,
	java::net::HttpURLConnection::J2CPP_FIELD_NAME(26),
	java::net::HttpURLConnection::J2CPP_FIELD_SIGNATURE(26),
	cpp_int
> java::net::HttpURLConnection::HTTP_NOT_IMPLEMENTED;

static_field<
	java::net::HttpURLConnection::J2CPP_CLASS_NAME,
	java::net::HttpURLConnection::J2CPP_FIELD_NAME(27),
	java::net::HttpURLConnection::J2CPP_FIELD_SIGNATURE(27),
	cpp_int
> java::net::HttpURLConnection::HTTP_NOT_MODIFIED;

static_field<
	java::net::HttpURLConnection::J2CPP_CLASS_NAME,
	java::net::HttpURLConnection::J2CPP_FIELD_NAME(28),
	java::net::HttpURLConnection::J2CPP_FIELD_SIGNATURE(28),
	cpp_int
> java::net::HttpURLConnection::HTTP_OK;

static_field<
	java::net::HttpURLConnection::J2CPP_CLASS_NAME,
	java::net::HttpURLConnection::J2CPP_FIELD_NAME(29),
	java::net::HttpURLConnection::J2CPP_FIELD_SIGNATURE(29),
	cpp_int
> java::net::HttpURLConnection::HTTP_PARTIAL;

static_field<
	java::net::HttpURLConnection::J2CPP_CLASS_NAME,
	java::net::HttpURLConnection::J2CPP_FIELD_NAME(30),
	java::net::HttpURLConnection::J2CPP_FIELD_SIGNATURE(30),
	cpp_int
> java::net::HttpURLConnection::HTTP_PAYMENT_REQUIRED;

static_field<
	java::net::HttpURLConnection::J2CPP_CLASS_NAME,
	java::net::HttpURLConnection::J2CPP_FIELD_NAME(31),
	java::net::HttpURLConnection::J2CPP_FIELD_SIGNATURE(31),
	cpp_int
> java::net::HttpURLConnection::HTTP_PRECON_FAILED;

static_field<
	java::net::HttpURLConnection::J2CPP_CLASS_NAME,
	java::net::HttpURLConnection::J2CPP_FIELD_NAME(32),
	java::net::HttpURLConnection::J2CPP_FIELD_SIGNATURE(32),
	cpp_int
> java::net::HttpURLConnection::HTTP_PROXY_AUTH;

static_field<
	java::net::HttpURLConnection::J2CPP_CLASS_NAME,
	java::net::HttpURLConnection::J2CPP_FIELD_NAME(33),
	java::net::HttpURLConnection::J2CPP_FIELD_SIGNATURE(33),
	cpp_int
> java::net::HttpURLConnection::HTTP_REQ_TOO_LONG;

static_field<
	java::net::HttpURLConnection::J2CPP_CLASS_NAME,
	java::net::HttpURLConnection::J2CPP_FIELD_NAME(34),
	java::net::HttpURLConnection::J2CPP_FIELD_SIGNATURE(34),
	cpp_int
> java::net::HttpURLConnection::HTTP_RESET;

static_field<
	java::net::HttpURLConnection::J2CPP_CLASS_NAME,
	java::net::HttpURLConnection::J2CPP_FIELD_NAME(35),
	java::net::HttpURLConnection::J2CPP_FIELD_SIGNATURE(35),
	cpp_int
> java::net::HttpURLConnection::HTTP_SEE_OTHER;

static_field<
	java::net::HttpURLConnection::J2CPP_CLASS_NAME,
	java::net::HttpURLConnection::J2CPP_FIELD_NAME(36),
	java::net::HttpURLConnection::J2CPP_FIELD_SIGNATURE(36),
	cpp_int
> java::net::HttpURLConnection::HTTP_SERVER_ERROR;

static_field<
	java::net::HttpURLConnection::J2CPP_CLASS_NAME,
	java::net::HttpURLConnection::J2CPP_FIELD_NAME(37),
	java::net::HttpURLConnection::J2CPP_FIELD_SIGNATURE(37),
	cpp_int
> java::net::HttpURLConnection::HTTP_USE_PROXY;

static_field<
	java::net::HttpURLConnection::J2CPP_CLASS_NAME,
	java::net::HttpURLConnection::J2CPP_FIELD_NAME(38),
	java::net::HttpURLConnection::J2CPP_FIELD_SIGNATURE(38),
	cpp_int
> java::net::HttpURLConnection::HTTP_UNAUTHORIZED;

static_field<
	java::net::HttpURLConnection::J2CPP_CLASS_NAME,
	java::net::HttpURLConnection::J2CPP_FIELD_NAME(39),
	java::net::HttpURLConnection::J2CPP_FIELD_SIGNATURE(39),
	cpp_int
> java::net::HttpURLConnection::HTTP_UNSUPPORTED_TYPE;

static_field<
	java::net::HttpURLConnection::J2CPP_CLASS_NAME,
	java::net::HttpURLConnection::J2CPP_FIELD_NAME(40),
	java::net::HttpURLConnection::J2CPP_FIELD_SIGNATURE(40),
	cpp_int
> java::net::HttpURLConnection::HTTP_UNAVAILABLE;

static_field<
	java::net::HttpURLConnection::J2CPP_CLASS_NAME,
	java::net::HttpURLConnection::J2CPP_FIELD_NAME(41),
	java::net::HttpURLConnection::J2CPP_FIELD_SIGNATURE(41),
	cpp_int
> java::net::HttpURLConnection::HTTP_VERSION;


J2CPP_DEFINE_CLASS(java::net::HttpURLConnection,"java/net/HttpURLConnection")
J2CPP_DEFINE_METHOD(java::net::HttpURLConnection,0,"<init>","(Ljava/net/URL;)V")
J2CPP_DEFINE_METHOD(java::net::HttpURLConnection,1,"disconnect","()V")
J2CPP_DEFINE_METHOD(java::net::HttpURLConnection,2,"getErrorStream","()Ljava/io/InputStream;")
J2CPP_DEFINE_METHOD(java::net::HttpURLConnection,3,"getFollowRedirects","()Z")
J2CPP_DEFINE_METHOD(java::net::HttpURLConnection,4,"getPermission","()Ljava/security/Permission;")
J2CPP_DEFINE_METHOD(java::net::HttpURLConnection,5,"getRequestMethod","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::net::HttpURLConnection,6,"getResponseCode","()I")
J2CPP_DEFINE_METHOD(java::net::HttpURLConnection,7,"getResponseMessage","()Ljava/lang/String;")
J2CPP_DEFINE_METHOD(java::net::HttpURLConnection,8,"setFollowRedirects","(Z)V")
J2CPP_DEFINE_METHOD(java::net::HttpURLConnection,9,"setRequestMethod","(Ljava/lang/String;)V")
J2CPP_DEFINE_METHOD(java::net::HttpURLConnection,10,"usingProxy","()Z")
J2CPP_DEFINE_METHOD(java::net::HttpURLConnection,11,"getInstanceFollowRedirects","()Z")
J2CPP_DEFINE_METHOD(java::net::HttpURLConnection,12,"setInstanceFollowRedirects","(Z)V")
J2CPP_DEFINE_METHOD(java::net::HttpURLConnection,13,"getHeaderFieldDate","(Ljava/lang/String;J)J")
J2CPP_DEFINE_METHOD(java::net::HttpURLConnection,14,"setFixedLengthStreamingMode","(I)V")
J2CPP_DEFINE_METHOD(java::net::HttpURLConnection,15,"setChunkedStreamingMode","(I)V")
J2CPP_DEFINE_FIELD(java::net::HttpURLConnection,0,"method","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(java::net::HttpURLConnection,1,"responseCode","I")
J2CPP_DEFINE_FIELD(java::net::HttpURLConnection,2,"responseMessage","Ljava/lang/String;")
J2CPP_DEFINE_FIELD(java::net::HttpURLConnection,3,"instanceFollowRedirects","Z")
J2CPP_DEFINE_FIELD(java::net::HttpURLConnection,4,"chunkLength","I")
J2CPP_DEFINE_FIELD(java::net::HttpURLConnection,5,"fixedContentLength","I")
J2CPP_DEFINE_FIELD(java::net::HttpURLConnection,6,"HTTP_ACCEPTED","I")
J2CPP_DEFINE_FIELD(java::net::HttpURLConnection,7,"HTTP_BAD_GATEWAY","I")
J2CPP_DEFINE_FIELD(java::net::HttpURLConnection,8,"HTTP_BAD_METHOD","I")
J2CPP_DEFINE_FIELD(java::net::HttpURLConnection,9,"HTTP_BAD_REQUEST","I")
J2CPP_DEFINE_FIELD(java::net::HttpURLConnection,10,"HTTP_CLIENT_TIMEOUT","I")
J2CPP_DEFINE_FIELD(java::net::HttpURLConnection,11,"HTTP_CONFLICT","I")
J2CPP_DEFINE_FIELD(java::net::HttpURLConnection,12,"HTTP_CREATED","I")
J2CPP_DEFINE_FIELD(java::net::HttpURLConnection,13,"HTTP_ENTITY_TOO_LARGE","I")
J2CPP_DEFINE_FIELD(java::net::HttpURLConnection,14,"HTTP_FORBIDDEN","I")
J2CPP_DEFINE_FIELD(java::net::HttpURLConnection,15,"HTTP_GATEWAY_TIMEOUT","I")
J2CPP_DEFINE_FIELD(java::net::HttpURLConnection,16,"HTTP_GONE","I")
J2CPP_DEFINE_FIELD(java::net::HttpURLConnection,17,"HTTP_INTERNAL_ERROR","I")
J2CPP_DEFINE_FIELD(java::net::HttpURLConnection,18,"HTTP_LENGTH_REQUIRED","I")
J2CPP_DEFINE_FIELD(java::net::HttpURLConnection,19,"HTTP_MOVED_PERM","I")
J2CPP_DEFINE_FIELD(java::net::HttpURLConnection,20,"HTTP_MOVED_TEMP","I")
J2CPP_DEFINE_FIELD(java::net::HttpURLConnection,21,"HTTP_MULT_CHOICE","I")
J2CPP_DEFINE_FIELD(java::net::HttpURLConnection,22,"HTTP_NO_CONTENT","I")
J2CPP_DEFINE_FIELD(java::net::HttpURLConnection,23,"HTTP_NOT_ACCEPTABLE","I")
J2CPP_DEFINE_FIELD(java::net::HttpURLConnection,24,"HTTP_NOT_AUTHORITATIVE","I")
J2CPP_DEFINE_FIELD(java::net::HttpURLConnection,25,"HTTP_NOT_FOUND","I")
J2CPP_DEFINE_FIELD(java::net::HttpURLConnection,26,"HTTP_NOT_IMPLEMENTED","I")
J2CPP_DEFINE_FIELD(java::net::HttpURLConnection,27,"HTTP_NOT_MODIFIED","I")
J2CPP_DEFINE_FIELD(java::net::HttpURLConnection,28,"HTTP_OK","I")
J2CPP_DEFINE_FIELD(java::net::HttpURLConnection,29,"HTTP_PARTIAL","I")
J2CPP_DEFINE_FIELD(java::net::HttpURLConnection,30,"HTTP_PAYMENT_REQUIRED","I")
J2CPP_DEFINE_FIELD(java::net::HttpURLConnection,31,"HTTP_PRECON_FAILED","I")
J2CPP_DEFINE_FIELD(java::net::HttpURLConnection,32,"HTTP_PROXY_AUTH","I")
J2CPP_DEFINE_FIELD(java::net::HttpURLConnection,33,"HTTP_REQ_TOO_LONG","I")
J2CPP_DEFINE_FIELD(java::net::HttpURLConnection,34,"HTTP_RESET","I")
J2CPP_DEFINE_FIELD(java::net::HttpURLConnection,35,"HTTP_SEE_OTHER","I")
J2CPP_DEFINE_FIELD(java::net::HttpURLConnection,36,"HTTP_SERVER_ERROR","I")
J2CPP_DEFINE_FIELD(java::net::HttpURLConnection,37,"HTTP_USE_PROXY","I")
J2CPP_DEFINE_FIELD(java::net::HttpURLConnection,38,"HTTP_UNAUTHORIZED","I")
J2CPP_DEFINE_FIELD(java::net::HttpURLConnection,39,"HTTP_UNSUPPORTED_TYPE","I")
J2CPP_DEFINE_FIELD(java::net::HttpURLConnection,40,"HTTP_UNAVAILABLE","I")
J2CPP_DEFINE_FIELD(java::net::HttpURLConnection,41,"HTTP_VERSION","I")

} //namespace j2cpp

#endif //J2CPP_JAVA_NET_HTTPURLCONNECTION_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION