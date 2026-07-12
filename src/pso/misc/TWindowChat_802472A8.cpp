#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void update__11TWindowChatFPv(void *arg0);
void open_input__11TWindowChatFPv(void *arg0);
s32 TPlayerBattleCtrl4P__sub_801BA74C(s32);
M2C_UNK close_all_children__11TWindowChatFPv(void *);
M2C_UNK TWindowChat__sub_8024792C(void *);
s32 TWindowChat__sub_80247DF0(void *);
M2C_UNK TWindowChat__sub_80247DFC(void *);
M2C_UNK TWindowChat__sub_80247E50(void *);
s32 TWindowChat__sub_80247EB4();
M2C_UNK TWindowChat__sub_8024AD30(s32);
M2C_UNK TWindowChat__sub_8025CB70(s32);
s32 TWindowCtrl__sub_8024AF74(s32);
M2C_UNK clear_flag60_bit200__16TKeyBoardControlFPv(s32);
M2C_UNK init_parts__10TObjPlayerFPv(s32);
M2C_UNK set_flag60_bit200__16TKeyBoardControlFPv(s32);

extern s32 lbl_805D53A0;

void update__11TWindowChatFPv(void *arg0) {
    s32 temp_r3;

    if (TWindowChat__sub_80247EB4() == 0) {
        M2C_FIELD(arg0, u16 *, 0x1E) = (u16) (M2C_FIELD(arg0, u16 *, 0x1E) | 1);
        TWindowChat__sub_80247E50(arg0);
        TWindowChat__sub_80247DFC(arg0);
        temp_r3 = TPlayerBattleCtrl4P__sub_801BA74C(lbl_805D53A0);
        if ((temp_r3 != 0) && !(M2C_FIELD(arg0, u16 *, 0x1E) & 2) && (TWindowChat__sub_80247DF0(arg0) != 0)) {
            if (TWindowCtrl__sub_8024AF74(lbl_805D53A0) == 0) {
                init_parts__10TObjPlayerFPv(temp_r3);
            }
            TWindowChat__sub_8024AD30(lbl_805D53A0);
        }
        TWindowChat__sub_8025CB70(M2C_FIELD(arg0, s32 *, 0x20));
        close_all_children__11TWindowChatFPv(arg0);
        set_flag60_bit200__16TKeyBoardControlFPv(M2C_FIELD(arg0, s32 *, 0x28));
    }
}

void open_input__11TWindowChatFPv(void *arg0) {
    if (TWindowChat__sub_80247EB4() != 0) {
        TWindowChat__sub_80247E50(arg0);
        TWindowChat__sub_80247DFC(arg0);
        M2C_FIELD(arg0, u16 *, 0x1E) = (u16) (M2C_FIELD(arg0, u16 *, 0x1E) & 0xFFFE);
        M2C_FIELD(arg0, u16 *, 0x1E) = (u16) (M2C_FIELD(arg0, u16 *, 0x1E) | 2);
        clear_flag60_bit200__16TKeyBoardControlFPv(M2C_FIELD(arg0, s32 *, 0x28));
        TWindowChat__sub_8024792C(arg0);
    }
}

}
