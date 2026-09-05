#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
M2C_UNK set_evp__12TItemProUnitFPvf(int, f32);
extern const f32 lbl_805DAD80;
void TObjPlayer__sub_80126798(u8 *arg0);
M2C_UNK set_evp__12TItemProUnitFPvf(int, f32);
extern const f32 lbl_805E025C;
void TObjPlayer__sub_80362C54(u8 *arg0);
extern M2C_UNK __vt__14TObjEneEpsilon[];
extern M2C_UNK TObjPlayer__sub_800D7C58[];
extern M2C_UNK init_and_activate__10TObjPlayerFPv[];
extern void *lbl_805D4468;
extern M2C_UNK lbl_804F26E0[];
void TObjPlayer__sub_80362C54(u8 *arg0);
extern M2C_UNK lbl_804F26E0[];
void TObjPlayer__sub_80126798(u8 *arg0);
}

extern "C" {

void TObjPlayer__sub_80126798(u8 *arg0) {
    set_evp__12TItemProUnitFPvf((int) (M2C_FIELD(arg0, s32 *, 0xF0) + 0x7CC), (f32) (lbl_805DAD80));
}

}
