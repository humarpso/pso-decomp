#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TLobby__sub_8028D800(void);
void TLobby__sub_8028D840(void);
void TLobby__sub_8028D884(void);
void safe_free__23TAdSinglePlyChrSelectGCFUi(void*);
u32 alloc__22TQuestVmDownLoadServerFPv(M2C_UNK);

extern u32 lbl_805D6518;
extern u32 lbl_805D651C;

void TLobby__sub_8028D800(void) {
    if (((u32) lbl_805D6518 != 0U) && ((u32) lbl_805D651C != 0U)) {
        safe_free__23TAdSinglePlyChrSelectGCFUi((void*)((void*)lbl_805D651C));
        lbl_805D651C = 0U;
    }
}

extern u32 lbl_805D6518;
extern u32 lbl_805D651C;

void TLobby__sub_8028D840(void) {
    if (((u32) lbl_805D6518 != 0U) && ((u32) lbl_805D651C == 0U)) {
        lbl_805D651C = alloc__22TQuestVmDownLoadServerFPv(0x50000);
        if ((u32) lbl_805D651C == 0U) {
            return;
        }
    }
}

extern u32 lbl_805D6518;

void TLobby__sub_8028D884(void) {
    if ((u32) lbl_805D6518 != 0U) {
        safe_free__23TAdSinglePlyChrSelectGCFUi((void*)((void*)lbl_805D6518));
        lbl_805D6518 = 0U;
    }
}

}
