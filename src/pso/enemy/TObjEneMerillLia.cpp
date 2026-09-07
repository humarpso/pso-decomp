#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

#include <stddef.h>
struct Stack_800D5060 {
    f32 sp8;
    f32 spC;
    f32 sp10;
};

struct RecoveredGlobal_800D5060_lbl_8058D490 { M2C_UNK value; u8 remaining[0x2C]; };
typedef char RecoveredGlobal_800D5060_lbl_8058D490_size[sizeof(RecoveredGlobal_800D5060_lbl_8058D490) == 0x30 ? 1 : -1];

extern "C" {
M2C_UNK clear_player_status_flag__10TObjPlayerFPviUi(void *, M2C_UNK, M2C_UNK);
void TObjEneMerillLia__sub_800D5480(u8 *arg0);
f32 calc_boss4_scale__10TObjPlayerFi(void *);
void init_attack_state__16TObjEneMerillLiaFPv(void *arg0);
void reset_action_state__16TObjEneMerillLiaFPv(void *arg0);
void TObjEneMerillLia__sub_800D6A44(u8 *arg0);
s32 copy_target_state__14TObjEnePanarmsFPvPv(void *, int);
s32 TBoss3Volopt__sub_8022675C(void *, void *, int, int);
void TObjEneMerillLia__sub_800D4EC8(s32 arg0);
s32 copy_target_state__14TObjEnePanarmsFPvPv(void *, int);
s32 TBoss3Volopt__sub_8022675C(void *, void *, int, int);
void TObjEneMerillLia__sub_800D4F0C(s32 arg0);
s32 copy_target_state__14TObjEnePanarmsFPvPv(void *, int);
s32 TBoss3Volopt__sub_8022675C(void *, void *, int, int);
void TObjEneMerillLia__sub_800D4F50(s32 arg0);
s32 copy_target_state__14TObjEnePanarmsFPvPv(void *, int);
s32 TBoss3Volopt__sub_8022675C(void *, void *, int, int);
void TObjEneMerillLia__sub_800D4F94(s32 arg0);
s32 copy_target_state__14TObjEnePanarmsFPvPv(void *, int);
s32 TBoss3Volopt__sub_8022675C(void *, void *, int, int);
void TObjEneMerillLia__sub_800D4FD8(s32 arg0);
s32 copy_target_state__14TObjEnePanarmsFPvPv(void *, int);
s32 TBoss3Volopt__sub_8022675C(void *, void *, int, int);
void TObjEneMerillLia__sub_800D501C(s32 arg0);
s32 spawn_ground_effect__10TObjPlayerFPvi(void *, int);
s32 TObjPlayer__sub_800D92BC(void *, int);
f32 TBoss4Zako__sub_803D8910(void *, void *);
s32 TScene__sub_803D8DB4(int, void *, void *);
s32 TObjPlayer__sub_803D9214(int, int);
s32 TObjPlayer__sub_803D97F0(void *);
s32 TObjPlayer__sub_803D9B78();
extern RecoveredGlobal_800D5060_lbl_8058D490 lbl_8058D490;
extern const f32 TObjEneMerillLia__data_805DA300;
extern const f32 lbl_805DA304;
extern const f32 TObjEneMerillLia__data_805DA308;
void TObjEneMerillLia__sub_800D5060(u8 *arg0);
}

