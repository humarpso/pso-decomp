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
}

extern "C" {

#define F(T, o) (*(T *)(arg0 + (o)))
#define VO ((VObj_18 *)(arg0))
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
