#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void fn_800D7F60(void *);
extern M2C_UNK lbl_804949D8[];

void *fn_800D7DCC(void *arg0) {
    fn_800D7F60(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804949D8;
    M2C_FIELD(arg0, u32 *, 0x30) = 8;
    return arg0;
}

}
