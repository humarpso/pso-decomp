#include "types.h"

#define CAT2(a, b) a##b
#define CAT(a, b) CAT2(a, b)
#define PADV virtual void CAT(pv, __LINE__)();
#define PADV4 virtual void CAT(pa, __LINE__)(); virtual void CAT(pb, __LINE__)(); virtual void CAT(pc, __LINE__)(); virtual void CAT(pd, __LINE__)();
struct Base_A_800c294c_800C2614 { char pad[0x18]; };
struct V_A_800c294c_800C2614 : Base_A_800c294c_800C2614 {
    virtual void p0(); virtual void p1(); virtual void p2(); virtual void p3();
    virtual void p4(); virtual void p5(); virtual void p6(); virtual void p7();
    virtual void p8(); virtual void p9(); virtual void p10(); virtual void p11();
    virtual void p12(); virtual void p13(); virtual void p14(); virtual void p15();
    virtual void p16(); virtual void p17(); virtual void p18(); virtual void p19();
    virtual void p20(); virtual void p21(); virtual void p22(); virtual void p23();
    virtual void p24(); virtual void p25(); virtual void p26(); virtual void p27();
    virtual void p28(); virtual void p29(); virtual void p30(); virtual void p31();
    virtual void p32(); virtual void p33(); virtual void p34(); virtual void p35();
    virtual void p36(); virtual void p37(); virtual void p38(); virtual void p39();
    virtual void p40(); virtual void p41(); virtual void p42(); virtual void p43();
    virtual void p44(); virtual void p45(); virtual void p46(); virtual void p47();
    virtual void p48(); virtual void p49(); virtual void p50(); virtual void p51();
    virtual void p52(); virtual void p53(); virtual void p54(); virtual void p55();
    virtual void p56(); virtual void p57(); virtual void p58(); virtual void p59();
    virtual void p60(); virtual void p61(); virtual void p62(); virtual void p63();
    virtual void p64(); virtual void p65(); virtual void p66(); virtual void p67();
    virtual void p68(); virtual void p69(); virtual void p70(); virtual void p71();
    virtual void p72(); virtual void p73(); virtual void p74(); virtual void p75();
    virtual void p76(); virtual void p77(); virtual void p78(); virtual void p79();
    virtual void p80(); virtual void p81(); virtual void p82(); virtual void p83();
    virtual void p84(); virtual void p85();
    virtual void m86();
    virtual void p87(); virtual void p88(); virtual void p89(); virtual void p90();
    virtual void p91(); virtual void p92(); virtual void p93();
    virtual void m94();
    virtual void p95(); virtual void p96(); virtual void p97(); virtual void p98();
    virtual void p99();
    virtual void m100();
};

#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
struct VBase_18_9e83f9 { char pad[0x18]; };

struct VObj_18_9e83f9 : VBase_18_9e83f9 {
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
    virtual s32 m86();
    virtual void m87();
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
};

struct ByteBlock_10 { u8 bytes[0x10]; };

struct ByteBlock_14 { u8 bytes[0x14]; };

struct Vec_800C2628 { f32 x, y, z; };

struct Prm_800C2628 { f32 a, b, c, d, e; };

extern "C" {
void VecCopy__FP3VecPC3Vec(Vec_800C2628 *, void *);
void spawn_particle_effect_with_flags(Vec_800C2628 *, s32, s32);
s32 check_v2_mode__9TObjEneDDFv();
void TObjEneDD__sub_800BA5A4(void *, Prm_800C2628 *);
void clear_attack_receipts(void *);
s32 set_field_378__9TObjEneDDFPvi(void *, s32);
s32 transition_enemy_state(void *, s32);
s32 noop__9TObjEneDDFv(void *, s32);
s32 fn_800C3A60(void *, s32);
s32 get_flag_11__16TObjEneRe2FlowerFPv(void *);
s32 clear_child_flags__16TObjEneRe2FlowerFPv(void *);
s32 advance_animation_playback();
s32 play_sound_effect(s32, void *, s32, s32);
extern Prm_800C2628 lbl_8043BA68;
extern Prm_800C2628 lbl_8043BBA0;
extern f32 *const lbl_805D5170;
extern const f32 lbl_805D9FBC;
void TObjEneDD__sub_800C2628(u8 *arg0, s32 arg1);
}

