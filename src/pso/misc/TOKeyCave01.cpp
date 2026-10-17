#include "types.h"
#include "pso/misc/TOKeyCave01.h"
#include "pso/misc/TOKeyCol.h"
#include "pso/TParticleCtrl.h"
#include "pso/misc/TContainerAncient01.h"
#include "pso/misc/TLobby.h"
#include "pso/misc/TOKey.h"
#include "pso/misc/TOKeyMachine01.h"
#include "pso/misc/TRaderMapCore.h"
#include "pso/object/TObjFish.h"
#include "pso/player/TObjPlayer.h"
#include "pso/ui/TAdSinglePlyChrSelectGC.h"

struct RecoveredGlobal_8016C474_lbl_80441BE8 { char value[0x1A]; };
typedef char RecoveredGlobal_8016C474_lbl_80441BE8_size[sizeof(RecoveredGlobal_8016C474_lbl_80441BE8) == 0x1A ? 1 : -1];

struct RecoveredGlobal_8016C474_lbl_80441C04 { char value[0x19]; };
typedef char RecoveredGlobal_8016C474_lbl_80441C04_size[sizeof(RecoveredGlobal_8016C474_lbl_80441C04) == 0x19 ? 1 : -1];

struct RecoveredGlobal_8016C474_lbl_804B2BB8 { s32 value; u8 remaining[0xC]; };
typedef char RecoveredGlobal_8016C474_lbl_804B2BB8_size[sizeof(RecoveredGlobal_8016C474_lbl_804B2BB8) == 0x10 ? 1 : -1];

struct RecoveredGlobal_8016C474_lbl_804B2BD0 { s32 value; u8 remaining[0xC]; };
typedef char RecoveredGlobal_8016C474_lbl_804B2BD0_size[sizeof(RecoveredGlobal_8016C474_lbl_804B2BD0) == 0x10 ? 1 : -1];

struct RecoveredGlobal_8016C5F8___vt__11TOKeyCave01 { s32 value; u8 remaining[0x6C]; };

struct Pkt_8016C79C { u8 code, words; u16 object, zero, reserved, switchId; u8 area, flags; };

struct Self_8016C79C { u8 pad[0x1C]; u16 id; u8 pad1e[0xC8 - 0x1E]; s32 switchId; };

struct VBase_8016C280 { char pad[0x18]; };

struct VObj_8016C280 : VBase_8016C280 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual s32 m8(f32, f32);
};

