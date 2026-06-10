#ifndef _DOLPHIN_OS_OSMESSAGE_H
#define _DOLPHIN_OS_OSMESSAGE_H

#include "types.h"
#include "dolphin/os/OSUtil.h"
#include "dolphin/os/OSThread.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct OSMessageQueue OSMessageQueue;

typedef void* OSMessage;

struct OSMessageQueue {
	OSThreadQueue queueSend;
	OSThreadQueue queueReceive;
	OSMessage* msgArray;
	int msgCount;
	int firstIndex;
	int usedCount;
};

#define OS_MESSAGE_NOBLOCK (0)
#define OS_MESSAGE_BLOCK   (1)

typedef enum {
	OS_MSG_PERSISTENT = (1 << 0),
} OSMessageFlags;

void OSInitMessageQueue(OSMessageQueue* queue, OSMessage* msgArray, int msgCount);
BOOL OSSendMessage(OSMessageQueue* queue, OSMessage msg, int flags);
BOOL OSJamMessage(OSMessageQueue* queue, OSMessage msg, int flags);
BOOL OSReceiveMessage(OSMessageQueue* queue, OSMessage* msgPtr, int flags);

#ifdef __cplusplus
};
#endif

#endif
