#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
s32 TBoss4Type2__sub_80141FA8(int);
extern const f32 lbl_805DF17C;
void TBoss8Dragon__sub_8030B818(u8 *arg0);
}

extern "C" {

int TBoss8Dragon__sub_8030B80C(void);
void update_toggle_state__12TBoss8DragonFPv(void *arg0);
s32 TBoss8Dragon__sub_802F3638();
M2C_UNK TObjPlayer__sub_80082CBC(void *);
M2C_UNK TObjPlayer__sub_80082CCC(void *);

    extern int lbl_805D53A0;
int TBoss8Dragon__sub_8030B80C(void) {  return (lbl_805D53A0 & 0xffff); }

void TBoss8Dragon__sub_8030B818(u8 *arg0) {
  s32 temp_r0;
  s32 var_r3;
  s32 new_var;
  new_var = TBoss4Type2__sub_80141FA8((int) (*((s32 *) (((s8 *) arg0) + 0x28))));
  temp_r0 = (s32) (((f32) new_var) * lbl_805DF17C);
  if (temp_r0 < (-0x280))
  {
    var_r3 = -0x280;
  }
  else
  {
    var_r3 = 0x280;
    if (temp_r0 < 0x280)
    {
      var_r3 = temp_r0;
    }
  }
  *((s32 *) (((s8 *) arg0) + 0x28)) = (s32) ((*((s32 *) (((s8 *) arg0) + 0x28))) + var_r3);
}

void update_toggle_state__12TBoss8DragonFPv(void *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 0x4C) >= TBoss8Dragon__sub_802F3638()) {
        if ((s32) M2C_FIELD(arg0, s32 *, 0x20) == 1) {
            if ((u32) M2C_FIELD(arg0, u32 *, 0x50) != 0U) {
                TObjPlayer__sub_80082CBC(M2C_FIELD(arg0, void **, 0x50));
            }
            M2C_FIELD(arg0, s32 *, 0x20) = 0;
        }
    } else if ((s32) M2C_FIELD(arg0, s32 *, 0x20) == 0) {
        if ((u32) M2C_FIELD(arg0, u32 *, 0x50) != 0U) {
            TObjPlayer__sub_80082CCC(M2C_FIELD(arg0, void **, 0x50));
        }
        M2C_FIELD(arg0, s32 *, 0x20) = 1;
    }
}

}
