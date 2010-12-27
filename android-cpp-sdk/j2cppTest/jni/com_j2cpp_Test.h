/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_j2cpp_Test */

#ifndef _Included_com_j2cpp_Test
#define _Included_com_j2cpp_Test
#ifdef __cplusplus
extern "C" {
#endif
#undef com_j2cpp_Test_MODE_PRIVATE
#define com_j2cpp_Test_MODE_PRIVATE 0L
#undef com_j2cpp_Test_MODE_WORLD_READABLE
#define com_j2cpp_Test_MODE_WORLD_READABLE 1L
#undef com_j2cpp_Test_MODE_WORLD_WRITEABLE
#define com_j2cpp_Test_MODE_WORLD_WRITEABLE 2L
#undef com_j2cpp_Test_MODE_APPEND
#define com_j2cpp_Test_MODE_APPEND 32768L
#undef com_j2cpp_Test_BIND_AUTO_CREATE
#define com_j2cpp_Test_BIND_AUTO_CREATE 1L
#undef com_j2cpp_Test_BIND_DEBUG_UNBIND
#define com_j2cpp_Test_BIND_DEBUG_UNBIND 2L
#undef com_j2cpp_Test_BIND_NOT_FOREGROUND
#define com_j2cpp_Test_BIND_NOT_FOREGROUND 4L
#undef com_j2cpp_Test_CONTEXT_INCLUDE_CODE
#define com_j2cpp_Test_CONTEXT_INCLUDE_CODE 1L
#undef com_j2cpp_Test_CONTEXT_IGNORE_SECURITY
#define com_j2cpp_Test_CONTEXT_IGNORE_SECURITY 2L
#undef com_j2cpp_Test_CONTEXT_RESTRICTED
#define com_j2cpp_Test_CONTEXT_RESTRICTED 4L
#undef com_j2cpp_Test_RESULT_CANCELED
#define com_j2cpp_Test_RESULT_CANCELED 0L
#undef com_j2cpp_Test_RESULT_OK
#define com_j2cpp_Test_RESULT_OK -1L
#undef com_j2cpp_Test_RESULT_FIRST_USER
#define com_j2cpp_Test_RESULT_FIRST_USER 1L
#undef com_j2cpp_Test_DEFAULT_KEYS_DISABLE
#define com_j2cpp_Test_DEFAULT_KEYS_DISABLE 0L
#undef com_j2cpp_Test_DEFAULT_KEYS_DIALER
#define com_j2cpp_Test_DEFAULT_KEYS_DIALER 1L
#undef com_j2cpp_Test_DEFAULT_KEYS_SHORTCUT
#define com_j2cpp_Test_DEFAULT_KEYS_SHORTCUT 2L
#undef com_j2cpp_Test_DEFAULT_KEYS_SEARCH_LOCAL
#define com_j2cpp_Test_DEFAULT_KEYS_SEARCH_LOCAL 3L
#undef com_j2cpp_Test_DEFAULT_KEYS_SEARCH_GLOBAL
#define com_j2cpp_Test_DEFAULT_KEYS_SEARCH_GLOBAL 4L
/*
 * Class:     com_j2cpp_Test
 * Method:    math_cos
 * Signature: (D)D
 */
JNIEXPORT jdouble JNICALL Java_com_j2cpp_Test_math_1cos
  (JNIEnv *, jobject, jdouble);

/*
 * Class:     com_j2cpp_Test
 * Method:    math_sin
 * Signature: (D)D
 */
JNIEXPORT jdouble JNICALL Java_com_j2cpp_Test_math_1sin
  (JNIEnv *, jobject, jdouble);

/*
 * Class:     com_j2cpp_Test
 * Method:    testBitSetBit
 * Signature: (Ljava/util/BitSet;I)Z
 */
JNIEXPORT jboolean JNICALL Java_com_j2cpp_Test_testBitSetBit
  (JNIEnv *, jobject, jobject, jint);

/*
 * Class:     com_j2cpp_Test
 * Method:    testStringLength
 * Signature: (Ljava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_com_j2cpp_Test_testStringLength
  (JNIEnv *, jobject, jstring);

/*
 * Class:     com_j2cpp_Test
 * Method:    testStringCharAt
 * Signature: (Ljava/lang/String;I)C
 */
JNIEXPORT jchar JNICALL Java_com_j2cpp_Test_testStringCharAt
  (JNIEnv *, jobject, jstring, jint);

/*
 * Class:     com_j2cpp_Test
 * Method:    testStringCreate
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_j2cpp_Test_testStringCreate
  (JNIEnv *, jobject);

/*
 * Class:     com_j2cpp_Test
 * Method:    testBitSetCreate
 * Signature: ()Ljava/util/BitSet;
 */
JNIEXPORT jobject JNICALL Java_com_j2cpp_Test_testBitSetCreate
  (JNIEnv *, jobject);

/*
 * Class:     com_j2cpp_Test
 * Method:    testGetValueOf_GL_TRUE
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_j2cpp_Test_testGetValueOf_1GL_1TRUE
  (JNIEnv *, jobject);

/*
 * Class:     com_j2cpp_Test
 * Method:    testField
 * Signature: ()Landroid/app/ActivityManager/RecentTaskInfo;
 */
JNIEXPORT jobject JNICALL Java_com_j2cpp_Test_testField
  (JNIEnv *, jobject);

/*
 * Class:     com_j2cpp_Test
 * Method:    testView
 * Signature: (Landroid/widget/TextView;)V
 */
JNIEXPORT void JNICALL Java_com_j2cpp_Test_testView
  (JNIEnv *, jobject, jobject);

#ifdef __cplusplus
}
#endif
#endif
