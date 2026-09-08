#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredFields_8024E754_arg0
{
  u8 unknown_0[0x28];
  f32 field_28;
  f32 field_2C;
};

extern "C" {
u32 alloc__23TAdSinglePlyChrSelectGCFPv(int);
u32 init_layout__19TWindowKeyBoardSoftFPv(void* a0);
extern u32 lbl_805D6420;
u32 TWindowKeyBoardSoft__sub_8024EDF8(void);
s32 __cvt_fp2unsigned(f32);
extern const f32 lbl_805DCC84;
extern const f32 lbl_805DCC88;
void TWindowKeyBoardSoft__sub_8024E7B8(u8 *arg0, s32 arg1);
extern const float lbl_805DCC78;
extern const f32 lbl_805DCC7C;
extern const f32 lbl_805DCC80;
void TWindowKeyBoardSoft__sub_8024E754(u8 *arg0, int arg1);
}

extern "C" {

void TWindowKeyBoardSoft__sub_8024E84C(void *arg0);
void animate_scale__19TWindowKeyBoardSoftFPv(void *arg0);
u32 free_singleton__19TWindowKeyBoardSoftFUis(u32 arg0, s16 arg1);
s32 is_point_in_bounds__19TWindowKeyBoardSoftFPvPv(void *arg0, void *arg1);
u32 open_singleton__19TWindowKeyBoardSoftFiiii(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
void set_bounds__19TWindowKeyBoardSoftFPvffff(void* p, f32 a, f32 b, f32 c, f32 d);
s32 try_open__19TWindowKeyBoardSoftFii(s32 arg0, s32 arg1);
int TWindowKeyBoardSoft__sub_8024E6D8(s32, s32);
s32 TWindowKeyBoardSoft__sub_8024E8E8();
M2C_UNK TWindowKeyBoardSoft__sub_8024EA50(u32, s32, s32, s32, s32);
M2C_UNK __dl__FPv(u32);

typedef struct RecoveredFields_8024E754_arg0 RecoveredFields_8024E754_arg0;
#pragma fp_contract on
void TWindowKeyBoardSoft__sub_8024E754(u8 *arg0, int arg1) {
  f32 temp_f2;
  RecoveredFields_8024E754_arg0 *new_var;
  new_var = (RecoveredFields_8024E754_arg0 *) arg0;
  if (arg1 != 0)
  {
    temp_f2 = lbl_805DCC80;
    ;
    new_var->field_28 = (f32) (new_var->field_28 * ((lbl_805DCC7C * (temp_f2 * ((f32) arg1))) + (*(const f32 *)&lbl_805DCC78)));
    new_var->field_2C = (f32) (new_var->field_2C * ((*(const f32 *)&lbl_805DCC78) - (temp_f2 * ((f32) arg1))));
  }
}

#pragma push
#pragma opt_common_subs off
void TWindowKeyBoardSoft__sub_8024E7B8(u8 *arg0, s32 arg1) {
    s32 temp_r0;
    M2C_FIELD(arg0, s32 *, 0x30) = arg1;
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x30);
    if (temp_r0 < 0) {
        M2C_FIELD(arg0, s32 *, 0x34) = (s32) ((__cvt_fp2unsigned(lbl_805DCC84 * ((lbl_805DCC88 + (f32) temp_r0) / lbl_805DCC88)) << 0x18) | 0xFF0000 | 0xFFFF);
    }
}
#pragma pop

void set_bounds__19TWindowKeyBoardSoftFPvffff(void* p, f32 a, f32 b, f32 c, f32 d) { *(f32*)((char*)p + 0x3c) = a; *(f32*)((char*)p + 0x40) = b; *(f32*)((char*)p + 0x44) = c; *(f32*)((char*)p + 0x48) = d; }

extern const f32 lbl_805DCC8C;

void TWindowKeyBoardSoft__sub_8024E84C(void *arg0) {
    M2C_FIELD(arg0, f32 *, 0x18) = (f32) (M2C_FIELD(arg0, f32 *, 0x18) - lbl_805DCC8C);
    M2C_FIELD(arg0, f32 *, 0x44) = (f32) (M2C_FIELD(arg0, f32 *, 0x44) - lbl_805DCC8C);
}

extern const f32 lbl_805DCC90;

void animate_scale__19TWindowKeyBoardSoftFPv(void *arg0) {
    M2C_FIELD(arg0, f32 *, 0x14) = (f32) (M2C_FIELD(arg0, f32 *, 0x14) + lbl_805DCC90);
    M2C_FIELD(arg0, f32 *, 0x1C) = (f32) (M2C_FIELD(arg0, f32 *, 0x1C) - lbl_805DCC90);
    M2C_FIELD(arg0, f32 *, 0x40) = (f32) (M2C_FIELD(arg0, f32 *, 0x40) + lbl_805DCC90);
}

s32 is_point_in_bounds__19TWindowKeyBoardSoftFPvPv(void *arg0, void *arg1) {
    if ((M2C_FIELD(arg1, f32 *, 8) < M2C_FIELD(arg0, f32 *, 0x3C)) || (M2C_FIELD(arg1, f32 *, 0xC) < M2C_FIELD(arg0, f32 *, 0x40)) || (M2C_FIELD(arg1, f32 *, 0) > M2C_FIELD(arg0, f32 *, 0x44)) || (M2C_FIELD(arg1, f32 *, 4) > M2C_FIELD(arg0, f32 *, 0x48))) {
        return 0;
    }
    return 1;
}

s32 try_open__19TWindowKeyBoardSoftFii(s32 arg0, s32 arg1) {
    if (TWindowKeyBoardSoft__sub_8024E8E8() == 0) {
        return 0;
    }
    TWindowKeyBoardSoft__sub_8024E6D8(arg0, arg1);
    return 1;
}

extern u32 lbl_805D6420;

u32 open_singleton__19TWindowKeyBoardSoftFiiii(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    if ((u32) lbl_805D6420 == 0U) {
        return 0U;
    }
    TWindowKeyBoardSoft__sub_8024EA50(lbl_805D6420, arg0, arg1, arg2, arg3);
    return lbl_805D6420;
}

extern u32 lbl_805D6420;

u32 TWindowKeyBoardSoft__sub_8024EDF8(void) {
    u32 temp_r3;
    u32 var_r0;
    if ((u32) lbl_805D6420 != 0U) {
        return lbl_805D6420;
    }
    temp_r3 = alloc__23TAdSinglePlyChrSelectGCFPv((int) (0x4C));
    var_r0 = temp_r3;
    if (var_r0 != 0U) {
        var_r0 = init_layout__19TWindowKeyBoardSoftFPv((void*)((int) (temp_r3)));
    }
    lbl_805D6420 = var_r0;
    return var_r0;
}

u32 free_singleton__19TWindowKeyBoardSoftFUis(u32 arg0, s16 arg1) {
    if (arg0 != 0U) {
        if ((u32) lbl_805D6420 == arg0) {
            lbl_805D6420 = 0U;
        }
        if (arg1 > 0) {
            __dl__FPv(arg0);
        }
    }
    return arg0;
}

    extern const float lbl_805DCC78;
    extern const float lbl_805DCC94;
u32 init_layout__19TWindowKeyBoardSoftFPv(void* a0) { *(float*)((char*)a0 + 0x0) = lbl_805DCC94; *(float*)((char*)a0 + 0x4) = lbl_805DCC94; *(float*)((char*)a0 + 0x8) = lbl_805DCC94; *(float*)((char*)a0 + 0xc) = lbl_805DCC94; *(float*)((char*)a0 + 0x10) = lbl_805DCC94; *(float*)((char*)a0 + 0x14) = lbl_805DCC94; *(float*)((char*)a0 + 0x18) = lbl_805DCC94; *(float*)((char*)a0 + 0x1c) = lbl_805DCC94; *(float*)((char*)a0 + 0x3c) = lbl_805DCC94; *(float*)((char*)a0 + 0x40) = lbl_805DCC94; *(float*)((char*)a0 + 0x44) = lbl_805DCC94; *(float*)((char*)a0 + 0x48) = lbl_805DCC94; *(float*)((char*)a0 + 0x20) = lbl_805DCC94; *(float*)((char*)a0 + 0x24) = lbl_805DCC94; *(float*)((char*)a0 + 0x28) = lbl_805DCC78; *(float*)((char*)a0 + 0x2c) = lbl_805DCC78; *(int*)((char*)a0 + 0x30) = 0; *(int*)((char*)a0 + 0x34) = -1; *(float*)((char*)a0 + 0x38) = lbl_805DCC94; }

}
