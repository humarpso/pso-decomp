#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TWindowSubQuestBoard__ct(void *arg0, void *arg1, void *arg2);
void *TWindowSubQuestBoardSelect__ct(void *);
void __ct__7TObjectFP7TObject(void *);
void *__nw__7TObjectFUl(int);
void TWindowCtrl__sub_8027D214(void);

extern M2C_UNK __vt__20TWindowSubQuestBoard[];
extern void *lbl_805D3A78;

void *TWindowSubQuestBoard__ct(void *arg0, void *arg1, void *arg2) {
    void *o;
    __ct__7TObjectFP7TObject(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__20TWindowSubQuestBoard;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D3A78;
    M2C_FIELD(arg0, void **, 0x24) = arg1;
    M2C_FIELD(arg0, void **, 0x20) = arg2;
    o = __nw__7TObjectFUl(0x68);
    if (o != NULL) {
        o = TWindowSubQuestBoardSelect__ct(o);
    }
    M2C_FIELD(arg0, void **, 0x28) = o;
    M2C_FIELD(arg0, u32 *, 0x2C) = 0;
    M2C_FIELD(arg0, u8 *, 0x1C) = 0;
    TWindowCtrl__sub_8027D214();
    return arg0;
}

}
