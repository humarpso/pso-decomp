#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredGlobal_80354BE4_lbl_80543984 {
    M2C_UNK value;
    u8 remaining[0x20];
};

struct RecoveredGlobal_80354C2C_lbl_80543984 {
    M2C_UNK value;
    u8 remaining[0x20];
};

struct RecoveredGlobal_80354C7C_lbl_80543984 {
    M2C_UNK value;
    u8 remaining[0x20];
};

struct RecoveredGlobal_80354CCC_lbl_80543984 {
    M2C_UNK value;
    u8 remaining[0x20];
};

struct RecoveredGlobal_80354D14_lbl_80543984 {
    M2C_UNK value;
    u8 remaining[0x20];
};

struct RecoveredGlobal_80354D5C_lbl_80543984 {
    M2C_UNK value;
    u8 remaining[0x20];
};

struct RecoveredGlobal_80354DAC_lbl_80543984 {
    M2C_UNK value;
    u8 remaining[0x20];
};

struct RecoveredGlobal_80354DF4_lbl_80543984 {
    M2C_UNK value;
    u8 remaining[0x20];
};

extern "C" {
s32 TObjPlayer__sub_80354E3C();
M2C_UNK finish_quest_thread__10TObjPlayerFv(void *, int);
extern RecoveredGlobal_80354BE4_lbl_80543984 lbl_80543984;
void TObjPlayer__sub_80354BE4(s32 arg0);
s32 TObjPlayer__sub_80354E3C();
M2C_UNK set_player_index__10TObjPlayerFPvi(void *, void *, int);
extern RecoveredGlobal_80354BE4_lbl_80543984 lbl_80543984;
void TObjPlayer__sub_80354C2C(s32 arg0, s32 arg1);
s32 TObjPlayer__sub_80354E3C();
s32 TObjPlayer__sub_80354F8C(void *, int);
extern RecoveredGlobal_80354BE4_lbl_80543984 lbl_80543984;
s32 TObjPlayer__sub_80354C7C(s32 arg0);
s32 TObjPlayer__sub_80354E3C();
M2C_UNK TObjPlayer__sub_80354FB0(void *, int);
extern RecoveredGlobal_80354BE4_lbl_80543984 lbl_80543984;
void TObjPlayer__sub_80354CCC(s32 arg0);
s32 TObjPlayer__sub_80354E3C();
M2C_UNK set_flag0_bits01__10TObjPlayerFPv(void *, int);
extern RecoveredGlobal_80354BE4_lbl_80543984 lbl_80543984;
void TObjPlayer__sub_80354D14(s32 arg0);
s32 TObjPlayer__sub_80354E3C();
s32 clear_lock_flag__10TObjPlayerFPv(void *, int);
extern RecoveredGlobal_80354BE4_lbl_80543984 lbl_80543984;
s32 TObjPlayer__sub_80354D5C(s32 arg0);
s32 TObjPlayer__sub_80354E3C();
M2C_UNK TObjPlayer__sub_8035501C(void *, int);
extern RecoveredGlobal_80354BE4_lbl_80543984 lbl_80543984;
void TObjPlayer__sub_80354DAC(s32 arg0);
s32 TObjPlayer__sub_80354E3C();
M2C_UNK set_flag1__10TObjPlayerFPv(void *, int);
extern RecoveredGlobal_80354BE4_lbl_80543984 lbl_80543984;
void TObjPlayer__sub_80354DF4(s32 arg0);
}

