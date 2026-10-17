#include "types.h"
#include "pso/boss/TBoss2DeRolLe.h"
#include "pso/player/TObjPlayer_800FFFF8.h"
#include "pso/system/ChunkMaterialState.h"
#include "pso/system/GinjaMaterial.h"
#include "pso/unk/text_80141550.h"
#include "pso/unk/text_803D96A8.h"
#include "pso/render/depth_buffer.h"
#include "pso/item/TItem.h"
#include "pso/player/TObjPlayer.h"
#include "pso/TItemLoad.h"
#include "pso/TParticleCtrl.h"
#include "pso/item/TItemProArmor.h"

struct RecoveredGlobal_80100070_lbl_8049E8F8 {
    s32 value;
    u8 remaining[0x5C];
};

struct RecoveredGlobal_80100070_lbl_8049E958 {
    s32 value;
    u8 remaining[0x134];
};

struct RecoveredGlobal_80100070_lbl_8050BEC0 {
    s32 value;
    u8 remaining[0x1C];
};

struct RecoveredGlobal_80100070_lbl_8058D4C0 {
    s32 value;
    u8 remaining[0xC];
};

extern "C" {
s32 rotate_matrix_y(s32, s32);
s32 push_matrix();
s32 post_translate_matrix(void *);
extern RecoveredGlobal_80100070_lbl_8049E8F8 item_box_primary_colors;
extern RecoveredGlobal_80100070_lbl_8049E958 item_box_secondary_colors;
extern RecoveredGlobal_80100070_lbl_8050BEC0 saved_model_draw_color;
extern RecoveredGlobal_80100070_lbl_8058D4C0 model_material_color;
extern s32 lbl_805D5660;
extern s32 lbl_805D5664;
extern s32 lbl_805D5668;
extern s32 chunk_polygon_flags_or_mask;
extern s32 chunk_polygon_flags_and_mask;
extern s32 model_render_flags;
s32 PPCSync();
s32 is_wrapped__9TItemDataFPv(s32);
s32 find_item_by_id();
s32 scroll_ginja_mesh_uvs(s32, s32, s32, s32, s32);
s8 TObjPlayer__sub_80102C30();
u16 get_packed_value__9TItemDataFPv(void *arg0);
s32 is_usable__9TItemDataFPv(void *arg0);

void TItem::apply_item_flags(s32 arg1) {
    if (is_usable__9TItemDataFPv((void *)arg1) != 0) {
        *(s32 *)&this->m_dc = (s32) (*(s32 *)&this->m_dc | 0x100);
        *(s16 *)&this->m_e8 = get_packed_value__9TItemDataFPv((void *)arg1);
    }
    if (is_wrapped__9TItemDataFPv(arg1) != 0) {
        *(s32 *)&this->m_dc = (s32) (*(s32 *)&this->m_dc | 0x400);
    }
}
}
void TItem::render_following_owner() { }
extern "C" {
}
void TItem::render_owned() { }
extern "C" {

typedef char RecoveredGlobal_80100070_lbl_8049E8F8_size[sizeof(RecoveredGlobal_80100070_lbl_8049E8F8) == 0x60 ? 1 : -1];
typedef char RecoveredGlobal_80100070_lbl_8049E958_size[sizeof(RecoveredGlobal_80100070_lbl_8049E958) == 0x138 ? 1 : -1];
typedef char RecoveredGlobal_80100070_lbl_8050BEC0_size[sizeof(RecoveredGlobal_80100070_lbl_8050BEC0) == 0x20 ? 1 : -1];
typedef char RecoveredGlobal_80100070_lbl_8058D4C0_size[sizeof(RecoveredGlobal_80100070_lbl_8058D4C0) == 0x10 ? 1 : -1];
void TObjPlayer__sub_80100070(u8 *arg0) {
    u8 *spC;
    s32 sp8;
    TItemLoad::get_model_ids((u8)((int)((int) (6U))), (s32 *)(&spC), (s32 *)(&sp8));
    if (spC != NULL) {
        lbl_805D5660 = model_render_flags;
        lbl_805D5664 = chunk_polygon_flags_and_mask;
        lbl_805D5668 = chunk_polygon_flags_or_mask;
        copy_vec4__13TRaderMapCoreFPvPv((&saved_model_draw_color.value), (&model_material_color.value));
        model_render_flags |= 0x10;
        set_depth_buffer_settings_id(((int) (3)));
        TParticleCtrl::begin_effect_render();
        TObjPlayer::notify_fish_if_valid((s32)((int) (sp8)));
        push_matrix();
        post_translate_matrix((void *) (arg0 + 0x38));
        rotate_matrix_y((s32)((int) (0)), (s32)((int) (*(s32 *)((s8 *)arg0 + 0x60))));
        set_chunk_material_color((f32 *)((u8 *)&item_box_primary_colors.value + ((s8) *(u8 *)((s8 *)arg0 + 0xEA) * 0x10)));
        draw_ginja_model((*(s32 *)((s8 *)spC + 4)));
        set_chunk_material_color((f32 *)((u8 *)&item_box_secondary_colors.value + ((s8) *(u8 *)((s8 *)arg0 + 0xEA) * 0x10)));
        draw_ginja_model((*(s32 *)((s8 *)(*(u8 **)((s8 *)spC + 0x2C)) + 4)));
        pop_matrix();
        TParticleCtrl::end_effect_render();
        TObjPlayer::reset_transform_state();
        func_80141618__Fv();
        copy_vec4__13TRaderMapCoreFPvPv((&model_material_color.value), (&saved_model_draw_color.value));
        chunk_polygon_flags_and_mask = lbl_805D5664;
        chunk_polygon_flags_or_mask = lbl_805D5668;
        model_render_flags = lbl_805D5660;
    }
}

void TObjPlayer::draw_item_model() {
    u8 *arg0 = (u8 *)this;
    u32 spC;
    s32 sp8;

    TItemLoad::get_model_ids((u8)(*(u8 *)((s8 *)arg0 + 0xEF)), (s32 *)(&spC), (s32 *)(&sp8));
    if (spC != 0U) {
        set_depth_buffer_settings_id(3);
        TParticleCtrl::begin_effect_render();
        TObjPlayer::notify_fish_if_valid(sp8);
        push_matrix();
        post_translate_matrix((u8 *)&this->position);
        rotate_matrix_y(0, this->rotation_y);
        draw_ginja_object((void *)spC);
        pop_matrix();
        TParticleCtrl::end_effect_render();
        TObjPlayer::reset_transform_state();
        func_80141618__Fv();
    }
}

void TItem::sub_8010043C(u8 arg1) {
    u8 temp_r0;
    this->model_index = arg1;
    temp_r0 = this->model_index;
    if (temp_r0 < 0xBU) {
        if (temp_r0 == 7) {
            *(s8 *)&this->m_ea = 5;
        }
        return;
    }
    this->model_index = 2U;
    *(s8 *)&this->m_ea = 0;
}

u16 TObjPlayer__sub_80100474(void* p) { return ((TItem *)p)->m_e8; }

void TObjPlayer__sub_8010047C(u8 *arg0, s16 arg1) {
    if (*(s32 *)((s8 *)arg0 + 0xDC) & 0x100) {
        *(s16 *)((s8 *)arg0 + 0xE8) = arg1;
    }
}

s32 TObjPlayer::query_game_join_id() {
    s32 temp_r3;

    temp_r3 = find_item_by_id();
    if ((temp_r3 != 0) && (TObjPlayer__sub_80102C30() == 2)) {
        return temp_r3;
    }
    return 0;
}
void TObjPlayer::submit_computer_command() {
    s32 a, b, c;
    scroll_ginja_mesh_uvs(*(s32 *)((s8 *)this + 4), a, b, c, 1);
    PPCSync();
}

}
