#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 create_menu__17TWindowSubComCardFv(void);
M2C_UNK set_flag70_bit10__16TObjCityMainWarpFPv(s32);
M2C_UNK TObjCityMainWarp__sub_80266354(s32, s32, M2C_UNK, M2C_UNK);
s32 TWindowSubStatusDisp__sub_80077760(M2C_UNK);
s32 TQuestVmDownLoadServer__sub_8006EF6C(M2C_UNK);
M2C_UNK TWindowSubComCard__sub_80265C30(s32);
M2C_UNK TWindowSubComCard__sub_80265E60(s32, f32);
M2C_UNK TWindowSubComCard__sub_802661D4(s32, s32, M2C_UNK, M2C_UNK);
s32 TWindowSubComCard__sub_8026659C(s32, M2C_UNK, s32);
M2C_UNK TWindowSubComCard__sub_8026CBB8(M2C_UNK);

s32 get_main_phase();
extern const f32 lbl_805DD530;

s32 create_menu__17TWindowSubComCardFv(void) {
    s32 temp_r31;

    temp_r31 = TWindowSubComCard__sub_8026659C(TWindowSubComCard__sub_8026CBB8(0x7F), 6, TWindowSubStatusDisp__sub_80077760(0x1D));
    TObjCityMainWarp__sub_80266354(temp_r31, TWindowSubStatusDisp__sub_80077760(0x52), 6, 3);
    TObjCityMainWarp__sub_80266354(temp_r31, TWindowSubStatusDisp__sub_80077760(0x53), 6, 0xB);
    TObjCityMainWarp__sub_80266354(temp_r31, TWindowSubStatusDisp__sub_80077760(0x54), 6, 0x1D);
    if (get_main_phase() == 0xF) {
        TObjCityMainWarp__sub_80266354(temp_r31, TQuestVmDownLoadServer__sub_8006EF6C(0x49), 6, 0x27);
        TObjCityMainWarp__sub_80266354(temp_r31, TWindowSubStatusDisp__sub_80077760(0x6D), 6, 0x33);
        TObjCityMainWarp__sub_80266354(temp_r31, TWindowSubStatusDisp__sub_80077760(0xF8), 6, 0x39);
    } else {
        TWindowSubComCard__sub_802661D4(temp_r31, TQuestVmDownLoadServer__sub_8006EF6C(0x49), 6, 0x27);
        TWindowSubComCard__sub_802661D4(temp_r31, TWindowSubStatusDisp__sub_80077760(0x6D), 6, 0x33);
        TWindowSubComCard__sub_802661D4(temp_r31, TWindowSubStatusDisp__sub_80077760(0xF8), 6, 0x39);
    }
    set_flag70_bit10__16TObjCityMainWarpFPv(temp_r31);
    TWindowSubComCard__sub_80265E60(temp_r31, lbl_805DD530);
    TWindowSubComCard__sub_80265C30(temp_r31);
    return temp_r31;
}

}
