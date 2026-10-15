#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

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
