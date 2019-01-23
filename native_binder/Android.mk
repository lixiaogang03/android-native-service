
LOCAL_PATH:= $(call my-dir)

include $(CLEAR_VARS)

LOCAL_SRC_FILES:= ISQRSStub.cpp ISQRS.cpp

LOCAL_SHARED_LIBRARIES:= libutils libbinder liblog

LOCAL_PRELINK_MODULE:= false

LOCAL_MODULE_TAGS:= optional

LOCAL_MODULE:= libSQRS02

include $(BUILD_SHARED_LIBRARY)

# squareserver.bin

include $(CLEAR_VARS)

LOCAL_SRC_FILES:= addserver2.cpp SQRService2.cpp

LOCAL_SHARED_LIBRARIES:= libutils libbinder libSQRS02 liblog

LOCAL_MODULE_TAGS:= optional

LOCAL_MODULE:= squareserver

include $(BUILD_EXECUTABLE)

# squareclient.bin

include $(CLEAR_VARS)

LOCAL_SRC_FILES:= SQR2.cpp addclient.cpp

LOCAL_SHARED_LIBRARIES:= libutils libbinder libSQRS02 liblog

LOCAL_MODULE_TAGS:= optional

LOCAL_MODULE:= squareclient

include $(BUILD_EXECUTABLE)
