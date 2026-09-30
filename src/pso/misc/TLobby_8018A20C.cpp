#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
void *TLobby__sub_80020004(void *, s32, void *, s32, s32, s32);
void *alloc__23TAdSinglePlyChrSelectGCFPv(s32);
u32 TLanguage__sub_801E4874(void *);
s32 get_global_state__14TOKeyMachine01Fv();
extern u8 lbl_80444F30[];
extern u8 lbl_80444F48[];
extern u8 lbl_804B636C[];
extern u8 lbl_804B63AC[];
extern u32 lbl_805D5B88;
extern u32 lbl_805D5B8C;
void TLobby__sub_8018A28C(void);
}

extern "C" {

void free_chr_select_slot__6TLobbyFv(void);
void TLobby__sub_8001FE7C(void*, int);
M2C_UNK TLobby__sub_803DA16C(void*);
M2C_UNK safe_free__23TAdSinglePlyChrSelectGCFUi(u32);

extern u32 lbl_805D5B88;
extern u32 lbl_805D5B8C;

void free_chr_select_slot__6TLobbyFv(void) {
    if ((u32) lbl_805D5B8C != 0U) {
        TLobby__sub_803DA16C((void*)lbl_805D5B8C);
        safe_free__23TAdSinglePlyChrSelectGCFUi(lbl_805D5B8C);
        lbl_805D5B8C = 0U;
    }
    if ((u32) lbl_805D5B88 != 0U) {
        TLobby__sub_8001FE7C((void*)lbl_805D5B88, 1);
        lbl_805D5B88 = 0U;
    }
}
void TLobby__sub_8018A28C(void) {
    void *p;
    lbl_805D5B88 = 0;
    switch (get_global_state__14TOKeyMachine01Fv()) {
    case 28:
    case 29:
    case 31:
        p = alloc__23TAdSinglePlyChrSelectGCFPv(0x440);
        if (p != NULL) {
            p = TLobby__sub_80020004(p, 5, lbl_804B63AC, 0, 0, 0);
        }
        lbl_805D5B88 = (u32)p;
        lbl_805D5B8C = TLanguage__sub_801E4874(lbl_80444F30);
        break;
    case 30:
    default:
        p = alloc__23TAdSinglePlyChrSelectGCFPv(0x440);
        if (p != NULL) {
            p = TLobby__sub_80020004(p, 5, lbl_804B636C, 0, 0, 0);
        }
        lbl_805D5B88 = (u32)p;
        lbl_805D5B8C = TLanguage__sub_801E4874(lbl_80444F48);
        break;
    }
}

}
