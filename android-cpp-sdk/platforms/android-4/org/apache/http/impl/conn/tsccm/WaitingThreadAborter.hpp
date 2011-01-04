/*================================================================================
  code generated by: java2cpp
  author: Zoran Angelov, mailto://baldzar@gmail.com
  class: org.apache.http.impl.conn.tsccm.WaitingThreadAborter
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_IMPL_CONN_TSCCM_WAITINGTHREADABORTER_HPP_DECL
#define J2CPP_ORG_APACHE_HTTP_IMPL_CONN_TSCCM_WAITINGTHREADABORTER_HPP_DECL


namespace j2cpp { namespace org { namespace apache { namespace http { namespace impl { namespace conn { namespace tsccm { class WaitingThread; } } } } } } }
namespace j2cpp { namespace java { namespace lang { class Object; } } }


#include <java/lang/Object.hpp>
#include <org/apache/http/impl/conn/tsccm/WaitingThread.hpp>


namespace j2cpp {

namespace org { namespace apache { namespace http { namespace impl { namespace conn { namespace tsccm {

	class WaitingThreadAborter;
	class WaitingThreadAborter
		: public object<WaitingThreadAborter>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)

		explicit WaitingThreadAborter(jobject jobj)
		: object<WaitingThreadAborter>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;


		WaitingThreadAborter();
		void abort();
		void setWaitingThread(local_ref< org::apache::http::impl::conn::tsccm::WaitingThread >  const&);
	}; //class WaitingThreadAborter

} //namespace tsccm
} //namespace conn
} //namespace impl
} //namespace http
} //namespace apache
} //namespace org

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_IMPL_CONN_TSCCM_WAITINGTHREADABORTER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ORG_APACHE_HTTP_IMPL_CONN_TSCCM_WAITINGTHREADABORTER_HPP_IMPL
#define J2CPP_ORG_APACHE_HTTP_IMPL_CONN_TSCCM_WAITINGTHREADABORTER_HPP_IMPL

namespace j2cpp {



org::apache::http::impl::conn::tsccm::WaitingThreadAborter::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jobject());
}


org::apache::http::impl::conn::tsccm::WaitingThreadAborter::WaitingThreadAborter()
: object<org::apache::http::impl::conn::tsccm::WaitingThreadAborter>(
	call_new_object<
		org::apache::http::impl::conn::tsccm::WaitingThreadAborter::J2CPP_CLASS_NAME,
		org::apache::http::impl::conn::tsccm::WaitingThreadAborter::J2CPP_METHOD_NAME(0),
		org::apache::http::impl::conn::tsccm::WaitingThreadAborter::J2CPP_METHOD_SIGNATURE(0)>
	()
)
{
}


void org::apache::http::impl::conn::tsccm::WaitingThreadAborter::abort()
{
	return call_method<
		org::apache::http::impl::conn::tsccm::WaitingThreadAborter::J2CPP_CLASS_NAME,
		org::apache::http::impl::conn::tsccm::WaitingThreadAborter::J2CPP_METHOD_NAME(1),
		org::apache::http::impl::conn::tsccm::WaitingThreadAborter::J2CPP_METHOD_SIGNATURE(1), 
		void >
	(get_jobject());
}

void org::apache::http::impl::conn::tsccm::WaitingThreadAborter::setWaitingThread(local_ref< org::apache::http::impl::conn::tsccm::WaitingThread > const &a0)
{
	return call_method<
		org::apache::http::impl::conn::tsccm::WaitingThreadAborter::J2CPP_CLASS_NAME,
		org::apache::http::impl::conn::tsccm::WaitingThreadAborter::J2CPP_METHOD_NAME(2),
		org::apache::http::impl::conn::tsccm::WaitingThreadAborter::J2CPP_METHOD_SIGNATURE(2), 
		void >
	(get_jobject(), a0);
}


J2CPP_DEFINE_CLASS(org::apache::http::impl::conn::tsccm::WaitingThreadAborter,"org/apache/http/impl/conn/tsccm/WaitingThreadAborter")
J2CPP_DEFINE_METHOD(org::apache::http::impl::conn::tsccm::WaitingThreadAborter,0,"<init>","()V")
J2CPP_DEFINE_METHOD(org::apache::http::impl::conn::tsccm::WaitingThreadAborter,1,"abort","()V")
J2CPP_DEFINE_METHOD(org::apache::http::impl::conn::tsccm::WaitingThreadAborter,2,"setWaitingThread","(Lorg/apache/http/impl/conn/tsccm/WaitingThread;)V")

} //namespace j2cpp

#endif //J2CPP_ORG_APACHE_HTTP_IMPL_CONN_TSCCM_WAITINGTHREADABORTER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION