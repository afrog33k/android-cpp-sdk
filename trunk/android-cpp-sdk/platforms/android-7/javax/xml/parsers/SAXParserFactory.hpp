/*================================================================================
  code generated by: java2cpp
  class: javax.xml.parsers.SAXParserFactory
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVAX_XML_PARSERS_SAXPARSERFACTORY_HPP_DECL
#define J2CPP_JAVAX_XML_PARSERS_SAXPARSERFACTORY_HPP_DECL


namespace j2cpp { namespace javax { namespace xml { namespace parsers { class SAXParser; } } } }
namespace j2cpp { namespace java { namespace lang { class String; } } }


#include <java/lang/String.hpp>
#include <javax/xml/parsers/SAXParser.hpp>


namespace j2cpp {

namespace javax { namespace xml { namespace parsers {

	class SAXParserFactory;
	class SAXParserFactory
		: public cpp_object<SAXParserFactory>
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

		SAXParserFactory(jobject jobj)
		: cpp_object<SAXParserFactory>(jobj)
		{
		}

		cpp_boolean getFeature(local_ref< java::lang::String > const&);
		cpp_boolean isNamespaceAware();
		cpp_boolean isValidating();
		cpp_boolean isXIncludeAware();
		static local_ref< javax::xml::parsers::SAXParserFactory > newInstance();
		local_ref< javax::xml::parsers::SAXParser > newSAXParser();
		void setFeature(local_ref< java::lang::String > const&, cpp_boolean const&);
		void setNamespaceAware(cpp_boolean const&);
		void setValidating(cpp_boolean const&);
		void setXIncludeAware(cpp_boolean const&);
	}; //class SAXParserFactory

} //namespace parsers
} //namespace xml
} //namespace javax


} //namespace j2cpp

#endif //J2CPP_JAVAX_XML_PARSERS_SAXPARSERFACTORY_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVAX_XML_PARSERS_SAXPARSERFACTORY_HPP_IMPL
#define J2CPP_JAVAX_XML_PARSERS_SAXPARSERFACTORY_HPP_IMPL

namespace j2cpp {


template <>
local_ref< javax::xml::parsers::SAXParserFactory > create< javax::xml::parsers::SAXParserFactory>()
{
	return local_ref< javax::xml::parsers::SAXParserFactory >(
		environment::get().get_jenv()->NewObject(
			get_class<javax::xml::parsers::SAXParserFactory::J2CPP_CLASS_NAME>(),
			get_method_id<javax::xml::parsers::SAXParserFactory::J2CPP_CLASS_NAME, javax::xml::parsers::SAXParserFactory::J2CPP_METHOD_NAME(0), javax::xml::parsers::SAXParserFactory::J2CPP_METHOD_SIGNATURE(0), false>()
		)
	);
}

cpp_boolean javax::xml::parsers::SAXParserFactory::getFeature(local_ref< java::lang::String > const &a0)
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(1), J2CPP_METHOD_SIGNATURE(1), false>(),
			a0.get_jtype()
		)
	);
}

cpp_boolean javax::xml::parsers::SAXParserFactory::isNamespaceAware()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(2), J2CPP_METHOD_SIGNATURE(2), false>()
		)
	);
}

cpp_boolean javax::xml::parsers::SAXParserFactory::isValidating()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(3), J2CPP_METHOD_SIGNATURE(3), false>()
		)
	);
}

cpp_boolean javax::xml::parsers::SAXParserFactory::isXIncludeAware()
{
	return cpp_boolean(
		environment::get().get_jenv()->CallBooleanMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(4), J2CPP_METHOD_SIGNATURE(4), false>()
		)
	);
}

local_ref< javax::xml::parsers::SAXParserFactory > javax::xml::parsers::SAXParserFactory::newInstance()
{
	return local_ref< javax::xml::parsers::SAXParserFactory >(
		environment::get().get_jenv()->CallStaticObjectMethod(
			get_class<J2CPP_CLASS_NAME>(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(5), J2CPP_METHOD_SIGNATURE(5), true>()
		)
	);
}

local_ref< javax::xml::parsers::SAXParser > javax::xml::parsers::SAXParserFactory::newSAXParser()
{
	return local_ref< javax::xml::parsers::SAXParser >(
		environment::get().get_jenv()->CallObjectMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(6), J2CPP_METHOD_SIGNATURE(6), false>()
		)
	);
}

void javax::xml::parsers::SAXParserFactory::setFeature(local_ref< java::lang::String > const &a0, cpp_boolean const &a1)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(7), J2CPP_METHOD_SIGNATURE(7), false>(),
			a0.get_jtype(), a1.get_jtype()
		)
	);
}

void javax::xml::parsers::SAXParserFactory::setNamespaceAware(cpp_boolean const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(8), J2CPP_METHOD_SIGNATURE(8), false>(),
			a0.get_jtype()
		)
	);
}

void javax::xml::parsers::SAXParserFactory::setValidating(cpp_boolean const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(9), J2CPP_METHOD_SIGNATURE(9), false>(),
			a0.get_jtype()
		)
	);
}

void javax::xml::parsers::SAXParserFactory::setXIncludeAware(cpp_boolean const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(10), J2CPP_METHOD_SIGNATURE(10), false>(),
			a0.get_jtype()
		)
	);
}


J2CPP_DEFINE_CLASS(javax::xml::parsers::SAXParserFactory,"javax/xml/parsers/SAXParserFactory")
J2CPP_DEFINE_METHOD(javax::xml::parsers::SAXParserFactory,0,"<init>","()V")
J2CPP_DEFINE_METHOD(javax::xml::parsers::SAXParserFactory,1,"getFeature","(Ljava/lang/String;)Z")
J2CPP_DEFINE_METHOD(javax::xml::parsers::SAXParserFactory,2,"isNamespaceAware","()Z")
J2CPP_DEFINE_METHOD(javax::xml::parsers::SAXParserFactory,3,"isValidating","()Z")
J2CPP_DEFINE_METHOD(javax::xml::parsers::SAXParserFactory,4,"isXIncludeAware","()Z")
J2CPP_DEFINE_METHOD(javax::xml::parsers::SAXParserFactory,5,"newInstance","()Ljavax/xml/parsers/SAXParserFactory;")
J2CPP_DEFINE_METHOD(javax::xml::parsers::SAXParserFactory,6,"newSAXParser","()Ljavax/xml/parsers/SAXParser;")
J2CPP_DEFINE_METHOD(javax::xml::parsers::SAXParserFactory,7,"setFeature","(Ljava/lang/String;Z)V")
J2CPP_DEFINE_METHOD(javax::xml::parsers::SAXParserFactory,8,"setNamespaceAware","(Z)V")
J2CPP_DEFINE_METHOD(javax::xml::parsers::SAXParserFactory,9,"setValidating","(Z)V")
J2CPP_DEFINE_METHOD(javax::xml::parsers::SAXParserFactory,10,"setXIncludeAware","(Z)V")

} //namespace j2cpp

#endif //J2CPP_JAVAX_XML_PARSERS_SAXPARSERFACTORY_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION