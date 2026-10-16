#include "types.h"
#include "pso/enemy/TObjEneMe3Stelth.h"

extern "C" int draw_model__16TObjEneMe3StelthFPv(void* p);
extern "C" void TObjEneMe3Stelth__sub_800F5874(u8 *arg0, s32 arg1);
extern "C" void TObjEneMe3Stelth__sub_800F5864(u8 *arg0, s32 arg1);
extern "C" void setup_move_bounds__16TObjEneMe3StelthFPv(void *arg0);
struct Obj_800F4D68; extern "C" f32 get_node_world_y__16TObjEneMe3StelthFPv(Obj_800F4D68 *self);
struct Obj_800F4CC8; extern "C" u8 test_body_collision__16TObjEneMe3StelthFPvif(Obj_800F4CC8 *arg0, s32 arg1, f32 farg0);
extern "C" bool TObjEneMe3Stelth__sub_800F4C10(u8 *arg0);
extern "C" s32 TObjEneMe3Stelth__sub_800F4850(u8 *arg0);
struct O_800F4814; extern "C" s32 is_angle_in_range__16TObjEneMe3StelthFPv(O_800F4814 *self);
extern "C" u8 TObjEneMe3Stelth__sub_800F47D4(u8 *arg0);
extern "C" void TObjEneMe3Stelth__sub_800F4758(u8 *arg0);
struct Obj_800F4700; extern "C" void create_resta_effect__16TObjEneMe3StelthFPv(Obj_800F4700 *self);
extern "C" {
f32 lbl_805010E0[3];
__declspec(section ".data") s32 TObjEneMe3Stelth__base_params_by_variant[2];
__declspec(section ".data") s32 TObjEneMe3Stelth__attack_params_by_variant[2];
__declspec(section ".data") s32 TObjEneMe3Stelth__resistance_params_by_variant[2];
__declspec(section ".data") u8 *TObjEneMe3Stelth__behavior_params_by_variant[2];
__declspec(section ".data") s32 TObjEneMe3Stelth__alternate_texture_list[2];
f32 lbl_80501114[3];
s32 TObjEneMe3Stelth__material_color_pointers[4];
}

extern "C" {

void exec__16TObjEneMe3StelthFPvi(u8 *arg0, s32 arg1);
s32 set_field_378__9TObjEneDDFPvi(void *, s32);
s32 transition_enemy_state(void *, s32);
s32 get_flag_b4__21TObjEneMe3ShinowaRealFv(void *);
s32 advance_timer__18TObjEneMe3SinowZoaFPvf(void *, f32);
s32 advance_animation_playback();
s32 play_sound_effect(s32, void *, s32, s32, s32);
s32 objInBand__FP7GameObjf(void *, f32);

s32 is_split_screen();
s32 set_indexed_flags(void *, s32, s32);
extern const f32 lbl_805DA828;

extern const f32 lbl_805DA838;

struct VB18 { char pad[0x18]; };
struct VO18 : VB18 {
    virtual void m0();virtual void m1();virtual void m2();virtual void m3();virtual void m4();
    virtual void m5();virtual void m6();virtual void m7();virtual void m8();virtual void m9();
    virtual void m10();virtual void m11();virtual void m12();virtual void m13();virtual void m14();
    virtual void m15();virtual void m16();virtual void m17();virtual void m18();virtual void m19();
    virtual void m20();virtual void m21();virtual void m22();virtual void m23();virtual void m24();
    virtual void m25();virtual void m26();virtual void m27();virtual void m28();virtual void m29();
    virtual void m30();virtual void m31();virtual void m32();virtual void m33();virtual void m34();
    virtual void m35();virtual void m36();virtual void m37();virtual void m38();virtual void m39();
    virtual void m40();virtual void m41();virtual void m42();virtual void m43();virtual void m44();
    virtual void m45();virtual void m46();virtual void m47();virtual void m48();virtual void m49();
    virtual void m50();virtual void m51();virtual void m52();virtual void m53();virtual void m54();
    virtual void m55();virtual void m56();virtual void m57();virtual void m58();virtual void m59();
    virtual void m60();virtual void m61();virtual void m62();virtual void m63();virtual void m64();
    virtual void m65();virtual void m66();virtual void m67();virtual void m68();virtual void m69();
    virtual void m70();virtual void m71();virtual void m72();virtual void m73();virtual void m74();
    virtual void m75();virtual void m76();virtual void m77();virtual void m78();virtual void m79();
    virtual void m80();virtual void m81();virtual void m82();virtual void m83();virtual void m84();
    virtual void m85();virtual void m86();virtual void m87();virtual void m88();virtual void m89();
    virtual void m90();virtual void m91();virtual void m92();virtual void m93();virtual void m94();
    virtual void m95();virtual void m96();virtual void m97();virtual void m98();virtual void m99();
    virtual void m100();
};
struct VB414 { char pad[0x14]; };
struct VO414 : VB414 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
};

void exec__16TObjEneMe3StelthFPvi(u8 *arg0, s32 arg1) {
    s32 temp_r0;
    s32 temp_r7;

    switch (arg1) {
    case 4:
        *(s16 *)((s8 *)arg0 + 0xB8) = 0xC;
        set_field_378__9TObjEneDDFPvi(arg0, 6);
        ((VO18*)arg0)->m94();
        *(s32 *)((s8 *)arg0 + 0x3CC) = (s32) (*(s32 *)((s8 *)arg0 + 0x3CC) & 0xFFFFFFF1);
        temp_r7 = *(s32 *)((s8 *)arg0 + 0x3CC) | 1;
        *(s32 *)((s8 *)arg0 + 0x3CC) = temp_r7;
        *(s32 *)((s8 *)arg0 + 0x424) = 0;
        play_sound_effect(0x3B23B, arg0 + 0x38, 0, 0, temp_r7);
        return;
    case 3:
        if ((s32) *(s32 *)((s8 *)arg0 + 0x424) == 3) {
            transition_enemy_state(arg0, 6);
            *(s32 *)((s8 *)arg0 + 0x3CC) = (s32) (*(s32 *)((s8 *)arg0 + 0x3CC) & 0xFFFFFFFE);
            *(s32 *)((s8 *)arg0 + 0x3CC) = (s32) (*(s32 *)((s8 *)arg0 + 0x3CC) | 0x40000);
            set_indexed_flags(arg0, 0, 0x08000000);
        }
        return;
    case 0:
        advance_animation_playback();
        if (get_flag_b4__21TObjEneMe3ShinowaRealFv(arg0) != 0) {
            *(s32 *)((s8 *)arg0 + 0x424) = 3;
        } else if (is_split_screen() != 0) {
            temp_r0 = *(s32 *)((s8 *)arg0 + 0x424);
            switch (temp_r0) {
            case 0:
                if (objInBand__FP7GameObjf(arg0, lbl_805DA828) != 0) {
                    *(s32 *)((s8 *)arg0 + 0x3CC) = (s32) (*(s32 *)((s8 *)arg0 + 0x3CC) | 8);
                    ((VO414*)(arg0 + 0x404))->m3();
                    *(s32 *)((s8 *)arg0 + 0x424) = 1;
                }
                break;
            case 1:
                if (advance_timer__18TObjEneMe3SinowZoaFPvf(arg0 + 0x404, 0.2f) != 0) {
                    *(s32 *)((s8 *)arg0 + 0x3CC) = (s32) (*(s32 *)((s8 *)arg0 + 0x3CC) & 0xFFFFFFF7);
                    *(s32 *)((s8 *)arg0 + 0x3C0) = 0;
                    *(s32 *)((s8 *)arg0 + 0x424) = 2;
                }
                break;
            }
        } else if (objInBand__FP7GameObjf(arg0, 25.0f) != 0) {
            *(s32 *)((s8 *)arg0 + 0x3CC) = (s32) (*(s32 *)((s8 *)arg0 + 0x3CC) | 8);
            *(s32 *)((s8 *)arg0 + 0x3C0) = 1;
        } else if (objInBand__FP7GameObjf(arg0, lbl_805DA838) != 0) {
            *(s32 *)((s8 *)arg0 + 0x3CC) = (s32) (*(s32 *)((s8 *)arg0 + 0x3CC) & 0xFFFFFFF7);
        }
        ((VO18*)arg0)->m100();
        ((VO18*)arg0)->m87();
        return;
    case 5:
        *(s32 *)((s8 *)arg0 + 0x3CC) = (s32) (*(s32 *)((s8 *)arg0 + 0x3CC) & 0xFFFFFFF7);
        break;
    }
}

}

#include "types.h"

struct VBase_18_800F18C8 { char pad[0x18]; };

struct VObj_18_800F18C8 : VBase_18_800F18C8 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual s32 m8(f32, f32);
};

struct Part_800F18C8 { s32 a; s32 b; s32 c; };

struct Mdl_800F18C8 { Part_800F18C8 *parts; };

struct Motion_800F18C8 { s32 f0; u32 nframes; };

struct MotEnt_800F18C8 { s32 f0; Motion_800F18C8 *motion; };

struct Anim_800F18C8 { s32 f0; s32 idx; s32 f8; s32 fC; };

struct Obj_800F18C8 : VObj_18_800F18C8 {
    u8 pad1C[0x24 - 0x1C]; Mdl_800F18C8 *mdl; u8 pad28[0x34 - 0x28]; s32 f34;
    u8 pos[0xC]; u8 pad44[0x60 - 0x44]; s32 rotY; u8 pad64[0xB8 - 0x64]; s16 fb8;
    u8 padBA[0xC0 - 0xBA]; f32 fc0; u8 padC4[0xD8 - 0xC4]; Anim_800F18C8 *anims;
    MotEnt_800F18C8 *motions; u8 padE0[0xF8 - 0xE0]; Motion_800F18C8 *fF8;
    u8 padFC[0x326 - 0xFC]; s16 f326; u8 pad328[0x360 - 0x328]; f32 f360;
};

extern "C" {
s32 get_target_info__9TObjEneDDFPv(void *);
s32 pack_debug_text_position(s32, s32);
s32 toggle_particle_effect__10TObjPlayerFv();
#define TObjEneMe3Stelth__sub_800F47D4 ((s32 (*)(void *))TObjEneMe3Stelth__sub_800F47D4)
#define is_angle_in_range__16TObjEneMe3StelthFPv ((s32 (*)(void *))is_angle_in_range__16TObjEneMe3StelthFPv)
#define TObjEneMe3Stelth__sub_800F4850 ((s32 (*)(void *))TObjEneMe3Stelth__sub_800F4850)
#define get_node_world_y__16TObjEneMe3StelthFPv ((f32 (*)(void *))get_node_world_y__16TObjEneMe3StelthFPv)
s32 end_effect_render__13TParticleCtrlFv();
s32 queue_debug_text__13TObjEneMe1GeeFlPc(s32, const char *);
s32 print_float_padded(s32, s32, f32);
void debug_printf_at(s32 id, const char *fmt, ...);
s32 scale_matrix(int, f32, f32, f32);
s32 rotate_matrix_y(int, int);
s32 push_matrix();
s32 pop_matrix();
s32 post_translate_matrix(void *);
s32 set_global_param__8TObjFishFl(void *);
s32 set_ginja_draw_list_mask(int);
s32 draw_ginja_model_with_motion(s32, void *, f32);
s32 set_global_flag__10TObjPlayerFv();
s32 clear_global_state__10TObjPlayerFv();
extern char lbl_8043D68C[];
extern char lbl_8043D69C[];
extern char lbl_8043D6AC[];
extern char lbl_8043D6BC[];
extern char lbl_8043D6C8[];
extern char lbl_8043D6E0[];
extern char lbl_8043D6F8[];
extern char lbl_8043D710[];
extern char lbl_8043D728[];
extern char lbl_8043D73C[];
#define TObjEneMe3Stelth__material_color_pointers ((u32 * *)&TObjEneMe3Stelth__material_color_pointers)
extern s32 model_render_flags;
extern const f32 TObjEneMe3Stelth__data_805DA808;
extern const f32 TObjEneMe3Stelth__data_805DA80C;
extern const f32 lbl_805DA83C;
extern const f32 TObjEneMe3Stelth__data_805DA840;
void draw_with_debug_info__16TObjEneMe3StelthFPv(Obj_800F18C8 *arg0);
}

extern "C" {

void draw_with_debug_info__16TObjEneMe3StelthFPv(Obj_800F18C8 *arg0) {
    s32 save[3];
    s32 flag;
    Motion_800F18C8 *motion;
    f32 frame;
    if (get_target_info__9TObjEneDDFPv(arg0) != 0) {
        if (TObjEneMe3Stelth__sub_800F4850(arg0) != 0) {
            debug_printf_at(pack_debug_text_position(0, 2), lbl_8043D68C);
        } else {
            debug_printf_at(pack_debug_text_position(0, 2), lbl_8043D69C);
        }
        if (is_angle_in_range__16TObjEneMe3StelthFPv(arg0) != 0) {
            debug_printf_at(pack_debug_text_position(0xF, 2), lbl_8043D6AC);
        } else {
            debug_printf_at(pack_debug_text_position(0xF, 2), lbl_8043D6BC);
        }
        queue_debug_text__13TObjEneMe1GeeFlPc(pack_debug_text_position(0, 4), lbl_8043D6C8);
        queue_debug_text__13TObjEneMe1GeeFlPc(pack_debug_text_position(0, 3), lbl_8043D6E0);
        queue_debug_text__13TObjEneMe1GeeFlPc(pack_debug_text_position(0, 6), lbl_8043D6F8);
        queue_debug_text__13TObjEneMe1GeeFlPc(pack_debug_text_position(0, 5), lbl_8043D710);
        if (TObjEneMe3Stelth__sub_800F47D4(arg0) != 0) {
            debug_printf_at(pack_debug_text_position(0, 9), lbl_8043D728);
        } else {
            debug_printf_at(pack_debug_text_position(0, 9), lbl_8043D73C);
        }
    }
    flag = TObjEneMe3Stelth__sub_800F47D4(arg0);
    if (arg0->m8(lbl_805DA83C, TObjEneMe3Stelth__data_805DA808) != 0) {
        set_global_param__8TObjFishFl(arg0->mdl);
        toggle_particle_effect__10TObjPlayerFv();
        if (flag != 0) {
            Part_800F18C8 *parts = arg0->mdl->parts;
            s32 i;
            for (i = 0; i < 3; i++) {
                save[i] = parts[i].c;
            }
            for (i = 0; i < 3; i++) {
                parts[i].c = parts[i + 3].c;
            }
        }
        push_matrix();
        post_translate_matrix(arg0->pos);
        rotate_matrix_y(0, arg0->rotY);
        scale_matrix(0, TObjEneMe3Stelth__data_805DA80C, TObjEneMe3Stelth__data_805DA80C, TObjEneMe3Stelth__data_805DA80C);
        {
            s32 i;
            for (i = 0; i < 3; i++) {
                if (TObjEneMe3Stelth__material_color_pointers[i] != NULL) {
                    *TObjEneMe3Stelth__material_color_pointers[i] = 0xB000FFB0;
                }
            }
        }
        if (arg0->f326 == 0) {
            s32 idx = arg0->fb8;
            if (idx < 0) {
                idx = 0;
            } else if (idx >= 0xD) {
                idx = 0xC;
            }
            motion = arg0->motions[arg0->anims[idx].idx].motion;
            frame = arg0->f360;
            if (frame < TObjEneMe3Stelth__data_805DA840) {
                frame = TObjEneMe3Stelth__data_805DA840;
            } else if (frame > (f32)(motion->nframes - 1)) {
                frame = (f32)(motion->nframes - 1);
            }
            set_ginja_draw_list_mask(3);
            set_global_flag__10TObjPlayerFv();
            draw_ginja_model_with_motion(arg0->f34, motion, frame);
            clear_global_state__10TObjPlayerFv();
            set_ginja_draw_list_mask(1);
            arg0->fF8 = motion;
            arg0->fc0 = frame;
            frame = get_node_world_y__16TObjEneMe3StelthFPv(arg0);
            print_float_padded(pack_debug_text_position(0, 7), 5, frame);
        } else {
            model_render_flags &= ~0x400;
        }
        pop_matrix();
        if (flag != 0) {
            s32 i;
            Part_800F18C8 *parts = arg0->mdl->parts;
            for (i = 0; i < 3; i++) {
                parts[i].c = save[i];
            }
        }
        end_effect_render__13TParticleCtrlFv();
    }
}

}
#undef TObjEneMe3Stelth__material_color_pointers
#undef TObjEneMe3Stelth__sub_800F47D4
#undef is_angle_in_range__16TObjEneMe3StelthFPv
#undef TObjEneMe3Stelth__sub_800F4850
#undef get_node_world_y__16TObjEneMe3StelthFPv
#include "types.h"

extern "C" {

void setup_move__16TObjEneMe3StelthFPv(void* p);
#define TObjEneMe3Stelth__sub_800F4758 ((int (*)(void*))TObjEneMe3Stelth__sub_800F4758)
#define get_target_info__9TObjEneDDFPv ((int (*)(void*))get_target_info__9TObjEneDDFPv)
#define setup_move_bounds__16TObjEneMe3StelthFPv ((int (*)(void*))setup_move_bounds__16TObjEneMe3StelthFPv)

void setup_move__16TObjEneMe3StelthFPv(void* p) { if (get_target_info__9TObjEneDDFPv(p) != 0) { setup_move_bounds__16TObjEneMe3StelthFPv(p); TObjEneMe3Stelth__sub_800F4758(p); } }

}
#undef get_target_info__9TObjEneDDFPv
#undef TObjEneMe3Stelth__sub_800F4758
#undef setup_move_bounds__16TObjEneMe3StelthFPv

#include "types.h"

struct VBase_14_aa9368 { char pad[0x14]; };

struct VObj_14_aa9368 : VBase_14_aa9368 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual s32 m6();
    virtual s32 m7();
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
    virtual s32 m106();
    virtual s32 m107();
    virtual s32 m108();
    virtual void m109();
    virtual void m110();
    virtual void m111();
    virtual void m112();
    virtual s32 m113();
};

struct Col_800F1CD4 { s32 a, b, c, d; };

extern "C" {
s32 is_split_screen();
s32 copy_vec4__13TRaderMapCoreFPvPv(void *, void *);
s32 check_demo_mode__10TObjPlayerFv();
s32 disable_if_single_screen__13TParticleCtrlFv();
s32 setup_tev_stage__10TObjPlayerFv();
s32 setup_particle_tev(s32);
s32 is_main_phase_15__9TObjEneDDFv();
s32 clear_global_flag_400__9TObjEneDDFv();
s32 update_primary_light__9TObjEneDDFv(void *);
s32 update_secondary_light__9TObjEneDDFv(void *);
s32 toggle_particle_effect__10TObjPlayerFv();
#define TObjEneMe3Stelth__sub_800F47D4 ((s32 (*)(void *))TObjEneMe3Stelth__sub_800F47D4)
#define draw_model__16TObjEneMe3StelthFPv ((s32 (*)(void *))draw_model__16TObjEneMe3StelthFPv)
s32 render_world_model__10TObjPlayerFv(void *);
s32 draw__16TObjEneRe7BeruraFv(void *);
s32 draw_model__12TObjNpcEnemyFv(void *);
s32 begin_effect_render__13TParticleCtrlFv();
s32 end_effect_render__13TParticleCtrlFv();
s32 toggle_flag_9_if_flag_10_is_clear__7TObjectFv(void *);
s32 dispatch_input_to_instance__18TAdEnterPasswordGCFi(void *);
#define rotate_matrix_y ((s32 (*)(s32, s32))rotate_matrix_y)
s32 translate_matrix(s32, f32, f32, f32);
s32 push_matrix();
s32 pop_matrix();
s32 post_translate_matrix(void *);
#define set_global_param__8TObjFishFl ((s32 (*)(s32))set_global_param__8TObjFishFl)
#define set_ginja_draw_list_mask ((s32 (*)(s32))set_ginja_draw_list_mask)
s32 set_color_blend_mode(s32, s32, s32, s32);
s32 set_model_node_callback(void *);
s32 set_chunk_material_override_pair(s32, s32);
s32 set_chunk_material_color(void *);
void add_instance__16TObjEneMe3StelthFv();
extern const Col_800F1CD4 stelth_render_color_a;
extern const Col_800F1CD4 stelth_render_color_b;
extern const Col_800F1CD4 me3_stelth_render_color;
extern const Col_800F1CD4 me3_stelth_secondary_render_color;
#define TObjEneMe3Stelth__material_color_pointers ((s32 * *)&TObjEneMe3Stelth__material_color_pointers)
extern u8 saved_model_draw_color[];
extern u8 model_material_color[];
extern s32 TObjEneMe3Stelth__render_node_index;
extern s32 stelth_projection_texture_handle;
extern s32 lbl_805D5660;
extern s32 lbl_805D5664;
extern s32 lbl_805D5668;
extern s32 chunk_polygon_flags_or_mask;
extern s32 chunk_polygon_flags_and_mask;
extern s32 model_render_flags;
extern const f32 lbl_805D9E84;
extern const f32 lbl_805D9E88;
extern const f32 TObjEneMe3Stelth__data_805DA808;
extern const f32 lbl_805DA83C;
extern const f32 TObjEneMe3Stelth__data_805DA840;
void render__16TObjEneMe3StelthFv(void *arg0_);
}

extern "C" {

#define F(t, o) (*(t *)((s8 *)(arg0) + (o)))
#define VO ((VObj_18_18102d *)(arg0))
#define VS ((VObj_14_aa9368 *)(arg0 + 0x404))
void TObjEneMe3Stelth::render() {
    s32 mode;
    s32 draw;
    u8 *arg0 = (u8 *)this;
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
        update_secondary_light__9TObjEneDDFv(arg0);
        lbl_805D5660 = model_render_flags;
        clear_global_flag_400__9TObjEneDDFv();
        toggle_particle_effect__10TObjPlayerFv();
        lbl_805D5664 = chunk_polygon_flags_and_mask;
        lbl_805D5668 = chunk_polygon_flags_or_mask;
        copy_vec4__13TRaderMapCoreFPvPv(saved_model_draw_color, model_material_color);
        if (is_split_screen() != 0) {
            s32 i;
            for (i = 0; i < 3; i++) {
                if (TObjEneMe3Stelth__material_color_pointers[i] != 0) {
                    *TObjEneMe3Stelth__material_color_pointers[i] = F(s32, 0x3E8);
                }
            }
            draw = 1;
            if (F(s32, 0x3C0) != 0) {
                if (F(s32, 0x3CC) & 8) {
                    VS->m6();
                } else {
                    model_render_flags |= 0x820;
                    Col_800F1CD4 c = stelth_render_color_a;
                    set_chunk_material_color(&c);
                    set_chunk_material_override_pair(0xFF00, 0x800);
                }
                if (toggle_flag_9_if_flag_10_is_clear__7TObjectFv(arg0) != 0) {
                    draw = 0;
                }
            } else if (VO->m107() != 0) {
                if (toggle_flag_9_if_flag_10_is_clear__7TObjectFv(arg0) != 0) {
                    draw = 0;
                }
            } else {
                model_render_flags |= 0x820;
                Col_800F1CD4 c = stelth_render_color_b;
                set_chunk_material_color(&c);
                set_chunk_material_override_pair(0xFF00, 0x800);
            }
            if (draw != 0) {
                set_global_param__8TObjFishFl(F(s32, 0x24));
                push_matrix();
                post_translate_matrix(arg0 + 0x38);
                translate_matrix(0, TObjEneMe3Stelth__data_805DA840, F(f32, 0x3D4), TObjEneMe3Stelth__data_805DA840);
                rotate_matrix_y(0, F(s32, 0x60));
                TObjEneMe3Stelth__render_node_index = 0;
                if (mode == 1) {
                    draw__16TObjEneRe7BeruraFv(arg0);
                } else {
                    render_world_model__10TObjPlayerFv(arg0);
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
                    model_render_flags |= 0x8021;
                    Col_800F1CD4 c = me3_stelth_render_color;
                    set_chunk_material_color(&c);
                    set_color_blend_mode(1, 4, 5, 0);
                } else {
                    setup_particle_tev(0);
                }
            } else {
                model_render_flags |= 0x8021;
                Col_800F1CD4 c = me3_stelth_secondary_render_color;
                set_chunk_material_color(&c);
                set_color_blend_mode(1, 4, 5, 0);
            }
            set_global_param__8TObjFishFl(F(s32, 0x24));
            for (i = 0; i < 3; i++) {
                if (TObjEneMe3Stelth__material_color_pointers[i] != 0) {
                    *TObjEneMe3Stelth__material_color_pointers[i] = F(s32, 0x3E8);
                }
            }
            VO->m107();
            push_matrix();
            post_translate_matrix(arg0 + 0x38);
            translate_matrix(0, TObjEneMe3Stelth__data_805DA840, F(f32, 0x3D4), TObjEneMe3Stelth__data_805DA840);
            rotate_matrix_y(0, F(s32, 0x60));
            TObjEneMe3Stelth__render_node_index = 0;
            F(s32, 0x420) += 0x222;
            stelth_projection_texture_handle = F(s32, 0x420);
            set_model_node_callback((void *)add_instance__16TObjEneMe3StelthFv);
            if (F(s32, 0x3C0) != 0) {
                set_ginja_draw_list_mask(3);
            }
            if (mode == 1) {
                draw_model__12TObjNpcEnemyFv(arg0);
            } else {
                draw_model__16TObjEneMe3StelthFPv(arg0);
            }
            if (F(s32, 0x3C0) != 0) {
                set_ginja_draw_list_mask(2);
            }
            set_model_node_callback(0);
            pop_matrix();
            VO->m108();
            if (F(s32, 0x3C0) != 0) {
                disable_if_single_screen__13TParticleCtrlFv();
            }
        }
        copy_vec4__13TRaderMapCoreFPvPv(model_material_color, saved_model_draw_color);
        chunk_polygon_flags_and_mask = lbl_805D5664;
        chunk_polygon_flags_or_mask = lbl_805D5668;
        end_effect_render__13TParticleCtrlFv();
        model_render_flags = lbl_805D5660;
        update_primary_light__9TObjEneDDFv(arg0);
    }
    end_effect_render__13TParticleCtrlFv();
}

}
#undef rotate_matrix_y
#undef set_global_param__8TObjFishFl
#undef set_ginja_draw_list_mask
#undef TObjEneMe3Stelth__material_color_pointers
#undef TObjEneMe3Stelth__sub_800F47D4
#undef draw_model__16TObjEneMe3StelthFPv
#include "types.h"

extern "C" {

void add_instance__16TObjEneMe3StelthFv(void);
int load_projection_tex_matrix__15TOTrapAncient02Fv(void*);

#define TObjEneMe3Stelth__render_node_index (*(int *)&TObjEneMe3Stelth__render_node_index)
#define stelth_projection_texture_handle (*(int *)&stelth_projection_texture_handle)
void add_instance__16TObjEneMe3StelthFv(void) { load_projection_tex_matrix__15TOTrapAncient02Fv((void*)(stelth_projection_texture_handle)); TObjEneMe3Stelth__render_node_index = (TObjEneMe3Stelth__render_node_index + 0x1); }

}
#undef TObjEneMe3Stelth__render_node_index
#undef stelth_projection_texture_handle

#include "types.h"

typedef struct { f32 x, y, z; } Vec_800F290C;
struct VBase_18_fd6cbb { char pad[0x18]; };

struct VObj_18_fd6cbb : VBase_18_fd6cbb {
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
};

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
    virtual s32 m92();
    virtual void m93();
    virtual void m94();
    virtual void m95();
    virtual void m96();
    virtual void m97();
    virtual void m98();
    virtual void m99();
    virtual s32 m100();
};

struct Vec_800F26A4 { f32 x, y, z; };

struct VBase_800F2270 { char pad[0x18]; };

struct VObj_800F2270 : VBase_800F2270 {
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
};

struct SBase_800F2270 { char pad[0x14]; };

struct SObj_800F2270 : SBase_800F2270 {
    virtual void s0();
    virtual void s1();
    virtual void s2();
    virtual void s3();
    virtual s32 s4();
};

struct Vec_800F2270 { f32 x, y, z; };

extern "C" {
f32 calc_boss4_scale__10TObjPlayerFi(void *);
s32 VecCopy__FP3VecPC3Vec(void *, void *);
s32 get_flag_b4__21TObjEneMe3ShinowaRealFv(void *);
f32 clamp_velocity__15TObjBoss2TunnelFv(Vec_800F290C *);
s32 clear_field_388__9TObjEneDDFv(void *);
s32 set_active__9TObjEneDDFv(void *);
s32 move_clamped_on_ground__9TObjEneDDFfff(void *, f32, f32, f32);
s32 clear_attack_receipts(void *);
s32 transition_enemy_state(void *, s32);
#define advance_animation_playback ((s32 (*)(void *, s32))advance_animation_playback)
#define play_sound_effect ((s32 (*)(s32, void *, s32, s32))play_sound_effect)
extern const f32 lbl_805DA858;
void TObjEneMe3Stelth__sub_800F290C(u8 *arg0, s32 arg1);
s32 VecCopy__FP3VecPC3Vec(void *, void *);
s32 queue_destruction__7TObjectFv(void *);
s32 get_flag_b4__21TObjEneMe3ShinowaRealFv(void *);
s32 init_zako__15TObjBoss2TunnelFPvl(void *, void *, int);
s32 refresh_and_send_entity_flags__12TBoss8DragonFv(void *);
s32 create_breakup_mdl__12TBoss3VoloptFlllll(int, void *, int, void *, int);
s32 spawn_effect_f8__10TObjPlayerFll(void *, int);
s32 trigger_dell_biter_events__10TObjPlayerFv(void *);
s32 objInBand__FP7GameObjf(void *, f32);
f32 sin_table_lookup(int);
f32 cos_table_lookup(int);
extern u8 me3_stelth_breakup_params[];
extern s32 TObjEneMe3Stelth__breakup_model;
extern const f32 lbl_805DA818;
extern const f32 TObjEneMe3Stelth__data_805DA824;
extern const f32 lbl_805DA82C;
extern const f32 TObjEneMe3Stelth__data_805DA840;
extern const f32 TObjEneMe3Stelth__data_805DA844;
extern const f32 TObjEneMe3Stelth__data_805DA850;
extern const f32 lbl_805DA854;
void handle_breakup_state__16TObjEneMe3StelthFPvi(u8 *arg0, s32 arg1);
f32 calc_boss4_scale__10TObjPlayerFi(void *);
s32 VecCopy__FP3VecPC3Vec(void *, void *);
s32 get_flag_b4__21TObjEneMe3ShinowaRealFv(void *);
u32 csnVectorUnder(void *, void *, int);
u32 csnVector(void *, void *, int);
s32 update_linked_position__14TObjEneEpsilonFf(void *, f32);
#define set_field_378__9TObjEneDDFPvi ((s32 (*)(void *, int))set_field_378__9TObjEneDDFPvi)
s32 transition_enemy_state(void *, s32);
s32 TObjEneMe3Stelth__sub_800F0F84(void *, void *);
#define TObjEneMe3Stelth__sub_800F47D4 ((s32 (*)(void *))TObjEneMe3Stelth__sub_800F47D4)
#define set_indexed_flags ((s32 (*)(void *, int, int))set_indexed_flags)
s32 find_section_at_position__6TSceneFv(void *);
f32 sin_table_lookup(int);
f32 cos_table_lookup(int);
extern u8 *TObjEneMe3Stelth__behavior_params_by_variant[];
extern const f32 TObjEneMe3Stelth__data_805DA820;
extern const f32 TObjEneMe3Stelth__data_805DA844;
extern const f32 TObjEneMe3Stelth__data_805DA848;
extern const f32 TObjEneMe3Stelth__data_805DA84C;
extern const f32 TObjEneMe3Stelth__data_805DA850;
void TObjEneMe3Stelth__sub_800F2270(u8 *arg0, s32 arg1);
}

extern "C" {

#pragma push
#pragma fp_contract on
#undef F
#define F(T, o) (*(T *)(arg0 + (o)))

#pragma push
#pragma fp_contract on
#define I(o) (*(s32 *)((s8 *)(arg0) + (o)))
#define R(o) (*(f32 *)((s8 *)(arg0) + (o)))
#define P(o) (*(u8 **)((s8 *)(arg0) + (o)))
#define V ((VObj_800F2270 *)(arg0))
#define S ((SObj_800F2270 *)(arg0 + 0x404))
void TObjEneMe3Stelth__sub_800F2270(u8 *arg0, s32 arg1) {
    Vec_800F2270 v;
    Vec_800F2270 p;
    Vec_800F2270 q;
    s32 arr[3];
    s32 i;
    s32 ang;
    switch (arg1) {
    case 4:
        *(s16 *)((s8 *)arg0 + 0xB8) = 0xC;
        set_field_378__9TObjEneDDFPvi(arg0, 0xC);
        V->m93();
        I(0x3CC) &= ~6;
        I(0x3CC) |= 1;
        I(0x424) = 0;
        break;
    case 3:
        if (I(0x424) == 2) {
            I(0x3C0) = 1;
            I(0x3CC) |= 0x40000;
            set_indexed_flags(arg0, 0, 0x8000000);
            if (calc_boss4_scale__10TObjPlayerFi(arg0) <= R(0x3D8)) {
                if (TObjEneMe3Stelth__sub_800F47D4(arg0) != 0) {
                    if (calc_boss4_scale__10TObjPlayerFi(arg0) > *(f32 *)((s8 *)TObjEneMe3Stelth__behavior_params_by_variant[I(0x3C8)] + 0x14)) {
                        transition_enemy_state(arg0, 0x10);
                    } else {
                        transition_enemy_state(arg0, 0xB);
                    }
                } else {
                    transition_enemy_state(arg0, 0x10);
                }
            } else {
                transition_enemy_state(arg0, 1);
            }
        }
        break;
    case 0:
        switch (I(0x424)) {
        case 0:
            advance_animation_playback(arg0, arg1);
            if (get_flag_b4__21TObjEneMe3ShinowaRealFv(arg0) != 0) {
                I(0x3CC) |= 4;
                S->s2();
                VecCopy__FP3VecPC3Vec(&v, arg0 + 0x38);
                v.y = R(0x3D0) - TObjEneMe3Stelth__data_805DA844;
                I(0x424) = 1;
                play_sound_effect(0x3B23B, arg0 + 0x38, 0, 0);
            }
            V->m100();
            V->m87();
            break;
        case 1:
            if (S->s4() != 0) {
                I(0x3CC) |= 2;
                if (update_linked_position__14TObjEneEpsilonFf(arg0, TObjEneMe3Stelth__data_805DA848) != 0) {
                    if (P(0x390) == NULL) {
                        break;
                    }
                    arr[0] = (s32)(TObjEneMe3Stelth__data_805DA84C * calc_boss4_scale__10TObjPlayerFi(arg0)) - 1;
                    arr[1] = (s32)(TObjEneMe3Stelth__data_805DA850 * calc_boss4_scale__10TObjPlayerFi(arg0)) - 1;
                    if (arr[1] <= arr[0]) {
                        arr[1]++;
                    }
                    arr[2] = -(arr[0] + arr[1]);
                    for (i = 0; i < 3; i++) {
                        VecCopy__FP3VecPC3Vec(&p, P(0x390) + 0x38);
                        ang = *(s32 *)((s8 *)(P(0x390)) + 0x60) + ((arr[i] + 1) << 14);
                        p.x = TObjEneMe3Stelth__data_805DA844 * cos_table_lookup(ang) + p.x;
                        p.z = p.z - TObjEneMe3Stelth__data_805DA844 * sin_table_lookup(ang);
                        p.y = p.y + TObjEneMe3Stelth__data_805DA820;
                        VecCopy__FP3VecPC3Vec(&q, &p);
                        q.x += p.x - *(f32 *)((s8 *)(P(0x390)) + 0x38);
                        q.z += p.z - *(f32 *)((s8 *)(P(0x390)) + 0x40);
                        if (TObjEneMe3Stelth__sub_800F0F84(arg0, &q) == 0 &&
                            csnVector(P(0x390) + 0x38, &q, 0x88E0) == 0 &&
                            csnVectorUnder(&p, arg0 + 0x120, 0x15) != 0 &&
                            find_section_at_position__6TSceneFv(&p) == *(s16 *)((s8 *)arg0 + 0x28)) {
                            VecCopy__FP3VecPC3Vec(arg0 + 0x38, &p);
                            I(0x60) = ang + 0xC000;
                            break;
                        }
                    }
                }
                I(0x424) = 2;
            }
            break;
        }
        break;
    case 5:
        I(0x3CC) &= ~4;
        break;
    }
}
#pragma pop

void handle_breakup_state__16TObjEneMe3StelthFPvi(u8 *arg0, s32 arg1) {
    Vec_800F26A4 ofs;
    Vec_800F26A4 v;
    switch (arg1) {
    case 4:
        F(s16, 0xB8) = 5;
        refresh_and_send_entity_flags__12TBoss8DragonFv(arg0);
        ((VObj_18 *)(arg0))->m92();
        F(s32, 0x3CC) &= ~0xF;
        F(s32, 0x424) = 0;
        break;
    case 3:
        break;
    case 0:
        switch (F(s32, 0x424)) {
        case 0:
            advance_animation_playback(arg0, arg1);
            if (objInBand__FP7GameObjf(arg0, lbl_805DA854) != 0 || objInBand__FP7GameObjf(arg0, lbl_805DA818) != 0) {
                play_sound_effect(0x3A836, arg0 + 0x38, 0, 0);
            }
            if (get_flag_b4__21TObjEneMe3ShinowaRealFv(arg0) != 0) {
                F(s32, 0x424) = 1;
                F(s32, 0x428) = 0;
                ofs.x = TObjEneMe3Stelth__data_805DA840;
                ofs.y = TObjEneMe3Stelth__data_805DA824;
                ofs.z = TObjEneMe3Stelth__data_805DA844;
                init_zako__15TObjBoss2TunnelFPvl(&ofs, arg0 + 0x38, F(s32, 0x60));
                spawn_effect_f8__10TObjPlayerFll(&ofs, 0x14);
            } else if (objInBand__FP7GameObjf(arg0, TObjEneMe3Stelth__data_805DA850) != 0) {
                F(s32, 0x3CC) |= 8;
            } else if (objInBand__FP7GameObjf(arg0, lbl_805DA82C) != 0) {
                F(s32, 0x3CC) &= ~8;
                F(s32, 0x3C0) = 0;
            }
            break;
        case 1:
            F(s32, 0x428)++;
            if (F(s32, 0x428) >= 0x14) {
                F(s32, 0x424) = 2;
                F(s32, 0x3CC) |= 2;
                create_breakup_mdl__12TBoss3VoloptFlllll(TObjEneMe3Stelth__breakup_model, me3_stelth_breakup_params, F(s32, 0x24), arg0 + 0x38, F(s32, 0x60));
                VecCopy__FP3VecPC3Vec(&v, arg0 + 0x38);
                v.x += TObjEneMe3Stelth__data_805DA844 * sin_table_lookup(F(s32, 0x60));
                v.z += TObjEneMe3Stelth__data_805DA844 * cos_table_lookup(F(s32, 0x60));
                trigger_dell_biter_events__10TObjPlayerFv(&v);
                play_sound_effect(0x3AD3A, arg0 + 0x38, 0, 0);
            }
            ((VObj_18 *)(arg0))->m100();
            break;
        case 2:
            queue_destruction__7TObjectFv(arg0);
            break;
        }
        break;
    case 5:
        F(s32, 0x3CC) &= ~8;
        break;
    }
}
#pragma pop

void TObjEneMe3Stelth__sub_800F290C(u8 *arg0, s32 arg1) {
    Vec_800F290C v;
    f32 c;
    switch (arg1) {
    case 4:
        *(s16 *)((s8 *)arg0 + 0xB8) = 4;
        advance_animation_playback(arg0, arg1);
        set_active__9TObjEneDDFv(arg0);
        play_sound_effect(0x3A839, arg0 + 0x38, 0, 0);
        break;
    case 3:
        if (get_flag_b4__21TObjEneMe3ShinowaRealFv(arg0) != 0) {
            if (*(s32 *)((s8 *)arg0 + 0x3C0) == 1 && calc_boss4_scale__10TObjPlayerFi(arg0) <= *(f32 *)((s8 *)arg0 + 0x3E0)) {
                transition_enemy_state(arg0, 0x12);
            } else {
                transition_enemy_state(arg0, *(s32 *)((s8 *)arg0 + 0x378));
            }
        }
        break;
    case 0:
        advance_animation_playback(arg0, arg1);
        VecCopy__FP3VecPC3Vec(&v, arg0 + 0x308);
        c = clamp_velocity__15TObjBoss2TunnelFv(&v);
        move_clamped_on_ground__9TObjEneDDFfff(arg0, v.x, v.z, c);
        *(f32 *)((s8 *)arg0 + 0x308) *= lbl_805DA858;
        *(f32 *)((s8 *)arg0 + 0x310) *= lbl_805DA858;
        ((VObj_18_fd6cbb *) arg0)->m87();
        break;
    case 5:
        clear_attack_receipts(arg0);
        clear_field_388__9TObjEneDDFv(arg0);
        break;
    }
}

}
#undef advance_animation_playback
#undef play_sound_effect
#undef set_field_378__9TObjEneDDFPvi
#undef set_indexed_flags
#undef TObjEneMe3Stelth__sub_800F47D4
#include "types.h"

extern "C" {

void action__16TObjEneMe3StelthFPvi(u8 *arg0, s32 arg1);
s32 set_field_378__9TObjEneDDFPvi(void *, s32);
s32 transition_enemy_state(void *, s32);
s32 get_flag_b4__21TObjEneMe3ShinowaRealFv(void *);
s32 advance_animation_playback();

struct TBase { char pad[0x18]; };
struct TObj : TBase {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual void v16();
    virtual void v17();
    virtual void v18();
    virtual void v19();
    virtual void v20();
    virtual void v21();
    virtual void v22();
    virtual void v23();
    virtual void v24();
    virtual void v25();
    virtual void v26();
    virtual void v27();
    virtual void v28();
    virtual void v29();
    virtual void v30();
    virtual void v31();
    virtual void v32();
    virtual void v33();
    virtual void v34();
    virtual void v35();
    virtual void v36();
    virtual void v37();
    virtual void v38();
    virtual void v39();
    virtual void v40();
    virtual void v41();
    virtual void v42();
    virtual void v43();
    virtual void v44();
    virtual void v45();
    virtual void v46();
    virtual void v47();
    virtual void v48();
    virtual void v49();
    virtual void v50();
    virtual void v51();
    virtual void v52();
    virtual void v53();
    virtual void v54();
    virtual void v55();
    virtual void v56();
    virtual void v57();
    virtual void v58();
    virtual void v59();
    virtual void v60();
    virtual void v61();
    virtual void v62();
    virtual void v63();
    virtual void v64();
    virtual void v65();
    virtual void v66();
    virtual void v67();
    virtual void v68();
    virtual void v69();
    virtual void v70();
    virtual void v71();
    virtual void v72();
    virtual void v73();
    virtual void v74();
    virtual void v75();
    virtual void v76();
    virtual void v77();
    virtual void v78();
    virtual void v79();
    virtual void v80();
    virtual void v81();
    virtual void v82();
    virtual void v83();
    virtual void v84();
    virtual void v85();
    virtual void v86();
    virtual void v87();
    virtual void v88();
    virtual void v89();
    virtual void v90();
    virtual void v91();
    virtual void v92();
    virtual void v93();
    virtual void v94();
    virtual void v95();
    virtual void v96();
    virtual void v97();
    virtual void v98();
    virtual void v99();
    virtual void v100();
};

struct SubBase { char pad[0x14]; };
struct SubObj : SubBase {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual s32 v4();
};

void action__16TObjEneMe3StelthFPvi(u8 *arg0, s32 arg1) {
    s32 temp_r0;

    switch (arg1) {
    case 4:
        *(s16 *)((s8 *)arg0 + 0xB8) = 8;
        set_field_378__9TObjEneDDFPvi(arg0, 6);
        ((TObj *)arg0)->v93();
        *(s32 *)((s8 *)arg0 + 0x3CC) = (s32) (*(s32 *)((s8 *)arg0 + 0x3CC) & 0xFFFFFFFC);
        *(s32 *)((s8 *)arg0 + 0x3CC) = (s32) (*(s32 *)((s8 *)arg0 + 0x3CC) | 4);
        ((SubObj *)(arg0 + 0x404))->v2();
        *(s32 *)((s8 *)arg0 + 0x424) = 1;
        return;
    case 3:
        if ((s32) *(s32 *)((s8 *)arg0 + 0x424) == 2) {
            transition_enemy_state(arg0, 0);
        }
        return;
    case 0:
        advance_animation_playback();
        temp_r0 = *(s32 *)((s8 *)arg0 + 0x424);
        switch (temp_r0) {
        case 0:
            if (get_flag_b4__21TObjEneMe3ShinowaRealFv(arg0) != 0) {
                *(s32 *)((s8 *)arg0 + 0x424) = 1;
            }
            break;
        case 1:
            if (((SubObj *)(arg0 + 0x404))->v4() != 0) {
                *(s32 *)((s8 *)arg0 + 0x424) = 2;
            }
            break;
        }
        ((TObj *)arg0)->v100();
        return;
    case 5:
        *(s32 *)((s8 *)arg0 + 0x3CC) = (s32) (*(s32 *)((s8 *)arg0 + 0x3CC) & 0xFFFFFFFB);
        break;
    }
}

}
#include "types.h"

#define CAT2(a,b) a##b
#define CAT(a,b) CAT2(a,b)
#define PADV virtual void CAT(f,__LINE__)();

extern "C" {

s32 set_field_378__9TObjEneDDFPvi(void *, s32);
s32 transition_enemy_state(void *, s32);
#define update_linked_position__14TObjEneEpsilonFf ((s32 (*)(f32))update_linked_position__14TObjEneEpsilonFf)
#define advance_animation_playback ((s32 (*)(void *, s32))advance_animation_playback)

extern const f32 TObjEneMe3Stelth__data_805DA848;
}

struct Base_A { char pad[0x18]; };
struct V_A : Base_A {
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    virtual void m87();
    PADV
    PADV
    PADV
    PADV
    PADV
    virtual void m93();
    PADV
    PADV
    PADV
    PADV
    PADV
    PADV
    virtual void m100();
};

extern "C" void handle_message__16TObjEneMe3StelthFPvi(void *arg0, s32 arg1) {
    s32 temp_r4;

    switch (arg1) {
    case 4:
        *(s16 *)((s8 *)arg0 + 0xB8) = 9;
        set_field_378__9TObjEneDDFPvi(arg0, 0xD);
        *(s32 *)((s8 *)arg0 + 0x3CC) = (s32) (*(s32 *)((s8 *)arg0 + 0x3CC) & 0xFFFFFFF8);
        ((V_A *) arg0)->m93();
        *(s32 *)((s8 *)arg0 + 0x3EC) = 0;
        *(s32 *)((s8 *)arg0 + 0x424) = 0;
        break;
    case 3:
        if (update_linked_position__14TObjEneEpsilonFf(TObjEneMe3Stelth__data_805DA848) != 0) {
            transition_enemy_state(arg0, 6);
        } else if ((s32) *(s32 *)((s8 *)arg0 + 0x424) >= 0x5A) {
            transition_enemy_state(arg0, 0xA);
        }
        break;
    case 5:
        break;
    case 0:
        temp_r4 = *(s32 *)((s8 *)arg0 + 0x424);
        *(s32 *)((s8 *)arg0 + 0x424) = (s32) (temp_r4 + 1);
        advance_animation_playback(arg0, temp_r4);
        ((V_A *) arg0)->m100();
        ((V_A *) arg0)->m87();
        break;
    }

}
#undef update_linked_position__14TObjEneEpsilonFf
#undef advance_animation_playback

#include "types.h"

struct VBase_18_bb4b7f { char pad[0x18]; };

struct VObj_18_bb4b7f : VBase_18_bb4b7f {
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
    virtual s32 m87();
    virtual void m88();
    virtual void m89();
    virtual void m90();
    virtual void m91();
    virtual void m92();
    virtual void m93();
    virtual s32 m94();
    virtual void m95();
    virtual void m96();
    virtual void m97();
    virtual void m98();
    virtual void m99();
    virtual s32 m100();
    virtual void m101();
    virtual void m102();
    virtual void m103();
    virtual s32 m104();
};

#include <stddef.h>
struct VBase_14_948132 { char pad[0x14]; };

struct VObj_14_948132 : VBase_14_948132 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual s32 m5();
};

struct VBase_18_599a64 { char pad[0x18]; };

struct VObj_18_599a64 : VBase_18_599a64 {
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
    virtual s32 m93();
};

struct Stack_800F3FE4 {
    s32 sp8;
    f32 spC;
};

struct Vec_800F42B8 { f32 x, y, z; };

struct VBase_14_800F42B8 { char pad[0x14]; };

struct VSub_800F42B8 : VBase_14_800F42B8 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual s32 m5();
};

struct VBase_18_800F42B8 { char pad[0x18]; };

struct VObj_800F42B8 : VBase_18_800F42B8 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3(); virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7(); virtual void m8(); virtual void m9(); virtual void m10(); virtual void m11(); virtual void m12(); virtual void m13(); virtual void m14(); virtual void m15(); virtual void m16(); virtual void m17(); virtual void m18(); virtual void m19(); virtual void m20(); virtual void m21(); virtual void m22(); virtual void m23(); virtual void m24(); virtual void m25(); virtual void m26(); virtual void m27(); virtual void m28(); virtual void m29(); virtual void m30(); virtual void m31(); virtual void m32(); virtual void m33(); virtual void m34(); virtual void m35(); virtual void m36(); virtual void m37(); virtual void m38(); virtual void m39(); virtual void m40(); virtual void m41(); virtual void m42(); virtual void m43(); virtual void m44(); virtual void m45(); virtual void m46(); virtual void m47(); virtual void m48(); virtual void m49(); virtual void m50(); virtual void m51(); virtual void m52(); virtual void m53(); virtual void m54(); virtual void m55(); virtual void m56(); virtual void m57(); virtual void m58(); virtual void m59(); virtual void m60(); virtual void m61(); virtual void m62(); virtual void m63(); virtual void m64(); virtual void m65(); virtual void m66(); virtual void m67(); virtual void m68(); virtual void m69(); virtual void m70(); virtual void m71(); virtual void m72(); virtual void m73(); virtual void m74(); virtual void m75(); virtual void m76(); virtual void m77(); virtual void m78(); virtual void m79(); virtual void m80(); virtual void m81(); virtual void m82(); virtual void m83(); virtual void m84(); virtual void m85(); virtual void m86(); virtual void m87(); virtual void m88(); virtual void m89(); virtual void m90(); virtual void m91(); virtual void m92(); virtual void m93(); virtual void m94(); virtual void m95(); virtual void m96(); virtual void m97(); virtual void m98(); virtual void m99();
    virtual void m100();
};

struct VBase_18_e66632 { char pad[0x18]; };

struct VObj_18_e66632 : VBase_18_e66632 {
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
    virtual s32 m87();
    virtual void m88();
    virtual void m89();
    virtual void m90();
    virtual void m91();
    virtual void m92();
    virtual void m93();
    virtual s32 m94();
    virtual void m95();
    virtual void m96();
    virtual void m97();
    virtual void m98();
    virtual void m99();
    virtual s32 m100();
    virtual void m101();
    virtual void m102();
    virtual void m103();
    virtual s32 m104();
    virtual void m105();
    virtual void m106();
    virtual void m107();
    virtual void m108();
    virtual s32 m109();
};

struct VBase_18_6a7bb5 { char pad[0x18]; };

struct VObj_18_6a7bb5 : VBase_18_6a7bb5 {
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
    virtual void m12();
    virtual void m13();
    virtual void m14();
    virtual void m15();
    virtual void m16();
    virtual void m17();
    virtual s32 m18(void *, f32);
    virtual void m19();
    virtual s32 m20(void *, f32);
    virtual void m21();
    virtual void m22();
    virtual s32 m23(void *, f32);
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
    virtual s32 m87();
    virtual void m88();
    virtual s32 m89();
    virtual s32 m90();
    virtual void m91();
    virtual void m92();
    virtual void m93();
    virtual s32 m94();
    virtual void m95();
    virtual void m96();
    virtual void m97();
    virtual void m98();
    virtual void m99();
    virtual u32 m100();
};

struct Vec_800F348C { f32 x, y, z; };

struct Mtx_800F348C { u8 pad[0x1C]; };

struct VBase_18_4f5f2e { char pad[0x18]; };

struct VObj_18_4f5f2e : VBase_18_4f5f2e {
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
    virtual s32 m87();
    virtual void m88();
    virtual void m89();
    virtual void m90();
    virtual void m91();
    virtual void m92();
    virtual void m93();
    virtual s32 m94();
    virtual void m95();
    virtual void m96();
    virtual void m97();
    virtual void m98();
    virtual void m99();
    virtual s32 m100();
    virtual void m101();
    virtual void m102();
    virtual s32 m103();
    virtual void m104();
    virtual s32 m105();
    virtual void m106();
    virtual void m107();
    virtual void m108();
    virtual void m109();
    virtual s32 m110();
};

struct VBase_18_347dfc { char pad[0x18]; };

struct VObj_18_347dfc : VBase_18_347dfc {
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
    virtual s32 m87();
    virtual void m88();
    virtual s32 m89();
    virtual s32 m90();
    virtual void m91();
    virtual void m92();
    virtual void m93();
    virtual s32 m94();
    virtual void m95();
    virtual void m96();
    virtual void m97();
    virtual void m98();
    virtual void m99();
    virtual s32 m100();
    virtual void m101();
    virtual s32 m102(f32);
};

extern "C" {
f32 calc_boss4_scale__10TObjPlayerFi(void *);
s32 update_angle__14TObjEneEpsilonFl(void *, int);
s32 enemy_copy_target_destination(void *);
s32 update_linked_position__14TObjEneEpsilonFf(void *, f32);
s32 update_velocity__9TObjEneDDFv(void *);
#define set_field_378__9TObjEneDDFPvi ((s32 (*)(void *, int))set_field_378__9TObjEneDDFPvi)
#define transition_enemy_state ((s32 (*)(void *, int))transition_enemy_state)
#define advance_animation_playback ((s32 (*)(void *))advance_animation_playback)
f32 sin_table_lookup(int);
f32 cos_table_lookup(int);
extern const f32 TObjEneMe3Stelth__data_805DA840;
extern const f32 TObjEneMe3Stelth__data_805DA848;
extern const f32 lbl_805DA888;
extern const f32 lbl_805DA88C;
void state_chase__16TObjEneMe3StelthFPvi(u8 *arg0, s32 arg1);
s32 VecCopy__FP3VecPC3Vec(void *, void *);
s32 TObjEneMe3SinowZoa__sub_800D758C(void *);
s32 TBoss3Volopt__sub_800D8D88(void *, f32);
extern const f32 TObjEneMe3Stelth__data_805DA824;
void TObjEneMe3Stelth__sub_800F3FE4(u8 *arg0, s32 arg1);
s32 VecCopy__FP3VecPC3Vec(void *, void *);
void create_timed_particle_emitter(void *, s32, s32, s32);
s32 TObjEneMe3SinowZoa__sub_800D758C(void *);
s32 TBoss3Volopt__sub_800D8D88(void *, f32);
f32 *TBoss3Volopt__sub_800F059C(void *);
extern const f32 TObjEneMe3Stelth__data_805DA844;
extern const f32 lbl_805DA890;
void TObjEneMe3Stelth__sub_800F42B8(u8 *arg0, s32 arg1);
s32 enemy_turn_and_move_on_ground(void *, int, f32);
s32 update_angle__14TObjEneEpsilonFl(void *, int);
s32 enemy_copy_target_destination(void *);
s32 update_linked_position__14TObjEneEpsilonFf(void *, f32);
s32 update_velocity__9TObjEneDDFv(void *);
s32 TObjEneMe3Stelth__sub_800F0C90(void *);
#define TObjEneMe3Stelth__sub_800F4C10 ((s32 (*)(f32))TObjEneMe3Stelth__sub_800F4C10)
f32 sin_table_lookup(int);
f32 cos_table_lookup(int);
#define TObjEneMe3Stelth__behavior_params_by_variant ((f32 * *)&TObjEneMe3Stelth__behavior_params_by_variant)
extern const f32 TObjEneMe3Stelth__data_805DA840;
extern const f32 TObjEneMe3Stelth__data_805DA848;
extern const f32 lbl_805DA878;
void state_chase_target__16TObjEneMe3StelthFPvi(u8 *arg0, s32 arg1);
s32 VecCopy__FP3VecPC3Vec(void *, void *);
f64 atan2_float(f32, f32);
#define get_flag_b4__21TObjEneMe3ShinowaRealFv ((s32 (*)())get_flag_b4__21TObjEneMe3ShinowaRealFv)
u32 csnVecterUnder(void *, int);
s32 enemy_check_target_valid(void *);
s32 update_death_check__14TObjEneEpsilonFv(void *);
s32 enemy_copy_target_destination(void *);
s32 update_velocity__9TObjEneDDFv(void *);
s32 clear_field_388__9TObjEneDDFv(void *);
s32 set_active__9TObjEneDDFv(void *);
s32 move_with_wall_slide_commit__9TObjEneDDFfff(void *, f32, f32, f32);
s32 move_with_wall_slide_on_ground__9TObjEneDDFfff(void *, f32, f32, f32);
s32 lookup_entry_by_value__10TObjPlayerFPvf(int, f32);
s32 play_hit_effect__16TObjEneMe3StelthFv(void *);
#define test_body_collision__16TObjEneMe3StelthFPvif ((s32 (*)(void *, int, f32))test_body_collision__16TObjEneMe3StelthFPvif)
s32 approach_angle_limited(int, int, int);
s32 objInBand__FP7GameObjf(void *, f32);
s32 find_section_at_position__6TSceneFv(void *);
#define play_sound_effect ((s32 (*)(int, void *, int, int))play_sound_effect)
s32 mult_vec_array__10TObjPlayerFUll(int, int, void *, int);
s32 set_matrix_identity(int);
s32 rotate_matrix_y(int, int);
s32 push_matrix();
s32 pop_matrix();
s32 post_translate_matrix(void *);
extern const f64 TObjEneMe3Stelth__data_8043D758;
extern s32 TObjEneMe3Stelth__trail_buffer;
extern const f32 TObjEneMe3Stelth__data_805DA80C;
extern const f32 lbl_805DA810;
extern const f32 TObjEneMe3Stelth__data_805DA824;
extern const f32 TObjEneMe3Stelth__data_805DA840;
extern const f32 TObjEneMe3Stelth__data_805DA844;
extern const f32 TObjEneMe3Stelth__data_805DA84C;
extern const f32 lbl_805DA86C;
extern const f32 lbl_805DA870;
extern const f32 lbl_805DA874;
void TObjEneMe3Stelth__sub_800F348C(u8 *arg0, s32 arg1);
f64 atan2_float(f32, f32);
s32 update_death_check__14TObjEneEpsilonFv(void *);
s32 enemy_copy_target_destination(void *);
s32 update_velocity__9TObjEneDDFv(void *);
s32 move_to_shot_position__9TObjEneDDFfff(void *, int, f32, f32, f32);
s32 TObjEneMe3Stelth__sub_800F0C90(void *);
s32 approach_angle_limited(int, int, int);
f32 sin_table_lookup(int);
f32 cos_table_lookup(int);
extern const f64 TObjEneMe3Stelth__data_8043D758;
extern const f32 TObjEneMe3Stelth__data_805DA820;
extern const f32 TObjEneMe3Stelth__data_805DA840;
extern const f32 TObjEneMe3Stelth__data_805DA844;
void TObjEneMe3Stelth__sub_800F3214(u8 *arg0, s32 arg1);
s32 clamp_frame_index__9TObjEneDDFl(s32);
s32 check_v2_mode__9TObjEneDDFv();
#define create_resta_effect__16TObjEneMe3StelthFPv ((s32 (*)(void *))create_resta_effect__16TObjEneMe3StelthFPv)
s32 create__10TTecDebandFlll(void *, void *, s32);
s32 create__9TTecSiftaFPvPvPv(void *, void *, s32);
void update_state_resta_cast__16TObjEneMe3StelthFPvi(u8 *arg0, s32 arg1);
f32 calc_boss4_scale__10TObjPlayerFi(void *);
f64 atan2_float(f32, f32);
s32 enemy_copy_target_destination(void *);
s32 update_velocity__9TObjEneDDFv(void *);
s32 clear_field_388__9TObjEneDDFv(void *);
s32 set_active__9TObjEneDDFv(void *);
s32 move_clamped_on_ground__9TObjEneDDFfff(void *, f32, f32, f32);
s32 play_hit_effect__16TObjEneMe3StelthFv(void *);
#define TObjEneMe3Stelth__sub_800F47D4 ((s32 (*)(void *))TObjEneMe3Stelth__sub_800F47D4)
s32 approach_angle_limited(int, int, int);
extern const f64 TObjEneMe3Stelth__data_8043D758;
extern const f32 TObjEneMe3Stelth__data_805DA808;
extern const f32 TObjEneMe3Stelth__data_805DA848;
extern const f32 lbl_805DA85C;
extern const f32 lbl_805DA860;
extern const f32 lbl_805DA864;
extern const f32 lbl_805DA868;
void run_walk_state__16TObjEneMe3StelthFPvi(u8 *arg0, s32 arg1);
}

