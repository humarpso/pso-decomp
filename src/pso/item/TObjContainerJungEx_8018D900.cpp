#include "types.h"
#include "pso/object/TObjDoaEx01.h"
#include "pso/item/TObjContainerJungEx.h"
#include "pso/misc/TOKeyMachine01.h"
#include "pso/player/TObjPlayer.h"
#include "pso/ui/TAdSinglePlyChrSelectGC.h"

struct RecoveredGlobal_8018D9B0_lbl_804B7158 { s32 value; u8 remaining[0xC]; };
typedef char RecoveredGlobal_8018D9B0_lbl_804B7158_size[sizeof(RecoveredGlobal_8018D9B0_lbl_804B7158) == 0x10 ? 1 : -1];

struct O_8018DB94 { u8 pad[0xac]; s32 state; f32 pos; f32 max; f32 speed; };

struct Obj_8018DA54 {
    u8 pad[0x38];
    f32 pos[3];
    u8 pad44[0xAC - 0x44];
    s32 state;
    u8 padb0[0xD0 - 0xB0];
    u32 flags;
};

struct Obj_8018DBCC {
    u8 pad[0x38];
    f32 pos[3];
    u8 pad44[0xAC - 0x44];
    s32 state;
    u8 padb0[0xD0 - 0xB0];
    u32 flags;
    u8 padd4[0xD8 - 0xD4];
    f32 xd8;
};

extern "C" {
u8 * TObjFish__sub_8001EDB0(void *, int);
extern u32 TObjContainerJungEx__resource_bundle;
u8 *TObjContainerJungEx__sub_8018D900(s32 arg0);
u8 * get_bml_model(void *, int);
extern u32 TObjContainerJungEx__resource_bundle;
u8 * load_resource_from_descriptor(void *, s32, void *, s32, s32, s32);
extern RecoveredGlobal_8018D9B0_lbl_804B7158 fe_obj_hako02_resource_descriptor;
extern u32 TObjContainerJungEx__resource_bundle;
extern const f32 TObjDoaEx01__data_805DBDA0;
extern const f32 TObjDoaEx01__data_805DBDA8;
s32 is_any_player_within_radius_xz(void *, f32);
void play_sound_effect(s32, void *, s32, s32);
extern const f32 lbl_805DBDA4;
void set_indexed_flags(void *, int, int);
s32 is_any_player_within_radius_xz(void *, f32);
void play_sound_effect(s32, void *, s32, s32);
extern const f32 TObjDoaEx01__data_805DBDA0;
extern const f32 TObjDoaEx01__data_805DBDA8;
extern const f32 lbl_805DBDAC;
extern const f32 lbl_805DBDB0;
}

extern "C" {

void TLobby__sub_8001FE7C(void*, int);

extern u32 TObjContainerJungEx__resource_bundle;

u8 *TObjContainerJungEx__sub_8018D900(s32 arg0) {
    if ((void *) (*(u8 * *)&TObjContainerJungEx__resource_bundle) != NULL) {
        return TObjFish__sub_8001EDB0((*(u8 * *)&TObjContainerJungEx__resource_bundle), arg0);
    }
    return NULL;
}

u8 *TObjContainerJungEx::get_model(s32 arg0) {
    if ((void *) (*(u8 * *)&TObjContainerJungEx__resource_bundle) != NULL) {
        return get_bml_model((*(u8 * *)&TObjContainerJungEx__resource_bundle), arg0);
    }
    return NULL;
}

void TObjContainerJungEx::free_data() {
    if ((u32) TObjContainerJungEx__resource_bundle != 0U) {
        TLobby__sub_8001FE7C((void*)TObjContainerJungEx__resource_bundle, 1);
        TObjContainerJungEx__resource_bundle = 0U;
    }
}
void TObjContainerJungEx::load_resource_instance() {
    s32 temp_r3;
    s32 var_r0;
    temp_r3 = ((TAdSinglePlyChrSelectGC *)((void *)0x440))->alloc();
    var_r0 = temp_r3;
    if (var_r0 != 0) {
        var_r0 = (long) (load_resource_from_descriptor((void *) temp_r3, 5, &fe_obj_hako02_resource_descriptor.value, 0, 0, 0));
    }
    (*(s32 *)&TObjContainerJungEx__resource_bundle) = var_r0;
}
#pragma push
#pragma opt_common_subs off
#pragma opt_propagation off
void TObjDoaEx01::vfunc_18() {
    u8 *arg0 = (u8 *)this;
    this->m_b0 = (f32) (this->m_b0 - this->m_b8);
    if (this->m_b0 < TObjDoaEx01__data_805DBDA0) {
        this->m_b0 = (f32) TObjDoaEx01__data_805DBDA0;
        *(s32 *)&this->m_ac = 0;
        ((TObjPlayer *)arg0)->clear_player_status_flag(0, 8);
    }
}
#pragma pop

void TObjDoaEx01::vfunc_17() {
    Obj_8018DA54 *self = (Obj_8018DA54 *)this;
    if (self->flags & 1) {
        if (is_any_player_within_radius_xz(self, lbl_805DBDA4) == 0) {
            self->state = 3;
            switch (TOKeyMachine01::get_global_state()) {
            case 19:
            case 20:
                play_sound_effect(0x4BF0B, self->pos, 0, 0);
                break;
            case 21:
            case 22:
                play_sound_effect(0x4004AA0B, self->pos, 0, 0);
                break;
            default:
                play_sound_effect(0x4004AA0B, self->pos, 0, 0);
                break;
            }
        }
    } else {
        self->state = 3;
        switch (TOKeyMachine01::get_global_state()) {
        case 19:
        case 20:
            play_sound_effect(0x4BF0B, self->pos, 0, 0);
            break;
        case 21:
        case 22:
            play_sound_effect(0x4004AA0B, self->pos, 0, 0);
            break;
        default:
            play_sound_effect(0x4004AA0B, self->pos, 0, 0);
            break;
        }
    }
}

void TObjDoaEx01::vfunc_16() {
    O_8018DB94 *self = (O_8018DB94 *)this;
    self->pos += self->speed;
    if (self->pos > self->max - TObjDoaEx01__data_805DBDA8) {
        self->pos = self->max - TObjDoaEx01__data_805DBDA8;
        self->state = 2;
    }
}
void TObjDoaEx01::play_proximity_sound() {
    Obj_8018DBCC *self = (Obj_8018DBCC *)this;
    if (self->flags & 1) {
        if (is_any_player_within_radius_xz(self, lbl_805DBDAC) == 1) {
            self->state = 1;
            set_indexed_flags(self, 0, 8);
            switch (TOKeyMachine01::get_global_state()) {
            case 19:
            case 20:
                play_sound_effect(0x4BF0B, self->pos, 0, 0);
                break;
            case 21:
            case 22:
                play_sound_effect(0x4004AA0B, self->pos, 0, 0);
                break;
            default:
                play_sound_effect(0x4004AA0B, self->pos, 0, 0);
                break;
            }
        }
    } else if (self->flags & 0x100000) {
        self->xd8 += lbl_805DBDB0;
        if (TObjDoaEx01__data_805DBDA8 <= self->xd8) {
            self->flags &= ~0x100000;
        }
    } else {
        self->xd8 -= lbl_805DBDB0;
        if (self->xd8 <= TObjDoaEx01__data_805DBDA0) {
            self->flags |= 0x100000;
        }
    }
}

}
