#include "types.h"

typedef struct Player_801CF2B0 {
    u8 pad0[0xB0];
    u32 flags;
    u8 padb4[0xB8 - 0xB4];
    s16 anim;
    u8 padba[0x328 - 0xBA];
    s16 state;
    u8 pad32a[0x7CC - 0x32A];
    u8 act[4];
} Player_801CF2B0;

extern "C" {
s32 TObjPlayer__sub_8001BEF8(void *, s32);
s32 is_anim_finished__10TObjPlayerFPv(void *);
s16 get_idle_animation__10TObjPlayerFPv(void *);
void run_action_state_phase__10TObjPlayerFisi(void *, s16, s32);
void clear_status_bit6__10TObjPlayerFPv(void *);
void *get_anim_field_c__10TObjPlayerFPv(void *);
s16 get_validated_attack_stage(void *);
void finish_attack_stage1__10TObjPlayerFPv(Player_801CF2B0 *self);
}

extern "C" {

s32 TObjPlayer__sub_801CEAC8();
void TObjPlayer__sub_801CF2AC(void);
int TObjPlayer__sub_801CF3C0(void* p);
int try_apply_status_action__10TObjPlayerFi(void*);

void finish_attack_stage1__10TObjPlayerFPv(Player_801CF2B0 *self) {
    if (self->state == 4) {
        if (is_anim_finished__10TObjPlayerFPv(self) != 0) {
            run_action_state_phase__10TObjPlayerFisi(self, 1, 5);
        }
    } else if ((self->flags & 0x10) &&
               TObjPlayer__sub_8001BEF8(get_anim_field_c__10TObjPlayerFPv(self->act), 1) != 0) {
        switch (get_validated_attack_stage(self->act)) {
        case 0:
            self->state = 4;
            clear_status_bit6__10TObjPlayerFPv(self);
            self->anim = get_idle_animation__10TObjPlayerFPv(self);
            break;
        case 1:
        case 2:
            run_action_state_phase__10TObjPlayerFisi(self, 6, 5);
            break;
        }
    }
}

}
