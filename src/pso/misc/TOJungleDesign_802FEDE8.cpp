#include "types.h"
#pragma fp_contract on
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void init_design_variant__14TOJungleDesignFPv(void *arg0);
s32 fn_802FF028(M2C_UNK);
s32 fn_802FF064(s32);

extern M2C_UNK lbl_80474D60[];

void init_design_variant__14TOJungleDesignFPv(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0xB0) = (s32) M2C_FIELD(arg0, s32 *, 0x84);
    if ((s32) M2C_FIELD(arg0, s32 *, 0xB0) < 0) {
        M2C_FIELD(arg0, s32 *, 0xB0) = 0;
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0xB0) > 2) {
        M2C_FIELD(arg0, s32 *, 0xB0) = 2;
    }
    M2C_FIELD(arg0, s32 *, 0xAC) = fn_802FF064(lbl_80474D60[M2C_FIELD(arg0, s32 *, 0xB0)]);
    M2C_FIELD(arg0, s32 *, 0x24) = fn_802FF028(0);
}

}
