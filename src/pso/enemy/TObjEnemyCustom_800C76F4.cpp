#include "types.h"

extern "C" {
void set_state__15TObjEneMe1GiGueFPvi(void *, s32);
void TObjEnemyCustom__sub_800C7860(u8 *arg0);
void set_state__15TObjEneMe1GiGueFPvi(void *, s32);
void TObjEnemyCustom__sub_800C789C(u8 *arg0);
void set_state__15TObjEneMe1GiGueFPvi(void *, s32);
void TObjEnemyCustom__sub_800C79C8(u8 *arg0);
s32 apply_actor_gravity(void *, s32, f32, f32);
s32 move_with_wall_slide(void *);
s32 advance_animation_playback(void *);
s32 update_collisions__10TObjPlayerFPv(void *);
extern const f32 lbl_805DA070;
extern volatile f32 lbl_805DA07C;
extern const f32 lbl_805DA08C;
void TObjEnemyCustom__sub_800C77A4(u8 *arg0);
}

extern "C" {

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

void draw__15TObjEnemyCustomFPv(u8 *arg0);
void update_knockback_state__15TObjEnemyCustomFPv(void *arg0);
s32 advance_animation_playback(void *);
s32 post_translate_matrix(void *);
s32 draw_chunk_object(s32);
s32 apply_actor_gravity(void *, s32, f32, f32);
s32 move_with_wall_slide(void *);
s32 rotate_matrix_y(s32, s32);
s32 push_matrix();
s32 pop_matrix();
s32 check_demo_mode__10TObjPlayerFv();
s32 draw__16TObjEneRe7BeruraFPv(void *);
s32 set_global_param__8TObjFishFi(s32);
s32 update_collisions__10TObjPlayerFPv(void *);

extern s32 model_render_flags;
extern const f32 lbl_805DA084;
extern const f32 lbl_805DA088;

void draw__15TObjEnemyCustomFPv(u8 *arg0) {
    if (((VObj_800c76f4 *)arg0)->m8(lbl_805DA084, lbl_805DA088) != 0) {
        set_global_param__8TObjFishFi(*(s32 *)((s8 *)arg0 + 0x24));
        push_matrix();
        post_translate_matrix(arg0 + 0x38);
        rotate_matrix_y(0, *(s32 *)((s8 *)arg0 + 0x60));
        model_render_flags &= 0xFFFFFBFF;
        if (check_demo_mode__10TObjPlayerFv() == 1) {
            draw_chunk_object(*(s32 *)((s8 *)arg0 + 0x34));
        } else {
            draw__16TObjEneRe7BeruraFPv(arg0);
        }
        if (!(*(s32 *)((s8 *)arg0 + 0x30) & 0x800)) {
            model_render_flags |= 0x400;
        }
        pop_matrix();
    }
}

extern const f32 lbl_805DA070;
extern volatile f32 lbl_805DA07C;

#define K_800C77A4 (*(const f32 *)&lbl_805DA07C)
void TObjEnemyCustom__sub_800C77A4(u8 *arg0) {
    s32 temp_r0;
    temp_r0 = *(s32 *)((s8 *)arg0 + 0x37C);
    switch (temp_r0) {
    case -1:
        break;
    case 0:
        *(s16 *)((s8 *)arg0 + 0xB8) = 4;
        *(s32 *)((s8 *)arg0 + 0x37C) = 1;
    case 1:
        advance_animation_playback((void *) (arg0));
        ((s32 (*)(void *, s32, f32))apply_actor_gravity)(arg0, 0, lbl_805DA070);
        update_collisions__10TObjPlayerFPv((void *) (arg0));
        if (*(f32 *)((s8 *)arg0 + 0xC0) < (K_800C77A4 * (lbl_805DA08C * *(f32 *)((s8 *)arg0 + 0xC8)))) {
            move_with_wall_slide((void *) (arg0));
            f32 k;
            *(f32 *)((s8 *)arg0 + 0x308) = (f32) (*(f32 *)((s8 *)arg0 + 0x308) * (k = lbl_805DA07C));
            *(f32 *)((s8 *)arg0 + 0x310) = (f32) (*(f32 *)((s8 *)arg0 + 0x310) * k);
        }
        break;
    default:
        break;
    }
}

void TObjEnemyCustom__sub_800C7860(u8 *arg0) {
    set_state__15TObjEneMe1GiGueFPvi(arg0, 7);
    *(s32 *)((s8 *)arg0 + 0x388) = (s32) (*(s32 *)((s8 *)arg0 + 0x388) | 1);
}

void TObjEnemyCustom__sub_800C789C(u8 *arg0) {
    set_state__15TObjEneMe1GiGueFPvi(arg0, 5);
    *(s32 *)((s8 *)arg0 + 0x388) = (s32) (*(s32 *)((s8 *)arg0 + 0x388) | 1);
}

void update_knockback_state__15TObjEnemyCustomFPv(void *arg0) {
    s32 temp_r0;

    temp_r0 = *(s32 *)((s8 *)arg0 + 0x37C);
    switch (temp_r0) {
    case 0:
        *(s32 *)((s8 *)arg0 + 0x30) = (s32) (*(s32 *)((s8 *)arg0 + 0x30) & 0xFFDFFFFF);
        *(s16 *)((s8 *)arg0 + 0xB8) = 3;
        *(s32 *)((s8 *)arg0 + 0x37C) = 1;
    case 1:
        advance_animation_playback(arg0);
        move_with_wall_slide(arg0);
        {
            f32 t = *(volatile f32 *)((s8 *)arg0 + 0x308);
            f32 k = lbl_805DA07C;
            *(f32 *)((s8 *)arg0 + 0x308) = t * k;
            *(f32 *)((s8 *)arg0 + 0x310) *= k;
            apply_actor_gravity(arg0, 0, lbl_805DA070, k);
        }
        update_collisions__10TObjPlayerFPv(arg0);
        if ((u32) *(u32 *)((s8 *)arg0 + 0xB4) != 8U) {
            *(s32 *)((s8 *)arg0 + 0x37C) = -1;
        }
        break;
    case -1:
        *(s32 *)((s8 *)arg0 + 0x30) = (s32) (*(s32 *)((s8 *)arg0 + 0x30) & 0xFFFFFDFF);
        *(s32 *)((s8 *)arg0 + 0x388) = (s32) (*(s32 *)((s8 *)arg0 + 0x388) & 0xFFFFFFFE);
        *(s16 *)((s8 *)arg0 + 0x33E) = (s16) *(s16 *)((s8 *)arg0 + 0x32C);
        *(s32 *)((s8 *)arg0 + 0x374) = 1;
        break;
    }
}
void TObjEnemyCustom__sub_800C79C8(u8 *arg0) {
    set_state__15TObjEneMe1GiGueFPvi(arg0, 4);
    *(s32 *)((s8 *)arg0 + 0x388) = (s32) (*(s32 *)((s8 *)arg0 + 0x388) | 1);
}

}
