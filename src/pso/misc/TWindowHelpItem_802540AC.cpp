#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_stat_disp__15TWindowHelpItemFPv(void *arg0);
s32 TPlayerBattleCtrl4P__sub_801BA74C(s16);
s32 TWindowHelpItem__sub_80104FCC(s32, M2C_UNK, M2C_UNK *);
M2C_UNK set_flag_0x10__15TWindowHelpItemFPvi(s32, M2C_UNK);
s32 get_array_entry__20TWindowSubStatusDispFPvi(void *, M2C_UNK);

void update_stat_disp__15TWindowHelpItemFPv(void *arg0) {
    M2C_UNK sp8;
    s32 a;
    s32 b;
    s32 c;
    s32 d;
    s32 e;
    s32 temp_r3;

    temp_r3 = TPlayerBattleCtrl4P__sub_801BA74C(M2C_FIELD(arg0, s16 *, 0x20));
    if (temp_r3 != 0) {
        a = get_array_entry__20TWindowSubStatusDispFPvi(arg0, 0);
        b = get_array_entry__20TWindowSubStatusDispFPvi(arg0, 1);
        c = get_array_entry__20TWindowSubStatusDispFPvi(arg0, 2);
        d = get_array_entry__20TWindowSubStatusDispFPvi(arg0, 3);
        e = get_array_entry__20TWindowSubStatusDispFPvi(arg0, 4);
        if (M2C_FIELD(arg0, u32 *, 0x70) != 0) {
            if (TWindowHelpItem__sub_80104FCC(temp_r3, M2C_FIELD(arg0, u32 *, 0x70), &sp8) != 0) {
                set_flag_0x10__15TWindowHelpItemFPvi(a, 1);
                set_flag_0x10__15TWindowHelpItemFPvi(b, 1);
                set_flag_0x10__15TWindowHelpItemFPvi(c, 1);
                set_flag_0x10__15TWindowHelpItemFPvi(d, 1);
                set_flag_0x10__15TWindowHelpItemFPvi(e, 1);
                return;
            }
            set_flag_0x10__15TWindowHelpItemFPvi(a, 0);
            set_flag_0x10__15TWindowHelpItemFPvi(b, 0);
            set_flag_0x10__15TWindowHelpItemFPvi(c, 0);
            set_flag_0x10__15TWindowHelpItemFPvi(d, 0);
            set_flag_0x10__15TWindowHelpItemFPvi(e, 0);
        }
    }
}

}
