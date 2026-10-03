#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_80256A60_lbl_804CF8EC {
    M2C_UNK value;
    u8 remaining[0x10];
};

struct RecoveredGlobal_80256A60___vt__18TWindowInputNumber {
    M2C_UNK value;
    u8 remaining[0x14];
};

struct RecoveredGlobal_80256B0C_lbl_8050E208 {
    M2C_UNK value;
    u8 remaining[0x1AC];
};

typedef struct Digit_802561E8 {
    u16 flags;
    u8 pad2[6];
    f32 x;
    u8 padC[4];
    f32 w;
} Digit_802561E8;

typedef struct InNum_802561E8 {
    u8 pad0[0x38];
    f32 x;
    u8 pad3c[0x26];
    s8 ndigits;
} InNum_802561E8;

extern "C" {
s32 get_array_entry__20TWindowSubStatusDispFPvi(void *, int);
void draw_right_aligned_number(void *);
void TWindowInputNumber__sub_802562F0(u8 *arg0);
u8 * TWindowDD__sub_802466E0(void *, s32, s16, s32);
void TWindowInputNumber__sub_802562F0(u8 *arg0);
void calc_digit_count__18TWindowInputNumberFv(void *);
extern RecoveredGlobal_80256A60_lbl_804CF8EC lbl_804CF8EC;
extern M2C_UNK __vt__18TWindowInputNumber[];
extern s32 lbl_805D3918;
extern const f32 lbl_805DCE2C;
u8 *TWindowInputNumber__ct(u8 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s16 arg5);
u8 test_flag_4c__23TAdSinglePlyChrSelectGCFPv(void *);
extern s8 lbl_8050E208[];
u8 TWindowInputNumber__sub_80256B0C(u8 *arg0);
s32 get_array_entry__20TWindowSubStatusDispFPvi(void *, int);
extern const f32 lbl_805DCE18;
extern const f32 lbl_805DCE1C;
extern const f32 lbl_805DCE20;
extern const f32 lbl_805DCE24;
void align_digits__18TWindowInputNumberFv(InNum_802561E8 *self);
}

