#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredGlobal_800E8128_lbl_80496704 {
    M2C_UNK value;
    u8 remaining[0x8];
};

struct RecoveredGlobal_800E8128_lbl_80496710 {
    M2C_UNK value;
    u8 remaining[0x8];
};

struct RecoveredGlobal_800E8128_lbl_80501010 {
    M2C_UNK value;
    u8 remaining[0x3C];
};

struct RecoveredGlobal_800E80C0_lbl_80501010 {
    M2C_UNK value;
    u8 remaining[0x3C];
};

extern "C" {
M2C_UNK TObjPlayer__sub_800E81B4(void *);
M2C_UNK TObjPlayer__sub_800E82B8(void *, void *, void *, f32);
M2C_UNK TObjPlayer__sub_800E841C();
extern const f32 lbl_805DA68C;
extern const f32 lbl_805DA690;
extern const f32 lbl_805DA694;
extern const f32 lbl_805DA698;
extern const f32 lbl_805DA69C;
void TObjPlayer__sub_800E84F8(u8 *arg0);
void TCameraCtrl__sub_80069148(s32, s32);
extern RecoveredGlobal_800E8128_lbl_80496704 lbl_80496704;
extern RecoveredGlobal_800E8128_lbl_80496710 lbl_80496710;
extern RecoveredGlobal_800E8128_lbl_80501010 lbl_80501010;
extern int lbl_805D52B4;
void TObjPlayer__sub_800E8128(void);
void TObjPlayer__sub_800E80E8(void *, void *);
extern RecoveredGlobal_800E8128_lbl_80501010 lbl_80501010;
void TObjPlayer__sub_800E80C0(u8 *arg0);
}

extern "C" {

void TObjPlayer__sub_800E81A8(void);

    extern int lbl_805D52B4;

typedef char RecoveredGlobal_800E8128_lbl_80496704_size[sizeof(RecoveredGlobal_800E8128_lbl_80496704) == 0xC ? 1 : -1];
typedef char RecoveredGlobal_800E8128_lbl_80496710_size[sizeof(RecoveredGlobal_800E8128_lbl_80496710) == 0xC ? 1 : -1];
typedef char RecoveredGlobal_800E8128_lbl_80501010_size[sizeof(RecoveredGlobal_800E8128_lbl_80501010) == 0x40 ? 1 : -1];

typedef char RecoveredGlobal_800E80C0_lbl_80501010_size[sizeof(RecoveredGlobal_800E80C0_lbl_80501010) == 0x40 ? 1 : -1];
void TObjPlayer__sub_800E80C0(u8 *arg0) {
    TObjPlayer__sub_800E80E8(arg0, &(*(RecoveredGlobal_800E80C0_lbl_80501010 *)&lbl_80501010).value);
}

void TObjPlayer__sub_800E8128(void) {
    if ((s32) (*(s32 *)&lbl_805D52B4) == 7) {
        TCameraCtrl__sub_80069148((s32) &lbl_80496704.value, (s32) &lbl_80501010.value);
    }
    if (((s32) (*(s32 *)&lbl_805D52B4) >= 4) && ((s32) (*(s32 *)&lbl_805D52B4) < 8)) {
        TCameraCtrl__sub_80069148((s32) &lbl_80496710.value, (s32) ((u8 *)&lbl_80501010.value + (((*(s32 *)&lbl_805D52B4) - 4) * 0xC) + 0xC));
    }
    (*(s32 *)&lbl_805D52B4) += 1;
}

void TObjPlayer__sub_800E81A8(void) { lbl_805D52B4 = 0; }
void TObjPlayer__sub_800E84F8(u8 *arg0) {
  f32 temp_f1;
  f32 temp_f3;
  TObjPlayer__sub_800E841C();
  if (((s32) (*((s32 *) (((s8 *) arg0) + 0x378)))) != 0)
  {
    temp_f3 = *((f32 *) (((s8 *) arg0) + 0xC0));
    temp_f1 = lbl_805DA68C;
    if (temp_f3 < temp_f1)
    {
      TObjPlayer__sub_800E82B8((void *) arg0, (void *) ((*((s32 *) (((s8 *) arg0) + 0x374))) + 0x38), (void *) (arg0 + 0x38), (f32) (temp_f3 / temp_f1));
    }
    else
      if ((temp_f3 >= lbl_805DA690) && (temp_f3 < lbl_805DA694))
    {
      TObjPlayer__sub_800E82B8((void *) arg0, (void *) (arg0 + 0x38), (void *) ((*((s32 *) (((s8 *) arg0) + 0x374))) + 0x38), (f32) ((temp_f3 - lbl_805DA690) / temp_f1));
    }
  }
  temp_f1 = *((f32 *) (((s8 *) arg0) + 0xC0));
  if ((temp_f1 >= lbl_805DA698) && (temp_f1 < lbl_805DA69C))
  {
    TObjPlayer__sub_800E81B4((void *) arg0);
  }
}

}
