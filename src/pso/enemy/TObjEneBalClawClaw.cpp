#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

struct VObjBase_800914a8 { char pad_[0x18]; };
struct VObj_800914a8 : VObjBase_800914a8 {
    virtual M2C_UNK m00(); virtual M2C_UNK m01(); virtual M2C_UNK m02(); virtual M2C_UNK m03();
    virtual M2C_UNK m04(); virtual M2C_UNK m05(); virtual M2C_UNK m06(); virtual M2C_UNK m07();
    virtual M2C_UNK m08(); virtual M2C_UNK m09(); virtual M2C_UNK m10(); virtual M2C_UNK m11();
    virtual M2C_UNK m12(); virtual M2C_UNK m13(); virtual M2C_UNK m14(); virtual M2C_UNK m15();
    virtual M2C_UNK m16(); virtual M2C_UNK m17(M2C_UNK);
};

void TObjEneBalClawClaw__sub_80091CCC(void);
void TObjEneBalClawClaw__sub_80091CD0(s32 arg0);
void * create__18TObjEneBalClawClawFPv(void *arg0);
void * create__18TObjEneBalClawClawFPvPvPvPvPvPv(void *arg0, void *arg1, void *arg2, void *arg3, void *arg4, void *arg5);
void *deleting_dtor__18TObjEneBalClawClawFPvs(void *arg0, s16 arg1);
void play_claw_effect__18TObjEneBalClawClawFi(s32 arg0);
void play_claw_sound__18TObjEneBalClawClawFi(s32 arg0);
void play_hit_effect__18TObjEneBalClawClawFi(s32 arg0);
void spawn_claw_effect__18TObjEneBalClawClawFi(s32 arg0);
void update_attack_distance_state__18TObjEneBalClawClawFPv(u8 *arg0);
s32 TBoss3Volopt__sub_8022675C(s32, s32, s32, s32);
void *TObjControl__ct(void *, void *);
void *TObjEneBalClawClaw__sub_80091B98(void *, void *, void *, void *, void *, void *, void *, void *);
void *TObjEneBalClawClaw__sub_80091C58(void *, void *, void *);
void TObjEneGibbles__sub_80156720(void *);
void __dl__7TObjectFPv(void *);
void __dt__14TObjEneBalClawFv(void *, int);
void *__nw__7TObjectFUl(int);
M2C_UNK clear_attack_flag__18TObjEneBalClawClawFPv(void *);
M2C_UNK find_target_in_range__10TObjPlayerFPvf(void *, f32);
f32 fn_8013157C(void *, void *);
s32 play_effect_if_v2__10TObjPlayerFi(s32);
M2C_UNK reset_active_state__18TObjEneBalClawClawFPv(void *);
M2C_UNK set_attack_distance_flag__10TObjPlayerFPv(void *);
M2C_UNK update_if_active__15TObjEneMe1GiGueFPv(void *, int);

extern const f32 lbl_805D969C;
extern const f32 lbl_805D96B8;
extern const f32 lbl_805D96BC;
extern const f32 lbl_805D96C0;
extern const f32 lbl_805D96C4;
extern const f32 lbl_805D96C8;

