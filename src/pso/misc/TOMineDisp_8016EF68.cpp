#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredGlobal_8016EF68___vt__14TOMineTrapDisp {
    M2C_UNK value;
    u8 remaining[0x30];
};

extern "C" {
s32 TOMineDisp__ct(void *, void *, void *);
extern RecoveredGlobal_8016EF68___vt__14TOMineTrapDisp __vt__14TOMineTrapDisp;
extern s32 lbl_805D3088;
u8 *TOMineTrapDisp__ct(u8 *arg0, s32 arg1, s32 arg2, s16 arg3);
}

extern "C" {

typedef char RecoveredGlobal_8016EF68___vt__14TOMineTrapDisp_size[sizeof(RecoveredGlobal_8016EF68___vt__14TOMineTrapDisp) == 0x34 ? 1 : -1];
u8 *TOMineTrapDisp__ct(u8 *arg0, s32 arg1, s32 arg2, s16 arg3) {
    TOMineDisp__ct((void *) (arg0), (void *) (arg1), (void *) (arg2));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &__vt__14TOMineTrapDisp.value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D3088;
    M2C_FIELD(arg0, s16 *, 0xAC) = arg3;
    return arg0;
}

}
