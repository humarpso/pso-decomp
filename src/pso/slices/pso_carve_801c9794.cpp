#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TObjPlayer__sub_801B5EA4(void *);
void TObjPlayer__sub_80010550(void *);

void TObjPlayer__sub_801C9794(void *arg0) {
    void *x;
    x = TObjPlayer__sub_801B5EA4(arg0);
    if (x == NULL) {
        TObjPlayer__sub_80010550(arg0);
    }
}

}
