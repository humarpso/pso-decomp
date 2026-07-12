#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TBoss8Dragon__sub_80064C08(void *arg0, void *arg1);
M2C_UNK TBoss8Dragon__sub_800B9958(void *, u16);

void TBoss8Dragon__sub_80064C08(void *arg0, void *arg1) {
    TBoss8Dragon__sub_800B9958(arg0, (u16) M2C_FIELD(arg1, s32 *, 4));
    M2C_FIELD(arg0, f32 *, 0x394) = (f32) M2C_FIELD(arg1, f32 *, 8);
    M2C_FIELD(arg0, f32 *, 0x39C) = (f32) M2C_FIELD(arg1, f32 *, 0xC);
}

}
