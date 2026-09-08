#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
M2C_UNK TBoss3Volopt__sub_8022675C(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK create_fade__14TObjCMMainMenuFPvPv(M2C_UNK, M2C_UNK);
s32 TObjCMProportion__sub_8029916C(M2C_UNK);
extern s32 lbl_805D6558;
extern s32 TObjCMMainMenu__data_805D659C;
extern const f32 lbl_805DDA70;
extern const f32 lbl_805DDAFC;
extern const f32 lbl_805DDBBC;
extern const f32 lbl_805DDC0C;
void TObjCMMainMenu__vt2(void *arg0);
}

extern "C" {

void TObjCMMainMenu__vt1(void);
void TObjCMMainMenu__vt5(void *arg0);
void TObjCMMainMenu__vt6(void *arg0);

extern s32 TObjCMMainMenu__data_805D659C;

void TObjCMMainMenu__vt6(void *arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x30) - 1;
    M2C_FIELD(arg0, s32 *, 0x30) = temp_r0;
    if (temp_r0 < 0) {
        TObjCMMainMenu__data_805D659C = 4;
    }
}

extern s32 TObjCMMainMenu__data_805D659C;

void TObjCMMainMenu__vt5(void *arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x30) - 1;
    M2C_FIELD(arg0, s32 *, 0x30) = temp_r0;
    if (temp_r0 < 0) {
        TObjCMMainMenu__data_805D659C = 3;
    }
}

#pragma push
#pragma opt_common_subs off
#pragma fp_contract on
void TObjCMMainMenu__vt2(void *arg0) {
    f32 temp_f2;
    f32 fv;
    f32 v1;
    f32 v2;
    f32 c1;
    f32 c2;
    s32 temp_r0;
    fv = M2C_FIELD(arg0, f32 *, 0x48);
    M2C_FIELD(arg0, f32 *, 0x48) = (f32) (fv + lbl_805DDC0C);
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x30) - 1;
    M2C_FIELD(arg0, s32 *, 0x30) = temp_r0;
    if (temp_r0 < 0) {
        M2C_FIELD(arg0, s32 *, 0x30) = 0;
    }
    if (((s32) lbl_805D6558 == 2) || ((s32) M2C_FIELD(arg0, s32 *, 0x30) == 0)) {
        temp_f2 = M2C_FIELD(arg0, f32 *, 0x48);
        if (temp_f2 < lbl_805DDBBC) {
            M2C_FIELD(arg0, f32 *, 0x48) = (f32) ((lbl_805DDAFC * (lbl_805DDBBC - temp_f2)) + temp_f2);
        }
        fv = M2C_FIELD(arg0, f32 *, 0x48);
        if (fv > lbl_805DDA70) {
            M2C_FIELD(arg0, f32 *, 0x48) = lbl_805DDA70;
        }
        if (TObjCMProportion__sub_8029916C(4) != 0) {
            TBoss3Volopt__sub_8022675C(0x52D01, 0, 0, 0);
            M2C_FIELD(arg0, s32 *, 0x30) = 7;
            TObjCMMainMenu__data_805D659C = 5;
            create_fade__14TObjCMMainMenuFPvPv(7, 1);
        }
    } else {
        fv = M2C_FIELD(arg0, f32 *, 0x48);
        if (fv > lbl_805DDBBC) {
            M2C_FIELD(arg0, f32 *, 0x48) = lbl_805DDBBC;
        }
    }
}
#pragma pop

void TObjCMMainMenu__vt1(void) {  }

}
