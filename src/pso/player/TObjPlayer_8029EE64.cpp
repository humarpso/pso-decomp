#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
s32 TCameraCtrl__sub_800689F4();
M2C_UNK TCameraCtrl__sub_80082FCC(void *, void *);
f64 TObjPlayer__sub_80083A50();
M2C_UNK fn_8029F5B0(int, int, int, int);
M2C_UNK PSMTXConcat(void *, void *, void *);
M2C_UNK TObjPlayer__sub_80376B70(void *, f32, f32, f32, f32, f32, f32);
M2C_UNK GXSetTevOp(int, int);
M2C_UNK GXSetTevOrder(int, int, int, int);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK TObjPlayer__sub_803D9B78();
M2C_UNK set_global_effect_state__10TObjPlayerFi(M2C_UNK);
M2C_UNK TObjPlayer__sub_803DC83C(M2C_UNK);
M2C_UNK TObjPlayer__sub_803DC850(M2C_UNK);
M2C_UNK TObjPlayer__sub_803E1D1C(int);
M2C_UNK TObjPlayer__sub_803E1D54(int);
extern const f64 lbl_80465E18;
extern u32 lbl_805D4DF0;
extern u32 lbl_805D65F0;
extern s32 lbl_805D7774;
extern const f32 lbl_805DDDA0;
extern const f32 lbl_805DDDA4;
extern const f32 lbl_805DDDA8;
void TObjPlayer__sub_8029EEAC(s32 arg0, s32 arg1, s32 arg2);
}

extern "C" {

void TSceneSora__sub_8029F3E4(void);
int TScene__sub_8029F3E8(void);
void clear_state_if_flag80__10TObjPlayerFi(s32 arg0);
M2C_UNK TObjPlayer__sub_803DC83C(M2C_UNK);
M2C_UNK TObjPlayer__sub_803DC850(M2C_UNK);
M2C_UNK set_global_effect_state__10TObjPlayerFi(M2C_UNK);

extern s32 some_id_805c6f74;

void clear_state_if_flag80__10TObjPlayerFi(s32 arg0) {
    if (arg0 & 0x80) {
        TObjPlayer__sub_803DC850(0);
        TObjPlayer__sub_803DC83C(0);
        set_global_effect_state__10TObjPlayerFi(0);
        some_id_805c6f74 &= 0xFFF7FFFF;
    }
}

void TObjPlayer__sub_8029EEAC(s32 arg0, s32 arg1, s32 arg2) {
    u8 sp10[0x30];
    f32 spC;
    f32 sp8;
    f32 temp_f31;
    if (((u32) lbl_805D4DF0 != 0U) && ((u32) lbl_805D65F0 != 0U)) {
        TCameraCtrl__sub_80082FCC((void *) (&spC), (void *) (&sp8));
        if (arg2 & 0x80) {
            TObjPlayer__sub_803D9B2C();
            temp_f31 = (f32) (lbl_80465E18 * TObjPlayer__sub_80083A50());
            if (TCameraCtrl__sub_800689F4() != 0) {
                TObjPlayer__sub_80376B70((void *) (&sp10), (f32) (temp_f31), (f32) (lbl_805DDDA0), (f32) (lbl_805DDDA4), (f32) (lbl_805DDDA8), (f32) (lbl_805DDDA4 - spC), (f32) (lbl_805DDDA4 - sp8));
            } else {
                TObjPlayer__sub_80376B70((void *) (&sp10), (f32) (temp_f31), (f32) (lbl_805DDDA0), (f32) (lbl_805DDDA4), (f32) (lbl_805DDDA8), (f32) (lbl_805DDDA4), (f32) (lbl_805DDDA4));
            }
            PSMTXConcat((void *) (&sp10), (void *) (lbl_805D7774), (void *) (lbl_805D7774));
            TObjPlayer__sub_803E1D54((int) (2));
            TObjPlayer__sub_803D9B78();
            TObjPlayer__sub_803E1D1C((int) (2));
            GXSetTevOrder((int) (1), (int) (1), (int) (2), (int) (4));
            GXSetTevOp((int) (1), (int) (2));
            fn_8029F5B0((int) (1), (int) (0), (int) (0), (int) (0x24));
            some_id_805c6f74 |= 0x80000;
            TObjPlayer__sub_803DC850((M2C_UNK)((int) (1)));
            TObjPlayer__sub_803DC83C((M2C_UNK)((int) (1)));
            set_global_effect_state__10TObjPlayerFi((M2C_UNK)((int) (1)));
        }
    }
}

void TSceneSora__sub_8029F3E4(void) {  }

int TScene__sub_8029F3E8(void) { return 0; }

}
