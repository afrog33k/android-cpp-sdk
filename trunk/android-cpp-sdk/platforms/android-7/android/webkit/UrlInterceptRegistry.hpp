/*================================================================================
  code generated by: java2cpp
  class: android.webkit.UrlInterceptRegistry
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_WEBKIT_URLINTERCEPTREGISTRY_HPP_DECL
#define J2CPP_ANDROID_WEBKIT_URLINTERCEPTREGISTRY_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class String; } } }
namespace j2cpp { namespace java { namespace util { class Map; } } }
namespace j2cpp { namespace android { namespace webkit { class PluginData; } } }
namespace j2cpp { namespace android { namespace webkit { class UrlInterceptHandler; } } }
namespace j2cpp { namespace android { namespace webkit { namespace CacheManager_ { class CacheResult; } } } }


#include <android/webkit/CacheManager.hpp>
#include <android/webkit/PluginData.hpp>
#include <android/webkit/UrlInterceptHandler.hpp>
#include <java/lang/String.hpp>
#include <java/util/Map.hpp>


namespace j2cpp {

namespace android { namespace webkit {

	class UrlInterceptRegistry;
	class UrlInterceptRegistry
		: public cpp_object<UrlInterceptRegistry>
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

		UrlInterceptRegistry(jobject jobj)
		: cpp_object<UrlInterceptRegistry>(jobj)
		{
		}

		static void setUrlInterceptDisabled(cpp_boolean const&);
		static cpp_boolean urlInterceptDisabled();
		static cpp_boolean registerHandler(local_ref< android::webkit::UrlInterceptHandler > const&);
		static cpp_boolean unregisterHandler(local_ref< android::webkit::UrlInterceptHandler > const&);
		static local_ref< android::webkit::CacheManager_::CacheResult > getSurrogate(local_ref< java::lang::String > const&, local_ref< java::util::Map > const&);
		static local_ref< android::webkit::PluginData > getPluginData(local_ref< java::lang::String > const&, local_ref< java::util::Map > const&);
	}; //class UrlInterceptRegistry

} //namespace webkit
} //namespace android


} //namespace j2cpp

#endif //J2CPP_ANDROID_WEBKIT_URLINTERCEPTREGISTRY_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_WEBKIT_URLINTERCEPTREGISTRY_HPP_IMPL
#define J2CPP_ANDROID_WEBKIT_URLINTERCEPTREGISTRY_HPP_IMPL

namespace j2cpp {


template <>
local_ref< android::webkit::UrlInterceptRegistry > create< android::webkit::UrlInterceptRegistry>()
{
	return local_ref< android::webkit::UrlInterceptRegistry >(
		environment::get().get_jenv()->NewObject(
			get_class<android::webkit::UrlInterceptRegistry::J2CPP_CLASS_NAME>(),
			get_method_id<android::webkit::UrlInterceptRegistry::J2CPP_CLASS_NAME, android::webkit::UrlInterceptRegistry::J2CPP_METHOD_NAME(0), android::webkit::UrlInterceptRegistry::J2CPP_METHOD_SIGNATURE(0), false>()
		)
	);
}

void android::webkit::UrlInterceptRegistry::setUrlInterceptDisabled(cpp_boolean const &a0)
{
	return void(
		environment::get().get_jenv()->CallStaticVoidMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), true>(),
			a0.get_jtype()
		)
	);
}

cpp_boolean android::webkit::UrlInterceptRegistry::urlInterceptDisabled()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallStaticBooleanMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), true>()
		)
	);
}

cpp_boolean android::webkit::UrlInterceptRegistry::registerHandler(local_ref< android::webkit::UrlInterceptHandler > const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallStaticBooleanMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), true>(),
			a0.get_jtype()
		)
	);
}

cpp_boolean android::webkit::UrlInterceptRegistry::unregisterHandler(local_ref< android::webkit::UrlInterceptHandler > const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallStaticBooleanMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), true>(),
			a0.get_jtype()
		)
	);
}

local_ref< android::webkit::CacheManager_::CacheResult > android::webkit::UrlInterceptRegistry::getSurrogate(local_ref< java::lang::String > const &a0, local_ref< java::util::Map > const &a1)
{
	return local_ref< android::webkit::CacheManager_::CacheResult >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), true>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

local_ref< android::webkit::PluginData > android::webkit::UrlInterceptRegistry::getPluginData(local_ref< java::lang::String > const &a0, local_ref< java::util::Map > const &a1)
{
	return local_ref< android::webkit::PluginData >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), true>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}


J2CPP_DEFINE_CLASS(android::webkit::UrlInterceptRegistry,"android/webkit/UrlInterceptRegistry")
J2CPP_DEFINE_METHOD(android::webkit::UrlInterceptRegistry,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::webkit::UrlInterceptRegistry,1,"setUrlInterceptDisabled","(Z)V")
J2CPP_DEFINE_METHOD(android::webkit::UrlInterceptRegistry,2,"urlInterceptDisabled","()Z")
J2CPP_DEFINE_METHOD(android::webkit::UrlInterceptRegistry,3,"registerHandler","(Landroid/webkit/UrlInterceptHandler;)Z")
J2CPP_DEFINE_METHOD(android::webkit::UrlInterceptRegistry,4,"unregisterHandler","(Landroid/webkit/UrlInterceptHandler;)Z")
J2CPP_DEFINE_METHOD(android::webkit::UrlInterceptRegistry,5,"getSurrogate","(Ljava/lang/String;Ljava/util/Map;)Landroid/webkit/CacheManager$CacheResult;")
J2CPP_DEFINE_METHOD(android::webkit::UrlInterceptRegistry,6,"getPluginData","(Ljava/lang/String;Ljava/util/Map;)Landroid/webkit/PluginData;")

} //namespace j2cpp

#endif //J2CPP_ANDROID_WEBKIT_URLINTERCEPTREGISTRY_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION