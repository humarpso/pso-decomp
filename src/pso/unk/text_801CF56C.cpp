#include "types.h"
struct Plr_801CF56C {
    u8 pad0[0x38];
    f32 x;
    f32 y;
    f32 z;
    u8 pad44[0x1c];
    s32 rot;
    u8 pad64[0x2a4];
    f32 vx;
    f32 vy;
    f32 vz;
    u8 pad314[0xdc];
    s32 target_rot;
    u8 pad3f4[4];
    f32 tx;
    f32 ty;
    f32 tz;
    u8 pad404[0x1dc];
    u8 motion[0xc];
    u8 flags[4];
};

extern "C" {
void apply_velocity__10TObjPlayerFPv(void *);
void set_flags__10TObjPlayerFPvUi(void *, u32);
void *get_position_ptr__10TObjPlayerFPv(void *);
s32 calc_angle_to__10TObjPlayerFPvPv(void *, void *);
s32 TObjPlayer__sub_80142344(s32, s32);
s32 lerp_angle_half__10TObjPlayerFUsUs(s32, s32);
void emit_footstep_effect__10TObjPlayerFiff(void *, f32, f32);
void play_footstep_sound__10TObjPlayerFi(void *, f32, f32);
void *resolve_move_collision__10TObjPlayerFPv(void *);
f32 TObjPlayer__sub_801BF814(void *p);
f32 sin_table_lookup(s32);
f32 cos_table_lookup(s32);
extern const f32 TObjPlayer__data_805DC360;
extern const f32 TObjPlayer__data_805DC36C;
extern const f32 lbl_805DC370;
extern const f32 lbl_805DC3B4;
void update_run_movement__10TObjPlayerFPv(Plr_801CF56C *self);
}

extern "C" {

void update_run_movement__10TObjPlayerFPv(Plr_801CF56C *self) {
    s32 ang;
    f32 dist;
    self->target_rot = calc_angle_to__10TObjPlayerFPvPv(get_position_ptr__10TObjPlayerFPv(self), &self->tx);
    self->rot = TObjPlayer__sub_80142344(self->rot, self->target_rot);
    ang = lerp_angle_half__10TObjPlayerFUsUs(self->rot, self->target_rot);
    self->vx = TObjPlayer__sub_801BF814(self->motion) * sin_table_lookup(ang);
    self->vy = TObjPlayer__data_805DC36C;
    self->vz = TObjPlayer__sub_801BF814(self->motion) * cos_table_lookup(ang);
    dist = (self->tx - self->x) * (self->tx - self->x) + (self->tz - self->z) * (self->tz - self->z);
    if ((lbl_805DC3B4 * TObjPlayer__sub_801BF814(self->motion)) * (lbl_805DC3B4 * TObjPlayer__sub_801BF814(self->motion)) > dist) {
        set_flags__10TObjPlayerFPvUi(self->flags, 4);
    }
    if (resolve_move_collision__10TObjPlayerFPv(self) == NULL) {
        apply_velocity__10TObjPlayerFPv(self);
    } else {
        set_flags__10TObjPlayerFPvUi(self->flags, 4);
    }
    play_footstep_sound__10TObjPlayerFi(self, TObjPlayer__data_805DC360, lbl_805DC370);
    emit_footstep_effect__10TObjPlayerFiff(self, TObjPlayer__data_805DC360, lbl_805DC370);
}

}
