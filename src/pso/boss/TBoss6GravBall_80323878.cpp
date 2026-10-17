#include "types.h"
#include "pso/boss/TBoss6GravBall_80323878.h"
#include "pso/object/TObject_80019A50.h"
#include "pso/unk/text_80087278.h"
#include "pso/object/TObjMotion.h"
#include "pso/player/TObjPlayer.h"

struct Obj_80323D20 {
    s32 f0; u8 pad[0xAC - 4]; s32 fAC; s32 fB0; s32 fB4; u8 padB8[4]; f32 fBC; s32 fC0; s32 fC4; f32 pos[3];
};

class TBoss6GravBall_80323BBC {
public:
    u8 pad[0xB0];
    s32 state;
    u8 pad2[0xC];
    s32 counter;
    void s0(); void s1(); void s2();
};
typedef void (TBoss6GravBall_80323BBC::*Act_80323BBC)();
class TBoss6GravBall {
public:
    void update_state(void *);
    void update_charge_effects(void *);
    void update_lifetime(void *);
};
typedef void (TBoss6GravBall::*ActP_80323BBC)(void *);
typedef void (TBoss6GravBall::*Act0_80323BBC)();

extern "C" {
s32 check_demo_mode__10TObjPlayerFv(void *);
s32 query_teammate_state__9TObjEneDDFv(void);
void VecCopy__FP3VecPC3Vec(void *, void *);
s32 create_emitter__14TBoss6GravBallFl(void *, int);
void TBoss6GravBall__sub_80323320(void *);
extern s32 lbl_8047667C[];
extern s32 __vt__14TBoss6GravBall[];
extern s32 TBoss6GravBall__name;
extern const f32 TBoss6GravBall__data_805DF550;
Obj_80323D20 *TBoss6GravBall__ct(Obj_80323D20 *arg0, s32 arg1, void *arg2);
s32 play_persistent_sound(int, void *, void *, int, int);
s32 play_sound_effect(int, void *, int, int);
s32 get_state__14TBoss6GravBallFv(int);
s32 fn_80323134(void *);
s32 destroy_part__14TBoss6GravBallFl(void *, int);
s32 TBoss6GravBall__sub_80323214(void *, int);
void TBoss6GravBall__sub_80323544(u8 *self);
s32 TBoss6GravBall__sub_803236F8(void *);
s32 clamp_to_ground__14TBoss6GravBallFv();
extern const f32 lbl_805DF568;
extern const f32 lbl_805DF578;
void clear_player_grav_flags__14TBoss6GravBallFv(void *);
s32 TBoss6GravBall__sub_803233AC();
void __dl__7TObjectFPv(void *);
void init_parts__14TBoss6GravBallFv(void *);

void update_charge_effects__14TBoss6GravBallFPv(u8 *arg0) {
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r0_3;
    s32 temp_r3;

    TBoss6GravBall__sub_803233AC();
    play_persistent_sound(0x4003C418, arg0, (void *) (arg0 + 0xC8), 0, 0);
    temp_r0 = *(s32 *)((s8 *)arg0 + 0xB8);
    if (temp_r0 >= 0x96) {
        if (temp_r0 == 0x96) {
            create_emitter__14TBoss6GravBallFl(arg0, 3);
        }
    } else if (temp_r0 > 0x4B) {
        temp_r0_2 = temp_r0 & 0xF;
        if (temp_r0_2 == 0) {
            create_emitter__14TBoss6GravBallFl(arg0, 3);
        } else if (temp_r0_2 == 0xE) {
            destroy_part__14TBoss6GravBallFl(arg0, 3);
        }
    } else {
        temp_r0_3 = temp_r0 & 0xF;
        if (temp_r0_3 == 0) {
            create_emitter__14TBoss6GravBallFl(arg0, 3);
        } else if (temp_r0_3 == 0xA) {
            destroy_part__14TBoss6GravBallFl(arg0, 3);
        }
    }
    *(s32 *)((s8 *)arg0 + 0xB8) = (s32) (*(s32 *)((s8 *)arg0 + 0xB8) + 1);
    *(s32 *)((s8 *)arg0 + 0xB4) = (s32) (*(s32 *)((s8 *)arg0 + 0xB4) + 1);
    temp_r3 = get_state__14TBoss6GravBallFv((int) (*(s32 *)((s8 *)arg0 + 0xAC)));
    switch (temp_r3) {
    case 29:
    case 30:
    case 39:
        return;
    case 31:
        if ((s32) *(s32 *)((s8 *)arg0 + 0xC4) == 0) {
            spawn_particle_effect((arg0 + 0xC8), 0x21C);
            spawn_particle_effect((arg0 + 0xC8), 0x21D);
            *(s32 *)((s8 *)arg0 + 0xC4) = 1;
        }
        destroy_part__14TBoss6GravBallFl(arg0, 5);
        destroy_part__14TBoss6GravBallFl(arg0, 6);
        destroy_part__14TBoss6GravBallFl(arg0, 7);
        destroy_part__14TBoss6GravBallFl(arg0, 8);
        return;
    case 32:
        destroy_part__14TBoss6GravBallFl(arg0, 4);
        destroy_part__14TBoss6GravBallFl(arg0, 3);
        destroy_part__14TBoss6GravBallFl(arg0, 5);
        destroy_part__14TBoss6GravBallFl(arg0, 6);
        destroy_part__14TBoss6GravBallFl(arg0, 7);
        destroy_part__14TBoss6GravBallFl(arg0, 8);
        *(s32 *)((s8 *)arg0 + 0xB4) = 0;
        clear_player_grav_flags__14TBoss6GravBallFv((void *)(arg0));
        *(s32 *)((s8 *)arg0 + 0xB0) = 2;
        play_sound_effect(0x4003C417, (void *) (arg0 + 0xC8), 0, 0);
        return;
    default:
        queue_destruction__7TObjectFv((arg0));
        return;
    }
}

void update_state__14TBoss6GravBallFPv(u8 *arg0) {
    f32 temp_f2;
    s32 temp_r3;
    s32 temp_r3_2;
    temp_r3 = clamp_to_ground__14TBoss6GravBallFv();
    if (temp_r3 != 0) {
        TBoss6GravBall__sub_803236F8(arg0);
    }
    fn_80323134(arg0);
    if (temp_r3 != 0) {
        create_emitter__14TBoss6GravBallFl(arg0, 2);
        temp_f2 = *(f32 *)((s8 *)arg0 + 0xBC);
        if (temp_f2 < lbl_805DF568) {
            *(f32 *)((s8 *)arg0 + 0xBC) = (f32) (temp_f2 + lbl_805DF578);
            if (*(f32 *)((s8 *)arg0 + 0xBC) > lbl_805DF568) {
                *(f32 *)((s8 *)arg0 + 0xBC) = (f32) lbl_805DF568;
            }
        }
        TBoss6GravBall__sub_80323544((arg0));
        play_persistent_sound(0x4003B51A, arg0, (void *) (arg0 + 0xC8), 0, 0);
        switch (get_state__14TBoss6GravBallFv((int) (*(s32 *)((s8 *)arg0 + 0xAC)))) {
        case 0x27:
            return;
        case 0x1D:
            break;
        case 0x1E:
        case 0x1F:
            destroy_part__14TBoss6GravBallFl(arg0, 0);
            destroy_part__14TBoss6GravBallFl(arg0, 1);
            destroy_part__14TBoss6GravBallFl(arg0, 2);
            TBoss6GravBall__sub_80323214(arg0, 4);
            *(s32 *)((s8 *)arg0 + 0xB8) = 0;
            *(s32 *)((s8 *)arg0 + 0xB4) = 0;
            *(s32 *)((s8 *)arg0 + 0xB0) = 1;
            play_sound_effect(0x4003B516, (void *) (arg0 + 0xC8), 0, 0);
            break;
        case 0x20:
        default:
            queue_destruction__7TObjectFv((arg0));
            break;
        }
    }
}

void run_task__14TBoss6GravBallFv(TBoss6GravBall_80323BBC *arg0) {
    if (check_demo_mode__10TObjPlayerFv(arg0) != 0) {
        return;
    }
    if (query_teammate_state__9TObjEneDDFv() != 0) {
        return;
    }
    static ActP_80323BBC tbl[3] = {
        &TBoss6GravBall::update_state, &TBoss6GravBall::update_charge_effects, &TBoss6GravBall::update_lifetime,
    };
    Act0_80323BBC a = (Act0_80323BBC)tbl[arg0->state];
    if (a) {
        (((TBoss6GravBall *)arg0)->*a)();
    }
    arg0->counter++;
}

void *__dt__14TBoss6GravBallFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        *(s32 **)((s8 *)arg0 + 0x18) = __vt__14TBoss6GravBall;
        init_parts__14TBoss6GravBallFv(arg0);
        clear_player_grav_flags__14TBoss6GravBallFv(arg0);
        ((TUnk_804AF8A0 *)arg0)->destroy_particle_controller(0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
Obj_80323D20 *TBoss6GravBall__ct(Obj_80323D20 *arg0, s32 arg1, void *arg2) {
    s32 i;
    ((TUnk_804AF8A0 *)arg0)->construct_collider_proxy();
    ((u8 **)arg0)[0x18 / 4] = ((u8 *)&__vt__14TBoss6GravBall);
    arg0->f0 = TBoss6GravBall__name;
    arg0->fAC = arg1;
    VecCopy__FP3VecPC3Vec(arg0->pos, arg2);
    arg0->fB4 = 0;
    arg0->fB0 = 0;
    arg0->fBC = TBoss6GravBall__data_805DF550;
    arg0->fC0 = 0;
    arg0->fC4 = 0;
    TBoss6GravBall__sub_80323320(arg0);
    for (i = 0; i < 2; i++) {
        create_emitter__14TBoss6GravBallFl(arg0, lbl_8047667C[i]);
    }
    return arg0;
}

}
