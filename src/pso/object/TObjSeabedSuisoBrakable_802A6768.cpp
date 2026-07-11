#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void notify_break__23TObjSeabedSuisoBrakableFUi(u32 arg0);
u32 get_table0_entry__23TObjSeabedSuisoBrakableFi(M2C_UNK);
M2C_UNK fn_801E2EFC();
M2C_UNK fn_801E2F20();

void notify_break__23TObjSeabedSuisoBrakableFUi(u32 arg0) {
    u32 t0, t1, t2;
    t0 = get_table0_entry__23TObjSeabedSuisoBrakableFi(0);
    if (t0 == arg0 || (t1 = get_table0_entry__23TObjSeabedSuisoBrakableFi(1), t1 == arg0) || (t2 = get_table0_entry__23TObjSeabedSuisoBrakableFi(2), t2 == arg0)) {
        fn_801E2EFC();
        return;
    }
    fn_801E2F20();
}

}
