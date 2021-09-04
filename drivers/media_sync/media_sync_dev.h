#ifndef MEDIA_SYNC_DEV_HEAD_HH
#define MEDIA_SYNC_DEV_HEAD_HH

#define MEDIASYNC_IOC_MAGIC 'M'

#define MEDIASYNC_IOC_INSTANCE_ALLOC _IOW(MEDIASYNC_IOC_MAGIC, 0x01, int)
#define MEDIASYNC_IOC_INSTANCE_GET   _IOW(MEDIASYNC_IOC_MAGIC, 0x02, int)
#define MEDIASYNC_IOC_INSTANCE_BINDER _IOW(MEDIASYNC_IOC_MAGIC, 0x03, int)
#define MEDIASYNC_IOC_UPDATE_MEDIATIME _IOW(MEDIASYNC_IOC_MAGIC, 0x04, int)
#define MEDIASYNC_IOC_GET_MEDIATIME _IOW(MEDIASYNC_IOC_MAGIC, 0x05, int)
#define MEDIASYNC_IOC_GET_SYSTEMTIME _IOW(MEDIASYNC_IOC_MAGIC, 0x06, int)
#define MEDIASYNC_IOC_GET_NEXTVSYNC_TIME _IOW(MEDIASYNC_IOC_MAGIC, 0x07, int)
#define MEDIASYNC_IOC_SET_SPEED _IOW(MEDIASYNC_IOC_MAGIC, 0x08, int)
#define MEDIASYNC_IOC_GET_SPEED _IOW(MEDIASYNC_IOC_MAGIC, 0x09, int)
#define MEDIASYNC_IOC_SET_PAUSE _IOW(MEDIASYNC_IOC_MAGIC, 0x0A, int)
#define MEDIASYNC_IOC_GET_PAUSE _IOW(MEDIASYNC_IOC_MAGIC, 0x0B, int)
#define MEDIASYNC_IOC_SET_SYNCMODE _IOW(MEDIASYNC_IOC_MAGIC, 0x0C, int)
#define MEDIASYNC_IOC_GET_SYNCMODE _IOW(MEDIASYNC_IOC_MAGIC, 0x0D, int)
#define MEDIASYNC_IOC_GET_TRACKMEDIATIME _IOW(MEDIASYNC_IOC_MAGIC, 0x0E, int)

