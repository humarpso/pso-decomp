#include "types.h"
struct T_80090464 { u8 pad[0x18]; s32 arr[1]; };

struct O_80090464 { u8 pad[0x368]; s32 x368; };

extern "C" {
extern T_80090464 *lbl_805007C0[];
s32 fn_80090464(O_80090464 *self, s32 i);
s32 fn_80090464(O_80090464 *self, s32 i) {
    return lbl_805007C0[self->x368]->arr[i];
}

}
