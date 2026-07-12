#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TAdSinglePlyChrSelectGC__sub_80132F2C(M2C_UNK, s32);
u32 TPlayerBattleCtrl4P__sub_801BA74C(s16);
s32 fn_801C5404(s32);
s8 clamp_char_at__10TObjPlayerFPvi(s32, s32);
s32 TObjPlayer__sub_80203418();
s32 TObjPlayer__sub_802034EC();
u16 *get_array_entry__20TWindowSubStatusDispFPvi(void *, s16);
M2C_UNK setup_stat_line__20TWindowSubStatusDispFPviii(u16 *, s32, s32, s32);

void add_battle_stat_entry(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 var_r31;
    u16 *temp_r30;
    u32 temp_r3;

    if ((s16) M2C_FIELD(arg0, s16 *, 0x72) < (s16) M2C_FIELD(arg0, s16 *, 0x76)) {
        temp_r3 = TPlayerBattleCtrl4P__sub_801BA74C(M2C_FIELD(arg0, s16 *, 0x20));
        if (temp_r3 != 0U) {
            if (arg1 == 4) {
                var_r31 = fn_801C5404(temp_r3 + 0x7C8);
            } else {
                var_r31 = clamp_char_at__10TObjPlayerFPvi(temp_r3 + 0x7C4, arg1);
            }
            if (var_r31 > 0) {
                temp_r30 = get_array_entry__20TWindowSubStatusDispFPvi(arg0, M2C_FIELD(arg0, s16 *, 0x72));
                setup_stat_line__20TWindowSubStatusDispFPviii(temp_r30, TAdSinglePlyChrSelectGC__sub_80132F2C(0x10, arg1 + 0x13), var_r31, arg2);
                if ((arg3 != 0) && ((TObjPlayer__sub_802034EC() == 0) || (TObjPlayer__sub_80203418() != 0))) {
                    *temp_r30 |= 0x80;
                }
                M2C_FIELD(arg0, s16 *, 0x72) = (s16) (M2C_FIELD(arg0, s16 *, 0x72) + 1);
            }
        }
    }
}

}
