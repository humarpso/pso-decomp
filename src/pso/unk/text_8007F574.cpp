#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;

struct E_8007F574 { s32 a; f32 b; };

struct O_8007F574 { u8 pad[0x40]; s32 x40; E_8007F574 e[4]; };

extern "C" {
f32 get_random_float__8TObjFishFv();
s32 __cvt_fp2unsigned(f32, f32);
M2C_UNK TBoss8Dragon__sub_803D64C0(int);
extern const f32 lbl_805D929C;
extern const f32 lbl_805D92C0;
extern const f32 lbl_805D92C4;
extern const f32 lbl_805D92C8;
void fn_8007F5A4(u8 *arg0);
extern const f32 lbl_805D92B8;
void fn_8007F574(O_8007F574 *self);
}

extern "C" {

#pragma fp_contract on

void fn_8007F574(O_8007F574 *self) {
    s32 i;
    self->x40 = 0;
    for (i = 0; i < 4; i++) {
        self->e[i].a = -1;
        self->e[i].b = lbl_805D92B8;
    }
}

void fn_8007F5A4(u8 *arg0) {
  int new_var;
  s32 temp_r3;
  s32 temp_r3_2;
  TBoss8Dragon__sub_803D64C0((int) ((*((s32 *) (((s8 *) arg0) + 0x3C))) << 0xB));
  temp_r3 = __cvt_fp2unsigned((f32) ((lbl_805D92C4 * get_random_float__8TObjFishFv()) + lbl_805D92C0), (f32) lbl_805D92C4);
  new_var = ~0xFF000000;
  *((s32 *) (((s8 *) arg0) + 0x34)) = (s32) (((((temp_r3 << 0x10) & 0xFF0000) & new_var) | (temp_r3 << 0x18)) | 0xFFFF);
  TBoss8Dragon__sub_803D64C0((int) ((*((s32 *) (((s8 *) arg0) + 0x3C))) << 7));
  temp_r3_2 = __cvt_fp2unsigned((f32) ((lbl_805D92C8 * (lbl_805D929C - get_random_float__8TObjFishFv())) + lbl_805D92C0), (f32) lbl_805D92C8);
  *((s32 *) (((s8 *) arg0) + 0x38)) = (s32) (((((((temp_r3_2 << 0x10) & 0xFF0000) & new_var) | (temp_r3_2 << 0x18)) & (~0xFF00)) | ((temp_r3_2 << 8) & 0xFF00)) | 0xFF);
  *((s32 *) (((s8 *) arg0) + 0x3C)) = (s32) ((*((s32 *) (((s8 *) arg0) + 0x3C))) + 1);
}

}
