#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct VBase_14_fddec9 { char pad[0x14]; };

struct VObj_14_fddec9 : VBase_14_fddec9 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual M2C_UNK m6();
    virtual M2C_UNK m7();
    virtual s32 m8();
};

struct VBase_18_1fdb47 { char pad[0x18]; };

struct VObj_18_1fdb47 : VBase_18_1fdb47 {
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
    virtual M2C_UNK m104();
};

struct Vec_8031BE8C { f32 x, y, z; };

struct Recon_8031BE8C { u8 pad[0x480]; VObj_14_fddec9 fade; };

extern "C" {
s32 check_demo_mode__10TObjPlayerFv();
s32 is_main_phase_15__9TObjEneDDFv();
M2C_UNK clear_global_flag_400__9TObjEneDDFv();
M2C_UNK update_player_state__9TObjEneDDFPv(void *, void *, int);
M2C_UNK update_primary_light__9TObjEneDDFPv(void *);
M2C_UNK update_secondary_light__9TObjEneDDFPv(void *);
M2C_UNK toggle_particle_effect__10TObjPlayerFv();
M2C_UNK render_world_model__10TObjPlayerFPv(void *);
M2C_UNK draw__16TObjEneRe7BeruraFPv(void *);
M2C_UNK end_effect_render__13TParticleCtrlFv();
s32 toggle_flag_9_if_flag_10_is_clear__7TObjectFv(void *);
s32 render_model_if_visible__12TObjEneReconFPv(void *);
M2C_UNK rotate_matrix_y(int, int);
M2C_UNK translate_matrix(int, f32, f32, f32);
M2C_UNK push_matrix();
M2C_UNK pop_matrix();
M2C_UNK set_global_param__8TObjFishFi(int);
M2C_UNK set_global_state__16TObjEneRe7BeruraFi(void *);
void advance_intro_stage__12TObjEneReconFv(void);
extern Vec_8031BE8C lbl_804760FC;
extern s32 lbl_805D5660;
extern s32 lbl_805D5664;
extern s32 lbl_805D5668;
extern s32 recon_intro_stage;
extern u8 *recon_model_matrix_ptr;
extern s32 chunk_polygon_flags_or_mask;
extern s32 chunk_polygon_flags_and_mask;
extern s32 model_render_flags;
extern const f32 lbl_805D9E84;
extern const f32 lbl_805D9E88;
extern const f32 lbl_805DF3BC;
extern const f32 TObjEneRecon__data_805DF3C0;
extern const f32 TObjEneRecon__data_805DF3C4;
void render__12TObjEneReconFv(u8 *arg0);
}

extern "C" {

#pragma push
#pragma opt_common_subs off
void render__12TObjEneReconFv(u8 *arg0) {
    s32 var_r29;
    s32 var_r31;
    if (check_demo_mode__10TObjPlayerFv() != 0) {
        ((VObj_18_1fdb47 *)(arg0))->m104();
        return;
    }
    if (!(M2C_FIELD(arg0, s32 *, 0x444) & 1)) {
        if (is_main_phase_15__9TObjEneDDFv() != 0) {
            var_r31 = ((VObj_18_1fdb47 *)(arg0))->m9(lbl_805D9E88, lbl_805D9E84, TObjEneRecon__data_805DF3C0);
        } else if (((VObj_18_1fdb47 *)(arg0))->m8(lbl_805DF3BC, TObjEneRecon__data_805DF3C0) != 0) {
            var_r31 = 1;
        } else {
            var_r31 = 0;
        }
        if (var_r31 != 0) {
            var_r29 = 1;
            if (render_model_if_visible__12TObjEneReconFPv((void *) (arg0)) == 0) {
                lbl_805D5660 = model_render_flags;
                lbl_805D5664 = chunk_polygon_flags_and_mask;
                lbl_805D5668 = chunk_polygon_flags_or_mask;
                if (((s16) M2C_FIELD(arg0, s16 *, 0x326) == 5) && (((Recon_8031BE8C *)arg0)->fade.m8() != 0)) {
                    ((Recon_8031BE8C *)arg0)->fade.m6();
                    if (toggle_flag_9_if_flag_10_is_clear__7TObjectFv((void *) (arg0)) != 0) {
                        var_r29 = 0;
                    }
                }
                if (var_r29 != 0) {
                    if ((M2C_FIELD(arg0, s32 *, 0x444) & 2) && !(M2C_FIELD(arg0, s32 *, 0x418) & 0x4000)) {
                        Vec_8031BE8C v = lbl_804760FC;
                        update_player_state__9TObjEneDDFPv(arg0, &v, 0);
                    }
                    update_secondary_light__9TObjEneDDFPv((void *) (arg0));
                    set_global_param__8TObjFishFi((int) (M2C_FIELD(arg0, s32 *, 0x24)));
                    push_matrix();
                    translate_matrix((int) (0), (f32) (M2C_FIELD(arg0, f32 *, 0x38)), (f32) (M2C_FIELD(arg0, f32 *, 0x448)), (f32) (M2C_FIELD(arg0, f32 *, 0x40)));
                    rotate_matrix_y((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x60)));
                    clear_global_flag_400__9TObjEneDDFv();
                    recon_intro_stage = 0;
                    recon_model_matrix_ptr = arg0 + 0x40C;
                    M2C_FIELD(arg0, f32 *, 0x40C) = (f32) TObjEneRecon__data_805DF3C4;
                    M2C_FIELD(arg0, f32 *, 0x410) = (f32) TObjEneRecon__data_805DF3C4;
                    M2C_FIELD(arg0, f32 *, 0x414) = (f32) TObjEneRecon__data_805DF3C4;
                    set_global_state__16TObjEneRe7BeruraFi((void *)advance_intro_stage__12TObjEneReconFv);
                    toggle_particle_effect__10TObjPlayerFv();
                    model_render_flags |= 0x01000000;
                    if (var_r31 == 1) {
                        draw__16TObjEneRe7BeruraFPv((void *) (arg0));
                    } else {
                        render_world_model__10TObjPlayerFPv((void *) (arg0));
                    }
                    model_render_flags &= 0xFEFFFFFF;
                    end_effect_render__13TParticleCtrlFv();
                    set_global_state__16TObjEneRe7BeruraFi((void *) (NULL));
                    pop_matrix();
                    update_primary_light__9TObjEneDDFPv((void *) (arg0));
                }
                if (((s16) M2C_FIELD(arg0, s16 *, 0x326) == 5) && (((Recon_8031BE8C *)arg0)->fade.m8() != 0)) {
                    ((Recon_8031BE8C *)arg0)->fade.m7();
                }
                model_render_flags = lbl_805D5660;
                chunk_polygon_flags_and_mask = lbl_805D5664;
                chunk_polygon_flags_or_mask = lbl_805D5668;
            }
        }
    }
}
#pragma pop

}
