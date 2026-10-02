#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

#include <stddef.h>
struct Stack_800339BC {
    f32 sp8;
    f32 spC;
    f32 sp10;
};

struct RecoveredGlobal_800339BC_lbl_804FF5E8 {
    M2C_UNK value;
    u8 remaining[0x24];
};

struct Obj_80034034 { u8 pad[0x326]; s16 f326; };

struct Obj_800333F4 { u8 pad0[0xB8]; s16 f_B8; };

extern "C" {
M2C_UNK TObjBoss2Tunnel__sub_8003B1D8(void *);
void TBoss2DeRolLe__sub_80033A80(M2C_UNK arg0, s32 arg1);
M2C_UNK VecCopy__FP3VecPC3Vec(int, void *);
s32 spawn_particle_effect_with_flags(void *, int, int);
extern RecoveredGlobal_800339BC_lbl_804FF5E8 lbl_804FF5E8;
void TBoss2DeRolLe__sub_800339BC(s32 arg0, f32 farg0, f32 farg1);
extern const f32 TBoss2DeRolLe__data_805D82A0;
void TBoss2DeRolLe__sub_8003383C(u8 *arg0);
s32 TBoss2DeRolLe__sub_8002F73C(void *, void *);
s32 TBoss2DeRolLe__sub_8002F7C4(void *, void *);
s32 TBoss2DeRolLe__sub_8002FCE4(void *, void *);
s32 TBoss2DeRolLe__sub_8002FD9C(void *, void *, int);
s32 TBoss2DeRolLe__sub_8002FE60(void *, void *);
s32 TBoss2DeRolLe__sub_80030588(void *, void *);
s32 TBoss2DeRolLe__sub_80030720(void *, void *, int);
s32 TBoss2DeRolLe__sub_80030898(void *, void *, int);
s32 TBoss2DeRolLe__sub_80030A38(void *, void *);
s32 TBoss2DeRolLe__sub_80030DFC(void *, void *, int);
s32 TBoss2DeRolLe__sub_800310F8(void *, void *, int);
s32 TBoss2DeRolLe__sub_800313F8(void *, void *, int);
s32 TBoss2DeRolLe__sub_80031AD4(void *, void *);
s32 TBoss2DeRolLe__sub_800320B4(void *, void *, int, int);
s32 TBoss2DeRolLe__sub_800327C8(void *, void *, int, int);
s32 TBoss2DeRolLe__sub_80032B28(void *, void *);
s32 TBoss2DeRolLe__sub_80032E38(void *, void *);
void TBoss2DeRolLe__sub_8003344C(s32 arg0, u32 arg1, s32 arg2);
void TBoss2DeRolLe__sub_80034E90(Obj_80034034 *self, s32 mode);
void TBoss2DeRolLe__sub_80034034(Obj_80034034 *self);
void TBoss2DeRolLe__sub_80034E90(Obj_80034034 *self, s32 mode);
void advance_animation_playback(void *);
void TBoss2DeRolLe__sub_800333F4(Obj_800333F4 *self, u32 arg1);
void TBoss2DeRolLe__sub_80034E90(Obj_80034034 *self, s32 mode);
s32 check_v2_mode__9TObjEneDDFv(void);
f32 calc_elapsed_scaled__9TObjEneDDFv(void *);
extern s32 lbl_80482108[];
extern s32 lbl_804821B8[];
extern const f32 TBoss2DeRolLe__data_805D827C;
void TBoss2DeRolLe__sub_80033D44(Obj_80034034 *self);
}

