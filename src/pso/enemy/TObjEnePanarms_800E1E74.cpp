#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Obj_800E1E74 { u8 pad[0x30]; u32 flags; u8 pad2[0x378 - 0x34]; s32 state; };

extern "C" {
int TObjEnePanarms__sub_800E1C98(void*, int);
void TObjEnePanarms__sub_800E1E74(Obj_800E1E74 *self);
}

extern "C" {

s32 TObjEnePanarms__sub_800E1A44();
int TObjEnePanarms__sub_800E1D94(void* p);
int do_action_2__14TObjEnePanarmsFPv(void* p);
void TObjEnePanarms__sub_800E1E64(void* p);
int TObjEnePanarms__sub_800E1C98(void*, int);

void TObjEnePanarms__sub_800E1E74(Obj_800E1E74 *self) {
    switch (self->state) {
    case 0:
    case 1:
    case 5:
    case 6:
        break;
    default:
        self->flags &= ~0x200;
        TObjEnePanarms__sub_800E1C98(self, 6);
        break;
    }
}

}
