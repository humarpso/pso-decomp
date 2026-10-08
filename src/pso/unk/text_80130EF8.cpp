#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Obj_80131070 { u8 pad[0x208]; s32 state; };

extern "C" {
extern const f32 lbl_805DB038;
void fn_80130EF8(u8 *arg0);
extern const f32 lbl_805DB03C;
void fn_80130F24(u8 *arg0);
void launch_weapon_casing__10TObjPlayerFiUiiUiUi(s32, u32, s32, u32, u32);
f32 sin_table_lookup(s32);
f32 cos_table_lookup(s32);
extern s32 tl_05;
extern const f32 lbl_805DB03C;
extern const f32 lbl_805DB040;
extern const f32 lbl_805DB044;
extern const f32 lbl_805DB048;
void update_recoil_casing_eject(u8 *arg0);
void draw_status_icon__10TObjPlayerFPvi(void *self, void *buf);
void spawn_particle_effect(void *buf, s32 n);
void fn_80131070(Obj_80131070 *self);
}

extern "C" {

void fn_80130EF8(u8 *arg0) {
    s32 temp_r0;
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x1F8);
    if (temp_r0 == 1) {
        M2C_FIELD(arg0, s32 *, 0x1F8) = (s32) (u8) (temp_r0 == 0);
        M2C_FIELD(arg0, f32 *, 0x204) = (f32) lbl_805DB038;
        M2C_FIELD(arg0, f32 *, 0x200) = (f32) lbl_805DB038;
        M2C_FIELD(arg0, f32 *, 0x1FC) = (f32) lbl_805DB038;
    }
}
void fn_80130F24(u8 *arg0) {
    s32 temp_r0;
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x1F8);
    if (temp_r0 == 0) {
        M2C_FIELD(arg0, s32 *, 0x1F8) = (s32) (u8) (temp_r0 == 0);
        M2C_FIELD(arg0, f32 *, 0x204) = (f32) lbl_805DB03C;
        M2C_FIELD(arg0, f32 *, 0x200) = (f32) lbl_805DB03C;
        M2C_FIELD(arg0, f32 *, 0x1FC) = (f32) lbl_805DB03C;
    }
}
#pragma push
#pragma opt_common_subs off
void update_recoil_casing_eject(u8 *arg0) {
    f32 buffer_14[3];
    s32 buffer_8[3];
    s32 temp_r0;
    s32 temp_r31;
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x208);
    switch (temp_r0) {
    case 1:
        M2C_FIELD(arg0, f32 *, 0x210) = (f32) (M2C_FIELD(arg0, f32 *, 0x210) - lbl_805DB040);
        if (M2C_FIELD(arg0, f32 *, 0x210) <= lbl_805DB044) {
            M2C_FIELD(arg0, f32 *, 0x210) = (f32) lbl_805DB044;
            M2C_FIELD(arg0, s32 *, 0x208) = 0;
            break;
        }
        break;
    case 2:
        M2C_FIELD(arg0, f32 *, 0x210) = (f32) (M2C_FIELD(arg0, f32 *, 0x210) + lbl_805DB040);
        if (lbl_805DB048 <= M2C_FIELD(arg0, f32 *, 0x210)) {
            M2C_FIELD(arg0, f32 *, 0x210) = (f32) lbl_805DB048;
            M2C_FIELD(arg0, s32 *, 0x208) = 3;
            break;
        }
        break;
    case 3:
        M2C_FIELD(arg0, s32 *, 0x208) = 1;
        temp_r31 = M2C_FIELD(M2C_FIELD(arg0, u8 **, 0xF0), s32 *, 0x60) - 0x4000;
        buffer_14[0] = sin_table_lookup(temp_r31);
        buffer_14[1] = lbl_805DB03C;
        buffer_14[2] = cos_table_lookup(temp_r31);
        buffer_8[0] = 0x4000;
        buffer_8[1] = M2C_FIELD(M2C_FIELD(arg0, u8 **, 0xF0), s32 *, 0x60);
        buffer_8[2] = 0;
        launch_weapon_casing__10TObjPlayerFiUiiUiUi(tl_05, (u32) arg0, 3, (u32) &buffer_14[0], (u32) &buffer_8[0]);
        break;
    }
}
#pragma pop

void fn_80131070(Obj_80131070 *self) {
    u8 buf[0x18];
    self->state = 2;
    draw_status_icon__10TObjPlayerFPvi(self, buf);
    spawn_particle_effect(buf, 9);
}

}
