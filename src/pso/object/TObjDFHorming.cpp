#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
u8 *get_player_data__10TObjPlayerFi(s32);
s16 obj_getField1c(void *);
s32 TBoss4Type3__sub_8005254C(s16);
s32 rand__11TOBoss4RockFv(void);
extern s32 lbl_805D586C;
extern const f32 lbl_805D890C;
extern const f32 lbl_805D8918;
u16 TBoss4Type3__sub_8004AE60(void);
}

extern "C" {

u8 is_active__14TBoss4DarkFalzFv(void);
u8 is_boss_active__13TObjDFHormingFv(void);
u8 is_state_ready__14TBoss4DarkFalzFv(void);
u32 TBoss4DarkFalz__sub_8004C1AC();
u32 TBoss4DarkFalz__sub_8004C1B4();
s32 get_action_state__14TBoss4DarkFalzFPv();
u32 get_instance__14TBoss4DarkFalzFv();
s32 get_phase__14TBoss4DarkFalzFPv();
s32 get_state__14TBoss4DarkFalzFPv();

u8 is_boss_active__13TObjDFHormingFv(void) {
    int var_r31;

    var_r31 = 0;
    if (TBoss4DarkFalz__sub_8004C1AC() != 0U) {
        TBoss4DarkFalz__sub_8004C1AC();
        if (get_action_state__14TBoss4DarkFalzFPv() != 3) {
            TBoss4DarkFalz__sub_8004C1AC();
            if (get_action_state__14TBoss4DarkFalzFPv() != 2) {
                var_r31 = 1;
            }
        }
    }
    return (u8) var_r31;
}

u8 is_state_ready__14TBoss4DarkFalzFv(void) {
    int var_r31;

    var_r31 = 0;
    if (TBoss4DarkFalz__sub_8004C1B4() != 0U) {
        TBoss4DarkFalz__sub_8004C1B4();
        if (get_phase__14TBoss4DarkFalzFPv() != 3) {
            TBoss4DarkFalz__sub_8004C1B4();
            if (get_phase__14TBoss4DarkFalzFPv() != 2) {
                var_r31 = 1;
            }
        }
    }
    return (u8) var_r31;
}

u8 is_active__14TBoss4DarkFalzFv(void) {
    int var_r31;

    var_r31 = 0;
    if (get_instance__14TBoss4DarkFalzFv() != 0U) {
        get_instance__14TBoss4DarkFalzFv();
        if (get_state__14TBoss4DarkFalzFPv() != 3) {
            get_instance__14TBoss4DarkFalzFv();
            if (get_state__14TBoss4DarkFalzFPv() != 4) {
                var_r31 = 1;
            }
        }
    }
    return (u8) var_r31;
}
u16 TBoss4Type3__sub_8004AE60(void) {
    u16 buf[4];
    s32 n;
    s32 i;
    u8 *p;
    n = 0;
    for (i = 0; i < lbl_805D586C; i++) {
        p = get_player_data__10TObjPlayerFi(i);
        if (p != NULL && TBoss4Type3__sub_8005254C(obj_getField1c(p)) != 0) {
            buf[n++] = obj_getField1c(p);
            if (n >= 4) {
                break;
            }
        }
    }
    if (n == 0) {
        return 0xFFFF;
    }
    return buf[(s32)(((f32)n - lbl_805D890C) * (lbl_805D8918 * (f32)rand__11TOBoss4RockFv()))];
}

}
