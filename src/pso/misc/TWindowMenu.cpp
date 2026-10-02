#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
s32 is_visible__17TWindowSubComCardFPv(void *);
void set_entry_state__20TWindowSubStatusDispFPvc(void *, s8);
M2C_UNK play_sound_effect(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
void TWindowMenu__sub_802657E4(u8 *arg0);
}

extern "C" {

void move_cursor_prev__11TWindowMenuFPv(void *arg0);
void select_next_item__11TWindowMenuFPv(void *arg0);
void set_active_flag__11TWindowMenuFPv(void *arg0);
M2C_UNK play_sound_effect(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
s32 TWindowMenu__sub_80266B18(void *, s32);

void set_active_flag__11TWindowMenuFPv(void *arg0) {
    if (!(M2C_FIELD(arg0, u16 *, 0x70) & 8) && (is_visible__17TWindowSubComCardFPv((void *)(arg0)) == 0)) {
        if (!(M2C_FIELD(arg0, u16 *, 0x70) & 0x400)) {
            play_sound_effect(0x52F16, 0, 0, 0);
        }
        M2C_FIELD(arg0, u16 *, 0x70) = (u16) (M2C_FIELD(arg0, u16 *, 0x70) | 4);
    }
}

void TWindowMenu__sub_802657E4(u8 *arg0) {
    s32 temp_r3;
    u8 *temp_r3_2;
    if (((int)is_visible__17TWindowSubComCardFPv((void *)(arg0))) == 0) {
        temp_r3 = M2C_FIELD(M2C_FIELD(arg0, s32 *, 0x80), M2C_UNK *, (M2C_FIELD(arg0, s16 *, 0x78) * 8));
        if (temp_r3 & 0x10) {
            if (!(temp_r3 & 0x20)) {
                play_sound_effect((M2C_UNK)((int) (0x53F06)), (M2C_UNK)((int) (0)), (M2C_UNK)((int) (0)), (M2C_UNK)((int) (0)));
            }
        } else {
            if (!(temp_r3 & 0x20)) {
                play_sound_effect((M2C_UNK)((int) (0x52D01)), (M2C_UNK)((int) (0)), (M2C_UNK)((int) (0)), (M2C_UNK)((int) (0)));
            }
            M2C_FIELD(arg0, u16 *, 0x70) = (u16) (M2C_FIELD(arg0, u16 *, 0x70) | 2);
            temp_r3_2 = (u8 *)(M2C_FIELD(arg0, u8 **, 0x88));
            if (temp_r3_2 != NULL) {
                set_entry_state__20TWindowSubStatusDispFPvc(temp_r3_2, 2);
            }
        }
    }
}

void select_next_item__11TWindowMenuFPv(void *arg0) {
    s16 var_r31;

    play_sound_effect(0x54100, 0, 0, 0);
    var_r31 = M2C_FIELD(arg0, s16 *, 0x78);
loop_1:
    var_r31 += 1;
    if (var_r31 >= (s16) M2C_FIELD(arg0, s16 *, 0x76)) {
        if (!(M2C_FIELD(arg0, u16 *, 0x70) & 1)) {
            var_r31 = 0;
            goto block_4;
        }
    } else {
block_4:
        if (var_r31 != (s16) M2C_FIELD(arg0, s16 *, 0x78)) {
            if (TWindowMenu__sub_80266B18(arg0, var_r31) != 0) {
                M2C_FIELD(arg0, s16 *, 0x78) = var_r31;
            } else {
                goto loop_1;
            }
        }
    }
}

void move_cursor_prev__11TWindowMenuFPv(void *arg0) {
    s16 var_r31;

    play_sound_effect(0x54100, 0, 0, 0);
    var_r31 = M2C_FIELD(arg0, s16 *, 0x78);
loop_1:
    var_r31 -= 1;
    if (var_r31 < 0) {
        if (!(M2C_FIELD(arg0, u16 *, 0x70) & 1)) {
            var_r31 = M2C_FIELD(arg0, s16 *, 0x76) - 1;
            goto block_4;
        }
    } else {
block_4:
        if (var_r31 != (s16) M2C_FIELD(arg0, s16 *, 0x78)) {
            if (TWindowMenu__sub_80266B18(arg0, var_r31) != 0) {
                M2C_FIELD(arg0, s16 *, 0x78) = var_r31;
            } else {
                goto loop_1;
            }
        }
    }
}

}
