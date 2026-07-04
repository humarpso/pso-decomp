#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK THunterGuildSeqOffline__sub_800F8878(u32, s32, M2C_UNK *);
M2C_UNK fn_8022675C(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
u32 __nw__7TObjectFUl(M2C_UNK);
extern M2C_UNK fn_8019BB2C[];
extern s32 tl_00;

void fn_8019BB9C(void) {
    fn_8022675C(0x40003205, 0, 0, 0);
    u32 obj = __nw__7TObjectFUl(0x28);
    if (obj != 0U) {
        THunterGuildSeqOffline__sub_800F8878(obj, tl_00, fn_8019BB2C);
    }
}

}
