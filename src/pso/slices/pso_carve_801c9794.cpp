#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TObjPlayer__sub_801B5EA4(void *);
void apply_velocity__10TObjPlayerFPv(void *);

void TObjPlayer__sub_801C9794(void *arg0) {
    void *x;
    x = TObjPlayer__sub_801B5EA4(arg0);
    if (x == NULL) {
        apply_velocity__10TObjPlayerFPv(arg0);
    }
}

}