extern "C" {

void TObjEneDD__sub_800C2614(void);
void TObjEneDD__sub_800C2618(void* p);
void handle_event__16TObjEneRe2FlowerFPvi(u8 *arg0, s32 arg1);
s32 advance_animation_playback();
s32 play_sound_effect(s32, void *, s32, s32);
s32 transition_enemy_state(void *, s32);
s32 clear_child_flags__16TObjEneRe2FlowerFPv(void *);
s32 fn_800C3A60(void *, s32);
s32 noop__9TObjEneDDFv(void *, s32);
s32 objInBand__FP7GameObjf(f32);
s32 play_effect_if_v2__10TObjPlayerFi(s32);
s32 set_field_378__9TObjEneDDFPvi(void *, s32);

void TObjEneDD__sub_800C2614(void) {  }
void TObjEneDD__sub_800C2618(void* p) { *(u32*)((char*)p + 0x3c4) |= 0x2; }

extern const f32 lbl_805D9FC0;

#define F(T, off) (*(T *)((s8 *)(arg0) + (off)))
void TObjEneDD__sub_800C2628(u8 *arg0, s32 arg1) {
    s32 step;
    Vec_800C2628 v;
    switch (arg1) {
    case 4:
        F(s16, 0xB8) = 1;
        ((VObj_18_9e83f9 *)(arg0))->m94();
        clear_child_flags__16TObjEneRe2FlowerFPv(arg0);
        F(u32, 0x3C4) &= ~8;
        set_field_378__9TObjEneDDFPvi((void *)(arg0), (s32)(8));
        if (!(F(u32, 0x3C4) & 4)) {
            F(u32, 0x3C4) |= 4;
            F(s32, 0x410) = 0;
            F(s32, 0x420) = 0;
            F(s32, 0x414) = 1;
            F(s32, 0x3D8) = 0;
            F(s32, 0x3D4) = 0;
        }
        break;
    case 1:
    case 5:
        break;
    case 3:
        if (F(s32, 0x410) > 0x1C2) {
            F(u32, 0x30) |= 0x800;
            transition_enemy_state(arg0, 0xA);
            VecCopy__FP3VecPC3Vec(&v, arg0 + 0x38);
            v.y += lbl_805D9FBC;
            spawn_particle_effect_with_flags(&v, 0xD3, 0x40);
            {
                Prm_800C2628 prm = lbl_8043BBA0;
                prm.d = prm.b = *lbl_805D5170;
                if (get_flag_11__16TObjEneRe2FlowerFPv(arg0) != 0) {
                    TObjEneDD__sub_800BA5A4(arg0, &prm);
                } else {
                    TObjEneDD__sub_800BA5A4(arg0, &lbl_8043BA68);
                }
            }
            play_sound_effect(fn_800C3A60(arg0, 0x4003A311), arg0 + 0x38, 0, 0);
        }
        break;
    case 0:
        advance_animation_playback();
        if (F(s32, 0x3D4) > 0) {
            F(s32, 0x3D4)--;
            if (F(s32, 0x3D4) == 0) {
                clear_attack_receipts(arg0);
            }
        }
        if (check_v2_mode__9TObjEneDDFv() != 0) {
            F(s32, 0x410) += 0x14;
        } else {
            F(s32, 0x410) += 1;
        }
        if (F(s32, 0x410) < 0x12C) {
            step = 0x11;
            F(s32, 0x60) += 0x400;
        } else if (F(s32, 0x410) < 0x168) {
            step = 0x22;
            F(s32, 0x60) += 0x800;
        } else if (F(s32, 0x410) < 0x1B3) {
            step = 0x44;
            F(s32, 0x60) += 0x1000;
        } else {
            step = 0x44;
        }
        if (F(s32, 0x410) < 0x1B3) {
            if (F(s32, 0x414) == 0) {
                F(s32, 0x3D8) += step;
                if (F(s32, 0x3D8) > 0xFF) {
                    F(s32, 0x3D8) = 0xFF - (F(s32, 0x3D8) - 0xFF);
                    F(s32, 0x414) = 1;
                    play_sound_effect(fn_800C3A60(arg0, 0x4003AD10), arg0 + 0x38, 0, 0);
                }
            } else {
                F(s32, 0x3D8) -= step;
                if (F(s32, 0x3D8) < 0) {
                    F(s32, 0x3D8) = -F(s32, 0x3D8);
                    F(s32, 0x414) = 0;
                }
            }
        } else {
            F(s32, 0x3D8) = 0xFF;
        }
        ((VObj_18_9e83f9 *)(arg0))->m100();
        ((VObj_18_9e83f9 *)(arg0))->m86();
        ((s32 (*)(void *))noop__9TObjEneDDFv)(arg0);
        break;
    }
}
#undef F

void handle_event__16TObjEneRe2FlowerFPvi(u8 *arg0, s32 arg1) {
    s32 temp_r4;

    switch (arg1) {
    case 4:
        *(s16 *)((s8 *)arg0 + 0xB8) = 6;
        ((V_A_800c294c_800C2614 *) arg0)->m94();
        clear_child_flags__16TObjEneRe2FlowerFPv(arg0);
        *(s32 *)((s8 *)arg0 + 0x3C4) = (s32) (*(s32 *)((s8 *)arg0 + 0x3C4) & 0xFFFFFFF7);
        set_field_378__9TObjEneDDFPvi(arg0, 3);
        *(s32 *)((s8 *)arg0 + 0x410) = 0;
        play_sound_effect(fn_800C3A60(arg0, 0x4003A315), arg0 + 0x38, 0, 0);
        play_effect_if_v2__10TObjPlayerFi(-0x200);
        return;
    case 3:
        if (objInBand__FP7GameObjf(*(f32 *)((s8 *)arg0 + 0xC4) - lbl_805D9FC0) != 0) {
            transition_enemy_state(arg0, 3);
        }
        ((V_A_800c294c_800C2614 *) arg0)->m100();
        ((V_A_800c294c_800C2614 *) arg0)->m86();
        return;
    case 0:
        advance_animation_playback();
        temp_r4 = *(s32 *)((s8 *)arg0 + 0x410);
        *(s32 *)((s8 *)arg0 + 0x410) = (s32) (temp_r4 + 1);
        noop__9TObjEneDDFv(arg0, temp_r4);
        return;
    case 5:
        *(s32 *)((s8 *)arg0 + 0x3C4) = (s32) (*(s32 *)((s8 *)arg0 + 0x3C4) & 0xFFFFFFFD);
    case 1:
        return;
    }
}

}
