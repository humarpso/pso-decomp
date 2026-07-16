#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 DCFlushRange(s32, s32);
s32 copy_and_flush_texture__16TEffIndirectCtrlFPvi(void *, s32);
s32 TEffIndirectCtrl__sub_802A8CC0(s32, s32, s32, s32, s32, u8);
s32 TEffIndirectCtrl__sub_802A9234(u8);
s32 TEffIndirectCtrl__sub_802A8E4C(s32, s32, s32, s32, s32, u8);
void render__16TEffIndirectCtrlFv(void);

void render__16TEffIndirectCtrlFv(void) {  }

}
