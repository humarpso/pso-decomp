#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 fn_8025B514(s32, s32, s32, s32);
s32 fn_8025B5AC(s32, s32, s32);
u32 fn_8007EB94(s32);
u32 fn_802880BC(u32, s32, s16);
s32 fn_8028783C(s32 a0 = 0, s32 a1 = 0);
s32 fn_8026906C(void);
void move_next_choice__20TWindowChoiceSettingFPv(void *arg0);
s32 fn_8022675C(s32 a0 = 0, s32 a1 = 0, s32 a2 = 0, s32 a3 = 0);
s32 TWindowMenu__sub_80266B18(void *, s32);
void move_cursor_prev__20TWindowChoiceSettingFPv(void *arg0);
void request_close__20TWindowChoiceSettingFPv(void *arg0);
s32 TWindowSubComCard__sub_80249604();
void update_selected_entry__17TWindowSubComCardFPv(void *arg0);
s32 get_array_entry__20TWindowSubStatusDispFPvi(void * a0 = 0, s16 a1 = 0);
M2C_UNK fn_80269064();
void fn_80268468(void* p);
void clear_flag70_bit80__19TWindowSubTradeMainFPv(void* p);
int fn_80268488(void* p);

void request_close__20TWindowChoiceSettingFPv(void *arg0) {
    if (!(M2C_FIELD(arg0, u16 *, 0x70) & 8) && (TWindowSubComCard__sub_80249604() == 0)) {
        fn_8022675C(0x52F16, 0, 0, 0);
        M2C_FIELD(arg0, u16 *, 0x70) = (u16) (M2C_FIELD(arg0, u16 *, 0x70) | 4);
    }
}
void draw__20TWindowChoiceSettingFPv(void *arg0) {
    get_array_entry__20TWindowSubStatusDispFPvi(arg0, M2C_FIELD(arg0, s16 *, 0x74));
    if (fn_8026906C() == 0) {
        fn_8022675C(0x52D01, 0, 0, 0);
        M2C_FIELD(arg0, u16 *, 0x70) = (u16) (M2C_FIELD(arg0, u16 *, 0x70) | 2);
        if ((u32) M2C_FIELD(arg0, u32 *, 0x78) != 0U) {
            fn_8028783C(M2C_FIELD(arg0, s32 *, 0x78), 2);
        }
    }
}
void move_next_choice__20TWindowChoiceSettingFPv(void *arg0) {
    s16 var_r31;

    fn_8022675C(0x54100, 0, 0, 0);
    var_r31 = M2C_FIELD(arg0, s16 *, 0x74);
loop_1:
    var_r31 += 1;
    if (var_r31 >= (s16) M2C_FIELD(arg0, s16 *, 0x76)) {
        if (!(M2C_FIELD(arg0, u16 *, 0x70) & 1)) {
            var_r31 = 0;
            goto block_4;
        }
    } else {
block_4:
        if (var_r31 != (s16) M2C_FIELD(arg0, s16 *, 0x74)) {
            if (TWindowMenu__sub_80266B18(arg0, var_r31) != 0) {
                M2C_FIELD(arg0, s16 *, 0x74) = var_r31;
            } else {
                goto loop_1;
            }
        }
    }
}
void move_cursor_prev__20TWindowChoiceSettingFPv(void *arg0) {
    s16 var_r31;

    fn_8022675C(0x54100, 0, 0, 0);
    var_r31 = M2C_FIELD(arg0, s16 *, 0x74);
loop_1:
    var_r31 -= 1;
    if (var_r31 < 0) {
        if (!(M2C_FIELD(arg0, u16 *, 0x70) & 1)) {
            var_r31 = M2C_FIELD(arg0, s16 *, 0x76) - 1;
            goto block_4;
        }
    } else {
block_4:
        if (var_r31 != (s16) M2C_FIELD(arg0, s16 *, 0x74)) {
            if (TWindowMenu__sub_80266B18(arg0, var_r31) != 0) {
                M2C_FIELD(arg0, s16 *, 0x74) = var_r31;
            } else {
                goto loop_1;
            }
        }
    }
}
void create_sub_window__20TWindowChoiceSettingFPvi(void *arg0, s32 arg1) {
    u32 var_r0;

    if ((u32) M2C_FIELD(arg0, u32 *, 0x78) == 0U) {
        var_r0 = fn_8007EB94(0x24);
        if (var_r0 != 0U) {
            var_r0 = fn_802880BC(var_r0, arg1, M2C_FIELD(arg0, s16 *, 0x20));
        }
        M2C_FIELD(arg0, u32 *, 0x78) = var_r0;
        M2C_FIELD(arg0, s32 *, 0x2C) = (s32) (M2C_FIELD(arg0, s32 *, 0x2C) | 0x40);
    }
}

}