extern "C" {

void TBoss2DeRolLe__sub_800338BC(void);
void handle_6x13_de_rol_le_boss_actions(void *arg0);
void handle_6x14_de_rol_le_boss_actions_with_target(void *arg0);
void init_from_param__13TBoss2DeRolLeFPvPv(void *arg0, void *arg1);
int play_sound(void* p, int a1);
void reset_fields_3d0__13TBoss2DeRolLeFPv(void* p);
void set_params__13TBoss2DeRolLeFPvPv(void *arg0, void *arg1);
void spawn_ceil_junk__13TBoss2DeRolLeFii(s32 arg1, s32 arg2);
int spawn_trap__13TBoss2DeRolLeFPvii(void* p, int a1, int a2);
void update_projectile_spawns__13TBoss2DeRolLeFPv(u8 *arg0);
int TBoss3Volopt__sub_8022675C(void*, int, int, int);
M2C_UNK TBoss4Zako__sub_803D8910(int, void *);
s32 TBoss8Dragon__sub_800B9958(void * a0 = 0, u16 a1 = 0);
M2C_UNK TOTrapAncient01__sub_80226578(int, void *, void *, int, int);
M2C_UNK TObjEneDD__sub_800B9BEC(void *, void *, f32);
s32 transition_enemy_state(void * a0 = 0, s16 a1 = 0);
M2C_UNK VecCopy__FP3VecPC3Vec(int, void *);
M2C_UNK create_particle__17TObjBoss2CeilJunkFv(s32, M2C_UNK);
void *get_enemy_entity(int);
s32 objInBand__FP7GameObjf(void *, f32);
void swap_6x13_fields__13TBoss2DeRolLeFPv(void *);
void swap_endian__13TBoss2DeRolLeFPv(void *);

void TBoss2DeRolLe__sub_800333F4(Obj_800333F4 *self, u32 arg1) {
    switch (arg1) {
    case 4: self->f_B8 = 1; return;
    case 2: TBoss2DeRolLe__sub_80034E90((Obj_80034034 *)(self), (s32)(1)); return;
    case 0: advance_animation_playback(self); return;
    case 1: return;
    case 3: return;
    case 5: return;
    case 6: return;
    case 7: return;
    case 8: return;
    case 9: return;
    }
}

void TBoss2DeRolLe__sub_8003344C(s32 arg0, u32 arg1, s32 arg2) {
    switch (arg1) {
    case 0:
        TBoss2DeRolLe__sub_800333F4((Obj_800333F4 *)((void *) (arg0)), (u32)((void *) (arg2)));
        return;
    case 1:
        TBoss2DeRolLe__sub_80032E38((void *) (arg0), (void *) (arg2));
        return;
    case 2:
        TBoss2DeRolLe__sub_80032B28((void *) (arg0), (void *) (arg2));
        return;
    case 3:
        TBoss2DeRolLe__sub_800327C8((void *) (arg0), (void *) (arg2), (int) (0), (int) (1));
        return;
    case 4:
        TBoss2DeRolLe__sub_800320B4((void *) (arg0), (void *) (arg2), (int) (0), (int) (2));
        return;
    case 5:
        TBoss2DeRolLe__sub_800327C8((void *) (arg0), (void *) (arg2), (int) (0), (int) (3));
        return;
    case 6:
        TBoss2DeRolLe__sub_800327C8((void *) (arg0), (void *) (arg2), (int) (1), (int) (2));
        return;
    case 8:
        TBoss2DeRolLe__sub_800327C8((void *) (arg0), (void *) (arg2), (int) (1), (int) (0));
        return;
    case 9:
        TBoss2DeRolLe__sub_800327C8((void *) (arg0), (void *) (arg2), (int) (2), (int) (3));
        return;
    case 10:
        TBoss2DeRolLe__sub_800320B4((void *) (arg0), (void *) (arg2), (int) (2), (int) (0));
        return;
    case 11:
        TBoss2DeRolLe__sub_800327C8((void *) (arg0), (void *) (arg2), (int) (2), (int) (1));
        return;
    case 12:
        TBoss2DeRolLe__sub_800327C8((void *) (arg0), (void *) (arg2), (int) (3), (int) (0));
        return;
    case 13:
        TBoss2DeRolLe__sub_80031AD4((void *) (arg0), (void *) (arg2));
        return;
    case 14:
        TBoss2DeRolLe__sub_800327C8((void *) (arg0), (void *) (arg2), (int) (3), (int) (2));
        return;
    case 18:
        TBoss2DeRolLe__sub_800313F8((void *) (arg0), (void *) (arg2), (int) (0));
        return;
    case 19:
        TBoss2DeRolLe__sub_800313F8((void *) (arg0), (void *) (arg2), (int) (2));
        return;
    case 20:
        TBoss2DeRolLe__sub_800310F8((void *) (arg0), (void *) (arg2), (int) (0));
        return;
    case 21:
        TBoss2DeRolLe__sub_800310F8((void *) (arg0), (void *) (arg2), (int) (2));
        return;
    case 22:
        TBoss2DeRolLe__sub_80030DFC((void *) (arg0), (void *) (arg2), (int) (0));
        return;
    case 23:
        TBoss2DeRolLe__sub_80030DFC((void *) (arg0), (void *) (arg2), (int) (2));
        return;
    case 16:
        TBoss2DeRolLe__sub_80030898((void *) (arg0), (void *) (arg2), (int) (0));
        return;
    case 17:
        TBoss2DeRolLe__sub_80030898((void *) (arg0), (void *) (arg2), (int) (2));
        return;
    case 15:
        TBoss2DeRolLe__sub_80030A38((void *) (arg0), (void *) (arg2));
        return;
    case 24:
        TBoss2DeRolLe__sub_80030720((void *) (arg0), (void *) (arg2), (int) (0x18));
        return;
    case 25:
        TBoss2DeRolLe__sub_80030720((void *) (arg0), (void *) (arg2), (int) (0x19));
        return;
    case 26:
        TBoss2DeRolLe__sub_80030588((void *) (arg0), (void *) (arg2));
        return;
    case 27:
        TBoss2DeRolLe__sub_8002FE60((void *) (arg0), (void *) (arg2));
        return;
    case 28:
        TBoss2DeRolLe__sub_8002FD9C((void *) (arg0), (void *) (arg2), (int) (0));
        return;
    case 29:
        TBoss2DeRolLe__sub_8002FD9C((void *) (arg0), (void *) (arg2), (int) (1));
        return;
    case 30:
        TBoss2DeRolLe__sub_8002FCE4((void *) (arg0), (void *) (arg2));
        return;
    case 31:
        TBoss2DeRolLe__sub_8002F7C4((void *) (arg0), (void *) (arg2));
        return;
    case 32:
        TBoss2DeRolLe__sub_8002F73C((void *) (arg0), (void *) (arg2));
    default:
        return;
    }
}

#pragma push
#pragma opt_common_subs off
void TBoss2DeRolLe__sub_8003383C(u8 *arg0) {
    f32 temp_f1;
    M2C_FIELD(arg0, f32 *, 0x6D4) = (f32) (M2C_FIELD(arg0, f32 *, 0x6D4) + M2C_FIELD(arg0, f32 *, 0x6D8));
    temp_f1 = M2C_FIELD(arg0, f32 *, 0x6D4);
    if (temp_f1 >= TBoss2DeRolLe__data_805D82A0) {
        M2C_FIELD(arg0, f32 *, 0x6D4) = (f32) (temp_f1 - TBoss2DeRolLe__data_805D82A0);
    }
}
#pragma pop

int spawn_trap__13TBoss2DeRolLeFPvii(void* p, int a1, int a2) { return TOTrapAncient01__sub_80226578((int)(p), (void *)(a1), (void *)(a2), (int)(0), (int)(0)); }
int play_sound(void* p, int a1) { return TBoss3Volopt__sub_8022675C(p, a1, 0, 0); }
void TBoss2DeRolLe__sub_800338BC(void) {  }

extern const f32 TBoss2DeRolLe__data_805D8280;
extern const f32 TBoss2DeRolLe__data_805D8288;
extern const f32 TBoss2DeRolLe__data_805D8294;
extern const f32 TBoss2DeRolLe__data_805D82F0;

void update_projectile_spawns__13TBoss2DeRolLeFPv(u8 *arg0) {
    u8 *temp_r31;

    TObjEneDD__sub_800B9BEC((void *) (arg0 + 0x38), (void *) (arg0 + 0x518), (f32) (TBoss2DeRolLe__data_805D8280));
    TObjEneDD__sub_800B9BEC((void *) (arg0 + 0x4D0), (void *) (arg0 + 0x524), (f32) (TBoss2DeRolLe__data_805D8280));
    temp_r31 = arg0 + 0x530;
    VecCopy__FP3VecPC3Vec((int) (temp_r31), (void *) (arg0 + 0x524));
    TBoss4Zako__sub_803D8910((int) (temp_r31), (void *) (arg0 + 0x524));
    M2C_FIELD(temp_r31, f32 *, 0) = (f32) (M2C_FIELD(temp_r31, f32 *, 0) * TBoss2DeRolLe__data_805D8288);
    M2C_FIELD(temp_r31, f32 *, 4) = (f32) (M2C_FIELD(temp_r31, f32 *, 4) * TBoss2DeRolLe__data_805D8288);
    M2C_FIELD(temp_r31, f32 *, 8) = (f32) (M2C_FIELD(temp_r31, f32 *, 8) * TBoss2DeRolLe__data_805D8288);
    if ((M2C_FIELD(arg0, s32 *, 0x3C0) & 0x100) && ((objInBand__FP7GameObjf((void *) (arg0), (f32) (TBoss2DeRolLe__data_805D82F0)) != 0) || (objInBand__FP7GameObjf((void *) (arg0), (f32) (TBoss2DeRolLe__data_805D8294)) != 0))) {
        M2C_FIELD(arg0, s32 *, 0x53C) = 0;
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0x53C) <= 0x10) {
        TOTrapAncient01__sub_80226578((int)((int) (0x4003AD00)), (void *)((void *) (arg0)), (void *)((void *) (arg0 + 0x530)), (int)((int) (0)), (int)((int) (0)));
        M2C_FIELD(arg0, s32 *, 0x53C) = (s32) (M2C_FIELD(arg0, s32 *, 0x53C) + 1);
    }
}

