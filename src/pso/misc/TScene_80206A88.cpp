#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void load_file_to_buffer__6TSceneFi(s32 arg0);
s32 get_global_state__14TOKeyMachine01Fv();
u32 alloc__22TQuestVmDownLoadServerFPv(s32);
s32 update_lobby_scene__6TSceneFPv(M2C_UNK *);
M2C_UNK TLobby__sub_800F9DF4(M2C_UNK *, u32);
M2C_UNK TLobby__sub_801317E4(M2C_UNK *, s32, M2C_UNK *);

extern M2C_UNK lbl_8044A98C[];
extern u32 TScene__data_805D6028;
extern s32 lbl_805D602C;

void load_file_to_buffer__6TSceneFi(s32 arg0) {
    M2C_UNK sp8[8];
    s32 temp_r31;
    u32 temp_r3;
    u32 temp_r3_2;

    TScene__data_805D6028 = 0U;
    lbl_805D602C = 0;
    TLobby__sub_801317E4(sp8, arg0, lbl_8044A98C);
    temp_r31 = update_lobby_scene__6TSceneFPv(sp8);
    if (get_global_state__14TOKeyMachine01Fv() == 0xF) {
        if ((temp_r31 > 0) && ((u32) temp_r31 <= 0x100U)) {
            temp_r3 = alloc__22TQuestVmDownLoadServerFPv(0x100);
            TScene__data_805D6028 = temp_r3;
            if (temp_r3 != 0U) {
                TLobby__sub_800F9DF4(sp8, temp_r3);
                lbl_805D602C = 0x100;
            }
        }
    } else if (temp_r31 > 0) {
        temp_r3_2 = alloc__22TQuestVmDownLoadServerFPv(temp_r31);
        TScene__data_805D6028 = temp_r3_2;
        if (temp_r3_2 != 0U) {
            TLobby__sub_800F9DF4(sp8, temp_r3_2);
            lbl_805D602C = temp_r31;
        }
    }
}

}
