#include "types.h"
#include "pso/enemy/TObjEneRecon.h"
#include "pso/player/TObjPlayer.h"

struct Hit_8031D898 { u16 id; u8 pad[6]; };

struct Recon_8031D898 {
    u8 pad0[0x38C];
    u16 target;
    u8 pad38E[0x434 - 0x38E];
    u16 owner;
    u8 pad436[0x470 - 0x436];
    s32 f470;
    s32 f474;
};

struct Hit_8031D994 { u16 id; u8 pad[6]; };

struct Recon_8031D994 {
    u8 pad0[0x38C];
    u16 target;
    u8 pad38E[0x434 - 0x38E];
    u16 owner;
    u8 pad436[0x46C - 0x436];
    s32 f46C;
    s32 f470;
    s32 f474;
};

extern "C" {
f32 fabs_float(f32);
f32 cos_table_lookup();
f32 vec3_dot(void *, void *);
extern s32 TObjEneRecon__attack_params;
extern const f32 lbl_805DF3CC;
extern f32 TObjEneRecon__data_805DF3D4;
s32 TObjEneRecon__sub_8031DA90(u8 *arg0);
void queue_destruction__7TObjectFv(void *);
void enemy_set_target_id(void *, u16);
s32 collect_enemy_target_candidates(void *, void *, f32);
void transition_enemy_state(void *, s32);
void *find_entity_by_id(u16);
extern const f32 lbl_805DF420;
void queue_destruction__7TObjectFv(void *);
void enemy_set_target_id(void *, u16);
s32 collect_enemy_target_candidates(void *, void *, f32);
void transition_enemy_state(void *, s32);
void *find_entity_by_id(u16);
extern const f32 lbl_805DF420;
}

extern "C" {

void TObjEneRecon::retarget() {
    Hit_8031D898 hits[5];
    void *p;
    s32 n;
    u16 id;
    s32 i;
    p = find_entity_by_id(((Recon_8031D898 *)this)->owner);
    if (p == 0) {
        queue_destruction__7TObjectFv(((Recon_8031D898 *)this));
        return;
    }
    if (((TObjEneRecon *)p)->is_below_child_limit(((Recon_8031D898 *)this)->target) != 0) {
        ((Recon_8031D898 *)this)->f470 = 0;
        transition_enemy_state(((Recon_8031D898 *)this), 3);
        return;
    }
    n = collect_enemy_target_candidates(((Recon_8031D898 *)this), hits, lbl_805DF420);
    for (i = 0; i < n; i++) {
        id = hits[i].id;
        if (id != ((Recon_8031D898 *)this)->target && ((TObjEneRecon *)p)->is_below_child_limit(id) != 0) {
            ((Recon_8031D898 *)this)->f470 = 0;
            enemy_set_target_id(((Recon_8031D898 *)this), id);
            transition_enemy_state(((Recon_8031D898 *)this), 3);
            return;
        }
    }
    transition_enemy_state(((Recon_8031D898 *)this), 4);
    ((Recon_8031D898 *)this)->f474 = 0;
}

void TObjEneRecon::select_next_target() {
    Hit_8031D994 hits[5];
    void *p;
    s32 n;
    u16 id;
    s32 i;
    p = find_entity_by_id(((Recon_8031D994 *)this)->owner);
    if (p == 0) {
        queue_destruction__7TObjectFv(((Recon_8031D994 *)this));
        return;
    }
    if (((TObjEneRecon *)p)->is_below_child_limit(((Recon_8031D994 *)this)->target) != 0) {
        ((Recon_8031D994 *)this)->f46C = 0;
        transition_enemy_state(((Recon_8031D994 *)this), 2);
        return;
    }
    n = collect_enemy_target_candidates(((Recon_8031D994 *)this), hits, lbl_805DF420);
    for (i = 0; i < n; i++) {
        id = hits[i].id;
        if (id != ((Recon_8031D994 *)this)->target && ((TObjEneRecon *)p)->is_below_child_limit(id) != 0) {
            ((Recon_8031D994 *)this)->f46C = 0;
            enemy_set_target_id(((Recon_8031D994 *)this), id);
            transition_enemy_state(((Recon_8031D994 *)this), 2);
            return;
        }
    }
    transition_enemy_state(((Recon_8031D994 *)this), 4);
    ((Recon_8031D994 *)this)->f474 = 0;
}

s32 TObjEneRecon__sub_8031DA90(u8 *arg0) {
    f32 temp_f31;
    if ((*(f32 *)((s8 *)arg0 + 0x3AC) < (TObjEneRecon__data_805DF3D4 + ((TObjPlayer *)TObjEneRecon__attack_params)->get_pos_x())) && (fabs_float((f32) (*(f32 *)((s8 *)arg0 + 0x448) - *(f32 *)((s8 *)arg0 + 0x398))) < lbl_805DF3CC)) {
        temp_f31 = vec3_dot((void *) (arg0 + 0x44C), (void *) (arg0 + 0x3A0));
        ((TObjPlayer *)(*(s32 *)((s8 *)arg0 + 0x318)))->get_field_0c();
        if (temp_f31 >= cos_table_lookup()) {
            return 1;
        }
    }
    return 0;
}

}
