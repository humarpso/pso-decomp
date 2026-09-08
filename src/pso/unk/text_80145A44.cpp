#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
s32 TLobby__sub_803F524C(s32, s32);
s32 strlen(void *);
bool fn_80145A44(s32 arg0);
}

extern "C" {

bool fn_80145A44(s32 arg0) {
    if (TLobby__sub_803F524C(arg0, 0x20) == 0) {
        return strlen((void *) (arg0)) != 0;
    }
    return 0;
}

}