extern "C" {

void * TObjEneMerillLia__create(void *arg0);
void TObjEneMerillLia__sub_800D4D70(void);
void TObjEneMerillLia__sub_800D50FC(void);
void *__dt__16TObjEneMerillLiaFPvs(void *arg0, s16 arg1);
void destroy_rocks__16TObjEneMerillLiaFv(void);
void init_attack_state__16TObjEneMerillLiaFPv(void *arg0);
void reset_action_state__16TObjEneMerillLiaFPv(void *arg0);
void update_motion_state__16TObjEneMerillLiaFPv(void *arg0);
void TLobby__sub_8001FE7C(void*, int);
void *TObjControl__ct(void *, void *);
void TObjEneGibbles__sub_80156720(void *);
void *TObjEneMerillLia__ct(void *, void *, void *);
void TObjPlayer__sub_800C68FC(void *, int);
void TObjPlayer__sub_800F6EB0(void *);
void __dl__7TObjectFPv(void *);
void __dt__18TObjEneMe3SinowZoaFPvs(void *, int);
void *__nw__7TObjectFUl(int);
M2C_UNK clear_player_status_flag__10TObjPlayerFPviUi(void *, M2C_UNK, M2C_UNK);
void free__11TOBoss4RockFUi(void*);
M2C_UNK obj_clearFlags30(void *, M2C_UNK);
M2C_UNK obj_setFlags30(void *, M2C_UNK);
M2C_UNK set_indexed_flags(void *, M2C_UNK, M2C_UNK);

void TObjEneMerillLia__sub_800D4D70(void) {  }

void TObjEneMerillLia__sub_800D4EC8(s32 arg0) {
    TBoss3Volopt__sub_8022675C((void *) (copy_target_state__14TObjEnePanarmsFPvPv((void *) (arg0), (int) (0x3AD04))), (void *) (arg0 + 0x38), (int) (0), (int) (0));
}

void TObjEneMerillLia__sub_800D4F0C(s32 arg0) {
    TBoss3Volopt__sub_8022675C((void *) (copy_target_state__14TObjEnePanarmsFPvPv((void *) (arg0), (int) (0x3B205))), (void *) (arg0 + 0x38), (int) (0), (int) (0));
}

void TObjEneMerillLia__sub_800D4F50(s32 arg0) {
    TBoss3Volopt__sub_8022675C((void *) (copy_target_state__14TObjEnePanarmsFPvPv((void *) (arg0), (int) (0x3AD00))), (void *) (arg0 + 0x38), (int) (0), (int) (0));
}

void TObjEneMerillLia__sub_800D4F94(s32 arg0) {
    TBoss3Volopt__sub_8022675C((void *) (copy_target_state__14TObjEnePanarmsFPvPv((void *) (arg0), (int) (0x3B201))), (void *) (arg0 + 0x38), (int) (0), (int) (0));
}

void TObjEneMerillLia__sub_800D4FD8(s32 arg0) {
    TBoss3Volopt__sub_8022675C((void *) (copy_target_state__14TObjEnePanarmsFPvPv((void *) (arg0), (int) (0x3AB02))), (void *) (arg0 + 0x38), (int) (0), (int) (0));
}

void TObjEneMerillLia__sub_800D501C(s32 arg0) {
    TBoss3Volopt__sub_8022675C((void *) (copy_target_state__14TObjEnePanarmsFPvPv((void *) (arg0), (int) (0x3B206))), (void *) (arg0 + 0x38), (int) (0), (int) (0));
}

void TObjEneMerillLia__sub_800D5060(u8 *arg0) {
    typedef char sp8_offset[(offsetof(Stack_800D5060, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_800D5060, spC) == 0x4) ? 1 : -1];
    typedef char sp10_offset[(offsetof(Stack_800D5060, sp10) == 0x8) ? 1 : -1];
    Stack_800D5060 stack;
    stack.sp8 = TObjEneMerillLia__data_805DA300;
    stack.spC = lbl_805DA304;
    stack.sp10 = TObjEneMerillLia__data_805DA308 * M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x2B0), f32 *, 0x10);
    TObjPlayer__sub_803D97F0((void *) (&lbl_8058D490.value));
    TObjPlayer__sub_803D9214((int) (0), (int) (M2C_FIELD(arg0, s32 *, 0x60)));
    TScene__sub_803D8DB4((int) (0), (void *) (&stack.sp8), (void *) (&stack.sp8));
    TObjPlayer__sub_803D9B78();
    TBoss4Zako__sub_803D8910((void *) (&stack.sp8), (void *) (arg0 + 0x38));
    spawn_ground_effect__10TObjPlayerFPvi((void *) (&stack.sp8), (int) (0x23));
    TObjPlayer__sub_800D92BC((void *) (&stack.sp8), (int) (0xF));
}

void TObjEneMerillLia__sub_800D50FC(void) {  }

void update_motion_state__16TObjEneMerillLiaFPv(void *arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s16 *, 0x326);
    if (temp_r0 != 4) {
        if (temp_r0 < 4) {
            if (temp_r0 < 3) {
                if (temp_r0 >= 0) {
                    goto block_end;
                }
                goto block_7;
            } else {
                goto block_7;
            }
        } else if ((temp_r0 >= 0xE) || (temp_r0 < 0xB)) {
block_7:
            if ((s32) M2C_FIELD(arg0, s32 *, 0x390) != 0) {
                M2C_FIELD(arg0, s16 *, 0x326) = 0;
            } else {
                M2C_FIELD(arg0, s16 *, 0x326) = 1;
            }
            M2C_FIELD(arg0, s16 *, 0x328) = 0;
            obj_setFlags30(arg0, 0x04040000);
            set_indexed_flags(arg0, 0, 0x0A000000);
        }
    }