extern "C" {

#pragma push
#pragma fp_contract on
#define F(T, o) (*(T *)(arg0 + (o)))
#undef VO
#define VO ((VObj_18_6a7bb5 *)(arg0))

void update_state_resta_cast__16TObjEneMe3StelthFPvi(u8 *arg0, s32 arg1) {
    switch (arg1) {
    case 4:
        *(s16 *)((s8 *)arg0 + 0xB8) = 8;
        set_field_378__9TObjEneDDFPvi(arg0, 0xB);
        ((VObj_18_4f5f2e *)(arg0))->m94();
        *(s32 *)((s8 *)arg0 + 0x3CC) = (s32) (*(s32 *)((s8 *)arg0 + 0x3CC) & 0xFFFFFFF9);
        *(s32 *)((s8 *)arg0 + 0x3CC) = (s32) (*(s32 *)((s8 *)arg0 + 0x3CC) | 1);
        *(s32 *)((s8 *)arg0 + 0x424) = 0;
        *(s32 *)((s8 *)arg0 + 0x428) = 0;
        return;
    case 3:
        if ((s32) *(s32 *)((s8 *)arg0 + 0x428) > *(s32 *)&TObjEneMe3Stelth__behavior_params_by_variant[*(s32 *)((s8 *)arg0 + 0x3C8)][7]) {
            transition_enemy_state(arg0, 6);
        }
    case 5:
        return;
    case 0:
        advance_animation_playback(arg0);
        switch (*(s32 *)((s8 *)arg0 + 0x424)) {
        case 0:
            if (((s32 (*)(void *))get_flag_b4__21TObjEneMe3ShinowaRealFv)(arg0) != 0) {
                create_resta_effect__16TObjEneMe3StelthFPv(arg0);
                if (check_v2_mode__9TObjEneDDFv() != 0) {
                    *(s32 *)((s8 *)arg0 + 0x424) = 2;
                } else {
                    *(s32 *)((s8 *)arg0 + 0x424) = 1;
                }
                *(s32 *)((s8 *)arg0 + 0x428) = 0;
            }
            break;
        case 1:
            *(s32 *)((s8 *)arg0 + 0x428) = (s32) (*(s32 *)((s8 *)arg0 + 0x428) + 1);
            break;
        case 2:
            *(s32 *)((s8 *)arg0 + 0x428) = (s32) (*(s32 *)((s8 *)arg0 + 0x428) + 1);
            if (*(s32 *)((s8 *)arg0 + 0x428) == 5) {
                create__9TTecSiftaFPvPvPv(arg0, arg0 + 0x38, clamp_frame_index__9TObjEneDDFl(*(s32 *)&TObjEneMe3Stelth__behavior_params_by_variant[*(s32 *)((s8 *)arg0 + 0x3C8)][6]));
            } else if (*(s32 *)((s8 *)arg0 + 0x428) == 0xA) {
                create__10TTecDebandFlll(arg0, arg0 + 0x38, clamp_frame_index__9TObjEneDDFl(*(s32 *)&TObjEneMe3Stelth__behavior_params_by_variant[*(s32 *)((s8 *)arg0 + 0x3C8)][6]));
                *(s32 *)((s8 *)arg0 + 0x424) = 1;
                *(s32 *)((s8 *)arg0 + 0x428) = 0;
            }
            break;
        }
        ((VObj_18_4f5f2e *)(arg0))->m100();
        break;
    }
}

void run_walk_state__16TObjEneMe3StelthFPvi(u8 *arg0, s32 arg1) {
    s32 temp_r0;
    s32 temp_r5;
    switch (arg1) {
    case 4:
        *(s16 *)((s8 *)arg0 + 0xB8) = 3;
        set_field_378__9TObjEneDDFPvi((void *) (arg0), (int) (6));
        ((VObj_18_347dfc *)(arg0))->m94();
        *(s32 *)((s8 *)arg0 + 0x3CC) &= ~7;
        *(s32 *)((s8 *)arg0 + 0x3EC) = 0;
        *(s32 *)((s8 *)arg0 + 0x424) = 3;
        if (((VObj_18_347dfc *)(arg0))->m102(TObjEneMe3Stelth__data_805DA848) != 0) {
            enemy_copy_target_destination((void *) (arg0));
            update_velocity__9TObjEneDDFv((void *) (arg0));
            *(s32 *)((s8 *)arg0 + 0x42C) = (s32) (TObjEneMe3Stelth__data_8043D758 * atan2_float((f32) (*(f32 *)((s8 *)arg0 + 0x3A0)), (f32) (*(f32 *)((s8 *)arg0 + 0x3A8))));
            if (test_body_collision__16TObjEneMe3StelthFPvif((void *) (arg0), (int) (*(s32 *)((s8 *)arg0 + 0x42C) + 0x8000), (f32) (lbl_805DA85C)) == 0) {
                *(f32 *)((s8 *)arg0 + 0x3A0) = (f32) (*(f32 *)((s8 *)arg0 + 0x3A0) * lbl_805DA860);
                *(f32 *)((s8 *)arg0 + 0x3A8) = (f32) (*(f32 *)((s8 *)arg0 + 0x3A8) * lbl_805DA860);
                *(s32 *)((s8 *)arg0 + 0x424) = 0;
                *(f32 *)((s8 *)arg0 + 0x430) = (f32) lbl_805DA864;
            }
        }
        set_active__9TObjEneDDFv((void *) (arg0));
        return;
    case 3:
        if ((s32) *(s32 *)((s8 *)arg0 + 0x424) == 3) {
            if (((s32) *(s32 *)((s8 *)arg0 + 0x3C0) == 0) && (calc_boss4_scale__10TObjPlayerFi((void *) (arg0)) <= *(f32 *)((s8 *)arg0 + 0x3DC))) {
                transition_enemy_state((void *) (arg0), (int) (0x11));
                return;
            }
            if (calc_boss4_scale__10TObjPlayerFi((void *) (arg0)) <= *(f32 *)((s8 *)arg0 + 0x3D8)) {
                if (TObjEneMe3Stelth__sub_800F47D4((void *) (arg0)) != 0) {
                    if (calc_boss4_scale__10TObjPlayerFi((void *) (arg0)) > TObjEneMe3Stelth__behavior_params_by_variant[*(s32 *)((s8 *)arg0 + 0x3C8)][5]) {
                        transition_enemy_state((void *) (arg0), (int) (0x10));
                        return;
                    }
                    transition_enemy_state((void *) (arg0), (int) (0xB));
                    return;
                }
                transition_enemy_state((void *) (arg0), (int) (0x10));
                return;
            }
            if (calc_boss4_scale__10TObjPlayerFi((void *) (arg0)) <= *(f32 *)((s8 *)arg0 + 0x3E4)) {
                transition_enemy_state((void *) (arg0), (int) (0xC));
                return;
            }
            transition_enemy_state((void *) (arg0), (int) (6));
        }
        return;
    case 0:
        advance_animation_playback((void *) (arg0));
        temp_r0 = *(s32 *)((s8 *)arg0 + 0x424);
        switch (temp_r0) {
        case 0:
            *(s32 *)((s8 *)arg0 + 0x60) = approach_angle_limited((int) (*(s32 *)((s8 *)arg0 + 0x60)), (int) (*(s32 *)((s8 *)arg0 + 0x42C)), (int) (0x31C7));
            if ((*(f32 *)((s8 *)arg0 + 0xC0) + *(f32 *)((s8 *)arg0 + 0xC8)) >= TObjEneMe3Stelth__data_805DA808) {
                *(s32 *)((s8 *)arg0 + 0x424) = 1;
                ((VObj_18_347dfc *)(arg0))->m89();
                play_sound_effect((int) (0x3A835), (void *) (arg0 + 0x38), (int) (0), (int) (0));
            }
            ((VObj_18_347dfc *)(arg0))->m100();
            ((VObj_18_347dfc *)(arg0))->m87();
            return;
        case 1:
            if ((*(f32 *)((s8 *)arg0 + 0xC0) + *(f32 *)((s8 *)arg0 + 0xC8)) >= lbl_805DA868) {
                *(s32 *)((s8 *)arg0 + 0x424) = 2;
                ((VObj_18_347dfc *)(arg0))->m90();
                play_hit_effect__16TObjEneMe3StelthFv((void *) (arg0));
            }
            move_clamped_on_ground__9TObjEneDDFfff((void *) (arg0), (f32) (*(f32 *)((s8 *)arg0 + 0x3A0)), (f32) (*(f32 *)((s8 *)arg0 + 0x3A8)), (f32) (*(f32 *)((s8 *)arg0 + 0x430)));
            return;
        case 2:
            if (((s32 (*)(void *))get_flag_b4__21TObjEneMe3ShinowaRealFv)((void *) (arg0)) != 0) {
                *(s32 *)((s8 *)arg0 + 0x424) = 3;
            }
            ((VObj_18_347dfc *)(arg0))->m100();
            ((VObj_18_347dfc *)(arg0))->m87();
            return;
        }
        break;
    case 5:
        ((VObj_18_347dfc *)(arg0))->m90();
        clear_field_388__9TObjEneDDFv((void *) (arg0));
        break;
    }
}

void TObjEneMe3Stelth__sub_800F3214(u8 *arg0, s32 arg1) {
    f32 temp_f1;
    s32 temp_r0;
    s32 var_r4;
    u8 *temp_r4;
    switch (arg1) {
    case 4:
        *(s16 *)((s8 *)arg0 + 0xB8) = 7;
        set_field_378__9TObjEneDDFPvi(arg0, 0xC);
        ((VObj_18_4f5f2e *)(arg0))->m94();
        *(s32 *)((s8 *)arg0 + 0x3CC) = (s32) (*(s32 *)((s8 *)arg0 + 0x3CC) & 0xFFFFFFF8);
        *(s32 *)((s8 *)arg0 + 0x3CC) = (s32) (*(s32 *)((s8 *)arg0 + 0x3CC) | 0x10000);
        *(s32 *)((s8 *)arg0 + 0x424) = 0;
        *(s32 *)((s8 *)arg0 + 0x428) = 0;
        return;
    case 3:
        if (get_flag_b4__21TObjEneMe3ShinowaRealFv() != 0) {
            ((VObj_18_4f5f2e *)(arg0))->m105();
        }
    case 5:
        return;
    case 0:
        advance_animation_playback(arg0);
        temp_r0 = *(s32 *)((s8 *)arg0 + 0x424);
        switch (temp_r0) {
        case 0:
            ((VObj_18_4f5f2e *)(arg0))->m103();
            if (*(f32 *)((s8 *)arg0 + 0xC0) < TObjEneMe3Stelth__data_805DA844) {
                if (update_death_check__14TObjEneEpsilonFv((void *) (arg0)) != 0) {
                    enemy_copy_target_destination((void *) (arg0));
                    update_velocity__9TObjEneDDFv((void *) (arg0));
                    var_r4 = (s32) (TObjEneMe3Stelth__data_8043D758 * atan2_float((f32) (*(f32 *)((s8 *)arg0 + 0x3A0)), (f32) (*(f32 *)((s8 *)arg0 + 0x3A8))));
                } else {
                    var_r4 = *(s32 *)((s8 *)arg0 + 0x60);
                }
                *(s32 *)((s8 *)arg0 + 0x60) = approach_angle_limited((int) (*(s32 *)((s8 *)arg0 + 0x60)), (int) (var_r4), (int) (0x300));
                *(f32 *)((s8 *)arg0 + 0x3A0) = sin_table_lookup((int) (*(s32 *)((s8 *)arg0 + 0x60)));
                *(f32 *)((s8 *)arg0 + 0x3A8) = cos_table_lookup((int) (*(s32 *)((s8 *)arg0 + 0x60)));
            }
            ((VObj_18_4f5f2e *)(arg0))->m110();
            TObjEneMe3Stelth__sub_800F0C90((void *) (arg0));
            temp_f1 = *(f32 *)((s8 *)arg0 + 0xC0);
            if ((temp_f1 >= TObjEneMe3Stelth__data_805DA840) && (temp_f1 <= TObjEneMe3Stelth__data_805DA820)) {
                move_to_shot_position__9TObjEneDDFfff((void *) (arg0), (int) TObjEneMe3Stelth__behavior_params_by_variant[*(s32 *)((s8 *)arg0 + 0x3C8)], *(f32 *)((s8 *)arg0 + 0x3A0), *(f32 *)((s8 *)arg0 + 0x3A8), TObjEneMe3Stelth__behavior_params_by_variant[*(s32 *)((s8 *)arg0 + 0x3C8)][2]);
            } else {
                ((VObj_18_4f5f2e *)(arg0))->m100();
            }
            if (*(f32 *)((s8 *)arg0 + 0xC0) >= 25.0f) {
                *(f32 *)((s8 *)arg0 + 0xC0) = 25.0f;
                *(s32 *)((s8 *)arg0 + 0x424) = 1;
            }
            break;
        case 1:
            *(s32 *)((s8 *)arg0 + 0x428) = (s32) (*(s32 *)((s8 *)arg0 + 0x428) + 1);
            if ((s32) *(s32 *)((s8 *)arg0 + 0x428) <= *(s32 *)&TObjEneMe3Stelth__behavior_params_by_variant[*(s32 *)((s8 *)arg0 + 0x3C8)][8]) {
                *(f32 *)((s8 *)arg0 + 0xC0) = 25.0f;
            }
            ((VObj_18_4f5f2e *)(arg0))->m100();
            break;
        }
        ((VObj_18_4f5f2e *)(arg0))->m87();
        break;
    }
}

void TObjEneMe3Stelth__sub_800F348C(u8 *arg0, s32 arg1) {
    Vec_800F348C v;
    Mtx_800F348C m;
    f32 t;
    s32 ang;
    s32 entry;
    switch (arg1) {
    case 4:
        F(s16, 0xB8) = 6;
        set_field_378__9TObjEneDDFPvi(arg0, 6);
        VO->m94();
        F(s32, 0x3CC) &= ~7;
        F(s32, 0x3CC) |= 0x10000;
        F(s32, 0x424) = 0;
        F(f32, 0x430) = TObjEneMe3Stelth__data_805DA840;
        set_active__9TObjEneDDFv(arg0);
        break;
    case 3:
        if (F(s32, 0x424) == 5 || get_flag_b4__21TObjEneMe3ShinowaRealFv() != 0) {
            if (VO->m100() == 0) {
                transition_enemy_state(arg0, 0xA);
            } else {
                transition_enemy_state(arg0, 6);
            }
        }
        break;
    case 0:
        switch (F(s32, 0x424)) {
        case 0:
            advance_animation_playback(arg0);
            if (F(s32, 0xB0) & 8) {
                F(s32, 0x424) = 1;
            }
            VO->m100();
            VO->m87();
            break;
        case 1:
            advance_animation_playback(arg0);
            if (update_death_check__14TObjEneEpsilonFv(arg0) != 0) {
                enemy_copy_target_destination(arg0);
                update_velocity__9TObjEneDDFv(arg0);
                ang = (s32)(TObjEneMe3Stelth__data_8043D758 * atan2_float(F(f32, 0x3A0), F(f32, 0x3A8)));
            } else {
                ang = F(s32, 0x60);
            }
            F(s32, 0x60) = approach_angle_limited(F(s32, 0x60), ang, 0x1000);
            if (objInBand__FP7GameObjf(arg0, TObjEneMe3Stelth__data_805DA824) != 0) {
                F(s32, 0x424) = 2;
            }
            VO->m100();
            VO->m87();
            break;
        case 2:
            advance_animation_playback(arg0);
            if (update_death_check__14TObjEneEpsilonFv(arg0) != 0) {
                enemy_copy_target_destination(arg0);
                update_velocity__9TObjEneDDFv(arg0);
            }
            if (F(f32, 0xC0) + F(f32, 0xC8) >= lbl_805DA86C) {
                if (test_body_collision__16TObjEneMe3StelthFPvif(arg0, F(s32, 0x60), F(f32, 0x3AC) - TObjEneMe3Stelth__data_805DA844) != 0) {
                    F(s32, 0x424) = 5;
                } else {
                    t = F(f32, 0x3AC) - TObjEneMe3Stelth__data_805DA844;
                    VecCopy__FP3VecPC3Vec(&v, arg0 + 0x38);
                    v.x += F(f32, 0x3A0) * t;
                    v.y += TObjEneMe3Stelth__data_805DA844;
                    v.z += F(f32, 0x3A8) * t;
                    if (csnVecterUnder(&v, 0x15) != 0) {
                        if (F(s16, 0x28) == find_section_at_position__6TSceneFv(&v)) {
                            F(s32, 0x424) = 3;
                            F(f32, 0x434) = (F(f32, 0x3AC) - TObjEneMe3Stelth__data_805DA844) / lbl_805DA870;
                            VO->m89();
                            play_sound_effect(0x3A835, arg0 + 0x38, 0, 0);
                        } else {
                            F(s32, 0x424) = 5;
                        }
                    } else {
                        F(s32, 0x424) = 5;
                    }
                }
            }
            VO->m100();
            VO->m87();
            break;
        case 3:
            advance_animation_playback(arg0);
            if (F(f32, 0xC0) + F(f32, 0xC8) >= lbl_805DA810) {
                F(s32, 0x424) = 4;
                VO->m90();
                play_hit_effect__16TObjEneMe3StelthFv(arg0);
            }
            move_with_wall_slide_commit__9TObjEneDDFfff(arg0, F(f32, 0x3A0), F(f32, 0x3A8), F(f32, 0x434));
            VO->m87();
            break;
        case 4:
            advance_animation_playback(arg0);
            if (objInBand__FP7GameObjf(arg0, 25.0f) != 0) {
                if (enemy_check_target_valid(arg0) != 0) {
                    if (((VObj_18_6a7bb5 *)F(u8 *, 0x390))->m18(arg0, TObjEneMe3Stelth__data_805DA80C) != 0) {
                        ((VObj_18_6a7bb5 *)F(u8 *, 0x390))->m20(arg0, TObjEneMe3Stelth__data_805DA80C);
                        ((VObj_18_6a7bb5 *)F(u8 *, 0x390))->m23(arg0, TObjEneMe3Stelth__data_805DA84C);
                    }
                }
                play_sound_effect(0x3A838, arg0 + 0x38, 0, 0);
            }
            F(f32, 0x434) *= lbl_805DA874;
            move_with_wall_slide_on_ground__9TObjEneDDFfff(arg0, F(f32, 0x3A0), F(f32, 0x3A8), F(f32, 0x434));
            VO->m87();
            break;
        }
        if (F(s32, 0x424) != 0) {
            entry = lookup_entry_by_value__10TObjPlayerFPvf(TObjEneMe3Stelth__trail_buffer, F(f32, 0xC0));
            if (entry != 0) {
                push_matrix();
                set_matrix_identity(0);
                post_translate_matrix(arg0 + 0x38);
                rotate_matrix_y(0, F(s32, 0x60));
                mult_vec_array__10TObjPlayerFUll(0, entry, &m, 2);
                pop_matrix();
            }
        }
        break;
    case 5:
        F(f32, 0x3D0) = F(f32, 0x3C);
        F(f32, 0x3D4) = TObjEneMe3Stelth__data_805DA840;
        VO->m90();
        clear_field_388__9TObjEneDDFv(arg0);
        break;
    }
}
#pragma pop

#pragma push
#pragma fp_contract on
void state_chase_target__16TObjEneMe3StelthFPvi(u8 *arg0, s32 arg1) {
    f32 temp_f31;
    switch (arg1) {
    case 4:
        *(s16 *)((s8 *)arg0 + 0xB8) = 0xA;
        set_field_378__9TObjEneDDFPvi(arg0, 6);
        ((VObj_18_e66632 *)(arg0))->m94();
        *(s32 *)((s8 *)arg0 + 0x3CC) = (s32) (*(s32 *)((s8 *)arg0 + 0x3CC) & 0xFFFFFFF8);
        *(f32 *)((s8 *)arg0 + 0x3AC) = (f32) lbl_805DA878;
        *(f32 *)((s8 *)arg0 + 0x430) = (f32) *TObjEneMe3Stelth__behavior_params_by_variant[*(s32 *)((s8 *)arg0 + 0x3C8)];
        *(f32 *)((s8 *)arg0 + 0x434) = (f32) TObjEneMe3Stelth__data_805DA840;
        return;
    case 3:
        if ((u32) *(u32 *)((s8 *)arg0 + 0x390) == 0U) {
            ((VObj_18_e66632 *)(arg0))->m109();
            transition_enemy_state((void *) (arg0), (int) (0xD));
            return;
        }
        if (TObjEneMe3Stelth__sub_800F4C10((f32) (*(f32 *)((s8 *)arg0 + 0x434))) != 0) {
            transition_enemy_state((void *) (arg0), (int) (8));
            return;
        }
        if (((VObj_18_e66632 *)(arg0))->m104() != 0) {
            transition_enemy_state((void *) (arg0), (int) (7));
        }
    case 5:
        return;
    case 0:
        advance_animation_playback(arg0);
        if (update_linked_position__14TObjEneEpsilonFf((void *) (arg0), (f32) (TObjEneMe3Stelth__data_805DA848)) != 0) {
            enemy_copy_target_destination((void *) (arg0));
            update_velocity__9TObjEneDDFv((void *) (arg0));
            TObjEneMe3Stelth__sub_800F0C90((void *) (arg0));
            temp_f31 = *(f32 *)((s8 *)arg0 + 0x3A8) * cos_table_lookup((int) (*(s32 *)((s8 *)arg0 + 0x60)));
            *(f32 *)((s8 *)arg0 + 0x434) = (f32) ((*(f32 *)((s8 *)arg0 + 0x3A0) * sin_table_lookup((int) (*(s32 *)((s8 *)arg0 + 0x60)))) + temp_f31);
            if (*(f32 *)((s8 *)arg0 + 0x434) < cos_table_lookup((int) (0x1000))) {
                update_angle__14TObjEneEpsilonFl((void *) (arg0), (int) (0x500));
                ((VObj_18_e66632 *)(arg0))->m100();
            } else {
                enemy_turn_and_move_on_ground((void *) (arg0), (int) (0x500), (f32) (*(f32 *)((s8 *)arg0 + 0x430)));
            }
            ((VObj_18_e66632 *)(arg0))->m87();
        }
        break;
    }
}
#pragma pop

extern const f32 lbl_805DA838;
extern const f32 lbl_805DA87C;
extern const f32 lbl_805DA880;
s32 enemy_has_live_target(void *);
#define get_node_world_y__16TObjEneMe3StelthFPv ((f32 (*)(void *))get_node_world_y__16TObjEneMe3StelthFPv)
void update_state_drop__16TObjEneMe3StelthFPvi(u8 *arg0, s32 arg1) {
    s32 update_distance_state__16TObjEneMe3StelthFPv(void *);
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f31;
    s32 temp_r0;

    switch (arg1) {
    case 4:
        *(s16 *)((s8 *)arg0 + 0xB8) = 1;
        set_field_378__9TObjEneDDFPvi(arg0, 0xD);
        ((VObj_18_4f5f2e *)(arg0))->m94();
        *(s32 *)((s8 *)arg0 + 0x3CC) = (s32) (*(s32 *)((s8 *)arg0 + 0x3CC) & 0xFFFFFFF9);
        *(s32 *)((s8 *)arg0 + 0x3CC) = (s32) (*(s32 *)((s8 *)arg0 + 0x3CC) | 1);
        *(s32 *)((s8 *)arg0 + 0x424) = 0;
        *(f32 *)((s8 *)arg0 + 0x430) = (f32) TObjEneMe3Stelth__data_805DA840;
        if (enemy_has_live_target(arg0) != 0) {
            enemy_copy_target_destination(arg0);
            update_velocity__9TObjEneDDFv(arg0);
        }
        break;
    case 3:
        if ((s32) *(s32 *)((s8 *)arg0 + 0x424) == 3) {
            transition_enemy_state(arg0, 0xD);
        }
        break;
    case 0:
        temp_r0 = *(s32 *)((s8 *)arg0 + 0x424);
        switch (temp_r0) {
        case 0:
            temp_f31 = get_node_world_y__16TObjEneMe3StelthFPv(arg0);
            advance_animation_playback(arg0);
            *(f32 *)((s8 *)arg0 + 0x434) = get_node_world_y__16TObjEneMe3StelthFPv(arg0);
            *(f32 *)((s8 *)arg0 + 0x3D0) = (f32) (*(f32 *)((s8 *)arg0 + 0x3D0) + (temp_f31 - *(f32 *)((s8 *)arg0 + 0x434)));
            *(s32 *)((s8 *)arg0 + 0x424) = 1;
            *(f32 *)((s8 *)arg0 + 0x3D4) = (f32) (*(f32 *)((s8 *)arg0 + 0x3D0) - *(f32 *)((s8 *)arg0 + 0x3C));
            break;
        case 1:
            advance_animation_playback(arg0);
            if (*(f32 *)((s8 *)arg0 + 0xC0) > lbl_805DA838) {
                *(f32 *)((s8 *)arg0 + 0xC0) = *(const f32 *)&lbl_805DA838;
            }
            *(f32 *)((s8 *)arg0 + 0x430) -= lbl_805DA87C;
            if (*(f32 *)((s8 *)arg0 + 0x430) < lbl_805DA880) {
                *(f32 *)((s8 *)arg0 + 0x430) = *(const f32 *)&lbl_805DA880;
            }
            *(f32 *)((s8 *)arg0 + 0x3D0) = (f32) (*(f32 *)((s8 *)arg0 + 0x3D0) + *(f32 *)((s8 *)arg0 + 0x430));
            temp_f1 = get_node_world_y__16TObjEneMe3StelthFPv(arg0);
            *(f32 *)((s8 *)arg0 + 0x3D0) = (f32) (*(f32 *)((s8 *)arg0 + 0x3D0) - (temp_f1 - *(f32 *)((s8 *)arg0 + 0x434)));
            *(f32 *)((s8 *)arg0 + 0x434) = temp_f1;
            if (*(f32 *)((s8 *)arg0 + 0x3D0) < *(f32 *)((s8 *)arg0 + 0x3C)) {
                *(f32 *)((s8 *)arg0 + 0x3D0) = *(f32 *)((s8 *)arg0 + 0x3C);
                *(s32 *)((s8 *)arg0 + 0x424) = 2;
                play_hit_effect__16TObjEneMe3StelthFv(arg0);
            }
            break;
        case 2:
            if (((int (*)(void *))get_flag_b4__21TObjEneMe3ShinowaRealFv)(arg0) != 0) {
                *(s16 *)((s8 *)arg0 + 0xB8) = 9;
                *(s32 *)((s8 *)arg0 + 0x424) = 3;
                *(f32 *)((s8 *)arg0 + 0x3D0) = (f32) *(f32 *)((s8 *)arg0 + 0x3C);
                *(f32 *)((s8 *)arg0 + 0x3D4) = (f32) TObjEneMe3Stelth__data_805DA840;
            }
            advance_animation_playback(arg0);
            break;
        }
        ((VObj_18_4f5f2e *)(arg0))->m100();
        update_distance_state__16TObjEneMe3StelthFPv(arg0);
        ((VObj_18_4f5f2e *)(arg0))->m87();
        *(f32 *)((s8 *)arg0 + 0x3D4) = (f32) (*(f32 *)((s8 *)arg0 + 0x3D0) - *(f32 *)((s8 *)arg0 + 0x3C));
        break;
    case 5:
        *(s32 *)((s8 *)arg0 + 0x3CC) = (s32) (*(s32 *)((s8 *)arg0 + 0x3CC) & 0xFFFFFFFE);
        *(f32 *)((s8 *)arg0 + 0x3D4) = (f32) TObjEneMe3Stelth__data_805DA840;
        break;
    }
}

void update_state_fade_in__16TObjEneMe3StelthFPvi(u8 *arg0, s32 arg1) {
    s32 enemy_validate_retained_target(void *, s32);
    s32 update_distance_state__16TObjEneMe3StelthFPv(void *);
    extern const s32 lbl_805DA884;
    s32 t;
    switch (arg1) {
    case 4:
        *(s16 *)((s8 *)arg0 + 0xB8) = 0;
        set_field_378__9TObjEneDDFPvi(arg0, 5);
        ((VObj_18_4f5f2e *)(arg0))->m93();
        *(s32 *)((s8 *)arg0 + 0x3CC) = (s32) (*(s32 *)((s8 *)arg0 + 0x3CC) & 0xFFFFFFF8);
        *(s32 *)((s8 *)arg0 + 0x424) = 0;
        *(s32 *)((s8 *)arg0 + 0x428) = 0;
        break;
    case 3:
        if ((s32) *(s32 *)((s8 *)arg0 + 0x424) > 0x1E) {
            transition_enemy_state(arg0, 5);
        }
        break;
    case 0:
        advance_animation_playback(arg0);
        if (*(s32 *)((s8 *)arg0 + 0x424) == 0) {
            if (update_linked_position__14TObjEneEpsilonFf(arg0, TObjEneMe3Stelth__data_805DA848) != 0) {
                *(s32 *)((s8 *)arg0 + 0x424) = 1;
                *(s32 *)((s8 *)arg0 + 0x3E8) = 0x1C00FFFF;
                *(s32 *)((s8 *)arg0 + 0x3E8) &= lbl_805DA884;
                *(s32 *)((s8 *)arg0 + 0x428) = 0;
            }
        } else {
            *(s32 *)((s8 *)arg0 + 0x424) += 1;
            *(s32 *)((s8 *)arg0 + 0x428) += 0x10;
            if ((s32) *(s32 *)((s8 *)arg0 + 0x428) > 0xFF) {
                *(s32 *)((s8 *)arg0 + 0x428) = 0xFF;
            }
            t = *(s32 *)((s8 *)arg0 + 0x428);
            *(s32 *)((s8 *)arg0 + 0x3E8) = (t << 24) | (*(s32 *)((s8 *)arg0 + 0x3E8) & 0x00FFFFFF);
            if (enemy_validate_retained_target(arg0, t) == 0) {
                *(s32 *)((s8 *)arg0 + 0x424) = 0;
                *(s32 *)((s8 *)arg0 + 0x3E8) = 0;
            }
        }
        ((VObj_18_4f5f2e *)(arg0))->m100();
        update_distance_state__16TObjEneMe3StelthFPv(arg0);
        ((VObj_18_4f5f2e *)(arg0))->m87();
        *(f32 *)((s8 *)arg0 + 0x3D4) = *(f32 *)((s8 *)arg0 + 0x3D0) - *(f32 *)((s8 *)arg0 + 0x3C);
        break;
    case 5:
        *(s32 *)((s8 *)arg0 + 0x3E8) = 0x1C00FFFF;
        *(f32 *)((s8 *)arg0 + 0x3D4) = TObjEneMe3Stelth__data_805DA840;
        break;
    }
}

void TObjEneMe3Stelth__sub_800F3FE4(u8 *arg0, s32 arg1) {
    typedef char sp8_offset[(offsetof(Stack_800F3FE4, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_800F3FE4, spC) == 0x4) ? 1 : -1];
    Stack_800F3FE4 stack;
    f32 temp_f1;
    switch (arg1) {
    case 4:
        *(s16 *)((s8 *)arg0 + 0xB8) = 0;
        set_field_378__9TObjEneDDFPvi((void *)(arg0), (int)(0));
        ((VObj_18_599a64 *)(arg0))->m93();
        *(s32 *)((s8 *)arg0 + 0x3CC) = (s32) (*(s32 *)((s8 *)arg0 + 0x3CC) | 7);
        TObjEneMe3SinowZoa__sub_800D758C((void *) ((u8 *)(arg0) + 0x404));
        VecCopy__FP3VecPC3Vec((void *) (&stack.sp8), (void *) ((u8 *)(arg0) + 0x38));
        temp_f1 = *(f32 *)((s8 *)arg0 + 0x3D0);
        stack.spC = temp_f1 - TObjEneMe3Stelth__data_805DA824;
        TBoss3Volopt__sub_800D8D88((void *) (&stack.sp8), (f32) (temp_f1));
        break;
    case 3:
        if (((VObj_14_948132 *)((u8 *)(arg0) + (1028)))->m5() != 0) {
            transition_enemy_state((void *) (arg0), (int) (4));
            break;
        }
    case 0:
        break;
    case 5:
        *(s32 *)((s8 *)arg0 + 0x3CC) = (s32) (*(s32 *)((s8 *)arg0 + 0x3CC) & 0xFFFFFFFB);
        break;
    }
}

#pragma push
#pragma fp_contract on
void state_chase__16TObjEneMe3StelthFPvi(u8 *arg0, s32 arg1) {
    f32 temp_f31;
    s32 temp_r0;
    switch (arg1) {
    case 4:
        *(s16 *)((s8 *)arg0 + 0xB8) = 9;
        set_field_378__9TObjEneDDFPvi((void *) (arg0), (int) (0xD));
        ((VObj_18_bb4b7f *)(arg0))->m94();
        *(s32 *)((s8 *)arg0 + 0x3CC) = (s32) (*(s32 *)((s8 *)arg0 + 0x3CC) & 0xFFFFFFF8);
        *(s32 *)((s8 *)arg0 + 0x424) = 0;
        *(s32 *)((s8 *)arg0 + 0x428) = 0;
        *(f32 *)((s8 *)arg0 + 0x434) = (f32) TObjEneMe3Stelth__data_805DA840;
        break;
    case 3:
        if (update_linked_position__14TObjEneEpsilonFf((void *) (arg0), (f32) (TObjEneMe3Stelth__data_805DA848)) != 0) {
            if (*(f32 *)((s8 *)arg0 + 0x3AC) <= lbl_805DA888) {
                transition_enemy_state((void *) (arg0), (int) (0xD));
                break;
            }
            temp_r0 = *(s32 *)((s8 *)arg0 + 0x428) - 1;
            *(s32 *)((s8 *)arg0 + 0x428) = temp_r0;
            if ((temp_r0 <= 0) && (((VObj_18_bb4b7f *)(arg0))->m104() != 0)) {
                *(s32 *)((s8 *)arg0 + 0x428) = 0x3C;
                if (calc_boss4_scale__10TObjPlayerFi((void *) (arg0)) <= lbl_805DA88C) {
                    transition_enemy_state((void *) (arg0), (int) (7));
                    break;
                }
            }
        } else {
            if ((s32) *(s32 *)((s8 *)arg0 + 0x424) >= 0xE10) {
                transition_enemy_state((void *) (arg0), (int) (0xD));
                break;
            }
        case 5:
            break;
        }
        break;
    case 0:
        *(s32 *)((s8 *)arg0 + 0x424) = (s32) (*(s32 *)((s8 *)arg0 + 0x424) + 1);
        advance_animation_playback((void *) (arg0));
        if (update_linked_position__14TObjEneEpsilonFf((void *) (arg0), (f32) (TObjEneMe3Stelth__data_805DA848)) != 0) {
            enemy_copy_target_destination((void *) (arg0));
            update_velocity__9TObjEneDDFv((void *) (arg0));
            temp_f31 = *(f32 *)((s8 *)arg0 + 0x3A8) * cos_table_lookup((int) (*(s32 *)((s8 *)arg0 + 0x60)));
            *(f32 *)((s8 *)arg0 + 0x434) = (f32) ((*(f32 *)((s8 *)arg0 + 0x3A0) * sin_table_lookup((int) (*(s32 *)((s8 *)arg0 + 0x60)))) + temp_f31);
            if (*(f32 *)((s8 *)arg0 + 0x434) < cos_table_lookup((int) (0x1000))) {
                update_angle__14TObjEneEpsilonFl((void *) (arg0), (int) (0x500));
                ((VObj_18_bb4b7f *)(arg0))->m100();
            }
        }
        ((VObj_18_bb4b7f *)(arg0))->m87();
        break;
    }
}
#pragma pop

void TObjEneMe3Stelth__sub_800F42B8(u8 *arg0, s32 arg1) {
    Vec_800F42B8 v;
    f32 t;
    switch (arg1) {
    case 4:
        *(s16 *)((s8 *)arg0 + 0xB8) = 2;
        set_field_378__9TObjEneDDFPvi(arg0, 0);
        ((VObj_800F42B8 *)arg0)->m93();
        *(s32 *)((s8 *)arg0 + 0x3CC) &= ~2;
        *(s32 *)((s8 *)arg0 + 0x3CC) |= 5;
        TObjEneMe3SinowZoa__sub_800D758C(arg0 + 0x404);
        VecCopy__FP3VecPC3Vec(&v, arg0 + 0x38);
        t = *(f32 *)((s8 *)arg0 + 0x3D0);
        v.y = t - TObjEneMe3Stelth__data_805DA844;
        if (*(s32 *)((s8 *)arg0 + 0x3C0) == 0) {
            TBoss3Volopt__sub_800D8D88(&v, t);
        } else {
            create_timed_particle_emitter(arg0 + 0x38, 0x79, 0, 0xF);
        }
        break;
    case 3:
        if (((VSub_800F42B8 *)(arg0 + 0x404))->m5() != 0) {
            if (*(s32 *)((s8 *)arg0 + 0x3C0) == 1) {
                transition_enemy_state(arg0, 2);
            } else {
                transition_enemy_state(arg0, 0xD);
            }
        }
        break;
    case 0:
        if (*TBoss3Volopt__sub_800F059C(arg0 + 0x404) >= lbl_805DA890) {
            advance_animation_playback(arg0);
        }
        ((VObj_800F42B8 *)arg0)->m100();
        break;
    case 5:
        *(s32 *)((s8 *)arg0 + 0x3CC) &= ~4;
        break;
    }
}

}
#undef set_field_378__9TObjEneDDFPvi
#undef transition_enemy_state
#undef advance_animation_playback
#undef TObjEneMe3Stelth__behavior_params_by_variant
#undef get_flag_b4__21TObjEneMe3ShinowaRealFv
#undef play_sound_effect
#undef create_resta_effect__16TObjEneMe3StelthFPv
#undef TObjEneMe3Stelth__sub_800F47D4
#undef TObjEneMe3Stelth__sub_800F4C10
#undef test_body_collision__16TObjEneMe3StelthFPvif
#undef get_node_world_y__16TObjEneMe3StelthFPv
#include "types.h"

