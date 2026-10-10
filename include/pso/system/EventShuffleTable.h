#ifndef PSO_SYSTEM_EVENT_SHUFFLE_TABLE_H
#define PSO_SYSTEM_EVENT_SHUFFLE_TABLE_H

#include "types.h"

struct EventShuffleTable {
    s32 rngState;
    s32* entries;
    s32 cursor;
    s32 count;
};

#include <stddef.h>
typedef char EventShuffleTableSize[(sizeof(EventShuffleTable) == 0x10) ? 1 : -1];
typedef char EventShuffleEntriesOffset[(offsetof(EventShuffleTable, entries) == 4) ? 1 : -1];
typedef char EventShuffleCursorOffset[(offsetof(EventShuffleTable, cursor) == 8) ? 1 : -1];
typedef char EventShuffleCountOffset[(offsetof(EventShuffleTable, count) == 12) ? 1 : -1];

#endif
