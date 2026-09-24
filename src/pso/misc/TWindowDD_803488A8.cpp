#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Src_80348A9C { f32 x; f32 y; };

struct Dst_80348A9C { u8 pad[0xc]; f32 x; f32 y; u8 pad2[4]; };

extern "C" {
extern f32 lbl_805DFB1C;
extern f32 TWindowDD__data_805DFCD8;
extern f32 lbl_805DFCDC;
void TWindowDD__sub_80348A2C(void *arg0, void *arg1);
extern const f32 lbl_805DFCE0;
extern const f32 lbl_805DFCE4;
f32 TWindowDD__sub_80348AD4(f32 farg0, f32 farg1);
extern Src_80348A9C TWindowDD__data_805434E8[][8];
void TWindowDD__sub_80348A9C(Dst_80348A9C *self, s32 idx);
}

extern "C" {

typedef struct { char pad[0xBC]; } Buf;

void append_string__9TWindowDDFiiPv(s32 arg0, s32 arg1, s32 *arg2);
void draw__9TWindowDDFPviif(void *arg0, s32 arg1, s32 arg2, f32 farg0);
s32 get_draw_count__9TWindowDDFPv(void **arg0);
s32 get_entry__9TWindowDDFi(s32 arg0);
M2C_UNK TWindowDD__sub_803403F8(Buf *, M2C_UNK);
s32 TWindowDD__sub_803485F4(s32, s32 *);
M2C_UNK TWindowDD__sub_803489B8(s32, Buf *, M2C_UNK);
M2C_UNK draw_transformed_primitive__9TWindowDDFPvPvPvPv(Buf *, M2C_UNK, s32, M2C_UNK);
s32 strlen();
M2C_UNK strncpy(s32, s32, s32);

void append_string__9TWindowDDFiiPv(s32 arg0, s32 arg1, s32 *arg2) {
    s32 temp_r31;

    if (arg0 != 0) {
        temp_r31 = strlen();
        if (TWindowDD__sub_803485F4(temp_r31, arg2) != 0) {
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
    TWindowDD__sub_80348AD4(M2C_FIELD(arg0, f32 *, 0x54), farg0);
    TWindowDD__sub_803403F8(&sp8, -1);
    TWindowDD__sub_80348A9C((Dst_80348A9C *)(&sp8), (s32)(arg2));
    TWindowDD__sub_80348A2C((void *)(arg1), (void *)(&sp8));
    TWindowDD__sub_803489B8(arg1, &sp8, 0);
    draw_transformed_primitive__9TWindowDDFPvPvPvPv(&sp8, 8, temp_r31, 1);
}

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

void TWindowDD__sub_80348A9C(Dst_80348A9C *self, s32 idx) {
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
    return *M2C_FIELD(M2C_FIELD(*arg0, void **, 0x20), s32 **, 0xC);
}

extern s32 TWindowDD__data_805D6E30;
extern s32 lbl_805D6E3C;

s32 get_entry__9TWindowDDFi(s32 arg0) {
    if ((arg0 < 0) || (arg0 >= (s32) lbl_805D6E3C)) {
        return 0;
    }
    return TWindowDD__data_805D6E30 + (arg0 * 8);
}

}
