#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_body_parts__12TCharaMakingFPv(u8 *arg0);
f32 TCharaMaking__sub_8028DCCC(void *);
M2C_UNK TCharaMaking__sub_8028DF98(void *);
M2C_UNK TCharaMaking__sub_8028E2B8(void *, void *, void *, void *);
M2C_UNK TChCrLoadReq__sub_8028D448(void *);

void update_body_parts__12TCharaMakingFPv(u8 *arg0) {
    TCharaMaking__sub_8028DF98(arg0 + 0x85C);
    M2C_FIELD(arg0, f32 *, 0xD48) = TCharaMaking__sub_8028DCCC(arg0 + 0x85C);
    TCharaMaking__sub_8028E2B8(arg0 + 0x8B8, arg0 + 0xA24, arg0 + 0xB90, arg0 + 0x85C);
    TChCrLoadReq__sub_8028D448(arg0);
}

}
