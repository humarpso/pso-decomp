#include "types.h"
#include "pso/boss/TBoss8Dragon.h"
#include "pso/enemy/TObjEneEpsilonGuard.h"
#include "pso/player/TObjPlayer.h"

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
    virtual s32 m98();
    virtual void m99();
    virtual void m100();
    virtual void m101();
    virtual void m102();
    virtual s32 m103();
};
extern "C" {
s32 transition_enemy_state(void *, int);
s32 play_persistent_sound(int, void *, void *, int, int);
void fn_80362164(u8 *arg0);
}

extern "C" {

void fn_80362164(u8 *arg0) {
    if (TObjPlayer::check_demo_mode() != 0) {
        ((VObj_18 *)(arg0))->m103();
        return;
    }
    if (((VObj_18 *)(arg0))->m81() != 4) {
        ((TObjEneEpsilonGuard *)arg0)->update_guard_flag();
        ((VObj_18 *)(arg0))->m83();
    } else if ((s16) *(s16 *)((s8 *)arg0 + 0x326) == 1) {
        transition_enemy_state((void *) (arg0), (int) (0));
    }
    if ((s16) *(s16 *)((s8 *)arg0 + 0x326) != 9) {
        play_persistent_sound((int) (0x4003AD43), (void *) (arg0), (void *) (arg0 + 0x38), (int) (0), (int) (0));
    }
    ((VObj_18 *)(arg0))->m86();
    ((TObjEneEpsilonGuard *)arg0)->update_position();
    ((TBoss8Dragon *)arg0)->set_player_state_default();
    ((VObj_18 *)(arg0))->m98();
}

}
