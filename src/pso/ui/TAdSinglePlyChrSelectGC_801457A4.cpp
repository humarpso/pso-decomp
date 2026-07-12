#include "types.h"
#pragma fp_contract on
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_801457A4 { char pad[0x18]; };
struct VObj_801457A4 : Base_801457A4 {
    virtual void m0(int);
};

extern "C" {

void TAdSinglePlyChrSelectGC__sub_801457A4(void);
M2C_UNK TLobby__sub_803DA16C(M2C_UNK *);
M2C_UNK free__11TOBoss4RockFUi(s32);
M2C_UNK safe_free__23TAdSinglePlyChrSelectGCFUi(s32);

extern M2C_UNK lbl_804A74E8[];
extern s32 lbl_805D56B0;
extern s32 lbl_805D56B4;
extern s32 lbl_805D56BC;
extern struct VObj_801457A4 *lbl_805D56C4;

void TAdSinglePlyChrSelectGC__sub_801457A4(void) {
    if (lbl_805D56C4 != NULL) {
        lbl_805D56C4->m0(1);
    }
    TLobby__sub_803DA16C(lbl_804A74E8);
    free__11TOBoss4RockFUi(lbl_805D56BC);
    free__11TOBoss4RockFUi(lbl_805D56B4);
    safe_free__23TAdSinglePlyChrSelectGCFUi(lbl_805D56B0);
}

}
