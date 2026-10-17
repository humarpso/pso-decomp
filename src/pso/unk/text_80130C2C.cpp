#include "types.h"
#include "pso/item/TUnk_804A6BD0.h"
#include "pso/player/TObjPlayer.h"
typedef struct Obj_80130CD8 { u8 pad[0x200]; f32 f200; s32 f204; } Obj_80130CD8;

struct Vec_80130C2C { f32 x, y, z; };

struct Ang_80130C2C { s32 x, y, z; };

struct Obj_80130C2C { u8 pad[0x60]; s32 angle; };

struct Pl_80130C2C {
    u8 pad[0xF0];
    struct Obj_80130C2C *f0;
    u8 padF4[0x204 - 0xF4];
    s32 f204;
};

extern "C" {
extern const f32 lbl_805DB024;
extern const f32 lbl_805DB028;
extern const f32 lbl_805DB02C;
s32 spawn_particle_effect(void *, s32);
f32 sin_table_lookup(s32);
f32 cos_table_lookup(s32);
extern s32 tl_05;
extern const f32 lbl_805DB020;

void TUnk_804A6BD0::emit_marker_effects() {
    struct Vec_80130C2C pos;
    struct Ang_80130C2C ang;
    struct Vec_80130C2C sp8;
    s32 a;
    ((struct Pl_80130C2C *)this)->f204 = 2;
    a = ((struct Pl_80130C2C *)this)->f0->angle - 0x4000;
    pos.x = sin_table_lookup(a);
    pos.y = lbl_805DB020;
    pos.z = cos_table_lookup(a);
    ang.x = 0x4000;
    ang.y = ((struct Pl_80130C2C *)this)->f0->angle;
    ang.z = 0;
    TObjPlayer::launch_weapon_casing((s32)tl_05, (u32)((struct Pl_80130C2C *)this), (s32)3, (u32)(&pos), (u32)(&ang));
    ((TObjPlayer *)((struct Pl_80130C2C *)this))->draw_icon((s32)2, (s32)(&sp8));
    spawn_particle_effect(&sp8, 9);
}

void TUnk_804A6BD0::update_weapon() {
    Obj_80130CD8 *arg0 = (Obj_80130CD8 *)this;
    f32 temp_f1;
    f32 temp_f2;
    switch (arg0->f204) {
    case 1:
        temp_f2 = lbl_805DB024;
        temp_f1 = arg0->f200;
        if (temp_f2 < temp_f1) {
            arg0->f200 = temp_f1 - lbl_805DB028;
            if (arg0->f200 <= temp_f2) {
                arg0->f200 = temp_f2;
                arg0->f204 = 0;
            }
        }
        break;
    case 2:
        temp_f2 = arg0->f200;
        if (temp_f2 < lbl_805DB02C) {
            arg0->f200 = temp_f2 + lbl_805DB028;
            if (lbl_805DB02C <= arg0->f200) {
                arg0->f200 = lbl_805DB02C;
                arg0->f204 = 3;
            }
        }
        break;
    case 3:
        arg0->f204 = 1;
        break;
    }
}

}
