/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: java.util.TimerTask
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_TIMERTASK_HPP_DECL
#define J2CPP_JAVA_UTIL_TIMERTASK_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Runnable; } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <java/lang/Object.hpp>
#include <java/lang/Runnable.hpp>


namespace j2cpp {

namespace java { namespace util {

	class TimerTask;
	class TimerTask
		: public object<TimerTask>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)

		explicit TimerTask(jobject jobj)
		: object<TimerTask>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<java::lang::Runnable>() const;


		jboolean cancel();
		jlong scheduledExecutionTime();
		void run();
	}; //class TimerTask

} //namespace util
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_TIMERTASK_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_UTIL_TIMERTASK_HPP_IMPL
#define J2CPP_JAVA_UTIL_TIMERTASK_HPP_IMPL

namespace j2cpp {



java::util::TimerTask::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}

java::util::TimerTask::operator local_ref<java::lang::Runnable>() const
{
	return local_ref<java::lang::Runnable>(get_jobject());
}


jboolean java::util::TimerTask::cancel()
{
	return call_method<
		java::util::TimerTask::J2CPP_CLASS_NAME,
		java::util::TimerTask::J2CPP_METHOD_NAME(1),
		java::util::TimerTask::J2CPP_METHOD_SIGNATURE(1), 
		jboolean >
	(get_jobject());
}

jlong java::util::TimerTask::scheduledExecutionTime()
{
	return call_method<
		java::util::TimerTask::J2CPP_CLASS_NAME,
		java::util::TimerTask::J2CPP_METHOD_NAME(2),
		java::util::TimerTask::J2CPP_METHOD_SIGNATURE(2), 
		jlong >
	(get_jobject());
}

void java::util::TimerTask::run()
{
	return call_method<
		java::util::TimerTask::J2CPP_CLASS_NAME,
		java::util::TimerTask::J2CPP_METHOD_NAME(3),
		java::util::TimerTask::J2CPP_METHOD_SIGNATURE(3), 
		void >
	(get_jobject());
}


J2CPP_DEFINE_CLASS(java::util::TimerTask,"java/util/TimerTask")
J2CPP_DEFINE_METHOD(java::util::TimerTask,0,"<init>","()V")
J2CPP_DEFINE_METHOD(java::util::TimerTask,1,"cancel","()Z")
J2CPP_DEFINE_METHOD(java::util::TimerTask,2,"scheduledExecutionTime","()J")
J2CPP_DEFINE_METHOD(java::util::TimerTask,3,"run","()V")

} //namespace j2cpp

#endif //J2CPP_JAVA_UTIL_TIMERTASK_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION