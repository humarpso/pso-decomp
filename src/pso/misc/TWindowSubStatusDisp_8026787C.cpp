#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TWindowSubStatusDisp__sub_8026787C(void *arg0);
void TWindowSubStatusDisp__sub_802678E0(void *arg0);
void TWindowSubStatusDisp__sub_80267990(void *arg0);
void TWindowSubStatusDisp__sub_80267A1C(void *arg0);
M2C_UNK TBoss3Volopt__sub_8022675C(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
s32 TLobby__sub_8013AD38();
s32 TWindowMenu__sub_80266B18(void *, s32);
s32 TWindowSubStatusDisp__sub_80249060();
s32 fn_80268488(s32);
M2C_UNK fn_8028783C(void *, M2C_UNK);
s32 get_array_entry__20TWindowSubStatusDispFPvi(void *, s16);

void TWindowSubStatusDisp__sub_8026787C(void *arg0) {
    if (!(M2C_FIELD(arg0, u16 *, 0x70) & 8) && (TLobby__sub_8013AD38() == 0)) {
        TBoss3Volopt__sub_8022675C(0x52F16, 0, 0, 0);
        M2C_FIELD(arg0, u16 *, 0x70) = (u16) (M2C_FIELD(arg0, u16 *, 0x70) | 4);
    }
}

void TWindowSubStatusDisp__sub_802678E0(void *arg0) {
    s32 temp_r31;
    temp_r31 = get_array_entry__20TWindowSubStatusDispFPvi(arg0, M2C_FIELD(arg0, s16 *, 0x74));
    if ((TWindowSubStatusDisp__sub_80249060() == 0) || (fn_80268488(temp_r31) != 0)) {
        TBoss3Volopt__sub_8022675C(0x53F06, 0, 0, 0);
        return;
    }
    if (!(M2C_FIELD(arg0, u16 *, 0x70) & 0x100)) {
        TBoss3Volopt__sub_8022675C(0x52D01, 0, 0, 0);
    }
    M2C_FIELD(arg0, u16 *, 0x70) = (u16) (M2C_FIELD(arg0, u16 *, 0x70) | 2);
    if (M2C_FIELD(arg0, void **, 0x80) != NULL) {
        fn_8028783C(M2C_FIELD(arg0, void **, 0x80), 2);
    }
}

void TWindowSubStatusDisp__sub_80267990(void *arg0) {
    s16 var_r31;

    TBoss3Volopt__sub_8022675C(0x54100, 0, 0, 0);
    var_r31 = M2C_FIELD(arg0, s16 *, 0x74);
loop_1:
    var_r31 += 1;
    if (var_r31 >= (s16) M2C_FIELD(arg0, s16 *, 0x76)) {
        if (!(M2C_FIELD(arg0, u16 *, 0x70) & 1)) {
            var_r31 = 0;
            goto block_4;
        }
    } else {
block_4:
        if (var_r31 != (s16) M2C_FIELD(arg0, s16 *, 0x74)) {
            if (TWindowMenu__sub_80266B18(arg0, var_r31) != 0) {
                M2C_FIELD(arg0, s16 *, 0x74) = var_r31;
            } else {
                goto loop_1;
            }
        }
    }
}

void TWindowSubStatusDisp__sub_80267A1C(void *arg0) {
    s16 var_r31;

    TBoss3Volopt__sub_8022675C(0x54100, 0, 0, 0);
    var_r31 = M2C_FIELD(arg0, s16 *, 0x74);
loop_1:
    var_r31 -= 1;
    if (var_r31 < 0) {
        if (!(M2C_FIELD(arg0, u16 *, 0x70) & 1)) {
            var_r31 = M2C_FIELD(arg0, s16 *, 0x76) - 1;
            goto block_4;
        }
    } else {
block_4:
        if (var_r31 != (s16) M2C_FIELD(arg0, s16 *, 0x74)) {
            if (TWindowMenu__sub_80266B18(arg0, var_r31) != 0) {
                M2C_FIELD(arg0, s16 *, 0x74) = var_r31;
            } else {
                goto loop_1;
            }
        }
    }
}

}
