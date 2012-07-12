/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.security.cert.CertPathBuilderSpi
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SECURITY_CERT_CERTPATHBUILDERSPI_HPP_DECL
#define J2CPP_JAVA_SECURITY_CERT_CERTPATHBUILDERSPI_HPP_DECL


namespace j2cpp { namespace java { namespace security { namespace cert { class CertPathParameters; } } } }
namespace j2cpp { namespace java { namespace security { namespace cert { class CertPathBuilderResult; } } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <java/lang/Object.hpp>
#include <java/security/cert/CertPathBuilderResult.hpp>
#include <java/security/cert/CertPathParameters.hpp>


namespace j2cpp {

namespace java { namespace security { namespace cert {

	class CertPathBuilderSpi;
	class CertPathBuilderSpi
		: public object<CertPathBuilderSpi>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)

		explicit CertPathBuilderSpi(jobject jobj)
		: object<CertPathBuilderSpi>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		CertPathBuilderSpi();
		local_ref< java::security::cert::CertPathBuilderResult > engineBuild(local_ref< java::security::cert::CertPathParameters >  const&);
	}; //class CertPathBuilderSpi

} //namespace cert
} //namespace security
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_SECURITY_CERT_CERTPATHBUILDERSPI_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_SECURITY_CERT_CERTPATHBUILDERSPI_HPP_IMPL
#define J2CPP_JAVA_SECURITY_CERT_CERTPATHBUILDERSPI_HPP_IMPL

namespace j2cpp {



java::security::cert::CertPathBuilderSpi::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


java::security::cert::CertPathBuilderSpi::CertPathBuilderSpi()
: object<java::security::cert::CertPathBuilderSpi>(
	call_new_object<
		java::security::cert::CertPathBuilderSpi::J2CPP_CLASS_NAME,
		java::security::cert::CertPathBuilderSpi::J2CPP_METHOD_NAME(0),
		java::security::cert::CertPathBuilderSpi::J2CPP_METHOD_SIGNATURE(0)
	>()
)
{
}


local_ref< java::security::cert::CertPathBuilderResult > java::security::cert::CertPathBuilderSpi::engineBuild(local_ref< java::security::cert::CertPathParameters > const &a0)
{
	return call_method<
		java::security::cert::CertPathBuilderSpi::J2CPP_CLASS_NAME,
		java::security::cert::CertPathBuilderSpi::J2CPP_METHOD_NAME(1),
		java::security::cert::CertPathBuilderSpi::J2CPP_METHOD_SIGNATURE(1), 
		local_ref< java::security::cert::CertPathBuilderResult >
	>(get_jobject(), a0);
}


J2CPP_DEFINE_CLASS(java::security::cert::CertPathBuilderSpi,"java/security/cert/CertPathBuilderSpi")
J2CPP_DEFINE_METHOD(java::security::cert::CertPathBuilderSpi,0,"<init>","()V")
J2CPP_DEFINE_METHOD(java::security::cert::CertPathBuilderSpi,1,"engineBuild","(Ljava/security/cert/CertPathParameters;)Ljava/security/cert/CertPathBuilderResult;")

} //namespace j2cpp

#endif //J2CPP_JAVA_SECURITY_CERT_CERTPATHBUILDERSPI_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION