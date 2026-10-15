#include "types.h"

extern "C" {
s32 get_player_by_client_id(void *);
void set_owner_client__5TItemFPvUs(u8 *arg0, u16 arg1);
}

extern "C" {

void apply_sign_effect__10TObjPlayerFPvi(void* a0, int a1);
void apply_to_child__10TObjPlayerFPvi(void* a0, int a1);
int check_boss2tunnel_field_f4__10TObjPlayerFPv(void* p);
void get_item_info__10TObjPlayerFiiPv(s32 arg0, s32 arg1, s16 *arg2);
void run_with_callback__10TObjPlayerFPvi(void* a0, int a1);
void run_with_transform_context__10TObjPlayerFiii(int a0, int a1, int a2);
int draw_ginja_object(void*);
int draw_model_node_tree(void*);
s32 check_equip_requirements(s32, void *, s32 *);
s32 copy_to_item_data__5TItemFPvPv(s32, void *);
s32 init__9TItemDataFv(void *);
int reset_transform_state__10TObjPlayerFv(void);

    extern unsigned char draw_ginja_model[];
    extern int model_node_draw_callback;
    extern int model_node_visit_callback;
    extern int model_node_matrix_output_cursor;
void run_with_transform_context__10TObjPlayerFiii(int a0, int a1, int a2) { model_node_visit_callback = a1; model_node_matrix_output_cursor = 0; model_node_draw_callback = (int)draw_ginja_model; draw_model_node_tree((void*)(a0)); model_node_draw_callback = 0; model_node_matrix_output_cursor = 0; model_node_visit_callback = 0; reset_transform_state__10TObjPlayerFv(); }

int check_boss2tunnel_field_f4__10TObjPlayerFPv(void* p) { return draw_ginja_object(*(void**)((char*)p + 0xf4)); }

    extern unsigned char draw_ginja_model[];
    extern int model_node_draw_callback;
    extern int model_node_visit_callback;
    extern int model_node_matrix_output_cursor;
void run_with_callback__10TObjPlayerFPvi(void* a0, int a1) { model_node_visit_callback = *(int*)((char*)a0 + 0xe0); model_node_matrix_output_cursor = a1; model_node_draw_callback = (int)draw_ginja_model; draw_model_node_tree((void*)((void*)(*(int*)((char*)a0 + 0xf4)))); model_node_draw_callback = 0; model_node_matrix_output_cursor = 0; model_node_visit_callback = 0; reset_transform_state__10TObjPlayerFv(); }

    extern unsigned char draw_ginja_model[];
    extern int model_node_draw_callback;
    extern int model_node_visit_callback;
    extern int model_node_matrix_output_cursor;
void apply_sign_effect__10TObjPlayerFPvi(void* a0, int a1) { model_node_visit_callback = *(int*)((char*)a0 + 0xe0); model_node_matrix_output_cursor = a1; model_node_draw_callback = (int)draw_ginja_model; draw_model_node_tree((void*)((void*)(*(int*)((char*)a0 + 0xf4)))); model_node_draw_callback = 0; model_node_matrix_output_cursor = 0; model_node_visit_callback = 0; reset_transform_state__10TObjPlayerFv(); }

    extern int model_node_draw_callback;
    extern int model_node_visit_callback;
    extern int model_node_matrix_output_cursor;
void apply_to_child__10TObjPlayerFPvi(void* a0, int a1) { model_node_visit_callback = *(int*)((char*)a0 + 0xe0); model_node_matrix_output_cursor = a1; model_node_draw_callback = 0; draw_model_node_tree((void*)((void*)(*(int*)((char*)a0 + 0xf4)))); model_node_draw_callback = 0; model_node_matrix_output_cursor = 0; model_node_visit_callback = 0; reset_transform_state__10TObjPlayerFv(); }

void set_owner_client__5TItemFPvUs(u8 *arg0, u16 arg1) {
    *(u16 *)((s8 *)arg0 + 0xE4) = arg1;
    *(s32 *)((s8 *)arg0 + 0xF0) = get_player_by_client_id((void *) (arg1));
}

void get_item_info__10TObjPlayerFiiPv(s32 arg0, s32 arg1, s16 *arg2) {
    s32 spC[2];
    s32 sp8;

    init__9TItemDataFv(spC);
    copy_to_item_data__5TItemFPvPv(arg0, spC);
    check_equip_requirements(arg1, spC, &sp8);
    if (arg2 != NULL) {
        *arg2 = (s16) sp8;
    }
}

}
