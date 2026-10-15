#include "types.h"

struct RecoveredGlobal_802A4CC4_lbl_804DCFF8 {
    s32 value;
    u8 remaining[0x24];
};

extern "C" {
s32 TObjPlayer__sub_802A445C(void *, s32);
u32 find_entity_by_id(u16);
s32 TNeedleShoot__sub_802A4668(void *);
s32 update_position__12TNeedleShootFPv(void *);
s32 queue_destruction__7TObjectFv(void *);
s32 update_lifetime__22TObjEneMe1GiGueMissileFPv(void *);
void update_missile__13TObjEneMe1GeeFPv(void *arg0);
u16 obj_getField1c(void *);
u8 * TNeedleShoot__ct(void *, s32, void *, void *);
extern RecoveredGlobal_802A4CC4_lbl_804DCFF8 __vt__20TObjEneMe1Gee_NEEDLE;
extern s32 TObjEneMe1Gee_NEEDLE__name;
u8 *TObjEneMe1Gee_NEEDLE__ct(u8 *arg0, s32 arg1, u8 *arg2, u8 *arg3, f32 farg0, f32 farg1);
void TObjEneMe1Gee__sub_802A4D4C(void);
int TObjEneMe1Gee__sub_800CC2BC(void);
extern u32 lbl_805D6660;
void cache_result_805D6660__13TObjEneMe1GeeFv(void);
}

extern "C" {

void draw_model__13TObjEneMe1GeeFPv(u8 *arg0);
s32 post_translate_matrix(void *);
s32 draw_ginja_object();
s32 rotate_matrix_x(int, int);
s32 TObjFish__sub_8001EDB0(void *, int);
s32 get_bml_model(void *, int);
s32 set_global_param__8TObjFishFi();
s32 rotate_matrix_y(int, int);
s32 push_matrix();
s32 pop_matrix();
s32 begin_effect_render__13TParticleCtrlFv();
s32 end_effect_render__13TParticleCtrlFv();

extern u32 lbl_805D6660;

void draw_model__13TObjEneMe1GeeFPv(u8 *arg0) {
    if ((u32) lbl_805D6660 == 0U) {
        queue_destruction__7TObjectFv((void *)(arg0));
        return;
    }
    push_matrix();
    begin_effect_render__13TParticleCtrlFv();
    post_translate_matrix((void *) (arg0 + 0x6C));
    rotate_matrix_y((int) (0), (int) (*(s32 *)((s8 *)arg0 + 0xA4)));
    rotate_matrix_x((int) (0), (int) (*(s32 *)((s8 *)arg0 + 0xA0)));
    TObjFish__sub_8001EDB0((void *) (lbl_805D6660), (int) (1));
    set_global_param__8TObjFishFi();
    get_bml_model((void *) (lbl_805D6660), (int) (1));
    draw_ginja_object();
    end_effect_render__13TParticleCtrlFv();
    pop_matrix();
}
void update_missile__13TObjEneMe1GeeFPv(void *arg0) {
    *(u32 *)((s8 *)arg0 + 0x1C) = find_entity_by_id(*(u16 *)((s8 *)arg0 + 0x34));
    if ((u32) *(u32 *)((s8 *)arg0 + 0x1C) == 0U) {
        queue_destruction__7TObjectFv((void *)(arg0));
        return;
    }
    if ((s32) *(s32 *)((s8 *)arg0 + 0xB8) == 1) {
        update_position__12TNeedleShootFPv(arg0);
        update_lifetime__22TObjEneMe1GiGueMissileFPv(arg0);
        TObjPlayer__sub_802A445C(arg0, 1);
        return;
    }
    TNeedleShoot__sub_802A4668(arg0);
}
u8 *TObjEneMe1Gee_NEEDLE__ct(u8 *arg0, s32 arg1, u8 *arg2, u8 *arg3, f32 farg0, f32 farg1) {
    u8 *temp_r3;
    TNeedleShoot__ct(arg0, arg1, arg2, arg3);
    *(s32 **)((s8 *)arg0 + 0x18) = &__vt__20TObjEneMe1Gee_NEEDLE.value;
    *(s32 *)((s8 *)arg0 + 0) = (s32) TObjEneMe1Gee_NEEDLE__name;
    *(f32 *)((s8 *)arg0 + 0xBC) = farg1;
    *(f32 *)((s8 *)arg0 + 0xAC) = farg0;
    *(s32 *)((s8 *)arg0 + 0xC0) = 0x96;
    *(s32 *)((s8 *)arg0 + 0xB0) = 1;
    temp_r3 = (u8 *)(*(u8 **)((s8 *)arg0 + 0x1C));
    if (temp_r3 != NULL) {
        *(u16 *)((s8 *)arg0 + 0x34) = obj_getField1c(temp_r3);
    }
    return arg0;
}
void TObjEneMe1Gee__sub_802A4D4C(void) {  }
void cache_result_805D6660__13TObjEneMe1GeeFv(void) { (*(int *)&lbl_805D6660) = TObjEneMe1Gee__sub_800CC2BC(); }

typedef char RecoveredGlobal_802A4CC4_lbl_804DCFF8_size[sizeof(RecoveredGlobal_802A4CC4_lbl_804DCFF8) == 0x28 ? 1 : -1];

}
