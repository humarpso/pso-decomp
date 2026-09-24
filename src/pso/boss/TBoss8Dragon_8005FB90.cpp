#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct O_8005FCE4 { u8 pad[0x4c0]; u32 flags; };

extern "C" {
extern const f32 lbl_805D8D5C;
void TBoss8Dragon__sub_8005FB90(u8 *arg0);
void queue_destruction__7TObjectFv(void *);
void TBoss8Dragon__sub_8005FCE4(O_8005FCE4 *self, s32 msg);
}

extern "C" {

void TBoss8Dragon__sub_8005FB90(u8 *arg0) {
    M2C_FIELD(arg0, f32 *, 0x38) = (f32) (M2C_FIELD(arg0, f32 *, 0x38) + M2C_FIELD(arg0, f32 *, 0x484));
    M2C_FIELD(arg0, f32 *, 0x40) = (f32) (M2C_FIELD(arg0, f32 *, 0x40) + M2C_FIELD(arg0, f32 *, 0x48C));
    M2C_FIELD(arg0, f32 *, 0x484) = (f32) lbl_805D8D5C;
    M2C_FIELD(arg0, f32 *, 0x488) = (f32) lbl_805D8D5C;
    M2C_FIELD(arg0, f32 *, 0x48C) = (f32) lbl_805D8D5C;
}
void TBoss8Dragon__sub_8005FCE4(O_8005FCE4 *self, s32 msg) {
    switch (msg) {
    case 4:
        self->flags |= 0x80;
        queue_destruction__7TObjectFv(self);
        break;
    case 5:
        break;
    case 6: case 7: case 8: case 9: case 10: case 11:
        return;
    }
}

}
