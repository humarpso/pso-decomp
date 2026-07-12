#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TAdPlayerLoadGC__sub_801E0D8C(M2C_UNK);
s32 TAdPlayerLoadGC__sub_801E1B50(M2C_UNK);
s32 TAdPlayerLoadGC__sub_801E1E38(M2C_UNK);
s32 check_memcard_status__15TAdPlayerLoadGCFi(M2C_UNK);
s32 TAdSinglePlyChrSelectGC__sub_801FCAE4();
s32 TAdSinglePlyChrSelectGC__sub_80339DBC(void *);

s32 poll_memcard_status(void *arg0) {
    s32 var_r31;

    if (TAdPlayerLoadGC__sub_801E1E38(0) == 0) {
        M2C_FIELD(arg0, s32 *, 0x28) = 0;
        return 1;
    }
    if (TAdPlayerLoadGC__sub_801E0D8C(0) == 0) {
        M2C_FIELD(arg0, s32 *, 0x28) = 0;
        return 4;
    }
    if (TAdPlayerLoadGC__sub_801E1B50(0) != 0) {
        M2C_FIELD(arg0, s32 *, 0x24) = (s32) (M2C_FIELD(arg0, s32 *, 0x24) + 1);
        M2C_FIELD(arg0, s32 *, 0x28) = 0;
        return 2;
    }
    M2C_FIELD(arg0, s32 *, 0x24) = 0;
    if (check_memcard_status__15TAdPlayerLoadGCFi(0) != 0) {
        M2C_FIELD(arg0, s32 *, 0x28) = 0;
        return 4;
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0x28) != 0) {
        return M2C_FIELD(arg0, s32 *, 0x2C);
    }
    var_r31 = 0;
    M2C_FIELD(arg0, s32 *, 0x28) = 1;
    if (TAdSinglePlyChrSelectGC__sub_801FCAE4() == 0) {
        var_r31 |= 4;
    }
    if (TAdSinglePlyChrSelectGC__sub_80339DBC(arg0) == 0) {
        var_r31 |= 4;
    }
    return var_r31;
}

}