extern "C" {
s32 is_split_screen();
u8 *load_resource_from_descriptor(void *, s32, s32 *, s32, s32, s32);
void *mem_alloc(u32 size);
u8 *load_gvm_texture_file(s32 arg0);
extern RecoveredGlobal_8016C474_lbl_80441BE8 lbl_80441BE8;
extern RecoveredGlobal_8016C474_lbl_80441C04 lbl_80441C04;
extern RecoveredGlobal_8016C474_lbl_804B2BB8 bm_fs_obj_do_doa_panel_resource_descriptor;
extern RecoveredGlobal_8016C474_lbl_804B2BD0 fs_obj_key_jungle_resource_descriptor;
extern u32 TOKeyCave01__resource_bundle;
extern s32 *TOKeyCave01__texture_lists;
extern s32 key_cave_render_state;
s32 get_main_phase(void);
void *TOKey__ct(void *arg0);
extern s32 __vt__11TOKeyCave01[];
extern s32 TOKeyCave01__class_name;
extern const f32 lbl_805DB73C;
extern const f32 lbl_805DB740;
extern const f32 lbl_805DB74C;
extern const f32 lbl_805DB750;
extern const f32 lbl_805DB754;
u8 *TOKeyCave01__ct(u8 *arg0, s32 arg1, s32 arg2);
s32 get_current_floor();
extern s32 local_client_id;
s32 rotate_matrix_y(int, int);
s32 push_matrix();
s32 pop_matrix();
s32 post_translate_matrix(void *);
void draw_ginja_model(s32 model);
void set_chunk_material_color(f32 *arg);
extern u8 chunk_material_color_half_alpha_f32[];
extern s32 lbl_805D5660;
extern s32 model_render_flags;
void *__dt__11TOKeyCave01Fv(void *arg0, s16 arg1);
void TLobby__sub_8001FE7C(void*, int);
void __dl__7TObjectFPv(void *);
void *__dt__5TOKeyFv(void *arg0, s16 arg1);
void *__nw__7TObjectFUl(int);
void mem_free(void *p);

extern f32 lbl_805DB744;
extern f32 lbl_805DB748;

void TOKeyCave01::vfunc_16() {
    s32 temp_r4;

    if (lbl_805DB748 < this->target_scale) {
        this->target_scale = (f32) (this->target_scale + lbl_805DB744);
    }
    temp_r4 = *(s32 *)&this->unk_FC;
    if (temp_r4 < 0x2000) {
        *(s32 *)&this->unk_FC = (s32) (temp_r4 + 0x333);
    }
}

extern void *tl_05;

void TOKeyCave01::run_task() {
    u8 *arg0 = (u8 *)this;
    this->update_lock_state();
    if ((s32) *(s32 *)&this->m_d4 != 1) {
        this->vfunc_17();
        if (this->is_confirm_pressed() == 1) {
            ((TOKeyCave01 *)arg0)->send_switch_changed((int) (1));
            this->trigger_activate_sound();
            *(s32 *)&this->m_d4 = 1;
        }
    } else {
        this->vfunc_16();
        if (this->is_confirm_pressed() != 1) {
            ((TOKeyCave01 *)arg0)->send_switch_changed((int) (0));
            this->vfunc_19();
            *(s32 *)&this->m_d4 = 0;
        }
    }
}

void TOKeyCave01::render() {
    u8 *arg0 = (u8 *)this;
    s32 temp_r4;
    u8 *temp_r31;
    u8 *temp_r31_2;
    u8 *temp_r31_3;
    if (((VObj_8016C280 *)arg0)->m8(this->m_c0, *(f32 *)&this->m_c4) != 0) {
        TObjFish::set_global_param((int) TOKeyCave01__texture_lists[*(s32 *)&this->m_d4]);
        push_matrix();
        post_translate_matrix((void *) (arg0 + 0x38));
        rotate_matrix_y((int) (0), (int) (this->rotation_y));
        temp_r31 = *(u8 * *)&this->model;
        post_translate_matrix((void *) (temp_r31 + 8));
        draw_ginja_model((*(s32 *)((s8 *)temp_r31 + 4)));
        if ((s32) *(s32 *)&this->m_d4 != 1) {
            temp_r4 = model_render_flags;
            lbl_805D5660 = temp_r4;
            model_render_flags = temp_r4 | 0x10;
            set_chunk_material_color((f32 *)(arg0 + 0xE8));
        }
        TParticleCtrl::begin_effect_render();
        temp_r31_2 = *(u8 **)((s8 *)temp_r31 + 0x2C);
        push_matrix();
        switch ((s32) key_cave_render_state) {
        case 0:
            post_translate_matrix((void *) (arg0 + 0x68));
            break;
        case 1:
            rotate_matrix_y((int) (0), (int) (*(s32 *)&this->unk_FC));
            break;
        }
        post_translate_matrix((void *) (temp_r31_2 + 8));
        draw_ginja_model((*(s32 *)((s8 *)temp_r31_2 + 4)));
        temp_r31_3 = *(u8 **)((s8 *)temp_r31_2 + 0x2C);
        push_matrix();
        post_translate_matrix((void *) (temp_r31_3 + 8));
        draw_ginja_model((*(s32 *)((s8 *)temp_r31_3 + 4)));
        pop_matrix();
        pop_matrix();
        TParticleCtrl::end_effect_render();
        if ((s32) *(s32 *)&this->m_d4 != 1) {
            set_chunk_material_color((f32 *)chunk_material_color_half_alpha_f32);
            model_render_flags = lbl_805D5660;
        }
        pop_matrix();
    }
}

void *TOKeyCave01::create(void *arg0) {
    void *o = __nw__7TObjectFUl(0x100);
    if (o != NULL) {
        o = TOKeyCave01__ct((u8 *)(o), (s32)(tl_05), (s32)(arg0));
    }
    return o;
}

void TOKeyCave01::free_objects() {
    if ((s32 *) TOKeyCave01__texture_lists != NULL) {
        TObjPlayer::free_if_valid(*TOKeyCave01__texture_lists);
        if ((s32 *) TOKeyCave01__texture_lists != NULL) {
            mem_free(TOKeyCave01__texture_lists);
            TOKeyCave01__texture_lists = NULL;
        }
    }
    if ((u32) TOKeyCave01__resource_bundle != 0U) {
        TLobby__sub_8001FE7C((void*)TOKeyCave01__resource_bundle, 1);
        TOKeyCave01__resource_bundle = 0U;
    }
}

void TOKeyCave01::load_resources() {
    s32 global_state;
    u8 *temp_r3;
    u8 *temp_r3_2;
    u8 *var_r0;
    u8 *var_r0_2;
    global_state = TOKeyMachine01::get_global_state();
    if ((TContainerAncient01::is_global_state_in_table() == 1) || (global_state == 0x1C) || (global_state == 0x1D)) {
        temp_r3 = (u8 *)(((TAdSinglePlyChrSelectGC *)0x440)->alloc());
        var_r0 = (u8 *)(temp_r3);
        if (var_r0 != NULL) {
            var_r0 = (u8 *)(load_resource_from_descriptor(temp_r3, 1, &fs_obj_key_jungle_resource_descriptor.value, 0, 0, 0));
        }
        (*(u8 * *)&TOKeyCave01__resource_bundle) = var_r0;
        (*(u8 * *)&TOKeyCave01__texture_lists) = (u8 *)mem_alloc(8);
        *(s32 *)((s8 *)(*(u8 * *)&TOKeyCave01__texture_lists) + 0) = (s32)load_gvm_texture_file((s32)(&lbl_80441BE8.value));
        *(s32 *)((s8 *)(*(u8 * *)&TOKeyCave01__texture_lists) + 4) = (s32) *(s32 *)((s8 *)(*(u8 **)((s8 *)(*(u8 * *)&TOKeyCave01__resource_bundle) + 0x42C)) + 0xC);
        key_cave_render_state = 1;
        return;
    }
    temp_r3_2 = (u8 *)(((TAdSinglePlyChrSelectGC *)0x440)->alloc());
    var_r0_2 = (u8 *)(temp_r3_2);
    if (var_r0_2 != NULL) {
        var_r0_2 = (u8 *)(load_resource_from_descriptor(temp_r3_2, 1, &bm_fs_obj_do_doa_panel_resource_descriptor.value, 0, 0, 0));
    }
    (*(u8 * *)&TOKeyCave01__resource_bundle) = var_r0_2;
    (*(u8 * *)&TOKeyCave01__texture_lists) = (u8 *)mem_alloc(8);
    *(s32 *)((s8 *)(*(u8 * *)&TOKeyCave01__texture_lists) + 0) = (s32)load_gvm_texture_file((s32)(&lbl_80441C04.value));
    *(s32 *)((s8 *)(*(u8 * *)&TOKeyCave01__texture_lists) + 4) = (s32) *(s32 *)((s8 *)(*(u8 **)((s8 *)(*(u8 * *)&TOKeyCave01__resource_bundle) + 0x42C)) + 0xC);
    key_cave_render_state = 0;
}

void *__dt__11TOKeyCave01Fv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__11TOKeyCave01;
        __dt__5TOKeyFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

u8 *TOKeyCave01__ct(u8 *arg0, s32 arg1, s32 arg2) {
    TOKey__ct(arg0);
    *(s32 **)((s8 *)arg0 + 0x18) = &(*(RecoveredGlobal_8016C5F8___vt__11TOKeyCave01 *)&__vt__11TOKeyCave01).value;
    *(s32 *)((s8 *)arg0 + 0) = (s32) TOKeyCave01__class_name;
    ((TOKeyCave01 *)(arg0))->apply_object_set_data((void *)arg2);
    ((TOKey *)arg0)->init_switch_id();
    ((TOKeyCave01 *)arg0)->texture_id = (s32) *TOKeyCave01__texture_lists;
    *(s32 *)((s8 *)arg0 + 0x34) = (s32) *(s32 *)((s8 *)(*(u8 **)((s8 *)(*(u8 * *)&TOKeyCave01__resource_bundle) + 0x42C)) + 8);
    ((TOKeyCave01 *)arg0)->m_c0 = (f32) lbl_805DB74C;
    *(f32 *)((s8 *)arg0 + 0xC4) = (f32) lbl_805DB750;
    *(f32 *)((s8 *)arg0 + 0xCC) = (f32) lbl_805DB754;
    if (get_main_phase() != 0xF) {
        if (TRaderMapCore::is_not_split_screen() == 1) {
            goto block_2;
        }
    } else {
block_2:
        if ((s32) *(s32 *)&((TOKeyCave01 *)arg0)->m_d0 != 2) {
            if ((s32) *(s32 *)((s8 *)arg0 + 0x88) < 0) {
                *(s32 *)&((TOKeyCave01 *)arg0)->m_d0 = 1;
            } else {
                goto block_5;
            }
        } else {
block_5:
            *(s32 *)&((TOKeyCave01 *)arg0)->m_d0 = 0;
        }
    }
    ((TOKeyCave01 *)arg0)->m_e8 = (f32) lbl_805DB73C;
    ((TOKeyCave01 *)arg0)->m_ec = (f32) lbl_805DB73C;
    *(f32 *)((s8 *)arg0 + 0xF0) = (f32) lbl_805DB73C;
    ((TOKeyCave01 *)arg0)->m_f4 = (f32) lbl_805DB73C;
    ((TOKeyCave01 *)arg0)->m_f8 = 0;
    *(f32 *)((s8 *)arg0 + 0x70) = (f32) lbl_805DB740;
    ((TOKeyCave01 *)arg0)->target_scale = (f32) lbl_805DB740;
    ((TOKeyCave01 *)arg0)->scale = (f32) lbl_805DB740;
    *(s32 *)((s8 *)arg0 + 0xFC) = 0;
    return arg0;
}

void TOKeyCol::vfunc_25() {  }
s32 TOKeyCol::is_confirm_pressed() {
    s32 temp_r0;
    s32 var_r31;
    s32 var_r3;
    var_r31 = 0;
    temp_r0 = *(s32 *)&this->m_d0;
    switch (temp_r0) {
    case 0:
        if (is_split_screen() == 1) {
            var_r3 = ((TOKey *)((u8 *)this))->is_any_player_in_range();
        } else {
            var_r3 = ((TOKey *)((u8 *)this))->is_local_player_in_range();
        }
        if (((s32) *(s32 *)&this->m_d4 == 1) || (var_r3 == 1)) {
            var_r31 = 1;
        }
        break;
    case 1:
        var_r31 = ((TOKey *)((u8 *)this))->is_any_player_in_range();
        break;
    }
    return var_r31;
}
void TOKeyCol::send_switch_changed(s32 flags) {
    Self_8016C79C *self = (Self_8016C79C *)this;
    Pkt_8016C79C pkt;
    ((TLobby *)(&pkt))->init_6x05_switch_changed();
    pkt.object = self->id;
    pkt.zero = local_client_id;
    pkt.switchId = self->switchId;
    pkt.area = get_current_floor();
    pkt.flags = flags;
    ((TLobby *)(&pkt))->finalize_and_send_60();
}

}
