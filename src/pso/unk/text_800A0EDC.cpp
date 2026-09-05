#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
s32 TObjPlayer__sub_800A1010(s32 arg0);
void TObjPlayer__sub_800A100C(s32 = 0);
s32 TObjPlayer__sub_80016D78();
    extern int TEndingAB__data_805D4F10;
    extern int TEndingPic__data_805D6EE0;
    extern int lbl_805D4F08;
s32 TObjPlayer__sub_800A1010(s32 arg0);
s32 TObjPlayer__sub_800A1058(s32 arg0);
void TObjPlayer__sub_800A100C(s32 _w0);
s32 TObjPlayer__sub_80016FF8();
s32 TObjPlayer__sub_80016FF8();
s32 TObjPlayer__sub_800A1058(s32 arg0);
f32 TObjPlayer__sub_800A3200(int);
extern f32 lbl_805D5008;
void TObjPlayer__sub_800A1298(void);
void set_param__12TObjEneLappyFPvi(void *, s32);
void fn_800A0FAC(u8 *arg0);
void set_param__12TObjEneLappyFPvi(void *, s32);
void fn_800A0FDC(u8 *arg0);
}

extern "C" {

void fn_800A0FAC(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x388) = (s32) (M2C_FIELD(arg0, s32 *, 0x388) & 0xFBFFFFFF);
    set_param__12TObjEneLappyFPvi(arg0, 0x22);
}

void fn_800A0FDC(u8 *arg0) {
    M2C_FIELD(arg0, s32 *, 0x388) = (s32) (M2C_FIELD(arg0, s32 *, 0x388) | 0x04000000);
    set_param__12TObjEneLappyFPvi(arg0, 0x23);
}

void TObjPlayer__sub_800A100C(s32 _w0) {  }

s32 TObjPlayer__sub_800A1010(s32 arg0) {
    if (TObjPlayer__sub_80016D78() != 0) {
        TObjPlayer__sub_800A100C((s32)(arg0));
        return 1;
    }
    return 0;
}
s32 TObjPlayer__sub_800A1058(s32 arg0) {
    if (TObjPlayer__sub_80016FF8() != 0) {
        TObjPlayer__sub_800A100C(arg0);
        return 1;
    }
    return 0;
}
void TObjPlayer__sub_800A1298(void) {
    lbl_805D5008 = TObjPlayer__sub_800A3200((int) (3));
}

}