void update_attack_distance_state__18TObjEneBalClawClawFPv(u8 *arg0) {
    f32 temp_f1;
    s16 temp_r0;
    s32 temp_r0_2;
    s32 temp_r31;
    u32 temp_r3;

    if (((VObj_800914a8 *) arg0)->m17(0x1E) != 0) {
        find_target_in_range__10TObjPlayerFPvf((void *) (arg0), (f32) (lbl_805D96B8));
    }
    temp_r0 = M2C_FIELD(arg0, s16 *, 0x326);
    switch (temp_r0) {
    case 8:
    case 0:
        if (((VObj_800914a8 *) arg0)->m17(0x1E) != 0) {
            if ((u32) M2C_FIELD(arg0, u32 *, 0x2A8) != 0U) {
                update_if_active__15TObjEneMe1GiGueFPv((void *) (arg0), (int) (1));
                M2C_FIELD(arg0, s32 *, 0x38C) = 2;
                return;
            }
            if (fn_8013157C((void *) (arg0 + 0x38), (void *) (arg0 + 0x50)) > lbl_805D96BC) {
                update_if_active__15TObjEneMe1GiGueFPv((void *) (arg0), (int) (8));
                return;
            }
            reset_active_state__18TObjEneBalClawClawFPv((void *) (arg0));
        }
        return;
    case 1:
        temp_r3 = M2C_FIELD(arg0, u32 *, 0x2A8);
        if (temp_r3 != 0U) {
            temp_f1 = fn_8013157C((void *) (temp_r3 + 0x38), (void *) (arg0 + 0x38));
            temp_r31 = M2C_FIELD(arg0, s32 *, 0x38C);
            switch (temp_r31) {
            case 0:
                if (temp_f1 > lbl_805D96C0) {
                    M2C_FIELD(arg0, s32 *, 0x38C) = 1;
                }
                break;
            case 1:
                if (temp_f1 < lbl_805D969C) {
                    clear_attack_flag__18TObjEneBalClawClawFPv((void *) (arg0));
                    M2C_FIELD(arg0, s32 *, 0x38C) = 0;
                } else if (temp_f1 > lbl_805D96C4) {
                    M2C_FIELD(arg0, s32 *, 0x38C) = 2;
                }
                break;
            case 2:
                if (temp_f1 < lbl_805D96C8) {
                    set_attack_distance_flag__10TObjPlayerFPv((void *) (arg0));
                    M2C_FIELD(arg0, s32 *, 0x38C) = 1;
                }
                break;
            }
            temp_r0_2 = M2C_FIELD(arg0, s32 *, 0x38C);
            if (temp_r31 != temp_r0_2) {
                switch (temp_r0_2) {
                case 0:
                    update_if_active__15TObjEneMe1GiGueFPv((void *) (arg0), (int) (2));
                    return;
                case 1:
                    clear_attack_flag__18TObjEneBalClawClawFPv((void *) (arg0));
                    return;
                case 2:
                    set_attack_distance_flag__10TObjPlayerFPv((void *) (arg0));
                    return;
                }
            }
        } else {
            update_if_active__15TObjEneMe1GiGueFPv((void *) (arg0), (int) (8));
        }
        break;
    }
}

extern void *tl_04;

void * create__18TObjEneBalClawClawFPvPvPvPvPvPv(void *arg0, void *arg1, void *arg2, void *arg3, void *arg4, void *arg5) {
    void *o;
    void *o2;
    o = __nw__7TObjectFUl(0x20);
    if (o != NULL) {
        o = TObjControl__ct(o, tl_04);
    }
    o2 = __nw__7TObjectFUl(0x428);
    if (o2 != NULL) {
        o2 = TObjEneBalClawClaw__sub_80091B98(o2, o, arg0, arg1, arg2, arg3, arg4, arg5);
    }
    return o2;
}

extern void *tl_04;

void * create__18TObjEneBalClawClawFPv(void *arg0) {
    void *o;
    void *o2;
    o = __nw__7TObjectFUl(0x20);
    if (o != NULL) {
        o = TObjControl__ct(o, tl_04);
    }
    o2 = __nw__7TObjectFUl(0x428);
    if (o2 != NULL) {
        o2 = TObjEneBalClawClaw__sub_80091C58(o2, o, arg0);
    }
    return o2;
}

extern M2C_UNK lbl_8048F148[];

void *deleting_dtor__18TObjEneBalClawClawFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_8048F148;
        TObjEneGibbles__sub_80156720(arg0);
        __dt__14TObjEneBalClawFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

void TObjEneBalClawClaw__sub_80091CCC(void) {  }
void TObjEneBalClawClaw__sub_80091CD0(s32 arg0) {
    TBoss3Volopt__sub_8022675C(0x4003E431, arg0 + 0x38, 0, 0);
}
void play_hit_effect__18TObjEneBalClawClawFi(s32 arg0) {
    TBoss3Volopt__sub_8022675C(0x4003AB2D, arg0 + 0x38, 0, 0);
    play_effect_if_v2__10TObjPlayerFi(-0x200);
}
void play_claw_sound__18TObjEneBalClawClawFi(s32 arg0) {
    TBoss3Volopt__sub_8022675C(0x4003A32E, arg0 + 0x38, 0, 0);
    play_effect_if_v2__10TObjPlayerFi(-0x100);
}
void spawn_claw_effect__18TObjEneBalClawClawFi(s32 arg0) {
    TBoss3Volopt__sub_8022675C(0x4003A62F, arg0 + 0x38, 0, 0);
    play_effect_if_v2__10TObjPlayerFi(-0x100);
}
void play_claw_effect__18TObjEneBalClawClawFi(s32 arg0) {
    TBoss3Volopt__sub_8022675C(0x4003A82C, arg0 + 0x38, 0, 0);
    play_effect_if_v2__10TObjPlayerFi(-0x200);
}

}