#pragma push
#pragma fp_contract on
typedef char RecoveredGlobal_800339BC_lbl_804FF5E8_size[sizeof(RecoveredGlobal_800339BC_lbl_804FF5E8) == 0x28 ? 1 : -1];
void TBoss2DeRolLe__sub_800339BC(s32 arg0, f32 farg0, f32 farg1) {
    typedef char sp8_offset[(offsetof(Stack_800339BC, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_800339BC, spC) == 0x4) ? 1 : -1];
    typedef char sp10_offset[(offsetof(Stack_800339BC, sp10) == 0x8) ? 1 : -1];
    Stack_800339BC stack;
    VecCopy__FP3VecPC3Vec((int)((void *) (&stack.sp8)), (void *)((void *) (arg0)));
    stack.sp8 = -((M2C_FIELD(&lbl_804FF5E8.value, f32 *, 0xC) * farg1) - stack.sp8);
    stack.spC -= (M2C_FIELD(&lbl_804FF5E8.value, f32 *, 0x10) * farg1) - farg0;
    stack.sp10 = -((M2C_FIELD(&lbl_804FF5E8.value, f32 *, 0x14) * farg1) - stack.sp10);
    spawn_particle_effect_with_flags((void *) (&stack.sp8), (int) (0x127), (int) (0x40));
}
#pragma pop

