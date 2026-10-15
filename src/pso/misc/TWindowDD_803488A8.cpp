#include "types.h"

struct Src_80348A9C { f32 x; f32 y; };

struct Dst_80348A9C { u8 pad[0xc]; f32 x; f32 y; u8 pad2[4]; };

struct A_803489B8 { u8 pad0[4]; f32 f4; u8 pad8[4]; f32 fC; u8 pad10[0x1C]; f32 f2C; };

struct B_803489B8 { u8 pad0[4]; f32 f4; u8 pad8[0x14]; f32 f1C; u8 pad20[0x10]; };

extern "C" {
extern f32 lbl_805DFB1C;
extern const f32 TWindowDD__data_805DFCD8;
extern f32 lbl_805DFCDC;
void TWindowDD__sub_80348A2C(void *arg0, void *arg1);
extern const f32 lbl_805DFCE0;
extern const f32 lbl_805DFCE4;
f32 TWindowDD__sub_80348AD4(f32 farg0, f32 farg1);
extern Src_80348A9C TWindowDD__data_805434E8[][8];
void copy_point_table__9TWindowDDFPvi(Dst_80348A9C *self, s32 idx);
extern s32 *TWindowDD__player_name_buffers;
extern s32 *TWindowDD__data_805D6E28;
extern s16 *lbl_805D6E34;
s32 TWindowDD__sub_80348B70(s16 arg0);
extern const f32 TWindowDD__data_805DFB58;
extern const f32 lbl_805DFB5C;
extern const f32 lbl_805DFCD4;
extern const f32 TWindowDD__data_805DFCD8;
void calc_inner_rect__9TWindowDDFPvPv(u8 *arg0, u8 *arg1);
extern const f32 TWindowDD__data_805DFB20;
extern const f32 TWindowDD__data_805DFCD8;
void TWindowDD__sub_803489B8(A_803489B8 *arg0, B_803489B8 *arg1, s32 arg2);
}

