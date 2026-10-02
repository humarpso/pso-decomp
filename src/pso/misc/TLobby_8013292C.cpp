#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 select_download_type__6TLobbyFi(s32 arg0);
void select_main_menu_item_10(s32 arg0);
M2C_UNK get_localized_text_entry(M2C_UNK, s32);
s32 TQuestVmDownLoadServer__sub_8006EF6C(M2C_UNK);

s32 select_download_type__6TLobbyFi(s32 arg0) {
    if (arg0 & 0x20) {
        return TQuestVmDownLoadServer__sub_8006EF6C(3);
    }
    if (arg0 & 0x40) {
        return TQuestVmDownLoadServer__sub_8006EF6C(4);
    }
    if (arg0 & 0x80) {
        return TQuestVmDownLoadServer__sub_8006EF6C(5);
    }
    return 0;
}

void select_main_menu_item_10(s32 arg0) {
    get_localized_text_entry(0xA, arg0);
}

}
