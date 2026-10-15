#include "types.h"

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
        *(s32 *)((s8 *)TLoadCtrl__instance + 0x1C) = arg0;
    }
}

}