extern "C" {

typedef struct { char pad[0xBC]; } Buf;

void append_string__9TWindowDDFiiPv(s32 arg0, s32 arg1, s32 *arg2);
void draw__9TWindowDDFPviif(void *arg0, s32 arg1, s32 arg2, f32 farg0);
s32 get_draw_count__9TWindowDDFPv(void **arg0);
s32 get_entry__9TWindowDDFi(s32 arg0);
s32 reset_entries__9TWindowDDFPvf(Buf *, s32);
s32 can_append_chars__9TWindowDDFiPv(s32, s32 *);
s32 draw_transformed_primitive__9TWindowDDFPvPvPvPv(Buf *, s32, s32, s32);
s32 strlen();
s32 strncpy(s32, s32, s32);

void append_string__9TWindowDDFiiPv(s32 arg0, s32 arg1, s32 *arg2) {
    s32 temp_r31;

    if (arg0 != 0) {
        temp_r31 = strlen();
        if (can_append_chars__9TWindowDDFiPv(temp_r31, arg2) != 0) {
            strncpy(arg1 + *arg2, arg0, temp_r31);
            *arg2 += temp_r31;
        }
    }
}

extern s32 lbl_805D63F0;

void draw__9TWindowDDFPviif(void *arg0, s32 arg1, s32 arg2, f32 farg0) {
    Buf sp8;
    s32 temp_r31;

    temp_r31 = get_draw_count__9TWindowDDFPv((void **)(lbl_805D63F0));
    TWindowDD__sub_80348AD4(*(f32 *)((s8 *)arg0 + 0x54), farg0);
    reset_entries__9TWindowDDFPvf(&sp8, -1);
    copy_point_table__9TWindowDDFPvi((Dst_80348A9C *)(&sp8), (s32)(arg2));
    TWindowDD__sub_80348A2C((void *)(arg1), (void *)(&sp8));
    TWindowDD__sub_803489B8((A_803489B8 *)(arg1), (B_803489B8 *)(&sp8), (s32)(0));
    draw_transformed_primitive__9TWindowDDFPvPvPvPv(&sp8, 8, temp_r31, 1);
}

#pragma push
#pragma fp_contract on
void TWindowDD__sub_803489B8(A_803489B8 *arg0, B_803489B8 *arg1, s32 arg2) {
    s32 i;
    f32 hs;
    f32 half;
    f32 v;
    f32 t0;
    f32 step;
    f32 sc;
    half = TWindowDD__data_805DFCD8 * arg0->fC;
    sc = arg0->f2C;
    t0 = arg0->f4 + half;
    step = TWindowDD__data_805DFB20 * sc;
    hs = half * sc;
    v = t0 - hs;
    v += step * (f32) arg2;
    for (i = 0; i < 4; i++) {
        arg1->f4 = v;
        arg1->f1C = v + step;
        arg1++;
    }
}
#pragma pop

void TWindowDD__sub_80348A2C(void *arg0, void *arg1) {
  f32 temp_f0;
  f32 temp_f0_2;
  f32 temp_f1;
  f32 temp_f1_2;
  s8 *new_var2;
  f32 temp_f2;
  f32 temp_f2_2;
  f32 temp_f4;
  s8 *new_var;
  f32 var_f0;
  temp_f2 = TWindowDD__data_805DFCD8 * (*((f32 *) (((s8 *) arg0) + 8)));
  temp_f1 = temp_f2 * (*((f32 *) (((s8 *) arg0) + 0x28)));
  temp_f0 = (*((f32 *) (((s8 *) arg0) + 0))) + temp_f2;
  temp_f2_2 = (0, temp_f0 - temp_f1);
  temp_f4 = temp_f0 + temp_f1;
  if (temp_f1 < lbl_805DFB1C)
  {
    var_f0 = (temp_f4 - temp_f2_2) / lbl_805DFCDC;
  }
  else
  {
    var_f0 = lbl_805DFB1C;
  }
  new_var2 = ((s8 *) ((0, arg1))) + 0x90;
  *((f32 *) (((s8 *) arg1) + 0x18)) = temp_f2_2;
  temp_f1_2 = temp_f2_2 + var_f0;
  temp_f0_2 = temp_f4 - var_f0;
  *((f32 *) (((s8 *) arg1) + 0)) = temp_f2_2;
  *((f32 *) (((s8 *) arg1) + 0x48)) = temp_f1_2;
  *((f32 *) (((s8 *) arg1) + 0x30)) = temp_f1_2;
  new_var = (s8 *) arg1;
  *((f32 *) (((s8 *) arg1) + 0x78)) = temp_f0_2;
  *((f32 *) (((s8 *) arg1) + 0x60)) = temp_f0_2;
  *((f32 *) (new_var + 0xA8)) = temp_f4;
  *((f32 *) new_var2) = temp_f4;
}

void copy_point_table__9TWindowDDFPvi(Dst_80348A9C *self, s32 idx) {
    s32 i;
    Src_80348A9C *s = TWindowDD__data_805434E8[idx];
    for (i = 0; i < 8; i++) {
        self->x = s->x;
        self->y = s->y;
        s++;
        self++;
    }
}

#pragma push
#pragma fp_contract on
f32 TWindowDD__sub_80348AD4(f32 farg0, f32 farg1) {
    return lbl_805DFCE0 / ((lbl_805DFCE4 * farg1) + farg0);
}
#pragma pop

s32 get_draw_count__9TWindowDDFPv(void **arg0) {
    return **(s32 **)((s8 *)(*(void **)((s8 *)(*arg0) + 0x20)) + 0xC);
}

extern s32 TWindowDD__ws_data_table;
extern s32 twindowdd_entry_count;

#pragma push
#pragma fp_contract on
void calc_inner_rect__9TWindowDDFPvPv(u8 *arg0, u8 *arg1) {
    f32 y0;
    f32 ky;
    f32 x0;
    f32 x;
    f32 y;
    f32 w;
    f32 h;
    x = *(f32 *)((s8 *)arg0 + 0x40);
    y = *(f32 *)((s8 *)arg0 + 0x44);
    ky = lbl_805DFB5C;
    x0 = x + TWindowDD__data_805DFB58;
    w = *(f32 *)((s8 *)arg0 + 0x48);
    h = *(f32 *)((s8 *)arg0 + 0x4C);
    y0 = y + ky;
    *(f32 *)((s8 *)arg1 + 0x10) = x0;
    *(f32 *)((s8 *)arg1 + 0x14) = y0;
    *(f32 *)((s8 *)arg1 + 0x18) = w - lbl_805DFCD4 * TWindowDD__data_805DFB58;
    *(f32 *)((s8 *)arg1 + 0x1C) = h - lbl_805DFCD4 * ky;
    *(f32 *)((s8 *)arg1 + 0x3C) = x0;
    *(f32 *)((s8 *)arg1 + 0x40) = y0;
    *(f32 *)((s8 *)arg1 + 0x44) = (x + w) - TWindowDD__data_805DFB58;
    *(f32 *)((s8 *)arg1 + 0x48) = (y + h) - ky;
    *(f32 *)((s8 *)arg1 + 0x20) = TWindowDD__data_805DFCD8 * w + x;
    *(f32 *)((s8 *)arg1 + 0x24) = TWindowDD__data_805DFCD8 * h + y;
}
#pragma pop

s32 TWindowDD__sub_80348B70(s16 arg0) {
    s32 *t = TWindowDD__player_name_buffers;
    if (arg0 >= 0x68C && arg0 <= 0x697) {
        return t[arg0 - 0x68C];
    }
    if (arg0 == 0x698) {
        return 0;
    }
    return TWindowDD__data_805D6E28[lbl_805D6E34[arg0]];
}

s32 get_entry__9TWindowDDFi(s32 arg0) {
    if ((arg0 < 0) || (arg0 >= (s32) twindowdd_entry_count)) {
        return 0;
    }
    return TWindowDD__ws_data_table + (arg0 * 8);
}

}
