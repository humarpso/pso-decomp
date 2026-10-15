#include "types.h"

extern "C" {

void reset_area_entry_state__10TObjPlayerFPv(void *arg0);
void destroy_owned_object__10TObjPlayerFPv(void* p);
void init_battle__10TObjPlayerFi(s32 arg0);
s32 is_locally_controlled__10TObjPlayerFPv(void *);
int sync_current_floor__10TObjPlayerFPv(void*);
int sync_current_area__10TObjPlayerFPv(void*);
void for_each_player_slot__10TObjPlayerFv(void *);
void TObjPlayer__sub_801BC8F0(s32 arg0);
void TObjPlayer__sub_801BCA0C(void);
void TObjPlayer__sub_801BCA10(void);
void TObjPlayer__sub_801BCAB0(void);
void TObjPlayer__sub_801BCB28(void);
void TObjPlayer__sub_801BCC50(void);
int is_script_controlled__10TObjPlayerFv(void*);
s32 apply_state_transform__10TObjPlayerFUi(s32);
int can_cast_technique__10TObjPlayerFv(void* p);
int check_technique_castable__10TObjPlayerFi(void*);
s32 enter_battle_state__10TObjPlayerFv(void *);
s32 is_current_room__10TObjRoomIdFPv(s32);
s32 is_final_phase__10TObjPlayerFv();
s32 obj_isState2_324();
int queue_destruction__7TObjectFv(void*);
s32 set_flag_400000__10TObjPlayerFv(s32);
s32 set_flag_400000__10TObjPlayerFi(void *);
void update_child__10TObjPlayerFPv(void *, void *);

#include "types.h"

extern "C" {

void init_battle__10TObjPlayerFi(s32 arg0) {
    ((s32 (*)())TObjPlayer__sub_801BC8F0)();
    set_flag_400000__10TObjPlayerFi((void *) (arg0));
    enter_battle_state__10TObjPlayerFv((void *) (arg0 + 0x634));
}

}

#include "types.h"

extern "C" {
extern s32 update_photon_chair__10TObjPlayerFi[];
}

extern "C" {

}

void reset_area_entry_state__10TObjPlayerFPv(void *arg0) {
    s32 x;
    update_child__10TObjPlayerFPv((void *)((char *)arg0 + 900), arg0);
    enter_battle_state__10TObjPlayerFv((void *)((char *)arg0 + 1588));
    x = is_locally_controlled__10TObjPlayerFPv(arg0);
    if (x != 0) {
        for_each_player_slot__10TObjPlayerFv(update_photon_chair__10TObjPlayerFi);
    }
}

void destroy_owned_object__10TObjPlayerFPv(void* p) { if (*(unsigned int*)((char*)p + 0x548) != 0) { queue_destruction__7TObjectFv(*(void**)((char*)p + 0x548)); *(int*)((char*)p + 0x548) = 0; } }

}

#include "types.h"

typedef struct E12_801BC948 { u8 b[12]; } E12_801BC948;

typedef struct E1C_801BC948 { u8 pad[0x1C]; } E1C_801BC948;

typedef struct Src_801BC948 {
    u8 pad0[0x28];
    E12_801BC948 recs[5];
    u8 pad64[0xB4 - 0x64];
    u8 levels[0x13];
    u8 padc7[0x142 - 0xC7];
    E1C_801BC948 bonus[0x13];
} Src_801BC948;

typedef struct Player_801BC948 {
    u8 pad0[0x254];
    E12_801BC948 recs[5];
    u8 pad290[0x428 - 0x290];
    u8 techs[0x4AC - 0x428];
    u8 f4ac[4];
} Player_801BC948;

