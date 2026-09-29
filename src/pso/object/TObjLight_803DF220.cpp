#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

#pragma scheduling off

struct RecoveredGlobal_803DF528_TObjLight__data_8058D528 {
    M2C_UNK value;
    u8 remaining[0x13C];
};

extern "C" {
M2C_UNK load_camera_view_matrix();
M2C_UNK TObjPlayer__sub_803E21B8();
M2C_UNK TObjPlayer__sub_803E21DC();
void TObjPlayer__sub_803DF768(s32 arg0);
M2C_UNK TObjLight__sub_803DF220();
extern M2C_UNK lbl_804FC748[];
extern s32 lbl_805D7794;
void TObjLight__sub_803DF31C(s32 arg0, s32 arg1);
M2C_UNK GXLoadLightObjImm(void *, int);
M2C_UNK TObjLight__sub_803DF220();
extern M2C_UNK lbl_804FC748[];
extern RecoveredGlobal_803DF528_TObjLight__data_8058D528 TObjLight__data_8058D528;
void TObjLight__sub_803DF528(s32 arg0);
}

extern "C" {

M2C_UNK TObjPlayer__sub_803E2248();

void TObjLight__sub_803DF31C(s32 arg0, s32 arg1) {
    s32 var_r0;
    TObjLight__sub_803DF220();
    if (arg1 == 0) {
        var_r0 = lbl_805D7794 & ~M2C_FIELD(((u8 *)(lbl_804FC748) + (arg0 * 4)), s32 *, 0);
    } else {
        var_r0 = lbl_805D7794 | M2C_FIELD(((u8 *)(lbl_804FC748) + (arg0 * 4)), s32 *, 0);
    }
    lbl_805D7794 = var_r0;
}

typedef char RecoveredGlobal_803DF528_TObjLight__data_8058D528_size[sizeof(RecoveredGlobal_803DF528_TObjLight__data_8058D528) == 0x140 ? 1 : -1];
void TObjLight__sub_803DF528(s32 arg0) {
    TObjLight__sub_803DF220();
    GXLoadLightObjImm((void *) ((u8 *)(&TObjLight__data_8058D528.value) + (arg0 << 6)), (int) (M2C_FIELD(((u8 *)(lbl_804FC748) + (arg0 * 4)), s32 *, 0)));
}

void reset_player_transform(void) {
    TObjPlayer__sub_803E2248();
}
void TObjPlayer__sub_803DF768(s32 arg0) {
    load_camera_view_matrix();
    if (arg0 != 0) {
        TObjPlayer__sub_803E21DC();
        return;
    }
    TObjPlayer__sub_803E21B8();
}

}
