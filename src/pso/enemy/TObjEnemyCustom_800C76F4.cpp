#include "types.h"
#include "pso/enemy/TObjEnemyCustom.h"
#include "pso/enemy/TObjEneMe1GiGue.h"
#include "pso/enemy/TObjEneRe7Berura.h"
#include "pso/object/TObjFish.h"
#include "pso/player/TObjPlayer.h"

extern "C" {
s32 apply_actor_gravity(void *, s32, f32, f32);
void move_with_wall_slide(u8 *arg0);
s32 advance_animation_playback(void *);
s32 update_collisions__10TObjPlayerFv(void *);
extern const f32 lbl_805DA070;
extern volatile f32 lbl_805DA07C;
extern const f32 lbl_805DA08C;
void TObjEnemyCustom__sub_800C77A4(u8 *arg0);
struct Base_800c76f4 { char pad[0x18]; };
struct VObj_800c76f4 : Base_800c76f4 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual s32 m8(f32, f32);
};

s32 post_translate_matrix(void *);
void draw_chunk_object(void *child);
s32 rotate_matrix_y(s32, s32);
s32 push_matrix();
s32 pop_matrix();

extern s32 model_render_flags;
extern const f32 lbl_805DA084;
extern const f32 lbl_805DA088;

void TObjEnemyCustom::render() {
    u8 *arg0 = (u8 *)this;
    if (((VObj_800c76f4 *)arg0)->m8(lbl_805DA084, lbl_805DA088) != 0) {
        TObjFish::set_global_param(this->texture_id);
        push_matrix();
        post_translate_matrix((u8 *)&this->position);
        rotate_matrix_y(0, this->rotation_y);
        model_render_flags &= 0xFFFFFBFF;
        if (TObjPlayer::check_demo_mode() == 1) {
            draw_chunk_object((void *)(*(s32 *)&this->model));
        } else {
            ((TObjEneRe7Berura *)arg0)->draw();
        }
        if (!(*(s32 *)&this->actorFlags & 0x800)) {
            model_render_flags |= 0x400;
        }
        pop_matrix();
    }
}

#define K_800C77A4 (*(const f32 *)&lbl_805DA07C)
void TObjEnemyCustom__sub_800C77A4(u8 *arg0) {
    switch (*(s32 *)((s8 *)arg0 + 0x37C)) {
    case -1:
        break;
    case 0:
        *(s16 *)((s8 *)arg0 + 0xB8) = 4;
        *(s32 *)((s8 *)arg0 + 0x37C) = 1;
    case 1:
        advance_animation_playback(arg0);
        ((s32 (*)(void *, s32, f32))apply_actor_gravity)(arg0, 0, lbl_805DA070);
        update_collisions__10TObjPlayerFv(arg0);
        if (*(f32 *)((s8 *)arg0 + 0xC0) < (K_800C77A4 * (lbl_805DA08C * *(f32 *)((s8 *)arg0 + 0xC8)))) {
            move_with_wall_slide((arg0));
            f32 k;
            *(f32 *)((s8 *)arg0 + 0x308) = (f32) (*(f32 *)((s8 *)arg0 + 0x308) * (k = lbl_805DA07C));
            *(f32 *)((s8 *)arg0 + 0x310) = (f32) (*(f32 *)((s8 *)arg0 + 0x310) * k);
        }
        break;
    default:
        break;
    }
}

void TObjEnemyCustom::sub_800C7860() {
    u8 *arg0 = (u8 *)this;
    ((TObjEneMe1GiGue *)arg0)->set_state(7);
    *(s32 *)&this->m_388 = (s32) (*(s32 *)&this->m_388 | 1);
}

void TObjEnemyCustom::vfunc_63() {
    u8 *arg0 = (u8 *)this;
    ((TObjEneMe1GiGue *)arg0)->set_state(5);
    *(s32 *)&this->m_388 = (s32) (*(s32 *)&this->m_388 | 1);
}

void TObjEnemyCustom::update_knockback_state() {

    switch (*(s32 *)&this->state) {
    case 0:
        *(s32 *)&this->actorFlags = (s32) (*(s32 *)&this->actorFlags & 0xFFDFFFFF);
        this->m_b8 = 3;
        *(s32 *)&this->state = 1;
    case 1:
        advance_animation_playback(this);
        move_with_wall_slide((u8 *)this);
        {
            f32 t = *(volatile f32 *)((s8 *)this + 0x308);
            f32 k = lbl_805DA07C;
            *(f32 *)((s8 *)this + 0x308) = t * k;
            this->m_310 *= k;
            apply_actor_gravity(this, 0, lbl_805DA070, k);
        }
        update_collisions__10TObjPlayerFv(this);
        if ((u32) *(u32 *)&this->m_b4 != 8U) {
            *(s32 *)&this->state = -1;
        }
        break;
    case -1:
        *(s32 *)&this->actorFlags = (s32) (*(s32 *)&this->actorFlags & 0xFFFFFDFF);
        *(s32 *)&this->m_388 = (s32) (*(s32 *)&this->m_388 & 0xFFFFFFFE);
        this->referenceHp = (s16) this->hp;
        *(s32 *)&this->next_action = 1;
        break;
    }
}
void TObjEnemyCustom::vfunc_62() {
    u8 *arg0 = (u8 *)this;
    ((TObjEneMe1GiGue *)arg0)->set_state(4);
    *(s32 *)&this->m_388 = (s32) (*(s32 *)&this->m_388 | 1);
}

}