extern "C" {
s32 obj_getField1c(void *);
s32 TObjPlayer__sub_801BF9E0(void *, int);
s32 TObjPlayer__sub_801C2244(void *, void *);
s32 update_follow_particle__10TObjPlayerFl(void *, void *);
s32 get_class_index__10TObjPlayerFPv(void *);
void TObjPlayer__sub_801BEF44(void *, void *);
void TObjPlayer__sub_801C1F78(void *, s32);
void clamp_and_set_unit_value__10TObjPlayerFiUci(void *, u8, s16);
void TObjPlayer__sub_801D955C(void *, s32);
void copy_all_technique_entries__10TObjPlayerFPv(void *, s32);
void init_session_technique_caps__10TObjPlayerFPvPv(Player_801BC948 *self, Src_801BC948 *src);
}

extern "C" {

void TObjPlayer__sub_801BC8F0(s32 arg0) {
    TObjPlayer__sub_801BF9E0((void *) (arg0 + 0x634), (int) (obj_getField1c((void *) (arg0))));
    update_follow_particle__10TObjPlayerFl((void *) (arg0 + 0x384), (void *) (arg0));
    TObjPlayer__sub_801C2244((void *) (arg0 + 0x34C), (void *) (obj_getField1c((void *) (arg0))));
}
void init_session_technique_caps__10TObjPlayerFPvPv(Player_801BC948 *self, Src_801BC948 *src) {
    s32 i;
    TObjPlayer__sub_801C1F78(self->f4ac, obj_getField1c(self));
    TObjPlayer__sub_801D955C(self->techs, get_class_index__10TObjPlayerFPv(self));
    copy_all_technique_entries__10TObjPlayerFPv(self->techs, 0x1D);
    for (i = 0; i < 0x13; i++) {
        clamp_and_set_unit_value__10TObjPlayerFiUci(self, src->levels[i] + src->bonus[i].pad[0], i);
    }
    for (i = 0; i < 5; i++) {
        TObjPlayer__sub_801BEF44(&self->recs[i], &src->recs[i]);
    }
}

}

#include "types.h"

extern "C" {

void TObjPlayer__sub_801BCA0C(void) {  }
void TObjPlayer__sub_801BCA10(void) {  }

}

#include "types.h"

extern "C" {
s32 TObjPlayer__sub_801C21C4(void *, s32);
s32 get_slot_value_checked__10TObjPlayerFl(void *, s32);
void TObjPlayer__sub_801BCA14(u8 *arg0, void *arg1);
}

extern "C" {

void TObjPlayer__sub_801BCA14(u8 *arg0, void *arg1) {
    s32 i;
    TObjPlayer__sub_801C1F78(arg0 + 0x4AC, ((s32 (*)())obj_getField1c)());
    TObjPlayer__sub_801D955C(arg0 + 0x428, get_class_index__10TObjPlayerFPv(arg0));
    copy_all_technique_entries__10TObjPlayerFPv(arg0 + 0x428, 0x1D);
    i = 0;
    do {
        clamp_and_set_unit_value__10TObjPlayerFiUci(arg0, get_slot_value_checked__10TObjPlayerFl(arg1, i) + TObjPlayer__sub_801C21C4(arg1, i), (s16)i);
        i += 1;
    } while (i < 0x13);
}

}

#include "types.h"
#include "pso/player/TObjPlayer.h"

extern "C" {

void TObjPlayer__sub_801BCAB0(void) {  }
void TObjPlayer::update_state() {
    s32 arg0 = (s32)this;
    if (obj_isState2_324() != 0) {
        set_flag_400000__10TObjPlayerFv(arg0);
    } else {
        sync_current_area__10TObjPlayerFPv((void*)(arg0));
        sync_current_floor__10TObjPlayerFPv((void*)(arg0));
    }
    if ((is_final_phase__10TObjPlayerFv() != 0) && (is_current_room__10TObjRoomIdFPv(arg0) != 0)) {
        apply_state_transform__10TObjPlayerFUi(arg0);
    }
}
void TObjPlayer__sub_801BCB28(void) {  }
void TObjPlayer::update_if_active() { if (is_script_controlled__10TObjPlayerFv(this) != 0) { sync_current_area__10TObjPlayerFPv(this); sync_current_floor__10TObjPlayerFPv(this); } }

}
