#include "types.h"

#define CAT2(a, b) a##b
#define CAT(a, b) CAT2(a, b)
#define PADV virtual void CAT(pv, __LINE__)();
#define PADV4 virtual void CAT(pa, __LINE__)(); virtual void CAT(pb, __LINE__)(); virtual void CAT(pc, __LINE__)(); virtual void CAT(pd, __LINE__)();
struct Base_En_800c38d0 { char pad[0x18]; };
struct V_En_800c38d0 : Base_En_800c38d0 {
    PADV4
    PADV4
    PADV4
    PADV4
    PADV4
    PADV4
    PADV4
    PADV4
    PADV4
    PADV4
    PADV4
    PADV4
    PADV4
    PADV4
    PADV4
    PADV4
    PADV4
    PADV4
    PADV4
    PADV4
    PADV4
    PADV
    PADV
    virtual void m86();
    PADV
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
struct Base_Sub_800c38d0 { char pad[0x14]; };
struct V_Sub_800c38d0 : Base_Sub_800c38d0 {
    PADV4
    PADV
    virtual s32 m5();
};
struct Base_800C3A00_800C38D0 { char pad[0x18]; };
struct VObj_800C3A00_800C38D0 : Base_800C3A00_800C38D0 {
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
};

extern "C" {

void dispatch_action__9TObjEneDDFPvi(void *arg0, s32 arg1);
void handle_state__9TObjEneDDFPvi(u8 *arg0, s32 arg1);
void noop__9TObjEneDDFv(void);
s32 advance_animation_playback();
s32 play_area_se_with_particle__12TBoss3VoloptFi(void *);
s32 play_area_sound_effect__12TBoss3VoloptFi(void *);
s32 transition_enemy_state(void *, s32);
s32 TObjEneMe3SinowZoa__sub_800D758C(void *);
s32 clear_child_flags__16TObjEneRe2FlowerFPv(void *);
s32 enemy_clear_target(void *);
s32 get_flag_11__16TObjEneRe2FlowerFPv(void *);
s32 set_field_378__9TObjEneDDFPvi(void *, s32);

void handle_state__9TObjEneDDFPvi(u8 *arg0, s32 arg1) {
    switch (arg1) {
    case 4:
        *(s16 *)((s8 *)arg0 + 0xB8) = 1;
        ((V_En_800c38d0 *) arg0)->m93();
        clear_child_flags__16TObjEneRe2FlowerFPv(arg0);
        *(s32 *)((s8 *)arg0 + 0x3C4) = (s32) (*(s32 *)((s8 *)arg0 + 0x3C4) | 8);
        set_field_378__9TObjEneDDFPvi(arg0, 2);
        enemy_clear_target(arg0);
        TObjEneMe3SinowZoa__sub_800D758C(arg0 + 0x3F4);
        if (get_flag_11__16TObjEneRe2FlowerFPv(arg0) != 0) {
            play_area_se_with_particle__12TBoss3VoloptFi(arg0 + 0x38);
            return;
        }
        play_area_sound_effect__12TBoss3VoloptFi(arg0 + 0x38);
        return;
    case 3:
        if (((V_Sub_800c38d0 *) (arg0 + 0x3F4))->m5() != 0) {
            transition_enemy_state((void *)(arg0), (s32)(2));
        }
    case 1:
        return;
    case 0:
        advance_animation_playback();
        ((V_En_800c38d0 *) arg0)->m100();
        ((V_En_800c38d0 *) arg0)->m86();
        return;
    case 5:
        *(s32 *)((s8 *)arg0 + 0x3C4) = (s32) (*(s32 *)((s8 *)arg0 + 0x3C4) & 0xFFFFFFF7);
        break;
    }
}

void dispatch_action__9TObjEneDDFPvi(void *arg0, s32 arg1) {
    switch (arg1) {
    case 4:
        ((VObj_800C3A00_800C38D0 *)arg0)->m93();
        return;
    case 3:
        transition_enemy_state((void *)(arg0), (s32)(1));
    case 5:
    case 0:
        return;
    }
}

void noop__9TObjEneDDFv(void) {  }

}
