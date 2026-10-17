#include "types.h"
#include "pso/player/TObjPlayer.h"

struct RecoveredGlobal_80354BE4_lbl_80543984 {
    s32 value;
    u8 remaining[0x20];
};

struct RecoveredGlobal_80354C2C_lbl_80543984 {
    s32 value;
    u8 remaining[0x20];
};

struct RecoveredGlobal_80354C7C_lbl_80543984 {
    s32 value;
    u8 remaining[0x20];
};

struct RecoveredGlobal_80354CCC_lbl_80543984 {
    s32 value;
    u8 remaining[0x20];
};

struct RecoveredGlobal_80354D14_lbl_80543984 {
    s32 value;
    u8 remaining[0x20];
};

struct RecoveredGlobal_80354D5C_lbl_80543984 {
    s32 value;
    u8 remaining[0x20];
};

struct RecoveredGlobal_80354DAC_lbl_80543984 {
    s32 value;
    u8 remaining[0x20];
};

struct RecoveredGlobal_80354DF4_lbl_80543984 {
    s32 value;
    u8 remaining[0x20];
};

struct E_80354E7C { u8 b[8]; };

extern "C" {
s32 finish_quest_thread__10TObjPlayerFv(void *, int);
extern RecoveredGlobal_80354BE4_lbl_80543984 lbl_80543984;
void TObjPlayer__sub_80354BE4(s32 arg0);
s32 set_player_index__10TObjPlayerFl(void *, void *, int);
void TObjPlayer__sub_80354C2C(s32 arg0, s32 arg1);
s32 TObjPlayer__sub_80354F8C(void *, int);
s32 TObjPlayer__sub_80354C7C(s32 arg0);
s32 TObjPlayer__sub_80354FB0(void *, int);
void TObjPlayer__sub_80354CCC(s32 arg0);
s32 set_flag0_bits01__10TObjPlayerFv(void *, int);
void TObjPlayer__sub_80354D14(s32 arg0);
s32 clear_lock_flag__10TObjPlayerFv(void *, int);
s32 TObjPlayer__sub_80354D5C(s32 arg0);
s32 TObjPlayer__sub_8035501C(void *, int);
void TObjPlayer__sub_80354DAC(s32 arg0);
s32 set_flag1__10TObjPlayerFv(void *, int);
void TObjPlayer__sub_80354DF4(s32 arg0);
s32 is_locally_controlled__10TObjPlayerFPv();
u32 get_player_by_client_id(u16);
s32 TObjPlayer__sub_80354E3C(s32 arg0);
void TObjPlayer__sub_80354E7C(void);
typedef char RecoveredGlobal_80354BE4_lbl_80543984_size[sizeof(RecoveredGlobal_80354BE4_lbl_80543984) == 0x24 ? 1 : -1];
void TObjPlayer__sub_80354BE4(s32 arg0) {
    s32 temp_r4;
    if (TObjPlayer__sub_80354E3C((s32)(arg0)) != 0) {
        temp_r4 = (arg0 * 8) & 0x7FFF8;
        finish_quest_thread__10TObjPlayerFv((void *) ((u8 *)&lbl_80543984.value + temp_r4), (int) (temp_r4));
    }
}
typedef char RecoveredGlobal_80354C2C_lbl_80543984_size[sizeof(RecoveredGlobal_80354C2C_lbl_80543984) == 0x24 ? 1 : -1];
void TObjPlayer__sub_80354C2C(s32 arg0, s32 arg1) {
    s32 temp_r5;
    if (TObjPlayer__sub_80354E3C((s32)(arg0)) != 0) {
        temp_r5 = (arg0 * 8) & 0x7FFF8;
        set_player_index__10TObjPlayerFl((void *) ((u8 *)&(*(RecoveredGlobal_80354C2C_lbl_80543984 *)&lbl_80543984).value + temp_r5), (void *) (arg1), (int) (temp_r5));
    }
}
typedef char RecoveredGlobal_80354C7C_lbl_80543984_size[sizeof(RecoveredGlobal_80354C7C_lbl_80543984) == 0x24 ? 1 : -1];
s32 TObjPlayer__sub_80354C7C(s32 arg0) {
    s32 temp_r4;
    if (TObjPlayer__sub_80354E3C((s32)(arg0)) != 0) {
        temp_r4 = (arg0 * 8) & 0x7FFF8;
        return TObjPlayer__sub_80354F8C((void *) ((u8 *)&(*(RecoveredGlobal_80354C7C_lbl_80543984 *)&lbl_80543984).value + temp_r4), (int) (temp_r4));
    }
    return 0;
}
typedef char RecoveredGlobal_80354CCC_lbl_80543984_size[sizeof(RecoveredGlobal_80354CCC_lbl_80543984) == 0x24 ? 1 : -1];
void TObjPlayer__sub_80354CCC(s32 arg0) {
    s32 temp_r4;
    if (TObjPlayer__sub_80354E3C((s32)(arg0)) != 0) {
        temp_r4 = (arg0 * 8) & 0x7FFF8;
        TObjPlayer__sub_80354FB0((void *) ((u8 *)&(*(RecoveredGlobal_80354CCC_lbl_80543984 *)&lbl_80543984).value + temp_r4), (int) (temp_r4));
    }
}
typedef char RecoveredGlobal_80354D14_lbl_80543984_size[sizeof(RecoveredGlobal_80354D14_lbl_80543984) == 0x24 ? 1 : -1];
void TObjPlayer__sub_80354D14(s32 arg0) {
    s32 temp_r4;
    if (TObjPlayer__sub_80354E3C((s32)(arg0)) != 0) {
        temp_r4 = (arg0 * 8) & 0x7FFF8;
        set_flag0_bits01__10TObjPlayerFv((void *) ((u8 *)&(*(RecoveredGlobal_80354D14_lbl_80543984 *)&lbl_80543984).value + temp_r4), (int) (temp_r4));
    }
}
typedef char RecoveredGlobal_80354D5C_lbl_80543984_size[sizeof(RecoveredGlobal_80354D5C_lbl_80543984) == 0x24 ? 1 : -1];
s32 TObjPlayer__sub_80354D5C(s32 arg0) {
    s32 temp_r4;
    if (TObjPlayer__sub_80354E3C((s32)(arg0)) != 0) {
        temp_r4 = (arg0 * 8) & 0x7FFF8;
        return clear_lock_flag__10TObjPlayerFv((void *) ((u8 *)&(*(RecoveredGlobal_80354D5C_lbl_80543984 *)&lbl_80543984).value + temp_r4), (int) (temp_r4));
    }
    return 0;
}
typedef char RecoveredGlobal_80354DAC_lbl_80543984_size[sizeof(RecoveredGlobal_80354DAC_lbl_80543984) == 0x24 ? 1 : -1];
void TObjPlayer__sub_80354DAC(s32 arg0) {
    s32 temp_r4;
    if (TObjPlayer__sub_80354E3C((s32)(arg0)) != 0) {
        temp_r4 = (arg0 * 8) & 0x7FFF8;
        TObjPlayer__sub_8035501C((void *) ((u8 *)&(*(RecoveredGlobal_80354DAC_lbl_80543984 *)&lbl_80543984).value + temp_r4), (int) (temp_r4));
    }
}
typedef char RecoveredGlobal_80354DF4_lbl_80543984_size[sizeof(RecoveredGlobal_80354DF4_lbl_80543984) == 0x24 ? 1 : -1];
void TObjPlayer__sub_80354DF4(s32 arg0) {
    s32 temp_r4;
    if (TObjPlayer__sub_80354E3C((s32)(arg0)) != 0) {
        temp_r4 = (arg0 * 8) & 0x7FFF8;
        set_flag1__10TObjPlayerFv((void *) ((u8 *)&(*(RecoveredGlobal_80354DF4_lbl_80543984 *)&lbl_80543984).value + temp_r4), (int) (temp_r4));
    }
}
s32 TObjPlayer__sub_80354E3C(s32 arg0) {
    if (get_player_by_client_id((u16)arg0) == 0U) {
        return 0;
    }
    if (is_locally_controlled__10TObjPlayerFPv() != 0) {
        return 1;
    }
    return 0;
}
void TObjPlayer__sub_80354E7C(void) {
    s32 i;
    for (i = 0; i < 4; i++) {
        ((TObjPlayer *)(&((E_80354E7C *)&lbl_80543984)[i]))->reset_field4();
    }
}

}
