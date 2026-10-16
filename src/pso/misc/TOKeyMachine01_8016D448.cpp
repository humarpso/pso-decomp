#include "types.h"
#include "pso/misc/TOKeyMachine01.h"
#include "pso/TParticleCtrl.h"
#include "pso/misc/TOKey.h"
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

struct RecoveredGlobal_8016D714_lbl_80441E24 { char value[0x1A]; };
typedef char RecoveredGlobal_8016D714_lbl_80441E24_size[sizeof(RecoveredGlobal_8016D714_lbl_80441E24) == 0x1A ? 1 : -1];

struct RecoveredGlobal_8016D714_lbl_804B2DD8 { s32 value; u8 remaining[0xC]; };
typedef char RecoveredGlobal_8016D714_lbl_804B2DD8_size[sizeof(RecoveredGlobal_8016D714_lbl_804B2DD8) == 0x10 ? 1 : -1];

struct VBase_18_1a504b { char pad[0x18]; };

struct VObj_18_1a504b : VBase_18_1a504b {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual s32 m5(s32);
};

struct RecoveredGlobal_8016D7F0___vt__14TOKeyMachine01 { s32 value; u8 remaining[0x6C]; };

struct VBase_8016D540 { char pad[0x18]; };

struct VObj_8016D540 : VBase_8016D540 { virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3(); virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7(); virtual s32 m8(f32, f32); };

extern "C" {
u8 * load_resource_from_descriptor(void *, s32, void *, s32, s32, s32);
int mem_alloc(void *);
u8 * load_gvm_texture_file(s32);
extern RecoveredGlobal_8016D714_lbl_80441E24 lbl_80441E24;
extern RecoveredGlobal_8016D714_lbl_804B2DD8 bm_fs_obj_ki_doa_panel_resource_descriptor;
extern u32 key_machine_model_archive;
extern s32 *TOKeyMachine01__texture_lists;
s32 get_main_phase(void);
s32 is_split_screen(void);
u8 * TOKey__ct(void *);
extern s32 __vt__14TOKeyMachine01[];
extern s32 TOKeyMachine01__name;
extern u32 key_machine_model_archive;
extern s32 *TOKeyMachine01__texture_lists;
extern const f32 lbl_805DB784;
extern const f32 lbl_805DB788;
extern const f32 lbl_805DB794;
extern const f32 lbl_805DB798;
u8 *TOKeyMachine01__ct(u8 *arg0, s32 arg1, s32 arg2);
s32 rotate_matrix_y(int, int);
s32 push_matrix();
s32 pop_matrix();
s32 post_translate_matrix(void *);
s32 draw_ginja_model(int);
s32 set_chunk_material_color(void *);
extern u8 chunk_material_color_half_alpha_f32[];
extern s32 lbl_805D5660;
extern s32 *TOKeyMachine01__texture_lists;
extern s32 model_render_flags;
}

