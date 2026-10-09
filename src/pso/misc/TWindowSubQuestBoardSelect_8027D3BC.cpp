#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 get_register__12TQuestThreadFPvi(s32, s32);
extern s32 quest_mission_manager;

s32 get_slot_flag__26TWindowSubQuestBoardSelectFic(s32 arg0, s8 arg1) {
    if (arg1 < 0) {
        return 0;
    }
    if (arg1 > 6) {
        return 0;
    }
    return get_register__12TQuestThreadFPvi(quest_mission_manager, arg1 + 0x4A);
}

}

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

u16 *get_array_entry__20TWindowSubStatusDispFPvi(void *, s32);

void update_slot_display_flags__26TWindowSubQuestBoardSelectFPv(void *arg0) {
    s32 var_r30;
    s32 var_r29;
    u16 *temp_r31;
    u16 *temp_r3;

    var_r29 = 1;
    var_r30 = 0;
    do {
        temp_r31 = get_array_entry__20TWindowSubStatusDispFPvi(arg0, var_r30 + 2);
        if (((s32 (*)(void *, s8))get_slot_flag__26TWindowSubQuestBoardSelectFic)(arg0, (s8) var_r30) == 0) {
            *temp_r31 |= 2;
        } else {
            var_r29 = 0;
            *temp_r31 &= 0xFFFFFFFD;
        }
        var_r30 += 1;
    } while (var_r30 < 6);
    temp_r3 = get_array_entry__20TWindowSubStatusDispFPvi(arg0, 1);
    if (var_r29 != 0) {
        M2C_FIELD(arg0, s8 *, 0x61) = -1;
        *temp_r3 |= 2;
        M2C_FIELD(arg0, u8 *, 0x60) = (u8) (M2C_FIELD(arg0, u8 *, 0x60) | 4);
        return;
    }
    *temp_r3 &= 0xFFFFFFFD;
    M2C_FIELD(arg0, u8 *, 0x60) = (u8) (M2C_FIELD(arg0, u8 *, 0x60) & 0xFFFFFFFB);
}

}

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void select_next__26TWindowSubQuestBoardSelectFPv(void *arg0);
M2C_UNK fn_8027D230(void *);
s32 is_shortcut_active__18TWindowSubShortCutFPv();

void select_next__26TWindowSubQuestBoardSelectFPv(void *arg0) {
    u8 temp_r3;

    if ((is_shortcut_active__18TWindowSubShortCutFPv() == 0) && (((s32 (*)(void *, u8))get_slot_flag__26TWindowSubQuestBoardSelectFic)(arg0, M2C_FIELD(arg0, u8 *, 0x61)) == 0)) {
        do {
            M2C_FIELD(arg0, u8 *, 0x61) = (u8) (M2C_FIELD(arg0, u8 *, 0x61) + 1);
            temp_r3 = M2C_FIELD(arg0, u8 *, 0x61);
            if ((s8) temp_r3 > 6) {
                M2C_FIELD(arg0, u8 *, 0x61) = (u8) (temp_r3 - 6);
            }
        } while (((s32 (*)(void *, u8))get_slot_flag__26TWindowSubQuestBoardSelectFic)(arg0, M2C_FIELD(arg0, u8 *, 0x61)) == 0);
        fn_8027D230(arg0);
    }
}

}
