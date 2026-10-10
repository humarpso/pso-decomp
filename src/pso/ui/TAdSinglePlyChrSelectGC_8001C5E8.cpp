#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

extern u8 lbl_805D4A78;

u8 get_chr_select_state__23TAdSinglePlyChrSelectGCFv(void) {
    return lbl_805D4A78;
}

extern s32 guild_card_save_file_block_count;

s32 TAdSinglePlyChrSelectGC__sub_8001C5F0(void) {
    return guild_card_save_file_block_count;
}

extern void *TLoadCtrl__instance;

void set_field1C__9TLoadCtrlFi(s32 arg0) {
    if ((void *) TLoadCtrl__instance != NULL) {
        M2C_FIELD(TLoadCtrl__instance, s32 *, 0x1C) = arg0;
    }
}

}
