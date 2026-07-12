#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK TLobby__sub_8001FE7C(M2C_UNK, M2C_UNK);
M2C_UNK TAdSinglePlyChrSelectGC__sub_8007EBB4(u32);
M2C_UNK TLobby__sub_803DA16C(void*);
extern u32 lbl_805D6600;
extern u32 lbl_805D6604;
extern u32 lbl_805D6608;

void fn_802A018C(void) {
    if ((u32) lbl_805D6608 != 0U) {
        TLobby__sub_803DA16C((void*)lbl_805D6608);
        TAdSinglePlyChrSelectGC__sub_8007EBB4(lbl_805D6608);
        lbl_805D6608 = 0U;
    }
    if ((u32) lbl_805D6604 != 0U) {
        TLobby__sub_803DA16C((void*)lbl_805D6604);
        TAdSinglePlyChrSelectGC__sub_8007EBB4(lbl_805D6604);
        lbl_805D6604 = 0U;
    }
    if ((u32) lbl_805D6600 != 0U) {
        TLobby__sub_8001FE7C(lbl_805D6600, 1);
        lbl_805D6600 = 0U;
    }
}

}
