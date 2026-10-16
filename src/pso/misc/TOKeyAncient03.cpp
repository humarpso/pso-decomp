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

struct VBase_18 { char pad[0x18]; };
struct VObj_18 : VBase_18 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual void m8();
    virtual void m9();
    virtual void m10();
    virtual void m11();
    virtual s32 m12();
    virtual s32 m13();
    virtual s32 m14();
    virtual s32 m15();
    virtual s32 m16();
    virtual s32 m17();
};

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

struct VBase_18_1a504b { char pad[0x18]; };

struct VObj_18_1a504b : VBase_18_1a504b {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual s32 m5(s32);
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
s32 is_confirm_pressed__11TOKeyCave01Fv(u8 *arg0);
extern const f32 lbl_805DB718;
extern const f32 lbl_805DB71C;
extern const f32 lbl_805DB720;
extern const f32 lbl_805DB724;
void vfunc_17__14TOKeyAncient03Fv(u8 *arg0);
extern const f32 lbl_805DB738;
extern const f32 lbl_805DB73C;
extern const f32 lbl_805DB740;
extern const f32 lbl_805DB744;
void vfunc_17__11TOKeyCave01Fv(u8 *arg0);
s32 play_sound_effect(s32, s32, s32, s32);
extern RecoveredGlobal_8016BF68_lbl_80441B4C lbl_80441B4C;
extern s32 enable_v2_features;
void vfunc_19__11TOKeyCave01Fv(s32 arg0);
s32 play_sound_effect(s32, s32, s32, s32);
extern RecoveredGlobal_8016BF68_lbl_80441B4C lbl_80441B4C;
extern s32 enable_v2_features;
void TOKeyCave01__vt16(s32 arg0);
u8 *load_resource_from_descriptor(void *, s32, s32 *, s32, s32, s32);
s32 *mem_alloc(s32);
s32 load_gvm_texture_file(void *);
extern RecoveredGlobal_8016BC84_lbl_80441ACC lbl_80441ACC;
extern RecoveredGlobal_8016BC84_lbl_804B2B30 bm_fs_obj_o_doorpanel_resource_descriptor;
extern u32 TOKeyAncient03__model_archive;
extern void *TOKeyAncient03__texture_variants;
s32 get_main_phase(void);
s32 is_split_screen();
u8 * TOKey__ct(void *);
extern s32 __vt__14TOKeyAncient03[];
extern s32 TOKeyAncient03__class_name;
extern u32 TOKeyAncient03__model_archive;
extern void *TOKeyAncient03__texture_variants;
extern const f32 lbl_805DB71C;
extern const f32 lbl_805DB720;
extern const f32 lbl_805DB72C;
extern const f32 lbl_805DB730;
u8 *TOKeyAncient03__ct(u8 *arg0, s32 arg1, s32 arg2);
extern const f32 lbl_805DB728;
extern const f32 lbl_805DB724;
void vfunc_16__14TOKeyAncient03Fv(Obj_8016B9A4 *self);
s32 get_current_floor();
extern s32 local_client_id;
s32 rotate_matrix_y(int, int);
s32 push_matrix();
s32 pop_matrix();
s32 post_translate_matrix(void *);
s32 draw_ginja_model(int);
s32 set_chunk_material_color(void *);
extern u8 chunk_material_color_half_alpha_f32[];
extern s32 lbl_805D5660;
extern void *TOKeyAncient03__texture_variants;
extern s32 model_render_flags;
}