#define MEDIASYNC_IOC_SET_FIRST_AFRAME_INFO _IOW(MEDIASYNC_IOC_MAGIC, 0x0F, int)
#define MEDIASYNC_IOC_GET_FIRST_AFRAME_INFO _IOW(MEDIASYNC_IOC_MAGIC, 0x10, int)
#define MEDIASYNC_IOC_SET_FIRST_VFRAME_INFO _IOW(MEDIASYNC_IOC_MAGIC, 0x11, int)
#define MEDIASYNC_IOC_GET_FIRST_VFRAME_INFO _IOW(MEDIASYNC_IOC_MAGIC, 0x12, int)
#define MEDIASYNC_IOC_SET_FIRST_DMXPCR_INFO _IOW(MEDIASYNC_IOC_MAGIC, 0x13, int)
#define MEDIASYNC_IOC_GET_FIRST_DMXPCR_INFO _IOW(MEDIASYNC_IOC_MAGIC, 0x14, int)
#define MEDIASYNC_IOC_SET_REFCLOCK_INFO _IOW(MEDIASYNC_IOC_MAGIC, 0x15, int)
#define MEDIASYNC_IOC_GET_REFCLOCK_INFO _IOW(MEDIASYNC_IOC_MAGIC, 0x16, int)
#define MEDIASYNC_IOC_SET_CUR_AFRAME_INFO _IOW(MEDIASYNC_IOC_MAGIC, 0x17, int)
#define MEDIASYNC_IOC_GET_CUR_AFRAME_INFO _IOW(MEDIASYNC_IOC_MAGIC, 0x18, int)
#define MEDIASYNC_IOC_SET_CUR_VFRAME_INFO _IOW(MEDIASYNC_IOC_MAGIC, 0x19, int)
#define MEDIASYNC_IOC_GET_CUR_VFRAME_INFO _IOW(MEDIASYNC_IOC_MAGIC, 0x1A, int)
#define MEDIASYNC_IOC_SET_CUR_DMXPCR_INFO _IOW(MEDIASYNC_IOC_MAGIC, 0x1B, int)
#define MEDIASYNC_IOC_GET_CUR_DMXPCR_INFO _IOW(MEDIASYNC_IOC_MAGIC, 0x1C, int)
#define MEDIASYNC_IOC_SET_AUDIO_INFO _IOW(MEDIASYNC_IOC_MAGIC, 0x1D, int)
#define MEDIASYNC_IOC_GET_AUDIO_INFO _IOW(MEDIASYNC_IOC_MAGIC, 0x1E, int)
#define MEDIASYNC_IOC_SET_VIDEO_INFO _IOW(MEDIASYNC_IOC_MAGIC, 0x1F, int)
#define MEDIASYNC_IOC_GET_VIDEO_INFO _IOW(MEDIASYNC_IOC_MAGIC, 0x20, int)
#define MEDIASYNC_IOC_SET_AVSTATE _IOW(MEDIASYNC_IOC_MAGIC, 0x21, int)
#define MEDIASYNC_IOC_GET_AVSTATE _IOW(MEDIASYNC_IOC_MAGIC, 0x22, int)
#define MEDIASYNC_IOC_SET_HASAUDIO _IOW(MEDIASYNC_IOC_MAGIC, 0x23, int)
#define MEDIASYNC_IOC_GET_HASAUDIO _IOW(MEDIASYNC_IOC_MAGIC, 0x24, int)
#define MEDIASYNC_IOC_SET_HASVIDEO _IOW(MEDIASYNC_IOC_MAGIC, 0x25, int)
#define MEDIASYNC_IOC_GET_HASVIDEO _IOW(MEDIASYNC_IOC_MAGIC, 0x26, int)
#define MEDIASYNC_IOC_SET_CLOCKTYPE _IOW(MEDIASYNC_IOC_MAGIC, 0x27, int)
#define MEDIASYNC_IOC_GET_CLOCKTYPE _IOW(MEDIASYNC_IOC_MAGIC, 0x28, int)
#define MEDIASYNC_IOC_SET_CLOCKSTATE _IOW(MEDIASYNC_IOC_MAGIC, 0x29, int)
#define MEDIASYNC_IOC_GET_CLOCKSTATE _IOW(MEDIASYNC_IOC_MAGIC, 0x2A, int)
#define MEDIASYNC_IOC_SET_STARTTHRESHOLD _IOW(MEDIASYNC_IOC_MAGIC, 0x2B, int)
#define MEDIASYNC_IOC_GET_STARTTHRESHOLD _IOW(MEDIASYNC_IOC_MAGIC, 0x2C, int)
#define MEDIASYNC_IOC_SET_PTSADJUST _IOW(MEDIASYNC_IOC_MAGIC, 0x2D, int)
#define MEDIASYNC_IOC_GET_PTSADJUST _IOW(MEDIASYNC_IOC_MAGIC, 0x2E, int)
#define MEDIASYNC_IOC_SET_VIDEOWORKMODE _IOW(MEDIASYNC_IOC_MAGIC, 0x2F, int)
#define MEDIASYNC_IOC_GET_VIDEOWORKMODE _IOW(MEDIASYNC_IOC_MAGIC, 0x30, int)
#define MEDIASYNC_IOC_SET_FCCENABLE _IOW(MEDIASYNC_IOC_MAGIC, 0x31, int)
#define MEDIASYNC_IOC_GET_FCCENABLE _IOW(MEDIASYNC_IOC_MAGIC, 0x32, int)
#define MEDIASYNC_IOC_SET_AUDIO_MUTEFLAG _IOW(MEDIASYNC_IOC_MAGIC, 0x33, int)
#define MEDIASYNC_IOC_GET_AUDIO_MUTEFLAG _IOW(MEDIASYNC_IOC_MAGIC, 0x34, int)
#define MEDIASYNC_IOC_SET_SOURCE_TYPE _IOW(MEDIASYNC_IOC_MAGIC, 0x35, int)
#define MEDIASYNC_IOC_GET_SOURCE_TYPE _IOW(MEDIASYNC_IOC_MAGIC, 0x36, int)
#define MEDIASYNC_IOC_SET_UPDATETIME_THRESHOLD _IOW(MEDIASYNC_IOC_MAGIC, 0x37, int)
#define MEDIASYNC_IOC_GET_UPDATETIME_THRESHOLD _IOW(MEDIASYNC_IOC_MAGIC, 0x38, int)
#define MEDIASYNC_IOC_SET_START_MEDIA_TIME _IOW(MEDIASYNC_IOC_MAGIC, 0x39, int)
#define MEDIASYNC_IOC_GET_START_MEDIA_TIME _IOW(MEDIASYNC_IOC_MAGIC, 0x3A, int)
#define MEDIASYNC_IOC_SET_AUDIO_FORMAT _IOW(MEDIASYNC_IOC_MAGIC, 0x3B, int)
#define MEDIASYNC_IOC_GET_AUDIO_FORMAT _IOW(MEDIASYNC_IOC_MAGIC, 0x3C, int)

#endif
