#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TLobby__sub_800F86FC(void *arg0, s16 arg1);
void *TLobby__sub_800F8754(void *arg0, void *arg1, void *arg2);
void TBoss3Volopt__sub_800489E0(void *, int);
void TBoss3Volopt__sub_80048BC8(void *, void *);
void __dl__7TObjectFPv(void *);

extern M2C_UNK lbl_804999B8[];

void *TLobby__sub_800F86FC(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804999B8;
        TBoss3Volopt__sub_800489E0(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern void *tl_fade;
extern const f32 lbl_805DA904;
extern M2C_UNK lbl_804999B8[];

void *TLobby__sub_800F8754(void *arg0, void *arg1, void *arg2) {
    TBoss3Volopt__sub_80048BC8(arg0, tl_fade);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804999B8;
    M2C_FIELD(arg0, void **, 0x24) = arg2;
    M2C_FIELD(arg0, f32 *, 0x1C) = lbl_805DA904;
    M2C_FIELD(arg0, u8 *, 0x20) = 0;
    M2C_FIELD(arg0, u8 *, 0x21) = 0;
    M2C_FIELD(arg0, u8 *, 0x22) = 0;
    return arg0;
}

}
