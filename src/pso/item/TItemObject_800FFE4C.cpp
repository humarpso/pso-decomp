#include "types.h"

struct Obj_800FFF68 {
    u8 pad0[0x2C];
    s16 idx;
    u8 pad2E[0xD8 - 0x2E];
    s32 handle;
};

union Pk_800FFF68 { s32 w; u16 h[2]; };

extern "C" {
s32 get_field_d8__10TObjPlayerFPv(void *);
s32 notify_owner__5TItemFPvi(void *, s32);
s32 apply_switch_attack__5TItemFPvi(void *, s32);
s32 consume_item_by_id();
s32 replace_item_with_new_code(u8 *, void *);
u32 find_item_by_id(s32);
s32 copy_to_item_data__5TItemFPvPv(void *, void *);
s32 add_item_flags__10TObjPlayerFPvUi(u32, s32);
s32 has_flag_128__10TObjPlayerFPv(void *);
void *find_eligible_combination_recipe(u32, void *);
void *find_unique_combination_target(u32, void *);
s32 init__9TItemDataFv(u8 *);
void use_combination_recipe__5TItemFPv(void *arg0);
s32 get_main_phase();
u32 build_item_id(u16);
s32 advance_item_id_counter(u16);
extern s32 local_client_id;
extern s32 lbl_805D5450;
extern s32 *TLobby__data_805D6140;
void assign_item_id__6TLobbyFPv(Obj_800FFF68 *o);
}

extern "C" {

int set_flag_1024__11TItemObjectFPv(void* p);
int TObjTailsTailsMove__sub_800FFE04(void);
void TObjTailsTailsMove__sub_800FFE0C(void);
void TObjTailsTailsMove__sub_800FFE10(void);
int TObjTailsTailsMove__sub_800FFE14(void);
int clear_item_flags__10TObjPlayerFPvUi(void*, int);
s32 test_item_flags__10TObjPlayerFPvUi(s32, s32);

int set_flag_1024__11TItemObjectFPv(void* p) { return clear_item_flags__10TObjPlayerFPvUi(p, 1024); }
void use_combination_recipe__5TItemFPv(void *arg0) {
    u8 sp1C[0x14];
    u8 sp8[0x14];
    s32 temp_r30_2;
    s32 temp_r31;
    u32 temp_r3_2;
    void *temp_r30;
    void *temp_r3;
    if ((u32) *(u32 *)((s8 *)arg0 + 0xF0) != 0U) {
        copy_to_item_data__5TItemFPvPv(arg0, sp1C);
        temp_r30 = find_unique_combination_target(*(u32 *)((s8 *)arg0 + 0xF0), sp1C);
        temp_r3 = find_eligible_combination_recipe(*(u32 *)((s8 *)arg0 + 0xF0), sp1C);
        if ((temp_r3 != NULL) && (temp_r30 != NULL)) {
            init__9TItemDataFv(sp8);
            sp8[0] = *(u8 *)((s8 *)temp_r3 + 6);
            sp8[1] = *(u8 *)((s8 *)temp_r3 + 7);
            sp8[2] = *(u8 *)((s8 *)temp_r3 + 8);
            temp_r31 = has_flag_128__10TObjPlayerFPv(temp_r30);
            temp_r30_2 = get_field_d8__10TObjPlayerFPv(temp_r30);
            replace_item_with_new_code(sp8, temp_r30);
            temp_r3_2 = find_item_by_id(temp_r30_2);
            if ((temp_r31 != 0) && (temp_r3_2 != 0U)) {
                add_item_flags__10TObjPlayerFPvUi(temp_r3_2, 0x80);
            }
        }
        apply_switch_attack__5TItemFPvi(arg0, 0x8D);
        notify_owner__5TItemFPvi(arg0, 0x40001421);
        get_field_d8__10TObjPlayerFPv(arg0);
        consume_item_by_id();
    }
}
void assign_item_id__6TLobbyFPv(Obj_800FFF68 *o) {
    Pk_800FFF68 p;
    if (get_main_phase() == 15) {
        if (o->handle == -1) {
            lbl_805D5450 = 1;
            p.w = TLobby__data_805D6140[o->idx];
            o->handle = build_item_id(p.h[1]);
        }
    } else if (o->handle == -1) {
        lbl_805D5450 = 1;
        o->handle = advance_item_id_counter(local_client_id);
    }
}

}
