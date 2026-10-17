#include "types.h"
#include "pso/item/TItemEffOrgaFlowShot.h"
#include "pso/player/TObjPlayer.h"
struct Owner_8012E5A0 { u8 pad[0x60]; s32 f60; };

struct Self_8012E5A0 {
    u8 pad0[0xF0];
    Owner_8012E5A0 *owner;
    u8 padF4[0x1F8 - 0xF4];
    f32 f1FC;
    s32 state;
};

struct Vec_8012E5A0 { f32 x, y, z; };

struct Ang_8012E5A0 { s32 x, y, z; };

extern "C" {
f32 sin_table_lookup(s32);
f32 cos_table_lookup(s32);
extern s32 tl_05;
extern const f32 lbl_805DAF7C;
extern const f32 lbl_805DAF84;
extern const f32 lbl_805DAF88;
extern const f32 lbl_805DAF8C;
void update_casing_eject__10TObjPlayerFPv(Self_8012E5A0 *self);
void update_casing_eject__10TObjPlayerFPv(Self_8012E5A0 *self) {
    s32 ang;
    Vec_8012E5A0 v;
    Ang_8012E5A0 a;
    if (self->state == 1) {
        TItemEffOrgaFlowShot::approach_value(&self->f1FC, lbl_805DAF84, lbl_805DAF88);
        if (lbl_805DAF88 == self->f1FC) {
            self->state = 2;
            ang = self->owner->f60 + 0x4000;
            v.x = sin_table_lookup(ang);
            v.y = lbl_805DAF7C;
            v.z = cos_table_lookup(ang);
            a.x = 0x4000;
            a.y = self->owner->f60;
            a.z = 0;
            TObjPlayer::launch_weapon_casing((s32)tl_05, (u32)self, 3, (u32)(&v), (u32)(&a));
        }
    } else if (self->state == 2) {
        TItemEffOrgaFlowShot::approach_value(&self->f1FC, lbl_805DAF8C, lbl_805DAF7C);
        if (lbl_805DAF7C == self->f1FC) {
            self->state = 0;
        }
    }
}

}
