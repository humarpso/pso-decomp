#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

#include <stddef.h>
struct Stack_80091E08 {
    f32 sp8;
    f32 spC;
    f32 sp10;
};

struct RecoveredGlobal_80091E08_lbl_8058D490 { M2C_UNK value; u8 remaining[0x2C]; };
typedef char RecoveredGlobal_80091E08_lbl_8058D490_size[sizeof(RecoveredGlobal_80091E08_lbl_8058D490) == 0x30 ? 1 : -1];

struct RecoveredGlobal_80091B98_lbl_8048F148 { M2C_UNK value; u8 remaining[0x148]; };

struct VBase_18_f05d67 { char pad[0x18]; };

struct VObj_18_f05d67 : VBase_18_f05d67 {
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
    virtual M2C_UNK m79(void *);
};

struct RecoveredGlobal_80091C58_lbl_8048F148 {
    M2C_UNK value;
    u8 remaining[0x148];
};

struct Vec_80091EA4 { f32 x, y, z; };

struct VBase_80091EA4 { char pad[0x18]; };

struct VObj_80091EA4 : VBase_80091EA4 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4(Vec_80091EA4 *, Vec_80091EA4 *);
};

struct Obj_80091EA4 {
    u8 pad0[0x38];
    Vec_80091EA4 pos;
    u8 pad44[0x60 - 0x44];
    s32 angle;
    u8 pad64[0xB8 - 0x64];
    s16 state;
    u8 padBA[0xC0 - 0xBA];
    f32 frame;
    u8 padC4[0x3A8 - 0xC4];
    VObj_80091EA4 *effects[2];
};

