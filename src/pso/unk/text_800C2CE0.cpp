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
    virtual M2C_UNK m86();
    virtual void m87();
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

extern "C" {
f32 calc_boss4_scale__10TObjPlayerFi(void *);
s32 get_flag_b4__21TObjEneMe3ShinowaRealFPv();
void clear_attack_receipts(void *);
M2C_UNK TBoss8Dragon__sub_800BB7D4(void *, int);
M2C_UNK transition_enemy_state(void *, M2C_UNK);
M2C_UNK noop__9TObjEneDDFv(void *, s32);
M2C_UNK fn_800C3A60(void *, M2C_UNK);
M2C_UNK clear_child_flags__16TObjEneRe2FlowerFPv(void *);
M2C_UNK advance_animation_playback();
M2C_UNK play_effect_if_v2__10TObjPlayerFi(M2C_UNK);
M2C_UNK play_sound_effect(M2C_UNK, void *, M2C_UNK, M2C_UNK);
extern const f32 lbl_805D9FD0;
void TObjEneDD__sub_800C2CE0(u8 *arg0, s32 arg1);
}

extern "C" {

#define F(T, o) M2C_FIELD(arg0, T *, o)
void TObjEneDD__sub_800C2CE0(u8 *arg0, s32 arg1) {
    switch (arg1) {
    case 4:
        F(s16, 0xB8) = 4;
        ((VObj_18 *)(arg0))->m94();
        clear_child_flags__16TObjEneRe2FlowerFPv(arg0);
        F(s32, 0x3C4) &= ~8;
        TBoss8Dragon__sub_800BB7D4(arg0, 0xF2);
        play_sound_effect(fn_800C3A60(arg0, 0x4003AB13), arg0 + 0x38, 0, 0);
        play_effect_if_v2__10TObjPlayerFi(-0x200);
        break;
    case 3:
        if (get_flag_b4__21TObjEneMe3ShinowaRealFPv() != 0) {
            if (F(s32, 0x378) == 8) {
                transition_enemy_state(arg0, F(s32, 0x378));
            } else if (F(s16, 0x32C) < F(s16, 0x2B8) / 4) {
                transition_enemy_state(arg0, 8);
            } else if (calc_boss4_scale__10TObjPlayerFi(arg0) < lbl_805D9FD0) {
                transition_enemy_state(arg0, 6);
            } else {
                transition_enemy_state(arg0, F(s32, 0x378));
            }
        }
        break;
    case 0:
        advance_animation_playback();
        ((VObj_18 *)(arg0))->m100();
        ((VObj_18 *)(arg0))->m86();
        ((M2C_UNK (*)(void *))noop__9TObjEneDDFv)(arg0);
        break;
    case 5:
        F(s32, 0x30) &= ~0x200;
        F(s32, 0x3C4) &= ~2;
        clear_attack_receipts(arg0);
        break;
    }
}
#undef F

}
