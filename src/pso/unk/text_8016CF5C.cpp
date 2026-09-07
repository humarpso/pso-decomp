#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_8016D1A8_lbl_80441D84 {
    M2C_UNK value;
    u8 remaining[0x8C];
};

struct RecoveredGlobal_8016D2A4_lbl_80441D84 {
    M2C_UNK value;
    u8 remaining[0x8C];
};

extern "C" {
s32 is_split_screen();
s32 TOKey__sub_8016A280(void *);
s32 TOKey__sub_8016A310(void *);
s32 TOKeyMachine01__vt13(u8 *arg0);
extern const f32 lbl_805DB780;
extern const f32 lbl_805DB784;
extern const f32 lbl_805DB788;
extern const f32 lbl_805DB78C;
void TOKeyMachine01__vt15(u8 *arg0);
s32 get_global_state__14TOKeyMachine01Fv(void);
s32 TBoss3Volopt__sub_8022675C(s32, u32, s16, s32);
extern RecoveredGlobal_8016D1A8_lbl_80441D84 lbl_80441D84;
extern s32 enable_v2_features;
void TOKeyMachine01__vt17(s32 arg0);
s32 get_global_state__14TOKeyMachine01Fv(void);
s32 TBoss3Volopt__sub_8022675C(s32, u32, s16, s32);
extern RecoveredGlobal_8016D1A8_lbl_80441D84 lbl_80441D84;
extern s32 enable_v2_features;
void TOKeyMachine01__vt16(s32 arg0);
}

extern "C" {

void TOKeyMachine01__vt23(void);

void TOKeyMachine01__vt23(void) {  }
s32 TOKeyMachine01__vt13(u8 *arg0) {
    s32 temp_r0;
    s32 var_r31;
    s32 var_r3;
    var_r31 = 0;
    temp_r0 = M2C_FIELD(arg0, s32 *, 0xD0);
    switch (temp_r0) {
    case 0:
        if (is_split_screen() == 1) {
            var_r3 = TOKey__sub_8016A280((void *) (arg0));
        } else {
            var_r3 = TOKey__sub_8016A310((void *) (arg0));
        }
        if (((s32) M2C_FIELD(arg0, s32 *, 0xD4) == 1) || (var_r3 == 1)) {
            var_r31 = 1;
        }
        break;
    case 1:
        var_r31 = TOKey__sub_8016A280((void *) (arg0));
        break;
    }
    return var_r31;
}

typedef char RecoveredGlobal_8016D1A8_lbl_80441D84_size[sizeof(RecoveredGlobal_8016D1A8_lbl_80441D84) == 0x90 ? 1 : -1];
void TOKeyMachine01__vt17(s32 arg0) {
    s32 temp_r3;
    s32 temp_r3_2;
    s32 temp_r3_3;
    if (((s32) enable_v2_features == 1) && ((get_global_state__14TOKeyMachine01Fv() == 0x10) || (get_global_state__14TOKeyMachine01Fv() == 0x11))) {
        temp_r3 = M2C_FIELD(&lbl_80441D84.value, M2C_UNK *, (get_global_state__14TOKeyMachine01Fv() * 4));
        if (temp_r3 >= 0) {
            TBoss3Volopt__sub_8022675C(temp_r3, arg0 + 0x38, 0, 0);
        }
    } else if (((s32) enable_v2_features == 1) && ((get_global_state__14TOKeyMachine01Fv() == 1) || (get_global_state__14TOKeyMachine01Fv() == 2))) {
        temp_r3_2 = M2C_FIELD(&lbl_80441D84.value, M2C_UNK *, (get_global_state__14TOKeyMachine01Fv() * 4));
        if (temp_r3_2 >= 0) {
            TBoss3Volopt__sub_8022675C(temp_r3_2, arg0 + 0x38, 0, 0);
        }
    } else {
        temp_r3_3 = M2C_FIELD(&lbl_80441D84.value, M2C_UNK *, (get_global_state__14TOKeyMachine01Fv() * 4));
        if (temp_r3_3 >= 0) {
            TBoss3Volopt__sub_8022675C(temp_r3_3, arg0 + 0x38, 0, 0);
        }
    }
}

typedef char RecoveredGlobal_8016D2A4_lbl_80441D84_size[sizeof(RecoveredGlobal_8016D2A4_lbl_80441D84) == 0x90 ? 1 : -1];
void TOKeyMachine01__vt16(s32 arg0) {
    s32 temp_r3;
    s32 temp_r3_2;
    s32 temp_r3_3;
    if (((s32) enable_v2_features == 1) && ((get_global_state__14TOKeyMachine01Fv() == 0x10) || (get_global_state__14TOKeyMachine01Fv() == 0x11))) {
        temp_r3 = M2C_FIELD(&(*(RecoveredGlobal_8016D2A4_lbl_80441D84 *)&lbl_80441D84).value, M2C_UNK *, (get_global_state__14TOKeyMachine01Fv() * 4));
        if (temp_r3 >= 0) {
            TBoss3Volopt__sub_8022675C(temp_r3, arg0 + 0x38, 0, 0);
        }
    } else if (((s32) enable_v2_features == 1) && ((get_global_state__14TOKeyMachine01Fv() == 1) || (get_global_state__14TOKeyMachine01Fv() == 2))) {
        temp_r3_2 = M2C_FIELD(&(*(RecoveredGlobal_8016D2A4_lbl_80441D84 *)&lbl_80441D84).value, M2C_UNK *, (get_global_state__14TOKeyMachine01Fv() * 4));
        if (temp_r3_2 >= 0) {
            TBoss3Volopt__sub_8022675C(temp_r3_2, arg0 + 0x38, 0, 0);
        }
    } else {
        temp_r3_3 = M2C_FIELD(&(*(RecoveredGlobal_8016D2A4_lbl_80441D84 *)&lbl_80441D84).value, M2C_UNK *, (get_global_state__14TOKeyMachine01Fv() * 4));
        if (temp_r3_3 >= 0) {
            TBoss3Volopt__sub_8022675C(temp_r3_3, arg0 + 0x38, 0, 0);
        }
    }
}

void TOKeyMachine01__vt15(u8 *arg0) {
    f32 temp_f1;
    if ((s32) M2C_FIELD(arg0, s32 *, 0xF8) == 1) {
        M2C_FIELD(arg0, f32 *, 0xEC) = (f32) (M2C_FIELD(arg0, f32 *, 0xEC) + lbl_805DB780);
        if (lbl_805DB784 <= M2C_FIELD(arg0, f32 *, 0xEC)) {
            M2C_FIELD(arg0, s32 *, 0xF8) = 0;
        }
    } else {
        M2C_FIELD(arg0, f32 *, 0xEC) = (f32) (M2C_FIELD(arg0, f32 *, 0xEC) - lbl_805DB780);
        if (M2C_FIELD(arg0, f32 *, 0xEC) <= lbl_805DB788) {
            M2C_FIELD(arg0, s32 *, 0xF8) = 1;
        }
    }
    temp_f1 = M2C_FIELD(arg0, f32 *, 0x6C);
    if (temp_f1 < lbl_805DB788) {
        M2C_FIELD(arg0, f32 *, 0x6C) = (f32) (temp_f1 - lbl_805DB78C);
    }
}

}
