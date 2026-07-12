#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__ct__12TAdSoniclogoFv(void *arg0);
void __ct__7TObjectFP7TObject(void *);
void *__nw__7TObjectFUl(int);
void *TLobby__sub_800F8754(void *, void *, void *);
void TAdSinglePlyChrSelectGC__sub_8033A904(int);

extern M2C_UNK __vt__12TAdSoniclogo[];
extern void *lbl_805D2628;
extern u32 TAdSoniclogo__data_805D4A4C;
extern u32 lbl_805D4A50;
extern void *tl_00;
extern M2C_UNK TAdSoniclogo__sub_8001C1C4[];

void *__ct__12TAdSoniclogoFv(void *arg0) {
    void *o;
    __ct__7TObjectFP7TObject(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__12TAdSoniclogo;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D2628;
    M2C_FIELD(arg0, u32 *, 0x1C) = 0;
    TAdSoniclogo__data_805D4A4C = 0;
    lbl_805D4A50 = 0;
    TAdSinglePlyChrSelectGC__sub_8033A904(1);
    o = __nw__7TObjectFUl(0x28);
    if (o != NULL) {
        TLobby__sub_800F8754(o, tl_00, TAdSoniclogo__sub_8001C1C4);
    }
    return arg0;
}

}