extern "C" {

typedef char RecoveredGlobal_80354BE4_lbl_80543984_size[sizeof(RecoveredGlobal_80354BE4_lbl_80543984) == 0x24 ? 1 : -1];
void TObjPlayer__sub_80354BE4(s32 arg0) {
    s32 temp_r4;
    if (TObjPlayer__sub_80354E3C() != 0) {
        temp_r4 = (arg0 * 8) & 0x7FFF8;
        finish_quest_thread__10TObjPlayerFv((void *) ((u8 *)&lbl_80543984.value + temp_r4), (int) (temp_r4));
    }
}
typedef char RecoveredGlobal_80354C2C_lbl_80543984_size[sizeof(RecoveredGlobal_80354C2C_lbl_80543984) == 0x24 ? 1 : -1];
void TObjPlayer__sub_80354C2C(s32 arg0, s32 arg1) {
    s32 temp_r5;
    if (TObjPlayer__sub_80354E3C() != 0) {
        temp_r5 = (arg0 * 8) & 0x7FFF8;
        set_player_index__10TObjPlayerFPvi((void *) ((u8 *)&(*(RecoveredGlobal_80354C2C_lbl_80543984 *)&lbl_80543984).value + temp_r5), (void *) (arg1), (int) (temp_r5));
    }
}
typedef char RecoveredGlobal_80354C7C_lbl_80543984_size[sizeof(RecoveredGlobal_80354C7C_lbl_80543984) == 0x24 ? 1 : -1];
s32 TObjPlayer__sub_80354C7C(s32 arg0) {
    s32 temp_r4;
    if (TObjPlayer__sub_80354E3C() != 0) {
        temp_r4 = (arg0 * 8) & 0x7FFF8;
        return TObjPlayer__sub_80354F8C((void *) ((u8 *)&(*(RecoveredGlobal_80354C7C_lbl_80543984 *)&lbl_80543984).value + temp_r4), (int) (temp_r4));
    }
    return 0;
}
typedef char RecoveredGlobal_80354CCC_lbl_80543984_size[sizeof(RecoveredGlobal_80354CCC_lbl_80543984) == 0x24 ? 1 : -1];
void TObjPlayer__sub_80354CCC(s32 arg0) {
    s32 temp_r4;
    if (TObjPlayer__sub_80354E3C() != 0) {
        temp_r4 = (arg0 * 8) & 0x7FFF8;
        TObjPlayer__sub_80354FB0((void *) ((u8 *)&(*(RecoveredGlobal_80354CCC_lbl_80543984 *)&lbl_80543984).value + temp_r4), (int) (temp_r4));
    }
}
typedef char RecoveredGlobal_80354D14_lbl_80543984_size[sizeof(RecoveredGlobal_80354D14_lbl_80543984) == 0x24 ? 1 : -1];
void TObjPlayer__sub_80354D14(s32 arg0) {
    s32 temp_r4;
    if (TObjPlayer__sub_80354E3C() != 0) {
        temp_r4 = (arg0 * 8) & 0x7FFF8;
        set_flag0_bits01__10TObjPlayerFPv((void *) ((u8 *)&(*(RecoveredGlobal_80354D14_lbl_80543984 *)&lbl_80543984).value + temp_r4), (int) (temp_r4));
    }
}
typedef char RecoveredGlobal_80354D5C_lbl_80543984_size[sizeof(RecoveredGlobal_80354D5C_lbl_80543984) == 0x24 ? 1 : -1];
s32 TObjPlayer__sub_80354D5C(s32 arg0) {
    s32 temp_r4;
    if (TObjPlayer__sub_80354E3C() != 0) {
        temp_r4 = (arg0 * 8) & 0x7FFF8;
        return clear_lock_flag__10TObjPlayerFPv((void *) ((u8 *)&(*(RecoveredGlobal_80354D5C_lbl_80543984 *)&lbl_80543984).value + temp_r4), (int) (temp_r4));
    }
    return 0;
}
typedef char RecoveredGlobal_80354DAC_lbl_80543984_size[sizeof(RecoveredGlobal_80354DAC_lbl_80543984) == 0x24 ? 1 : -1];
void TObjPlayer__sub_80354DAC(s32 arg0) {
    s32 temp_r4;
    if (TObjPlayer__sub_80354E3C() != 0) {
        temp_r4 = (arg0 * 8) & 0x7FFF8;
        TObjPlayer__sub_8035501C((void *) ((u8 *)&(*(RecoveredGlobal_80354DAC_lbl_80543984 *)&lbl_80543984).value + temp_r4), (int) (temp_r4));
    }
}
typedef char RecoveredGlobal_80354DF4_lbl_80543984_size[sizeof(RecoveredGlobal_80354DF4_lbl_80543984) == 0x24 ? 1 : -1];
void TObjPlayer__sub_80354DF4(s32 arg0) {
    s32 temp_r4;
    if (TObjPlayer__sub_80354E3C() != 0) {
        temp_r4 = (arg0 * 8) & 0x7FFF8;
        set_flag1__10TObjPlayerFPv((void *) ((u8 *)&(*(RecoveredGlobal_80354DF4_lbl_80543984 *)&lbl_80543984).value + temp_r4), (int) (temp_r4));
    }
}

}
