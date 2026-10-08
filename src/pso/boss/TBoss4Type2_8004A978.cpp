#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Obj_8004A98C { s32 count; u8 pad[4]; s32 x; s32 y; void **items; };

extern "C" {
void scroll_strip_uvs(void *, s16, s16);
void scroll_strips__11TBoss4Type2FPv(Obj_8004A98C *self);
}

extern "C" {

u8 is_active__11TBoss4Type2Fv(void);

extern s32 lbl_805D4D74;

u8 is_active__11TBoss4Type2Fv(void) {
    return (u8) (lbl_805D4D74 != 0);
}
void scroll_strips__11TBoss4Type2FPv(Obj_8004A98C *self) {
    s32 i;
    self->x += 8;
    for (i = 0; i < self->count; i++) {
        if (self->items[i] != 0) {
            scroll_strip_uvs(self->items[i], self->x, self->y);
        }
    }
}

}
