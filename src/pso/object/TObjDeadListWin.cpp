#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update_countdown__15TObjDeadListWinFPv(void *arg0);
s32 TPlayerBattleCtrl4P__sub_801BA74C(s32);
M2C_UNK TWindow__close(void *);
s32 check_player_flag1__6TLobbyFPv(s32);
s32 obj_testFlags30(M2C_UNK, M2C_UNK);
M2C_UNK queue_destruction__7TObjectFv(void *);

extern s32 lbl_805D53A0;

void update_countdown__15TObjDeadListWinFPv(void *arg0) {
    s32 temp_r0;
    s32 temp_r3;

    temp_r3 = TPlayerBattleCtrl4P__sub_801BA74C(lbl_805D53A0);
    if ((temp_r3 == 0) || (obj_testFlags30(temp_r3, 0x02000000) != 0)) {
        queue_destruction__7TObjectFv(arg0);
        return;
    }
    if ((check_player_flag1__6TLobbyFPv(temp_r3) == 0) && ((s32) M2C_FIELD(arg0, s32 *, 0x24) > 0x5A)) {
        M2C_FIELD(arg0, s32 *, 0x24) = 0x5A;
    }
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x24) - 1;
    M2C_FIELD(arg0, s32 *, 0x24) = temp_r0;
    if (temp_r0 < 0) {
        if ((u32) M2C_FIELD(arg0, u32 *, 0x20) != 0U) {
            TWindow__close(M2C_FIELD(arg0, void **, 0x20));
            M2C_FIELD(arg0, u32 *, 0x20) = 0U;
        }
        queue_destruction__7TObjectFv(arg0);
    }
}

}
