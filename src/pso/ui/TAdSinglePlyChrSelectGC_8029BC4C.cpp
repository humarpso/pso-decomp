#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
    int TLobby__sub_8023E4B4(void*, void*);
    extern unsigned char lbl_80465490[];
    extern unsigned char lbl_804DC0D4[];
extern u32 lbl_805D65C0;
void register_texture_f256_backtext(void);
}

extern "C" {

void free_singleton_805D65C0__23TAdSinglePlyChrSelectGCFv(void);
void TLobby__sub_803DA16C(void*);

extern u32 lbl_805D65C0;

void free_singleton_805D65C0__23TAdSinglePlyChrSelectGCFv(void) {
    if ((u32) lbl_805D65C0 != 0U) {
        TLobby__sub_803DA16C((void*)lbl_805D65C0);
        lbl_805D65C0 = 0U;
    }
}
void register_texture_f256_backtext(void) { (*(int *)&lbl_805D65C0) = (int)lbl_804DC0D4; TLobby__sub_8023E4B4(lbl_80465490, lbl_804DC0D4); }

}
