#ifndef PSO_CLASS_PACKAGE
#include "types.h"

extern "C" {

void TObjEneBalClawClaw__sub_80091CCC(void);
void TObjEneBalClawClaw__sub_80091CD0(s32 arg0);
void play_hit_effect__18TObjEneBalClawClawFi(s32 arg0);
void play_claw_sound__18TObjEneBalClawClawFi(s32 arg0);
void spawn_claw_effect__18TObjEneBalClawClawFi(s32 arg0);
void play_claw_effect__18TObjEneBalClawClawFi(s32 arg0);
s32 TBoss3Volopt__sub_8022675C(s32, s32, s32, s32);
s32 play_effect_if_v2__10TObjPlayerFi(s32);

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
#else
#if PSO_CLASS_PACKAGE == 0x8008DC90
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjEneBalClawClaw__sub_8008DC90(void);
void check_claw_distance__18TObjEneBalClawClawFi(s32 arg0);
M2C_UNK update_if_active__15TObjEneMe1GiGueFPv(s32, M2C_UNK);
f32 fn_8013157C(s32, s32);

void TObjEneBalClawClaw__sub_8008DC90(void) {  }

extern f32 lbl_805D961C;

void check_claw_distance__18TObjEneBalClawClawFi(s32 arg0) {
    if (fn_8013157C(arg0 + 0x38, arg0 + 0x50) > lbl_805D961C) {
        update_if_active__15TObjEneMe1GiGueFPv(arg0, 8);
        return;
    }
    update_if_active__15TObjEneMe1GiGueFPv(arg0, 0);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80090824
#include "types.h"

extern "C" {

void TObjEneBalClawClaw__sub_80090824(void);
void TObjEneBalClawClaw__sub_80090828(void);
int reset_active_state__18TObjEneBalClawClawFPv(void* p);
int update_if_active__15TObjEneMe1GiGueFPv(void*, int);

void TObjEneBalClawClaw__sub_80090824(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80090828
#include "types.h"

extern "C" {

void TObjEneBalClawClaw__sub_80090828(void);
int reset_active_state__18TObjEneBalClawClawFPv(void* p);
void TObjEneBalClawClaw__sub_80090824(void);
int update_if_active__15TObjEneMe1GiGueFPv(void*, int);

void TObjEneBalClawClaw__sub_80090828(void) {  }
int reset_active_state__18TObjEneBalClawClawFPv(void* p) { return update_if_active__15TObjEneMe1GiGueFPv(p, 0); }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80090950
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void clear_flag__18TObjEneBalClawClawFPv(void *arg0);
M2C_UNK reset_active_state__18TObjEneBalClawClawFPv();

void clear_flag__18TObjEneBalClawClawFPv(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x388) = (s32) (M2C_FIELD(arg0, s32 *, 0x388) & 0xDFFFFFFF);
    reset_active_state__18TObjEneBalClawClawFPv();
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800909E8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 check_active__18TObjEneBalClawClawFPv(void *arg0);

s32 check_active__18TObjEneBalClawClawFPv(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x30) & 0xA00) {
        return 0;
    }
    return (u32) __cntlzw(M2C_FIELD(arg0, s32 *, 0x388) & 0x10000000) >> 5;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80090B7C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct VBaseA { char pad[0x18]; };
struct VA : VBaseA {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual void m8(); virtual M2C_UNK m9(f32, f32, f32);
};
struct VBaseB { char pad[0x14]; };
struct VB : VBaseB {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual void m6(); virtual void m7();
    virtual M2C_UNK m8();
};

extern "C" {

void render__18TObjEneBalClawClawFPv(u8 *arg0);
M2C_UNK TOHangerMachine01__sub_803D9C00(void *);
M2C_UNK TObjContainerIdo__sub_803D96A8(M2C_UNK, s32);
M2C_UNK TObjEneBalClaw__sub_8008D700(void *, M2C_UNK);
M2C_UNK TObjLight__sub_80134098();
M2C_UNK TObjLight__sub_80134194(void *);
M2C_UNK draw__16TObjEneRe7BeruraFPv(void *);
s32 check_demo_mode__10TObjPlayerFv();
M2C_UNK toggle_particle_effect__10TObjPlayerFv();
M2C_UNK render_world_model__10TObjPlayerFPv(void *);
M2C_UNK end_effect_render__13TParticleCtrlFv();
s32 toggle_flag_9__10TObjPlayerFPv(void *);
M2C_UNK TObjPlayer__sub_803D9214(M2C_UNK, s32);
M2C_UNK TObjPlayer__sub_803D9624(M2C_UNK, f32, f32, f32);
M2C_UNK TObjPlayer__sub_803D9B2C();
M2C_UNK TObjPlayer__sub_803D9B78();
M2C_UNK set_global_param__8TObjFishFi(s32);
M2C_UNK TObjFish__sub_803E46BC(s32);

extern s32 some_id_805c6f74;
extern const f32 TObjEneBalClawClaw__data_805D968C;
extern const f32 lbl_805D9698;
extern const f32 lbl_805D969C;
extern const f32 lbl_805D96A0;

void render__18TObjEneBalClawClawFPv(u8 *arg0) {
    M2C_UNK var_r30;
    s32 temp_r3;
    s32 var_r29;

    if (!(M2C_FIELD(arg0, s32 *, 0x30) & 0x02000000)) {
        temp_r3 = ((VA *)arg0)->m9(lbl_805D9698, lbl_805D969C, lbl_805D96A0);
        if (temp_r3 != 0) {
            var_r30 = 1;
            set_global_param__8TObjFishFi(M2C_FIELD(arg0, s32 *, 0x24));
            TObjLight__sub_80134194(arg0);
            toggle_particle_effect__10TObjPlayerFv();
            TObjPlayer__sub_803D9B2C();
            some_id_805c6f74 &= 0xFFFFFBFF;
            if (check_demo_mode__10TObjPlayerFv() == 1) {
                TOHangerMachine01__sub_803D9C00(arg0 + 0x38);
                TObjContainerIdo__sub_803D96A8(0, M2C_FIELD(arg0, s32 *, 0x5C));
                TObjPlayer__sub_803D9214(0, M2C_FIELD(arg0, s32 *, 0x60));
                TObjFish__sub_803E46BC(M2C_FIELD(arg0, s32 *, 0x34));
            } else {
                TObjPlayer__sub_803D9624(0, TObjEneBalClawClaw__data_805D968C, M2C_FIELD(arg0, f32 *, 0x3B4) + M2C_FIELD(arg0, f32 *, 0x3BC), TObjEneBalClawClaw__data_805D968C);
                TOHangerMachine01__sub_803D9C00(arg0 + 0x38);
                TObjContainerIdo__sub_803D96A8(0, M2C_FIELD(arg0, s32 *, 0x5C));
                TObjPlayer__sub_803D9214(0, M2C_FIELD(arg0, s32 *, 0x60));
                if (M2C_FIELD(arg0, s32 *, 0x388) & 4) {
                    if (((VB *)(arg0 + 0x390))->m8() != 0) {
                        ((VB *)(arg0 + 0x390))->m6();
                        var_r29 = 1;
                        if (toggle_flag_9__10TObjPlayerFPv(arg0) != 0) {
                            var_r29 = 0;
                        }
                        if (var_r29 != 0) {
                            if (temp_r3 == 1) {
                                draw__16TObjEneRe7BeruraFPv(arg0);
                            } else {
                                render_world_model__10TObjPlayerFPv(arg0);
                            }
                        }
                        ((VB *)(arg0 + 0x390))->m7();
                    } else {
                        var_r30 = 0;
                    }
                } else if (temp_r3 == 1) {
                    draw__16TObjEneRe7BeruraFPv(arg0);
                } else {
                    render_world_model__10TObjPlayerFPv(arg0);
                }
            }
            TObjPlayer__sub_803D9B78();
            TObjLight__sub_80134098();
            end_effect_render__13TParticleCtrlFv();
            TObjEneBalClaw__sub_8008D700(arg0, var_r30);
        }
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80090D3C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjEneBalClawClaw__sub_80090D3C(void *arg0);
M2C_UNK TObjPlayer__sub_80011734(void *, M2C_UNK, f32);
M2C_UNK TBoss1Dragon__sub_80143504(void *);

extern f32 TObjEneBalClawClaw__data_805D968C;

void TObjEneBalClawClaw__sub_80090D3C(void *arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x37C);
    switch (temp_r0) {
    case 0:
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) | 0x40000);
        M2C_FIELD(arg0, s16 *, 0xB8) = 0;
        M2C_FIELD(arg0, s32 *, 0x37C) = 1;
    case 1:
        TBoss1Dragon__sub_80143504(arg0);
        TObjPlayer__sub_80011734(arg0, 0, TObjEneBalClawClaw__data_805D968C);
        return;
    case -1:
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xFFFBFFFF);
        return;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80090DD0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void action__18TObjEneBalClawClawFPv(u8 *arg0);
M2C_UNK reset_active_state__18TObjEneBalClawClawFPv(void *, s32, s32);
M2C_UNK TObjPlayer__sub_80011734(void *, M2C_UNK, f32);
M2C_UNK TObjPlayer__sub_800A0554(void *);
M2C_UNK TBoss3Volopt__sub_800D8C48(void *, s32);
M2C_UNK TBoss1Dragon__sub_80143504(void *);

extern const f32 TObjEneBalClawClaw__data_805D968C;

struct En0Base { char pad[0x14]; };
struct En0VObj : En0Base {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual s32 m5();
};
void action__18TObjEneBalClawClawFPv(u8 *arg0) {
    s32 temp_r0;
    s32 temp_r4;
    s32 temp_r4_2;
    s32 temp_r5;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x37C);
    switch (temp_r0) {
    case 0:
        M2C_FIELD(arg0, s32 *, 0x388) = (s32) (M2C_FIELD(arg0, s32 *, 0x388) | 4);
        temp_r4 = M2C_FIELD(arg0, s32 *, 0x30) | 0x04000000;
        M2C_FIELD(arg0, s32 *, 0x30) = temp_r4;
        M2C_FIELD(arg0, s16 *, 0xB8) = 0;
        TBoss3Volopt__sub_800D8C48(arg0 + 0x38, temp_r4);
        TObjPlayer__sub_800A0554(arg0 + 0x390);
        M2C_FIELD(arg0, s32 *, 0x37C) = 1;
    case 1:
        TBoss1Dragon__sub_80143504(arg0);
        TObjPlayer__sub_80011734(arg0, 0, TObjEneBalClawClaw__data_805D968C);
        if (((En0VObj*)(arg0 + 0x390))->m5() == 1) {
            temp_r5 = M2C_FIELD(arg0, s32 *, 0x388);
            temp_r4_2 = temp_r5 & ~5;
            M2C_FIELD(arg0, s32 *, 0x388) = temp_r4_2;
            M2C_FIELD(arg0, s32 *, 0x37C) = -1;
            reset_active_state__18TObjEneBalClawClawFPv(arg0, temp_r4_2, temp_r5);
        }
        return;
    case -1:
        M2C_FIELD(arg0, s32 *, 0x388) = (s32) (M2C_FIELD(arg0, s32 *, 0x388) & ~5);
        M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg0, s32 *, 0x30) & 0xFBFFFFFF);
        break;
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x800914A4
#include "types.h"

extern "C" {

void TObjEneBalClawClaw__sub_800914A4(void);

void TObjEneBalClawClaw__sub_800914A4(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x800914A8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_attack_distance_state__18TObjEneBalClawClawFPv(u8 *arg0);
M2C_UNK clear_attack_flag__18TObjEneBalClawClawFPv(void *);
M2C_UNK reset_active_state__18TObjEneBalClawClawFPv(void *);
M2C_UNK set_attack_distance_flag__10TObjPlayerFPv(void *);
M2C_UNK find_target_in_range__10TObjPlayerFPvf(void *, f32);
f32 fn_8013157C(void *, void *);
M2C_UNK update_if_active__15TObjEneMe1GiGueFPv(void *, int);

extern const f32 lbl_805D969C;
extern const f32 lbl_805D96B8;
extern const f32 lbl_805D96BC;
extern const f32 lbl_805D96C0;
extern const f32 lbl_805D96C4;
extern const f32 lbl_805D96C8;

struct VObjBase_800914a8 { char pad_[0x18]; };
struct VObj_800914a8 : VObjBase_800914a8 {
    virtual M2C_UNK m00(); virtual M2C_UNK m01(); virtual M2C_UNK m02(); virtual M2C_UNK m03();
    virtual M2C_UNK m04(); virtual M2C_UNK m05(); virtual M2C_UNK m06(); virtual M2C_UNK m07();
    virtual M2C_UNK m08(); virtual M2C_UNK m09(); virtual M2C_UNK m10(); virtual M2C_UNK m11();
    virtual M2C_UNK m12(); virtual M2C_UNK m13(); virtual M2C_UNK m14(); virtual M2C_UNK m15();
    virtual M2C_UNK m16(); virtual M2C_UNK m17(M2C_UNK);
};

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

}
#endif
#if PSO_CLASS_PACKAGE == 0x800918E0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void * create__18TObjEneBalClawClawFPvPvPvPvPvPv(void *arg0, void *arg1, void *arg2, void *arg3, void *arg4, void *arg5);
void * create__18TObjEneBalClawClawFPv(void *arg0);
void *deleting_dtor__18TObjEneBalClawClawFPvs(void *arg0, s16 arg1);
void *TObjControl__ct(void *, void *);
void __dl__7TObjectFPv(void *);
void __dt__14TObjEneBalClawFv(void *, int);
void *__nw__7TObjectFUl(int);
void *TObjEneBalClawClaw__sub_80091B98(void *, void *, void *, void *, void *, void *, void *, void *);
void *TObjEneBalClawClaw__sub_80091C58(void *, void *, void *);
void TObjEneGibbles__sub_80156720(void *);

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

}
#endif
#endif
