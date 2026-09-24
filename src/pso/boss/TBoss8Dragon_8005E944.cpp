#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct E_8005E9D8 { s32 a; s32 b; };

struct O_8005E9D8 { u8 pad[8]; E_8005E9D8 e[1]; };

extern "C" {
s32 calc_product__12TBoss8DragonFiiii(void *, void *, int, int);
void TBoss8Dragon__sub_8005EB6C(s32 arg0, u8 *arg1, s32 arg2);
f64 get_ad_end_text_start__10TObjPlayerFv(f32, f32);
s32 TBoss8Dragon__sub_8005E9E8(void *, void *, int);
f32 TBoss8Dragon__sub_803D64C0(int);
f32 TBoss8Dragon__sub_803D64DC(int);
extern const f64 lbl_80437EB0;
void TBoss8Dragon__sub_8005EBDC(u8 *arg0, u8 *arg1, u8 *arg2);
f32 TBoss8Dragon__sub_8005EA5C(int, f32, f32);
f32 TBoss8Dragon__sub_8005EAD0(void *arg0, void *arg1, int arg2);
s32 TBoss8Dragon__sub_8005E9D8(void *self, O_8005E9D8 *o, s32 i);
}

extern "C" {

s32 TBoss8Dragon__sub_8005E9D8(void *self, O_8005E9D8 *o, s32 i) {
    return o->e[i].a;
}

#pragma push
#pragma scheduling off
f32 TBoss8Dragon__sub_8005EAD0(void *arg0, void *arg1, int arg2) {
  u8 *temp_r4;
  temp_r4 = (u8 *)arg1 + (arg2 * 8);
  return TBoss8Dragon__sub_8005EA5C((int)arg0, (f32) (*((f32 *) (((s8 *) temp_r4) + 0x28))), (f32) (*((f32 *) (((s8 *) temp_r4) + 0x2C))));
}

#pragma pop

void TBoss8Dragon__sub_8005EB6C(s32 arg0, u8 *arg1, s32 arg2) {
    f32 temp_f1;
    temp_f1 = TBoss8Dragon__sub_8005EAD0((void *)arg0, (void *)arg2, 1);
    M2C_FIELD(arg1, f32 *, 0xC) = (f32) (temp_f1 * temp_f1);
    M2C_FIELD(arg1, f32 *, 8) = TBoss8Dragon__sub_8005EAD0((void *)arg0, (void *)arg2, 0);
    M2C_FIELD(arg1, s32 *, 4) = calc_product__12TBoss8DragonFiiii((void *) (arg0), (void *) (arg2), (int) (0), (int) (1));
}
void TBoss8Dragon__sub_8005EBDC(u8 *arg0, u8 *arg1, u8 *arg2) {
    f32 temp_f31;
    s32 temp_r31;
    s32 temp_r3;
    temp_r3 = TBoss8Dragon__sub_8005E9E8((void *) (arg0), (void *) (arg2), (int) (0));
    switch (temp_r3) {
    case 0:
        temp_r31 = (s32) (lbl_80437EB0 * get_ad_end_text_start__10TObjPlayerFv((f32) (M2C_FIELD(arg0, f32 *, 0x38)), (f32) (M2C_FIELD(arg0, f32 *, 0x40))));
        temp_f31 = TBoss8Dragon__sub_8005EAD0((void *)arg0, (void *)arg2, 1);
        M2C_FIELD(arg1, f32 *, 4) = (f32) (temp_f31 * TBoss8Dragon__sub_803D64C0((int) (temp_r31)));
        M2C_FIELD(arg1, f32 *, 8) = (f32) (temp_f31 * TBoss8Dragon__sub_803D64DC((int) (temp_r31)));
        break;
    case 1:
        M2C_FIELD(arg1, f32 *, 4) = TBoss8Dragon__sub_8005EAD0((void *)arg0, (void *)arg2, 1);
        M2C_FIELD(arg1, f32 *, 8) = TBoss8Dragon__sub_8005EAD0((void *)arg0, (void *)arg2, 2);
        break;
    }
    M2C_FIELD(arg1, f32 *, 0xC) = TBoss8Dragon__sub_8005EAD0((void *)arg0, (void *)arg2, 0);
    M2C_FIELD(arg1, s32 *, 0x10) = TBoss8Dragon__sub_8005E9E8((void *) (arg0), (void *) (arg2), (int) (1));
}

}
