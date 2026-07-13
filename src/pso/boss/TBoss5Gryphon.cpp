#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void cleanup__13TBoss5GryphonFv(void);
void *create__13TBoss5GryphonFPv(void *arg0);
M2C_UNK TBoss5GryphonSnarl__sub_80066E84();
void *TBoss5Gryphon__ct(void *, void *, void *);
void TLobby__sub_8001FE7C(void*, int);
M2C_UNK TLobby__sub_803DA16C(void*);
void *__nw__7TObjectFUl(int);
M2C_UNK TBoss8Dragon__sub_80066A4C();
M2C_UNK free_char_select_singleton__6TLobbyFv();
M2C_UNK TBoss8Dragon__sub_80355A1C();
M2C_UNK safe_free__23TAdSinglePlyChrSelectGCFUi(u32);

extern u32 lbl_805D4DA0;
extern u32 lbl_805D4DA4;
extern u32 lbl_805D4DA8;

void cleanup__13TBoss5GryphonFv(void) {
    free_char_select_singleton__6TLobbyFv();
    TBoss5GryphonSnarl__sub_80066E84();
    TBoss8Dragon__sub_80355A1C();
    TBoss8Dragon__sub_80066A4C();
    if ((u32) lbl_805D4DA8 != 0U) {
        TLobby__sub_803DA16C((void*)lbl_805D4DA8);
        safe_free__23TAdSinglePlyChrSelectGCFUi(lbl_805D4DA8);
        lbl_805D4DA8 = 0U;
    }
    if ((u32) lbl_805D4DA4 != 0U) {
        TLobby__sub_8001FE7C((void*)lbl_805D4DA4, 1);
        lbl_805D4DA4 = 0U;
    }
    if ((u32) lbl_805D4DA0 != 0U) {
        TLobby__sub_8001FE7C((void*)lbl_805D4DA0, 1);
        lbl_805D4DA0 = 0U;
    }
}

extern void *tl_04;

void *create__13TBoss5GryphonFPv(void *arg0) {
    void *o = __nw__7TObjectFUl(0x77C);
    if (o != NULL) {
        o = TBoss5Gryphon__ct(o, tl_04, arg0);
    }
    return o;
}

}
