/*================================================================================
  code generated by: java2cpp
  class: java.lang.ThreadDeath
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_LANG_THREADDEATH_HPP_DECL
#define J2CPP_JAVA_LANG_THREADDEATH_HPP_DECL






namespace j2cpp {

namespace java { namespace lang {

	class ThreadDeath;
	class ThreadDeath
		: public cpp_object<ThreadDeath>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)

		ThreadDeath(jobject jobj)
		: cpp_object<ThreadDeath>(jobj)
		{
		}

	}; //class ThreadDeath

} //namespace lang
} //namespace java


} //namespace j2cpp

#endif //J2CPP_JAVA_LANG_THREADDEATH_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_LANG_THREADDEATH_HPP_IMPL
#define J2CPP_JAVA_LANG_THREADDEATH_HPP_IMPL

namespace j2cpp {


template <>
local_ref< java::lang::ThreadDeath > create< java::lang::ThreadDeath>()
{
	return local_ref< java::lang::ThreadDeath >(
		environment::get().get_jenv()->NewObject(
			get_class<java::lang::ThreadDeath::J2CPP_CLASS_NAME>(),
			get_method_id<java::lang::ThreadDeath::J2CPP_CLASS_NAME, java::lang::ThreadDeath::J2CPP_METHOD_NAME(0), java::lang::ThreadDeath::J2CPP_METHOD_SIGNATURE(0), false>()
		)
	);
}


J2CPP_DEFINE_CLASS(java::lang::ThreadDeath,"java/lang/ThreadDeath")
J2CPP_DEFINE_METHOD(java::lang::ThreadDeath,0,"<init>","()V")

} //namespace j2cpp

#endif //J2CPP_JAVA_LANG_THREADDEATH_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION