/*================================================================================
  code generated by: java2cpp
  class: android.widget.ProgressBar
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_WIDGET_PROGRESSBAR_HPP_DECL
#define J2CPP_ANDROID_WIDGET_PROGRESSBAR_HPP_DECL


namespace j2cpp { namespace android { namespace graphics { namespace drawable { class Drawable; } } } }
namespace j2cpp { namespace android { namespace content { class Context; } } }
namespace j2cpp { namespace android { namespace view { namespace animation { class Interpolator; } } } }
namespace j2cpp { namespace android { namespace util { class AttributeSet; } } }
namespace j2cpp { namespace android { namespace os { class Parcelable; } } }


#include <android/content/Context.hpp>
#include <android/graphics/drawable/Drawable.hpp>
#include <android/os/Parcelable.hpp>
#include <android/util/AttributeSet.hpp>
#include <android/view/animation/Interpolator.hpp>


namespace j2cpp {

namespace android { namespace widget {

	class ProgressBar;
	class ProgressBar
		: public cpp_object<ProgressBar>
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
		J2CPP_DECLARE_METHOD(16)
		J2CPP_DECLARE_METHOD(17)
		J2CPP_DECLARE_METHOD(18)
		J2CPP_DECLARE_METHOD(19)
		J2CPP_DECLARE_METHOD(20)
		J2CPP_DECLARE_METHOD(21)
		J2CPP_DECLARE_METHOD(22)
		J2CPP_DECLARE_METHOD(23)
		J2CPP_DECLARE_METHOD(24)
		J2CPP_DECLARE_METHOD(25)
		J2CPP_DECLARE_METHOD(26)
		J2CPP_DECLARE_METHOD(27)
		J2CPP_DECLARE_METHOD(28)
		J2CPP_DECLARE_METHOD(29)

		ProgressBar(jobject jobj)
		: cpp_object<ProgressBar>(jobj)
		{
		}

		cpp_boolean isIndeterminate();
		void setIndeterminate(cpp_boolean const&);
		local_ref< android::graphics::drawable::Drawable > getIndeterminateDrawable();
		void setIndeterminateDrawable(local_ref< android::graphics::drawable::Drawable > const&);
		local_ref< android::graphics::drawable::Drawable > getProgressDrawable();
		void setProgressDrawable(local_ref< android::graphics::drawable::Drawable > const&);
		void postInvalidate();
		void setProgress(cpp_int const&);
		void setSecondaryProgress(cpp_int const&);
		cpp_int getProgress();
		cpp_int getSecondaryProgress();
		cpp_int getMax();
		void setMax(cpp_int const&);
		void incrementProgressBy(cpp_int const&);
		void incrementSecondaryProgressBy(cpp_int const&);
		void setInterpolator(local_ref< android::content::Context > const&, cpp_int const&);
		void setInterpolator(local_ref< android::view::animation::Interpolator > const&);
		local_ref< android::view::animation::Interpolator > getInterpolator();
		void setVisibility(cpp_int const&);
		void invalidateDrawable(local_ref< android::graphics::drawable::Drawable > const&);
		local_ref< android::os::Parcelable > onSaveInstanceState();
		void onRestoreInstanceState(local_ref< android::os::Parcelable > const&);
	}; //class ProgressBar

} //namespace widget
} //namespace android


} //namespace j2cpp

#endif //J2CPP_ANDROID_WIDGET_PROGRESSBAR_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_WIDGET_PROGRESSBAR_HPP_IMPL
#define J2CPP_ANDROID_WIDGET_PROGRESSBAR_HPP_IMPL

namespace j2cpp {


template <>
local_ref< android::widget::ProgressBar > create< android::widget::ProgressBar>(local_ref< android::content::Context > const &a0)
{
	return local_ref< android::widget::ProgressBar >(
		environment::get().get_jenv()->NewObject(
			get_class<android::widget::ProgressBar::J2CPP_CLASS_NAME>(),
			get_method_id<android::widget::ProgressBar::J2CPP_CLASS_NAME, android::widget::ProgressBar::J2CPP_METHOD_NAME(0), android::widget::ProgressBar::J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype()
		)
	);
}

template <>
local_ref< android::widget::ProgressBar > create< android::widget::ProgressBar>(local_ref< android::content::Context > const &a0, local_ref< android::util::AttributeSet > const &a1)
{
	return local_ref< android::widget::ProgressBar >(
		environment::get().get_jenv()->NewObject(
			get_class<android::widget::ProgressBar::J2CPP_CLASS_NAME>(),
			get_method_id<android::widget::ProgressBar::J2CPP_CLASS_NAME, android::widget::ProgressBar::J2CPP_METHOD_NAME(1), android::widget::ProgressBar::J2CPP_METHOD_SIGNATURE(1), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

template <>
local_ref< android::widget::ProgressBar > create< android::widget::ProgressBar>(local_ref< android::content::Context > const &a0, local_ref< android::util::AttributeSet > const &a1, cpp_int const &a2)
{
	return local_ref< android::widget::ProgressBar >(
		environment::get().get_jenv()->NewObject(
			get_class<android::widget::ProgressBar::J2CPP_CLASS_NAME>(),
			get_method_id<android::widget::ProgressBar::J2CPP_CLASS_NAME, android::widget::ProgressBar::J2CPP_METHOD_NAME(2), android::widget::ProgressBar::J2CPP_METHOD_SIGNATURE(2), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

cpp_boolean android::widget::ProgressBar::isIndeterminate()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>()
		)
	);
}

void android::widget::ProgressBar::setIndeterminate(cpp_boolean const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< android::graphics::drawable::Drawable > android::widget::ProgressBar::getIndeterminateDrawable()
{
	return local_ref< android::graphics::drawable::Drawable >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>()
		)
	);
}

void android::widget::ProgressBar::setIndeterminateDrawable(local_ref< android::graphics::drawable::Drawable > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< android::graphics::drawable::Drawable > android::widget::ProgressBar::getProgressDrawable()
{
	return local_ref< android::graphics::drawable::Drawable >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(7), J2CPP_METHOD_SIGNATURE(7), false>()
		)
	);
}

void android::widget::ProgressBar::setProgressDrawable(local_ref< android::graphics::drawable::Drawable > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(8), J2CPP_METHOD_SIGNATURE(8), false>(),
			a0.get_jtype()
		)
	);
}


void android::widget::ProgressBar::postInvalidate()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(10), J2CPP_METHOD_SIGNATURE(10), false>()
		)
	);
}

void android::widget::ProgressBar::setProgress(cpp_int const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(11), J2CPP_METHOD_SIGNATURE(11), false>(),
			a0.get_jtype()
		)
	);
}

void android::widget::ProgressBar::setSecondaryProgress(cpp_int const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(12), J2CPP_METHOD_SIGNATURE(12), false>(),
			a0.get_jtype()
		)
	);
}

cpp_int android::widget::ProgressBar::getProgress()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(13), J2CPP_METHOD_SIGNATURE(13), false>()
		)
	);
}

cpp_int android::widget::ProgressBar::getSecondaryProgress()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(14), J2CPP_METHOD_SIGNATURE(14), false>()
		)
	);
}

cpp_int android::widget::ProgressBar::getMax()
{
	return cpp_int(
		environment::get().get_jenv()->CallIntMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(15), J2CPP_METHOD_SIGNATURE(15), false>()
		)
	);
}

void android::widget::ProgressBar::setMax(cpp_int const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(16), J2CPP_METHOD_SIGNATURE(16), false>(),
			a0.get_jtype()
		)
	);
}

void android::widget::ProgressBar::incrementProgressBy(cpp_int const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(17), J2CPP_METHOD_SIGNATURE(17), false>(),
			a0.get_jtype()
		)
	);
}

void android::widget::ProgressBar::incrementSecondaryProgressBy(cpp_int const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(18), J2CPP_METHOD_SIGNATURE(18), false>(),
			a0.get_jtype()
		)
	);
}

void android::widget::ProgressBar::setInterpolator(local_ref< android::content::Context > const &a0, cpp_int const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(19), J2CPP_METHOD_SIGNATURE(19), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void android::widget::ProgressBar::setInterpolator(local_ref< android::view::animation::Interpolator > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(20), J2CPP_METHOD_SIGNATURE(20), false>(),
			a0.get_jtype()
		)
	);
}

local_ref< android::view::animation::Interpolator > android::widget::ProgressBar::getInterpolator()
{
	return local_ref< android::view::animation::Interpolator >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(21), J2CPP_METHOD_SIGNATURE(21), false>()
		)
	);
}

void android::widget::ProgressBar::setVisibility(cpp_int const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(22), J2CPP_METHOD_SIGNATURE(22), false>(),
			a0.get_jtype()
		)
	);
}

void android::widget::ProgressBar::invalidateDrawable(local_ref< android::graphics::drawable::Drawable > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(23), J2CPP_METHOD_SIGNATURE(23), false>(),
			a0.get_jtype()
		)
	);
}





local_ref< android::os::Parcelable > android::widget::ProgressBar::onSaveInstanceState()
{
	return local_ref< android::os::Parcelable >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(28), J2CPP_METHOD_SIGNATURE(28), false>()
		)
	);
}

void android::widget::ProgressBar::onRestoreInstanceState(local_ref< android::os::Parcelable > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(29), J2CPP_METHOD_SIGNATURE(29), false>(),
			a0.get_jtype()
		)
	);
}


J2CPP_DEFINE_CLASS(android::widget::ProgressBar,"android/widget/ProgressBar")
J2CPP_DEFINE_METHOD(android::widget::ProgressBar,0,"<init>","(Landroid/content/Context;)V")
J2CPP_DEFINE_METHOD(android::widget::ProgressBar,1,"<init>","(Landroid/content/Context;Landroid/util/AttributeSet;)V")
J2CPP_DEFINE_METHOD(android::widget::ProgressBar,2,"<init>","(Landroid/content/Context;Landroid/util/AttributeSet;I)V")
J2CPP_DEFINE_METHOD(android::widget::ProgressBar,3,"isIndeterminate","()Z")
J2CPP_DEFINE_METHOD(android::widget::ProgressBar,4,"setIndeterminate","(Z)V")
J2CPP_DEFINE_METHOD(android::widget::ProgressBar,5,"getIndeterminateDrawable","()Landroid/graphics/drawable/Drawable;")
J2CPP_DEFINE_METHOD(android::widget::ProgressBar,6,"setIndeterminateDrawable","(Landroid/graphics/drawable/Drawable;)V")
J2CPP_DEFINE_METHOD(android::widget::ProgressBar,7,"getProgressDrawable","()Landroid/graphics/drawable/Drawable;")
J2CPP_DEFINE_METHOD(android::widget::ProgressBar,8,"setProgressDrawable","(Landroid/graphics/drawable/Drawable;)V")
J2CPP_DEFINE_METHOD(android::widget::ProgressBar,9,"verifyDrawable","(Landroid/graphics/drawable/Drawable;)Z")
J2CPP_DEFINE_METHOD(android::widget::ProgressBar,10,"postInvalidate","()V")
J2CPP_DEFINE_METHOD(android::widget::ProgressBar,11,"setProgress","(I)V")
J2CPP_DEFINE_METHOD(android::widget::ProgressBar,12,"setSecondaryProgress","(I)V")
J2CPP_DEFINE_METHOD(android::widget::ProgressBar,13,"getProgress","()I")
J2CPP_DEFINE_METHOD(android::widget::ProgressBar,14,"getSecondaryProgress","()I")
J2CPP_DEFINE_METHOD(android::widget::ProgressBar,15,"getMax","()I")
J2CPP_DEFINE_METHOD(android::widget::ProgressBar,16,"setMax","(I)V")
J2CPP_DEFINE_METHOD(android::widget::ProgressBar,17,"incrementProgressBy","(I)V")
J2CPP_DEFINE_METHOD(android::widget::ProgressBar,18,"incrementSecondaryProgressBy","(I)V")
J2CPP_DEFINE_METHOD(android::widget::ProgressBar,19,"setInterpolator","(Landroid/content/Context;I)V")
J2CPP_DEFINE_METHOD(android::widget::ProgressBar,20,"setInterpolator","(Landroid/view/animation/Interpolator;)V")
J2CPP_DEFINE_METHOD(android::widget::ProgressBar,21,"getInterpolator","()Landroid/view/animation/Interpolator;")
J2CPP_DEFINE_METHOD(android::widget::ProgressBar,22,"setVisibility","(I)V")
J2CPP_DEFINE_METHOD(android::widget::ProgressBar,23,"invalidateDrawable","(Landroid/graphics/drawable/Drawable;)V")
J2CPP_DEFINE_METHOD(android::widget::ProgressBar,24,"onSizeChanged","(IIII)V")
J2CPP_DEFINE_METHOD(android::widget::ProgressBar,25,"onDraw","(Landroid/graphics/Canvas;)V")
J2CPP_DEFINE_METHOD(android::widget::ProgressBar,26,"onMeasure","(II)V")
J2CPP_DEFINE_METHOD(android::widget::ProgressBar,27,"drawableStateChanged","()V")
J2CPP_DEFINE_METHOD(android::widget::ProgressBar,28,"onSaveInstanceState","()Landroid/os/Parcelable;")
J2CPP_DEFINE_METHOD(android::widget::ProgressBar,29,"onRestoreInstanceState","(Landroid/os/Parcelable;)V")

} //namespace j2cpp

#endif //J2CPP_ANDROID_WIDGET_PROGRESSBAR_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION