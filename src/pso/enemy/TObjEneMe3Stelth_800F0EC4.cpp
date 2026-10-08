#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
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
    virtual M2C_UNK m87();
    virtual void m88();
    virtual void m89();
    virtual void m90();
    virtual void m91();
    virtual void m92();
    virtual void m93();
    virtual M2C_UNK m94();
    virtual void m95();
    virtual void m96();
    virtual void m97();
    virtual void m98();
    virtual void m99();
    virtual M2C_UNK m100();
};

struct VBase14_800F1440 { char pad[0x14]; };

struct VSub_800F1440 : VBase14_800F1440 {
    virtual void s0();
    virtual void s1();
    virtual void s2();
    virtual void s3();
    virtual s32 s4();
};

struct Quad_800F1440 { s32 a, b, c, d; };

struct VBase_18_444bc5 { char pad[0x18]; };

struct VObj_18_444bc5 : VBase_18_444bc5 {
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
    virtual M2C_UNK m94();
};

struct Vec_800F1098 { f32 x, y, z; };

struct IVec_800F1098 { s32 a, b, c; };

struct Spd_800F1098 { s32 a; f32 speed; s32 turn; };

struct Tbl_800F1098 { u8 pad[0x24]; s32 lvl; };

struct Obj_800F0EC4 { u8 pad0[0x326]; s16 f326; u8 pad328[0x3C0 - 0x328]; s32 f3C0; u8 pad3C4[0x3E0 - 0x3C4]; f32 f3E0; };

struct Pair_800F0EC4 { s32 a; s32 b; };

struct VBase_18_800F0F84 { char pad[0x18]; };

struct VObj_18_800F0F84 : VBase_18_800F0F84 {
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

struct Vec_800F0F84 { f32 x, y, z; };

struct Ent_800F0F84 { u8 pad0[0x18]; u32 f18; };

extern "C" {
s32 is_split_screen();
s32 get_flag_b4__21TObjEneMe3ShinowaRealFPv(void *);
M2C_UNK set_field_378__9TObjEneDDFPvi(void *, int);
M2C_UNK transition_enemy_state(void *, int);
M2C_UNK copy_position_vector__18TObjEneMe3SinowZoaFPvPv(void *, void *);
s32 objInBand__FP7GameObjf(void *, f32);
M2C_UNK advance_animation_playback(void *);
M2C_UNK clear_player_status_flag__10TObjPlayerFPviUi(void *, int, int);
M2C_UNK play_sound_effect(int, void *, int, int);
extern const Quad_800F1440 lbl_8043D450;
extern const f32 lbl_805DA828;
extern const f32 lbl_805DA82C;
void TObjEneMe3Stelth__sub_800F1440(u8 *arg0, s32 arg1);
s32 move_with_wall_slide(void *);
s32 enemy_set_heading_velocity(void *, s32, f32);
M2C_UNK select_enemy_destination(void *, Vec_800F1098 *, int);
M2C_UNK copy_position_if_valid__10TObjPlayerFii(void *, Vec_800F1098 *);
s32 update_angle__10TObjPlayerFPviPv(void *, s32, void *);
s32 enemy_turn_toward_dest(void *, s32);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
s32 get_flag_b4__21TObjEneMe3ShinowaRealFPv(void *);
M2C_UNK enemy_copy_target_destination(void *);
s32 clamp_frame_index__9TObjEneDDFi(s32);
M2C_UNK set_field_378__9TObjEneDDFPvi(void *, int);
M2C_UNK transition_enemy_state(void *, int);
M2C_UNK update_prev_position__10TObjPlayerFPv(void *);
M2C_UNK render_anim_model__10TObjPlayerFPvf(void *, f32);
s32 objInBand__FP7GameObjf(void *, f32);
M2C_UNK advance_animation_playback(void *);
M2C_UNK update_collisions__10TObjPlayerFPv(void *);
M2C_UNK create__10TTecGiFoieFPvPvPv(void *, void *, s32);
M2C_UNK create__10TTecRaFoieFPvPvPvPv(void *, void *, void *, s32);
s32 matrix_mult_vec(int, void *, void *);
M2C_UNK rotate_matrix_y(int, int);
void subtract_vector(void *, void *);
M2C_UNK push_matrix_from(void *);
M2C_UNK pop_matrix();
M2C_UNK post_translate_matrix(void *);
M2C_UNK set_global_flag__10TObjPlayerFv();
M2C_UNK clear_global_state__10TObjPlayerFv();
extern IVec_800F1098 lbl_8043D680;
extern Tbl_800F1098 *TObjEneMe3Stelth__data_80501104[];
extern u8 lbl_8058D490[];
extern s32 lbl_805D5550;
extern u8 *lbl_805D5678;
extern const f32 TObjEneMe3Stelth__data_805DA820;
extern const f32 TObjEneMe3Stelth__data_805DA824;
void TObjEneMe3Stelth__sub_800F1098(u8 *arg0, s32 arg1);
f32 calc_boss4_scale__10TObjPlayerFi(void *);
s32 receive_direct_attack__10TObjPlayerFv(void *, void *, void *, void *, s32, s32);
u16 obj_getField1c(void *);
M2C_UNK transition_enemy_state(void *, int);
void handle_direct_attack__16TObjEneMe3StelthFPvPviPv(Obj_800F0EC4 *arg0, void *arg1, Pair_800F0EC4 arg2, void *arg3);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
u16 obj_getField1c(void *);
M2C_UNK fn_8002B630(void *, void *);
u32 get_valid_target_player__10TNpcPlayerFv(int);
M2C_UNK init_all_slots__10TObjPlayerFv();
extern u8 lbl_804976E4[];
s32 TObjEneMe3Stelth__sub_800F0F84(u8 *arg0, Vec_800F0F84 *arg1);
}

extern "C" {

#define F(T, o) (*(T *)(arg0 + (o)))
#define VO ((VObj_18 *)(arg0))

#define F(T, o) (*(T *)(arg0 + (o)))

void handle_direct_attack__16TObjEneMe3StelthFPvPviPv(Obj_800F0EC4 *arg0, void *arg1, Pair_800F0EC4 arg2, void *arg3) {
    if (arg0->f3C0 == 1 && obj_getField1c(arg1) < 0x1000 && calc_boss4_scale__10TObjPlayerFi(arg0) <= arg0->f3E0) {
        transition_enemy_state(arg0, 0x12);
    } else if (arg0->f326 == 2) {
        transition_enemy_state(arg0, 6);
    }
    ((s32 (*)(void *, void *, Pair_800F0EC4, void *, s32, s32))receive_direct_attack__10TObjPlayerFv)(arg0, arg1, arg2, arg3, -1, -1);
}

s32 TObjEneMe3Stelth__sub_800F0F84(u8 *arg0, Vec_800F0F84 *arg1) {
    Ent_800F0F84 *ent;
    s32 result;
    u32 saved;
    Vec_800F0F84 sp;
    u8 unused[12];
    ent = *(Ent_800F0F84 **)(arg0 + 0xA4);
    saved = ent->f18;
    ent->f18 = 0x9D01;
    VecCopy__FP3VecPC3Vec(&sp, arg0 + 0x38);
    VecCopy__FP3VecPC3Vec(arg0 + 0x38, arg1);
    init_all_slots__10TObjPlayerFv();
    ((VObj_18_800F0F84 *)arg0)->m87();
    if ((ent->f18 & 0x80000) && get_valid_target_player__10TNpcPlayerFv(obj_getField1c((void *)(M2C_FIELD(arg0, s32 *, 0x390)))) == 0) {
        VecCopy__FP3VecPC3Vec(arg0 + 0x38, &sp);
        init_all_slots__10TObjPlayerFv();
        return 1;
    }
    if ((ent->f18 & 0x100000) && get_valid_target_player__10TNpcPlayerFv(M2C_FIELD(arg0, u16 *, 0x1C)) == 0) {
        VecCopy__FP3VecPC3Vec(arg0 + 0x38, &sp);
        init_all_slots__10TObjPlayerFv();
        return 1;
    }
    result = (ent->f18 & 0x200000) != 0;
    VecCopy__FP3VecPC3Vec(arg0 + 0x38, &sp);
    init_all_slots__10TObjPlayerFv();
    fn_8002B630(ent, lbl_804976E4);
    ent->f18 = saved;
    return result;
}

void TObjEneMe3Stelth__sub_800F1098(u8 *arg0, s32 arg1) {
    Vec_800F1098 d;
    Vec_800F1098 out;
    IVec_800F1098 c;
    s32 r;
    switch (arg1) {
    case 4:
        F(s16, 0xB8) = 0xA;
        set_field_378__9TObjEneDDFPvi(arg0, 6);
        ((VObj_18_444bc5 *)(arg0))->m94();
        F(s32, 0x3CC) &= 0xFFFFFFF8;
        F(s32, 0x3CC) |= 0x10000;
        enemy_copy_target_destination(arg0);
        F(s32, 0x424) = 0;
        break;
    case 3:
        if (F(s32, 0x424) == 3) {
            transition_enemy_state(arg0, 6);
        }
        break;
    case 0:
        update_prev_position__10TObjPlayerFPv(arg0);
        switch (F(s32, 0x424)) {
        case 0:
        default:
            if (F(u32, 0x390) == 0) {
                transition_enemy_state(arg0, 6);
                break;
            }
            {
                Vec_800F1098 dest = F(Vec_800F1098, 0x394);
                if (select_enemy_destination(arg0, &dest, 1) != 0) {
                    Vec_800F1098 pos = F(Vec_800F1098, 0x2FC);
                    copy_position_if_valid__10TObjPlayerFii(arg0, &pos);
                    F(f32, 0x300) += TObjEneMe3Stelth__data_805DA820;
                    r = enemy_turn_toward_dest(arg0, F(Spd_800F1098 *, 0x350)->turn);
                    enemy_set_heading_velocity(arg0, F(s32, 0x60), F(Spd_800F1098 *, 0x350)->speed);
                    move_with_wall_slide(arg0);
                } else {
                    VecCopy__FP3VecPC3Vec(&d, arg0 + 0x394);
                    subtract_vector(&d, arg0 + 0x2FC);
                    r = update_angle__10TObjPlayerFPviPv(arg0, F(Spd_800F1098 *, 0x350)->turn, &d);
                }
            }
            if (r < 0x100) {
                F(s32, 0x424) = 1;
                F(s16, 0xB8) = 8;
            } else {
                F(s16, 0xB8) = 0xA;
            }
            break;
        case 1:
            advance_animation_playback(arg0);
            if (get_flag_b4__21TObjEneMe3ShinowaRealFPv(arg0) != 0) {
                F(s32, 0x428) = 0;
                F(s32, 0x424) = 2;
            }
            if (objInBand__FP7GameObjf(arg0, TObjEneMe3Stelth__data_805DA824) != 0) {
                advance_animation_playback(arg0);
                push_matrix_from(lbl_8058D490);
                post_translate_matrix(arg0 + 0x38);
                rotate_matrix_y(0, F(s32, 0x60));
                set_global_flag__10TObjPlayerFv();
                render_anim_model__10TObjPlayerFPvf(arg0, TObjEneMe3Stelth__data_805DA824);
                clear_global_state__10TObjPlayerFv();
                pop_matrix();
                push_matrix_from(lbl_805D5678 + 0x90);
                c.a = lbl_8043D680.a;
                c.b = lbl_8043D680.b;
                c.c = lbl_8043D680.c;
                matrix_mult_vec(0, &c, &out);
                pop_matrix();
                if (F(u32, 0x390) != 0) {
                    VecCopy__FP3VecPC3Vec(&d, arg0 + 0x394);
                    subtract_vector(&d, arg0 + 0x2FC);
                    r = update_angle__10TObjPlayerFPviPv(arg0, F(Spd_800F1098 *, 0x350)->turn, &d);
                } else {
                    r = F(s32 *, 0x318)[3];
                }
                if (r < F(s32 *, 0x318)[3] / 2 && F(u32, 0x390) != 0) {
                    if (lbl_805D5550 == 3) {
                        create__10TTecRaFoieFPvPvPvPv(arg0, &out, arg0 + 0x394, clamp_frame_index__9TObjEneDDFi(TObjEneMe3Stelth__data_80501104[F(s32, 0x3C8)]->lvl));
                    } else {
                        create__10TTecGiFoieFPvPvPv(arg0, &out, clamp_frame_index__9TObjEneDDFi(TObjEneMe3Stelth__data_80501104[F(s32, 0x3C8)]->lvl));
                    }
                } else {
                    F(s32, 0x424) = 3;
                }
            }
            break;
        case 2:
            if (++F(s32, 0x428) >= 0x3C) {
                F(s32, 0x424) = 3;
            }
            break;
        }
        break;
    case 5:
        break;
    }
    update_collisions__10TObjPlayerFPv(arg0);
}

void TObjEneMe3Stelth__sub_800F1440(u8 *arg0, s32 arg1) {
    Quad_800F1440 q;
    switch (arg1) {
    case 4:
        F(s16, 0xB8) = 0xB;
        set_field_378__9TObjEneDDFPvi(arg0, 6);
        VO->m94();
        F(s32, 0x3CC) &= 0xFFFFFFF1;
        F(s32, 0x3CC) |= 1;
        F(s32, 0x3CC) |= 0x40000;
        clear_player_status_flag__10TObjPlayerFPviUi(arg0, 0, 0x08000000);
        F(s32, 0x424) = 0;
        play_sound_effect(0x3B23B, arg0 + 0x38, 0, 0);
        break;
    case 3:
        if (F(s32, 0x424) == 3) {
            transition_enemy_state(arg0, 6);
            F(s32, 0x3CC) &= ~1;
        }
        break;
    case 0:
        advance_animation_playback(arg0);
        if (get_flag_b4__21TObjEneMe3ShinowaRealFPv(arg0) != 0) {
            F(s32, 0x424) = 3;
        } else if (is_split_screen() != 0) {
            switch (F(s32, 0x424)) {
            case 0:
                if (objInBand__FP7GameObjf(arg0, lbl_805DA828) != 0) {
                    F(s32, 0x3CC) |= 8;
                    q.a = lbl_8043D450.a;
                    q.b = lbl_8043D450.b;
                    q.c = lbl_8043D450.c;
                    q.d = lbl_8043D450.d;
                    copy_position_vector__18TObjEneMe3SinowZoaFPvPv(arg0 + 0x404, &q);
                    F(s32, 0x424) = 1;
                }
                break;
            case 1:
                if (((VSub_800F1440 *)(arg0 + 0x404))->s4() != 0) {
                    F(s32, 0x3CC) &= ~8;
                    F(s32, 0x3C0) = 0;
                    F(s32, 0x424) = 2;
                }
                break;
            }
        } else if (objInBand__FP7GameObjf(arg0, lbl_805DA828) != 0) {
            F(s32, 0x3CC) |= 8;
        } else if (objInBand__FP7GameObjf(arg0, lbl_805DA82C) != 0) {
            F(s32, 0x3CC) &= ~8;
            F(s32, 0x3C0) = 0;
        }
        VO->m100();
        VO->m87();
        break;
    case 5:
        F(s32, 0x3CC) &= ~8;
        F(s32, 0x3C0) = 0;
        break;
    }
}

}