extern "C" {

void TObjEneMe3Stelth__sub_800F4424(u8 *arg0, s32 arg1);
s32 check_v2_mode__9TObjEneDDFv(void);
s32 set_field_378__9TObjEneDDFPvi(void *, s32);
s32 transition_enemy_state(void *, s32);
s32 VecCopy__FP3VecPC3Vec(void *, void *);

}

struct Base18F { char pad[0x18]; };
struct VObj18F : Base18F {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual void m8(); virtual void m9(); virtual void m10(); virtual void m11();
    virtual void m12(); virtual void m13(); virtual void m14(); virtual void m15();
    virtual void m16(); virtual void m17(); virtual void m18(); virtual void m19();
    virtual void m20(); virtual void m21(); virtual void m22(); virtual void m23();
    virtual void m24(); virtual void m25(); virtual void m26(); virtual void m27();
    virtual void m28(); virtual void m29(); virtual void m30(); virtual void m31();
    virtual void m32(); virtual void m33(); virtual void m34(); virtual void m35();
    virtual void m36(); virtual void m37(); virtual void m38(); virtual void m39();
    virtual void m40(); virtual void m41(); virtual void m42(); virtual void m43();
    virtual void m44(); virtual void m45(); virtual void m46(); virtual void m47();
    virtual void m48(); virtual void m49(); virtual void m50(); virtual void m51();
    virtual void m52(); virtual void m53(); virtual void m54(); virtual void m55();
    virtual void m56(); virtual void m57(); virtual void m58(); virtual void m59();
    virtual void m60(); virtual void m61(); virtual void m62(); virtual void m63();
    virtual void m64(); virtual void m65(); virtual void m66(); virtual void m67();
    virtual void m68(); virtual void m69(); virtual void m70(); virtual void m71();
    virtual void m72(); virtual void m73(); virtual void m74(); virtual void m75();
    virtual void m76(); virtual void m77(); virtual void m78(); virtual void m79();
    virtual void m80(); virtual void m81(); virtual void m82(); virtual void m83();
    virtual void m84(); virtual void m85(); virtual void m86(); virtual void m87();
    virtual void m88(); virtual void m89(); virtual void m90(); virtual void m91();
    virtual void m92(); virtual void m93(); virtual void m94(); virtual void m95();
    virtual void m96(); virtual void m97(); virtual void m98(); virtual void m99();
    virtual void m100();
};

extern "C" {

void TObjEneMe3Stelth__sub_800F4424(u8 *arg0, s32 arg1) {
    switch (arg1) {
    case 4:
        if ((s32) *(s32 *)((s8 *)arg0 + 0x3C4) == 1) {
            *(s16 *)((s8 *)arg0 + 0xB8) = 2;
            set_field_378__9TObjEneDDFPvi(arg0, 1);
        } else {
            *(s16 *)((s8 *)arg0 + 0xB8) = 0;
            set_field_378__9TObjEneDDFPvi(arg0, 3);
        }
        ((VObj18F *)arg0)->m93();
        *(s32 *)((s8 *)arg0 + 0x3CC) = (s32) (*(s32 *)((s8 *)arg0 + 0x3CC) | 2);
        *(s32 *)((s8 *)arg0 + 0x3CC) = (s32) (*(s32 *)((s8 *)arg0 + 0x3CC) & 0xFFFFFFFE);
        if (check_v2_mode__9TObjEneDDFv() != 0) {
            *(s32 *)((s8 *)arg0 + 0x3CC) = (s32) (*(s32 *)((s8 *)arg0 + 0x3CC) & 0xFFFEFFFF);
        }
        *(s32 *)((s8 *)arg0 + 0x424) = 0;
        VecCopy__FP3VecPC3Vec(arg0 + 0x38, arg0 + 0x50);
        VecCopy__FP3VecPC3Vec(arg0 + 0x44, arg0 + 0x50);
        VecCopy__FP3VecPC3Vec(arg0 + 0x2FC, arg0 + 0x50);
        *(f32 *)((s8 *)arg0 + 0x3D0) = (f32) *(f32 *)((s8 *)arg0 + 0x3C);
        *(s32 *)((s8 *)arg0 + 0x3E8) = 0;
        *(s32 *)((s8 *)arg0 + 0x3EC) = 0;
        return;
    case 3:
        if ((s32) *(s32 *)((s8 *)arg0 + 0x424) > 5) {
            if ((s32) *(s32 *)((s8 *)arg0 + 0x3C4) == 1) {
                transition_enemy_state(arg0, 1);
            } else {
                transition_enemy_state(arg0, 3);
            }
        }
    case 5:
        return;
    case 0:
        *(s32 *)((s8 *)arg0 + 0x424) = (s32) (*(s32 *)((s8 *)arg0 + 0x424) + 1);
        if ((s32) *(s32 *)((s8 *)arg0 + 0x424) == 1) {
            *(f32 *)((s8 *)arg0 + 0x3D0) = (f32) *(f32 *)((s8 *)arg0 + 0x3C);
            ((VObj18F *)arg0)->m100();
            *(f32 *)((s8 *)arg0 + 0x3D4) = (f32) (*(f32 *)((s8 *)arg0 + 0x3D0) - *(f32 *)((s8 *)arg0 + 0x3C));
        }
        break;
    }
}

}
#define VObj_18 VObj_18__p11
#define VBase_18 VBase_18__p11

#include "types.h"

extern "C" {

struct RecoveredGlobal_800F4758_lbl_8050110C {
    s32 value;
    u8 remaining[0x10];
};

struct Info_800F4700 { u8 pad[0x18]; s32 frame; };

struct Obj_800F4700 { u8 pad[0x38]; u8 pos[0x3c8 - 0x38]; s32 kind; };

struct Base_800F4598 { u8 pad[0x18]; };

struct Obj_800F4598 : Base_800F4598 {
    virtual void v0(s32);
    virtual void v1(s32);
    virtual void v2(s32);
    virtual void v3(s32);
    virtual void v4(s32);
    virtual void v5(s32);
    virtual void v6(s32);
    virtual void v7(s32);
    virtual void v8(s32);
    virtual void v9(s32);
    virtual void v10(s32);
    virtual void v11(s32);
    virtual void v12(s32);
    virtual void v13(s32);
    virtual void v14(s32);
    virtual void v15(s32);
    virtual void v16(s32);
    virtual void v17(s32);
    virtual void v18(s32);
    virtual void v19(s32);
    virtual void v20(s32);
    virtual void v21(s32);
    virtual void v22(s32);
    virtual void v23(s32);
    virtual void v24(s32);
    virtual void v25(s32);
    virtual void v26(s32);
    virtual void v27(s32);
    virtual void v28(s32);
    virtual void v29(s32);
    virtual void v30(s32);
    virtual void v31(s32);
    virtual void v32(s32);
    virtual void v33(s32);
    virtual void v34(s32);
    virtual void v35(s32);
    virtual void v36(s32);
    virtual void v37(s32);
    virtual void v38(s32);
    virtual void v39(s32);
    virtual void v40(s32);
    virtual void v41(s32);
    virtual void v42(s32);
    virtual void v43(s32);
    virtual void v44(s32);
    virtual void v45(s32);
    virtual void v46(s32);
    virtual void v47(s32);
    virtual void v48(s32);
    virtual void v49(s32);
    virtual void v50(s32);
    virtual void v51(s32);
    virtual void v52(s32);
    virtual void v53(s32);
    virtual void v54(s32);
    virtual void v55(s32);
    virtual void v56(s32);
    virtual void v57(s32);
    virtual void v58(s32);
    virtual void v59(s32);
    virtual void v60(s32);
    virtual void v61(s32);
    virtual void v62(s32);
    virtual void v63(s32);
    virtual void v64(s32);
    virtual void v65(s32);
    virtual void v66(s32);
    virtual void v67(s32);
    virtual void v68(s32);
    virtual void v69(s32);
    virtual void v70(s32);
    virtual void v71(s32);
    virtual void v72(s32);
    virtual void v73(s32);
    virtual void v74(s32);
    virtual void v75(s32);
    virtual void v76(s32);
    virtual void v77(s32);
    virtual void v78(s32);
    virtual void v79(s32);
    virtual void v80(s32);
    virtual void v81(s32);
    virtual void v82(s32);
    virtual void v83(s32);
    virtual void v84(s32);
    virtual void v85(s32);
    virtual void v86(s32);
    virtual void v87(s32);
    virtual void v88(s32);
    virtual void v89(s32);
    virtual void v90(s32);
    virtual void v91(s32);
    virtual void v92(s32);
    virtual void v93(s32);
    virtual void v94(s32);
    virtual void v95(s32);
    virtual void v96(s32);
    virtual void v97(s32);
    virtual void v98();
    virtual void v99(s32);
    virtual void v100(s32);
    virtual void v101(s32);
    virtual void v102(s32);
    virtual void v103(s32);
    virtual void v104(s32);
    virtual void v105(s32);
    virtual void v106(s32);
    virtual void v107(s32);
    virtual void v108(s32);
    virtual void v109(s32);
    virtual void v110(s32);
    virtual void v111(s32);
    u8 pad1c[0x3C0 - 0x1C];
    s32 f3C0;
};

typedef char RecoveredGlobal_800F4758_lbl_8050110C_size[sizeof(RecoveredGlobal_800F4758_lbl_8050110C) == 0x14 ? 1 : -1];

struct O_800F4814 { u8 pad[0x354]; f32 f354; };

struct Base_800F4868 { char pad[0x18]; };

struct VObj_800F4868 : Base_800F4868 {
    virtual void m0();   virtual void m1();   virtual void m2();   virtual void m3();
    virtual void m4();   virtual void m5();   virtual void m6();   virtual void m7();
    virtual void m8();   virtual void m9();   virtual void m10();  virtual void m11();
    virtual void m12();  virtual void m13();  virtual void m14();  virtual void m15();
    virtual void m16();  virtual void m17();  virtual void m18();  virtual void m19();
    virtual void m20();  virtual void m21();  virtual void m22();  virtual void m23();
    virtual void m24();  virtual void m25();  virtual void m26();  virtual void m27();
    virtual void m28();  virtual void m29();  virtual void m30();  virtual void m31();
    virtual void m32();  virtual void m33();  virtual void m34();  virtual void m35();
    virtual void m36();  virtual void m37();  virtual void m38();  virtual void m39();
    virtual void m40();  virtual void m41();  virtual void m42();  virtual void m43();
    virtual void m44();  virtual void m45();  virtual void m46();  virtual void m47();
    virtual void m48();  virtual void m49();  virtual void m50();  virtual void m51();
    virtual void m52();  virtual void m53();  virtual void m54();  virtual void m55();
    virtual void m56();  virtual void m57();  virtual void m58();  virtual void m59();
    virtual void m60();  virtual void m61();  virtual void m62();  virtual void m63();
    virtual void m64();  virtual void m65();  virtual void m66();  virtual void m67();
    virtual void m68();  virtual void m69();  virtual void m70();  virtual void m71();
    virtual void m72();  virtual void m73();  virtual void m74();  virtual void m75();
    virtual void m76();  virtual void m77();  virtual void m78();  virtual void m79();
    virtual void m80();  virtual void m81();  virtual void m82();  virtual void m83();
    virtual void m84();  virtual void m85();  virtual void m86();
};

struct Base_800F48B8 { char pad[0x18]; };

struct VObj_800F48B8 : Base_800F48B8 {
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
};

struct E4988Base { char pad[0x14]; };

struct E4988Obj : E4988Base {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
};

struct E49D0Base { char pad[0x14]; };

struct E49D0Obj : E49D0Base {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
};

struct Vec_800F4D68 { f32 x; f32 y; f32 z; };

struct Node_800F4D68 { u8 pad[0x2c]; void *child; };

struct Obj_800F4D68 { u8 pad[0x34]; Node_800F4D68 *node; u8 pad2[0xc0 - 0x38]; f32 fc0; u8 pad3[0xf8 - 0xc4]; s32 ff8; };

struct Sub_800F4CC8 { f32 f0; u8 pad4[4]; f32 f8; f32 fC; f32 f10; s32 f14; s32 f18; };

struct Obj_800F4CC8 { u8 pad0[0x60]; s32 f60; u8 pad1[0xA4 - 0x64]; Sub_800F4CC8 *fA4; };

struct Base_800F4A90 { u8 pad[0x18]; };

struct VObj_800F4A90 : Base_800F4A90 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual void m8(); virtual void m9(); virtual void m10(); virtual void m11();
    virtual void m12(); virtual void m13(); virtual void m14(); virtual void m15();
    virtual void m16(); virtual void m17();
    virtual s32 m18(void *, f32);
    virtual void m19();
    virtual f32 m20(void *, f32);
    virtual void m21(); virtual void m22();
    virtual void m23(void *, f32);
};

