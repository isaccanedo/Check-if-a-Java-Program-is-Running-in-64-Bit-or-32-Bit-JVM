/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_isac_jni_ExampleObjectsJNI */

#ifndef _Included_com_isac_jni_ExampleObjectsJNI
#define _Included_com_isac_jni_ExampleObjectsJNI
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_isac_jni_ExampleObjectsJNI
 * Method:    createUser
 * Signature: (Ljava/lang/String;D)Lcom/isac/jni/UserData;
 */
JNIEXPORT jobject JNICALL Java_com_isac_jni_ExampleObjectsJNI_createUser
  (JNIEnv *, jobject, jstring, jdouble);

/*
 * Class:     com_isac_jni_ExampleObjectsJNI
 * Method:    printUserData
 * Signature: (Lcom/isac/jni/UserData;)V
 */
JNIEXPORT jstring JNICALL Java_com_isac_jni_ExampleObjectsJNI_printUserData
  (JNIEnv *, jobject, jobject);

#ifdef __cplusplus
}
#endif
#endif
