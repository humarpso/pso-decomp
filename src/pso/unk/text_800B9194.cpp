#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
M2C_UNK fn_800B98C0(void *);
s32 is_valid_target__9TObjEneDDFPv(s32);
u32 TPhotonMylla__sub_80154CB4(u16);
s32 fn_800B91F4(void *arg0);
}

extern "C" {

s32 fn_800B91F4(void *arg0) {
    u16 id = M2C_FIELD(arg0, u16 *, 0x38C);
    if (id == 0xFFFF) {
        return 0;
    }
    if (TPhotonMylla__sub_80154CB4(id) == 0U) {
        fn_800B98C0(arg0);
        return 0;
    }
    return is_valid_target__9TObjEneDDFPv(M2C_FIELD(arg0, s32 *, 0x390));
}

}
