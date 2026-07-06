#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjPlayer__sub_801B1760(u8 *arg0);
M2C_UNK fn_801C19F4(void *);

s32 obj_isState3_324();

void TObjPlayer__sub_801B1760(u8 *arg0) {
    if (obj_isState3_324() != 0) {
        M2C_FIELD(arg0, s32 *, 0x698) = 0x6043;
    } else {
        M2C_FIELD(arg0, s32 *, 0x698) = 0x2003;
    }
    fn_801C19F4(arg0 + 0x828);
}

}
