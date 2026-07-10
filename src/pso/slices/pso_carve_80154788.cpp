#include "types.h"

#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void set_indexed_flags(void *arg0, s32 index, s32 flags) {
    void *entry;

    entry = (void *)M2C_FIELD(arg0, u32 *, 0xA4);
    if (entry != NULL) {
        entry = (void *)((u8 *)entry + (index * 0x2C));
        M2C_FIELD(entry, s32 *, 0x18) =
            (s32)(M2C_FIELD(entry, s32 *, 0x18) | flags);
    }
}

}
