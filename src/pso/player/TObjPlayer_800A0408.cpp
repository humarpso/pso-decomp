#include "types.h"

struct Obj_800A0654 { u8 pad[0x37c]; s32 count; u8 pad2[4]; u16 ids[1]; };

struct Obj_800A06B4 { u8 pad[0x37c]; s32 count; u8 pad2[4]; u16 ids[1]; };

struct Obj_800A0728 { u8 pad[0x374]; s32 mode; s32 timer; s32 count; u8 pad2[4]; u16 ids[1]; };

extern "C" {
void *get_enemy_entity(int);
void apply_fall_damage_flag__10TObjPlayerFi(void *);
void TObjPlayer__sub_800A0654(Obj_800A0654 *self);
void *get_enemy_entity(int);
int TObjPlayer__sub_800A1808(void *p);
s32 TObjPlayer__sub_800A06B4(Obj_800A06B4 *self);
void *get_enemy_entity(int);
void trigger_action_if_not_flagged__10TObjPlayerFPv(void *arg0);
void trigger_targets_action__10TObjPlayerFPv(Obj_800A0728 *self);
}

extern "C" {

void* init_vtable_and_field18__10TObjPlayerFPv(void* a0);
int TObjPlayer__sub_800D9718(void);

    extern unsigned char lbl_80490470[];
    extern const float lbl_805D9958;
void* init_vtable_and_field18__10TObjPlayerFPv(void* a0) { TObjPlayer__sub_800D9718(); *(int*)((char*)a0 + 0x14) = (int)lbl_80490470; *(float*)((char*)a0 + 0x18) = lbl_805D9958; return a0; }
void TObjPlayer__sub_800A0654(Obj_800A0654 *self) {
    s32 i;
    for (i = 0; i < self->count; i++) {
        void *e = get_enemy_entity(self->ids[i]);
        if (e != 0) {
            apply_fall_damage_flag__10TObjPlayerFi(e);
        }
    }
}
s32 TObjPlayer__sub_800A06B4(Obj_800A06B4 *self) {
    s32 i;
    for (i = 0; i < self->count; i++) {
        void *e = get_enemy_entity(self->ids[i]);
        if (e != 0) {
            if (TObjPlayer__sub_800A1808(e) == 0) {
                return 0;
            }
        }
    }
    return 1;
}
void trigger_targets_action__10TObjPlayerFPv(Obj_800A0728 *self) {
    s32 i;
    self->timer = 0x78;
    self->mode = 6;
    for (i = 0; i < self->count; i++) {
        void *e = get_enemy_entity(self->ids[i]);
        if (e != 0) {
            trigger_action_if_not_flagged__10TObjPlayerFPv(e);
        }
    }
}

}
