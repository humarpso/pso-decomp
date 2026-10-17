#include "types.h"
#include "pso/object/TObjMotion.h"
#include "pso/item/TItem.h"
#include "pso/item/TItemData.h"
#include "pso/misc/TShopEquipmentSellWindow.h"
#include "pso/player/TObjPlayer.h"

struct Player_8010147C { u8 pad[0xF0]; u32 f_F0; };

extern "C" {
void get_current_matrix(void *m);
s32 rotate_matrix_by_node_angles(void *, void *);
s32 push_matrix();
s32 pop_matrix();
s32 scale_current_matrix(void *);
s32 post_translate_matrix(void *);
extern s32 (*model_node_draw_callback)(s32);
extern s32 (*model_node_visit_callback)(void *);
extern u8 *model_node_matrix_output_cursor;
void draw_model_node_tree(u8 *arg0);
u16 obj_getField1c(void *);
s32 set_item_count__13TUnk_804B9870Fs(s32, s32);
s32 TLobby__sub_80103B04();
void set_indexed_flags(void *arg0, s32 index, s32 flags);
u32 test_item_flags__10TObjPlayerFUl(void *, int);
void TItem__sub_801013E8(void *arg0);
void claim_ownership__5TItemFii(s32 arg0, s32 arg1);
int get_item_chunk_buffer(int a0);
s32 is_custom_name_srank__9TItemDataFPv(u8 *arg0);
s32 is_rare_item__9TItemDataFPv(u8 *item);
s32 pop_free_id__6TLobbyFv();
void disallow_rendering__7TObjectFv(void *arg0);
void queue_destruction__7TObjectFv(void *arg0);

void TItem::update_item_data() {
    s32 sp8[4];

    copy_to_item_data((void *)(&sp8));
    is_custom_name_srank__9TItemDataFPv((u8 *)&sp8);
}

void TItem__sub_801013E8(void *arg0) {
    s32 sp8[4];

    ((TItem *)arg0)->copy_to_item_data((void *)(&sp8));
    is_rare_item__9TItemDataFPv((u8 *)&sp8);
}

void TItem::destroy() { unregister_item(); disallow_rendering__7TObjectFv(this); queue_destruction__7TObjectFv(this); }

void TItem::copy_item_data_and_process() {
    s32 sp8[4];

    copy_to_item_data((void *)(&sp8));
    ((TShopEquipmentSellWindow *)(&sp8))->get_item_price_if_valid();
}

u32 TItem::get_usable_action_flags(u32 mask, u32 kind) {
    u8 item[0x14];
    u32 r;
    ((TItem *)((Player_8010147C *)this))->copy_to_item_data(item);
    if (kind == 0) {
        kind = ((Player_8010147C *)this)->f_F0;
    }
    r = ((TItemData *)item)->calc_action_flags((s32)mask, (u8 *)kind);
    if (test_item_flags__10TObjPlayerFUl(((Player_8010147C *)this), 0x200) != 0) {
        r |= 2;
    }
    if (r == 0 && ((TObjPlayer *)((Player_8010147C *)this))->has_flag_128() != 0) {
        r |= 0x10;
        r &= ~2;
    }
    return r & mask;
}

void TItem::unregister_from_world() {
    s32 arg0 = (s32)this;
  if (obj_getField1c((void *)((void *) arg0)) != ((-1U) & 0xFFFF))
  {
    if ((!arg0) && (!arg0))
    {
    }
    ((TUnk_804AF8A0 *)arg0)->unregister_object_by_id();
    obj_getField1c((void *)((void *) arg0));
    TLobby__sub_80103B04();
    set_item_count__13TUnk_804B9870Fs((s32)((void *) arg0), 0xFFFF);
    set_indexed_flags((void *)arg0, 0, 1);
  }
}

void claim_ownership__5TItemFii(s32 arg0, s32 arg1) {
    if ((u16) obj_getField1c((void *)arg0) == 0xFFFF) {
        set_item_count__13TUnk_804B9870Fs(arg0, pop_free_id__6TLobbyFv());
        ((TObjPlayer *)arg0)->reset_photon_effect();
        if (arg1 != 0) {
            ((TObjPlayer *)arg0)->clear_player_status_flag(0, 1);
        }
    }
}

void TItem::set_mode(s8 arg1) {
    if (arg1 == 3) {
        *(s32 *)&this->m_f0 = 0;
    }
    if (arg1 == 0) {
        *(s32 *)&this->m_f0 = 0;
        claim_ownership__5TItemFii((s32)this, 0);
    } else {
        unregister_from_world();
    }
    *(s8 *)&this->render_mode = arg1;
}

s32 TItem::register_attack() {
    s32 sp8[8];
    s32 temp_r3;

    copy_to_item_data(sp8);
    temp_r3 = get_item_chunk_buffer(0);
    ((TItemData *)sp8)->format_item_name((char *)temp_r3);
    return temp_r3;
}

void TItem::calc_display_grade() {
    s32 sp8[4];

    copy_to_item_data((void *)(&sp8));
    ((TItemData *)(&sp8))->calc_display_grade();
}
void draw_model_node_tree(u8 *arg0) {
    s32 temp_r30;
    u8 *var_r31;
    var_r31 = arg0;
    do {
        temp_r30 = *(s32 *)((s8 *)var_r31 + 0);
        if ((u32) (temp_r30 & 7) == 7) {
            push_matrix();
            if (model_node_matrix_output_cursor != NULL) {
                get_current_matrix(model_node_matrix_output_cursor);
                model_node_matrix_output_cursor += 0x30;
            }
            if (((s32 (*)(void *)) model_node_visit_callback) != NULL) {
                model_node_visit_callback(var_r31);
            }
            if (!(temp_r30 & 8) && (((s32 (*)(s32)) model_node_draw_callback) != NULL)) {
                model_node_draw_callback(*(s32 *)((s8 *)var_r31 + 4));
            }
            if (!(temp_r30 & 0x10)) {
                draw_model_node_tree(*(u8 **)((s8 *)var_r31 + 0x2C));
            }
            pop_matrix();
        } else {
            push_matrix();
            if (!(temp_r30 & 1)) {
                post_translate_matrix((void *) (var_r31 + 8));
            }
            if (!(temp_r30 & 2)) {
                rotate_matrix_by_node_angles((void *) (var_r31 + 0x14), (void *) (temp_r30 & 0x20));
            }
            if (!(temp_r30 & 4)) {
                scale_current_matrix((void *) (var_r31 + 0x20));
            }
            if (((s32 (*)(void *)) model_node_visit_callback) != NULL) {
                model_node_visit_callback(var_r31);
            }
            if (model_node_matrix_output_cursor != NULL) {
                get_current_matrix(model_node_matrix_output_cursor);
                model_node_matrix_output_cursor += 0x30;
            }
            if (!(temp_r30 & 8) && (((s32 (*)(s32)) model_node_draw_callback) != NULL)) {
                model_node_draw_callback(*(s32 *)((s8 *)var_r31 + 4));
            }
            if (!(temp_r30 & 0x10)) {
                draw_model_node_tree(*(u8 **)((s8 *)var_r31 + 0x2C));
            }
            pop_matrix();
        }
        var_r31 = *(u8 **)((s8 *)var_r31 + 0x30);
    } while (var_r31 != NULL);
}

}
