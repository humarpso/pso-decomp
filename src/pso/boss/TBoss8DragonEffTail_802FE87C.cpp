#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void free_statics__19TBoss8DragonEffTailFv(void);
M2C_UNK TLobby__sub_8001FE7C(s32, M2C_UNK);
M2C_UNK TLobby__sub_803DA16C(void*);
M2C_UNK safe_free__23TAdSinglePlyChrSelectGCFUi(u32);

extern s32 lbl_805D69C8;
extern u32 lbl_805D69CC;

void free_statics__19TBoss8DragonEffTailFv(void) {
    if ((u32) lbl_805D69CC != 0U) {
        TLobby__sub_803DA16C((void*)lbl_805D69CC);
        safe_free__23TAdSinglePlyChrSelectGCFUi(lbl_805D69CC);
        lbl_805D69CC = 0U;
    }
    TLobby__sub_8001FE7C(lbl_805D69C8, 1);
    lbl_805D69C8 = 0;
}

}
