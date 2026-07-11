#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void trigger_by_id__14TOTrapSeabed01FUi(u32 arg0);
M2C_UNK fn_801E2EFC();
M2C_UNK fn_801E2F20();

extern u32 lbl_805D6818;

void trigger_by_id__14TOTrapSeabed01FUi(u32 arg0) {
    if (arg0 == (u32) lbl_805D6818) {
        fn_801E2EFC();
        return;
    }
    fn_801E2F20();
}

}
