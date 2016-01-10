LOCAL_PATH:= $(call my-dir)
include $(CLEAR_VARS)
LOCAL_MODULE := myLibxml2
LOCAL_SRC_FILES := Test.cpp
LOCAL_C_INCLUDES := \
$(LOCAL_PATH)/libxml2/include \
$(LOCAL_PATH)/libxml2/include/libxml \
$(LOCAL_PATH)/libiconv/include \
$(LOCAL_PATH)/libiconv \
$(LOCAL_PATH)/libiconv/libcharset \
$(LOCAL_PATH)/libiconv/lib \
$(LOCAL_PATH)/libiconv/libcharset/include

LOCAL_CFLAGS += \
    -Wno-missing-field-initializers \
    -Wno-self-assign \
    -Wno-sign-compare \
    -Wno-tautological-pointer-compare
LOCAL_CFLAGS += -DLIBXML_THREAD_ENABLED=1
LOCAL_PRELINK_MODULE := false

LOCAL_SHARED_LIBRARIES += libiconv libxml2
LOCAL_ALLOW_UNDEFINED_SYMBOLS := true
include $(BUILD_SHARED_LIBRARY)
include $(call all-makefiles-under,$(LOCAL_PATH))