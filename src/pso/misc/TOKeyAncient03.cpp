#include "types.h"
#include "pso/misc/TOKeyAncient03.h"
#include "pso/misc/TOKeyCave01.h"
#include "pso/TParticleCtrl.h"
#include "pso/misc/TLobby.h"
#include "pso/misc/TOKey.h"
#include "pso/misc/TOKeyMachine01.h"
#include "pso/object/TObjFish.h"
#include "pso/player/TObjPlayer.h"
#include "pso/ui/TAdSinglePlyChrSelectGC.h"

struct RecoveredGlobal_8016BF68_lbl_80441B4C {
    s32 value;
    u8 remaining[0x8C];
};

struct RecoveredGlobal_8016C010_lbl_80441B4C {
    s32 value;
    u8 remaining[0x8C];
};

struct RecoveredGlobal_8016BC84_lbl_80441ACC {
    s32 value;
    u8 remaining[0x14];
};

struct RecoveredGlobal_8016BC84_lbl_804B2B30 {
    s32 value;
    u8 remaining[0xC];
};

struct RecoveredGlobal_8016BD60___vt__14TOKeyAncient03 { s32 value; u8 remaining[0x6C]; };

struct Obj_8016B9A4 { u8 pad[0x6c]; f32 f; };

struct Pkt_8016BF08 { u8 code, words; u16 object, zero, reserved, switchId; u8 area, flags; };

struct Self_8016BF08 { u8 pad[0x1C]; u16 id; u8 pad1e[0xC8 - 0x1E]; s32 switchId; };

struct VBase_18_8016BABC { char pad[0x18]; };

