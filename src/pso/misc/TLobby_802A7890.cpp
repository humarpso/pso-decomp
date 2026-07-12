#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TLobby__sub_802A7890(void* p, s32 v);
s32 TLobby__sub_802A7898(void);
s32 TLobby__sub_802A78E4(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
s32 TOBoss4Rock__sub_80147AA8(s32);
s32 TObjPlayer__sub_801C00F4(void);
s32 fn_800F9690(s32, s32, s32, M2C_UNK);
M2C_UNK fn_802A7D30(s32, s32, s32);
M2C_UNK free__11TOBoss4RockFUi(s32);

void TLobby__sub_802A7890(void* p, s32 v) { *(s32*)((char*)p + 0x4) = v; }
s32 TLobby__sub_802A7898(void) {
    s32 temp_r3;

    temp_r3 = TObjPlayer__sub_801C00F4();
    switch (temp_r3) {
    case 0:
        return 0x38;
    case 1:
        return 0x10;
    default:
        return 0;
    }
}

struct _VBase802A78E4_802a78e4 { char pad[8]; };
struct _VObj802A78E4_802a78e4 : _VBase802A78E4_802a78e4 { virtual s32 m0(s32, s32); };

s32 TLobby__sub_802A78E4(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 temp_r31;
    s32 temp_r31_2;
    s32 temp_r3;
    s32 temp_r0;

    temp_r31_2 = (arg3 + 0x1F) & 0xFFFFFFE0;
    temp_r3 = TOBoss4Rock__sub_80147AA8(temp_r31_2);
    if (temp_r3 == 0) {
        return 0;
    }
    fn_802A7D30(arg4, temp_r3, temp_r31_2);
    temp_r0 = ((_VObj802A78E4_802a78e4*)arg0)->m0(arg1, arg2);
    temp_r31 = fn_800F9690(temp_r3, arg3, temp_r0, 0x4000);
    free__11TOBoss4RockFUi(temp_r3);
    return temp_r31;
}

}
