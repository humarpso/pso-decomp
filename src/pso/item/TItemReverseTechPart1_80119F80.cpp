#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TItemReverseTechPart1__ct(void *arg0);
void __ct__7TObjectFP7TObject(void *);
void *__nw__7TObjectFUl(int);
void *TLobby__sub_800F8754(void *, void *, void *);

extern M2C_UNK __vt__21TItemReverseTechPart1[];
extern void *lbl_805D2C4C;
extern void * lbl_805D54DC;
extern void *tl_00;
extern M2C_UNK fn_80119D6C[];

void *TItemReverseTechPart1__ct(void *arg0) {
    void *o;
    __ct__7TObjectFP7TObject(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__21TItemReverseTechPart1;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D2C4C;
    M2C_FIELD(arg0, u32 *, 0x1C) = 0;
    M2C_FIELD(arg0, u32 *, 0x20) = 0;
    M2C_FIELD(arg0, u32 *, 0x24) = 150;
    M2C_FIELD(arg0, u32 *, 0x28) = 3900;
    M2C_FIELD(arg0, u32 *, 0x2C) = 150;
    M2C_FIELD(arg0, u32 *, 0x30) = 0;
    lbl_805D54DC = arg0;
    o = __nw__7TObjectFUl(0x28);
    if (o != NULL) {
        TLobby__sub_800F8754(o, tl_00, fn_80119D6C);
    }
    return arg0;
}

}
