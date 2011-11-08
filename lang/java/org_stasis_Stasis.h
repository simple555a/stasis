/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class org_stasis_Stasis */

#ifndef _Included_org_stasis_Stasis
#define _Included_org_stasis_Stasis
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     org_stasis_Stasis
 * Method:    init
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_stasis_Stasis_init
  (JNIEnv *, jclass);

/*
 * Class:     org_stasis_Stasis
 * Method:    deinit
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_stasis_Stasis_deinit
  (JNIEnv *, jclass);

/*
 * Class:     org_stasis_Stasis
 * Method:    root_record
 * Signature: ()[J
 */
JNIEXPORT jlongArray JNICALL Java_org_stasis_Stasis_root_1record
  (JNIEnv *, jclass);

/*
 * Class:     org_stasis_Stasis
 * Method:    begin
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_org_stasis_Stasis_begin
  (JNIEnv *, jclass);

/*
 * Class:     org_stasis_Stasis
 * Method:    commit
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_stasis_Stasis_commit
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_stasis_Stasis
 * Method:    abort
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_stasis_Stasis_abort
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_stasis_Stasis
 * Method:    prepare
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_stasis_Stasis_prepare
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_stasis_Stasis
 * Method:    record_type
 * Signature: (J[J)J
 */
JNIEXPORT jlong JNICALL Java_org_stasis_Stasis_record_1type
  (JNIEnv *, jclass, jlong, jlongArray);

/*
 * Class:     org_stasis_Stasis
 * Method:    hash_create
 * Signature: (J)[J
 */
JNIEXPORT jlongArray JNICALL Java_org_stasis_Stasis_hash_1create
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_stasis_Stasis
 * Method:    hash_delete
 * Signature: (J[J)V
 */
JNIEXPORT void JNICALL Java_org_stasis_Stasis_hash_1delete
  (JNIEnv *, jclass, jlong, jlongArray);

/*
 * Class:     org_stasis_Stasis
 * Method:    hash_cardinality
 * Signature: (J[J)J
 */
JNIEXPORT jlong JNICALL Java_org_stasis_Stasis_hash_1cardinality
  (JNIEnv *, jclass, jlong, jlongArray);

/*
 * Class:     org_stasis_Stasis
 * Method:    hash_insert
 * Signature: (J[J[B[B)[B
 */
JNIEXPORT jbyteArray JNICALL Java_org_stasis_Stasis_hash_1insert
  (JNIEnv *, jclass, jlong, jlongArray, jbyteArray, jbyteArray);

/*
 * Class:     org_stasis_Stasis
 * Method:    hash_remove
 * Signature: (J[J[B)[B
 */
JNIEXPORT jbyteArray JNICALL Java_org_stasis_Stasis_hash_1remove
  (JNIEnv *, jclass, jlong, jlongArray, jbyteArray);

/*
 * Class:     org_stasis_Stasis
 * Method:    hash_lookup
 * Signature: (J[J[B)[B
 */
JNIEXPORT jbyteArray JNICALL Java_org_stasis_Stasis_hash_1lookup
  (JNIEnv *, jclass, jlong, jlongArray, jbyteArray);

/*
 * Class:     org_stasis_Stasis
 * Method:    hash_iterator
 * Signature: (J[J)[B
 */
JNIEXPORT jbyteArray JNICALL Java_org_stasis_Stasis_hash_1iterator
  (JNIEnv *, jclass, jlong, jlongArray);

/*
 * Class:     org_stasis_Stasis
 * Method:    iterator_close
 * Signature: (J[B)V
 */
JNIEXPORT void JNICALL Java_org_stasis_Stasis_iterator_1close
  (JNIEnv *, jclass, jlong, jbyteArray);

/*
 * Class:     org_stasis_Stasis
 * Method:    iterator_next
 * Signature: (J[B)Z
 */
JNIEXPORT jboolean JNICALL Java_org_stasis_Stasis_iterator_1next
  (JNIEnv *, jclass, jlong, jbyteArray);

/*
 * Class:     org_stasis_Stasis
 * Method:    iterator_key
 * Signature: (J[B)[B
 */
JNIEXPORT jbyteArray JNICALL Java_org_stasis_Stasis_iterator_1key
  (JNIEnv *, jclass, jlong, jbyteArray);

/*
 * Class:     org_stasis_Stasis
 * Method:    iterator_value
 * Signature: (J[B)[B
 */
JNIEXPORT jbyteArray JNICALL Java_org_stasis_Stasis_iterator_1value
  (JNIEnv *, jclass, jlong, jbyteArray);

/*
 * Class:     org_stasis_Stasis
 * Method:    iterator_tuple_done
 * Signature: (J[B)V
 */
JNIEXPORT void JNICALL Java_org_stasis_Stasis_iterator_1tuple_1done
  (JNIEnv *, jclass, jlong, jbyteArray);

#ifdef __cplusplus
}
#endif
#endif