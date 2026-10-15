#include "types.h"

extern "C" {

void free_char_select__6TLobbyFv(void);
s32 TLobby__sub_8001FE7C(s32, s32);
s32 TLobby__sub_803DA16C(void*);
s32 safe_free__23TAdSinglePlyChrSelectGCFUi(u32);

extern s32 lbl_805D4B50;
extern u32 dragon_common_texture_list;

void free_char_select__6TLobbyFv(void) {
    if ((u32) dragon_common_texture_list != 0U) {
        TLobby__sub_803DA16C((void*)dragon_common_texture_list);
        safe_free__23TAdSinglePlyChrSelectGCFUi(dragon_common_texture_list);
        dragon_common_texture_list = 0U;
    }
    TLobby__sub_8001FE7C(lbl_805D4B50, 1);
    lbl_805D4B50 = 0;
}

}
