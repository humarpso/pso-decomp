#include "types.h"
#include "pso/enemy/TObjEneRecon.h"

struct VBase_18_26a62c { char pad[0x18]; };

struct VObj_18_26a62c : VBase_18_26a62c {
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

struct FadeBase_8031EA70 { char pad[0x14]; };

struct Fade_8031EA70 : FadeBase_8031EA70 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual s32 m8();
    u8 pad18[4];
};

struct ObjBase_8031EA70 { char pad[0x18]; };

struct Obj_8031EA70 : ObjBase_8031EA70 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
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
};

struct Holder_8031EA70 { u8 pad[0x460]; Fade_8031EA70 arr[4]; };

extern "C" {
s32 clear_global_flag_400__9TObjEneDDFv();
s32 get_target_info__9TObjEneDDFPv();
s32 pack_debug_text_position(s32, s32);
s32 toggle_particle_effect__10TObjPlayerFv();
s32 end_effect_render__13TParticleCtrlFv();
s32 debug_printf_at(s32, const char *, ...);
s32 rotate_matrix_y(int, int);
s32 rotate_matrix_x(int, int);
s32 push_matrix();
s32 pop_matrix();
s32 post_translate_matrix(void *);
s32 set_global_param__8TObjFishFl(int);
s32 draw_chunk_object(void *);
extern char lbl_804763D4[];
extern char lbl_804763E4[];
extern char lbl_804763F4[];
extern char lbl_80476400[];
extern char lbl_80476410[];
extern char lbl_80476428[];
extern char lbl_80476440[];
extern s32 debug_chunk_object;
extern const f32 TObjEneRecon__data_805DF438;
extern const f32 lbl_805DF43C;
s32 VecCopy__FP3VecPC3Vec(void *, void *);
s32 is_split_screen();
s32 get_camera_mode__11TCameraCtrlFv();
s32 check_demo_mode__10TObjPlayerFv();
s32 is_main_phase_15__9TObjEneDDFv();
s32 clear_global_flag_400__9TObjEneDDFv();
s32 update_primary_light__9TObjEneDDFv(void *);
s32 update_secondary_light__9TObjEneDDFv(void *);
s32 updateFromCamera__15RenderFadeStateFPCf(int, void *);
s32 update_obstruction_fade(int);
s32 toggle_particle_effect__10TObjPlayerFv();
s32 render_world_model__10TObjPlayerFv(void *);
s32 draw__16TObjEneRe7BeruraFv(void *);
s32 end_effect_render__13TParticleCtrlFv();
s32 toggle_flag_9_if_flag_10_is_clear__7TObjectFv(void *);
s32 render_trap_model_if_visible__12TObjEneReconFPv(void *);
s32 rotate_matrix_y(int, int);
s32 rotate_matrix_x(int, int);
s32 push_matrix();
s32 pop_matrix();
s32 post_translate_matrix(void *);
s32 set_global_param__8TObjFishFl(int);
extern s32 lbl_805D5660;
extern s32 lbl_805D5664;
extern s32 lbl_805D5668;
extern s32 chunk_polygon_flags_or_mask;
extern s32 chunk_polygon_flags_and_mask;
extern s32 model_render_flags;
extern const f32 lbl_805D9E84;
extern const f32 lbl_805D9E88;
extern const f32 TObjEneRecon__data_805DF438;
extern const f32 lbl_805DF43C;
extern const f32 lbl_805DF440;
extern const f32 lbl_805DF444;
void render__12TObjEneReconFPv(u8 *arg0);
}

