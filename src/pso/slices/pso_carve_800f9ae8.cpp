#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TItemDrop__sub_800F9C00(void *);
u8 *TItemDrop__sub_800F9C68(u8 *, M2C_UNK *);
s32 TLobby__sub_800F9D38(s32);
s32 TScene__sub_800F9D80();
u8 *__nw__7TObjectFUl(M2C_UNK);
M2C_UNK strncpy(void *, s32, M2C_UNK);
M2C_UNK memset(void *, M2C_UNK, M2C_UNK);
extern M2C_UNK lbl_8050113C[];

s32 create_named_object(s32 arg0) {
    s32 temp_r3;
    u8 *var_r30;

    temp_r3 = TScene__sub_800F9D80();
    if (temp_r3 > 0) {
        var_r30 = __nw__7TObjectFUl(0x3C);
        if (var_r30 != NULL) {
            var_r30 = TItemDrop__sub_800F9C68(var_r30, lbl_8050113C);
        }
        memset(var_r30 + 0x28, 0, 0x11);
        strncpy(var_r30 + 0x28, arg0, 0x10);
        M2C_FIELD(var_r30, void **, 0) = (void *) (var_r30 + 0x28);
        M2C_FIELD(var_r30, s32 *, 0x1C) = TLobby__sub_800F9D38(arg0);
        M2C_FIELD(var_r30, s32 *, 0x20) = temp_r3;
        return TItemDrop__sub_800F9C00(var_r30);
    }
    return 0;
}

}