block_end:
    ;
}

void TObjEneMerillLia__sub_800D5480(u8 *arg0) {
    M2C_FIELD(arg0, s16 *, 0x326) = 0xB;
    M2C_FIELD(arg0, s16 *, 0x328) = 0;
    M2C_FIELD(arg0, s32 *, 0x2A8) = 0;
    clear_player_status_flag__10TObjPlayerFPviUi((void *)(arg0), (M2C_UNK)(0), (M2C_UNK)(0x0A000000U));
}

void init_attack_state__16TObjEneMerillLiaFPv(void *arg0) {
    M2C_FIELD(arg0, s16 *, 0x326) = 4;
    M2C_FIELD(arg0, s16 *, 0x328) = 0;
    M2C_FIELD(arg0, s16 *, 0x374) = (s16) M2C_FIELD(arg0, s16 *, 0x3D8);
    obj_clearFlags30(arg0, 0x04240000);
    clear_player_status_flag__10TObjPlayerFPviUi(arg0, 0, 0x0A000000);
}

void reset_action_state__16TObjEneMerillLiaFPv(void *arg0) {
    M2C_FIELD(arg0, s16 *, 0x326) = 0xA;
    M2C_FIELD(arg0, s16 *, 0x328) = 0;
    obj_setFlags30(arg0, 0x200000);
    obj_clearFlags30(arg0, 0x04040000);
    clear_player_status_flag__10TObjPlayerFPviUi(arg0, 0, 0x0A000000);
}

extern void *tl_04;

void TObjEneMerillLia__sub_800D6A44(u8 *arg0) {
    if (calc_boss4_scale__10TObjPlayerFi((void *) (arg0)) <= M2C_FIELD(arg0, f32 *, 0x3C4)) {
        init_attack_state__16TObjEneMerillLiaFPv((void *) (arg0));
        return;
    }
    if (calc_boss4_scale__10TObjPlayerFi((void *) (arg0)) <= M2C_FIELD(arg0, f32 *, 0x3C8)) {
        reset_action_state__16TObjEneMerillLiaFPv((void *) (arg0));
    }
}

void * TObjEneMerillLia__create(void *arg0) {
    void *o;
    void *o2;
    o = __nw__7TObjectFUl(0x20);
    if (o != NULL) {
        o = TObjControl__ct(o, tl_04);
    }
    o2 = __nw__7TObjectFUl(0x3DC);
    if (o2 != NULL) {
        o2 = TObjEneMerillLia__ct(o2, o, arg0);
    }
    return o2;
}

extern u32 lbl_805D5210;
extern u32 lbl_805D5214;
extern u32 lbl_805D5218;
extern u32 TObjEneMerillLia__data_805D521C;
extern u32 TObjEneMerillLia__data_805D5220;

void destroy_rocks__16TObjEneMerillLiaFv(void) {
    if ((u32) lbl_805D5210 != 0U) {
        free__11TOBoss4RockFUi((void*)lbl_805D5210);
        lbl_805D5210 = 0U;
    }
    if ((u32) lbl_805D5214 != 0U) {
        free__11TOBoss4RockFUi((void*)lbl_805D5214);
        lbl_805D5214 = 0U;
    }
    if ((u32) lbl_805D5218 != 0U) {
        free__11TOBoss4RockFUi((void*)lbl_805D5218);
        lbl_805D5218 = 0U;
    }
    if ((u32) TObjEneMerillLia__data_805D521C != 0U) {
        free__11TOBoss4RockFUi((void*)TObjEneMerillLia__data_805D521C);
        TObjEneMerillLia__data_805D521C = 0U;
    }
    if ((u32) TObjEneMerillLia__data_805D5220 != 0U) {
        TLobby__sub_8001FE7C((void*)TObjEneMerillLia__data_805D5220, 1);
        TObjEneMerillLia__data_805D5220 = 0U;
    }
}

extern M2C_UNK lbl_80494728[];

void *__dt__16TObjEneMerillLiaFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_80494728;
        TObjPlayer__sub_800F6EB0(arg0);
        TObjEneGibbles__sub_80156720(arg0);
        __dt__18TObjEneMe3SinowZoaFPvs((s8 *)arg0 + 0x3A8, -1);
        TObjPlayer__sub_800C68FC(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
