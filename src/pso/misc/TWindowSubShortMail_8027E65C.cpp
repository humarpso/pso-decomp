#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void close__19TWindowSubShortMailFPv(void *arg0);
M2C_UNK TLobby__sub_80225828(s32, s32);
M2C_UNK free__11TOBoss4RockFUi(s32);
M2C_UNK TWindowSubShortMail__sub_8027FAD0(s32);
s32 TLobby__sub_8001DC24();
s32 fn_80131BC4(s32);
s32 fn_8022598C(s32);
u32 fn_80225CA8();
s32 fn_80225CB0();
M2C_UNK fn_80225E80(s32, s32);

void close__19TWindowSubShortMailFPv(void *arg0) {
    s32 temp_r31;
    s32 temp_r31_2;
    s32 temp_r30;
    s32 var_r29;

    temp_r31 = fn_80131BC4(M2C_FIELD(arg0, s32 *, 0x5C));
    fn_80225E80(temp_r31, TLobby__sub_8001DC24());
    TLobby__sub_80225828(M2C_FIELD(arg0, s32 *, 0x2C), TLobby__sub_8001DC24());
    free__11TOBoss4RockFUi(temp_r31);
    temp_r31_2 = fn_80225CB0();
    for (var_r29 = 0; var_r29 < temp_r31_2; var_r29 += 1) {
        temp_r30 = fn_8022598C(var_r29);
        if ((u32) M2C_FIELD(arg0, u32 *, 0x30) == fn_80225CA8()) {
            TWindowSubShortMail__sub_8027FAD0(temp_r30);
            return;
        }
    }
}

}
