/*================================================================================
  code generated by: java2cpp
  class: java.lang.InstantiationError
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_LANG_INSTANTIATIONERROR_HPP_DECL
#define J2CPP_JAVA_LANG_INSTANTIATIONERROR_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }


#include <java/lang/String.hpp>


namespace j2cpp {

namespace java { namespace lang {

	class InstantiationError;
	class InstantiationError
		: public cpp_object<InstantiationError>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)

		InstantiationError(jobject jobj)
		: cpp_object<InstantiationError>(jobj)
		{
		}

	}; //class InstantiationError

} //namespace lang
} //namespace java


} //namespace j2cpp

#endif //J2CPP_JAVA_LANG_INSTANTIATIONERROR_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_LANG_INSTANTIATIONERROR_HPP_IMPL
#define J2CPP_JAVA_LANG_INSTANTIATIONERROR_HPP_IMPL

namespace j2cpp {


template <>
local_ref< java::lang::InstantiationError > create< java::lang::InstantiationError>()
{
	return local_ref< java::lang::InstantiationError >(
		environment::get().get_jenv()->NewObject(
			get_class<java::lang::InstantiationError::J2CPP_CLASS_NAME>(),
			get_method_id<java::lang::InstantiationError::J2CPP_CLASS_NAME, java::lang::InstantiationError::J2CPP_METHOD_NAME(0), java::lang::InstantiationError::J2CPP_METHOD_SIGNATURE(0), false>()
		)
	);
}

template <>
local_ref< java::lang::InstantiationError > create< java::lang::InstantiationError>(local_ref< java::lang::String > const &a0)
{
	return local_ref< java::lang::InstantiationError >(
		environment::get().get_jenv()->NewObject(
			get_class<java::lang::InstantiationError::J2CPP_CLASS_NAME>(),
			get_method_id<java::lang::InstantiationError::J2CPP_CLASS_NAME, java::lang::InstantiationError::J2CPP_METHOD_NAME(1), java::lang::InstantiationError::J2CPP_METHOD_SIGNATURE(1), false>(),
			a0.get_jtype()
		)
	);
}


J2CPP_DEFINE_CLASS(java::lang::InstantiationError,"java/lang/InstantiationError")
J2CPP_DEFINE_METHOD(java::lang::InstantiationError,0,"<init>","()V")
J2CPP_DEFINE_METHOD(java::lang::InstantiationError,1,"<init>","(Ljava/lang/String;)V")

} //namespace j2cpp

#endif //J2CPP_JAVA_LANG_INSTANTIATIONERROR_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION