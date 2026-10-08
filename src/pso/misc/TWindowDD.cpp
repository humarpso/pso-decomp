#include "pso/misc/TWindowDD.h"

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_80340508_lbl_8050E208
{
  M2C_UNK value;
  u8 remaining[0x1AC];
};

struct RecoveredGlobal_803404A4_lbl_8050E208
{
  M2C_UNK value;
  u8 remaining[0x1AC];
};

struct E_803403F8 { f32 a; f32 b; f32 c; f32 d; f32 e; s32 f; };

extern "C" {
void TWindowDD__sub_803407F0(u8 *arg0, s32 arg1);
M2C_UNK spawn_window__9TWindowDDFv();
void TWindowDD__sub_8034091C(u8 *arg0, s32 arg1);
void TWindowDD__sub_80340E20(u8 *arg0, s32 arg1);
extern const f32 lbl_805DFC34;
extern const f32 lbl_805DFC38;
extern const f32 lbl_805DFC3C;
void TWindowDD__sub_8034042C(u8 *arg0, f32 farg0, f32 farg1, f32 farg2);
s32 test_flag_4c__23TAdSinglePlyChrSelectGCFPv(void *, void *);
s32 TWindowShortListCtrl__check_controller_button(void *, void *);
extern RecoveredGlobal_80340508_lbl_8050E208 lbl_8050E208;
s32 apply_choice__20TWindowChoiceSettingFiiii(void *, void *, int, int);
extern RecoveredGlobal_80340508_lbl_8050E208 lbl_8050E208;
s32 apply_both_choices__9TWindowDDFii(M2C_UNK arg0, s32 arg1);
s32 apply_both_choices__9TWindowDDFii(M2C_UNK arg0, s32 arg1);
M2C_UNK spawn_window__9TWindowDDFv();
void handle_input__9TWindowDDFPv(u8 *arg0);
extern const f32 TWindowDD__data_805DFBFC;
extern const f32 lbl_805DFC00;
extern const f32 lbl_805DFC04;
extern const f32 lbl_805DFC08;
extern const f32 lbl_805DFC2C;
void TWindowDD__sub_80340A44(void);
extern const f32 lbl_805DFC30;
void reset_entries__9TWindowDDFPvf(E_803403F8 *p, f32 v);
}

