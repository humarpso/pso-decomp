




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




typedef struct GXColor_803DF268 { u8 r, g, b, a; } GXColor_803DF268;

extern "C" {
M2C_UNK load_camera_view_matrix();
M2C_UNK TObjPlayer__sub_803E21B8();
M2C_UNK TObjPlayer__sub_803E21DC();
void TObjPlayer__sub_803DF768(s32 arg0);
extern M2C_UNK lbl_804FC748[];
extern s32 lbl_805D7794;
void TObjLight__sub_803DF31C(s32 arg0, s32 arg1);
M2C_UNK GXLoadLightObjImm(void *, int);
extern M2C_UNK lbl_804FC748[];
extern RecoveredGlobal_803DF528_TObjLight__data_8058D528 TObjLight__data_8058D528;
void TObjLight__sub_803DF528(s32 arg0);
extern char lbl_804FC75C[];
extern char lbl_804FC768[];
void OSPanic(char *, s32, char *, ...);
void TObjLight__sub_803DF220(s32 arg0);
void reset_player_transform(void);
void TObjPlayer__sub_803DF5E4(void *, void *);
void TObjPlayer__sub_803DF768(s32 arg0);
void TObjPlayer__sub_803DF578(void *arg0, void *arg1, s32 arg2);
void GXSetChanAmbColor(s32 chan, GXColor_803DF268 color);
void TObjLight__sub_803DF268(f32 r, f32 g, f32 b);
}

extern "C" {

M2C_UNK TObjPlayer__sub_803E2248();





void TObjLight__sub_803DF220(s32 arg0) {
    if (arg0 < 0 || arg0 > 5) {
        OSPanic(lbl_804FC75C, 0x12, lbl_804FC768);
    }
}



void TObjLight__sub_803DF268(f32 r, f32 g, f32 b) {
    GXColor_803DF268 c;
    if (r >= 1.0f) {
        r = 1.0f;
    }
    if (g >= 1.0f) {
        g = 1.0f;
    }
    if (b >= 1.0f) {
        b = 1.0f;
    }
    c.r = (u8)(255.0f * r);
    c.g = (u8)(255.0f * g);
    c.b = (u8)(255.0f * b);
    c.a = 0xFF;
    GXSetChanAmbColor(4, c);
}

void TObjLight__sub_803DF31C(s32 arg0, s32 arg1) {
    s32 var_r0;
    TObjLight__sub_803DF220((s32)(arg0));
    if (arg1 == 0) {
        var_r0 = lbl_805D7794 & ~M2C_FIELD(((u8 *)(lbl_804FC748) + (arg0 * 4)), s32 *, 0);
    } else {
        var_r0 = lbl_805D7794 | M2C_FIELD(((u8 *)(lbl_804FC748) + (arg0 * 4)), s32 *, 0);
    }
    lbl_805D7794 = var_r0;
}



typedef char RecoveredGlobal_803DF528_TObjLight__data_8058D528_size[sizeof(RecoveredGlobal_803DF528_TObjLight__data_8058D528) == 0x140 ? 1 : -1];
void TObjLight__sub_803DF528(s32 arg0) {
    TObjLight__sub_803DF220((s32)(arg0));
    GXLoadLightObjImm((void *) ((u8 *)(&TObjLight__data_8058D528.value) + (arg0 << 6)), (int) (M2C_FIELD(((u8 *)(lbl_804FC748) + (arg0 * 4)), s32 *, 0)));
}



void TObjPlayer__sub_803DF578(void *arg0, void *arg1, s32 arg2) {
    TObjPlayer__sub_803DF768(arg2);
    TObjPlayer__sub_803DF5E4(arg0, arg1);
    reset_player_transform();
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