void spawn_ceil_junk__13TBoss2DeRolLeFii(s32 arg1, s32 arg2) {
    create_particle__17TObjBoss2CeilJunkFv(arg2, 0x121);
}

void TBoss2DeRolLe__sub_80033A80(M2C_UNK arg0, s32 arg1) {
    TObjBoss2Tunnel__sub_8003B1D8((void *) (arg1));
}

void TBoss2DeRolLe__sub_80033D44(Obj_80034034 *self) {
    s32 retry;
    s32 mode;
    do {
        retry = 0;
        M2C_FIELD(self, s32 *, 0x3D4)++;
        if (check_v2_mode__9TObjEneDDFv() != 0) {
            mode = lbl_804821B8[M2C_FIELD(self, s32 *, 0x3D4)];
        } else {
            mode = lbl_80482108[M2C_FIELD(self, s32 *, 0x3D4)];
        }
        switch (mode) {
        case 33:
            if (calc_elapsed_scaled__9TObjEneDDFv(self) > TBoss2DeRolLe__data_805D827C) {
                mode = 8;
            } else {
                mode = 6;
            }
            break;
        case 34:
            if (M2C_FIELD(self, s32 *, 0x658) == 0) {
                mode = 5;
            } else {
                mode = 9;
            }
            break;
        case 35:
            if (calc_elapsed_scaled__9TObjEneDDFv(self) > TBoss2DeRolLe__data_805D827C) {
                mode = 0xC;
            } else {
                mode = 0xE;
            }
            break;
        case 36:
            if (M2C_FIELD(self, s32 *, 0x658) == 0) {
                mode = 3;
            } else {
                mode = 0xB;
            }
            break;
        case 37:
            if (calc_elapsed_scaled__9TObjEneDDFv(self) > TBoss2DeRolLe__data_805D827C) {
                mode = 0x18;
            } else {
                mode = 0x19;
            }
            break;
        case 39:
            if (M2C_FIELD(self, s32 *, 0x658) == 0) {
                mode = 4;
            } else {
                mode = 0xA;
            }
            break;
        case 40:
            if (M2C_FIELD(self, s32 *, 0x658) == 0) {
                mode = 0x10;
            } else {
                mode = 0x11;
            }
            break;
        case 41:
            if (M2C_FIELD(self, s32 *, 0x658) == 0) {
                mode = 0x12;
            } else {
                mode = 0x13;
            }
            break;
        case 42:
            if (M2C_FIELD(self, s32 *, 0x658) == 0) {
                mode = 0x14;
            } else {
                mode = 0x15;
            }
            break;
        case 43:
            if (M2C_FIELD(self, s32 *, 0x658) == 0) {
                mode = 0x16;
            } else {
                mode = 0x17;
            }
            break;
        case 44:
            retry = 1;
            M2C_FIELD(self, s32 *, 0x3D4) = 5;
            break;
        }
    } while (retry != 0);
    TBoss2DeRolLe__sub_80034E90(self, mode);
}