struct Stelth_800F4A90 {
    u8 pad0[0x38];
    u8 pos[0x390 - 0x38];
    VObj_800F4A90 *target;
    u8 pad394[0x3F8 - 0x394];
    u8 f3F8[1];
};

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
    virtual s32 m81();
    virtual void m82();
    virtual s32 m83();
    virtual void m84();
    virtual void m85();
    virtual s32 m86();
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
    virtual void m106();
    virtual void m107();
    virtual void m108();
    virtual void m109();
    virtual void m110();
    virtual void m111();
    virtual s32 m112();
};

struct VBase_14_2ab9de { char pad[0x14]; };

struct VObj_14_2ab9de : VBase_14_2ab9de {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual s32 m3(f32);
};

typedef struct Tbl_800F5124 { u8 pad[0xC]; s32 t[3][2]; } Tbl_800F5124;

f32 calc_boss4_scale__10TObjPlayerFi(void *);
#define VecCopy__FP3VecPC3Vec ((void (*)(void *, void *))VecCopy__FP3VecPC3Vec)
s32 is_locally_controlled__10TObjPlayerFPv(void *);
u32 get_item_field_6__10TObjPlayerFPv(void *);
f32 fabs_float(f32);
#define queue_destruction__7TObjectFv ((void (*)(void *))queue_destruction__7TObjectFv)
s32 set_field_dc__10TObjPlayerFl(void *, int);
s32 set_field_d8__10TObjPlayerFl(void *, void *);
void fn_8002B630(void *, void *, s32);
s32 check_demo_mode__10TObjPlayerFv();
void spawn_particle_effect(void *, s32);
s32 get_field_d8__10TObjPlayerFv(void);
s32 enemy_check_target_valid(void *);
s32 enemy_init_validate_period(void *, int);
int select_and_apply_target__14TObjEneEpsilonFf(void*);
s32 enemy_init_acquire_period(void *, int);
void __dt__9TObjEneDDFv(void *, int);
s32 clamp_frame_index__9TObjEneDDFl(s32);
s32 reset_hp__9TObjEneDDFv(void *, int, int, int);
s32 initialize_enemy_state__9TObjEneDDFv(void *, int);
int TObjEneDD__vt93(void*);
int TObjEneDD__vt92(void*);
s32 check_state_flag_4__9TObjEneDDFv(void *);
void TObjEneDD__sub_800BA438(void *, void *);
s32 init_model__9TObjEneDDFv(void *, void *, int, int);
#define clear_attack_receipts ((void (*)(void *))clear_attack_receipts)
s32 set_player_state_default__12TBoss8DragonFv(void *);
#define transition_enemy_state ((int (*)(void*, void*))transition_enemy_state)
s32 init_position_vectors__9TObjEneDDFPv(void *);
void __dt__18TObjEneMe3SinowZoaFPvs(void *, int);
void TObjEneMe3Stelth__sub_800F1098(void *, s32);
void TObjEneMe3Stelth__sub_800F1440(void *, s32);
#define exec__16TObjEneMe3StelthFPvi ((void (*)(void *, s32))exec__16TObjEneMe3StelthFPvi)
#define TObjEneMe3Stelth__sub_800F2270 ((void (*)(void *, s32))TObjEneMe3Stelth__sub_800F2270)
#define handle_breakup_state__16TObjEneMe3StelthFPvi ((void (*)(void *, s32))handle_breakup_state__16TObjEneMe3StelthFPvi)
#define TObjEneMe3Stelth__sub_800F290C ((void (*)(void *, s32))TObjEneMe3Stelth__sub_800F290C)
#define action__16TObjEneMe3StelthFPvi ((void (*)(void *, s32))action__16TObjEneMe3StelthFPvi)
void handle_message__16TObjEneMe3StelthFPvi(void *, s32);
#define update_state_resta_cast__16TObjEneMe3StelthFPvi ((void (*)(void *, s32))update_state_resta_cast__16TObjEneMe3StelthFPvi)
#define run_walk_state__16TObjEneMe3StelthFPvi ((void (*)(void *, s32))run_walk_state__16TObjEneMe3StelthFPvi)
#define TObjEneMe3Stelth__sub_800F3214 ((void (*)(void *, s32))TObjEneMe3Stelth__sub_800F3214)
#define TObjEneMe3Stelth__sub_800F348C ((void (*)(void *, s32))TObjEneMe3Stelth__sub_800F348C)
#define state_chase_target__16TObjEneMe3StelthFPvi ((void (*)(void *, s32))state_chase_target__16TObjEneMe3StelthFPvi)
#define update_state_drop__16TObjEneMe3StelthFPvi ((void (*)(void *, s32))update_state_drop__16TObjEneMe3StelthFPvi)
#define update_state_fade_in__16TObjEneMe3StelthFPvi ((void (*)(void *, s32))update_state_fade_in__16TObjEneMe3StelthFPvi)
#define TObjEneMe3Stelth__sub_800F3FE4 ((void (*)(void *, s32))TObjEneMe3Stelth__sub_800F3FE4)
#define state_chase__16TObjEneMe3StelthFPvi ((void (*)(void *, s32))state_chase__16TObjEneMe3StelthFPvi)
#define TObjEneMe3Stelth__sub_800F42B8 ((void (*)(void *, s32))TObjEneMe3Stelth__sub_800F42B8)
void dispatch_state__16TObjEneMe3StelthFPvii(Obj_800F4598 *self, s32 arg1, s32 arg2);
void create_resta_effect__16TObjEneMe3StelthFPv(Obj_800F4700 *self);
void TObjEneMe3Stelth__sub_800F4758(u8 *arg0);
u8 TObjEneMe3Stelth__sub_800F47D4(u8 *arg0);
int select_and_apply_target__16TObjEneMe3StelthFPv(void* p);
s32 is_angle_in_range__16TObjEneMe3StelthFPv(O_800F4814 *self);
s32 TObjEneMe3Stelth__sub_800F4850(u8 *arg0);
void update_collision__16TObjEneMe3StelthFPv(void *arg0);
void update_distance_state__16TObjEneMe3StelthFPv(void *arg0);
void TObjEneMe3Stelth__sub_800F4910(void);
void TObjEneMe3Stelth__sub_800F4914(void* p);
void init_anim__16TObjEneMe3StelthFPv(void* p);
void TObjEneMe3Stelth__vt109(void);
s32 check_flag__16TObjEneMe3StelthFPv(u8 *arg0);
s32 check_active_flag__16TObjEneMe3StelthFPv(u8 *arg0);
void TObjEneMe3Stelth__vt105(void);
u8 check_target_in_range__16TObjEneMe3StelthFPv(void *arg0);
void TObjEneMe3Stelth__sub_800F4A8C(void);
void attack_and_unequip__16TObjEneMe3StelthFPv(Stelth_800F4A90 *self);
bool TObjEneMe3Stelth__sub_800F4C10(u8 *arg0);
u8 test_body_collision__16TObjEneMe3StelthFPvif(Obj_800F4CC8 *arg0, s32 arg1, f32 farg0);
f32 get_node_world_y__16TObjEneMe3StelthFPv(Obj_800F4D68 *self);
void setup_move_bounds__16TObjEneMe3StelthFPv(void *arg0);
void update_shadow_height__16TObjEneMe3StelthFPv(void *arg0);
void copy_pos_with_height_offset__16TObjEneMe3StelthFPv(u8 *arg0);
void TObjEneMe3Stelth__sub_800F4F14(void);
void TObjEneMe3Stelth__vt60(u8 *arg0);
void TObjEneMe3Stelth__vt61(void* p);
void TObjEneMe3Stelth__sub_800F4FC8(void);
void run_task__16TObjEneMe3StelthFv(u8 *arg0);
void * __dt__16TObjEneMe3StelthFv(void *arg0, s16 arg1);
#define TObjEneMe3Stelth__sub_800F5864 ((int (*)(void*, void*))TObjEneMe3Stelth__sub_800F5864)
#define TObjEneMe3Stelth__sub_800F5874 ((int (*)(void*, void*))TObjEneMe3Stelth__sub_800F5874)
s32 objInBand__FP7GameObjf(void *, f32);
s32 set_animation__10TObjPlayerFPvs(void *, int);
s32 clear_player_status_flag__10TObjPlayerFlUl(void *, int, int);
#define set_indexed_flags ((s32 (*)(void *, int, int))set_indexed_flags)
s32 update_enemy_collision_flags__10TObjPlayerFv(void *);
s32 check_enemy_body_collisions(void *);
s32 check_object_collisions__10TObjPlayerFv(void *);
void free_collision_body_parts(void *);
void get_hand_joint_position__10TObjPlayerFPvi(void *, void *);
void send_6x26_unequip_item__10TObjPlayerFPvPv(void *, s32);
#define play_sound_effect ((void (*)(s32, void *, s32, s32))play_sound_effect)
void __dl__7TObjectFPv(void *);
s32 create__9TTecRestaFPvPvPv(void *, void *, int);
#define sin_table_lookup ((f32 (*)(s32))sin_table_lookup)
#define cos_table_lookup ((f32 (*)(s32))cos_table_lookup)
void bind_motion_context(s32, f32);
s32 compose_motion_node_matrix(void *);
s32 matrix_mult_vec(int, void *, void *);
s32 push_matrix_from(void *);
s32 pop_matrix();

#define TObjEneMe3Stelth__behavior_params_by_variant ((Info_800F4700 * *)&TObjEneMe3Stelth__behavior_params_by_variant)
extern u8 *TObjEneMe3Stelth__bml_resource;
extern const f32 TObjEneMe3Stelth__data_805DA808;
extern const f32 TObjEneMe3Stelth__data_805DA80C;
extern const f32 TObjEneMe3Stelth__data_805DA824;
extern const f32 TObjEneMe3Stelth__data_805DA840;
extern const f32 TObjEneMe3Stelth__data_805DA844;
extern const f32 TObjEneMe3Stelth__data_805DA84C;
extern const f32 TObjEneMe3Stelth__data_805DA850;
extern s32 __vt__16TObjEneMe3Stelth[];
#define lbl_805010E0 (*(Tbl_800F5124 *)&lbl_805010E0)
#define TObjEneMe3Stelth__alternate_texture_list (*(RecoveredGlobal_800F4758_lbl_8050110C *)&TObjEneMe3Stelth__alternate_texture_list)
extern u8 identity_matrix[];
extern const f32 lbl_805DA810;
extern const f32 lbl_805DA814;
extern const f32 lbl_805DA81C;
extern const f32 lbl_805DA87C;
extern const f32 lbl_805DA894;
extern f32 lbl_805DA898;
extern f32 lbl_805DA89C;
extern const f32 lbl_805DA8A0;
extern const f32 lbl_805DA8A4;
extern const f32 lbl_805DA8A8;
extern const f32 lbl_805DA8AC;

extern "C" void TLobby__sub_801A1FD8();
extern "C" void TObjEneDD__vt100();
extern "C" void TObjEneDD__vt77();
extern "C" void TObjEneDD__vt82();
extern "C" void TObjEneDD__vt83();
extern "C" void TObjEneDD__vt84();
extern "C" void TObjEneDD__vt87();
extern "C" void TObjEneDD__vt88();
extern "C" void TObjEneDD__vt89();
extern "C" void TObjEneDD__vt90();
extern "C" void TObjEneDD__vt91();
extern "C" void TObjEneDD__vt94();
extern "C" void TObjEneDD__vt95();
extern "C" void TObjEneDD__vt96();
extern "C" void TObjEneDD__vt97();
extern "C" void TObjEneDD__vt98();
extern "C" void TObjEneDD__vt99();
extern "C" void TObjEneEpsilon__vt81();
extern "C" void TObjEneMe3StelthReal__vt105();
extern "C" void TObjEneMe3StelthReal__vt109();
extern "C" void TObjEneMe3StelthReal__vt60();
extern "C" void TObjEneMe3StelthReal__vt61();
extern "C" void handle_direct_attack__16TObjEneMe3StelthFPvPviPv();
extern "C" void TObjPlayer__sub_8000FF3C();
extern "C" void TObjPlayer__sub_80010A80();
extern "C" void consume_timer_field__10TObjPlayerFPvi();
extern "C" void TObjPlayer__sub_80014830();
extern "C" void TObjPlayer__sub_80014838();
extern "C" void TObjPlayer__sub_80014840();
extern "C" void TObjPlayer__sub_80014890();
extern "C" void TObjPlayer__sub_80014894();
extern "C" void TObjPlayer__sub_80014898();
extern "C" void apply_slow_status__10TObjPlayerFPv();
extern "C" void update_shock_clock__10TObjPlayerFPv();
extern "C" void TObjPlayer__sub_800172CC();
extern "C" void TObjPlayer__sub_80018E6C();
extern "C" void TObjPlayer__sub_80019568();
extern "C" void update_and_send_enemy_hit_state();
extern "C" void apply_hit_message_flags__10TObjPlayerFPvPv();
extern "C" void __dt__20TObjEneMe3StelthRealFv();
extern "C" void add_actor_exp();
extern "C" void apply_action_hold_status();
extern "C" void apply_anti_technique__10TObjPlayerFv();
extern "C" void apply_attack_stat_status__10TObjPlayerFv();
extern "C" void apply_confusion_status__10TObjPlayerFv();
extern "C" void apply_defense_stat_status__10TObjPlayerFlPv();
extern "C" void apply_knockback_from_attacker();
extern "C" void apply_movement_ailment__10TObjPlayerFv();
extern "C" void apply_object_set_data();
extern "C" void apply_paralysis__10TObjPlayerFv();
extern "C" void apply_poison_status__10TObjPlayerFv();
extern "C" void apply_set_data__9TObjEnemyFPvPv();
extern "C" void apply_shock_status__10TObjPlayerFv();
extern "C" void apply_switch_attack__10TObjPlayerFi();
extern "C" void calc_distance_accuracy_penalty__10TObjPlayerFv();
extern "C" void classify_actor_view_detail();
extern "C" void clear_all_status_effects();
extern "C" void clear_harmful_statuses__10TObjPlayerFv();
extern "C" void cure_paralysis__10TObjPlayerFv();
extern "C" void cure_poison_ailment();
extern "C" void enemy_spawn_jellen_effect();
extern "C" void enemy_spawn_zalure_effect();
extern "C" void fn_80010EBC();
extern "C" void fn_80010EC0();
extern "C" void fn_80010EC4();
extern "C" void fn_80010EC8();
extern "C" void clear_lobby_object_state();
extern "C" void get_actor_body_center();
extern "C" void get_actor_level_index();
extern "C" void get_enemy_name__14TObjEnePanarmsFv();
extern "C" void get_pos__10TObjPlayerFii();
extern "C" void has_flag_0x800__10TObjPlayerFPv();
extern "C" void is_actor_cadence_frame();
extern "C" void is_target_in_attack_range__10TObjPlayerFv();
extern "C" u8 lbl_8043D49C[];
extern "C" u8 lbl_8043D4AC[];
extern "C" u8 lbl_8043D4C4[];
extern "C" u8 lbl_8043D4D8[];
extern "C" u8 lbl_8043D4F4[];
extern "C" u8 lbl_8043D50C[];
extern "C" u8 lbl_8043D524[];
extern "C" u8 lbl_8043D538[];
extern "C" u8 lbl_8043D550[];
extern "C" u8 lbl_8043D564[];
extern "C" u8 lbl_8043D580[];
extern "C" u8 lbl_8043D594[];
extern "C" u8 lbl_8043D5A8[];
extern "C" u8 lbl_8043D5C8[];
extern "C" u8 lbl_8043D5D8[];
extern "C" void receive_physical_attack__10TObjPlayerFv();
extern "C" void receive_weapon_special_attack__10TObjPlayerFv();
extern "C" void render_actor_shadows_default();
extern "C" void reset_actor_action_state();
extern "C" void reset_pose__10TObjPlayerFPv();
extern "C" void roll_physical_accuracy__10TObjPlayerFv();
extern "C" void select_melee_contact_body__10TObjPlayerFv();
extern "C" void test_flag30_512__10TObjPlayerFPv();
extern "C" void test_flag_1000__10TObjPlayerFPv();
extern "C" void test_flag_256__10TObjPlayerFPv();
extern "C" void trigger_switch_attack__10TObjPlayerFi();
extern "C" void try_start_action__10TObjPlayerFPvii();
extern "C" void update_action_hold_status__10TObjPlayerFv();
extern "C" void update_action_timer__10TObjPlayerFPv();
extern "C" void update_actor_ground_y();
extern "C" void update_attack_stat_status();
extern "C" void update_defense_stat_status();
extern "C" void update_flag30_timer__10TObjPlayerFPv();
extern "C" void update_movement_status__10TObjPlayerFv();
extern "C" void update_object_view_visibility();
extern "C" void update_poison_status__10TObjPlayerFv();
extern void *lbl_80497710[2];
extern void *lbl_80497718[12];
extern void *stelth_bml_resource_desc[4];
extern void *lbl_80497758[2];
extern void *lbl_80497760[12];
extern void *me3_stelth_bml_resource_desc[4];
void *TObjEneMe3Stelth__shared_params[7] = {
    (void *)0x43610000, (void *)0x0, (void *)0x600, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0,
};
void *TObjEneMe3Stelth__collision_body_template[11] = {
    (void *)0x0, (void *)0x0, (void *)0x0, (void *)0x41000000,
    (void *)0x0, (void *)0x0, (void *)0x8003, (void *)0x0,
    (void *)0x0, (void *)0x0, (void *)0x0,
};
__declspec(section ".data") void *lbl_80497710[2] = {
    (void *)&lbl_8043D49C, (void *)0x0,
};
void *lbl_80497718[12] = {
    (void *)&lbl_8043D4AC, (void *)&lbl_8043D4C4, (void *)&lbl_8043D4D8, (void *)&lbl_8043D4F4,
    (void *)&lbl_8043D50C, (void *)&lbl_8043D524, (void *)&lbl_8043D538, (void *)&lbl_8043D550,
    (void *)&lbl_8043D564, (void *)&lbl_8043D580, (void *)&lbl_8043D594, (void *)0x0,
};
void *stelth_bml_resource_desc[4] = {
    (void *)&lbl_8043D5A8, (void *)&lbl_80497710, (void *)&lbl_80497718, (void *)0x1000b,
};
__declspec(section ".data") void *lbl_80497758[2] = {
    (void *)&lbl_8043D5C8, (void *)0x0,
};
void *lbl_80497760[12] = {
    (void *)&lbl_8043D4AC, (void *)&lbl_8043D4C4, (void *)&lbl_8043D4D8, (void *)&lbl_8043D4F4,
    (void *)&lbl_8043D50C, (void *)&lbl_8043D524, (void *)&lbl_8043D538, (void *)&lbl_8043D550,
    (void *)&lbl_8043D564, (void *)&lbl_8043D580, (void *)&lbl_8043D594, (void *)0x0,
};
void *me3_stelth_bml_resource_desc[4] = {
    (void *)&lbl_8043D5D8, (void *)&lbl_80497758, (void *)&lbl_80497760, (void *)0x1000b,
};
void *TObjEneMe3Stelth__animation_descriptors[52] = {
    (void *)0x10000, (void *)0x0, (void *)0x3f000000, (void *)0x80000000,
    (void *)0x30000, (void *)0x1, (void *)0x3f333333, (void *)0x80000000,
    (void *)0x10000, (void *)0x9, (void *)0x3f000000, (void *)0x80000000,
    (void *)0x30000, (void *)0x2, (void *)0x3f4ccccd, (void *)0x0,
    (void *)0x30000, (void *)0x4, (void *)0x3ecccccd, (void *)0x0,
    (void *)0x30000, (void *)0x5, (void *)0x3f19999a, (void *)0x0,
    (void *)0x30000, (void *)0x6, (void *)0x3f333333, (void *)0x0,
    (void *)0x30000, (void *)0x7, (void *)0x3f800000, (void *)0x0,
    (void *)0x30000, (void *)0x8, (void *)0x3f800000, (void *)0x0,
    (void *)0x10000, (void *)0x9, (void *)0x3f000000, (void *)0x0,
    (void *)0x10000, (void *)0xa, (void *)0x3f8ccccd, (void *)0x0,
    (void *)0x30000, (void *)0x3, (void *)0x3f333333, (void *)0x0,
    (void *)0x30000, (void *)0x8, (void *)0x3f800000, (void *)0x0,
};
void *__vt__20TObjEneMe3StelthReal[116] = {
    (void *)0x0, (void *)0x0, (void *)&__dt__20TObjEneMe3StelthRealFv, (void *)&run_task__16TObjEneMe3StelthFv,
    (void *)&render__16TObjEneMe3StelthFv, (void *)&render_actor_shadows_default, (void *)&TLobby__sub_801A1FD8, (void *)&apply_object_set_data,
    (void *)&reset_actor_action_state, (void *)&get_actor_body_center, (void *)&update_object_view_visibility, (void *)&classify_actor_view_detail,
    (void *)&get_enemy_name__14TObjEnePanarmsFv, (void *)&TObjPlayer__sub_80019568, (void *)&add_actor_exp, (void *)&consume_timer_field__10TObjPlayerFPvi,
    (void *)&get_actor_level_index, (void *)&update_actor_ground_y, (void *)&TObjPlayer__sub_80018E6C, (void *)&is_actor_cadence_frame,
    (void *)&select_melee_contact_body__10TObjPlayerFv, (void *)&calc_distance_accuracy_penalty__10TObjPlayerFv, (void *)&receive_physical_attack__10TObjPlayerFv, (void *)&handle_direct_attack__16TObjEneMe3StelthFPvPviPv,
    (void *)&receive_weapon_special_attack__10TObjPlayerFv, (void *)&apply_knockback_from_attacker, (void *)&try_start_action__10TObjPlayerFPvii, (void *)&roll_physical_accuracy__10TObjPlayerFv,
    (void *)&TObjEneMe3Stelth__sub_800F4FC8, (void *)&TObjPlayer__sub_8000FF3C, (void *)&is_target_in_attack_range__10TObjPlayerFv, (void *)&test_flag_256__10TObjPlayerFPv,
    (void *)&test_flag30_512__10TObjPlayerFPv, (void *)&has_flag_0x800__10TObjPlayerFPv, (void *)&test_flag_1000__10TObjPlayerFPv, (void *)&update_poison_status__10TObjPlayerFv,
    (void *)&update_action_hold_status__10TObjPlayerFv, (void *)&update_action_timer__10TObjPlayerFPv, (void *)&update_flag30_timer__10TObjPlayerFPv, (void *)&update_movement_status__10TObjPlayerFv,
    (void *)&update_shock_clock__10TObjPlayerFPv, (void *)&update_attack_stat_status, (void *)&update_defense_stat_status, (void *)&TObjPlayer__sub_800172CC,
    (void *)&apply_poison_status__10TObjPlayerFv, (void *)&apply_paralysis__10TObjPlayerFv, (void *)&apply_slow_status__10TObjPlayerFPv, (void *)&apply_confusion_status__10TObjPlayerFv,
    (void *)&apply_movement_ailment__10TObjPlayerFv, (void *)&apply_shock_status__10TObjPlayerFv, (void *)&clear_harmful_statuses__10TObjPlayerFv, (void *)&apply_attack_stat_status__10TObjPlayerFv,
    (void *)&apply_defense_stat_status__10TObjPlayerFlPv, (void *)&cure_poison_ailment, (void *)&cure_paralysis__10TObjPlayerFv, (void *)&clear_all_status_effects,
    (void *)&apply_action_hold_status, (void *)&apply_anti_technique__10TObjPlayerFv, (void *)&TObjPlayer__sub_80014898, (void *)&TObjPlayer__sub_80014894,
    (void *)&TObjPlayer__sub_80014890, (void *)&TObjEneMe3Stelth__sub_800F4F14, (void *)&TObjEneMe3StelthReal__vt60, (void *)&TObjEneMe3StelthReal__vt61,
    (void *)&reset_pose__10TObjPlayerFPv, (void *)&TObjPlayer__sub_80014840, (void *)&TObjPlayer__sub_80014838, (void *)&TObjPlayer__sub_80014830,
    (void *)&get_pos__10TObjPlayerFii, (void *)&apply_switch_attack__10TObjPlayerFi, (void *)&enemy_spawn_jellen_effect, (void *)&trigger_switch_attack__10TObjPlayerFi,
    (void *)&enemy_spawn_zalure_effect, (void *)&TObjPlayer__sub_80010A80, (void *)&update_and_send_enemy_hit_state, (void *)&fn_80010EC8,
    (void *)&fn_80010EC4, (void *)&fn_80010EC0, (void *)&fn_80010EBC, (void *)&TObjEneDD__vt77,
    (void *)&apply_hit_message_flags__10TObjPlayerFPvPv, (void *)&apply_set_data__9TObjEnemyFPvPv, (void *)&clear_lobby_object_state, (void *)&TObjEneEpsilon__vt81,
    (void *)&TObjEneDD__vt82, (void *)&TObjEneDD__vt83, (void *)&TObjEneDD__vt84, (void *)&dispatch_state__16TObjEneMe3StelthFPvii,
    (void *)&update_shadow_height__16TObjEneMe3StelthFPv, (void *)&update_collision__16TObjEneMe3StelthFPv, (void *)&TObjEneDD__vt87, (void *)&TObjEneDD__vt88,
    (void *)&TObjEneDD__vt89, (void *)&TObjEneDD__vt90, (void *)&TObjEneDD__vt91, (void *)&init_anim__16TObjEneMe3StelthFPv,
    (void *)&TObjEneMe3Stelth__sub_800F4914, (void *)&TObjEneDD__vt94, (void *)&TObjEneDD__vt95, (void *)&TObjEneDD__vt96,
    (void *)&TObjEneDD__vt97, (void *)&TObjEneDD__vt98, (void *)&TObjEneDD__vt99, (void *)&TObjEneDD__vt100,
    (void *)&select_and_apply_target__16TObjEneMe3StelthFPv, (void *)&attack_and_unequip__16TObjEneMe3StelthFPv, (void *)&check_target_in_range__16TObjEneMe3StelthFPv, (void *)&TObjEneMe3StelthReal__vt105,
    (void *)&TObjEneMe3Stelth__sub_800F4A8C, (void *)&check_active_flag__16TObjEneMe3StelthFPv, (void *)&check_flag__16TObjEneMe3StelthFPv, (void *)&TObjEneMe3StelthReal__vt109,
    (void *)&TObjEneMe3Stelth__sub_800F4910, (void *)&TObjEneMe3Stelth__sub_800F4424, (void *)&setup_move__16TObjEneMe3StelthFPv, (void *)&draw_with_debug_info__16TObjEneMe3StelthFPv,
};
#define TObjEneMe3Stelth__collision_body_template ((u8 *)TObjEneMe3Stelth__collision_body_template)