extern "C" {
void set_param__12TObjEneLappyFPvi(void *, s32);
void select_subtype__12TObjEneBeastFPv(u8 *arg0);
s32 spawn_effect_at_ground__10TObjPlayerFPvi(void *, int);
s32 spawn_dead_spot_type2__10TObjPlayerFii(void *, int);
f32 TBoss4Zako__sub_803D8910(void *, void *);
s32 rotate_vector_by_matrix(int, void *, void *);
s32 rotate_matrix_y(int, int);
s32 push_matrix_from(void *);
s32 pop_matrix();
extern RecoveredGlobal_80091E08_lbl_8058D490 lbl_8058D490;
extern const f32 lbl_805D96D8;
extern const f32 lbl_805D96DC;
extern const f32 lbl_805D96E0;
void TObjPlayer__sub_80091E08(u8 *arg0);
u8 * TObjEneBalClaw__ct(void *);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
M2C_UNK TObjEneBalClawClaw__sub_80090798(void *);
M2C_UNK TObjEneBalClawClaw__ct(void *);
extern M2C_UNK lbl_8048F148[];
u8 *TObjEneBalClawClaw__sub_80091B98(u8 *arg0, M2C_UNK arg1, u8 *arg2, s32 arg3, s32 arg4, u8 *arg5, s32 arg6, s32 _w7);
u8 * TObjEneBalClaw__ct(void *);
M2C_UNK TObjEneBalClawClaw__ct(void *);
s32 TObjEnemyCustom__sub_800C7860(void *);
extern M2C_UNK lbl_8048F148[];
u8 *TObjEneBalClawClaw__sub_80091C58(u8 *arg0, M2C_UNK arg1, u8 *arg2);
s32 TObjEneBalClawClaw__sub_80090504(void *);
s32 TObjEneBalClawClaw__sub_8009060C(void *);
s32 TObjEneBalClawClaw__sub_800906C8(void *);
s32 TObjEneBalClawClaw__sub_80090850(void *);
s32 TObjEneBalClawClaw__sub_80090A70(void *);
s32 TObjEneBalClawClaw__sub_80090D3C(void *);
s32 action__18TObjEneBalClawClawFPv(void *);
s32 TObjEneBalClawClaw__sub_80090ECC(void *);
s32 TObjEneBalClawClaw__sub_80091134(void *);
s32 TObjEneBalClawClaw__sub_80091200(void *);
s32 TObjEneBalClawClaw__sub_80091354(void *);
void TObjEneBalClawClaw__sub_800916A8(u8 *arg0);
u32 lookup_entry_by_value__10TObjPlayerFPvf(void *, f32);
void TObjPlayer__sub_803D8960(int, u32, void *, int);
void TObjPlayer__sub_803D8CD4(void *);
s32 rotate_matrix_y(int, int);
void TObjPlayer__sub_803D9B2C(void);
s32 pop_matrix();
f32 TOHangerMachine01__sub_803D9C00(void *);
extern void *lbl_805D4F4C;
extern void *lbl_805D4F50;
extern const f32 lbl_805D96E4;
void TObjPlayer__sub_80091EA4(Obj_80091EA4 *self);
M2C_UNK obj_clearFlags30(void *, int);
M2C_UNK obj_setFlags30(void *, int);
M2C_UNK advance_animation_playback(void *);
M2C_UNK clear_player_status_flag__10TObjPlayerFPviUi(void *, int, u32);
M2C_UNK set_indexed_flags(void *, int, int);
s32 TBoss3Volopt__sub_8022675C(s32, s32, s32, s32);
void TObjPlayer__sub_80092028(u8 *arg0);
}

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
void TObjEneGibbles__sub_80156720(void *);
void __dl__7TObjectFPv(void *);
void __dt__14TObjEneBalClawFv(void *, int);
void *__nw__7TObjectFUl(int);
M2C_UNK clear_attack_flag__18TObjEneBalClawClawFPv(void *);
M2C_UNK find_target_in_range__10TObjPlayerFPvf(void *, f32);
f32 xz_distance_squared(void *, void *);
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
            if (xz_distance_squared((void *) (arg0 + 0x38), (void *) (arg0 + 0x50)) > lbl_805D96BC) {
                update_if_active__15TObjEneMe1GiGueFPv((void *) (arg0), (int) (8));
                return;
            }
            reset_active_state__18TObjEneBalClawClawFPv((void *) (arg0));
        }
        return;
    case 1:
        temp_r3 = M2C_FIELD(arg0, u32 *, 0x2A8);
        if (temp_r3 != 0U) {
            temp_f1 = xz_distance_squared((void *) (temp_r3 + 0x38), (void *) (arg0 + 0x38));
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

void TObjEneBalClawClaw__sub_800916A8(u8 *arg0) {
  s16 temp_r0;
  void *new_var;
  void *new_var2;
  new_var = (void *) arg0;
  temp_r0 = *((s16 *) (((s8 *) arg0) + 0x326));
  {
    switch (temp_r0)
    {
      case 0:
        new_var2 = new_var;
        TObjEneBalClawClaw__sub_80090D3C(new_var2);
        return;
      case 1:
        TObjEneBalClawClaw__sub_80091354(new_var);
        return;
      case 2:
        TObjEneBalClawClaw__sub_80090ECC(new_var);
        return;
      case 4:
        TObjEneBalClawClaw__sub_80091200(new_var);
        return;
      case 5:
        TObjEneBalClawClaw__sub_80091134(new_var);
        return;
      case 7:
        new_var = arg0;
        action__18TObjEneBalClawClawFPv((void *) new_var);
        return;
      case 9:
        TObjEneBalClawClaw__sub_800906C8(new_var = new_var);
        return;
      case 10:
        TObjEneBalClawClaw__sub_80090A70(new_var);
        return;
      case 11:
        TObjEneBalClawClaw__sub_8009060C(new_var);
        return;
      case 8:
        TObjEneBalClawClaw__sub_80090850(new_var);
        return;
      case 12:
        TObjEneBalClawClaw__sub_80090504(new_var);
        break;
    }
  }
}

void * create__18TObjEneBalClawClawFPvPvPvPvPvPv(void *arg0, void *arg1, void *arg2, void *arg3, void *arg4, void *arg5) {
    void *o;
    void *o2;
    o = __nw__7TObjectFUl(0x20);
    if (o != NULL) {
        o = TObjControl__ct(o, tl_04);
    }
    o2 = __nw__7TObjectFUl(0x428);
    if (o2 != NULL) {
        o2 = TObjEneBalClawClaw__sub_80091B98((u8 *)(o2), (M2C_UNK)(o), (u8 *)(arg0), (s32)(arg1), (s32)(arg2), (u8 *)(arg3), (s32)(arg4), (s32)(arg5));
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
        o2 = TObjEneBalClawClaw__sub_80091C58((u8 *)(o2), (M2C_UNK)(o), (u8 *)(arg0));
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

u8 *TObjEneBalClawClaw__sub_80091B98(u8 *arg0, M2C_UNK arg1, u8 *arg2, s32 arg3, s32 arg4, u8 *arg5, s32 arg6, s32 _w7) {
    TObjEneBalClaw__ct(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_80091B98_lbl_8048F148 *)&lbl_8048F148).value;
    M2C_FIELD(arg0, s16 *, 0x1C) = arg3;
    M2C_FIELD(arg0, s16 *, 0x2C) = arg4;
    M2C_FIELD(arg0, s16 *, 0x28) = (s16) M2C_FIELD(arg2, s16 *, 0x28);
    M2C_FIELD(arg0, s16 *, 0x2A) = (s16) M2C_FIELD(arg2, s16 *, 0x2A);
    VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x38), (void *) (arg5));
    VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x50), (void *) (arg2 + 0x50));
    M2C_FIELD(arg0, s32 *, 0x64) = 0;
    M2C_FIELD(arg0, s32 *, 0x5C) = 0;
    M2C_FIELD(arg0, s32 *, 0x60) = arg6;
    TObjEneBalClawClaw__ct((void *) (arg0));
    M2C_FIELD(arg0, s32 *, 0x80) = 0;
    M2C_FIELD(arg0, s32 *, 0x3B8) = (s32) M2C_FIELD(arg2, s32 *, 0x3B8);
    M2C_FIELD(arg0, f32 *, 0x3BC) = (f32) M2C_FIELD(arg2, f32 *, 0x3BC);
    M2C_FIELD(arg0, f32 *, 0x3B4) = (f32) M2C_FIELD(arg2, f32 *, 0x3B4);
    TObjEneBalClawClaw__sub_80090798((void *) (arg0));
    return arg0;
}

