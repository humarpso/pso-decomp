#include "types.h"
#include "pso/misc/TLobby.h"
#include "pso/ui/TAdSinglePlyChrSelectGC.h"

extern "C" {
    int load_gvm_texture_file(void*);
    extern unsigned char lbl_804766F0[];
extern u32 inazuma_texture_list;
void load_f512_inazuma(void);
}

extern "C" {

s32 TLobby__sub_803DA16C(void*);

extern u32 inazuma_texture_list;

void TLobby::free_char_select_singleton() {
    if ((u32) inazuma_texture_list != 0U) {
        TLobby__sub_803DA16C((void*)inazuma_texture_list);
        TAdSinglePlyChrSelectGC::safe_free(inazuma_texture_list);
        inazuma_texture_list = 0U;
    }
}
void load_f512_inazuma(void) { (*(int *)&inazuma_texture_list) = load_gvm_texture_file(lbl_804766F0); }

}
