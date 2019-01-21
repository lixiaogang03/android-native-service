
# libSQRS01_jni.so

LOCAL_PATH:= $(call my-dir)

include $(CLEAR_VARS)

LOCAL_SRC_FILES:= com_misoo_service_Sqr01.cpp ../../SQR.cpp

LOCAL_SHARED_LIBRARIES:= libutils libbinder liblog libSQRS01

LOCAL_PRELINK_MODULE:= false

LOCAL_MODULE_TAGS:= optional

LOCAL_MODULE:= libSQRS01_jni

include $(BUILD_SHARED_LIBRARY)

