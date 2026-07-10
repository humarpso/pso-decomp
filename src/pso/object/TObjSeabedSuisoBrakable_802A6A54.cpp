#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjSeabedSuisoBrakable__sub_802A6A54(void *arg0);
M2C_UNK update_switch_lock__23TObjSeabedSuisoBrakableFPv();
M2C_UNK TObjSeabedSuisoBrakable__sub_802A69BC();

void TObjSeabedSuisoBrakable__sub_802A6A54(void *arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0xC8);
    switch (temp_r0) {
    case 2:
        TObjSeabedSuisoBrakable__sub_802A69BC();
        return;
    case 3:
        update_switch_lock__23TObjSeabedSuisoBrakableFPv();
    case 0:
        return;
    }
}

}