extern "C" {

void *__dt__14TOKeyMachine01Fv(void *arg0, s16 arg1);
void TLobby__sub_8001FE7C(void*, int);
void __dl__7TObjectFPv(void *);
void __dt__5TOKeyFv(void *, int);
void *__nw__7TObjectFUl(int);
s32 mem_free(void*);

extern void *tl_05;

void TOKeyMachine01::run_task() {
    u8 *arg0 = (u8 *)this;
    ((VObj_18 *)(arg0))->m12();
    if ((s32) *(s32 *)&this->m_d4 != 1) {
        ((VObj_18 *)(arg0))->m15();
        if (((VObj_18 *)(arg0))->m13() == 1) {
            ((TOKeyMachine01 *)arg0)->send_switch_changed((int) (1));
            ((VObj_18 *)(arg0))->m16();
            *(s32 *)&this->m_d4 = 1;
        }
    } else {
        ((VObj_18 *)(arg0))->m14();
        if (((VObj_18 *)(arg0))->m13() != 1) {
            ((TOKeyMachine01 *)arg0)->send_switch_changed((int) (0));
            ((VObj_18 *)(arg0))->m17();
            *(s32 *)&this->m_d4 = 0;
        }
    }
}

void TOKeyMachine01::render() {
    u8 *arg0 = (u8 *)this;
    s32 temp_r4;
    u8 *temp_r31;
    u8 *temp_r31_2;
    u8 *temp_r31_3;
    if (((VObj_8016D540 *)arg0)->m8(this->m_c0, *(f32 *)&this->m_c4) != 0) {
        TObjFish::set_global_param(TOKeyMachine01__texture_lists[*(s32 *)&this->m_d4]);
        push_matrix();
        post_translate_matrix((void *) (arg0 + 0x38));
        rotate_matrix_y((int) (0), (int) (this->rotation_y));
        temp_r31 = *(u8 * *)&this->model;
        post_translate_matrix((void *) (temp_r31 + 8));
        draw_ginja_model((int) (*(s32 *)((s8 *)temp_r31 + 4)));
        if ((s32) *(s32 *)&this->m_d4 != 1) {
            temp_r4 = model_render_flags;
            lbl_805D5660 = temp_r4;
            model_render_flags = temp_r4 | 0x10;
            set_chunk_material_color((void *) (arg0 + 0xE8));
        }
        TParticleCtrl::begin_effect_render();
        temp_r31_2 = *(u8 **)((s8 *)temp_r31 + 0x2C);
        push_matrix();
        post_translate_matrix((void *) (arg0 + 0x68));
        post_translate_matrix((void *) (temp_r31_2 + 8));
        draw_ginja_model((int) (*(s32 *)((s8 *)temp_r31_2 + 4)));
        temp_r31_3 = *(u8 **)((s8 *)temp_r31_2 + 0x2C);
        push_matrix();
        post_translate_matrix((void *) (temp_r31_3 + 8));
        draw_ginja_model((int) (*(s32 *)((s8 *)temp_r31_3 + 4)));
        pop_matrix();
        pop_matrix();
        TParticleCtrl::end_effect_render();
        if ((s32) *(s32 *)&this->m_d4 != 1) {
            set_chunk_material_color(chunk_material_color_half_alpha_f32);
            model_render_flags = lbl_805D5660;
        }
        pop_matrix();
    }
}

void *TOKeyMachine01::create(void *arg0) {
    void *o = __nw__7TObjectFUl(0xFC);
    if (o != NULL) {
        o = TOKeyMachine01__ct((u8 *)(o), (s32)(tl_05), (s32)(arg0));
    }
    return o;
}

extern u32 key_machine_model_archive;
extern s32 *TOKeyMachine01__texture_lists;

void TOKeyMachine01::free_statics() {
    if ((s32 *) TOKeyMachine01__texture_lists != NULL) {
        TObjPlayer::free_if_valid(*TOKeyMachine01__texture_lists);
        *TOKeyMachine01__texture_lists = 0;
        if ((s32 *) TOKeyMachine01__texture_lists != NULL) {
            mem_free((void*)TOKeyMachine01__texture_lists);
            TOKeyMachine01__texture_lists = NULL;
        }
    }
    if ((u32) key_machine_model_archive != 0U) {
        TLobby__sub_8001FE7C((void*)key_machine_model_archive, 1);
        key_machine_model_archive = 0U;
    }
}

extern s32 __vt__14TOKeyMachine01[];

void TOKeyMachine01::load_assets() {
    s32 temp_r3;
    s32 var_r0;
    temp_r3 = ((TAdSinglePlyChrSelectGC *)((void *)0x440))->alloc();
    var_r0 = temp_r3;
    if (var_r0 != 0) {
        var_r0 = (long) (load_resource_from_descriptor((void *) temp_r3, 1, &bm_fs_obj_ki_doa_panel_resource_descriptor.value, 0, 0, 0));
    }
    (*(u8 * *)&key_machine_model_archive) = (unsigned char *) ((void *) var_r0);
    (*(s32 *)&TOKeyMachine01__texture_lists) = mem_alloc((void *)8);
    *(u8 **)((s8 *)(*(s32 *)&TOKeyMachine01__texture_lists) + 0) = load_gvm_texture_file((s32) &lbl_80441E24.value);
    *(s32 *)((s8 *)(*(s32 *)&TOKeyMachine01__texture_lists) + 4) = (s32) *(s32 *)((s8 *)(*(u8 **)((s8 *)(*(u8 * *)&key_machine_model_archive) + 0x42C)) + 0xC);
}

void *__dt__14TOKeyMachine01Fv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__14TOKeyMachine01;
        __dt__5TOKeyFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
u8 *TOKeyMachine01__ct(u8 *arg0, s32 arg1, s32 arg2) {
    TOKey__ct(arg0);
    *(s32 **)((s8 *)arg0 + 0x18) = &(*(RecoveredGlobal_8016D7F0___vt__14TOKeyMachine01 *)&__vt__14TOKeyMachine01).value;
    *(s32 *)((s8 *)arg0 + 0) = (s32) TOKeyMachine01__name;
    ((VObj_18_1a504b *)(arg0))->m5(arg2);
    ((TOKey *)arg0)->init_switch_id();
    *(s32 *)((s8 *)arg0 + 0x24) = (s32) *TOKeyMachine01__texture_lists;
    *(s32 *)((s8 *)arg0 + 0x34) = (s32) *(s32 *)((s8 *)(*(u8 **)((s8 *)(*(u8 * *)&key_machine_model_archive) + 0x42C)) + 8);
    *(f32 *)((s8 *)arg0 + 0xC0) = (f32) lbl_805DB794;
    *(f32 *)((s8 *)arg0 + 0xC4) = (f32) lbl_805DB798;
    *(f32 *)((s8 *)arg0 + 0xCC) = (f32) lbl_805DB798;
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
    *(f32 *)((s8 *)arg0 + 0xE8) = (f32) lbl_805DB784;
    *(f32 *)((s8 *)arg0 + 0xEC) = (f32) lbl_805DB784;
    *(f32 *)((s8 *)arg0 + 0xF0) = (f32) lbl_805DB784;
    *(f32 *)((s8 *)arg0 + 0xF4) = (f32) lbl_805DB784;
    *(s32 *)((s8 *)arg0 + 0xF8) = 0;
    *(f32 *)((s8 *)arg0 + 0x70) = (f32) lbl_805DB788;
    *(f32 *)((s8 *)arg0 + 0x6C) = (f32) lbl_805DB788;
    *(f32 *)((s8 *)arg0 + 0x68) = (f32) lbl_805DB788;
    return arg0;
}

}
