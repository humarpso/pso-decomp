#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
void set_state__15TObjEneMe1GiGueFPvi(void *, s32);
void TObjEnemyCustom__sub_800C7860(u8 *arg0);
void set_state__15TObjEneMe1GiGueFPvi(void *, s32);
void TObjEnemyCustom__sub_800C789C(u8 *arg0);
void set_state__15TObjEneMe1GiGueFPvi(void *, s32);
void TObjEnemyCustom__sub_800C79C8(u8 *arg0);
M2C_UNK apply_actor_gravity(void *, M2C_UNK, f32, f32);
M2C_UNK move_with_wall_slide(void *);
M2C_UNK advance_animation_playback(void *);
M2C_UNK update_collisions__10TObjPlayerFPv(void *);
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
M2C_UNK advance_animation_playback(void *);
M2C_UNK post_translate_matrix(void *);
M2C_UNK draw_chunk_object(s32);
M2C_UNK apply_actor_gravity(void *, M2C_UNK, f32, f32);
M2C_UNK move_with_wall_slide(void *);
M2C_UNK rotate_matrix_y(M2C_UNK, s32);
M2C_UNK push_matrix();
M2C_UNK pop_matrix();
s32 check_demo_mode__10TObjPlayerFv();
M2C_UNK draw__16TObjEneRe7BeruraFPv(void *);
M2C_UNK set_global_param__8TObjFishFi(s32);
M2C_UNK update_collisions__10TObjPlayerFPv(void *);

extern s32 some_id_805c6f74;
extern const f32 lbl_805DA084;
extern const f32 lbl_805DA088;

void draw__15TObjEnemyCustomFPv(u8 *arg0) {
    if (((VObj_800c76f4 *)arg0)->m8(lbl_805DA084, lbl_805DA088) != 0) {
        set_global_param__8TObjFishFi(M2C_FIELD(arg0, s32 *, 0x24));
        push_matrix();
        post_translate_matrix(arg0 + 0x38);
        rotate_matrix_y(0, M2C_FIELD(arg0, s32 *, 0x60));
        some_id_805c6f74 &= 0xFFFFFBFF;
        if (check_demo_mode__10TObjPlayerFv() == 1) {
            draw_chunk_object(M2C_FIELD(arg0, s32 *, 0x34));
        } else {
            draw__16TObjEneRe7BeruraFPv(arg0);
        }
        if (!(M2C_FIELD(arg0, s32 *, 0x30) & 0x800)) {
            some_id_805c6f74 |= 0x400;
        }
        pop_matrix();
    }
}

extern const f32 lbl_805DA070;
extern volatile f32 lbl_805DA07C;

#define K_800C77A4 (*(const f32 *)&lbl_805DA07C)
void TObjEnemyCustom__sub_800C77A4(u8 *arg0) {
    s32 temp_r0;
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x37C);
    switch (temp_r0) {
    case -1:
        break;
    case 0:
        M2C_FIELD(arg0, s16 *, 0xB8) = 4;
        M2C_FIELD(arg0, s32 *, 0x37C) = 1;
    case 1:
        advance_animation_playback((void *) (arg0));
        ((M2C_UNK (*)(void *, M2C_UNK, f32))apply_actor_gravity)(arg0, 0, lbl_805DA070);
        update_collisions__10TObjPlayerFPv((void *) (arg0));
        if (M2C_FIELD(arg0, f32 *, 0xC0) < (K_800C77A4 * (lbl_805DA08C * M2C_FIELD(arg0, f32 *, 0xC8)))) {
            move_with_wall_slide((void *) (arg0));
            f32 k;
            M2C_FIELD(arg0, f32 *, 0x308) = (f32) (M2C_FIELD(arg0, f32 *, 0x308) * (k = lbl_805DA07C));
            M2C_FIELD(arg0, f32 *, 0x310) = (f32) (M2C_FIELD(arg0, f32 *, 0x310) * k);
        }
        break;
    default:
        break;
    }
}

void TObjEnemyCustom__sub_800C7860(u8 *arg0) {
    set_state__15TObjEneMe1GiGueFPvi(arg0, 7);
    M2C_FIELD(arg0, s32 *, 0x388) = (s32) (M2C_FIELD(arg0, s32 *, 0x388) | 1);
}

void TObjEnemyCustom__sub_800C789C(u8 *arg0) {
    set_state__15TObjEneMe1GiGueFPvi(arg0, 5);
    M2C_FIELD(arg0, s32 *, 0x388) = (s32) (M2C_FIELD(arg0, s32 *, 0x388) | 1);
}

void update_knockback_state__15TObjEnemyCustomFPv(void *arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x37C);
    switch (temp_r0) {
    case 0:
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xFFDFFFFF);
        M2C_FIELD(arg0, s16 *, 0xB8) = 3;
        M2C_FIELD(arg0, s32 *, 0x37C) = 1;
    case 1:
        advance_animation_playback(arg0);
        move_with_wall_slide(arg0);
        {
            f32 t = M2C_FIELD(arg0, volatile f32 *, 0x308);
            f32 k = lbl_805DA07C;
            M2C_FIELD(arg0, f32 *, 0x308) = t * k;
            M2C_FIELD(arg0, f32 *, 0x310) *= k;
            apply_actor_gravity(arg0, 0, lbl_805DA070, k);
        }
        update_collisions__10TObjPlayerFPv(arg0);
        if ((u32) M2C_FIELD(arg0, u32 *, 0xB4) != 8U) {
            M2C_FIELD(arg0, s32 *, 0x37C) = -1;
        }
        break;
    case -1:
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xFFFFFDFF);
        M2C_FIELD(arg0, s32 *, 0x388) = (s32) (M2C_FIELD(arg0, s32 *, 0x388) & 0xFFFFFFFE);
        M2C_FIELD(arg0, s16 *, 0x33E) = (s16) M2C_FIELD(arg0, s16 *, 0x32C);
        M2C_FIELD(arg0, s32 *, 0x374) = 1;
        break;
    }
}
void TObjEnemyCustom__sub_800C79C8(u8 *arg0) {
    set_state__15TObjEneMe1GiGueFPvi(arg0, 4);
    M2C_FIELD(arg0, s32 *, 0x388) = (s32) (M2C_FIELD(arg0, s32 *, 0x388) | 1);
}

}
