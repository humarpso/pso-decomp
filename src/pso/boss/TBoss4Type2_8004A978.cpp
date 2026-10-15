#include "types.h"

struct Obj_8004A98C { s32 count; u8 pad[4]; s32 x; s32 y; void **items; };

extern "C" {
void scroll_strip_uvs(void *, s16, s16);
void scroll_strips__11TBoss4Type2FPv(Obj_8004A98C *self);
}

extern "C" {

u8 is_active__11TBoss4Type2Fv(void);

extern s32 dark_falz_controller_instance;

u8 is_active__11TBoss4Type2Fv(void) {
    return (u8) (dark_falz_controller_instance != 0);
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
