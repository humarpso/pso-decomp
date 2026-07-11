#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_check__13TBoss2DeRolLeFPv(void *arg0);
M2C_UNK TBoss2DeRolLe__sub_800340C8(void *);
M2C_UNK TObjEneDD__vt90();
s32 check_v2_mode__9TObjEneDDFv();

void update_check__13TBoss2DeRolLeFPv(void *arg0) {
    TObjEneDD__vt90();
    if ((M2C_FIELD(arg0, s32 *, 0x3C0) & 8) || (check_v2_mode__9TObjEneDDFv() != 0)) {
        TBoss2DeRolLe__sub_800340C8(arg0);
    }
}

}
