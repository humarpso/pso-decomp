#include "types.h"
#include "pso/ui/TAdSinglePlyChrSelectGC_8029A914.h"
#include "pso/ui/TAdSinglePlyChrSelectGC.h"

extern "C" {
    int TLobby__sub_8023E4B4(void*, void*);
    extern unsigned char lbl_80465284[];
    extern unsigned char chr_select_ad_pic_2_texture_descriptor[];
extern u32 chr_select_ad_pic_texture;
void TLobby__sub_803DA16C(void*);

void TAdSinglePlyChrSelectGC::free_global() {
    if ((u32) chr_select_ad_pic_texture != 0U) {
        TLobby__sub_803DA16C((void*)chr_select_ad_pic_texture);
        chr_select_ad_pic_texture = 0U;
    }
}
void register_texture_f256_ad_pic_2(void) { (*(int *)&chr_select_ad_pic_texture) = (int)chr_select_ad_pic_2_texture_descriptor; TLobby__sub_8023E4B4(lbl_80465284, chr_select_ad_pic_2_texture_descriptor); }

}
