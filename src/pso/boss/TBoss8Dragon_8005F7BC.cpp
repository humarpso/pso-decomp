#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TBoss8Dragon__sub_8005F7BC(void *arg0);
void TBoss8Dragon__sub_8005F834(void *arg0, f32 farg0, f32 farg1, f32 farg2);
void TBoss8Dragon__sub_8005F89C(void *arg0, s32 arg1);
void TBoss8Dragon__sub_8005F904(void *arg0, s32 arg1);
M2C_UNK TBoss8Dragon__sub_8005F968(void *, s32, s32);
M2C_UNK TBoss8Dragon__sub_80064AB0(void *);
s32 TObjEneEpsilon__sub_800B95E0(void *);
M2C_UNK TObjEneEpsilon__sub_800B9680(void *, M2C_UNK *);
M2C_UNK TObjEneEpsilon__sub_800B96A4(void *);
f64 TObjPlayer__sub_80019760(f32, f32);
M2C_UNK fn_80064F2C();
M2C_UNK update_velocity__9TObjEneDDFPv();

extern M2C_UNK lbl_80437938[];

void TBoss8Dragon__sub_8005F7BC(void *arg0) {
    fn_80064F2C();
    if (!(M2C_FIELD(arg0, s32 *, 0x490) & 0x1F)) {
        if (TObjEneEpsilon__sub_800B95E0(arg0) != 0) {
            TObjEneEpsilon__sub_800B96A4(arg0);
        } else {
            TObjEneEpsilon__sub_800B9680(arg0, lbl_80437938);
        }
        TBoss8Dragon__sub_80064AB0(arg0);
    }
    M2C_FIELD(arg0, s32 *, 0x490) = (s32) (M2C_FIELD(arg0, s32 *, 0x490) + 1);
}

extern M2C_UNK lbl_80437EB8;

void TBoss8Dragon__sub_8005F834(void *arg0, f32 farg0, f32 farg1, f32 farg2) {
    M2C_FIELD(arg0, f32 *, 0x474) = (f32) (M2C_FIELD(arg0, f32 *, 0x474) * farg0);
    M2C_FIELD(arg0, f32 *, 0x478) = (f32) (M2C_FIELD(arg0, f32 *, 0x478) * farg1);
    M2C_FIELD(arg0, f32 *, 0x47C) = (f32) (M2C_FIELD(arg0, f32 *, 0x47C) * farg0);
    M2C_FIELD(arg0, s32 *, 0x480) = (s32) ((f32) M2C_FIELD(arg0, s32 *, 0x480) * farg2);
}

extern const f64 lbl_80437EB0;

void TBoss8Dragon__sub_8005F89C(void *arg0, s32 arg1) {
    TBoss8Dragon__sub_8005F968(arg0, arg1, (s32) (lbl_80437EB0 * TObjPlayer__sub_80019760(-M2C_FIELD(arg0, f32 *, 0x38), -M2C_FIELD(arg0, f32 *, 0x40))));
}

extern const f64 lbl_80437EB0;

void TBoss8Dragon__sub_8005F904(void *arg0, s32 arg1) {
    update_velocity__9TObjEneDDFPv();
    TBoss8Dragon__sub_8005F968(arg0, arg1, (s32) (lbl_80437EB0 * TObjPlayer__sub_80019760(M2C_FIELD(arg0, f32 *, 0x3A0), M2C_FIELD(arg0, f32 *, 0x3A8))));
}

}