extern "C" {

void TObjEneRecon::draw_with_debug_info() {
    u8 *arg0 = (u8 *)this;
    s32 temp_r0;
    s32 temp_r0_2;
    if (get_target_info__9TObjEneDDFPv() != 0) {
        temp_r0 = *(s32 *)((s8 *)arg0 + 0x3DC);
        switch (temp_r0) {
        case 0:
            debug_printf_at(pack_debug_text_position(0, 9), lbl_804763D4);
            break;
        case 1:
            debug_printf_at(pack_debug_text_position(0, 9), lbl_804763E4);
            break;
        case 2:
            debug_printf_at(pack_debug_text_position(0, 9), lbl_804763F4);
            break;
        }
        debug_printf_at(pack_debug_text_position(0, 0xA), lbl_80476400);
        debug_printf_at(pack_debug_text_position(0, 2), lbl_80476410);
        debug_printf_at(pack_debug_text_position(0, 3), lbl_80476428);
        debug_printf_at(pack_debug_text_position(0, 5), lbl_80476440);
    }
    if (((VObj_18_26a62c *)(arg0))->m8(TObjEneRecon__data_805DF438, lbl_805DF43C) != 0) {
        set_global_param__8TObjFishFl((int) (*(s32 *)((s8 *)arg0 + 0x24)));
        push_matrix();
        post_translate_matrix((void *) (arg0 + 0x38));
        rotate_matrix_y((int) (0), (int) (*(s32 *)((s8 *)arg0 + 0x60)));
        temp_r0_2 = *(s32 *)((s8 *)arg0 + 0x3DC);
        switch (temp_r0_2) {
        case 1:
            rotate_matrix_x((int) (0), (int) (0x8000));
            break;
        case 2:
            rotate_matrix_x((int) (0), (int) (0x4000));
            break;
        }
        clear_global_flag_400__9TObjEneDDFv();
        toggle_particle_effect__10TObjPlayerFv();
        draw_chunk_object((void *) (*(s32 *)((s8 *)arg0 + 0x34)));
        end_effect_render__13TParticleCtrlFv();
        pop_matrix();
    }
    push_matrix();
    post_translate_matrix((void *) (arg0 + 0x38));
    rotate_matrix_y((int) (0), (int) (*(s32 *)((s8 *)arg0 + 0x60)));
    draw_chunk_object((void *) (debug_chunk_object));
    pop_matrix();
}
void render__12TObjEneReconFPv(u8 *arg0) {
    s32 temp_r0;
    s32 temp_r30;
    Fade_8031EA70 *temp_r29;
    s32 var_r29;
    s32 var_r28;
    s32 var_r27;
    if (check_demo_mode__10TObjPlayerFv() != 0) {
        ((Obj_8031EA70 *)arg0)->m104();
        return;
    }
    var_r29 = 0;
    if (is_split_screen() != 0) {
        var_r29 = get_camera_mode__11TCameraCtrlFv();
    }
    if (!(*(s32 *)((s8 *)arg0 + 0x40C) & 1)) {
        if (is_main_phase_15__9TObjEneDDFv() != 0) {
            var_r28 = ((Obj_8031EA70 *)arg0)->m9(lbl_805DF440 + lbl_805D9E88, lbl_805DF444 + lbl_805D9E84, lbl_805DF43C);
        } else if (((Obj_8031EA70 *)arg0)->m8(TObjEneRecon__data_805DF438, lbl_805DF43C) != 0) {
            var_r28 = 1;
        } else {
            var_r28 = 0;
        }
        if (var_r28 != 0) {
            var_r27 = 0;
            if (render_trap_model_if_visible__12TObjEneReconFPv((void *) (arg0)) == 0) {
                lbl_805D5660 = model_render_flags;
                lbl_805D5664 = chunk_polygon_flags_and_mask;
                lbl_805D5668 = chunk_polygon_flags_or_mask;
                if ((s16) *(s16 *)((s8 *)arg0 + 0x326) == 1) {
                    if (((Fade_8031EA70 *)(arg0 + 0x3C0))->m8() != 0) {
                        if (toggle_flag_9_if_flag_10_is_clear__7TObjectFv((void *) (arg0)) != 0) {
                            model_render_flags = lbl_805D5660;
                            chunk_polygon_flags_and_mask = lbl_805D5664;
                            chunk_polygon_flags_or_mask = lbl_805D5668;
                            return;
                        }
                        var_r27 = 1;
                        ((Fade_8031EA70 *)(arg0 + 0x3C0))->m6();
                        goto block_18;
                    }
                    model_render_flags = lbl_805D5660;
                    chunk_polygon_flags_and_mask = lbl_805D5664;
                    chunk_polygon_flags_or_mask = lbl_805D5668;
                    return;
                }
block_18:
                temp_r29 = &((Holder_8031EA70 *)arg0)->arr[var_r29];
                update_obstruction_fade((int) (temp_r29));
                temp_r30 = updateFromCamera__15RenderFadeStateFPCf((int) (temp_r29), (void *) (arg0 + 0x2FC));
                if ((var_r27 == 0) && (temp_r30 != 0)) {
                    if (toggle_flag_9_if_flag_10_is_clear__7TObjectFv((void *) (arg0)) != 0) {
                        model_render_flags = lbl_805D5660;
                        chunk_polygon_flags_and_mask = lbl_805D5664;
                        chunk_polygon_flags_or_mask = lbl_805D5668;
                        return;
                    }
                    temp_r29->m6();
                    goto block_23;
                }
block_23:
                update_secondary_light__9TObjEneDDFv((void *) (arg0));
                set_global_param__8TObjFishFl((int) (*(s32 *)((s8 *)arg0 + 0x24)));
                push_matrix();
                post_translate_matrix((void *) (arg0 + 0x38));
                rotate_matrix_y((int) (0), (int) (*(s32 *)((s8 *)arg0 + 0x60)));
                temp_r0 = *(s32 *)((s8 *)arg0 + 0x3DC);
                switch (temp_r0) {
                case 1:
                    rotate_matrix_x((int) (0), (int) (0x8000));
                    break;
                case 2:
                    rotate_matrix_x((int) (0), (int) (0x4000));
                    break;
                }
                clear_global_flag_400__9TObjEneDDFv();
                toggle_particle_effect__10TObjPlayerFv();
                if (var_r28 == 1) {
                    draw__16TObjEneRe7BeruraFv((void *) (arg0));
                } else {
                    render_world_model__10TObjPlayerFv((void *) (arg0));
                }
                end_effect_render__13TParticleCtrlFv();
                pop_matrix();
                update_primary_light__9TObjEneDDFv((void *) (arg0));
                if (var_r27 != 0) {
                    ((Fade_8031EA70 *)(arg0 + 0x3C0))->m7();
                } else if (temp_r30 != 0) {
                    temp_r29->m7();
                }
                model_render_flags = lbl_805D5660;
                chunk_polygon_flags_and_mask = lbl_805D5664;
                chunk_polygon_flags_or_mask = lbl_805D5668;
                goto block_37;
            }
        } else {
            goto block_37;
        }
    } else {
block_37:
        VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x2FC), (void *) (arg0 + 0x38));
    }
}

}
