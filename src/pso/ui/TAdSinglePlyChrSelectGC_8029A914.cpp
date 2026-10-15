#include "types.h"

extern "C" {
    int TLobby__sub_8023E4B4(void*, void*);
    extern unsigned char lbl_80465284[];
    extern unsigned char chr_select_ad_pic_2_texture_descriptor[];
extern u32 chr_select_ad_pic_texture;
void register_texture_f256_ad_pic_2(void);
}

extern "C" {

void free_global__23TAdSinglePlyChrSelectGCFv(void);
void TLobby__sub_803DA16C(void*);

extern u32 chr_select_ad_pic_texture;

void free_global__23TAdSinglePlyChrSelectGCFv(void) {
    if ((u32) chr_select_ad_pic_texture != 0U) {
        TLobby__sub_803DA16C((void*)chr_select_ad_pic_texture);
        chr_select_ad_pic_texture = 0U;
    }
}
void register_texture_f256_ad_pic_2(void) { (*(int *)&chr_select_ad_pic_texture) = (int)chr_select_ad_pic_2_texture_descriptor; TLobby__sub_8023E4B4(lbl_80465284, chr_select_ad_pic_2_texture_descriptor); }

}
