#include "types.h"
#include "pso/misc/TLobby.h"
#include "pso/ui/TAdSinglePlyChrSelectGC.h"

extern "C" {

s32 TLobby__sub_8001FE7C(s32, s32);
s32 TLobby__sub_803DA16C(void*);

extern s32 lbl_805D4B50;
extern u32 dragon_common_texture_list;

void TLobby::free_char_select() {
    if ((u32) dragon_common_texture_list != 0U) {
        TLobby__sub_803DA16C((void*)dragon_common_texture_list);
        TAdSinglePlyChrSelectGC::safe_free(dragon_common_texture_list);
        dragon_common_texture_list = 0U;
    }
    TLobby__sub_8001FE7C(lbl_805D4B50, 1);
    lbl_805D4B50 = 0;
}

}
