#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
    int load_gvm_texture_file(void*);
    extern unsigned char lbl_804766F0[];
extern u32 lbl_805D6C50;
void load_f512_inazuma(void);
}

extern "C" {

void free_char_select_singleton__6TLobbyFv(void);
M2C_UNK TLobby__sub_803DA16C(void*);
M2C_UNK safe_free__23TAdSinglePlyChrSelectGCFUi(u32);

extern u32 lbl_805D6C50;

void free_char_select_singleton__6TLobbyFv(void) {
    if ((u32) lbl_805D6C50 != 0U) {
        TLobby__sub_803DA16C((void*)lbl_805D6C50);
        safe_free__23TAdSinglePlyChrSelectGCFUi(lbl_805D6C50);
        lbl_805D6C50 = 0U;
    }
}
void load_f512_inazuma(void) { (*(int *)&lbl_805D6C50) = load_gvm_texture_file(lbl_804766F0); }

}