extern "C" {

void TOKeyAncient03__vt16(s32 arg0);
void vfunc_19__14TOKeyAncient03Fv(s32 arg0);
void vfunc_25__11TOKeyCave01Fv(void);
void *__dt__14TOKeyAncient03Fv(void *arg0, s16 arg1);
s32 play_sound_effect(s32, s32, s32, s32);
void TLobby__sub_8001FE7C(void*, int);
void __dl__7TObjectFPv(void *);
void __dt__5TOKeyFv(void *, int);
void *__nw__7TObjectFUl(int);
s32 mem_free(void*);

void TOKeyAncient03::vfunc_19() {
    s32 arg0 = (s32)this;
    play_sound_effect(0x4004B20D, arg0 + 0x38, 0, 0);
}

void TOKeyAncient03__vt16(s32 arg0) {
    play_sound_effect(0x4004B20D, arg0 + 0x38, 0, 0);
}

extern void *tl_05;

void TOKeyAncient03::vfunc_17() {
    u8 *arg0 = (u8 *)this;
    f32 temp_f1;
    if ((s32) *(s32 *)((s8 *)arg0 + 0xF8) == 1) {
        *(f32 *)((s8 *)arg0 + 0xEC) = (f32) (*(f32 *)((s8 *)arg0 + 0xEC) + lbl_805DB718);
        if (lbl_805DB71C <= *(f32 *)((s8 *)arg0 + 0xEC)) {
            *(s32 *)((s8 *)arg0 + 0xF8) = 0;
        }
    } else {
        *(f32 *)((s8 *)arg0 + 0xEC) = (f32) (*(f32 *)((s8 *)arg0 + 0xEC) - lbl_805DB718);
        if (*(f32 *)((s8 *)arg0 + 0xEC) <= lbl_805DB720) {
            *(s32 *)((s8 *)arg0 + 0xF8) = 1;
        }
    }
    temp_f1 = *(f32 *)((s8 *)arg0 + 0x6C);
    if (temp_f1 < lbl_805DB720) {
        *(f32 *)((s8 *)arg0 + 0x6C) = (f32) (temp_f1 - lbl_805DB724);
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
    ((VObj_18 *)(arg0))->m12();
    if ((s32) *(s32 *)((s8 *)arg0 + 0xD4) != 1) {
        ((VObj_18 *)(arg0))->m15();
        if (((VObj_18 *)(arg0))->m13() == 1) {
            ((TOKeyAncient03 *)arg0)->send_switch_changed((int) (1));
            ((VObj_18 *)(arg0))->m16();
            *(s32 *)((s8 *)arg0 + 0xD4) = 1;
        }
    } else {
        ((VObj_18 *)(arg0))->m14();
        if (((VObj_18 *)(arg0))->m13() != 1) {
            ((TOKeyAncient03 *)arg0)->send_switch_changed((int) (0));
            ((VObj_18 *)(arg0))->m17();
            *(s32 *)((s8 *)arg0 + 0xD4) = 0;
        }
    }
}

void TOKeyAncient03::render() {
    u8 *arg0 = (u8 *)this;
    s32 temp_r4;
    u8 *temp_r31;
    u8 *temp_r31_2;
    u8 *temp_r31_3;
    if (((VObj_18_8016BABC *)arg0)->m8(*(f32 *)((s8 *)arg0 + 0xC0), *(f32 *)((s8 *)arg0 + 0xC4)) != 0) {
        TObjFish::set_global_param((int) (*(s32 *)((s8 *)TOKeyAncient03__texture_variants + (*(s32 *)((s8 *)arg0 + 0xD4) * 4))));
        push_matrix();
        post_translate_matrix((void *) (arg0 + 0x38));
        rotate_matrix_y((int) (0), (int) (*(s32 *)((s8 *)arg0 + 0x60)));
        temp_r31 = *(u8 **)((s8 *)arg0 + 0x34);
        post_translate_matrix((void *) (temp_r31 + 8));
        draw_ginja_model((int) (*(s32 *)((s8 *)temp_r31 + 4)));
        if ((s32) *(s32 *)((s8 *)arg0 + 0xD4) != 1) {
            temp_r4 = model_render_flags;
            lbl_805D5660 = temp_r4;
            model_render_flags = temp_r4 | 0x10;
            set_chunk_material_color(arg0 + 0xE8);
        }
        temp_r31_2 = *(u8 **)((s8 *)temp_r31 + 0x2C);
        push_matrix();
        post_translate_matrix((void *) (arg0 + 0x68));
        post_translate_matrix((void *) (temp_r31_2 + 8));
        draw_ginja_model((int) (*(s32 *)((s8 *)temp_r31_2 + 4)));
        temp_r31_3 = *(u8 **)((s8 *)temp_r31_2 + 0x2C);
        push_matrix();
        post_translate_matrix((void *) (temp_r31_3 + 8));
        TParticleCtrl::begin_effect_render();
        draw_ginja_model((int) (*(s32 *)((s8 *)temp_r31_3 + 4)));
        TParticleCtrl::end_effect_render();
        pop_matrix();
        pop_matrix();
        if ((s32) *(s32 *)((s8 *)arg0 + 0xD4) != 1) {
            set_chunk_material_color(chunk_material_color_half_alpha_f32);
            model_render_flags = lbl_805D5660;
        }
        pop_matrix();
    }
}

void *TOKeyAncient03::create(void *arg0) {
    void *o = __nw__7TObjectFUl(0xFC);
    if (o != NULL) {
        o = TOKeyAncient03__ct((u8 *)(o), (s32)(tl_05), (s32)(arg0));
    }
    return o;
}

extern u32 TOKeyAncient03__model_archive;
extern void *TOKeyAncient03__texture_variants;

void TOKeyAncient03::cleanup_refs() {
    if ((void *) TOKeyAncient03__texture_variants != NULL) {
        TObjPlayer::free_if_valid(*(s32 *)((s8 *)TOKeyAncient03__texture_variants + 4));
        if ((void *) TOKeyAncient03__texture_variants != NULL) {
            mem_free((void*)TOKeyAncient03__texture_variants);
            TOKeyAncient03__texture_variants = NULL;
        }
    }
    if ((u32) TOKeyAncient03__model_archive != 0U) {
        TLobby__sub_8001FE7C((void*)TOKeyAncient03__model_archive, 1);
        TOKeyAncient03__model_archive = 0U;
    }
}

extern s32 __vt__14TOKeyAncient03[];

typedef char RecoveredGlobal_8016BC84_lbl_80441ACC_size[sizeof(RecoveredGlobal_8016BC84_lbl_80441ACC) == 0x18 ? 1 : -1];
typedef char RecoveredGlobal_8016BC84_lbl_804B2B30_size[sizeof(RecoveredGlobal_8016BC84_lbl_804B2B30) == 0x10 ? 1 : -1];
void TOKeyAncient03::load_resources() {
    s32 *temp_r3_2;
    u8 *temp_r3;
    u8 *var_r0;
    temp_r3 = (u8 *)(((TAdSinglePlyChrSelectGC *)0x440)->alloc());
    var_r0 = (u8 *)(temp_r3);
    if (var_r0 != NULL) {
        var_r0 = (u8 *)(load_resource_from_descriptor(temp_r3, 1, &bm_fs_obj_o_doorpanel_resource_descriptor.value, 0, 0, 0));
    }
    (*(u8 * *)&TOKeyAncient03__model_archive) = var_r0;
    temp_r3_2 = (s32 *)(mem_alloc(8));
    (*(s32 * *)&TOKeyAncient03__texture_variants) = temp_r3_2;
    *temp_r3_2 = *(s32 *)((s8 *)(*(u8 **)((s8 *)(*(u8 * *)&TOKeyAncient03__model_archive) + 0x42C)) + 0xC);
    *(s32 *)((s8 *)(*(s32 * *)&TOKeyAncient03__texture_variants) + 4) = load_gvm_texture_file((void *) (&lbl_80441ACC.value));
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
    ((VObj_18_1a504b *)(arg0))->m5(arg2);
    ((TOKey *)arg0)->init_switch_id();
    *(s32 *)((s8 *)arg0 + 0x24) = (s32) *(*(s32 * *)&TOKeyAncient03__texture_variants);
    *(u8 **)((s8 *)arg0 + 0x34) = (unsigned char *) ((void *) *(void **)((s8 *)(*(u8 **)((s8 *)(*(u8 * *)&TOKeyAncient03__model_archive) + 0x42C)) + 8));
    *(f32 *)((s8 *)arg0 + 0xC0) = (f32) lbl_805DB72C;
    *(f32 *)((s8 *)arg0 + 0xC4) = (f32) *(f32 *)((s8 *)(*(void **)((s8 *)(*(u8 **)((s8 *)arg0 + 0x34)) + 4)) + 0x14);
    *(f32 *)((s8 *)arg0 + 0xCC) = (f32) lbl_805DB730;
    if (get_main_phase() != 0xF) {
        if (is_split_screen() == 1) {
            goto block_2;
        }
    } else {
block_2:
        if ((s32) *(s32 *)((s8 *)arg0 + 0xD0) != 2) {
            if ((s32) *(s32 *)((s8 *)arg0 + 0x88) < 0) {
                *(s32 *)((s8 *)arg0 + 0xD0) = 1;
            } else {
                goto block_5;
            }
        } else {
block_5:
            *(s32 *)((s8 *)arg0 + 0xD0) = 0;
        }
    }
    *(f32 *)((s8 *)arg0 + 0xE8) = (f32) lbl_805DB71C;
    *(f32 *)((s8 *)arg0 + 0xEC) = (f32) lbl_805DB71C;
    *(f32 *)((s8 *)arg0 + 0xF0) = (f32) lbl_805DB71C;
    *(f32 *)((s8 *)arg0 + 0xF4) = (f32) lbl_805DB71C;
    *(s32 *)((s8 *)arg0 + 0xF8) = 0;
    *(f32 *)((s8 *)arg0 + 0x70) = (f32) lbl_805DB720;
    *(f32 *)((s8 *)arg0 + 0x6C) = (f32) lbl_805DB720;
    *(f32 *)((s8 *)arg0 + 0x68) = (f32) lbl_805DB720;
    return arg0;
}

void TOKeyCave01::vfunc_25() {  }
s32 TOKeyCave01::is_confirm_pressed() {
    s32 temp_r0;
    s32 var_r31;
    s32 var_r3;
    var_r31 = 0;
    temp_r0 = *(s32 *)((s8 *)((u8 *)this) + 0xD0);
    switch (temp_r0) {
    case 0:
        if (is_split_screen() == 1) {
            var_r3 = ((TOKey *)((u8 *)this))->is_any_player_in_range();
        } else {
            var_r3 = ((TOKey *)((u8 *)this))->is_local_player_in_range();
        }
        if (((s32) *(s32 *)((s8 *)((u8 *)this) + 0xD4) == 1) || (var_r3 == 1)) {
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
        temp_r3 = *(s32 *)((s8 *)(&lbl_80441B4C.value) + (TOKeyMachine01::get_global_state() * 4));
        if (temp_r3 >= 0) {
            play_sound_effect((s32)(temp_r3), (s32)(arg0 + 0x38), (s32)(0), (s32)(0));
        }
    } else {
        temp_r3_2 = *(s32 *)((s8 *)(&lbl_80441B4C.value) + (TOKeyMachine01::get_global_state() * 4));
        if (temp_r3_2 >= 0) {
            play_sound_effect((s32)(temp_r3_2), (s32)(arg0 + 0x38), (s32)(0), (s32)(0));
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
            play_sound_effect((s32)(temp_r3), (s32)(arg0 + 0x38), (s32)(0), (s32)(0));
        }
    } else {
        temp_r3_2 = *(s32 *)((s8 *)(&(*(RecoveredGlobal_8016C010_lbl_80441B4C *)&lbl_80441B4C).value) + (TOKeyMachine01::get_global_state() * 4));
        if (temp_r3_2 >= 0) {
            play_sound_effect((s32)(temp_r3_2), (s32)(arg0 + 0x38), (s32)(0), (s32)(0));
        }
    }
}

void TOKeyCave01::vfunc_17() {
    u8 *arg0 = (u8 *)this;
    f32 temp_f1;
    s32 temp_r4;
    if ((s32) *(s32 *)((s8 *)arg0 + 0xF8) == 1) {
        *(f32 *)((s8 *)arg0 + 0xEC) = (f32) (*(f32 *)((s8 *)arg0 + 0xEC) + lbl_805DB738);
        if (lbl_805DB73C <= *(f32 *)((s8 *)arg0 + 0xEC)) {
            *(s32 *)((s8 *)arg0 + 0xF8) = 0;
        }
    } else {
        *(f32 *)((s8 *)arg0 + 0xEC) = (f32) (*(f32 *)((s8 *)arg0 + 0xEC) - lbl_805DB738);
        if (*(f32 *)((s8 *)arg0 + 0xEC) <= lbl_805DB740) {
            *(s32 *)((s8 *)arg0 + 0xF8) = 1;
        }
    }
    temp_f1 = *(f32 *)((s8 *)arg0 + 0x6C);
    if (temp_f1 < lbl_805DB740) {
        *(f32 *)((s8 *)arg0 + 0x6C) = (f32) (temp_f1 - lbl_805DB744);
    }
    temp_r4 = *(s32 *)((s8 *)arg0 + 0xFC);
    if (temp_r4 > 0) {
        *(s32 *)((s8 *)arg0 + 0xFC) = (s32) (temp_r4 - 0x333);
    }
}

}
