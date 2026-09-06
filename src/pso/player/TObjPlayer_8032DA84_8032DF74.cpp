#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
u32 TBoss4Type2__sub_800874F4(void *, int);
M2C_UNK TTecLuker__sub_8008764C(u32, int);
void TObjPlayer__sub_8032E058(u8 *arg0);
M2C_UNK set_position_xy__10TObjPlayerFPvff(u32, f32, f32);
u32 TObjParticle__sub_800870BC(void *, void *, int, int);
M2C_UNK TObjEneDellBiter__sub_80087350(void *, int);
M2C_UNK TTecLuker__sub_8008764C(u32, int);
extern const f32 lbl_805DF7E8;
void TObjPlayer__sub_8032E0A4(u8 *arg0);
u8 *TPhotonMylla__sub_80154CB4(u16);
void TObjPlayer__sub_8032DF74(u8 *arg0);
}

extern "C" {

int TObjPlayer__sub_8032DFF8(void);
void TObjPlayer__sub_8032E054(void);

void TObjPlayer__sub_8032DF74(u8 *arg0) {
  u16 temp_r3;
  u8 *temp_r3_2;
  temp_r3 = *((u16 *) (((s8 *) arg0) + 0x34));
  if (temp_r3 != ((-1U) & 0xFFFFu))
  {
    if (TPhotonMylla__sub_80154CB4(temp_r3) != 0)
    {
      temp_r3_2 = (u8 *) ((*((s32 *) (((s8 *) (*((u8 **) (((s8 *) arg0) + 0x28)))) + 0xA4))) + ((*((s32 *) (((s8 *) arg0) + 0x2C))) * 0x2C));
      *((f32 *) (((s8 *) arg0) + 0x64)) = (f32) ((*((f32 *) (((s8 *) temp_r3_2) + 0x1C))) - (*((f32 *) (((s8 *) arg0) + 0x44))));
      *((f32 *) (((s8 *) arg0) + 0x68)) = (f32) ((*((f32 *) (((s8 *) temp_r3_2) + 0x20))) - (*((f32 *) (((s8 *) arg0) + 0x48))));
      *((f32 *) (((s8 *) arg0) + 0x6C)) = (f32) ((*((f32 *) (((s8 *) temp_r3_2) + 0x24))) - (*((f32 *) (((s8 *) arg0) + 0x4C))));
    }
  }
}

int TObjPlayer__sub_8032DFF8(void) { return 0; }

void TObjPlayer__sub_8032E054(void) {  }
#pragma push
#pragma fp_contract on
void TObjPlayer__sub_8032E058(u8 *arg0) {
    M2C_FIELD(arg0, u32 *, 0x24) = TBoss4Type2__sub_800874F4((void *) (arg0 + 0x64), (int) (0x1B6));
    if ((u32) M2C_FIELD(arg0, u32 *, 0x24) != 0U) {
        TTecLuker__sub_8008764C(M2C_FIELD(arg0, u32 *, 0x24), (int) (-0x78));
    }
}
#pragma pop

#pragma push
#pragma fp_contract on
void TObjPlayer__sub_8032E0A4(u8 *arg0) {
    u32 p;
    u32 q;
    M2C_FIELD(arg0, u32 *, 0x1C) = TObjParticle__sub_800870BC((void *) (arg0 + 0x64), (void *) (arg0 + 0x54), (int) (0x1B9), (int) (0x104));
    p = M2C_FIELD(arg0, u32 *, 0x1C);
    if (p != 0U) {
        set_position_xy__10TObjPlayerFPvff(p, (f32) (lbl_805DF7E8), (f32) (lbl_805DF7E8));
        q = M2C_FIELD(arg0, u32 *, 0x50);
        if (q != 0U) {
            TTecLuker__sub_8008764C((u32)(M2C_FIELD(arg0, u32 *, 0x1C)), (int)(q));
        }
    }
    TObjEneDellBiter__sub_80087350((void *) (arg0 + 0x64), (int) (0x30));
}
#pragma pop

}
