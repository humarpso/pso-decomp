#include "types.h"
#include "pso/unk/text_80087278.h"
#include "pso/unk/text_80130EF8.h"
#include "pso/unk/TUnk_804A6CC8.h"
#include "pso/player/TObjPlayer.h"

struct Obj_80131070 { u8 pad[0x208]; s32 state; };

extern "C" {
extern const f32 lbl_805DB038;
extern const f32 lbl_805DB03C;
f32 sin_table_lookup(s32);
f32 cos_table_lookup(s32);
extern s32 tl_05;
extern const f32 lbl_805DB040;
extern const f32 lbl_805DB044;
extern const f32 lbl_805DB048;
void TUnk_804A6CC8::update_idle() {
    s32 temp_r0;
    temp_r0 = *(s32 *)((s8 *)((u8 *)this) + 0x1F8);
    if (temp_r0 == 1) {
        *(s32 *)((s8 *)((u8 *)this) + 0x1F8) = (s32) (u8) (temp_r0 == 0);
        ((TUnk_804A6CC8 *)((u8 *)this))->m_204 = (f32) lbl_805DB038;
        *(f32 *)((s8 *)((u8 *)this) + 0x200) = (f32) lbl_805DB038;
        ((TUnk_804A6CC8 *)((u8 *)this))->m_1fc = (f32) lbl_805DB038;
    }
}
void TUnk_804A6CC8::update_attack() {
    u8 *arg0 = (u8 *)this;
    s32 temp_r0;
    temp_r0 = *(s32 *)((s8 *)arg0 + 0x1F8);
    if (temp_r0 == 0) {
        *(s32 *)((s8 *)arg0 + 0x1F8) = (s32) (u8) (temp_r0 == 0);
        this->m_204 = (f32) lbl_805DB03C;
        *(f32 *)((s8 *)arg0 + 0x200) = (f32) lbl_805DB03C;
        this->m_1fc = (f32) lbl_805DB03C;
    }
}
#pragma push
#pragma opt_common_subs off
void TUnk_804A6CC8::update_weapon() {
    f32 buffer_14[3];
    s32 buffer_8[3];
    s32 temp_r31;
    switch (*(s32 *)((s8 *)((u8 *)this) + 0x208)) {
    case 1:
        this->m_210 = (f32) (this->m_210 - lbl_805DB040);
        if (this->m_210 <= lbl_805DB044) {
            this->m_210 = (f32) lbl_805DB044;
            *(s32 *)((s8 *)((u8 *)this) + 0x208) = 0;
            break;
        }
        break;
    case 2:
        this->m_210 = (f32) (this->m_210 + lbl_805DB040);
        if (lbl_805DB048 <= this->m_210) {
            this->m_210 = (f32) lbl_805DB048;
            *(s32 *)((s8 *)((u8 *)this) + 0x208) = 3;
            break;
        }
        break;
    case 3:
        *(s32 *)((s8 *)((u8 *)this) + 0x208) = 1;
        temp_r31 = *(s32 *)((s8 *)this->player + 0x60) - 0x4000;
        buffer_14[0] = sin_table_lookup(temp_r31);
        buffer_14[1] = lbl_805DB03C;
        buffer_14[2] = cos_table_lookup(temp_r31);
        buffer_8[0] = 0x4000;
        buffer_8[1] = *(s32 *)((s8 *)this->player + 0x60);
        buffer_8[2] = 0;
        TObjPlayer::launch_weapon_casing(tl_05, (u32) this, 3, (u32) &buffer_14[0], (u32) &buffer_8[0]);
        break;
    }
}
#pragma pop

void TUnk_804A6CC8::emit_marker_effects() {
    Obj_80131070 *self = (Obj_80131070 *)this;
    u8 buf[0x18];
    self->state = 2;
    ((TObjPlayer *)self)->draw_status_icon((s32)buf);
    spawn_particle_effect(buf, 9);
}

}
