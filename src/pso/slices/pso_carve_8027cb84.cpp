#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 is_split_screen();
s32 TWindowSubStatusDisp__sub_80077760(M2C_UNK);
M2C_UNK set_flag70_bit10__16TObjCityMainWarpFPv(s32);
M2C_UNK TLobby__sub_80244D2C(s32);
M2C_UNK fn_80263AF8(s32, M2C_UNK);
M2C_UNK TWindowSubComCard__sub_80265C30(s32);
M2C_UNK TWindowSubComCard__sub_80265E60(s32, f32);
M2C_UNK TObjCityMainWarp__sub_80266354(s32, s32, M2C_UNK, M2C_UNK);
s32 fn_8026652C(s32, M2C_UNK, s32, s32);
M2C_UNK TWindowSubComCard__sub_8026CBB8(M2C_UNK);
extern const f32 lbl_805DD688;

s32 create_option_menu_window(void *arg0) {
    s32 temp_r31;

    temp_r31 = fn_8026652C(TWindowSubComCard__sub_8026CBB8(0x15), 6, TWindowSubStatusDisp__sub_80077760(0x2A), M2C_FIELD(arg0, s32 *, 0x20));
    if (is_split_screen() == 0) {
        TObjCityMainWarp__sub_80266354(temp_r31, TWindowSubStatusDisp__sub_80077760(0x66), 6, 0);
    }
    TObjCityMainWarp__sub_80266354(temp_r31, TWindowSubStatusDisp__sub_80077760(0x67), 6, 1);
    TObjCityMainWarp__sub_80266354(temp_r31, TWindowSubStatusDisp__sub_80077760(0x68), 6, 2);
    TObjCityMainWarp__sub_80266354(temp_r31, TWindowSubStatusDisp__sub_80077760(0x69), 6, 3);
    TObjCityMainWarp__sub_80266354(temp_r31, TWindowSubStatusDisp__sub_80077760(0x6A), 6, 4);
    if (is_split_screen() == 0) {
        TObjCityMainWarp__sub_80266354(temp_r31, TWindowSubStatusDisp__sub_80077760(0x6E), 6, 5);
    }
    set_flag70_bit10__16TObjCityMainWarpFPv(temp_r31);
    TWindowSubComCard__sub_80265E60(temp_r31, lbl_805DD688);
    TWindowSubComCard__sub_80265C30(temp_r31);
    fn_80263AF8(M2C_FIELD(arg0, s32 *, 0x24), 0);
    TLobby__sub_80244D2C(temp_r31);
    return temp_r31;
}

}
