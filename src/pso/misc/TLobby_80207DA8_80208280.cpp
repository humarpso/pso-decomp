#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 get_drop_item_mode__6TLobbyFv(void);
s32 get_instance__6TLobbyFv();
s32 get_main_phase();
s32 is_split_screen();

extern s32 lbl_805D5550;

s32 get_drop_item_mode__6TLobbyFv(void) {
    s32 temp_r3;

    temp_r3 = get_main_phase();
    switch (temp_r3) {
    case 15:
        if ((get_instance__6TLobbyFv() == 0) && ((s32) lbl_805D5550 == 3)) {
            return 3;
        }
        return 2;
    case 14:
        if (is_split_screen() == 1) {
            if ((get_instance__6TLobbyFv() == 0) && ((s32) lbl_805D5550 == 3)) {
                return 3;
            }
            return 2;
        }
        if ((get_instance__6TLobbyFv() == 0) && ((s32) lbl_805D5550 == 3)) {
            return 1;
        }
        return 0;
    default:
        return 3;
    }
}

}
