#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
f32 get_random_float__8TObjFishFv(f32);
extern const f32 lbl_805D901C;
void TCameraCtrl__sub_8006BD64(f32 *arg0, f32 *arg1, f32 *arg2, f32 farg0);
f32 get_random_float__8TObjFishFv(f32);
void TCameraCtrl__sub_8006BD64(f32 *arg0, f32 *arg1, f32 *arg2, f32 farg0);
extern const f32 lbl_805D9018;
s32 TCameraCtrl__sub_8006BCD8(f32 *arg0, f32 *arg1, f32 farg0);
f32 get_ad_end_text_start__10TObjPlayerFv(f64, f64);
f32 TObjPlayer__sub_8001978C(f32);
extern const f64 lbl_804383D0;
void TCameraCtrl__sub_8006BE00(u8 *arg0, s32 *arg1, s32 *arg2);
}

extern "C" {

void *TCameraCtrl__vt5(void);
void cache_target_and_forward__11TCameraCtrlFii(s32 arg0, s32 arg1);
s32 clamp_distance__11TCameraCtrlFiii(s32 arg0, s32 arg1, s32 arg2);
void* init_defaults__11TCameraCtrlFPv(void* a0);
int TCameraCtrl__sub_80068714(void);
M2C_UNK TCameraCtrl__sub_8006C140(s32, s32);
s32 TObjPlayer__sub_80141F84(s32, s32);
s32 TObjPlayer__sub_801423A4(s32, s32, s32);
void *__nw__7TObjectFUl(int);
void *reset__11TCameraCtrlFPv(void *);

    extern unsigned char lbl_80488B38[];
    extern const float lbl_805D900C;
void* init_defaults__11TCameraCtrlFPv(void* a0) { TCameraCtrl__sub_80068714(); *(int*)((char*)a0 + 0x18) = (int)lbl_80488B38; *(float*)((char*)a0 + 0x6c) = lbl_805D900C; *(int*)((char*)a0 + 0x38) = 0; return a0; }

s32 TCameraCtrl__sub_8006BCD8(f32 *arg0, f32 *arg1, f32 farg0) {
  f32 temp_f0;
  f32 new_var;
  f32 temp_f1;
  temp_f1 = get_random_float__8TObjFishFv((*arg0) - (*arg1));
  temp_f0 = (lbl_805D9018 * temp_f1) * (new_var = farg0);
  if (temp_f1 > temp_f0)
  {
    TCameraCtrl__sub_8006BD64((f32 *)((void *) arg0), (f32 *)((void *) arg1), (f32 *)((void *) arg0), (f32) temp_f0);
    return 0;
  }
  *arg0 = *arg1;
  return 1;
}

void TCameraCtrl__sub_8006BD64(f32 *arg0, f32 *arg1, f32 *arg2, f32 farg0) {
    f32 temp_f1;
    f32 temp_f1_2;
    temp_f1 = get_random_float__8TObjFishFv(*arg0 - *arg1);
    if ((lbl_805D901C == temp_f1) || (temp_f1 <= farg0)) {
        *arg2 = *arg1;
        return;
    }
    temp_f1_2 = *arg0;
    if (temp_f1_2 < *arg1) {
        *arg2 = temp_f1_2 + farg0;
        return;
    }
    *arg2 = temp_f1_2 - farg0;
}

void TCameraCtrl__sub_8006BE00(u8 *arg0, s32 *arg1, s32 *arg2) {
  f32 new_var;
  f32 temp_f0;
  f32 temp_f1;
  *arg2 = (s32) (lbl_804383D0 * get_ad_end_text_start__10TObjPlayerFv(-(*((f32 *) (((s8 *) arg0) + 0))), -(*((f32 *) (((s8 *) arg0) + 8)))));
  temp_f1 = *((f32 *) (((s8 *) arg0) + 0));
  temp_f0 = *((f32 *) (((s8 *) arg0) + 8));
  new_var = TObjPlayer__sub_8001978C((temp_f1 * temp_f1) + (temp_f0 * temp_f0));
  *arg1 = (s32) (lbl_804383D0 * get_ad_end_text_start__10TObjPlayerFv((f64) (*((f32 *) (((s8 *) arg0) + 4))), new_var));
}

s32 clamp_distance__11TCameraCtrlFiii(s32 arg0, s32 arg1, s32 arg2) {
    if (TObjPlayer__sub_80141F84(arg1, arg0) < (s32) (arg2 * 0x7F)) {
        return arg1;
    }
    return TObjPlayer__sub_801423A4(arg0, arg1, arg2 * 0x7F);
}

extern void *lbl_805D4DF0;
extern s32 lbl_805D4E18;
extern s32 lbl_805D4E1C;

void cache_target_and_forward__11TCameraCtrlFii(s32 arg0, s32 arg1) {
    if ((void *) lbl_805D4DF0 != NULL) {
        lbl_805D4E18 = M2C_FIELD(lbl_805D4DF0, s32 *, 0x19C);
        lbl_805D4E1C = arg1;
    }
    TCameraCtrl__sub_8006C140(arg0, arg1);
}

void *TCameraCtrl__vt5(void) {
    void *o = __nw__7TObjectFUl(0xA4);
    if (o != NULL) {
        o = reset__11TCameraCtrlFPv(o);
    }
    return o;
}

}
