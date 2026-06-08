#include "types.h"

typedef struct {
    u32 mask;
    u32 value;
} MaskEntry;

extern MaskEntry glob_8003FD4C[];
extern s32 glob_8003E948;

u32 func_80037F34(u16 input) {
    u32 result = 0;
    MaskEntry* ptr = glob_8003FD4C;
    s32 count = glob_8003E948;
    s32 i;

    for (i = 0; i < count; i++) {
        if (input & ptr->mask) {
            result |= ptr->value;
        }
        ptr++;
    }
    return result;
}
