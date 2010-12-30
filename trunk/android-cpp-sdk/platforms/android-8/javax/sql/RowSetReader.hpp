/*================================================================================
  code generated by: java2cpp
  class: javax.sql.RowSetReader
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVAX_SQL_ROWSETREADER_HPP_DECL
#define J2CPP_JAVAX_SQL_ROWSETREADER_HPP_DECL


namespace j2cpp { namespace javax { namespace sql { class RowSetInternal; } } }


#include <javax/sql/RowSetInternal.hpp>


namespace j2cpp {

namespace javax { namespace sql {

	class RowSetReader;
	class RowSetReader
		: public cpp_object<RowSetReader>
	{
	public:

		J2CPP_DECLARE_CLASS

		J2CPP_DECLARE_METHOD(0)

		RowSetReader(jobject jobj)
		: cpp_object<RowSetReader>(jobj)
		{
		}

		void readData(local_ref< javax::sql::RowSetInternal > const&);
	}; //class RowSetReader

} //namespace sql
} //namespace javax


} //namespace j2cpp

#endif //J2CPP_JAVAX_SQL_ROWSETREADER_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVAX_SQL_ROWSETREADER_HPP_IMPL
#define J2CPP_JAVAX_SQL_ROWSETREADER_HPP_IMPL

namespace j2cpp {


void javax::sql::RowSetReader::readData(local_ref< javax::sql::RowSetInternal > const &a0)
{
	return void(
		environment::get().get_jenv()->CallVoidMethod(
			get_jtype(),
			get_method_id<J2CPP_CLASS_NAME, J2CPP_METHOD_NAME(0), J2CPP_METHOD_SIGNATURE(0), false>(),
			a0.get_jtype()
		)
	);
}


J2CPP_DEFINE_CLASS(javax::sql::RowSetReader,"javax/sql/RowSetReader")
J2CPP_DEFINE_METHOD(javax::sql::RowSetReader,0,"readData","(Ljavax/sql/RowSetInternal;)V")

} //namespace j2cpp

#endif //J2CPP_JAVAX_SQL_ROWSETREADER_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION