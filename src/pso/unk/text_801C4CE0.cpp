#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
s32 TLobby__sub_801C38E8(void *);
s32 TLobby__sub_801C3AF4(void *);
s32 TLobby__sub_801C418C(void *);
s32 TLobby__sub_801C4214(void *);
s32 TLobby__sub_801C484C(void *);
s32 TLobby__sub_801C49B8(void *);
s32 fn_801C4CE0(void *);
void fn_801C4D28(u8 *arg0);
}

extern "C" {

void fn_801C4D28(u8 *arg0) {
    u32 temp_r0;
    temp_r0 = M2C_FIELD(arg0, u32 *, 0x1C);
    switch (temp_r0) {
    case 0:
        fn_801C4CE0((void *) (arg0));
        return;
    case 1:
        TLobby__sub_801C49B8((void *) (arg0));
        return;
    case 2:
        TLobby__sub_801C484C((void *) (arg0));
        return;
    case 3:
        TLobby__sub_801C4214((void *) (arg0));
        return;
    case 4:
        TLobby__sub_801C418C((void *) (arg0));
        return;
    case 5:
        TLobby__sub_801C3AF4((void *) (arg0));
        return;
    case 6:
        TLobby__sub_801C38E8((void *) (arg0));
    default:
        return;
    }
}

}
