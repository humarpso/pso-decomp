#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TWindowSubTradeMain__ct(void *arg0, void *arg1, void *arg2);
void *TPlayerBattleCtrl4P__sub_801BA74C(void *);
void *TWindowChat__ct(void *, void *, void *);
void TWindowCtrl__sub_8024ADAC(void *);
void TWindowSubTradeMain__sub_802D2870(void);
void __ct__7TObjectFP7TObject(void *);
void *__nw__7TObjectFUl(int);
void TObjPlayer__sub_801BA5CC(void *);
void fn_8024AB54(void *);
void fn_8027B288(void *);
void fn_8027B2A8(void *);
void TLobby__sub_802D2A0C(void *);

extern M2C_UNK __vt__19TWindowSubTradeMain[];
extern void *lbl_805D4228;

void *TWindowSubTradeMain__ct(void *arg0, void *arg1, void *arg2) {
    void *o;
    void *x;
    __ct__7TObjectFP7TObject(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__19TWindowSubTradeMain;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D4228;
    M2C_FIELD(arg0, u8 *, 0x1C) = 0;
    M2C_FIELD(arg0, u8 *, 0x1D) = 0;
    M2C_FIELD(arg0, u32 *, 0x20) = 0;
    M2C_FIELD(arg0, void **, 0x28) = arg2;
    M2C_FIELD(arg0, void **, 0x2C) = arg1;
    M2C_FIELD(arg0, u32 *, 0x30) = 0;
    M2C_FIELD(arg0, u32 *, 0x34) = 0;
    M2C_FIELD(arg0, u32 *, 0x38) = 0;
    M2C_FIELD(arg0, u32 *, 0x3C) = 0;
    M2C_FIELD(arg0, u32 *, 0x40) = 0;
    M2C_FIELD(arg0, u32 *, 0x44) = 0;
    M2C_FIELD(arg0, u32 *, 0x48) = 0;
    M2C_FIELD(arg0, u32 *, 0x4C) = 0;
    M2C_FIELD(arg0, u32 *, 0x24) = -1;
    fn_8024AB54(M2C_FIELD(arg0, void **, 0x28));
    TWindowCtrl__sub_8024ADAC(M2C_FIELD(arg0, void **, 0x28));
    TLobby__sub_802D2A0C(arg0);
    TWindowSubTradeMain__sub_802D2870();
    fn_8027B288(M2C_FIELD(arg0, void **, 0x2C));
    o = __nw__7TObjectFUl(0x3C);
    if (o != NULL) {
        o = TWindowChat__ct(o, arg0, (void *)((char *)arg0 + 84));
    }
    M2C_FIELD(arg0, void **, 0x50) = o;
    fn_8027B2A8(M2C_FIELD(arg0, void **, 0x50));
    x = TPlayerBattleCtrl4P__sub_801BA74C(M2C_FIELD(arg0, void **, 0x28));
    if (x != NULL) {
        TObjPlayer__sub_801BA5CC(x);
    }
    return arg0;
}

}
