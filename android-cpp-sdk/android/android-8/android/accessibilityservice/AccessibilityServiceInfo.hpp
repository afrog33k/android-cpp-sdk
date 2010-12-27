/*================================================================================
  code generated by: java2cpp
  class: android.accessibilityservice.AccessibilityServiceInfo
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_ACCESSIBILITYSERVICE_ACCESSIBILITYSERVICEINFO_HPP_DECL
#define J2CPP_ANDROID_ACCESSIBILITYSERVICE_ACCESSIBILITYSERVICEINFO_HPP_DECL


namespace j2cpp { namespace android { namespace os { namespace Parcelable_ { class Creator; } } } }
namespace j2cpp { namespace android { namespace os { class Parcel; } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }


#include <android/os/Parcel.hpp>
#include <android/os/Parcelable.hpp>
#include <java/lang/String.hpp>


namespace j2cpp {

namespace android { namespace accessibilityservice {

	class AccessibilityServiceInfo;
	class AccessibilityServiceInfo
		: public cpp_object<AccessibilityServiceInfo>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)
		J2CPP_DECLARE_METHOD(1)
		J2CPP_DECLARE_METHOD(2)
		J2CPP_DECLARE_METHOD(3)
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

		AccessibilityServiceInfo(jobject jobj)
		: cpp_object<AccessibilityServiceInfo>(jobj)
		, eventTypes(jobj)
		, packageNames(jobj)
		, feedbackType(jobj)
		, notificationTimeout(jobj)
		, flags(jobj)
		{
		}

		cpp_int describeContents();
		void writeToParcel(local_ref< android::os::Parcel > const&, cpp_int const&);

		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(0), J2CPP_FIELD_SIGNATURE(0), cpp_int > FEEDBACK_SPOKEN;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(1), J2CPP_FIELD_SIGNATURE(1), cpp_int > FEEDBACK_HAPTIC;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(2), J2CPP_FIELD_SIGNATURE(2), cpp_int > FEEDBACK_AUDIBLE;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(3), J2CPP_FIELD_SIGNATURE(3), cpp_int > FEEDBACK_VISUAL;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(4), J2CPP_FIELD_SIGNATURE(4), cpp_int > FEEDBACK_GENERIC;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(5), J2CPP_FIELD_SIGNATURE(5), cpp_int > DEFAULT;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(6), J2CPP_FIELD_SIGNATURE(6), cpp_int > eventTypes;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(7), J2CPP_FIELD_SIGNATURE(7), local_ref< cpp_object_array<java::lang::String, 1> > > packageNames;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(8), J2CPP_FIELD_SIGNATURE(8), cpp_int > feedbackType;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(9), J2CPP_FIELD_SIGNATURE(9), cpp_long > notificationTimeout;
		field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(10), J2CPP_FIELD_SIGNATURE(10), cpp_int > flags;
		static static_field< J2CPP_CLASS_NAME, J2CPP_FIELD_NAME(11), J2CPP_FIELD_SIGNATURE(11), local_ref< android::os::Parcelable_::Creator > > CREATOR;
	}; //class AccessibilityServiceInfo

} //namespace accessibilityservice
} //namespace android


} //namespace j2cpp

#endif //J2CPP_ANDROID_ACCESSIBILITYSERVICE_ACCESSIBILITYSERVICEINFO_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_ACCESSIBILITYSERVICE_ACCESSIBILITYSERVICEINFO_HPP_IMPL
#define J2CPP_ANDROID_ACCESSIBILITYSERVICE_ACCESSIBILITYSERVICEINFO_HPP_IMPL

namespace j2cpp {


template <>
local_ref< android::accessibilityservice::AccessibilityServiceInfo > create< android::accessibilityservice::AccessibilityServiceInfo>()
{
	return local_ref< android::accessibilityservice::AccessibilityServiceInfo >(
		environment::get().get_jenv()->NewObject(
			get_class<android::accessibilityservice::AccessibilityServiceInfo::J2CPP_CLASS_NAME>(),
			get_method_id<android::accessibilityservice::AccessibilityServiceInfo::J2CPP_CLASS_NAME, android::accessibilityservice::AccessibilityServiceInfo::J2CPP_METHOD_NAME(0), android::accessibilityservice::AccessibilityServiceInfo::J2CPP_METHOD_SIGNATURE(0), false>()
		)
	);
}

cpp_int android::accessibilityservice::AccessibilityServiceInfo::describeContents()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>()
		)
	);
}

void android::accessibilityservice::AccessibilityServiceInfo::writeToParcel(local_ref< android::os::Parcel > const &a0, cpp_int const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}


static_field<
	android::accessibilityservice::AccessibilityServiceInfo::J2CPP_CLASS_NAME,
	android::accessibilityservice::AccessibilityServiceInfo::J2CPP_FIELD_NAME(0),
	android::accessibilityservice::AccessibilityServiceInfo::J2CPP_FIELD_SIGNATURE(0),
	cpp_int
> android::accessibilityservice::AccessibilityServiceInfo::FEEDBACK_SPOKEN;

static_field<
	android::accessibilityservice::AccessibilityServiceInfo::J2CPP_CLASS_NAME,
	android::accessibilityservice::AccessibilityServiceInfo::J2CPP_FIELD_NAME(1),
	android::accessibilityservice::AccessibilityServiceInfo::J2CPP_FIELD_SIGNATURE(1),
	cpp_int
> android::accessibilityservice::AccessibilityServiceInfo::FEEDBACK_HAPTIC;

static_field<
	android::accessibilityservice::AccessibilityServiceInfo::J2CPP_CLASS_NAME,
	android::accessibilityservice::AccessibilityServiceInfo::J2CPP_FIELD_NAME(2),
	android::accessibilityservice::AccessibilityServiceInfo::J2CPP_FIELD_SIGNATURE(2),
	cpp_int
> android::accessibilityservice::AccessibilityServiceInfo::FEEDBACK_AUDIBLE;

static_field<
	android::accessibilityservice::AccessibilityServiceInfo::J2CPP_CLASS_NAME,
	android::accessibilityservice::AccessibilityServiceInfo::J2CPP_FIELD_NAME(3),
	android::accessibilityservice::AccessibilityServiceInfo::J2CPP_FIELD_SIGNATURE(3),
	cpp_int
> android::accessibilityservice::AccessibilityServiceInfo::FEEDBACK_VISUAL;

static_field<
	android::accessibilityservice::AccessibilityServiceInfo::J2CPP_CLASS_NAME,
	android::accessibilityservice::AccessibilityServiceInfo::J2CPP_FIELD_NAME(4),
	android::accessibilityservice::AccessibilityServiceInfo::J2CPP_FIELD_SIGNATURE(4),
	cpp_int
> android::accessibilityservice::AccessibilityServiceInfo::FEEDBACK_GENERIC;

static_field<
	android::accessibilityservice::AccessibilityServiceInfo::J2CPP_CLASS_NAME,
	android::accessibilityservice::AccessibilityServiceInfo::J2CPP_FIELD_NAME(5),
	android::accessibilityservice::AccessibilityServiceInfo::J2CPP_FIELD_SIGNATURE(5),
	cpp_int
> android::accessibilityservice::AccessibilityServiceInfo::DEFAULT;

static_field<
	android::accessibilityservice::AccessibilityServiceInfo::J2CPP_CLASS_NAME,
	android::accessibilityservice::AccessibilityServiceInfo::J2CPP_FIELD_NAME(11),
	android::accessibilityservice::AccessibilityServiceInfo::J2CPP_FIELD_SIGNATURE(11),
	local_ref< android::os::Parcelable_::Creator >
> android::accessibilityservice::AccessibilityServiceInfo::CREATOR;


J2CPP_DEFINE_CLASS(android::accessibilityservice::AccessibilityServiceInfo,"android/accessibilityservice/AccessibilityServiceInfo")
J2CPP_DEFINE_METHOD(android::accessibilityservice::AccessibilityServiceInfo,0,"<init>","()V")
J2CPP_DEFINE_METHOD(android::accessibilityservice::AccessibilityServiceInfo,1,"describeContents","()I")
J2CPP_DEFINE_METHOD(android::accessibilityservice::AccessibilityServiceInfo,2,"writeToParcel","(Landroid/os/Parcel;I)V")
J2CPP_DEFINE_METHOD(android::accessibilityservice::AccessibilityServiceInfo,3,"<clinit>","()V")
J2CPP_DEFINE_FIELD(android::accessibilityservice::AccessibilityServiceInfo,0,"FEEDBACK_SPOKEN","I")
J2CPP_DEFINE_FIELD(android::accessibilityservice::AccessibilityServiceInfo,1,"FEEDBACK_HAPTIC","I")
J2CPP_DEFINE_FIELD(android::accessibilityservice::AccessibilityServiceInfo,2,"FEEDBACK_AUDIBLE","I")
J2CPP_DEFINE_FIELD(android::accessibilityservice::AccessibilityServiceInfo,3,"FEEDBACK_VISUAL","I")
J2CPP_DEFINE_FIELD(android::accessibilityservice::AccessibilityServiceInfo,4,"FEEDBACK_GENERIC","I")
J2CPP_DEFINE_FIELD(android::accessibilityservice::AccessibilityServiceInfo,5,"DEFAULT","I")
J2CPP_DEFINE_FIELD(android::accessibilityservice::AccessibilityServiceInfo,6,"eventTypes","I")
J2CPP_DEFINE_FIELD(android::accessibilityservice::AccessibilityServiceInfo,7,"packageNames","[java.lang.String")
J2CPP_DEFINE_FIELD(android::accessibilityservice::AccessibilityServiceInfo,8,"feedbackType","I")
J2CPP_DEFINE_FIELD(android::accessibilityservice::AccessibilityServiceInfo,9,"notificationTimeout","J")
J2CPP_DEFINE_FIELD(android::accessibilityservice::AccessibilityServiceInfo,10,"flags","I")
J2CPP_DEFINE_FIELD(android::accessibilityservice::AccessibilityServiceInfo,11,"CREATOR","Landroid/os/Parcelable$Creator;")

} //namespace j2cpp

#endif //J2CPP_ANDROID_ACCESSIBILITYSERVICE_ACCESSIBILITYSERVICEINFO_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION