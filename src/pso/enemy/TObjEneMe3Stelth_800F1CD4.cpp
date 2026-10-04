#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct VBase_14_aa9368 { char pad[0x14]; };

struct VObj_14_aa9368 : VBase_14_aa9368 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual M2C_UNK m6();
    virtual M2C_UNK m7();
};

struct VBase_18_18102d { char pad[0x18]; };

struct VObj_18_18102d : VBase_18_18102d {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual s32 m8(f32, f32);
    virtual s32 m9(f32, f32, f32);
    virtual void m10();
    virtual void m11();
    virtual void m12();
    virtual void m13();
    virtual void m14();
    virtual void m15();
    virtual void m16();
    virtual void m17();
    virtual void m18();
    virtual void m19();
    virtual void m20();
    virtual void m21();
    virtual void m22();
    virtual void m23();
    virtual void m24();
    virtual void m25();
    virtual void m26();
    virtual void m27();
    virtual void m28();
    virtual void m29();
    virtual void m30();
    virtual void m31();
    virtual void m32();
    virtual void m33();
    virtual void m34();
    virtual void m35();
    virtual void m36();
    virtual void m37();
    virtual void m38();
    virtual void m39();
    virtual void m40();
    virtual void m41();
    virtual void m42();
    virtual void m43();
    virtual void m44();
    virtual void m45();
    virtual void m46();
    virtual void m47();
    virtual void m48();
    virtual void m49();
    virtual void m50();
    virtual void m51();
    virtual void m52();
    virtual void m53();
    virtual void m54();
    virtual void m55();
    virtual void m56();
    virtual void m57();
    virtual void m58();
    virtual void m59();
    virtual void m60();
    virtual void m61();
    virtual void m62();
    virtual void m63();
    virtual void m64();
    virtual void m65();
    virtual void m66();
    virtual void m67();
    virtual void m68();
    virtual void m69();
    virtual void m70();
    virtual void m71();
    virtual void m72();
    virtual void m73();
    virtual void m74();
    virtual void m75();
    virtual void m76();
    virtual void m77();
    virtual void m78();
    virtual void m79();
    virtual void m80();
    virtual void m81();
    virtual void m82();
    virtual void m83();
    virtual void m84();
    virtual void m85();
    virtual void m86();
    virtual void m87();
    virtual void m88();
    virtual void m89();
    virtual void m90();
    virtual void m91();
    virtual void m92();
    virtual void m93();
    virtual void m94();
    virtual void m95();
    virtual void m96();
    virtual void m97();
    virtual void m98();
    virtual void m99();
    virtual void m100();
    virtual void m101();
    virtual void m102();
    virtual void m103();
    virtual void m104();
    virtual void m105();
    virtual M2C_UNK m106();
    virtual s32 m107();
    virtual M2C_UNK m108();
    virtual void m109();
    virtual void m110();
    virtual void m111();
    virtual void m112();
    virtual M2C_UNK m113();
};

struct Col_800F1CD4 { s32 a, b, c, d; };

extern "C" {
s32 is_split_screen();
M2C_UNK copy_vec4__13TRaderMapCoreFPvPv(void *, void *);
s32 check_demo_mode__10TObjPlayerFv();
M2C_UNK disable_if_single_screen__13TParticleCtrlFv();
M2C_UNK setup_tev_stage__10TObjPlayerFv();
M2C_UNK setup_particle_tev(s32);
s32 is_main_phase_15__9TObjEneDDFv();
M2C_UNK clear_global_flag_400__9TObjEneDDFv();
M2C_UNK update_primary_light__9TObjEneDDFPv(void *);
M2C_UNK update_secondary_light__9TObjEneDDFPv(void *);
M2C_UNK toggle_particle_effect__10TObjPlayerFv();
M2C_UNK TObjEneMe3Stelth__sub_800F47D4(void *);
M2C_UNK draw_model__16TObjEneMe3StelthFPv(void *);
M2C_UNK render_world_model__10TObjPlayerFPv(void *);
M2C_UNK draw__16TObjEneRe7BeruraFPv(void *);
M2C_UNK draw_model__12TObjNpcEnemyFPv(void *);
M2C_UNK begin_effect_render__13TParticleCtrlFv();
M2C_UNK end_effect_render__13TParticleCtrlFv();
s32 toggle_flag_9__10TObjPlayerFPv(void *);
s32 dispatch_input_to_instance__18TAdEnterPasswordGCFi(void *);
M2C_UNK rotate_matrix_y(s32, s32);
M2C_UNK translate_matrix(s32, f32, f32, f32);
M2C_UNK push_matrix();
M2C_UNK pop_matrix();
M2C_UNK post_translate_matrix(void *);
M2C_UNK set_global_param__8TObjFishFi(s32);
M2C_UNK set_depth_buffer_id__16TObjEneMe3StelthFi(s32);
M2C_UNK set_color_blend_mode(s32, s32, s32, s32);
M2C_UNK set_npc_enemy_param(void *);
M2C_UNK set_chunk_material_override_pair(s32, s32);
M2C_UNK set_chunk_material_color(void *);
void add_instance__16TObjEneMe3StelthFv();
extern const Col_800F1CD4 lbl_8043D640;
extern const Col_800F1CD4 lbl_8043D650;
extern const Col_800F1CD4 lbl_8043D660;
extern const Col_800F1CD4 lbl_8043D670;
extern s32 *lbl_80501120[];
extern u8 lbl_8050BEC0[];
extern u8 lbl_8058D4C0[];
extern s32 TObjEneMe3Stelth__data_805D5304;
extern s32 lbl_805D5310;
extern s32 lbl_805D5660;
extern s32 lbl_805D5664;
extern s32 lbl_805D5668;
extern s32 lbl_805D7780;
extern s32 lbl_805D7784;
extern s32 some_id_805c6f74;
extern const f32 lbl_805D9E84;
extern const f32 lbl_805D9E88;
extern const f32 TObjEneMe3Stelth__data_805DA808;
extern const f32 lbl_805DA83C;
extern const f32 TObjEneMe3Stelth__data_805DA840;
void TObjEneMe3Stelth__sub_800F1CD4(void *arg0_);
}

extern "C" {

#define F(t, o) M2C_FIELD(arg0, t *, o)
#define VO ((VObj_18_18102d *)(arg0))
#define VS ((VObj_14_aa9368 *)(arg0 + 0x404))
void TObjEneMe3Stelth__sub_800F1CD4(void *arg0_) {
    s32 mode;
    s32 draw;
    u8 *arg0 = (u8 *)arg0_;
    if (check_demo_mode__10TObjPlayerFv() != 0) {
        VO->m113();
        return;
    }
    TObjEneMe3Stelth__sub_800F47D4(arg0);
    if (F(s32, 0x3CC) & 2) {
        mode = 0;
    } else if (is_main_phase_15__9TObjEneDDFv() != 0) {
        mode = VO->m9(lbl_805D9E88, lbl_805D9E84, TObjEneMe3Stelth__data_805DA808);
    } else if (VO->m8(lbl_805DA83C, TObjEneMe3Stelth__data_805DA808) != 0) {
        mode = 1;
    } else {
        mode = 0;
    }
    if (F(s32, 0x3C0) != 0 && is_split_screen() == 0 && dispatch_input_to_instance__18TAdEnterPasswordGCFi(arg0) != 0) {
        return;
    }
    if (mode != 0) {
        VO->m106();
        update_secondary_light__9TObjEneDDFPv(arg0);
        lbl_805D5660 = some_id_805c6f74;
        clear_global_flag_400__9TObjEneDDFv();
        toggle_particle_effect__10TObjPlayerFv();
        lbl_805D5664 = lbl_805D7784;
        lbl_805D5668 = lbl_805D7780;
        copy_vec4__13TRaderMapCoreFPvPv(lbl_8050BEC0, lbl_8058D4C0);
        if (is_split_screen() != 0) {
            s32 i;
            for (i = 0; i < 3; i++) {
                if (lbl_80501120[i] != 0) {
                    *lbl_80501120[i] = F(s32, 0x3E8);
                }
            }
            draw = 1;
            if (F(s32, 0x3C0) != 0) {
                if (F(s32, 0x3CC) & 8) {
                    VS->m6();
                } else {
                    some_id_805c6f74 |= 0x820;
                    Col_800F1CD4 c = lbl_8043D640;
                    set_chunk_material_color(&c);
                    set_chunk_material_override_pair(0xFF00, 0x800);
                }
                if (toggle_flag_9__10TObjPlayerFPv(arg0) != 0) {
                    draw = 0;
                }
            } else if (VO->m107() != 0) {
                if (toggle_flag_9__10TObjPlayerFPv(arg0) != 0) {
                    draw = 0;
                }
            } else {
                some_id_805c6f74 |= 0x820;
                Col_800F1CD4 c = lbl_8043D650;
                set_chunk_material_color(&c);
                set_chunk_material_override_pair(0xFF00, 0x800);
            }
            if (draw != 0) {
                set_global_param__8TObjFishFi(F(s32, 0x24));
                push_matrix();
                post_translate_matrix(arg0 + 0x38);
                translate_matrix(0, TObjEneMe3Stelth__data_805DA840, F(f32, 0x3D4), TObjEneMe3Stelth__data_805DA840);
                rotate_matrix_y(0, F(s32, 0x60));
                TObjEneMe3Stelth__data_805D5304 = 0;
                if (mode == 1) {
                    draw__16TObjEneRe7BeruraFPv(arg0);
                } else {
                    render_world_model__10TObjPlayerFPv(arg0);
                }
                pop_matrix();
            }
            if (F(s32, 0x3C0) != 0) {
                if (F(s32, 0x3CC) & 8) {
                    VS->m7();
                }
            } else {
                VO->m108();
            }
        } else {
            s32 i;
            if (F(s32, 0x3C0) != 0) {
                begin_effect_render__13TParticleCtrlFv();
                if (F(s32, 0x3CC) & 8) {
                    setup_tev_stage__10TObjPlayerFv();
                    some_id_805c6f74 |= 0x8021;
                    Col_800F1CD4 c = lbl_8043D660;
                    set_chunk_material_color(&c);
                    set_color_blend_mode(1, 4, 5, 0);
                } else {
                    setup_particle_tev(0);
                }
            } else {
                some_id_805c6f74 |= 0x8021;
                Col_800F1CD4 c = lbl_8043D670;
                set_chunk_material_color(&c);
                set_color_blend_mode(1, 4, 5, 0);
            }
            set_global_param__8TObjFishFi(F(s32, 0x24));
            for (i = 0; i < 3; i++) {
                if (lbl_80501120[i] != 0) {
                    *lbl_80501120[i] = F(s32, 0x3E8);
                }
            }
            VO->m107();
            push_matrix();
            post_translate_matrix(arg0 + 0x38);
            translate_matrix(0, TObjEneMe3Stelth__data_805DA840, F(f32, 0x3D4), TObjEneMe3Stelth__data_805DA840);
            rotate_matrix_y(0, F(s32, 0x60));
            TObjEneMe3Stelth__data_805D5304 = 0;
            F(s32, 0x420) += 0x222;
            lbl_805D5310 = F(s32, 0x420);
            set_npc_enemy_param((void *)add_instance__16TObjEneMe3StelthFv);
            if (F(s32, 0x3C0) != 0) {
                set_depth_buffer_id__16TObjEneMe3StelthFi(3);
            }
            if (mode == 1) {
                draw_model__12TObjNpcEnemyFPv(arg0);
            } else {
                draw_model__16TObjEneMe3StelthFPv(arg0);
            }
            if (F(s32, 0x3C0) != 0) {
                set_depth_buffer_id__16TObjEneMe3StelthFi(2);
            }
            set_npc_enemy_param(0);
            pop_matrix();
            VO->m108();
            if (F(s32, 0x3C0) != 0) {
                disable_if_single_screen__13TParticleCtrlFv();
            }
        }
        copy_vec4__13TRaderMapCoreFPvPv(lbl_8058D4C0, lbl_8050BEC0);
        lbl_805D7784 = lbl_805D5664;
        lbl_805D7780 = lbl_805D5668;
        end_effect_render__13TParticleCtrlFv();
        some_id_805c6f74 = lbl_805D5660;
        update_primary_light__9TObjEneDDFPv(arg0);
    }
    end_effect_render__13TParticleCtrlFv();
}

}
