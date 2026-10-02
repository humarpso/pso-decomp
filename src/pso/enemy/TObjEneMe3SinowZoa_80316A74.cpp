#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct VBase_14_c5778e { char pad[0x14]; };

struct VObj_14_c5778e : VBase_14_c5778e {
    virtual void m0();
    virtual M2C_UNK m1(M2C_UNK);
    virtual void m2();
    virtual void m3();
    virtual s32 m4();
};

struct VBase_18_8bca97 { char pad[0x18]; };

struct VObj_18_8bca97 : VBase_18_8bca97 {
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

struct VBase_14_0b0741 { char pad[0x14]; };

struct VObj_14_0b0741 : VBase_14_0b0741 {
    virtual void m0();
    virtual M2C_UNK m1(M2C_UNK);
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual s32 m5();
};

extern "C" {
int get_flag_b4__21TObjEneMe3ShinowaRealFPv(void *);
void set_field_378__9TObjEneDDFPvi(void *, s32);
void transition_enemy_state(void *, s16);
void advance_animation_playback(void *);
void set_indexed_flags(void *, s32, s32);
s32 play_sound_effect(s32, u32, s16, s32);
void TObjEneMe3SinowZoa__sub_80317254(u8 *arg0, s32 arg1);
int get_flag_b4__21TObjEneMe3ShinowaRealFPv(void *);
void set_field_378__9TObjEneDDFPvi(void *, s32);
void transition_enemy_state(void *, s16);
void advance_animation_playback(void *);
void clear_player_status_flag__10TObjPlayerFPviUi(void *, s32, u32);
void TObjEneMe3SinowZoa__sub_803170F0(u8 *arg0, s32 arg1);
}

extern "C" {

void TObjEneMe3SinowZoa__sub_803170F0(u8 *arg0, s32 arg1) {
    switch (arg1) {
    case 4:
        M2C_FIELD(arg0, s16 *, 0xB8) = 0xB;
        set_field_378__9TObjEneDDFPvi(arg0, 6);
        ((VObj_18_8bca97 *)(arg0))->m94();
        M2C_FIELD(arg0, s32 *, 0x3CC) = (s32) (M2C_FIELD(arg0, s32 *, 0x3CC) & 0xFFEFFFFD);
        M2C_FIELD(arg0, s32 *, 0x3CC) = (s32) (M2C_FIELD(arg0, s32 *, 0x3CC) | 5);
        ((VObj_14_0b0741 *)((u8 *)(arg0) + (1044)))->m1(0x1E);
        M2C_FIELD(arg0, s32 *, 0x3C0) = 0;
        M2C_FIELD(arg0, s32 *, 0x3CC) = (s32) (M2C_FIELD(arg0, s32 *, 0x3CC) | 0x40000);
        clear_player_status_flag__10TObjPlayerFPviUi(arg0, 0, 0x08000000U);
        M2C_FIELD(arg0, s32 *, 0x434) = 0;
        break;
    case 3:
        if (((s32) M2C_FIELD(arg0, s32 *, 0x434) == 1) && (((VObj_14_0b0741 *)((u8 *)(arg0) + (1044)))->m5() != 0)) {
            transition_enemy_state(arg0, 6);
            M2C_FIELD(arg0, s32 *, 0x3CC) = (s32) (M2C_FIELD(arg0, s32 *, 0x3CC) & ~5);
            break;
        }
    case 5:
        break;
    case 0:
        advance_animation_playback(arg0);
        if (get_flag_b4__21TObjEneMe3ShinowaRealFPv(arg0) != 0) {
            M2C_FIELD(arg0, s32 *, 0x434) = 1;
        }
        ((VObj_18_8bca97 *)(arg0))->m100();
        ((VObj_18_8bca97 *)(arg0))->m87();
        break;
    }
}

void TObjEneMe3SinowZoa__sub_80317254(u8 *arg0, s32 arg1) {
    switch (arg1) {
    case 4:
        M2C_FIELD(arg0, s16 *, 0xB8) = 0xC;
        set_field_378__9TObjEneDDFPvi(arg0, 6);
        ((VObj_18_8bca97 *)(arg0))->m94();
        M2C_FIELD(arg0, s32 *, 0x3CC) = (s32) (M2C_FIELD(arg0, s32 *, 0x3CC) & 0xFFEFFFFD);
        M2C_FIELD(arg0, s32 *, 0x3CC) = (s32) (M2C_FIELD(arg0, s32 *, 0x3CC) | 5);
        ((VObj_14_c5778e *)((u8 *)(arg0) + (1044)))->m1(0x1E);
        play_sound_effect(0x4003AD2F, (u32) ((u8 *)(arg0) + 0x38), 0, 0);
        M2C_FIELD(arg0, s32 *, 0x434) = 0;
        break;
    case 3:
        if (((s32) M2C_FIELD(arg0, s32 *, 0x434) == 1) && (((VObj_14_c5778e *)((u8 *)(arg0) + (1044)))->m4() != 0)) {
            M2C_FIELD(arg0, s32 *, 0x3C0) = 1;
            transition_enemy_state(arg0, 6);
            M2C_FIELD(arg0, s32 *, 0x3CC) = (s32) (M2C_FIELD(arg0, s32 *, 0x3CC) & ~5);
            M2C_FIELD(arg0, s32 *, 0x3CC) = (s32) (M2C_FIELD(arg0, s32 *, 0x3CC) | 0x40000);
            set_indexed_flags(arg0, 0, 0x08000000);
            break;
        }
    case 5:
        break;
    case 0:
        advance_animation_playback(arg0);
        if (get_flag_b4__21TObjEneMe3ShinowaRealFPv(arg0) != 0) {
            M2C_FIELD(arg0, s32 *, 0x434) = 1;
        }
        ((VObj_18_8bca97 *)(arg0))->m100();
        ((VObj_18_8bca97 *)(arg0))->m87();
        break;
    }
}

}