extern "C" {

struct WindowNum_80256170 { char pad[0x70]; };

void *__dt__18TWindowInputNumberFv(void *arg0, s16 arg1);
void create__18TWindowInputNumberFPvi(void *arg0, s32 arg1);
s32 is_locked__18TWindowInputNumberFPvi(void *arg0, s32 arg1);
void render__18TWindowInputNumberFv(u8 *arg0);
M2C_UNK draw_arrows__18TWindowInputNumberFv(void *, int, int, int);
s32 TWindowSubComCard__sub_80244C0C(void *, void *);
M2C_UNK draw_window_frame(void *, int);
M2C_UNK TWindowSubStatusDisp__sub_80257BC0(void *, void *, int);
u32 TWindowSubStatusDisp__sub_802880BC(u32, s32, s16);
void __dl__7TObjectFPv(void *);
u32 alloc__23TAdSinglePlyChrSelectGCFPv(M2C_UNK);
s32 apply_choice__20TWindowChoiceSettingFiiii(void *, M2C_UNK, M2C_UNK, M2C_UNK);
void destroy_status_display__20TWindowSubStatusDispFis(void *, int);
void destroy_window_base__9TWindowDDFPvs(void *, int);
M2C_UNK forward_render__20TWindowSubStatusDispFPv(void *, int);
s32 get_array_entry__20TWindowSubStatusDispFPvi(void *, int);
s32 is_confirmed__18TWindowInputNumberFPv(void *);

extern const f32 lbl_805DCE18;

void create__18TWindowInputNumberFPvi(void *arg0, s32 arg1) {
    u32 var_r0;

    if ((u32) M2C_FIELD(arg0, u32 *, 0x70) == 0U) {
        var_r0 = alloc__23TAdSinglePlyChrSelectGCFPv(0x24);
        if (var_r0 != 0U) {
            u32 saved = var_r0;
            var_r0 = TWindowSubStatusDisp__sub_802880BC(saved, arg1, M2C_FIELD(arg0, s16 *, 0x20));
        }
        M2C_FIELD(arg0, u32 *, 0x70) = var_r0;
        M2C_FIELD(arg0, s32 *, 0x2C) = (s32) (M2C_FIELD(arg0, s32 *, 0x2C) | 0x40);
        M2C_FIELD(arg0, f32 *, 0x3C) = (f32) (M2C_FIELD(arg0, f32 *, 0x3C) + lbl_805DCE18);
    }
}

#pragma push
#pragma fp_contract on
void align_digits__18TWindowInputNumberFv(InNum_802561E8 *self) {
    s32 i;
    f32 step;
    f32 scale;
    f32 pos;
    i = 0;
    scale = lbl_805DCE1C;
    step = lbl_805DCE24;
    pos = scale * (self->x - lbl_805DCE20) + scale * (f32)(self->ndigits * 12);
    pos -= lbl_805DCE18;
    for (; i < self->ndigits; i++) {
        Digit_802561E8 *d = (Digit_802561E8 *)get_array_entry__20TWindowSubStatusDispFPvi((void *)(self), (int)(i));
        d->x = scale * d->w + pos;
        pos -= step;
    }
    for (; i < 6; i++) {
        Digit_802561E8 *d = (Digit_802561E8 *)get_array_entry__20TWindowSubStatusDispFPvi((void *)(self), (int)(i));
        d->flags |= 2;
    }
}
#pragma pop

void TWindowInputNumber__sub_802562F0(u8 *arg0) {
  s32 var_r30;
  u8 *temp_r3;
  s32 var_r29;
  var_r30 = 0;
  var_r29 = *((s32 *) (((s8 *) arg0) + 0x6C));
  do
  {
    temp_r3 = (u8 *) get_array_entry__20TWindowSubStatusDispFPvi((void *)(arg0), (int)(var_r30));
    *((s32 *) (((s8 *) temp_r3) + 0x20)) = (s32) (var_r29 % 10);
    draw_right_aligned_number(temp_r3);
    var_r29 = var_r29 / 10;
    var_r30 += 1;
  }
  while (((u32) var_r30) < 6U);
}

void render__18TWindowInputNumberFv(u8 *arg0) {
    s32 temp_r31;
    s32 temp_r3;

    temp_r3 = TWindowSubComCard__sub_80244C0C((void *) (arg0), (void *) (arg0 + 0x74));
    draw_window_frame((void *) (arg0), (int) (temp_r3));
    TWindowSubStatusDisp__sub_80257BC0((void *) (arg0), (void *) (arg0 + 0x24), (int) (temp_r3));
    temp_r31 = is_confirmed__18TWindowInputNumberFPv((void *) (arg0));
    draw_arrows__18TWindowInputNumberFv((void *) (arg0), (int) (temp_r3), (int) (get_array_entry__20TWindowSubStatusDispFPvi((void *) (arg0), (int) M2C_FIELD(arg0, s8 *, 0x63))), (int) (temp_r31));
    {
        void *temp_ptr = (void *) M2C_FIELD(arg0, u32 *, 0x70);
        if (temp_ptr != NULL) {
            forward_render__20TWindowSubStatusDispFPv(temp_ptr, (int) (temp_r3));
        }
    }
}

extern M2C_UNK __vt__18TWindowInputNumber[];

void *__dt__18TWindowInputNumberFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__18TWindowInputNumber;
        if (M2C_FIELD(arg0, void **, 0x70) != NULL) { destroy_status_display__20TWindowSubStatusDispFis(M2C_FIELD(arg0, void **, 0x70), 1); }
        destroy_window_base__9TWindowDDFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern s8 lbl_8050E208[];

typedef char RecoveredGlobal_80256A60_lbl_804CF8EC_size[sizeof(RecoveredGlobal_80256A60_lbl_804CF8EC) == 0x14 ? 1 : -1];
typedef char RecoveredGlobal_80256A60___vt__18TWindowInputNumber_size[sizeof(RecoveredGlobal_80256A60___vt__18TWindowInputNumber) == 0x18 ? 1 : -1];
u8 *TWindowInputNumber__ct(u8 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s16 arg5) {
    TWindowDD__sub_802466E0(arg0, (s32) &lbl_804CF8EC.value, arg5, arg1);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_80256A60___vt__18TWindowInputNumber *)&__vt__18TWindowInputNumber).value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D3918;
    M2C_FIELD(arg0, s16 *, 0x20) = arg5;
    M2C_FIELD(arg0, s16 *, 0x60) = 0;
    M2C_FIELD(arg0, s8 *, 0x63) = 0;
    M2C_FIELD(arg0, s32 *, 0x64) = arg2;
    M2C_FIELD(arg0, s32 *, 0x68) = arg3;
    M2C_FIELD(arg0, s32 *, 0x6C) = arg4;
    M2C_FIELD(arg0, s32 *, 0x70) = 0;
    M2C_FIELD(arg0, f32 *, 0x74) = (f32) lbl_805DCE2C;
    M2C_FIELD(arg0, f32 *, 0x78) = (f32) lbl_805DCE2C;
    calc_digit_count__18TWindowInputNumberFv(arg0);
    TWindowInputNumber__sub_802562F0((u8 *)(arg0));
    align_digits__18TWindowInputNumberFv((InNum_802561E8 *)(arg0));
    return arg0;
}

typedef char RecoveredGlobal_80256B0C_lbl_8050E208_size[sizeof(RecoveredGlobal_80256B0C_lbl_8050E208) == 0x1B0 ? 1 : -1];
u8 TWindowInputNumber__sub_80256B0C(u8 *arg0) {
    if (M2C_FIELD(arg0, u16 *, 0x60) & 0x20) {
        return 0U;
    }
    return test_flag_4c__23TAdSinglePlyChrSelectGCFPv((u8 *)&(*(RecoveredGlobal_80256B0C_lbl_8050E208 *)&lbl_8050E208).value + 0x160);
}

s32 is_locked__18TWindowInputNumberFPvi(void *arg0, s32 arg1) {
    if (M2C_FIELD(arg0, u16 *, 0x60) & 0x20) {
        return 0;
    }
    return apply_choice__20TWindowChoiceSettingFiiii(lbl_8050E208 + 0x160, arg1, 6, 1);
}

}
