#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjPlayer__sub_802E746C(void);
void TObjPlayer__sub_802E7470(void);
void TObjPlayer__sub_802E7474(void *arg0, s32 arg1);
s32 *TBreakUpMdl__sub_8009705C(s32 *, s32);
s32 *alloc__23TAdSinglePlyChrSelectGCFPv(s32);
s32 alloc_buffer__11TOBoss4RockFPv(s32);
s32 TObjPlayer__sub_802E75B8(void *, s32 *);

void TObjPlayer__sub_802E746C(void) {  }
void TObjPlayer__sub_802E7470(void) {  }
void TObjPlayer__sub_802E7474(void *arg0, s32 arg1) {
    s32 *temp_r4;
    s32 *var_r0;

    var_r0 = alloc__23TAdSinglePlyChrSelectGCFPv(0x10);
    if (var_r0 != NULL) {
        var_r0 = TBreakUpMdl__sub_8009705C(var_r0, arg1);
    }
    M2C_FIELD(arg0, s32 **, 0x1C) = var_r0;
    temp_r4 = M2C_FIELD(arg0, s32 **, 0x1C);
    M2C_FIELD(arg0, s32 *, 0x24) = (s32) *temp_r4;
    TObjPlayer__sub_802E75B8(arg0, temp_r4);
    M2C_FIELD(arg0, s32 *, 0x28) = alloc_buffer__11TOBoss4RockFPv(M2C_FIELD(arg0, s32 *, 0x24) * 0x2C);
}

}
