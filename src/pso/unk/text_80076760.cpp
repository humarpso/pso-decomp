#include "types.h"
struct Obj_80076760 { u8 pad[0x20]; s32 count; s32 interval; };

struct Obj_800767D8 {
    u8 pad[0x20];
    s32 count;
    s32 interval;
    f32 ratio[4];
};

extern "C" {
void TBoss3Volopt__sub_8022675C(s32, s32, s32, s32);
void fn_80076760(Obj_80076760 *self);
s16 obj_getS16_32C(void *);
s16 get_field_2b8__14TItemProShieldFPv(void *);
u32 find_revival_item__10TObjPlayerFv(void *);
void *get_player_by_client_id(s32);
extern const f32 lbl_805D91C0;
extern const f32 lbl_805D91C8;
void fn_800767D8(Obj_800767D8 *self);
}

extern "C" {

void fn_80076760(Obj_80076760 *self) {
    if (self->count < 0 || self->interval <= 0) {
        return;
    }
    if (self->count % self->interval == 0) {
        TBoss3Volopt__sub_8022675C(0x23230, 0, 0, 0);
    }
    self->count--;
}
void fn_800767D8(Obj_800767D8 *self) {
    s32 changed;
    s32 i;
    void *p;
    f32 min;
    f32 max;
    f32 cur;
    min = lbl_805D91C0;
    changed = 0;
    for (i = 0; i < 4; i++) {
        p = get_player_by_client_id(i);
        if (p == NULL || find_revival_item__10TObjPlayerFv(p) != 0) {
            self->ratio[i] = lbl_805D91C0;
            continue;
        }
        cur = obj_getS16_32C(p);
        max = get_field_2b8__14TItemProShieldFPv(p);
        if (0.0f == cur) {
            self->ratio[i] = lbl_805D91C0;
            continue;
        }
        if (max <= 0.0f) {
            self->ratio[i] = lbl_805D91C0;
            continue;
        }
        max = cur / max;
        if (self->ratio[i] > max) {
            changed = 1;
            if (min > max) {
                min = max;
            }
        }
        self->ratio[i] = max;
    }
    if (changed == 0 || min >= lbl_805D91C0) {
        return;
    }
    self->count = 0x5A;
    self->interval = (s32)(lbl_805D91C8 * min) + 3;
}

}
