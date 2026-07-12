#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void load_map_texture_archive__6TSceneFi(s32 arg0);
s32 TOKeyMachine01__sub_802034A8();
s32 is_not_split_screen__13TRaderMapCoreFv();
u32 TQuestVmDownLoadServer__sub_8007EBFC(s32);
s32 TScene__sub_800F9D80(char *);
M2C_UNK TLobby__sub_800F9DF4(char *, u32);
M2C_UNK TLobby__sub_801317E4(char *, s32, const char *);

extern const char lbl_8044A940[];
extern const char lbl_8044A9A4[];
extern u32 TScene__data_805D6004;
extern s32 lbl_805D6018;

void load_map_texture_archive__6TSceneFi(s32 arg0) {
    char sp8[0x20];
    s32 temp_r31;
    s32 var_r30;
    u32 temp_r3;
    u32 temp_r3_2;

    temp_r31 = TOKeyMachine01__sub_802034A8();
    TScene__data_805D6004 = 0U;
    var_r30 = 0;
    lbl_805D6018 = 0;
    if (is_not_split_screen__13TRaderMapCoreFv() == 1) {
        TLobby__sub_801317E4(sp8, arg0, lbl_8044A9A4);
        var_r30 = TScene__sub_800F9D80(sp8);
    }
    if (var_r30 <= 0) {
        TLobby__sub_801317E4(sp8, arg0, lbl_8044A940);
        var_r30 = TScene__sub_800F9D80(sp8);
    }
    if (temp_r31 == 0xF) {
        if ((var_r30 > 0) && ((u32) var_r30 <= 0x100U)) {
            temp_r3 = TQuestVmDownLoadServer__sub_8007EBFC(0x100);
            TScene__data_805D6004 = temp_r3;
            if (temp_r3 != 0U) {
                TLobby__sub_800F9DF4(sp8, temp_r3);
                lbl_805D6018 = 0x100;
            }
        }
    } else if (var_r30 > 0) {
        temp_r3_2 = TQuestVmDownLoadServer__sub_8007EBFC(var_r30);
        TScene__data_805D6004 = temp_r3_2;
        if (temp_r3_2 != 0U) {
            TLobby__sub_800F9DF4(sp8, temp_r3_2);
            lbl_805D6018 = var_r30;
        }
    }
}

}
