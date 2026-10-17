#include "types.h"
#include "pso/misc/TNeedleShoot.h"
#include "pso/misc/TObjEneMe1Gee_NEEDLE.h"
#include "pso/enemy/TObjEneMe1Gee.h"
#include "pso/TParticleCtrl.h"

struct RecoveredGlobal_802A4CC4_lbl_804DCFF8 {
    s32 value;
    u8 remaining[0x24];
};

extern "C" {
s32 TObjPlayer__sub_802A445C(void *, s32);
u32 find_entity_by_id(u16);
s32 TNeedleShoot__sub_802A4668(void *);
s32 queue_destruction__7TObjectFv(void *);
s32 update_lifetime__22TObjEneMe1GiGueMissileFv(void *);
u16 obj_getField1c(void *);
u8 * TNeedleShoot__ct(void *, s32, void *, void *);
extern RecoveredGlobal_802A4CC4_lbl_804DCFF8 __vt__20TObjEneMe1Gee_NEEDLE;
extern s32 TObjEneMe1Gee_NEEDLE__name;
u8 *TObjEneMe1Gee_NEEDLE__ct(u8 *arg0, s32 arg1, u8 *arg2, u8 *arg3, f32 farg0, f32 farg1);
void TObjEneMe1Gee__sub_802A4D4C(void);
int TObjEneMe1Gee__sub_800CC2BC(void);
extern u32 me1gee_cached_model_handle;
s32 post_translate_matrix(void *);
s32 draw_ginja_object();
s32 rotate_matrix_x(int, int);
s32 TObjFish__sub_8001EDB0(void *, int);
s32 get_bml_model(void *, int);
s32 set_global_param__8TObjFishFl();
s32 rotate_matrix_y(int, int);
s32 push_matrix();
s32 pop_matrix();

void TObjEneMe1Gee_NEEDLE::render() {
    u8 *arg0 = (u8 *)this;
    if ((u32) me1gee_cached_model_handle == 0U) {
        queue_destruction__7TObjectFv((void *)(arg0));
        return;
    }
    push_matrix();
    TParticleCtrl::begin_effect_render();
    post_translate_matrix((void *) (arg0 + 0x6C));
    rotate_matrix_y((int) (0), (int) (*(s32 *)&this->m_a4));
    rotate_matrix_x((int) (0), (int) (*(s32 *)&this->m_a0));
    TObjFish__sub_8001EDB0((void *) (me1gee_cached_model_handle), (int) (1));
    set_global_param__8TObjFishFl();
    get_bml_model((void *) (me1gee_cached_model_handle), (int) (1));
    draw_ginja_object();
    TParticleCtrl::end_effect_render();
    pop_matrix();
}
void TObjEneMe1Gee_NEEDLE::run_task() {
    this->m_1c = find_entity_by_id(this->m_34);
    if ((u32) this->m_1c == 0U) {
        queue_destruction__7TObjectFv((void *)(this));
        return;
    }
    if ((s32) *(s32 *)&this->m_b8 == 1) {
        update_position();
        update_lifetime__22TObjEneMe1GiGueMissileFv(this);
        TObjPlayer__sub_802A445C(this, 1);
        return;
    }
    TNeedleShoot__sub_802A4668(this);
}
u8 *TObjEneMe1Gee_NEEDLE__ct(u8 *arg0, s32 arg1, u8 *from, u8 *to, f32 farg0, f32 farg1) {
    u8 *temp_r3;
    TNeedleShoot__ct(arg0, arg1, from, to);
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
void TObjEneMe1Gee::cache_result_805D6660() { (*(int *)&me1gee_cached_model_handle) = TObjEneMe1Gee__sub_800CC2BC(); }

typedef char RecoveredGlobal_802A4CC4_lbl_804DCFF8_size[sizeof(RecoveredGlobal_802A4CC4_lbl_804DCFF8) == 0x28 ? 1 : -1];

}
