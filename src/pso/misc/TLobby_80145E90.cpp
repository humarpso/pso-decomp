#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TLobby__sub_80145E90(void);
s32 TLobby__sub_803F5678(void *);

s32 TLobby__sub_80145E90(void) {
    u8 sp8;

    if (TLobby__sub_803F5678((void *) (&sp8)) != 0) {
        return 0;
    }
    if (sp8 == 0) {
        return 0;
    }
    return (u32) __cntlzw(1 - sp8) >> 5;
}

}