void dispatch_state__16TObjEneMe3StelthFPvii(Obj_800F4598 *self, s32 arg1, s32 arg2) {
    switch (arg1) {
    case 0:
        self->v111(arg2);
        break;
    case 1:
        TObjEneMe3Stelth__sub_800F42B8(self, arg2);
        break;
    case 3:
        TObjEneMe3Stelth__sub_800F3FE4(self, arg2);
        break;
    case 2:
        state_chase__16TObjEneMe3StelthFPvi(self, arg2);
        break;
    case 4:
        update_state_fade_in__16TObjEneMe3StelthFPvi(self, arg2);
        break;
    case 5:
        update_state_drop__16TObjEneMe3StelthFPvi(self, arg2);
        break;
    case 6:
        state_chase_target__16TObjEneMe3StelthFPvi(self, arg2);
        break;
    case 7:
        TObjEneMe3Stelth__sub_800F348C(self, arg2);
        break;
    case 8:
        TObjEneMe3Stelth__sub_800F3214(self, arg2);
        break;
    case 9:
        run_walk_state__16TObjEneMe3StelthFPvi(self, arg2);
        break;
    case 13:
        handle_message__16TObjEneMe3StelthFPvi(self, arg2);
        break;
    case 10:
        action__16TObjEneMe3StelthFPvi(self, arg2);
        break;
    case 11:
        update_state_resta_cast__16TObjEneMe3StelthFPvi(self, arg2);
        break;
    case 14:
        TObjEneMe3Stelth__sub_800F290C(self, arg2);
        break;
    case 15:
        handle_breakup_state__16TObjEneMe3StelthFPvi(self, arg2);
        break;
    case 12:
        TObjEneMe3Stelth__sub_800F2270(self, arg2);
        break;
    case 16:
        TObjEneMe3Stelth__sub_800F1098(self, arg2);
        break;
    case 17:
        exec__16TObjEneMe3StelthFPvi(self, arg2);
        break;
    case 18:
        TObjEneMe3Stelth__sub_800F1440(self, arg2);
        break;
    }
    if (self->f3C0 != 1 || (arg1 != 1 && arg1 != 2)) {
        self->v98();
    }
}

void create_resta_effect__16TObjEneMe3StelthFPv(Obj_800F4700 *self) {
    s32 f = clamp_frame_index__9TObjEneDDFl(TObjEneMe3Stelth__behavior_params_by_variant[self->kind]->frame);
    create__9TTecRestaFPvPvPv(self, self->pos, f);
}

void TObjEneMe3Stelth__sub_800F4758(u8 *arg0) {
    if (((s32 (*)(void *))TObjEneMe3Stelth__sub_800F47D4)((void *) (arg0)) != 0) {
        *(s32 **)((s8 *)arg0 + 0x24) = &TObjEneMe3Stelth__alternate_texture_list.value;
        initialize_enemy_state__9TObjEneDDFv((void *) (arg0), (int) (0x3F));
        *(s32 *)((s8 *)arg0 + 0x3C8) = 1;
        return;
    }
    *(s32 **)((s8 *)arg0 + 0x24) = (s32 *) *(s32 **)((s8 *)(*(u8 **)((s8 *)TObjEneMe3Stelth__bml_resource + 0x42C)) + 0xC);
    initialize_enemy_state__9TObjEneDDFv((void *) (arg0), (int) (0x3E));
    *(s32 *)((s8 *)arg0 + 0x3C8) = 0;
}

u8 TObjEneMe3Stelth__sub_800F47D4(u8 *arg0) {
    return (u8) (*(s32 *)((s8 *)arg0 + 0x3F0) >= 1);
}

int select_and_apply_target__16TObjEneMe3StelthFPv(void* p) { return select_and_apply_target__14TObjEneEpsilonFf(p); }

s32 is_angle_in_range__16TObjEneMe3StelthFPv(O_800F4814 *self) {
    return self->f354 < TObjEneMe3Stelth__data_805DA80C ||
           (self->f354 >= TObjEneMe3Stelth__data_805DA850 && self->f354 < TObjEneMe3Stelth__data_805DA84C);
}

s32 TObjEneMe3Stelth__sub_800F4850(u8 *arg0) {
    return *(f32 *)((s8 *)arg0 + 0x354) < TObjEneMe3Stelth__data_805DA850;
}

void update_collision__16TObjEneMe3StelthFPv(void *arg0) {
    struct VObj_800F4868 *o = (struct VObj_800F4868 *)arg0;
    o->m86();
    check_object_collisions__10TObjPlayerFv(arg0);
    check_enemy_body_collisions(arg0);
    update_enemy_collision_flags__10TObjPlayerFv(arg0);
}

void update_distance_state__16TObjEneMe3StelthFPv(void *arg0) {
    VObj_800F48B8 *o = (VObj_800F48B8 *)arg0;
    if ((*(f32 *)((s8 *)arg0 + 0x3D0) - *(f32 *)((s8 *)arg0 + 0x3C)) > lbl_805DA894) {
        o->m95();
        return;
    }
    o->m96();
}

void TObjEneMe3Stelth__sub_800F4910(void) {  }

void TObjEneMe3Stelth__sub_800F4914(void* p) { TObjEneDD__vt93(p); TObjEneMe3Stelth__sub_800F5864(p, (void*)38); }

void init_anim__16TObjEneMe3StelthFPv(void* p) { TObjEneDD__vt92(p); TObjEneMe3Stelth__sub_800F5874(p, (void*)38); }

void TObjEneMe3Stelth__vt109(void) {  }

s32 check_flag__16TObjEneMe3StelthFPv(u8 *arg0) {
    if (*(s32 *)((s8 *)arg0 + 0x3CC) & 4) {
        ((E4988Obj*)(arg0 + 0x404))->m7();
        return 1;
    }
    return 0;
}

s32 check_active_flag__16TObjEneMe3StelthFPv(u8 *arg0) {
    if (*(s32 *)((s8 *)arg0 + 0x3CC) & 4) {
        ((E49D0Obj*)(arg0 + 0x404))->m6();
        return 1;
    }
    return 0;
}

void TObjEneMe3Stelth__vt105(void) {  }

u8 check_target_in_range__16TObjEneMe3StelthFPv(void *arg0) {
    f32 temp_f1;
    s32 var_r31;

    var_r31 = 0;
    if (!(*(s32 *)((s8 *)arg0 + 0x3CC) & 0x10000)) {
        temp_f1 = *(f32 *)((s8 *)arg0 + 0x3AC);
        if ((temp_f1 > lbl_805DA898) && (temp_f1 < lbl_805DA89C) && (((s32 (*)(void *, s32, f32))test_body_collision__16TObjEneMe3StelthFPvif)(arg0, *(s32 *)((s8 *)arg0 + 0x60), temp_f1 - (*(f32 *)&TObjEneMe3Stelth__data_805DA844)) == 0)) {
            var_r31 = 1;
        }
    }
    return (u8)var_r31;
}

void TObjEneMe3Stelth__sub_800F4A8C(void) {  }

void attack_and_unequip__16TObjEneMe3StelthFPv(Stelth_800F4A90 *self) {
    s32 near = objInBand__FP7GameObjf(self, lbl_805DA810);
    if (objInBand__FP7GameObjf(self, TObjEneMe3Stelth__data_805DA808) == 0 && near == 0) {
        return;
    }
    if (enemy_check_target_valid(self) != 0 && self->target->m18(self, TObjEneMe3Stelth__data_805DA80C) != 0) {
        f32 d = self->target->m20(self, TObjEneMe3Stelth__data_805DA80C);
        self->target->m23(self, TObjEneMe3Stelth__data_805DA84C);
        if (d > TObjEneMe3Stelth__data_805DA840) {
            if (((s32 (*)(void *))TObjEneMe3Stelth__sub_800F47D4)(self) != 0) {
                VObj_800F4A90 *t = self->target;
                if (is_locally_controlled__10TObjPlayerFPv(t) != 0 && get_item_field_6__10TObjPlayerFPv(t) != 0) {
                    send_6x26_unequip_item__10TObjPlayerFPvPv(t, get_field_d8__10TObjPlayerFv());
                    get_hand_joint_position__10TObjPlayerFPvi(t, self->f3F8);
                    spawn_particle_effect(self->f3F8, 0x1D0);
                }
            } else if (near != 0 && calc_boss4_scale__10TObjPlayerFi(self) <= lbl_805DA8A0) {
                TObjEneDD__sub_800BA438(self, self->target);
            }
        }
    }
    play_sound_effect(0x3AA37, self->pos, 0, 0);
}

#pragma push
#pragma fp_contract on
bool TObjEneMe3Stelth__sub_800F4C10(u8 *arg0) {
    f32 temp_f31;
    f32 temp_f31_2;
    if (fabs_float(*(f32 *)((s8 *)(*(u8 **)((s8 *)arg0 + 0x390)) + 0x3C) - *(f32 *)((s8 *)arg0 + 0x3C)) >= TObjEneMe3Stelth__data_805DA844) {
        return 0;
    }
    if (*(f32 *)((s8 *)arg0 + 0x3AC) > 25.0f) {
        return 0;
    }
    temp_f31_2 = *(f32 *)((s8 *)arg0 + 0x3A8) * cos_table_lookup(*(s32 *)((s8 *)arg0 + 0x60));
    temp_f31 = (*(f32 *)((s8 *)arg0 + 0x3A0) * sin_table_lookup(*(s32 *)((s8 *)arg0 + 0x60))) + temp_f31_2;
    return (temp_f31 < cos_table_lookup(0x1E00)) == 0;
}
extern int fold_flush_0;
#pragma pop

u8 test_body_collision__16TObjEneMe3StelthFPvif(Obj_800F4CC8 *arg0, s32 arg1, f32 farg0) {
    f32 f2 = farg0 * lbl_805DA81C;
    Sub_800F4CC8 *s = arg0->fA4;
    u8 res;
    s32 a = arg0->f60;
    s32 b = s->f18;
    s->f0 = TObjEneMe3Stelth__data_805DA840;
    s->f8 = f2;
    s->fC = f2;
    s->f10 = lbl_805DA8A4;
    s->f14 = 1;
    s->f18 = 0x9D01;
    arg0->f60 = arg1;
    ((void (*)(void *, s32, f32, f32))check_enemy_body_collisions)(arg0, arg1, TObjEneMe3Stelth__data_805DA840, f2);
    res = (s->f18 & 0x380000) != 0;
    fn_8002B630(s, TObjEneMe3Stelth__collision_body_template, s->f18 & 0x380000);
    s->f18 = b;
    arg0->f60 = a;
    return res;
}

f32 get_node_world_y__16TObjEneMe3StelthFPv(Obj_800F4D68 *self) {
    Vec_800F4D68 v;
    Node_800F4D68 *node;
    v.x = TObjEneMe3Stelth__data_805DA840;
    v.y = TObjEneMe3Stelth__data_805DA840;
    v.z = TObjEneMe3Stelth__data_805DA840;
    push_matrix_from(identity_matrix);
    bind_motion_context(self->ff8, self->fc0);
    node = self->node;
    compose_motion_node_matrix(node);
    compose_motion_node_matrix(node->child);
    matrix_mult_vec(0, &v, &v);
    pop_matrix();
    return v.y;
}

void setup_move_bounds__16TObjEneMe3StelthFPv(void *arg0) {
    if (((s32 (*)(void))TObjEneMe3Stelth__sub_800F4850)() != 0) {
        *(s32 *)((s8 *)arg0 + 0x3C0) = 1;
    } else {
        *(s32 *)((s8 *)arg0 + 0x3C0) = 0;
    }
    *(s32 *)((s8 *)arg0 + 0x3C4) = ((s32 (*)(void *))is_angle_in_range__16TObjEneMe3StelthFPv)(arg0);
    if ((s32) *(s32 *)((s8 *)arg0 + 0x3C4) == 1) {
        *(s16 *)((s8 *)arg0 + 0xB8) = 2;
    } else {
        *(s16 *)((s8 *)arg0 + 0xB8) = 0;
    }
    *(f32 *)((s8 *)arg0 + 0x3D8) = (f32) (lbl_805DA8A8 + *(f32 *)((s8 *)arg0 + 0x35C));
    *(f32 *)((s8 *)arg0 + 0x3DC) = (f32) (lbl_805DA87C + *(f32 *)((s8 *)arg0 + 0x358));
    *(f32 *)((s8 *)arg0 + 0x3E0) = (f32) (lbl_805DA8AC + *(f32 *)((s8 *)arg0 + 0x364));
    *(f32 *)((s8 *)arg0 + 0x3E4) = (f32) (lbl_805DA81C + *(f32 *)((s8 *)arg0 + 0x360));
    *(s32 *)((s8 *)arg0 + 0x3F0) = (s32) *(s32 *)((s8 *)arg0 + 0x368);
}

void update_shadow_height__16TObjEneMe3StelthFPv(void *arg0) {
    *(f32 *)((s8 *)(*(void **)((s8 *)arg0 + 0xA4)) + 4) = (f32) (*(f32 *)((s8 *)arg0 + 0x300) - *(f32 *)((s8 *)arg0 + 0x3C));
}

void copy_pos_with_height_offset__16TObjEneMe3StelthFPv(u8 *arg0) {
    VecCopy__FP3VecPC3Vec(arg0 + 0x2FC, arg0 + 0x38);
    *(f32 *)((s8 *)arg0 + 0x300) = (f32) (*(f32 *)((s8 *)arg0 + 0x300) + (lbl_805DA814 + *(f32 *)((s8 *)arg0 + 0x3D4)));
    VecCopy__FP3VecPC3Vec(arg0 + 0x74, arg0 + 0x2FC);
}

void TObjEneMe3Stelth__sub_800F4F14(void) {  }

void TObjEneMe3Stelth__vt60(u8 *arg0) {
    if (*(s32 *)((s8 *)arg0 + 0x3CC) & 1) {
        clear_attack_receipts(arg0);
        if (((s32) *(s32 *)((s8 *)arg0 + 0x3C0) == 1) && (((f32 (*)(s32))calc_boss4_scale__10TObjPlayerFi)((s32) arg0) <= *(f32 *)((s8 *)arg0 + 0x3E0))) {
            transition_enemy_state((void*)(arg0), (void*)(0x12));
        }
    } else if ((s16) *(s16 *)((s8 *)arg0 + 0x326) != 0xE) {
        transition_enemy_state((void*)(arg0), (void*)(0xE));
    }
}

void TObjEneMe3Stelth__vt61(void* p) { if (*(short*)((char*)p + 0x326) != 15) { transition_enemy_state(p, (void*)15); } }

void TObjEneMe3Stelth__sub_800F4FC8(void) {  }

void TObjEneMe3Stelth::run_task() {
    u8 *arg0 = (u8 *)this;
    s32 temp_r3;
    if (check_demo_mode__10TObjPlayerFv() != 0) {
        ((VObj_18 *)(arg0))->m112();
        return;
    }
    if (((VObj_18 *)(arg0))->m81() != 4) {
        ((VObj_18 *)(arg0))->m83();
    }
    ((s32 (*)(void *))copy_pos_with_height_offset__16TObjEneMe3StelthFPv)((void *) (arg0));
    ((VObj_18 *)(arg0))->m86();
    temp_r3 = *(s32 *)((s8 *)arg0 + 0x3CC);
    if (temp_r3 & 0x40000) {
        *(s32 *)((s8 *)arg0 + 0x3CC) = (s32) (temp_r3 & 0xFFFBFFFF);
        return;
    }
    set_player_state_default__12TBoss8DragonFv((void *) (arg0));
}

void *__dt__16TObjEneMe3StelthFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__16TObjEneMe3Stelth;
        if (*(void **)((s8 *)arg0 + 0x444) != NULL) { queue_destruction__7TObjectFv(*(void **)((s8 *)arg0 + 0x444)); *(s32 *)((s8 *)arg0 + 0x444) = 0; }
        if (*(void **)((s8 *)arg0 + 0x448) != NULL) { queue_destruction__7TObjectFv(*(void **)((s8 *)arg0 + 0x448)); *(s32 *)((s8 *)arg0 + 0x448) = 0; }
        free_collision_body_parts(arg0);
        __dt__18TObjEneMe3SinowZoaFPvs((s8 *)arg0 + 0x404, -1);
        __dt__9TObjEneDDFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

