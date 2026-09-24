#include "types.h"
struct E_800EB8DC { s32 f0; s32 f4; };

struct O_800EB8DC { u8 pad[0x3b8]; E_800EB8DC arr[4]; };

extern "C" {
s32 fn_800EB8DC(O_800EB8DC *self);
}

extern "C" {

s32 fn_800EB8DC(O_800EB8DC *self) {
    s32 i;
    for (i = 0; i < 4; i++) {
        if (self->arr[i].f0 == 1) {
            return 0;
        }
    }
    return 1;
}

}
