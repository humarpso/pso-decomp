#include "types.h"

extern "C" {
    int load_gvm_texture_file(void*);
    extern unsigned char lbl_804766F0[];
extern u32 inazuma_texture_list;
void load_f512_inazuma(void);
}

extern "C" {

void free_char_select_singleton__6TLobbyFv(void);
s32 TLobby__sub_803DA16C(void*);
s32 safe_free__23TAdSinglePlyChrSelectGCFUi(u32);

extern u32 inazuma_texture_list;

void free_char_select_singleton__6TLobbyFv(void) {
    if ((u32) inazuma_texture_list != 0U) {
        TLobby__sub_803DA16C((void*)inazuma_texture_list);
        safe_free__23TAdSinglePlyChrSelectGCFUi(inazuma_texture_list);
        inazuma_texture_list = 0U;
    }
}
void load_f512_inazuma(void) { (*(int *)&inazuma_texture_list) = load_gvm_texture_file(lbl_804766F0); }

}
