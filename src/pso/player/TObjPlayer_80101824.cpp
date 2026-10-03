#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

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
M2C_UNK check_equip_requirements(s32, void *, s32 *);
M2C_UNK copy_to_item_data__5TItemFPvPv(s32, void *);
M2C_UNK init__9TItemDataFv(void *);
int reset_transform_state__10TObjPlayerFv(void);

    extern unsigned char draw_ginja_model[];
    extern int lbl_805D53F8;
    extern int lbl_805D53FC;
    extern int lbl_805D5404;
void run_with_transform_context__10TObjPlayerFiii(int a0, int a1, int a2) { lbl_805D53FC = a1; lbl_805D5404 = 0; lbl_805D53F8 = (int)draw_ginja_model; draw_model_node_tree((void*)(a0)); lbl_805D53F8 = 0; lbl_805D5404 = 0; lbl_805D53FC = 0; reset_transform_state__10TObjPlayerFv(); }

int check_boss2tunnel_field_f4__10TObjPlayerFPv(void* p) { return draw_ginja_object(*(void**)((char*)p + 0xf4)); }

    extern unsigned char draw_ginja_model[];
    extern int lbl_805D53F8;
    extern int lbl_805D53FC;
    extern int lbl_805D5404;
void run_with_callback__10TObjPlayerFPvi(void* a0, int a1) { lbl_805D53FC = *(int*)((char*)a0 + 0xe0); lbl_805D5404 = a1; lbl_805D53F8 = (int)draw_ginja_model; draw_model_node_tree((void*)((void*)(*(int*)((char*)a0 + 0xf4)))); lbl_805D53F8 = 0; lbl_805D5404 = 0; lbl_805D53FC = 0; reset_transform_state__10TObjPlayerFv(); }

    extern unsigned char draw_ginja_model[];
    extern int lbl_805D53F8;
    extern int lbl_805D53FC;
    extern int lbl_805D5404;
void apply_sign_effect__10TObjPlayerFPvi(void* a0, int a1) { lbl_805D53FC = *(int*)((char*)a0 + 0xe0); lbl_805D5404 = a1; lbl_805D53F8 = (int)draw_ginja_model; draw_model_node_tree((void*)((void*)(*(int*)((char*)a0 + 0xf4)))); lbl_805D53F8 = 0; lbl_805D5404 = 0; lbl_805D53FC = 0; reset_transform_state__10TObjPlayerFv(); }

    extern int lbl_805D53F8;
    extern int lbl_805D53FC;
    extern int lbl_805D5404;
void apply_to_child__10TObjPlayerFPvi(void* a0, int a1) { lbl_805D53FC = *(int*)((char*)a0 + 0xe0); lbl_805D5404 = a1; lbl_805D53F8 = 0; draw_model_node_tree((void*)((void*)(*(int*)((char*)a0 + 0xf4)))); lbl_805D53F8 = 0; lbl_805D5404 = 0; lbl_805D53FC = 0; reset_transform_state__10TObjPlayerFv(); }

void set_owner_client__5TItemFPvUs(u8 *arg0, u16 arg1) {
    M2C_FIELD(arg0, u16 *, 0xE4) = arg1;
    M2C_FIELD(arg0, s32 *, 0xF0) = get_player_by_client_id((void *) (arg1));
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