extern "C" {

s32 TWindowDD__sub_80340820(void* p);
void TWindowDD__sub_80340910(void* p);
void *TWindowDD__sub_8034094C(void *arg0, s16 arg1);
void *create__9TWindowDDFv(void);
void init__9TWindowDDFPv(void* p);
void set_scale__9TWindowDDFPvii(void *arg0, s32 arg1, s32 arg2);
void update_draw__9TWindowDDFPv(void* p);
void *construct_variant_a__9TWindowDDFPv(void *);
void __dl__7TObjectFPv(void *);
void *__nw__7TObjectFUl(int);
void destroy_window_base__9TWindowDDFPvs(void *, int);
int initialize_subwindow__9TWindowDDFPv(void*);
int update_fade__17TWindowSubComCardFPv(void*);

void reset_entries__9TWindowDDFPvf(E_803403F8 *p, f32 v) {
    s32 i;
    for (i = 0; i < 8; i++) {
        p->a = lbl_805DFC30;
        p->b = lbl_805DFC30;
        p->c = v;
        p->d = lbl_805DFC30;
        p->e = lbl_805DFC30;
        p->f = -1;
        p++;
    }
}

void TWindowDD__sub_8034042C(u8 *arg0, f32 farg0, f32 farg1, f32 farg2) {
  f32 temp_f0;
  f32 temp_f1;
  f32 temp_f1_2;
  s8 *new_var;
  f32 temp_f2;
  f32 temp_f4;
  float new_var4;
  f32 temp_f5;
  int new_var3;
  f32 temp_f7;
  f32 temp_f8;
  s8 *new_var2;
  temp_f4 = farg0 + farg2;
  temp_f8 = lbl_805DFC34 * farg0;
  temp_f7 = lbl_805DFC34 * farg1;
  *((f32 *) (((s8 *) arg0) + 0)) = temp_f8;
  temp_f5 = lbl_805DFC34 * (lbl_805DFC38 + farg1);
  new_var4 = lbl_805DFC34 * temp_f4;
  *((f32 *) (((s8 *) arg0) + 4)) = temp_f7;
  temp_f1 = lbl_805DFC3C + farg0;
  temp_f2 = new_var4;
  *((f32 *) (((s8 *) arg0) + 8)) = temp_f8;
  temp_f1_2 = lbl_805DFC34 * temp_f1;
  *((f32 *) (((s8 *) arg0) + 0xC)) = temp_f5;
  temp_f0 = temp_f1;
  temp_f0 = lbl_805DFC34 * (temp_f0 - farg2);
  new_var2 = ((s8 *) arg0) + 0x28;
  *((f32 *) (((s8 *) arg0) + 0x10)) = temp_f2;
  *((f32 *) (((s8 *) arg0) + 0x14)) = temp_f7;
  *((f32 *) (((s8 *) arg0) + 0x18)) = temp_f2;
  *((f32 *) (((s8 *) arg0) + 0x1C)) = temp_f5;
  *((f32 *) (((s8 *) arg0) + 0x20)) = temp_f0;
  *((f32 *) (((s8 *) arg0) + 0x24)) = temp_f7;
  new_var3 = 0x30;
  *((f32 *) new_var2) = temp_f0;
  *((f32 *) (((s8 *) arg0) + 0x2C)) = temp_f5;
  *((f32 *) (((s8 *) arg0) + new_var3)) = temp_f1_2;
  *((f32 *) (((s8 *) arg0) + 0x34)) = temp_f7;
  new_var = ((s8 *) arg0) + 0x38;
  *((f32 *) new_var) = temp_f1_2;
  *((f32 *) (((s8 *) arg0) + 0x3C)) = temp_f5;
}

typedef struct RecoveredGlobal_80340508_lbl_8050E208 RecoveredGlobal_80340508_lbl_8050E208;
typedef char RecoveredGlobal_80340508_lbl_8050E208_size[((sizeof(RecoveredGlobal_80340508_lbl_8050E208)) == 0x1B0) ? (1) : (-1)];

#pragma push
#pragma opt_dead_assignments off
typedef struct RecoveredGlobal_803404A4_lbl_8050E208 RecoveredGlobal_803404A4_lbl_8050E208;
typedef char RecoveredGlobal_803404A4_lbl_8050E208_size[((sizeof(RecoveredGlobal_803404A4_lbl_8050E208)) == 0x1B0) ? (1) : (-1)];
s32 apply_both_choices__9TWindowDDFii(M2C_UNK arg0, s32 arg1) {
  return apply_choice__20TWindowChoiceSettingFiiii((void *) (((u8 *) (&(*(RecoveredGlobal_803404A4_lbl_8050E208 *)&lbl_8050E208).value)) + 0x20), (void *) arg1, (int) 6, (int) 1) | apply_choice__20TWindowChoiceSettingFiiii((void *) (((u8 *) (&(*(RecoveredGlobal_803404A4_lbl_8050E208 *)&lbl_8050E208).value)) + 0x160), (void *) arg1, (int) 6, (int) 1);
}
#pragma pop

s32 TWindowDD_check_input_mask(void *input_context, s32 arg1) {
  return TWindowShortListCtrl__check_controller_button((void *) (((u8 *) (&lbl_8050E208.value)) + 0x20), (void *) arg1) | test_flag_4c__23TAdSinglePlyChrSelectGCFPv((void *) (((u8 *) (&lbl_8050E208.value)) + 0x160), (void *) arg1);
}

void update_draw__9TWindowDDFPv(void* p) { initialize_subwindow__9TWindowDDFPv(p); update_fade__17TWindowSubComCardFPv(p); }

void TWindowDD__sub_803407F0(u8 *arg0, s32 arg1) {
    if (arg1 < 0) {
        M2C_FIELD(arg0, s32 *, 0x64) = 0;
        return;
    }
    if (arg1 >= 3) {
        M2C_FIELD(arg0, s32 *, 0x64) = 2;
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x64) = arg1;
}

s32 TWindowDD__sub_80340820(void* p) { return *(s32*)((char*)p + 0x68); }

#pragma push
#pragma opt_common_subs off
void handle_input__9TWindowDDFPv(u8 *arg0) {
    s32 temp_r0;
    s32 temp_r31;
    s32 temp_r3;
    temp_r31 = M2C_FIELD(arg0, s32 *, 0x68);
    if (apply_both_choices__9TWindowDDFii((s32) ((u8 *)(arg0) + 0x60), 0x10) != 0) {
        M2C_FIELD(arg0, s32 *, 0x68) = (s32) (M2C_FIELD(arg0, s32 *, 0x68) - 1);
    } else if (apply_both_choices__9TWindowDDFii((s32) ((u8 *)(arg0) + 0x60), 0x20) != 0) {
        M2C_FIELD(arg0, s32 *, 0x68) = (s32) (M2C_FIELD(arg0, s32 *, 0x68) + 1);
    } else if (apply_both_choices__9TWindowDDFii((s32) ((u8 *)(arg0) + 0x60), 0x20000) != 0) {
        M2C_FIELD(arg0, s32 *, 0x68) = 0;
    } else if (apply_both_choices__9TWindowDDFii((s32) ((u8 *)(arg0) + 0x60), 0x10000) != 0) {
        M2C_FIELD(arg0, s32 *, 0x68) = 2;
    }
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x68);
    temp_r3 = M2C_FIELD(arg0, s32 *, 0x64);
    if (temp_r0 < temp_r3) {
        M2C_FIELD(arg0, s32 *, 0x68) = temp_r3;
    } else if (temp_r0 >= 3) {
        M2C_FIELD(arg0, s32 *, 0x68) = 2;
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0x68) != temp_r31) {
        spawn_window__9TWindowDDFv();
    }
}
#pragma pop

