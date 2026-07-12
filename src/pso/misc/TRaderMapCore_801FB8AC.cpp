#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void free_statics__13TRaderMapCoreFv(void);
void TLobby__sub_8001FE7C(void*, int);
M2C_UNK TAdSinglePlyChrSelectGC__sub_8007EBB4(u32);
M2C_UNK TLobby__sub_803DA16C(void*);

extern u32 lbl_805D5F48;
extern u32 TRaderMapCore__data_805D5F4C;

void free_statics__13TRaderMapCoreFv(void) {
    if ((u32) TRaderMapCore__data_805D5F4C != 0U) {
        TLobby__sub_803DA16C((void*)TRaderMapCore__data_805D5F4C);
        TAdSinglePlyChrSelectGC__sub_8007EBB4(TRaderMapCore__data_805D5F4C);
        TRaderMapCore__data_805D5F4C = 0U;
    }
    if ((u32) lbl_805D5F48 != 0U) {
        TLobby__sub_8001FE7C((void*)lbl_805D5F48, 1);
        lbl_805D5F48 = 0U;
    }
}

}
