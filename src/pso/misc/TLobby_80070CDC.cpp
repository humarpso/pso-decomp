#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TLobby__sub_80070CDC(void);
void TLobby__sub_80070D20(void);
s32 TLobby__sub_80070D64(void);
s32 TLobby__sub_80070AB0();
s32 TLobby__sub_80070DA8();
s32 TLobby__sub_80072B30();
M2C_UNK fn_800733C4(void*);
M2C_UNK fn_80073D64(void*);

extern u32 lbl_805D4E28;

void TLobby__sub_80070CDC(void) {
    if ((TLobby__sub_80070AB0() != 0) && (TLobby__sub_80072B30() != 0) && ((u32) lbl_805D4E28 != 0U)) {
        fn_80073D64((void*)lbl_805D4E28);
    }
}

extern u32 lbl_805D4E28;

void TLobby__sub_80070D20(void) {
    if ((TLobby__sub_80070AB0() != 0) && (TLobby__sub_80072B30() != 0) && ((u32) lbl_805D4E28 != 0U)) {
        fn_800733C4((void*)lbl_805D4E28);
    }
}

extern M2C_UNK lbl_8048C9D8[];

s32 TLobby__sub_80070D64(void) {
    s32 var_r3;

    var_r3 = TLobby__sub_80070DA8();
    if (var_r3 == 1) {
        var_r3 = -1;
        if ((s32) M2C_FIELD(lbl_8048C9D8, s32 *, 0x28) != 0) {
            var_r3 = 1;
        }
    }
    return var_r3;
}

}