void TWindowDD__sub_80340910(void* p) { *(s32*)((char*)p + 0x60) = 1; }

void TWindowDD__sub_8034055C();
void render_shadows__7TObjectFv();
__declspec(section ".data") void *lbl_804EFB90[2] = {
    (void *)0x0, (void *)0x0,
};
void *lbl_804EFB98[5] = {
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x0,
    (void *)0x3,
};
void *lbl_804EFBAC[7] = {
    (void *)0x0, (void *)0x0, (void *)&TWindowDD__sub_8034094C, (void *)&update_draw__9TWindowDDFPv,
    (void *)&TWindowDD__sub_8034055C, (void *)&render_shadows__7TObjectFv, (void *)0x0,
};
#define lbl_804EFB90 ((f32 *)lbl_804EFB90)
#define lbl_804EFB98 ((f32 *)lbl_804EFB98)
#define lbl_804EFBAC ((M2C_UNK *)lbl_804EFBAC)

void TWindowDD__sub_8034091C(u8 *arg0, s32 arg1) {
    s32 temp_r0;
    s32 var_r4;
    var_r4 = arg1;
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x64);
    if (var_r4 < temp_r0) {
        var_r4 = temp_r0;
    } else if (var_r4 >= 3) {
        var_r4 = 2;
    }
    M2C_FIELD(arg0, s32 *, 0x68) = var_r4;
    M2C_FIELD(arg0, s32 *, 0x60) = 0;
}

void *TWindowDD__sub_8034094C(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804EFBAC;
        destroy_window_base__9TWindowDDFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

struct W_803409A4 { u8 pad0[0x18]; void *p18; u8 pad1c[0x5C - 0x1C]; s32 f5c; s32 f60; s32 f64; s32 f68; };
void *construct_base__9TWindowDDFPvPvsPv(void *, void *, int, void *);

#define arg0 ((W_803409A4 *)arg0v)
void *construct_variant_a__9TWindowDDFPv(void *arg0v) {
    construct_base__9TWindowDDFPvPvsPv(arg0, lbl_804EFB98, 4, lbl_804EFB90);
    arg0->p18 = lbl_804EFBAC;
    arg0->f60 = 1;
    arg0->f64 = 2;
    arg0->f68 = 2;
    arg0->f5c = 0x01000000;
    return arg0;
}
#undef arg0

void *create__9TWindowDDFv(void) {
    void *o = __nw__7TObjectFUl(0x6C);
    if (o != NULL) {
        o = construct_variant_a__9TWindowDDFPv(o);
    }
    return o;
}

void TWindowDD__sub_80340A44(void) {
    lbl_804EFB90[0] = TWindowDD__data_805DFBFC;
    lbl_804EFB90[1] = lbl_805DFC00;
    lbl_804EFB98[0] = lbl_805DFC04;
    lbl_804EFB98[1] = lbl_805DFC08;
    lbl_804EFB98[2] = lbl_805DFC2C;
}

void init__9TWindowDDFPv(void* p) { initialize_subwindow__9TWindowDDFPv(p); update_fade__17TWindowSubComCardFPv(p); }

extern M2C_UNK lbl_804785D8;
extern const f32 lbl_805DFC6C;

void TWindowDD__sub_80340E20(u8 *arg0, s32 arg1) {
    M2C_FIELD(arg0, f32 *, 0x6C) = (f32) arg1;
}

void set_scale__9TWindowDDFPvii(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, f32 *, 0x64) = (f32) arg1;
    M2C_FIELD(arg0, f32 *, 0x68) = (f32) arg2;
    M2C_FIELD(arg0, f32 *, 0x60) = (f32) (lbl_805DFC6C / M2C_FIELD(arg0, f32 *, 0x64));
}

}