#pragma push
#pragma opt_propagation off
void init_common__16TObjEneMe3StelthFPv(u8 *arg0) {
    f32 temp_f1;
    s32 temp_r0;
    u8 *temp_r6;

    init_position_vectors__9TObjEneDDFPv((void *) (arg0));
    ((s32 (*)(void *))TObjEneMe3Stelth__sub_800F4758)((void *) (arg0));
    temp_r6 = (u8 *)(*(u8 **)((s8 *)TObjEneMe3Stelth__bml_resource + 0x42C));
    *(s32 *)((s8 *)arg0 + 0x34) = (s32) *(s32 *)((s8 *)temp_r6 + 8);
    init_model__9TObjEneDDFv((void *) (arg0), ((void * *)TObjEneMe3Stelth__collision_body_template), (int) (1), (int) (temp_r6));
    *(s32 *)((s8 *)arg0 + 0xB0) = 0;
    set_field_d8__10TObjPlayerFl((void *) (arg0), TObjEneMe3Stelth__animation_descriptors);
    set_field_dc__10TObjPlayerFl((void *) (arg0), (int) (*(s32 *)((s8 *)TObjEneMe3Stelth__bml_resource + 0x430)));
    set_animation__10TObjPlayerFPvs((void *) (arg0), (int) (*(s16 *)((s8 *)arg0 + 0xB8)));
    temp_r0 = *(s32 *)((s8 *)arg0 + 0x3C8);
    reset_hp__9TObjEneDDFv((void *) (arg0), TObjEneMe3Stelth__base_params_by_variant[temp_r0], TObjEneMe3Stelth__attack_params_by_variant[temp_r0], TObjEneMe3Stelth__resistance_params_by_variant[temp_r0]);
    check_state_flag_4__9TObjEneDDFv((void *) (arg0));
    *(void **)((s8 *)arg0 + 0x350) = TObjEneMe3Stelth__shared_params;
    *(f32 *)((s8 *)arg0 + 0x37C) = (f32) TObjEneMe3Stelth__data_805DA824;
    enemy_init_acquire_period((void *) (arg0), (int) (0x1E));
    enemy_init_validate_period((void *) (arg0), (int) (0x1E));
    *(s32 *)((s8 *)arg0 + 0x3CC) = 0;
    temp_f1 = *(f32 *)((s8 *)arg0 + 0x3C);
    *(f32 *)((s8 *)arg0 + 0x3D0) = temp_f1;
    *(f32 *)((s8 *)arg0 + 0x3D4) = (f32) TObjEneMe3Stelth__data_805DA840;
    *(s32 *)((s8 *)arg0 + 0x3E8) = 0;
    *(s32 *)((s8 *)arg0 + 0x3EC) = 0;
    *(s16 *)((s8 *)arg0 + 0x3F4) = (s16) *(s16 *)((s8 *)arg0 + 0x2CC);
    ((VObj_14_2ab9de *)((u8 *)(arg0) + (1028)))->m3(temp_f1);
    *(s32 *)((s8 *)arg0 + 0x424) = 0;
    *(s32 *)((s8 *)arg0 + 0x428) = 0;
    *(s32 *)((s8 *)arg0 + 0x42C) = 0;
    *(f32 *)((s8 *)arg0 + 0x430) = (f32) TObjEneMe3Stelth__data_805DA840;
    *(f32 *)((s8 *)arg0 + 0x434) = (f32) TObjEneMe3Stelth__data_805DA840;
    *(f32 *)((s8 *)arg0 + 0x438) = (f32) TObjEneMe3Stelth__data_805DA840;
    *(f32 *)((s8 *)arg0 + 0x43C) = (f32) TObjEneMe3Stelth__data_805DA840;
    *(f32 *)((s8 *)arg0 + 0x440) = (f32) TObjEneMe3Stelth__data_805DA840;
    *(s32 *)((s8 *)arg0 + 0x444) = 0;
    *(s32 *)((s8 *)arg0 + 0x448) = 0;
    *(s32 *)((s8 *)arg0 + 0x420) = 0;
    if ((s32) *(s32 *)((s8 *)arg0 + 0x3C0) == 1) {
        set_indexed_flags((void *) (arg0), (int) (0), (int) (0x08000000));
        return;
    }
    clear_player_status_flag__10TObjPlayerFlUl((void *) (arg0), (int) (0), (int) (0x08000000));
}
extern int fold_flush_1;
#pragma pop

}
#undef VBase_18
#undef VObj_18
#undef VecCopy__FP3VecPC3Vec
#undef queue_destruction__7TObjectFv
#undef clear_attack_receipts
#undef transition_enemy_state
#undef exec__16TObjEneMe3StelthFPvi
#undef TObjEneMe3Stelth__sub_800F2270
#undef handle_breakup_state__16TObjEneMe3StelthFPvi
#undef TObjEneMe3Stelth__sub_800F290C
#undef action__16TObjEneMe3StelthFPvi
#undef update_state_resta_cast__16TObjEneMe3StelthFPvi
#undef run_walk_state__16TObjEneMe3StelthFPvi
#undef TObjEneMe3Stelth__sub_800F3214
#undef TObjEneMe3Stelth__sub_800F348C
#undef state_chase_target__16TObjEneMe3StelthFPvi
#undef update_state_drop__16TObjEneMe3StelthFPvi
#undef update_state_fade_in__16TObjEneMe3StelthFPvi
#undef TObjEneMe3Stelth__sub_800F3FE4
#undef state_chase__16TObjEneMe3StelthFPvi
#undef TObjEneMe3Stelth__sub_800F42B8
#undef set_indexed_flags
#undef play_sound_effect
#undef sin_table_lookup
#undef cos_table_lookup
#undef TObjEneMe3Stelth__behavior_params_by_variant
#undef lbl_805010E0
#undef TObjEneMe3Stelth__alternate_texture_list
#undef TObjEneMe3Stelth__sub_800F5864
#undef TObjEneMe3Stelth__sub_800F5874
#include "types.h"

extern "C" {

void *TObjEneMe3Stelth__ct(void *arg0);
void init_object__9TObjEneDDFv(void *);
void init_common__18TObjEneMe3SinowZoaFv(void *);

extern s32 __vt__16TObjEneMe3Stelth[];
extern void *lbl_805D2AF8;

void *TObjEneMe3Stelth__ct(void *arg0) {
    init_object__9TObjEneDDFv(arg0);
    *(s32 **)((s8 *)arg0 + 0x18) = __vt__16TObjEneMe3Stelth;
    init_common__18TObjEneMe3SinowZoaFv((void *)((char *)arg0 + 1028));
    *(void **)((s8 *)arg0 + 0x0) = lbl_805D2AF8;
    return arg0;
}

}

#include "types.h"

struct RecoveredGlobal_8031B170_lbl_804E8880
{
  s32 value;
  u8 remaining[0xCC];
};

struct VB_800F5324 { u8 pad[0xC]; };

struct VO_800F5324 : VB_800F5324 { virtual ~VO_800F5324(); };

extern "C" {
#define TObjEneMe3Stelth__animation_descriptors (*(RecoveredGlobal_8031B170_lbl_804E8880 *)&TObjEneMe3Stelth__animation_descriptors)
extern const f32 lbl_805DA8AC;
void set_slot_min_clamped_value__16TObjEneMe3StelthFif(s32 arg0, f32 farg0);
s32 TLobby__sub_8001FE7C(void *, s32);
s32 __dt__11TBoss4Type3FPvs(void *, s32);
s32 mem_free(void *);
#define TObjEneMe3Stelth__alternate_texture_list ((void * *)&TObjEneMe3Stelth__alternate_texture_list)
#define TObjEneMe3Stelth__bml_resource (*(void * *)&TObjEneMe3Stelth__bml_resource)
#define TObjEneMe3Stelth__breakup_model (*(VO_800F5324 * *)&TObjEneMe3Stelth__breakup_model)
#define TObjEneMe3Stelth__trail_buffer (*(void * *)&TObjEneMe3Stelth__trail_buffer)
void free_shared_resources__16TObjEneMe3StelthFv(void);
}

extern "C" {

typedef struct RecoveredGlobal_8031B170_lbl_804E8880 RecoveredGlobal_8031B170_lbl_804E8880;
typedef char RecoveredGlobal_8031B170_lbl_804E8880_size[((sizeof(RecoveredGlobal_8031B170_lbl_804E8880)) == 0xD0) ? (1) : (-1)];
void set_slot_min_clamped_value__16TObjEneMe3StelthFif(s32 arg0, f32 farg0) {
  u8 *new_var;
  f32 var_f1;
  var_f1 = farg0;
  if (var_f1 < lbl_805DA8AC)
  {
    var_f1 = lbl_805DA8AC;
  }
  new_var = (u8 *) (&TObjEneMe3Stelth__animation_descriptors.value);
  new_var = new_var + (arg0 * 0x10);
  *((f32 *) (((s8 *) new_var) + 8)) = var_f1;
}
void free_shared_resources__16TObjEneMe3StelthFv(void) {
    if (TObjEneMe3Stelth__trail_buffer != 0) {
        __dt__11TBoss4Type3FPvs(TObjEneMe3Stelth__trail_buffer, 1);
        TObjEneMe3Stelth__trail_buffer = 0;
    }
    if (TObjEneMe3Stelth__breakup_model != 0) {
        delete TObjEneMe3Stelth__breakup_model;
        TObjEneMe3Stelth__breakup_model = 0;
    }
    if (TObjEneMe3Stelth__alternate_texture_list[0] != 0) {
        mem_free(TObjEneMe3Stelth__alternate_texture_list[0]);
        TObjEneMe3Stelth__alternate_texture_list[0] = 0;
    }
    if (TObjEneMe3Stelth__bml_resource != 0) {
        TLobby__sub_8001FE7C(TObjEneMe3Stelth__bml_resource, 1);
        TObjEneMe3Stelth__bml_resource = 0;
    }
}

}
#undef TObjEneMe3Stelth__animation_descriptors
#undef TObjEneMe3Stelth__alternate_texture_list
#undef TObjEneMe3Stelth__bml_resource
#undef TObjEneMe3Stelth__breakup_model
#undef TObjEneMe3Stelth__trail_buffer
#include "types.h"

extern "C" {

int create_real__16TObjEneMe3StelthFPv(void* p);
int create__20TObjEneMe3StelthRealFPv(void*);

int create_real__16TObjEneMe3StelthFPv(void* p) { return create__20TObjEneMe3StelthRealFPv(p); }

}
#include "types.h"

extern "C" {

struct IV_800F53E8 { s32 x, y, z; };
struct Arr_800F53E8 { IV_800F53E8 *p; u32 n; };
struct Ent_800F53E8 { s32 f0; u8 *f4; };
struct Ent_800F53E8;
struct Res_800F53E8 { u8 pad[0x42C]; u8 *f42C; struct Ent_800F53E8 *f430; };
struct Tbl_800F53E8 { u8 pad[0x54]; s32 f54; u8 pad58[0xC]; s32 f64; };
struct Atk_800F53E8 { s32 w[4]; };
struct V3_800F53E8 { f32 x, y, z; };

s32 is_split_screen();
Res_800F53E8 *load_enemy_bml_resource(void *);
s32 dispatch_shared_handler_a__6TLobbyFl(s32);
s32 register_object__6TLobbyFl(s32);
s32 dispatch_shared_handler_b__6TLobbyFl(s32);
s32 register_boss__6TLobbyFl(s32);
void *alloc__23TAdSinglePlyChrSelectGCFv(int);
void *setup_pieces__11TBreakUpMdlFPviif(void *, s32, s32, f32);
void *init__11TBreakUpMdlFPviif(void *, s32, s32, f32);
void TObjEneMe3ShinowaMirage__sub_800D98D8(u8 *arg0, s32 arg1, s32 arg2, s32 arg3, u8 *arg4, u8 *arg5);
void *init_trail_buffer__11TBoss4Type3FPvifff(void *arg0, s32 segs, f32 start, f32 end, f32 step);
void copy_vec3__10TObjPlayerFPv(void *p, void *q);
void set_slot_min_clamped_value__16TObjEneMe3StelthFif(s32 arg0, f32 farg0);
s32 collect_and_count__12TBoss3VoloptFUll(u32 arg0, s32 arg1);
void *mem_alloc(s32);
void spawn_attack__16TObjEneMe3StelthFslllff(s16 arg0, s32 arg1, s32 arg2, s32 arg3, f32 farg0, f32 farg1);
extern s32 lbl_8043D47C[];
extern s32 lbl_8043D484[];
extern s32 lbl_8043D48C[];
extern s32 lbl_8043D494[];
extern Atk_800F53E8 stelth_attack_binding_desc_a;
extern Atk_800F53E8 stelth_attack_binding_desc_b;
extern u8 *TObjEneMe3Stelth__bml_resource;
extern s32 TObjEneMe3Stelth__render_node_index;
extern s32 TObjEneMe3Stelth__breakup_model;
extern s32 TObjEneMe3Stelth__trail_buffer;
extern const f32 TObjEneMe3Stelth__data_805DA840;
extern const f32 lbl_805DA8A4;
extern const f32 lbl_805DA8B0;
extern const f32 lbl_805DA8B4;
extern const f32 lbl_805DA8B8;
extern const f32 lbl_805DA8BC;
extern "C" u8 lbl_8043D49C[];
extern "C" u8 lbl_8043D4AC[];
extern "C" u8 lbl_8043D4C4[];
extern "C" u8 lbl_8043D4D8[];
extern "C" u8 lbl_8043D4F4[];
extern "C" u8 lbl_8043D50C[];
extern "C" u8 lbl_8043D524[];
extern "C" u8 lbl_8043D538[];
extern "C" u8 lbl_8043D550[];
extern "C" u8 lbl_8043D564[];
extern "C" u8 lbl_8043D580[];
extern "C" u8 lbl_8043D594[];
extern "C" u8 lbl_8043D5A8[];
extern "C" u8 lbl_8043D5C8[];
extern "C" u8 lbl_8043D5D8[];
void load_shared_resources__16TObjEneMe3StelthFv(void) {
    s32 i;
    Arr_800F53E8 *src;
    s32 n;
    u8 *d;
    u32 m;
    s32 *q;
    u8 *ent;
    void *p;

    lbl_805010E0[0] = TObjEneMe3Stelth__data_805DA840;
    lbl_805010E0[1] = TObjEneMe3Stelth__data_805DA840;
    lbl_805010E0[2] = TObjEneMe3Stelth__data_805DA840;
    if (is_split_screen() != 0) {
        TObjEneMe3Stelth__bml_resource = (u8 *)load_enemy_bml_resource(me3_stelth_bml_resource_desc);
    } else {
        TObjEneMe3Stelth__bml_resource = (u8 *)load_enemy_bml_resource(stelth_bml_resource_desc);
    }
    src = *(Arr_800F53E8 **)(((Res_800F53E8 *)TObjEneMe3Stelth__bml_resource)->f42C + 0xC);
    n = src->n;
    TObjEneMe3Stelth__alternate_texture_list[1] = n;
    TObjEneMe3Stelth__alternate_texture_list[0] = (s32)mem_alloc(n * 0xC);
    for (i = 0; i < n; i++) {
        copy_vec3__10TObjPlayerFPv(&((IV_800F53E8 *)TObjEneMe3Stelth__alternate_texture_list[0])[i], &src->p[i]);
    }
    for (i = 0; i < 3; i++) {
        ((IV_800F53E8 *)TObjEneMe3Stelth__alternate_texture_list[0])[i].z = ((IV_800F53E8 *)TObjEneMe3Stelth__alternate_texture_list[0])[i + 3].z;
    }
    for (i = 0; i < 2; i++) {
        TObjEneMe3Stelth__base_params_by_variant[i] = register_boss__6TLobbyFl(lbl_8043D47C[i]);
    }
    for (i = 0; i < 2; i++) {
        TObjEneMe3Stelth__attack_params_by_variant[i] = dispatch_shared_handler_b__6TLobbyFl(lbl_8043D484[i]);
    }
    for (i = 0; i < 2; i++) {
        TObjEneMe3Stelth__resistance_params_by_variant[i] = register_object__6TLobbyFl(lbl_8043D48C[i]);
    }
    for (i = 0; i < 2; i++) {
        TObjEneMe3Stelth__behavior_params_by_variant[i] = (u8 *)dispatch_shared_handler_a__6TLobbyFl(lbl_8043D494[i]);
    }
    d = TObjEneMe3Stelth__behavior_params_by_variant[0];
    set_slot_min_clamped_value__16TObjEneMe3StelthFif(7, *(f32 *)(d + 0xC));
    set_slot_min_clamped_value__16TObjEneMe3StelthFif(4, *(f32 *)(d + 0x10));
    TObjEneMe3Stelth__render_node_index = 0;
    lbl_80501114[0] = TObjEneMe3Stelth__data_805DA840;
    lbl_80501114[1] = TObjEneMe3Stelth__data_805DA840;
    lbl_80501114[2] = TObjEneMe3Stelth__data_805DA840;
    m = *(u32 *)(((Res_800F53E8 *)TObjEneMe3Stelth__bml_resource)->f42C + 8);
    q = *(s32 **)(collect_and_count__12TBoss3VoloptFUll(m, 9) + 4);
    if (q != NULL) {
        TObjEneMe3Stelth__material_color_pointers[0] = q[1] + 4;
    } else {
        TObjEneMe3Stelth__material_color_pointers[0] = 0;
    }
    q = *(s32 **)(collect_and_count__12TBoss3VoloptFUll(m, 0xD) + 4);
    if (q != NULL) {
        TObjEneMe3Stelth__material_color_pointers[1] = q[1] + 4;
    } else {
        TObjEneMe3Stelth__material_color_pointers[1] = 0;
    }
    q = *(s32 **)(collect_and_count__12TBoss3VoloptFUll(m, 0x26) + 4);
    if (q != NULL) {
        TObjEneMe3Stelth__material_color_pointers[2] = q[1] + 4;
    } else {
        TObjEneMe3Stelth__material_color_pointers[2] = 0;
    }
    ent = (((Res_800F53E8 *)TObjEneMe3Stelth__bml_resource)->f430 + ((Tbl_800F53E8 *)TObjEneMe3Stelth__animation_descriptors)->f54)->f4;
    if (is_split_screen() != 0) {
        p = alloc__23TAdSinglePlyChrSelectGCFv(0x10);
        if (p != NULL) {
            p = init__11TBreakUpMdlFPviif(p, *(s32 *)(((Res_800F53E8 *)TObjEneMe3Stelth__bml_resource)->f42C + 8), (s32)ent, (f32)(*(u32 *)(ent + 4) - 1));
        }
        TObjEneMe3Stelth__breakup_model = (s32)p;
    } else {
        p = alloc__23TAdSinglePlyChrSelectGCFv(0x10);
        if (p != NULL) {
            p = setup_pieces__11TBreakUpMdlFPviif(p, *(s32 *)(((Res_800F53E8 *)TObjEneMe3Stelth__bml_resource)->f42C + 8), (s32)ent, (f32)(*(u32 *)(ent + 4) - 1));
        }
        TObjEneMe3Stelth__breakup_model = (s32)p;
    }
    {
        V3_800F53E8 va;
        V3_800F53E8 vb;
        s32 mdl;
        u8 *ent2;
        Res_800F53E8 *r = (Res_800F53E8 *)TObjEneMe3Stelth__bml_resource;
        s32 idx = ((Tbl_800F53E8 *)TObjEneMe3Stelth__animation_descriptors)->f64;
        mdl = *(s32 *)(r->f42C + 8);
        va.x = TObjEneMe3Stelth__data_805DA840;
        va.y = TObjEneMe3Stelth__data_805DA840;
        va.z = TObjEneMe3Stelth__data_805DA840;
        vb.x = lbl_805DA8B0;
        vb.y = TObjEneMe3Stelth__data_805DA840;
        vb.z = TObjEneMe3Stelth__data_805DA840;
        ent2 = (r->f430 + idx)->f4;
        p = alloc__23TAdSinglePlyChrSelectGCFv(0x18);
        if (p != NULL) {
            p = init_trail_buffer__11TBoss4Type3FPvifff(p, 2, lbl_805DA8B4, lbl_805DA8B8, lbl_805DA8BC);
        }
        TObjEneMe3Stelth__trail_buffer = (s32)p;
        TObjEneMe3ShinowaMirage__sub_800D98D8((u8 *)p, mdl, (s32)ent2, 0x22, (u8 *)&va, (u8 *)&vb);
    }
    {
        Atk_800F53E8 a = stelth_attack_binding_desc_a;
        a.w[0] = (s32)((Res_800F53E8 *)TObjEneMe3Stelth__bml_resource)->f430;
        Atk_800F53E8 b = stelth_attack_binding_desc_b;
        b.w[0] = (s32)((Res_800F53E8 *)TObjEneMe3Stelth__bml_resource)->f430;
        spawn_attack__16TObjEneMe3StelthFslllff(0x2B, *(s32 *)(((Res_800F53E8 *)TObjEneMe3Stelth__bml_resource)->f42C + 8), *(s32 *)(((Res_800F53E8 *)TObjEneMe3Stelth__bml_resource)->f42C + 0xC), (s32)&a, lbl_805DA8A4, TObjEneMe3Stelth__data_805DA840);
        spawn_attack__16TObjEneMe3StelthFslllff(0x2D, *(s32 *)(((Res_800F53E8 *)TObjEneMe3Stelth__bml_resource)->f42C + 8), *(s32 *)(((Res_800F53E8 *)TObjEneMe3Stelth__bml_resource)->f42C + 0xC), (s32)&b, lbl_805DA8A4, TObjEneMe3Stelth__data_805DA840);
    }
}

}
#include "types.h"

extern "C" {

void TObjEneMe3Stelth__sub_800F5864(u8 *arg0, s32 arg1);
void TObjEneMe3Stelth__sub_800F5874(u8 *arg0, s32 arg1);
int draw_model__16TObjEneMe3StelthFPv(void* p);
#define draw_model__12TObjNpcEnemyFv ((int (*)(void*))draw_model__12TObjNpcEnemyFv)

void TObjEneMe3Stelth__sub_800F5864(u8 *arg0, s32 arg1) {
    *(s16 *)((s8 *)arg0 + 0x11C) = (s16) (*(s16 *)((s8 *)arg0 + 0x11C) & ~arg1);
}

void TObjEneMe3Stelth__sub_800F5874(u8 *arg0, s32 arg1) {
    *(s16 *)((s8 *)arg0 + 0x11C) = (s16) (*(s16 *)((s8 *)arg0 + 0x11C) | arg1);
}

int draw_model__16TObjEneMe3StelthFPv(void* p) { return draw_model__12TObjNpcEnemyFv(p); }

}
#undef draw_model__12TObjNpcEnemyFv
