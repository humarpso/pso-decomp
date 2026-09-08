#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

#pragma scheduling off
#pragma scheduling off

extern "C" {
M2C_UNK TObjPlayer__sub_803E20B0();
M2C_UNK setup_render__10TObjPlayerFv();
M2C_UNK TObjPlayer__sub_803E2224();
M2C_UNK TObjPlayer__sub_803E224C();
void TLobby__sub_803E2EE4(s32 arg0);
void TObjPlayer__sub_803E4354(void *);
void TObjPlayer__sub_803E44D4(void *);
void TObjPlayer__sub_803E4684(void *arg0);
void GXSetNumTexGens(u8);
M2C_UNK GXSetTevOp(int, int);
M2C_UNK GXSetTevOrder(int, int, int, int);
M2C_UNK GXSetNumTevStages(int);
void TObjPlayer__sub_803E39A0(void);
void GXSetNumTexGens(u8);
M2C_UNK GXSetTevOp(int, int);
M2C_UNK GXSetTevOrder(int, int, int, int);
M2C_UNK GXSetNumTevStages(int);
extern s32 some_id_805c6f74;
extern u8 lbl_805D77D8;
extern u8 lbl_805D77D9;
void TObjPlayer__sub_803E39EC(void);
M2C_UNK GXSetZMode(int, int, int);
M2C_UNK GXSetZCompLoc(int);
M2C_UNK TObjPlayer__sub_803D9B78();
M2C_UNK set_effect_active__10TObjPlayerFv();
M2C_UNK TParticleCtrl__sub_803E2010();
M2C_UNK TObjPlayer__sub_803E3B38(int);
extern s32 lbl_805D7788;
extern M2C_UNK (*lbl_805D77DC)();
void TObjPlayer__sub_803E4468(void);
M2C_UNK TObjPlayer__sub_803E1D90(int, int, int, int);
extern s32 lbl_805D77EC;
void TObjPlayer__sub_803E3914(s32 arg0, s32 arg1);
}

extern "C" {

void func_803e11e8__FUl(s32 arg0);
void func_803e11f0__Fv(void);

extern s32 lbl_805D77F8;

void TLobby__sub_803E2EE4(s32 arg0) {
    TObjPlayer__sub_803E20B0();
    if (arg0 != 0) {
        TObjPlayer__sub_803E2224();
    } else {
        setup_render__10TObjPlayerFv();
    }
    TObjPlayer__sub_803E224C();
}

#pragma push
#pragma opt_common_subs off
#pragma scheduling off
#pragma peephole off
void TObjPlayer__sub_803E3914(s32 arg0, s32 arg1) {
    s32 var_r31;
    s32 var_r3;
    s32 var_r4;
    s32 var_r5;
    s32 var_r6;
    var_r5 = 1;
    var_r6 = 1;
    if ((u32) (arg0 & 0x2000) != 0) {
        var_r6 = 0;
    } else if ((u32) (arg0 & 0x8000) != 0) {
        var_r6 = 2;
    }
    if ((u32) (arg0 & 0x1000) != 0) {
        var_r5 = 0;
    } else if ((u32) (arg0 & 0x4000) != 0) {
        var_r5 = 2;
    }
    var_r31 = arg1 & 0x1FFF;
    var_r3 = var_r31;
    var_r4 = var_r6;
    var_r6 = 0;
    TObjPlayer__sub_803E1D90((int) (var_r3), (int) (var_r4), (int) (var_r5), (int) (0));
    lbl_805D77EC = var_r31;
}
#pragma pop

void TObjPlayer__sub_803E39A0(void) {
    GXSetNumTevStages((int) (1));
    GXSetNumTexGens(0U);
    GXSetTevOp((int) (0), (int) (4));
    GXSetTevOrder((int) (0), (int) (0xFF), (int) (0xFF), (int) (4));
}

#pragma push
#pragma peephole off
void TObjPlayer__sub_803E39EC(void) {
    if ((u32) (some_id_805c6f74 & 0x80000) != 0) {
        GXSetNumTevStages((int)((void *) ((u8) (lbl_805D77D8 + 1))));
        GXSetNumTexGens((u8)((void *) ((u8) (lbl_805D77D9 + 1))));
    } else {
        GXSetNumTevStages((int)((void *) (1U)));
        GXSetNumTexGens((u8)((void *) (1U)));
    }
    GXSetTevOp((int) (0), (int) (0));
    GXSetTevOrder((int) (0), (int) (0), (int) (0), (int) (4));
}
#pragma pop

#pragma push
#pragma peephole off
void TObjPlayer__sub_803E4468(void) {
    if ((u32) (lbl_805D7788 & 2) != 0) {
        set_effect_active__10TObjPlayerFv();
        TParticleCtrl__sub_803E2010();
    }
    TObjPlayer__sub_803D9B78();
    GXSetZCompLoc((int) (1));
    GXSetZMode((int) (1), (int) (1), (int) (1));
    TObjPlayer__sub_803E3B38((int) (0));
    if (((M2C_UNK (*)()) lbl_805D77DC) != NULL) {
        lbl_805D77DC();
    }
}
#pragma pop

void TObjPlayer__sub_803E4684(void *arg0) {
    TObjPlayer__sub_803E4354(arg0);
    TObjPlayer__sub_803E44D4(arg0);
    TObjPlayer__sub_803E4468();
}

void func_803e11e8__FUl(s32 arg0) {
    lbl_805D77F8 = arg0;
}

extern s32 lbl_805D77F8;

void func_803e11f0__Fv(void) {
    lbl_805D77F8 = 0;
}

}
