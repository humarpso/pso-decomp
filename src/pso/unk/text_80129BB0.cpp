#include "types.h"
struct Owner_80129BB0 { u8 pad[0x60]; s32 f60; };

struct Self_80129BB0 {
    u8 pad0[0xF0];
    Owner_80129BB0 *owner;
    u8 padF4[0x1FC - 0xF4];
    f32 f1FC;
    s32 state;
};

struct Vec_80129BB0 { f32 x, y, z; };

struct Ang_80129BB0 { s32 x, y, z; };

extern "C" {
void approach_value__20TItemEffOrgaFlowShotFPfff(void *, f32, f32);
void launch_weapon_casing__10TObjPlayerFlUllUlUl(s32, void *, s32, void *, void *);
f32 sin_table_lookup(s32);
f32 cos_table_lookup(s32);
extern s32 tl_05;
extern const f32 lbl_805DAE48;
extern const f32 lbl_805DAE50;
extern const f32 lbl_805DAE54;
extern const f32 lbl_805DAE58;
void s_rank_bazooka_recoil(Self_80129BB0 *self);
}

extern "C" {

void s_rank_bazooka_recoil(Self_80129BB0 *self) {
    s32 ang;
    Vec_80129BB0 v;
    Ang_80129BB0 a;
    if (self->state == 1) {
        approach_value__20TItemEffOrgaFlowShotFPfff(&self->f1FC, lbl_805DAE50, lbl_805DAE54);
        if (lbl_805DAE54 == self->f1FC) {
            self->state = 2;
            ang = self->owner->f60 + 0x4000;
            v.x = sin_table_lookup(ang);
            v.y = lbl_805DAE48;
            v.z = cos_table_lookup(ang);
            a.x = 0x4000;
            a.y = self->owner->f60;
            a.z = 0;
            launch_weapon_casing__10TObjPlayerFlUllUlUl(tl_05, self, 3, &v, &a);
        }
    } else if (self->state == 2) {
        approach_value__20TItemEffOrgaFlowShotFPfff(&self->f1FC, lbl_805DAE58, lbl_805DAE48);
        if (lbl_805DAE48 == self->f1FC) {
            self->state = 0;
        }
    }
}

}
