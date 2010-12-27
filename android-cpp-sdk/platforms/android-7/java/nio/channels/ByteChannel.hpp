/*================================================================================
  code generated by: java2cpp
  class: java.nio.channels.ByteChannel
================================================================================*/


#ifndef J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_NIO_CHANNELS_BYTECHANNEL_HPP_DECL
#define J2CPP_JAVA_NIO_CHANNELS_BYTECHANNEL_HPP_DECL


namespace j2cpp { namespace java { namespace lang { class Object; } } }
namespace j2cpp { namespace java { namespace nio { namespace channels { class ReadableByteChannel; } } } }
namespace j2cpp { namespace java { namespace nio { namespace channels { class WritableByteChannel; } } } }


#include <java/lang/Object.hpp>
#include <java/nio/channels/ReadableByteChannel.hpp>
#include <java/nio/channels/WritableByteChannel.hpp>


namespace j2cpp {

namespace java { namespace nio { namespace channels {

	class ByteChannel;
	class ByteChannel
		: public cpp_object<ByteChannel>
	{
	public:

		J2CPP_DECLARE_CLASS


		explicit ByteChannel(jobject jobj)
		: cpp_object<ByteChannel>(jobj)
		{
		}

		operator local_ref<java::lang::Object>() const;
		operator local_ref<java::nio::channels::ReadableByteChannel>() const;
		operator local_ref<java::nio::channels::WritableByteChannel>() const;

	}; //class ByteChannel

} //namespace channels
} //namespace nio
} //namespace java

} //namespace j2cpp

#endif //J2CPP_JAVA_NIO_CHANNELS_BYTECHANNEL_HPP_DECL

#else //J2CPP_INCLUDE_IMPLEMENTATION

#ifndef J2CPP_JAVA_NIO_CHANNELS_BYTECHANNEL_HPP_IMPL
#define J2CPP_JAVA_NIO_CHANNELS_BYTECHANNEL_HPP_IMPL

namespace j2cpp {



java::nio::channels::ByteChannel::operator local_ref<java::lang::Object>() const
{
	return local_ref<java::lang::Object>(get_jtype());
}

java::nio::channels::ByteChannel::operator local_ref<java::nio::channels::ReadableByteChannel>() const
{
	return local_ref<java::nio::channels::ReadableByteChannel>(get_jtype());
}

java::nio::channels::ByteChannel::operator local_ref<java::nio::channels::WritableByteChannel>() const
{
	return local_ref<java::nio::channels::WritableByteChannel>(get_jtype());
}

J2CPP_DEFINE_CLASS(java::nio::channels::ByteChannel,"java/nio/channels/ByteChannel")

} //namespace j2cpp

#endif //J2CPP_JAVA_NIO_CHANNELS_BYTECHANNEL_HPP_IMPL

#endif //J2CPP_INCLUDE_IMPLEMENTATION