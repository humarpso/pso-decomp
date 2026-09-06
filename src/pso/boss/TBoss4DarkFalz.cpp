#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
s32 TBoss4DarkFalz__sub_8004AF5C(u8 *arg0, s16 *arg1, s16 *arg2);
void fn_803594B4(void *, s32, f32);
extern const f32 lbl_805D8908;
extern const f32 lbl_805D8910;
void TBoss4DarkFalz__sub_8004B730(u8 *arg0, s32 arg1, f32 farg0);
}

extern "C" {

void TBoss4DarkFalz__sub_8004AFB8(void* p);
int TBoss4DarkFalz__sub_8004B07C(void);
s32 calc_rate_from_field__14TBoss4DarkFalzFPv(void *arg0);
u8 is_ending_or_split_screen__14TBoss4DarkFalzFv(void);
s32 is_timer_expired__14TBoss4DarkFalzFPv(void *arg0);
void update_visible_flag__14TBoss4DarkFalzFPv(void *arg0);
s32 TLobby__sub_800C6C10();
void *dispatch_shared_handler_a__6TLobbyFPv(M2C_UNK);
s32 get_main_phase();
s32 is_split_screen();

s32 TBoss4DarkFalz__sub_8004AF5C(u8 *arg0, s16 *arg1, s16 *arg2) {
    s32 temp_r6;
    temp_r6 = M2C_FIELD(arg0, s32 *, 0x384);
    if ((temp_r6 < 1) || (temp_r6 > 0x1FE)) {
        return 0;
    }
    if (temp_r6 > 0x1FD) {
        return 0;
    }
    *arg1 = M2C_FIELD(arg0, s16 *, 0x2C) + temp_r6;
    *arg2 = M2C_FIELD(arg0, u16 *, 0x1C) + M2C_FIELD(arg0, s32 *, 0x384);
    M2C_FIELD(arg0, s32 *, 0x384) = (s32) (M2C_FIELD(arg0, s32 *, 0x384) + 1);
    return 1;
}

void TBoss4DarkFalz__sub_8004AFB8(void* p) { *(s32*)((char*)p + 0x384) = 1; }

u8 is_ending_or_split_screen__14TBoss4DarkFalzFv(void) {
    int var_r31;

    var_r31 = 0;
    if ((get_main_phase() == 0xF) || (is_split_screen() != 0)) {
        var_r31 = 1;
    }
    return (u8)var_r31;
}
int TBoss4DarkFalz__sub_8004B07C(void) { return 0; }

void update_visible_flag__14TBoss4DarkFalzFPv(void *arg0) {
    if (TLobby__sub_800C6C10() != 0) {
        M2C_FIELD(arg0, s32 *, 0x378) = 0;
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x378) = 1;
}

s32 calc_rate_from_field__14TBoss4DarkFalzFPv(void *arg0) {
    s32 temp_r3;

    temp_r3 = M2C_FIELD(arg0, s32 *, 0x390);
    if (temp_r3 > 0) {
        return 0x10000 / temp_r3;
    }
    return 0;
}

s32 is_timer_expired__14TBoss4DarkFalzFPv(void *arg0) {
    s32 var_r4;

    var_r4 = M2C_FIELD(dispatch_shared_handler_a__6TLobbyFPv(0x35), s32 *, 0x18);
    if ((var_r4 < 1) || (var_r4 > 0x13)) {
        var_r4 = 2;
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0x38C) >= (s32) (var_r4 * M2C_FIELD(arg0, s32 *, 0x390))) {
        return 1;
    }
    return 0;
}
void TBoss4DarkFalz__sub_8004B730(u8 *arg0, s32 arg1, f32 farg0) {
    f32 var_f1;
    u8 *temp_r3;
    var_f1 = farg0;
    temp_r3 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x398));
    if ((temp_r3 != NULL) && !(var_f1 <= lbl_805D8908)) {
        if (var_f1 > lbl_805D8910) {
            var_f1 = lbl_805D8910;
        }
        fn_803594B4(temp_r3, arg1, var_f1);
    }
}

}
