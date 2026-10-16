#include "types.h"
#include "pso/player/TObjPlayer.h"

extern "C" {

void *item_equip_variant_deleting_dtor_80125848(void *arg0, s16 arg1);
void arm_faust_reload_timer(void* p);
void count_faust_reload_timer(u8 *arg0);
void clear_faust_reload_timer(void* p);
s32 draw_ginja_object(void *);
void free_obj_heap__10TObjPlayerFPv(void *);
void item_equip_variant_deleting_dtor_80120CF8(void *, int);
void *item_equip_variant_deleting_dtor_80125848(void *arg0, s16 arg1);

extern const f32 lbl_805DAD58;
extern const f32 lbl_805DAD5C;

void TObjPlayer::draw_faust_loaded_projectile() {
    void *temp_r31;
    void *temp_r3;

    if (TObjPlayer::get_player_list() == 1) {
        temp_r3 = *(void **)((s8 *)this + 0x188);
        if ((temp_r3 != NULL) && ((s32) *(s32 *)((s8 *)this + 0x234) == 0)) {
            temp_r31 = *(void **)((s8 *)temp_r3 + 0x2C);
            if (temp_r31 != NULL) {
                *(f32 *)((s8 *)temp_r31 + 0x20) = (f32) lbl_805DAD58;
                *(f32 *)((s8 *)temp_r31 + 0x24) = (f32) lbl_805DAD58;
                *(f32 *)((s8 *)temp_r31 + 0x28) = (f32) lbl_805DAD58;
                *(s32 *)((s8 *)temp_r31 + 0) = (s32) (*(s32 *)((s8 *)temp_r31 + 0) & 0xFFFFFFFB);
                draw_ginja_object(*(void **)((s8 *)this + 0x188));
                *(s32 *)((s8 *)temp_r31 + 0) = (s32) (*(s32 *)((s8 *)temp_r31 + 0) | 4);
                *(f32 *)((s8 *)temp_r31 + 0x20) = (f32) lbl_805DAD5C;
                *(f32 *)((s8 *)temp_r31 + 0x24) = (f32) lbl_805DAD5C;
                *(f32 *)((s8 *)temp_r31 + 0x28) = (f32) lbl_805DAD5C;
            }
        }
    }
}

void arm_faust_reload_timer(void* p) { *(s32*)((char*)p + 0x234) = 60; }

void count_faust_reload_timer(u8 *arg0) {
    s32 temp_r4;
    temp_r4 = *(s32 *)((s8 *)arg0 + 0x234);
    if (temp_r4 > 0) {
        *(s32 *)((s8 *)arg0 + 0x234) = (s32) (temp_r4 - 1);
    }
}

void clear_faust_reload_timer(void* p) { *(s32*)((char*)p + 0x234) = 0; }

extern s32 lbl_804A2564[];

void *item_equip_variant_deleting_dtor_80125848(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = lbl_804A2564;
        item_equip_variant_deleting_dtor_80120CF8(arg0, 0);
        if (arg1 > 0) {
            free_obj_heap__10TObjPlayerFPv(arg0);
        }
    }
    return arg0;
}

}
