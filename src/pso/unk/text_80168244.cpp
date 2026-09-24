#include "types.h"
struct Obj_80168244 { u8 pad[0x33c]; u32 arr[4]; s32 count; };

struct Obj_80168280 { u8 pad[0x33c]; u32 arr[4]; s32 count; };

extern "C" {
s32 fn_80168244(Obj_80168244 *self, u32 v);
void fn_80168280(Obj_80168280 *self, u32 v);
}

extern "C" {

s32 fn_80168244(Obj_80168244 *self, u32 v) {
    s32 i;
    for (i = 0; i != self->count; i++) {
        if (self->arr[i] == v) {
            return 1;
        }
    }
    return 0;
}
void fn_80168280(Obj_80168280 *self, u32 v) {
    if (self->count < 4) {
        self->arr[self->count++] = v;
    }
}

}
