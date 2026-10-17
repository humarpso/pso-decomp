#include "types.h"
#include "pso/item/TItem.h"
#include "pso/item/TItemObject.h"
#include "pso/misc/TLobby.h"
#include "pso/player/TObjPlayer.h"

struct Obj_800FFF68 {
    u8 pad0[0x2C];
    s16 idx;
    u8 pad2E[0xD8 - 0x2E];
    s32 handle;
};

union Pk_800FFF68 { s32 w; u16 h[2]; };

extern "C" {
s32 consume_item_by_id();
s32 replace_item_with_new_code(u8 *, void *);
u32 find_item_by_id(s32);
void *find_eligible_combination_recipe(u32, void *);
void *find_unique_combination_target(u32, void *);
s32 init__9TItemDataFv(u8 *);
s32 get_main_phase();
u32 build_item_id(u16);
s32 advance_item_id_counter(u16);
extern s32 local_client_id;
extern s32 lbl_805D5450;
extern s32 *TLobby__data_805D6140;
int clear_item_flags__10TObjPlayerFUl(void*, int);

int TItemObject::set_flag_1024() { return clear_item_flags__10TObjPlayerFUl(this, 1024); }
void TItem::use_combination_recipe() {
    u8 sp1C[0x14];
    u8 sp8[0x14];
    s32 temp_r30_2;
    s32 temp_r31;
    u32 temp_r3_2;
    void *unique_combination_target;
    void *eligible_combination_recipe;
    if ((u32) this->m_f0 != 0U) {
        copy_to_item_data(sp1C);
        unique_combination_target = find_unique_combination_target(this->m_f0, sp1C);
        eligible_combination_recipe = find_eligible_combination_recipe(this->m_f0, sp1C);
        if ((eligible_combination_recipe != NULL) && (unique_combination_target != NULL)) {
            init__9TItemDataFv(sp8);
            sp8[0] = *(u8 *)((s8 *)eligible_combination_recipe + 6);
            sp8[1] = *(u8 *)((s8 *)eligible_combination_recipe + 7);
            sp8[2] = *(u8 *)((s8 *)eligible_combination_recipe + 8);
            temp_r31 = ((TObjPlayer *)unique_combination_target)->has_flag_128();
            temp_r30_2 = ((TItem *)unique_combination_target)->get_field_d8();
            replace_item_with_new_code(sp8, unique_combination_target);
            temp_r3_2 = find_item_by_id(temp_r30_2);
            if ((temp_r31 != 0) && (temp_r3_2 != 0U)) {
                ((TObjPlayer *)temp_r3_2)->add_item_flags(0x80);
            }
        }
        apply_switch_attack(0x8D);
        notify_owner(0x40001421);
        get_field_d8();
        consume_item_by_id();
    }
}
void TItem::assign_item_id() {
    Obj_800FFF68 *o = (Obj_800FFF68 *)this;
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
