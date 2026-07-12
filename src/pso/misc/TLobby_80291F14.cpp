#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TLobby__sub_80291F14(void);
s32 TLobby__sub_80291F58(void);
s32 TLobby__sub_80291F9C();
s32 TLobby__sub_80293080();
s32 TLobby__sub_80299E44();
M2C_UNK fn_8029A6A4(void*);

extern u32 lbl_805D6580;

void TLobby__sub_80291F14(void) {
    if ((TLobby__sub_80293080() != 0) && (TLobby__sub_80299E44() != 0) && ((u32) lbl_805D6580 != 0U)) {
        fn_8029A6A4((void*)lbl_805D6580);
    }
}

extern M2C_UNK lbl_804DB1F0[];

s32 TLobby__sub_80291F58(void) {
    s32 var_r3;

    var_r3 = TLobby__sub_80291F9C();
    if (var_r3 == 1) {
        var_r3 = -1;
        if ((s32) M2C_FIELD(lbl_804DB1F0, s32 *, 0x28) != 0) {
            var_r3 = 1;
        }
    }
    return var_r3;
}

}
