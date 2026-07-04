#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *fn_801D6B3C(void *);
void queue_destruction__7TObjectFv(void *);

void fn_801D6B8C(void *arg0) {
    void *x;
    x = fn_801D6B3C(arg0);
    if (x != NULL) {
        queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x4));
    }
}

}
