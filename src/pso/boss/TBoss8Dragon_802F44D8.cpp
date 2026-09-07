#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredGlobal_802F45A0_lbl_80474580 { M2C_UNK value; u8 remaining[0x88]; };
typedef char RecoveredGlobal_802F45A0_lbl_80474580_size[sizeof(RecoveredGlobal_802F45A0_lbl_80474580) == 0x8C ? 1 : -1];

struct RecoveredGlobal_802F45A0_lbl_80541DE8 { M2C_UNK value; u8 remaining[0x8]; };
typedef char RecoveredGlobal_802F45A0_lbl_80541DE8_size[sizeof(RecoveredGlobal_802F45A0_lbl_80541DE8) == 0xC ? 1 : -1];

struct RecoveredGlobal_802F45A0_lbl_80541DF4 { M2C_UNK value; u8 remaining[0x38]; };
typedef char RecoveredGlobal_802F45A0_lbl_80541DF4_size[sizeof(RecoveredGlobal_802F45A0_lbl_80541DF4) == 0x3C ? 1 : -1];

#include <stddef.h>
struct Stack_802F4760 {
    M2C_UNK sp8;
    f32 spC;
    u8 trailing_storage[0x4];
};

struct RecoveredGlobal_802F4760_lbl_80541E30 {
    M2C_UNK value;
    u8 remaining[0x8];
};

struct RecoveredGlobal_802F4760_lbl_80541E3C {
    M2C_UNK value;
    u8 remaining[0x8];
};

extern "C" {
void get_camera_ctrl__9TObjEneDDFPv(s32, s32);
void update_camera_sequence__9TObjEneDDFPv(void);
M2C_UNK TObjPlayer__sub_803D8960(int, void *, int, int);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK TObjPlayer__sub_803D9B78();
extern RecoveredGlobal_802F45A0_lbl_80474580 lbl_80474580;
extern RecoveredGlobal_802F45A0_lbl_80541DE8 lbl_80541DE8;
extern RecoveredGlobal_802F45A0_lbl_80541DF4 lbl_80541DF4;
extern s32 TBoss8Dragon__data_805D698C;
extern s32 lbl_805D6990;
extern s32 TBoss8Dragon__data_805D6994;
extern s32 TBoss8Dragon__data_805D6998;
extern s32 TBoss8Dragon__data_805D699C;
extern s32 TBoss8Dragon__data_805D69A0;
void TBoss8Dragon__sub_802F45A0(void);
M2C_UNK VecCopy__FP3VecPC3Vec(void *);
f32 TObjPlayer__sub_8001978C(f32);
f32 clamp_velocity__15TObjBoss2TunnelFPv(void *);
f32 TObjPlayer__sub_803D89C0(void *, void *);
M2C_UNK TBoss6Type1__sub_803D9370(void *, void *);
extern RecoveredGlobal_802F4760_lbl_80541E30 lbl_80541E30;
extern RecoveredGlobal_802F4760_lbl_80541E3C lbl_80541E3C;
extern const f32 lbl_805D69B0;
extern const f32 TBoss8Dragon__data_805DED50;
extern const f32 TBoss8Dragon__data_805DED74;
s32 TBoss8Dragon__sub_802F4760(f32 farg0);
}

extern "C" {

void TBoss8Dragon__sub_802F45A0(void) {
    s32 temp_r0;
    s32 temp_r4;
    if ((s32) TBoss8Dragon__data_805D698C == (s32) lbl_805D6990) {
        TObjPlayer__sub_803D9B2C();
        update_camera_sequence__9TObjEneDDFPv();
        TObjPlayer__sub_803D8960((int) (0), (void *) (&lbl_80541DF4.value), (int) (TBoss8Dragon__data_805D6994), (int) (3));
        TObjPlayer__sub_803D9B78();
    }
    if ((s32) TBoss8Dragon__data_805D698C == (s32) M2C_FIELD(&lbl_80474580.value, M2C_UNK *, (TBoss8Dragon__data_805D6998 * 4))) {
        temp_r4 = TBoss8Dragon__data_805D699C;
        TBoss8Dragon__data_805D699C = temp_r4 + 0xC;
        get_camera_ctrl__9TObjEneDDFPv((s32) &lbl_80541DE8.value, temp_r4);
        temp_r0 = TBoss8Dragon__data_805D6998 + 1;
        TBoss8Dragon__data_805D6998 = temp_r0;
        if ((temp_r0 == 7) && !(TBoss8Dragon__data_805D69A0 & 4)) {
            TBoss8Dragon__data_805D6998 = 0xC;
            TBoss8Dragon__data_805D699C += 0x3C;
        }
        if (((s32) TBoss8Dragon__data_805D6998 == 0x12) && !(TBoss8Dragon__data_805D69A0 & 2)) {
            TBoss8Dragon__data_805D6998 = 0x20;
            TBoss8Dragon__data_805D699C += 0xA8;
        }
    }
    TBoss8Dragon__data_805D698C += 1;
}
#pragma push
#pragma fp_contract on
typedef char RecoveredGlobal_802F4760_lbl_80541E30_size[sizeof(RecoveredGlobal_802F4760_lbl_80541E30) == 0xC ? 1 : -1];
typedef char RecoveredGlobal_802F4760_lbl_80541E3C_size[sizeof(RecoveredGlobal_802F4760_lbl_80541E3C) == 0xC ? 1 : -1];
s32 TBoss8Dragon__sub_802F4760(f32 farg0) {
    typedef char sp8_offset[(offsetof(Stack_802F4760, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_802F4760, spC) == 0x4) ? 1 : -1];
    Stack_802F4760 stack;
    f32 temp_f1;
    f32 temp_f31;
    VecCopy__FP3VecPC3Vec((void *) (&stack.sp8));
    stack.spC = TBoss8Dragon__data_805DED50;
    TBoss6Type1__sub_803D9370((void *) (&stack.sp8), (void *) (&lbl_80541E30.value));
    temp_f1 = clamp_velocity__15TObjBoss2TunnelFPv((void *) (&stack.sp8));
    if ((temp_f1 + farg0) < lbl_805D69B0) {
        temp_f31 = temp_f1 * (TBoss8Dragon__data_805DED74 / TObjPlayer__sub_8001978C((f32) ((temp_f1 * temp_f1) + (farg0 * farg0))));
        if (TObjPlayer__sub_803D89C0((void *) (&stack.sp8), (void *) (&lbl_80541E3C.value)) >= temp_f31) {
            return 1;
        }
    }
    return 0;
}
#pragma pop

}