void reset_fields_3d0__13TBoss2DeRolLeFPv(void* p) { *(s32*)((char*)p + 0x3d0) = 0; *(s32*)((char*)p + 0x3d4) = 0; }
void set_params__13TBoss2DeRolLeFPvPv(void *arg0, void *arg1) {
    TBoss8Dragon__sub_800B9958(arg0, (u16) M2C_FIELD(arg1, s32 *, 8));
    M2C_FIELD(arg0, s32 *, 0x3D4) = (s32) M2C_FIELD(arg1, s16 *, 6);
    transition_enemy_state(arg0, M2C_FIELD(arg1, s16 *, 4));
}
void init_from_param__13TBoss2DeRolLeFPvPv(void *arg0, void *arg1) {
    M2C_FIELD(arg0, s32 *, 0x3D4) = (s32) M2C_FIELD(arg1, s16 *, 6);
    transition_enemy_state(arg0, M2C_FIELD(arg1, s16 *, 4));
}

void handle_6x14_de_rol_le_boss_actions_with_target(void *arg0) {
    void *x;
    swap_endian__13TBoss2DeRolLeFPv(arg0);
    x = get_enemy_entity(M2C_FIELD(arg0, u16 *, 0x2));
    if (x != NULL) {
        set_params__13TBoss2DeRolLeFPvPv((void *)(x), (void *)(arg0));
    }
}

void handle_6x13_de_rol_le_boss_actions(void *arg0) {
    void *x;
    swap_6x13_fields__13TBoss2DeRolLeFPv(arg0);
    x = get_enemy_entity(M2C_FIELD(arg0, u16 *, 0x2));
    if (x != NULL) {
        init_from_param__13TBoss2DeRolLeFPvPv((void *)(x), (void *)(arg0));
    }
}
void TBoss2DeRolLe__sub_80034034(Obj_80034034 *self) {
    s16 st = self->f326;
    if (st != 0x1f && st != 0x20) {
        if (st == 0x14 || st == 0x15) {
            TBoss2DeRolLe__sub_80033D44((Obj_80034034 *)(self));
        } else if (st == 0x16 || st == 0x17) {
            TBoss2DeRolLe__sub_80034E90(self, 0x1f);
        } else {
            TBoss2DeRolLe__sub_80034E90(self, 0x1e);
        }
    }
}

}