typedef char RecoveredGlobal_80091C58_lbl_8048F148_size[sizeof(RecoveredGlobal_80091C58_lbl_8048F148) == 0x14C ? 1 : -1];
u8 *TObjEneBalClawClaw__sub_80091C58(u8 *arg0, M2C_UNK arg1, u8 *arg2) {
    TObjEneBalClaw__ct((void *) (arg0));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_80091C58_lbl_8048F148 *)&lbl_8048F148).value;
    ((VObj_18_f05d67 *)(arg0))->m79(arg2);
    TObjEneBalClawClaw__ct((void *) (arg0));
    if (M2C_FIELD(arg2, s16 *, 0xA) != 0) {
        TObjEnemyCustom__sub_800C7860((void *) (arg0));
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

void TObjPlayer__sub_80091E08(u8 *arg0) {
    typedef char sp8_offset[(offsetof(Stack_80091E08, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_80091E08, spC) == 0x4) ? 1 : -1];
    typedef char sp10_offset[(offsetof(Stack_80091E08, sp10) == 0x8) ? 1 : -1];
    Stack_80091E08 stack;
    stack.sp8 = lbl_805D96D8;
    stack.spC = lbl_805D96DC;
    stack.sp10 = lbl_805D96E0 * M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x2B0), f32 *, 0x10);
    push_matrix_from((void *) (&lbl_8058D490.value));
    rotate_matrix_y((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x60)));
    rotate_vector_by_matrix((int) (0), (void *) (&stack.sp8), (void *) (&stack.sp8));
    pop_matrix();
    TBoss4Zako__sub_803D8910((void *) (&stack.sp8), (void *) (arg0 + 0x38));
    spawn_effect_at_ground__10TObjPlayerFPvi((void *) (&stack.sp8), (int) (0x23));
    spawn_dead_spot_type2__10TObjPlayerFii((void *) (&stack.sp8), (int) (0xF));
}

