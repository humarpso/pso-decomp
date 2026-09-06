#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
extern f32 lbl_805DCA04;
extern f32 lbl_805DCA08;
extern f32 lbl_805DCA0C;
f32 TAdSinglePlyChrSelectGC__sub_80242AC0(s16 *arg0);
extern f32 lbl_805DCA04;
extern f32 lbl_805DCA08;
extern f32 lbl_805DCA0C;
f32 TAdSinglePlyChrSelectGC__sub_80242A60(s16 *arg0);
}

extern "C" {

void TAdSinglePlyChrSelectGC__sub_80242B24(void* p);
void TLobby__sub_80242918(void);
void clear_flag_bit2__6TLobbyFv(void);
s32 get_id__6TLobbyFPv(void* p);
void* get_sub_disp_ptr__20TWindowSubStatusDispFPv(void* p);

s32 get_id__6TLobbyFPv(void* p) { return *(s32*)((char*)p + 0x0); }

extern u16 lbl_805D63FC;

void TLobby__sub_80242918(void) {
    lbl_805D63FC |= 4;
}

extern u16 lbl_805D63FC;

void clear_flag_bit2__6TLobbyFv(void) {
    lbl_805D63FC &= 0xFFFFFFFB;
}

f32 TAdSinglePlyChrSelectGC__sub_80242A60(s16 *arg0) {
  float new_var;
  s16 temp_r3;
  temp_r3 = *arg0;
  if (temp_r3 <= 0)
  {
    return (*(const f32 *)&lbl_805DCA04);
  }
  if (temp_r3 >= 0x80)
  {
    return (*(const f32 *)&lbl_805DCA08);
  }
  new_var = (*(const f32 *)&lbl_805DCA08) * ((f32) temp_r3);
  return new_var * (*(const f32 *)&lbl_805DCA0C);
}

f32 TAdSinglePlyChrSelectGC__sub_80242AC0(s16 *arg0) {
  s16 temp_r0;
  float new_var;
  temp_r0 = *arg0;
  if (temp_r0 >= 0x100)
  {
    return lbl_805DCA04;
  }
  if (temp_r0 <= 0x80)
  {
    return lbl_805DCA08;
  }
  new_var = lbl_805DCA08 * ((f32) (0x100 - temp_r0));
  return new_var * lbl_805DCA0C;
}

void TAdSinglePlyChrSelectGC__sub_80242B24(void* p) { *(s16*)((char*)p + 0x0) = 0; }

}
