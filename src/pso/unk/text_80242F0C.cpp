#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
s32 is_split_screen();
u32 get_player_by_client_id(s32);
s32 test_card_flag8__23TAdSinglePlyChrSelectGCFPv(s32);
extern s32 lbl_805D53A0;
s32 fn_80242F0C(s32 arg0);
}

extern "C" {

s32 fn_80242F0C(s32 arg0) {
    switch (is_split_screen()) {
    case 0:
        if (arg0 != 0) {
            return 0xFFFF;
        }
        arg0 = lbl_805D53A0;
        break;
    }
    if (test_card_flag8__23TAdSinglePlyChrSelectGCFPv(arg0) != 0) {
        return 0xFFFF;
    }
    if (get_player_by_client_id(arg0) != 0) {
        return arg0;
    }
    return 0xFFFF;
}

}
