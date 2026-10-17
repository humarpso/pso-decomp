#include "types.h"
#include "pso/misc/TLobby_803255F8.h"
#include "pso/misc/TLobby.h"
#include "pso/ui/TAdSinglePlyChrSelectGC.h"

extern "C" {
    u8 *load_gvm_texture_file(s32 arg0);
    extern unsigned char lbl_804766F0[];
extern u32 inazuma_texture_list;
s32 TLobby__sub_803DA16C(void*);

void TLobby::free_char_select_singleton() {
    if ((u32) inazuma_texture_list != 0U) {
        TLobby__sub_803DA16C((void*)inazuma_texture_list);
        TAdSinglePlyChrSelectGC::safe_free(inazuma_texture_list);
        inazuma_texture_list = 0U;
    }
}
}
void load_f512_inazuma(void) { (*(int *)&inazuma_texture_list) = (int)load_gvm_texture_file((s32)lbl_804766F0); }
