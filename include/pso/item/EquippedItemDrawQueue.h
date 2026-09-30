#ifndef PSO_ITEM_EQUIPPED_ITEM_DRAW_QUEUE_H
#define PSO_ITEM_EQUIPPED_ITEM_DRAW_QUEUE_H
#include "types.h"
#include <stddef.h>

struct EquippedItemDrawQueue {
    u8 prefix[0x30];
    u32 item_ids[32];
    s32 count;
};
typedef char EquippedDrawIdsOffset[(offsetof(EquippedItemDrawQueue, item_ids) == 0x30) ? 1 : -1];
typedef char EquippedDrawCountOffset[(offsetof(EquippedItemDrawQueue, count) == 0xB0) ? 1 : -1];
typedef char EquippedDrawQueueSize[(sizeof(EquippedItemDrawQueue) == 0xB4) ? 1 : -1];
#endif
