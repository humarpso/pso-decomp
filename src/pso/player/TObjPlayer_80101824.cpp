#include "types.h"
#include "pso/items/TItemWeapon.h"
#include "pso/item/TItem.h"
#include "pso/player/TObjPlayer.h"

extern "C" {
s32 get_player_by_client_id(void *);
int draw_ginja_object(void*);
int draw_model_node_tree(void*);
s32 check_equip_requirements(s32, void *, s32 *);
s32 init__9TItemDataFv(void *);

    extern unsigned char draw_ginja_model[];
    extern int model_node_draw_callback;
    extern int model_node_visit_callback;
    extern int model_node_matrix_output_cursor;
void TObjPlayer::run_with_transform_context(int a1, int a2) {
    int a0 = (int)this; model_node_visit_callback = a1; model_node_matrix_output_cursor = 0; model_node_draw_callback = (int)::draw_ginja_model; draw_model_node_tree((void*)(a0)); model_node_draw_callback = 0; model_node_matrix_output_cursor = 0; model_node_visit_callback = 0; TObjPlayer::reset_transform_state(); }

int TItemWeapon::check_boss2tunnel_field_f4() { return draw_ginja_object(*(void* *)&(*(void * *)((u8 *)this + 0xF4))); }

void TItemWeapon::run_with_callback(int a1) { model_node_visit_callback = *(int *)&(*(s32 *)((u8 *)this + 0xE0)); model_node_matrix_output_cursor = a1; model_node_draw_callback = (int)::draw_ginja_model; draw_model_node_tree((void*)((void*)(*(int *)&(*(void * *)((u8 *)this + 0xF4))))); model_node_draw_callback = 0; model_node_matrix_output_cursor = 0; model_node_visit_callback = 0; TObjPlayer::reset_transform_state(); }

void TItemWeapon::apply_sign_effect(int a1) { model_node_visit_callback = *(int *)&(*(s32 *)((u8 *)this + 0xE0)); model_node_matrix_output_cursor = a1; model_node_draw_callback = (int)::draw_ginja_model; draw_model_node_tree((void*)((void*)(*(int *)&(*(void * *)((u8 *)this + 0xF4))))); model_node_draw_callback = 0; model_node_matrix_output_cursor = 0; model_node_visit_callback = 0; TObjPlayer::reset_transform_state(); }

void TItemWeapon::apply_to_child(int a1) { model_node_visit_callback = *(int *)&(*(s32 *)((u8 *)this + 0xE0)); model_node_matrix_output_cursor = a1; model_node_draw_callback = 0; draw_model_node_tree((void*)((void*)(*(int *)&(*(void * *)((u8 *)this + 0xF4))))); model_node_draw_callback = 0; model_node_matrix_output_cursor = 0; model_node_visit_callback = 0; TObjPlayer::reset_transform_state(); }

void TItem::set_owner_client(u16 arg1) {
    u8 *arg0 = (u8 *)this;
    this->m_e4 = arg1;
    *(s32 *)&this->m_f0 = get_player_by_client_id((void *) (arg1));
}

void TObjPlayer::get_item_info(s32 arg0, s32 arg1, s16 *arg2) {
    s32 spC[2];
    s32 sp8;

    init__9TItemDataFv(spC);
    ((TItem *)arg0)->copy_to_item_data(spC);
    check_equip_requirements(arg1, spC, &sp8);
    if (arg2 != NULL) {
        *arg2 = (s16) sp8;
    }
}

}
