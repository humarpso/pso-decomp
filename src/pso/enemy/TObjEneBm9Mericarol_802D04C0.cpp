#include "types.h"

#define CAT2(a,b) a##b
#define CAT(a,b) CAT2(a,b)
#define V8 virtual void CAT(f,__LINE__)(); virtual void CAT(g,__LINE__)(); \
    virtual void CAT(h,__LINE__)(); virtual void CAT(i,__LINE__)(); \
    virtual void CAT(j,__LINE__)(); virtual void CAT(k,__LINE__)(); \
    virtual void CAT(l,__LINE__)(); virtual void CAT(n,__LINE__)();
struct Base_A { char pad[0x18]; };
struct V_A : Base_A {
    V8
    V8
    V8
    V8
    V8
    V8
    V8
    V8
    V8
    V8
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void m86();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void m94();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void CAT(f,__LINE__)();
    virtual void m100();
};

extern "C" {

s32 update_linked_position__14TObjEneEpsilonFPv(void *, f32);
s32 enemy_clear_target(void *);
s32 set_field_378__9TObjEneDDFPvi(void *, s32, s32);
s32 transition_enemy_state(void *, s32);
s32 advance_animation_playback();
s32 try_set_mode8_if_flag2__19TObjEneBm9MericarolFPv();
s32 TObjEneBm9Mericarol__sub_802D093C(void *);
extern const f32 lbl_805DE73C;

void handle_event__19TObjEneBm9MericarolFPvi(void *arg0, s32 arg1) {
    s32 temp_r5;

    switch (arg1) {
    case 4:
        *(s16 *)((s8 *)arg0 + 0xB8) = 2;
        ((V_A *) arg0)->m94();
        TObjEneBm9Mericarol__sub_802D093C(arg0);
        temp_r5 = *(s32 *)((s8 *)arg0 + 0x438);
        *(s32 *)((s8 *)arg0 + 0x438) = (s32) (temp_r5 & ~0x28);
        set_field_378__9TObjEneDDFPvi(arg0, 2, temp_r5);
        enemy_clear_target(arg0);
        return;
    case 3:
        if ((try_set_mode8_if_flag2__19TObjEneBm9MericarolFPv() == 0) && (update_linked_position__14TObjEneEpsilonFPv(arg0, lbl_805DE73C) != 0)) {
            transition_enemy_state(arg0, 3);
        }
    case 5:
    case 1:
        return;
    case 0:
        advance_animation_playback();
        ((V_A *) arg0)->m100();
        ((V_A *) arg0)->m86();
        break;
    }
}

}
