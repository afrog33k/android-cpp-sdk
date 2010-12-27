/*================================================================================
  code generated by: java2cpp
  class: android.app.DatePickerDialog
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_APP_DATEPICKERDIALOG_HPP_DECL
#define J2CPP_ANDROID_APP_DATEPICKERDIALOG_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace android { namespace app { namespace DatePickerDialog_ { class OnDateSetListener; } } } }
namespace j2cpp { namespace android { namespace app { class AlertDialog; } } }
namespace j2cpp { namespace android { namespace content { class DialogInterface; } } }
namespace j2cpp { namespace android { namespace content { class Context; } } }
namespace j2cpp { namespace android { namespace content { namespace DialogInterface_ { class OnClickListener; } } } }
namespace j2cpp { namespace android { namespace widget { class DatePicker; } } }
namespace j2cpp { namespace android { namespace widget { namespace DatePicker_ { class OnDateChangedListener; } } } }
namespace j2cpp { namespace android { namespace os { class Bundle; } } }


#include <android/app/AlertDialog.hpp>
#include <android/app/DatePickerDialog.hpp>
#include <android/content/Context.hpp>
#include <android/content/DialogInterface.hpp>
#include <android/os/Bundle.hpp>
#include <android/widget/DatePicker.hpp>
#include <java/lang/Object.hpp>


namespace j2cpp {

namespace android { namespace app {

	class DatePickerDialog;
	namespace DatePickerDialog_ {

		class OnDateSetListener;
		class OnDateSetListener
			: public cpp_object<OnDateSetListener>
		{
		public:

			J2CPP_DECLARE_CLASS

			J2CPP_DECLARE_METHOD(0)

			explicit OnDateSetListener(jobject jobj)
			: cpp_object<OnDateSetListener>(jobj)
			{
			}

			operator local_ref<java::lang::Object>() const;


			void onDateSet(local_ref< android::widget::DatePicker > const&, cpp_int const&, cpp_int const&, cpp_int const&);
		}; //class OnDateSetListener

	} //namespace DatePickerDialog_

	class DatePickerDialog
		: public cpp_object<DatePickerDialog>
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

		typedef DatePickerDialog_::OnDateSetListener OnDateSetListener;

		explicit DatePickerDialog(jobject jobj)
		: cpp_object<DatePickerDialog>(jobj)
		{
		}

		operator local_ref<android::app::AlertDialog>() const;
		operator local_ref<android::content::DialogInterface_::OnClickListener>() const;
		operator local_ref<android::widget::DatePicker_::OnDateChangedListener>() const;


		DatePickerDialog(local_ref< android::content::Context > const&, local_ref< android::app::DatePickerDialog_::OnDateSetListener > const&, cpp_int const&, cpp_int const&, cpp_int const&);
		DatePickerDialog(local_ref< android::content::Context > const&, cpp_int const&, local_ref< android::app::DatePickerDialog_::OnDateSetListener > const&, cpp_int const&, cpp_int const&, cpp_int const&);
		void show();
		void onClick(local_ref< android::content::DialogInterface > const&, cpp_int const&);
		void onDateChanged(local_ref< android::widget::DatePicker > const&, cpp_int const&, cpp_int const&, cpp_int const&);
		void updateDate(cpp_int const&, cpp_int const&, cpp_int const&);
		local_ref< android::os::Bundle > onSaveInstanceState();
		void onRestoreInstanceState(local_ref< android::os::Bundle > const&);
	}; //class DatePickerDialog

} //namespace app
} //namespace android

} //namespace j2cpp

#endif //J2CPP_ANDROID_APP_DATEPICKERDIALOG_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_ANDROID_APP_DATEPICKERDIALOG_HPP_IMPL
#define J2CPP_ANDROID_APP_DATEPICKERDIALOG_HPP_IMPL

namespace j2cpp {




android::app::DatePickerDialog_::OnDateSetListener::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jtype());
}

void android::app::DatePickerDialog_::OnDateSetListener::onDateSet(local_ref< android::widget::DatePicker > const &a0, cpp_int const &a1, cpp_int const &a2, cpp_int const &a3)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(0), J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype(), a3.get_jtype()
		)
	);
}


J2CPP_DEFINE_CLASS(android::app::DatePickerDialog_::OnDateSetListener,"android/app/DatePickerDialog$OnDateSetListener")
J2CPP_DEFINE_METHOD(android::app::DatePickerDialog_::OnDateSetListener,0,"onDateSet","(Landroid/widget/DatePicker;III)V")



android::app::DatePickerDialog::operator local_ref<android::app::AlertDialog>() const
{
	return local_ref<android::app::AlertDialog>(get_jtype());
}

android::app::DatePickerDialog::operator local_ref<android::content::DialogInterface_::OnClickListener>() const
{
	return local_ref<android::content::DialogInterface_::OnClickListener>(get_jtype());
}

android::app::DatePickerDialog::operator local_ref<android::widget::DatePicker_::OnDateChangedListener>() const
{
	return local_ref<android::widget::DatePicker_::OnDateChangedListener>(get_jtype());
}


android::app::DatePickerDialog::DatePickerDialog(local_ref< android::content::Context > const &a0, local_ref< android::app::DatePickerDialog_::OnDateSetListener > const &a1, cpp_int const &a2, cpp_int const &a3, cpp_int const &a4)
: cpp_object<android::app::DatePickerDialog>(
	environment::get().get_jenv()->NewObject(
		get_class<android::app::DatePickerDialog::J2CPP_CLASS_NAME>(),
		get_method_id<android::app::DatePickerDialog::J2CPP_CLASS_NAME, android::app::DatePickerDialog::J2CPP_METHOD_NAME(0), android::app::DatePickerDialog::J2CPP_METHOD_SIGNATURE(0), false>(),
		a0.get_jtype(), a1.get_jtype(), a2.get_jtype(), a3.get_jtype(), a4.get_jtype()
	)
)
{
}



android::app::DatePickerDialog::DatePickerDialog(local_ref< android::content::Context > const &a0, cpp_int const &a1, local_ref< android::app::DatePickerDialog_::OnDateSetListener > const &a2, cpp_int const &a3, cpp_int const &a4, cpp_int const &a5)
: cpp_object<android::app::DatePickerDialog>(
	environment::get().get_jenv()->NewObject(
		get_class<android::app::DatePickerDialog::J2CPP_CLASS_NAME>(),
		get_method_id<android::app::DatePickerDialog::J2CPP_CLASS_NAME, android::app::DatePickerDialog::J2CPP_METHOD_NAME(1), android::app::DatePickerDialog::J2CPP_METHOD_SIGNATURE(1), false>(),
		a0.get_jtype(), a1.get_jtype(), a2.get_jtype(), a3.get_jtype(), a4.get_jtype(), a5.get_jtype()
	)
)
{
}


void android::app::DatePickerDialog::show()
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>()
		)
	);
}

void android::app::DatePickerDialog::onClick(local_ref< android::content::DialogInterface > const &a0, cpp_int const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void android::app::DatePickerDialog::onDateChanged(local_ref< android::widget::DatePicker > const &a0, cpp_int const &a1, cpp_int const &a2, cpp_int const &a3)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype(), a3.get_jtype()
		)
	);
}

void android::app::DatePickerDialog::updateDate(cpp_int const &a0, cpp_int const &a1, cpp_int const &a2)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), false>(),
			a0.get_jtype(), a1.get_jtype(), a2.get_jtype()
		)
	);
}

local_ref< android::os::Bundle > android::app::DatePickerDialog::onSaveInstanceState()
{
	return local_ref< android::os::Bundle >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>()
		)
	);
}

void android::app::DatePickerDialog::onRestoreInstanceState(local_ref< android::os::Bundle > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(7), J2CPP_METHOD_SIGNATURE(7), false>(),
			a0.get_jtype()
		)
	);
}


J2CPP_DEFINE_CLASS(android::app::DatePickerDialog,"android/app/DatePickerDialog")
J2CPP_DEFINE_METHOD(android::app::DatePickerDialog,0,"<init>","(Landroid/content/Context;Landroid/app/DatePickerDialog$OnDateSetListener;III)V")
J2CPP_DEFINE_METHOD(android::app::DatePickerDialog,1,"<init>","(Landroid/content/Context;ILandroid/app/DatePickerDialog$OnDateSetListener;III)V")
J2CPP_DEFINE_METHOD(android::app::DatePickerDialog,2,"show","()V")
J2CPP_DEFINE_METHOD(android::app::DatePickerDialog,3,"onClick","(Landroid/content/DialogInterface;I)V")
J2CPP_DEFINE_METHOD(android::app::DatePickerDialog,4,"onDateChanged","(Landroid/widget/DatePicker;III)V")
J2CPP_DEFINE_METHOD(android::app::DatePickerDialog,5,"updateDate","(III)V")
J2CPP_DEFINE_METHOD(android::app::DatePickerDialog,6,"onSaveInstanceState","()Landroid/os/Bundle;")
J2CPP_DEFINE_METHOD(android::app::DatePickerDialog,7,"onRestoreInstanceState","(Landroid/os/Bundle;)V")

} //namespace j2cpp

#endif //J2CPP_ANDROID_APP_DATEPICKERDIALOG_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION