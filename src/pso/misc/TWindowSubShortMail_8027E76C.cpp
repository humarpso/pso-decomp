#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 open_delete_confirm_dialog__19TWindowSubShortMailFPv(void *arg0);
s32 open_confirm_dialog__19TWindowSubShortMailFPv(void *arg0);
s32 TWindowMessageYesNo__sub_802A59D8(void *, s32, M2C_UNK, M2C_UNK);
s32 TWindowSubComCard__sub_8026CBB8(M2C_UNK);
M2C_UNK TWindowSubShortMail__sub_802A58AC(s32, s32, s32, s32, f32);
M2C_UNK free_member__17TWindowSubComCardFPv(s32, M2C_UNK);
s32 get_message_10__20TWindowSubStatusDispFPv(M2C_UNK);
M2C_UNK notify_warp_flag70__19TWindowSubShortMailFPv(s32);

extern const f32 TWindowSubShortMail__data_805DD6C8;

s32 open_delete_confirm_dialog__19TWindowSubShortMailFPv(void *arg0) {
    s32 temp_r29;

    temp_r29 = TWindowMessageYesNo__sub_802A59D8(arg0, M2C_FIELD(arg0, s32 *, 0x20), 0, 0);
    TWindowSubShortMail__sub_802A58AC(temp_r29, get_message_10__20TWindowSubStatusDispFPv(0x20), get_message_10__20TWindowSubStatusDispFPv(0x104), TWindowSubComCard__sub_8026CBB8(0xa3), TWindowSubShortMail__data_805DD6C8);
    free_member__17TWindowSubComCardFPv(temp_r29, 0);
    notify_warp_flag70__19TWindowSubShortMailFPv(temp_r29);
    return temp_r29;
}

extern const f32 TWindowSubShortMail__data_805DD6C8;

s32 open_confirm_dialog__19TWindowSubShortMailFPv(void *arg0) {
    s32 temp_r29;

    temp_r29 = TWindowMessageYesNo__sub_802A59D8(arg0, M2C_FIELD(arg0, s32 *, 0x20), 0, 0);
    TWindowSubShortMail__sub_802A58AC(temp_r29, get_message_10__20TWindowSubStatusDispFPv(0x20), get_message_10__20TWindowSubStatusDispFPv(0x3e), TWindowSubComCard__sub_8026CBB8(0x9f), TWindowSubShortMail__data_805DD6C8);
    free_member__17TWindowSubComCardFPv(temp_r29, 0);
    notify_warp_flag70__19TWindowSubShortMailFPv(temp_r29);
    return temp_r29;
}

}
