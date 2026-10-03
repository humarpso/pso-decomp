#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
M2C_UNK TBoss4Type2__sub_80055300();
extern const f32 TBoss4Type2__data_805D8BAC;
void TBoss4Type2__vt19(u8 *arg0);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
f64 get_ad_end_text_start__10TObjPlayerFv(f32, f32);
f32 sin_table_lookup(int);
f32 cos_table_lookup(int);
f32 vector_length(void *);
M2C_UNK subtract_vector(void *, void *);
M2C_UNK normalize_vector(void *);
extern const f64 TBoss4Type2__data_80437750;
extern const f32 lbl_805D8BA0;
extern const f32 TBoss4Type2__data_805D8BAC;
extern const f32 lbl_805D8BD0;
extern const f32 TBoss4Type2__data_805D8BD8;
void TBoss4Type2__vt13(u8 *arg0);
}

extern "C" {

void TBoss4Type2__vt14(void);
void TBoss4Type2__vt20(void);
void TBoss4Type2__vt22(void *arg0);
void TBoss4Type2__vt23(void *arg0);
void TBoss4Type2__vt24(void *arg0);
void TBoss4Type2__vt25(void *arg0);
void TBoss4Type2__vt28(void *arg0);
void TBoss4Type2__vt31(void *arg0);
M2C_UNK TBoss4Type2__sub_80056A54(void *);
M2C_UNK TBoss4Type2__sub_80056F90(void *, M2C_UNK, s32);
M2C_UNK TBoss4Type2__sub_80057048(void *, M2C_UNK);
s32 TBoss4Type2__sub_80057224(void *);
f32 calc_boss4_scale__10TObjPlayerFi();

void TBoss4Type2__vt24(void *arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x398) - 1;
    M2C_FIELD(arg0, s32 *, 0x398) = temp_r0;
    if (temp_r0 < 0) {
        TBoss4Type2__sub_80057048(arg0, 1);
    }
}

extern f32 lbl_805D8BB0;

void TBoss4Type2__vt23(void *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x398) == 0) {
        if (calc_boss4_scale__10TObjPlayerFi() < lbl_805D8BB0) {
            TBoss4Type2__sub_80056A54(arg0);
            return;
        }
        TBoss4Type2__sub_80056F90(arg0, 4, TBoss4Type2__sub_80057224(arg0));
    }
}

extern const f32 TBoss4Type2__data_805D8BAC;

void TBoss4Type2__vt31(void *arg0) {
    M2C_FIELD(arg0, f32 *, 0x3E8) = (f32) TBoss4Type2__data_805D8BAC;
    M2C_FIELD(arg0, s32 *, 0x398) = 0x12C;
}

extern const f32 TBoss4Type2__data_805D8BAC;

void TBoss4Type2__vt28(void *arg0) {
    M2C_FIELD(arg0, f32 *, 0x3E8) = (f32) TBoss4Type2__data_805D8BAC;
    M2C_FIELD(arg0, s32 *, 0x398) = 0xE1;
}

extern const f32 TBoss4Type2__data_805D8BAC;

void TBoss4Type2__vt25(void *arg0) {
    M2C_FIELD(arg0, f32 *, 0x3E8) = (f32) TBoss4Type2__data_805D8BAC;
    M2C_FIELD(arg0, s32 *, 0x398) = 0x96;
}

extern const f32 TBoss4Type2__data_805D8BAC;

void TBoss4Type2__vt22(void *arg0) {
    M2C_FIELD(arg0, f32 *, 0x3E8) = (f32) TBoss4Type2__data_805D8BAC;
    M2C_FIELD(arg0, s32 *, 0x398) = 0x4B;
}

void TBoss4Type2__vt20(void) {  }

void TBoss4Type2__vt19(u8 *arg0) {
    M2C_FIELD(arg0, f32 *, 0x3E8) = (f32) (*(const f32 *)&TBoss4Type2__data_805D8BAC);
    TBoss4Type2__sub_80055300();
    M2C_FIELD(arg0, s32 *, 0x398) = 0x96;
}

void TBoss4Type2__vt14(void) {  }
void TBoss4Type2__vt13(u8 *arg0) {
  s32 temp_r31;
  s32 var_r31;
  VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x3F8), (void *) (arg0 + 0x3B4));
  subtract_vector((void *) (arg0 + 0x3F8), (void *) (arg0 + 0x38));
  *((f32 *) (((s8 *) arg0) + 0x3FC)) = (f32) TBoss4Type2__data_805D8BAC;
  if (vector_length((void *) (arg0 + 0x3F8)) <= lbl_805D8BA0)
  {
    *((f32 *) (((s8 *) arg0) + 0x3F8)) = (f32) TBoss4Type2__data_805D8BD8;
    *((f32 *) (((s8 *) arg0) + 0x3FC)) = (f32) TBoss4Type2__data_805D8BAC;
    *((f32 *) (((s8 *) arg0) + 0x400)) = (f32) TBoss4Type2__data_805D8BAC;
  }
  else
  {
    normalize_vector((void *) (arg0 + 0x3F8));
  }
  var_r31 = (s32) (TBoss4Type2__data_80437750 * get_ad_end_text_start__10TObjPlayerFv((f32) (*((f32 *) (((s8 *) arg0) + 0x3F8))), (f32) (*((f32 *) (((s8 *) arg0) + 0x400)))));
  temp_r31 = var_r31;
  if (((*((s32 *) (((s8 *) arg0) + 0x374))) - 6) == 0)
  {
    var_r31 = temp_r31 + 0x4000;
  }
  else
  {
    var_r31 = 0x4000;
    var_r31 = temp_r31 - var_r31;
  }
  *((f32 *) (((s8 *) arg0) + 0x404)) = sin_table_lookup((int) var_r31);
  *((f32 *) (((s8 *) arg0) + 0x40C)) = cos_table_lookup((int) var_r31);
  *((f32 *) (((s8 *) arg0) + 0x408)) = (f32) TBoss4Type2__data_805D8BAC;
  VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x410), (void *) (arg0 + 0x38));
  *((f32 *) (((s8 *) arg0) + 0x414)) = (f32) TBoss4Type2__data_805D8BAC;
  normalize_vector((void *) (arg0 + 0x410));
  *((f32 *) (((s8 *) arg0) + 0x410)) = (f32) ((*((f32 *) (((s8 *) arg0) + 0x410))) * lbl_805D8BD0);
  *((f32 *) (((s8 *) arg0) + 0x418)) = (f32) ((*((f32 *) (((s8 *) arg0) + 0x418))) * lbl_805D8BD0);
  *((s32 *) (((s8 *) arg0) + 0x398)) = 0x96;
}

}