void TObjPlayer__sub_80091EA4(Obj_80091EA4 *self) {
    Vec_80091EA4 dir;
    Vec_80091EA4 pos;
    u32 entry;
    s32 idx;
    VObj_80091EA4 *eff;
    if (self->frame < lbl_805D96E4) {
        switch (self->state) {
        case 3:
            entry = lookup_entry_by_value__10TObjPlayerFPvf(lbl_805D4F4C, self->frame);
            idx = 0;
            break;
        case 4:
            entry = lookup_entry_by_value__10TObjPlayerFPvf(lbl_805D4F50, self->frame);
            idx = 1;
            break;
        default:
            entry = 0;
            break;
        }
        if (entry != 0) {
            TObjPlayer__sub_803D9B2C();
            TObjPlayer__sub_803D8CD4(0);
            TOHangerMachine01__sub_803D9C00(&self->pos);
            rotate_matrix_y(0, self->angle);
            TObjPlayer__sub_803D8960(0, entry, &pos, 2);
            pop_matrix();
            eff = self->effects[idx];
            if (eff != NULL) {
                eff->m4(&pos, &dir);
            }
        }
    }
}

void select_subtype__12TObjEneBeastFPv(u8 *arg0) {
    s32 temp_r0;
    s32 temp_r0_2;
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x334);
    if (temp_r0 < 0) {
        M2C_FIELD(arg0, s32 *, 0x334) = 0;
    } else if (temp_r0 > 2) {
        M2C_FIELD(arg0, s32 *, 0x334) = 2;
    }
    temp_r0_2 = M2C_FIELD(arg0, s32 *, 0x334);
    switch (temp_r0_2) {
    case 2:
        M2C_FIELD(arg0, s32 *, 0x368) = 1;
        set_param__12TObjEneLappyFPvi(arg0, 0xB);
        return;
    case 1:
        M2C_FIELD(arg0, s32 *, 0x368) = 2;
        set_param__12TObjEneLappyFPvi(arg0, 0xA);
        return;
    default:
        M2C_FIELD(arg0, s32 *, 0x368) = 0;
        set_param__12TObjEneLappyFPvi(arg0, 9);
        return;
    }
}
void TObjPlayer__sub_80092028(u8 *arg0) {
    s16 temp_r0;
    temp_r0 = M2C_FIELD(arg0, s16 *, 0x328);
    switch (temp_r0) {
    case 0:
    default:
        if ((s32) M2C_FIELD(arg0, s32 *, 0x390) != 1) {
            M2C_FIELD(arg0, s16 *, 0x328) = 2;
        } else {
            M2C_FIELD(arg0, s16 *, 0x328) = 1;
            M2C_FIELD(arg0, s16 *, 0xB8) = 0xB;
            set_indexed_flags((void *) (arg0), (int) (0), (int) (0x0A000000));
            obj_setFlags30((void *) (arg0), (int) (0x04000000));
            TBoss3Volopt__sub_8022675C(0x4003AB32, (s32) (arg0 + 0x38), 0, 0);
        }
        break;
    case 1:
        if ((u32) M2C_FIELD(arg0, u32 *, 0xB4) != 0x20U) {
            M2C_FIELD(arg0, s16 *, 0x328) = 2;
            M2C_FIELD(arg0, s32 *, 0x390) = 0;
            M2C_FIELD(arg0, s16 *, 0xB8) = 0;
            clear_player_status_flag__10TObjPlayerFPviUi(arg0, 0, 0x0A000000);
            obj_clearFlags30((void *) (arg0), (int) (0x04000000));
        }
        break;
    case 2:
        M2C_FIELD(arg0, s16 *, 0x326) = 1;
        break;
    }
    advance_animation_playback((void *) (arg0));
}

}
