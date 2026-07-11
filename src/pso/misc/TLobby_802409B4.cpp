#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TLobby__sub_802409B4(void *arg0, f32 farg0);

extern f32 TLobby__data_805DC9E0;
extern f32 lbl_805DC9E4;
extern f32 lbl_805DC9E8;

void TLobby__sub_802409B4(void *arg0, f32 farg0) {
    f32 var_f1;

    var_f1 = farg0;
    if (var_f1 < TLobby__data_805DC9E0) {
        M2C_FIELD(arg0, f32 *, 0x9C) = (f32) lbl_805DC9E4;
        return;
    }
    if (var_f1 > lbl_805DC9E8) {
        var_f1 = lbl_805DC9E8;
    }
    M2C_FIELD(arg0, f32 *, 0x9C) = var_f1;
}

}
