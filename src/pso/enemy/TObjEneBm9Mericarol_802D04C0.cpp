#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

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
M2C_UNK fn_800B98C0(void *);
M2C_UNK set_field_378__9TObjEneDDFPvi(void *, M2C_UNK, s32);
M2C_UNK transition_enemy_state(void *, M2C_UNK);
M2C_UNK advance_animation_playback();
s32 try_set_mode8_if_flag2__19TObjEneBm9MericarolFPv();
M2C_UNK TObjEneBm9Mericarol__sub_802D093C(void *);
extern const f32 lbl_805DE73C;

void handle_event__19TObjEneBm9MericarolFPvi(void *arg0, s32 arg1) {
    s32 temp_r5;

    switch (arg1) {
    case 4:
        M2C_FIELD(arg0, s16 *, 0xB8) = 2;
        ((V_A *) arg0)->m94();
        TObjEneBm9Mericarol__sub_802D093C(arg0);
        temp_r5 = M2C_FIELD(arg0, s32 *, 0x438);
        M2C_FIELD(arg0, s32 *, 0x438) = (s32) (temp_r5 & ~0x28);
        set_field_378__9TObjEneDDFPvi(arg0, 2, temp_r5);
        fn_800B98C0(arg0);
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
