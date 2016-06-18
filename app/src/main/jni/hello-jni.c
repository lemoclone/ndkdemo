#include <string.h>
#include <jni.h>
#include <stdio.h>

//com_ork_ndkdemo_MainActivity: class path
jstring Java_com_ork_ndkdemo_MainActivity_add
          (JNIEnv *env, jobject thisObj) {

   return (*env)->NewStringUTF(env, "Hello from native code!");
}

jstring Java_com_ork_ndkdemo_MainActivity_add2(JNIEnv *env,jint i,jint j){
   char* str = malloc(16);
   int res;
   res = 3 + 4;
   snprintf(str, 16, "%d", res);
   return (*env)->NewStringUTF(env,str);
}