struct VObj_18_8016BABC : VBase_18_8016BABC {
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
extern const f32 lbl_805DB718;
extern const f32 lbl_805DB71C;
extern const f32 lbl_805DB720;
extern const f32 lbl_805DB724;
extern const f32 lbl_805DB738;
extern const f32 lbl_805DB73C;
extern const f32 lbl_805DB740;
extern const f32 lbl_805DB744;
s32 play_sound_effect(s32, s32, s32, s32);
extern RecoveredGlobal_8016BF68_lbl_80441B4C lbl_80441B4C;
extern s32 enable_v2_features;
void TOKeyCave01__vt16(s32 arg0);
u8 *load_resource_from_descriptor(void *, s32, s32 *, s32, s32, s32);
void *mem_alloc(u32 size);
u8 *load_gvm_texture_file(s32 arg0);
extern RecoveredGlobal_8016BC84_lbl_80441ACC lbl_80441ACC;
extern RecoveredGlobal_8016BC84_lbl_804B2B30 bm_fs_obj_o_doorpanel_resource_descriptor;
extern u32 TOKeyAncient03__model_archive;
extern void *TOKeyAncient03__texture_variants;
s32 get_main_phase(void);
u8 * TOKey__ct(void *);
extern s32 __vt__14TOKeyAncient03[];
extern s32 TOKeyAncient03__class_name;
extern const f32 lbl_805DB72C;
extern const f32 lbl_805DB730;
u8 *TOKeyAncient03__ct(u8 *arg0, s32 arg1, s32 arg2);
extern const f32 lbl_805DB728;
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
void TOKeyAncient03__vt16(s32 arg0);
void *__dt__14TOKeyAncient03Fv(void *arg0, s16 arg1);
void TLobby__sub_8001FE7C(void*, int);
void __dl__7TObjectFPv(void *);
void *__dt__5TOKeyFv(void *arg0, s16 arg1);
void *__nw__7TObjectFUl(int);
void mem_free(void *p);

void TOKeyAncient03::vfunc_19() {
    s32 arg0 = (s32)this;
    play_sound_effect(0x4004B20D, arg0 + 0x38, 0, 0);
}

void TOKeyAncient03__vt16(s32 arg0) {
    play_sound_effect(0x4004B20D, arg0 + 0x38, 0, 0);
}

extern void *tl_05;

void TOKeyAncient03::vfunc_17() {
    f32 temp_f1;
    if ((s32) this->m_f8 == 1) {
        this->m_ec = (f32) (this->m_ec + lbl_805DB718);
        if (lbl_805DB71C <= this->m_ec) {
            this->m_f8 = 0;
        }
    } else {
        this->m_ec = (f32) (this->m_ec - lbl_805DB718);
        if (this->m_ec <= lbl_805DB720) {
            this->m_f8 = 1;
        }
    }
    temp_f1 = this->target_scale;
    if (temp_f1 < lbl_805DB720) {
        this->target_scale = (f32) (temp_f1 - lbl_805DB724);
    }
}

void TOKeyAncient03::vfunc_16() {
    Obj_8016B9A4 *self = (Obj_8016B9A4 *)this;
    if (lbl_805DB728 < self->f) {
        self->f += lbl_805DB724;
    }
}

void TOKeyAncient03::run_task() {
    u8 *arg0 = (u8 *)this;
    this->update_lock_state();
    if ((s32) *(s32 *)&this->m_d4 != 1) {
        this->vfunc_17();
        if (this->is_confirm_pressed() == 1) {
            ((TOKeyAncient03 *)arg0)->send_switch_changed(1);
            this->trigger_activate_sound();
            *(s32 *)&this->m_d4 = 1;
        }
    } else {
        this->vfunc_16();
        if (this->is_confirm_pressed() != 1) {
            ((TOKeyAncient03 *)arg0)->send_switch_changed(0);
            this->vfunc_19();
            *(s32 *)&this->m_d4 = 0;
        }
    }
}

void TOKeyAncient03::render() {
    u8 *arg0 = (u8 *)this;
    s32 temp_r4;
    u8 *temp_r31;
    u8 *temp_r31_2;
    u8 *temp_r31_3;
    if (((VObj_18_8016BABC *)arg0)->m8(this->m_c0, *(f32 *)&this->m_c4) != 0) {
        TObjFish::set_global_param((int) (*(s32 *)((s8 *)TOKeyAncient03__texture_variants + (*(s32 *)&this->m_d4 * 4))));
        push_matrix();
        post_translate_matrix(arg0 + 0x38);
        rotate_matrix_y(0, this->rotation_y);
        temp_r31 = *(u8 * *)&this->model;
        post_translate_matrix(temp_r31 + 8);
        draw_ginja_model((*(s32 *)((s8 *)temp_r31 + 4)));
        if ((s32) *(s32 *)&this->m_d4 != 1) {
            temp_r4 = model_render_flags;
            lbl_805D5660 = temp_r4;
            model_render_flags = temp_r4 | 0x10;
            set_chunk_material_color(&this->m_e8);
        }
        temp_r31_2 = *(u8 **)((s8 *)temp_r31 + 0x2C);
        push_matrix();
        post_translate_matrix(arg0 + 0x68);
        post_translate_matrix(temp_r31_2 + 8);
        draw_ginja_model((*(s32 *)((s8 *)temp_r31_2 + 4)));
        temp_r31_3 = *(u8 **)((s8 *)temp_r31_2 + 0x2C);
        push_matrix();
        post_translate_matrix(temp_r31_3 + 8);
        TParticleCtrl::begin_effect_render();
        draw_ginja_model((*(s32 *)((s8 *)temp_r31_3 + 4)));
        TParticleCtrl::end_effect_render();
        pop_matrix();
        pop_matrix();
        if ((s32) *(s32 *)&this->m_d4 != 1) {
            set_chunk_material_color((f32 *)chunk_material_color_half_alpha_f32);
            model_render_flags = lbl_805D5660;
        }
        pop_matrix();
    }
}

void *TOKeyAncient03::create(void *arg0) {
    void *o = __nw__7TObjectFUl(0xFC);
    if (o != NULL) {
        o = TOKeyAncient03__ct((u8 *)o, (s32)tl_05, (s32)arg0);
    }
    return o;
}

void TOKeyAncient03::cleanup_refs() {
    if ((void *) TOKeyAncient03__texture_variants != NULL) {
        TObjPlayer::free_if_valid(*(s32 *)((s8 *)TOKeyAncient03__texture_variants + 4));
        if ((void *) TOKeyAncient03__texture_variants != NULL) {
            mem_free(TOKeyAncient03__texture_variants);
            TOKeyAncient03__texture_variants = NULL;
        }
    }
    if ((u32) TOKeyAncient03__model_archive != 0U) {
        TLobby__sub_8001FE7C((void*)TOKeyAncient03__model_archive, 1);
        TOKeyAncient03__model_archive = 0U;
    }
}

typedef char RecoveredGlobal_8016BC84_lbl_80441ACC_size[sizeof(RecoveredGlobal_8016BC84_lbl_80441ACC) == 0x18 ? 1 : -1];
typedef char RecoveredGlobal_8016BC84_lbl_804B2B30_size[sizeof(RecoveredGlobal_8016BC84_lbl_804B2B30) == 0x10 ? 1 : -1];
void TOKeyAncient03::load_resources() {
    s32 *temp_r3_2;
    u8 *temp_r3;
    u8 *var_r0;
    temp_r3 = (u8 *)(((TAdSinglePlyChrSelectGC *)0x440)->alloc());
    var_r0 = temp_r3;
    if (var_r0 != NULL) {
        var_r0 = (u8 *)(load_resource_from_descriptor(temp_r3, 1, &bm_fs_obj_o_doorpanel_resource_descriptor.value, 0, 0, 0));
    }
    (*(u8 * *)&TOKeyAncient03__model_archive) = var_r0;
    temp_r3_2 = (s32 *)(mem_alloc(8));
    (*(s32 * *)&TOKeyAncient03__texture_variants) = temp_r3_2;
    *temp_r3_2 = *(s32 *)((s8 *)(*(u8 **)((s8 *)(*(u8 * *)&TOKeyAncient03__model_archive) + 0x42C)) + 0xC);
    *(s32 *)((s8 *)(*(s32 * *)&TOKeyAncient03__texture_variants) + 4) = (s32)load_gvm_texture_file((s32)&lbl_80441ACC.value);
}

void *__dt__14TOKeyAncient03Fv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__14TOKeyAncient03;
        __dt__5TOKeyFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

u8 *TOKeyAncient03__ct(u8 *arg0, s32 arg1, s32 arg2) {
    TOKey__ct(arg0);
    *(s32 **)((s8 *)arg0 + 0x18) = &(*(RecoveredGlobal_8016BD60___vt__14TOKeyAncient03 *)&__vt__14TOKeyAncient03).value;
    *(s32 *)((s8 *)arg0 + 0) = (s32) TOKeyAncient03__class_name;
    ((TOKeyAncient03 *)(arg0))->apply_object_set_data((void *)arg2);
    ((TOKey *)arg0)->init_switch_id();
    ((TOKeyAncient03 *)arg0)->texture_id = (s32) *(*(s32 * *)&TOKeyAncient03__texture_variants);
    *(u8 * *)&((TOKeyAncient03 *)arg0)->model = (unsigned char *) ((void *) *(void **)((s8 *)(*(u8 **)((s8 *)(*(u8 * *)&TOKeyAncient03__model_archive) + 0x42C)) + 8));
    ((TOKeyAncient03 *)arg0)->m_c0 = (f32) lbl_805DB72C;
    *(f32 *)((s8 *)arg0 + 0xC4) = (f32) *(f32 *)((s8 *)(*(void **)((s8 *)(*(u8 * *)&((TOKeyAncient03 *)arg0)->model) + 4)) + 0x14);
    *(f32 *)((s8 *)arg0 + 0xCC) = (f32) lbl_805DB730;
    if (get_main_phase() != 0xF) {
        if (is_split_screen() == 1) {
            goto block_2;
        }
    } else {
block_2:
        if ((s32) *(s32 *)&((TOKeyAncient03 *)arg0)->m_d0 != 2) {
            if ((s32) *(s32 *)((s8 *)arg0 + 0x88) < 0) {
                *(s32 *)&((TOKeyAncient03 *)arg0)->m_d0 = 1;
            } else {
                goto block_5;
            }
        } else {
block_5:
            *(s32 *)&((TOKeyAncient03 *)arg0)->m_d0 = 0;
        }
    }
    ((TOKeyAncient03 *)arg0)->m_e8 = (f32) lbl_805DB71C;
    ((TOKeyAncient03 *)arg0)->m_ec = (f32) lbl_805DB71C;
    *(f32 *)((s8 *)arg0 + 0xF0) = (f32) lbl_805DB71C;
    ((TOKeyAncient03 *)arg0)->m_f4 = (f32) lbl_805DB71C;
    ((TOKeyAncient03 *)arg0)->m_f8 = 0;
    *(f32 *)((s8 *)arg0 + 0x70) = (f32) lbl_805DB720;
    ((TOKeyAncient03 *)arg0)->target_scale = (f32) lbl_805DB720;
    ((TOKeyAncient03 *)arg0)->scale = (f32) lbl_805DB720;
    return arg0;
}

void TOKeyCave01::vfunc_25() {  }
s32 TOKeyCave01::is_confirm_pressed() {
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

typedef char RecoveredGlobal_8016BF68_lbl_80441B4C_size[sizeof(RecoveredGlobal_8016BF68_lbl_80441B4C) == 0x90 ? 1 : -1];

void TOKeyCave01::send_switch_changed(s32 flags) {
    Self_8016BF08 *self = (Self_8016BF08 *)this;
    Pkt_8016BF08 pkt;
    ((TLobby *)(&pkt))->init_6x05_switch_changed();
    pkt.object = self->id;
    pkt.zero = local_client_id;
    pkt.switchId = self->switchId;
    pkt.area = get_current_floor();
    pkt.flags = flags;
    ((TLobby *)(&pkt))->finalize_and_send_60();
}

void TOKeyCave01::vfunc_19() {
    s32 arg0 = (s32)this;
    s32 temp_r3;
    s32 temp_r3_2;
    if (((s32) enable_v2_features == 1) && ((TOKeyMachine01::get_global_state() == 0x10) || (TOKeyMachine01::get_global_state() == 0x11))) {
        temp_r3 = *(s32 *)((s8 *)&lbl_80441B4C.value + (TOKeyMachine01::get_global_state() * 4));
        if (temp_r3 >= 0) {
            play_sound_effect(temp_r3, arg0 + 0x38, 0, 0);
        }
    } else {
        temp_r3_2 = *(s32 *)((s8 *)&lbl_80441B4C.value + (TOKeyMachine01::get_global_state() * 4));
        if (temp_r3_2 >= 0) {
            play_sound_effect(temp_r3_2, arg0 + 0x38, 0, 0);
        }
    }
}

typedef char RecoveredGlobal_8016C010_lbl_80441B4C_size[sizeof(RecoveredGlobal_8016C010_lbl_80441B4C) == 0x90 ? 1 : -1];
void TOKeyCave01__vt16(s32 arg0) {
    s32 temp_r3;
    s32 temp_r3_2;
    if (((s32) enable_v2_features == 1) && ((TOKeyMachine01::get_global_state() == 0x10) || (TOKeyMachine01::get_global_state() == 0x11))) {
        temp_r3 = *(s32 *)((s8 *)(&(*(RecoveredGlobal_8016C010_lbl_80441B4C *)&lbl_80441B4C).value) + (TOKeyMachine01::get_global_state() * 4));
        if (temp_r3 >= 0) {
            play_sound_effect(temp_r3, arg0 + 0x38, 0, 0);
        }
    } else {
        temp_r3_2 = *(s32 *)((s8 *)(&(*(RecoveredGlobal_8016C010_lbl_80441B4C *)&lbl_80441B4C).value) + (TOKeyMachine01::get_global_state() * 4));
        if (temp_r3_2 >= 0) {
            play_sound_effect(temp_r3_2, arg0 + 0x38, 0, 0);
        }
    }
}

void TOKeyCave01::vfunc_17() {
    f32 temp_f1;
    s32 temp_r4;
    if ((s32) this->m_f8 == 1) {
        this->m_ec = (f32) (this->m_ec + lbl_805DB738);
        if (lbl_805DB73C <= this->m_ec) {
            this->m_f8 = 0;
        }
    } else {
        this->m_ec = (f32) (this->m_ec - lbl_805DB738);
        if (this->m_ec <= lbl_805DB740) {
            this->m_f8 = 1;
        }
    }
    temp_f1 = this->target_scale;
    if (temp_f1 < lbl_805DB740) {
        this->target_scale = (f32) (temp_f1 - lbl_805DB744);
    }
    temp_r4 = *(s32 *)&this->unk_FC;
    if (temp_r4 > 0) {
        *(s32 *)&this->unk_FC = (temp_r4 - 0x333);
    }
}

}
