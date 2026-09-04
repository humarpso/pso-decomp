#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void close_all_children__11TWindowChatFPv(void *arg0);
void handle_input__11TWindowChatFPv(void *arg0);
void render__11TWindowChatFv(void);
M2C_UNK TKeyBoardControl__sub_8025EC04(s32);
s32 TPlayerBattleCtrl4P__sub_801BA74C(s32);
s32 TWindowChat__sub_80247080(void *);
s32 TWindowChat__sub_80247128(void *);
s32 TWindowChat__sub_802471AC(void *);
s32 TWindowChat__sub_80247EC0(void *);
M2C_UNK TWindowChat__sub_8024AD30(s32);
M2C_UNK TWindowShortListCtrl__sub_802473C8(void *);
M2C_UNK TWindow__close(void *);
M2C_UNK init_parts__10TObjPlayerFPv(s32);
s32 is_mode_bit6__11TWindowChatFPv(void *);
M2C_UNK queue_destruction__7TObjectFv(void *);

void close_all_children__11TWindowChatFPv(void *arg0) {
    TKeyBoardControl__sub_8025EC04(M2C_FIELD(arg0, s32 *, 0x28));
    if ((u32) M2C_FIELD(arg0, u32 *, 0x30) != 0U) {
        queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x30));
        M2C_FIELD(arg0, u32 *, 0x30) = 0U;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x34) != 0U) {
        queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x34));
        M2C_FIELD(arg0, u32 *, 0x34) = 0U;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x2C) != 0U) {
        TWindow__close(M2C_FIELD(arg0, void **, 0x2C));
        M2C_FIELD(arg0, u32 *, 0x2C) = 0U;
    }
    if ((u32) M2C_FIELD(arg0, u32 *, 0x24) != 0U) {
        TWindow__close(M2C_FIELD(arg0, void **, 0x24));
        M2C_FIELD(arg0, u32 *, 0x24) = 0U;
    }
}

extern s32 lbl_805D53A0;

void handle_input__11TWindowChatFPv(void *arg0) {
    s32 temp_r3;
    u8 temp_r0;

    temp_r3 = TPlayerBattleCtrl4P__sub_801BA74C(lbl_805D53A0);
    if (temp_r3 != 0) {
        if (M2C_FIELD(arg0, u16 *, 0x1E) & 2) {
            TWindowShortListCtrl__sub_802473C8(arg0);
            if (TWindowChat__sub_802471AC(arg0) != 0) {
                close_all_children__11TWindowChatFPv((void *)((void *)(arg0)));
            }
        } else {
            temp_r0 = M2C_FIELD(arg0, u8 *, 0x1C);
            switch ((s8) temp_r0) {
            case 0:
                if ((TWindowChat__sub_802471AC(arg0) != 0) && (TWindowChat__sub_80247EC0(arg0) != 0)) {
                    if (is_mode_bit6__11TWindowChatFPv(arg0) != 0) {
                        init_parts__10TObjPlayerFPv(temp_r3);
                        TWindowChat__sub_8024AD30(lbl_805D53A0);
                    }
                    close_all_children__11TWindowChatFPv((void *)((void *)(arg0)));
                    M2C_FIELD(arg0, u16 *, 0x1E) = (u16) (M2C_FIELD(arg0, u16 *, 0x1E) | 2);
                    return;
                }
                break;
            case 1:
                if ((TWindowChat__sub_80247128(arg0) != 0) && (TWindowChat__sub_80247EC0(arg0) != 0)) {
                    if (is_mode_bit6__11TWindowChatFPv(arg0) != 0) {
                        init_parts__10TObjPlayerFPv(temp_r3);
                        TWindowChat__sub_8024AD30(lbl_805D53A0);
                    }
                    close_all_children__11TWindowChatFPv((void *)((void *)(arg0)));
                    M2C_FIELD(arg0, u16 *, 0x1E) = (u16) (M2C_FIELD(arg0, u16 *, 0x1E) | 2);
                    return;
                }
                break;
            case 2:
                if ((TWindowChat__sub_80247080(arg0) != 0) && (TWindowChat__sub_80247EC0(arg0) != 0)) {
                    if (is_mode_bit6__11TWindowChatFPv(arg0) != 0) {
                        init_parts__10TObjPlayerFPv(temp_r3);
                        TWindowChat__sub_8024AD30(lbl_805D53A0);
                    }
                    close_all_children__11TWindowChatFPv((void *)((void *)(arg0)));
                    M2C_FIELD(arg0, u16 *, 0x1E) = (u16) (M2C_FIELD(arg0, u16 *, 0x1E) | 2);
                }
                break;
            }
        }
    }
}

void render__11TWindowChatFv(void) {  }

}
