#include "types.h"
#include "pso/misc/TLobby.h"

#pragma fp_contract on
#pragma fp_contract on
extern "C" {
s32 create_named_object(s32);
extern s32 lbl_804CA288[];
extern s32 current_language;
extern s32 lbl_805D6238;
extern u32 lbl_805D6258;
s32 is_split_screen();
s32 TShopGenerator__sub_80222DAC(s32 arg0);
}

extern "C" {

void free_nodes_with_id__6TLobbyFUl(void*);

extern u32 lbl_805D6258;

void TLobby::free_singleton() {
    if ((u32) lbl_805D6258 != 0U) {
        free_nodes_with_id__6TLobbyFUl((void*)lbl_805D6258);
        lbl_805D6258 = 0U;
    }
}
void TLobby::create_named_lobby_object() {
    if (((s32) lbl_805D6238 < 0) || ((s32) lbl_805D6238 > 9)) {
        lbl_805D6238 = 0;
    }
    (*(s32 *)&lbl_805D6258) = create_named_object(lbl_804CA288[current_language]);
}
#pragma push
#pragma scheduling off
s32 TShopGenerator__sub_80222DAC(s32 arg0) {
    return ((is_split_screen() - 1) == 0) ? arg0 : 0;
}
#pragma pop

#pragma push
#pragma scheduling off
#pragma pop

}
