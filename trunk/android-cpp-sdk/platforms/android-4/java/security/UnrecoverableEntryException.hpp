/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.security.UnrecoverableEntryException
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SECURITY_UNRECOVERABLEENTRYEXCEPTION_HPP_DECL
#define J2CPP_JAVA_SECURITY_UNRECOVERABLEENTRYEXCEPTION_HPP_DECL


namespace j2cpp { namespace java { namespace security { class GeneralSecurityException; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }


#include <java/lang/String.hpp>
#include <java/security/GeneralSecurityException.hpp>


namespace j2cpp {

namespace java { namespace security {

	class UnrecoverableEntryException;
	class UnrecoverableEntryException
		: public object<UnrecoverableEntryException>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)

		explicit UnrecoverableEntryException(jobject jobj)
		: object<UnrecoverableEntryException>(jobj)
		{
		}

		operator local_ref<java::security::GeneralSecurityException>() const;


		UnrecoverableEntryException();
		UnrecoverableEntryException(local_ref< java::lang::String > const&);
	}; //class UnrecoverableEntryException

} //namespace security
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_SECURITY_UNRECOVERABLEENTRYEXCEPTION_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SECURITY_UNRECOVERABLEENTRYEXCEPTION_HPP_IMPL
#define J2CPP_JAVA_SECURITY_UNRECOVERABLEENTRYEXCEPTION_HPP_IMPL

namespace j2cpp {



java::security::UnrecoverableEntryException::operator local_ref<java::security::GeneralSecurityException>() const
{
	return local_ref<java::security::GeneralSecurityException>(get_jobject());
}


java::security::UnrecoverableEntryException::UnrecoverableEntryException()
: object<java::security::UnrecoverableEntryException>(
	call_new_object<
		java::security::UnrecoverableEntryException::J2CPP_CLASS_NAME,
		java::security::UnrecoverableEntryException::J2CPP_METHOD_NAME(0),
		java::security::UnrecoverableEntryException::J2CPP_METHOD_SIGNATURE(0)>
	()
)
{
}



java::security::UnrecoverableEntryException::UnrecoverableEntryException(local_ref< java::lang::String > const &a0)
: object<java::security::UnrecoverableEntryException>(
	call_new_object<
		java::security::UnrecoverableEntryException::J2CPP_CLASS_NAME,
		java::security::UnrecoverableEntryException::J2CPP_METHOD_NAME(1),
		java::security::UnrecoverableEntryException::J2CPP_METHOD_SIGNATURE(1)>
	(a0)
)
{
}



J2CPP_DEFINE_CLASS(java::security::UnrecoverableEntryException,"java/security/UnrecoverableEntryException")
J2CPP_DEFINE_METHOD(java::security::UnrecoverableEntryException,0,"<init>","()V")
J2CPP_DEFINE_METHOD(java::security::UnrecoverableEntryException,1,"<init>","(Ljava/lang/String;)V")

} //namespace j2cpp

#endif //J2CPP_JAVA_SECURITY_UNRECOVERABLEENTRYEXCEPTION_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION