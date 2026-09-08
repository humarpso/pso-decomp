#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

#pragma scheduling off
#pragma scheduling off
typedef M2C_UNK (*RecoveredCallback_d26337a2813d)();

extern "C" {
M2C_UNK TObjPlayer__sub_803DC460(void *);
M2C_UNK TObjPlayer__sub_803DC600();
M2C_UNK TObjPlayer__sub_803DC76C(int);
void TOSignCave03__sub_803DB510(s32 arg0);
M2C_UNK Dolphin_GXSetVtxDesc(int, void *);
M2C_UNK GXClearVtxDesc();
s32 TObjPlayer__sub_803DB550(u32 arg0, s32 arg1);
void TObjPlayer__sub_803DB59C(s32 arg0);
void GXSetZMode(u8, s32, s32);
void GXSetZCompLoc(s32);
void TObjPlayer__sub_803DBDE8(s32);
void set_effect_active__10TObjPlayerFv(void);
void TParticleCtrl__sub_803E2010(void);
extern RecoveredCallback_d26337a2813d lbl_805D76E4;
extern s32 lbl_805D7788;
extern s32 some_id_805c6f74;
void TObjPlayer__sub_803DC6F4(void);
void TObjPlayer__sub_803DB270(s32, s32);
extern s32 lbl_805D7774;
s32 TObjPlayer__sub_803DB4E8(s32 arg0);
}

extern "C" {

s32 TObjPlayer__sub_803DB550(u32 arg0, s32 arg1);

#pragma push
#pragma scheduling off
s32 TObjPlayer__sub_803DB4E8(s32 arg0) {
    TObjPlayer__sub_803DB270(arg0, lbl_805D7774);
    return 1;
}
#pragma pop

void TOSignCave03__sub_803DB510(s32 arg0) {
    TObjPlayer__sub_803DC76C((int) (0));
    TObjPlayer__sub_803DC600();
    TObjPlayer__sub_803DC460((void *) (arg0));
    TObjPlayer__sub_803DC6F4();
}

s32 TObjPlayer__sub_803DB550(u32 arg0, s32 arg1) {
    return (arg0 >> (arg1 * 2)) & 3;
}
void TObjPlayer__sub_803DB59C(s32 arg0) {
    GXClearVtxDesc();
    Dolphin_GXSetVtxDesc((int) (9), (void *) (TObjPlayer__sub_803DB550((u32)((void *) (arg0)), (s32)((int) (1)))));
    Dolphin_GXSetVtxDesc((int) (0xA), (void *) (TObjPlayer__sub_803DB550((u32)((void *) (arg0)), (s32)((int) (2)))));
    Dolphin_GXSetVtxDesc((int) (0xB), (void *) (TObjPlayer__sub_803DB550((u32)((void *) (arg0)), (s32)((int) (3)))));
    Dolphin_GXSetVtxDesc((int) (0xD), (void *) (TObjPlayer__sub_803DB550((u32)((void *) (arg0)), (s32)((int) (5)))));
}
#pragma push
#pragma peephole off
void TObjPlayer__sub_803DC6F4(void) {
    if ((u32) (lbl_805D7788 & 2) != 0) {
        set_effect_active__10TObjPlayerFv();
        TParticleCtrl__sub_803E2010();
    }
    if ((u32) (some_id_805c6f74 & 1) == 0) {
        GXSetZCompLoc(1);
        GXSetZMode(1U, 1, 1);
        TObjPlayer__sub_803DBDE8(0);
        if (((M2C_UNK (*)()) lbl_805D76E4) != NULL) {
            lbl_805D76E4();
        }
    }
}
#pragma pop

}
