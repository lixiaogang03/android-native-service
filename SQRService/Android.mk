
LOCAL_PATH:= $(call my-dir)

include $(CLEAR_VARS)

LOCAL_SRC_FILES:= SQRService.cpp

LOCAL_SHARED_LIBRARIES:= libutils libbinder liblog

LOCAL_PRELINK_MODULE:= false

LOCAL_MODULE_TAGS:= optional

LOCAL_MODULE:= libSQRS01

include $(BUILD_SHARED_LIBRARY)

# squareserver.bin

include $(CLEAR_VARS)

LOCAL_SRC_FILES:= addserver.cpp

LOCAL_SHARED_LIBRARIES:= libutils libbinder libSQRS01 liblog

LOCAL_MODULE_TAGS:= optional

LOCAL_MODULE:= squareserver

include $(BUILD_EXECUTABLE)
