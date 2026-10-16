#include "types.h"
#include "pso/player/TObjPlayer.h"

extern "C" {

void *TWindowSubTradeMain__ct(void *arg0, void *arg1, void *arg2);
void *get_player_by_client_id(void *);
void *TWindowChat__ct(void *, void *, void *);
void TWindowCtrl__sub_8024ADAC(void *);
void TWindowSubTradeMain__sub_802D2870(void);
void __ct__7TObjectFP7TObject(void *);
void *__nw__7TObjectFUl(int);
void fn_8024AB54(void *);
void fn_8027B288(void *);
void fn_8027B2A8(void *);
void TLobby__sub_802D2A0C(void *);

extern s32 __vt__19TWindowSubTradeMain[];
extern void *TWindowSubTradeMain__name;

void *TWindowSubTradeMain__ct(void *arg0, void *arg1, void *arg2) {
    void *o;
    void *x;
    __ct__7TObjectFP7TObject(arg0);
    *(s32 **)((s8 *)arg0 + 0x18) = __vt__19TWindowSubTradeMain;
    *(void **)((s8 *)arg0 + 0x0) = TWindowSubTradeMain__name;
    *(u8 *)((s8 *)arg0 + 0x1C) = 0;
    *(u8 *)((s8 *)arg0 + 0x1D) = 0;
    *(u32 *)((s8 *)arg0 + 0x20) = 0;
    *(void **)((s8 *)arg0 + 0x28) = arg2;
    *(void **)((s8 *)arg0 + 0x2C) = arg1;
    *(u32 *)((s8 *)arg0 + 0x30) = 0;
    *(u32 *)((s8 *)arg0 + 0x34) = 0;
    *(u32 *)((s8 *)arg0 + 0x38) = 0;
    *(u32 *)((s8 *)arg0 + 0x3C) = 0;
    *(u32 *)((s8 *)arg0 + 0x40) = 0;
    *(u32 *)((s8 *)arg0 + 0x44) = 0;
    *(u32 *)((s8 *)arg0 + 0x48) = 0;
    *(u32 *)((s8 *)arg0 + 0x4C) = 0;
    *(u32 *)((s8 *)arg0 + 0x24) = -1;
    fn_8024AB54(*(void **)((s8 *)arg0 + 0x28));
    TWindowCtrl__sub_8024ADAC(*(void **)((s8 *)arg0 + 0x28));
    TLobby__sub_802D2A0C(arg0);
    TWindowSubTradeMain__sub_802D2870();
    fn_8027B288(*(void **)((s8 *)arg0 + 0x2C));
    o = __nw__7TObjectFUl(0x3C);
    if (o != NULL) {
        o = TWindowChat__ct(o, arg0, (void *)((char *)arg0 + 84));
    }
    *(void **)((s8 *)arg0 + 0x50) = o;
    fn_8027B2A8(*(void **)((s8 *)arg0 + 0x50));
    x = get_player_by_client_id(*(void **)((s8 *)arg0 + 0x28));
    if (x != NULL) {
        ((TObjPlayer *)x)->start_freeze();
    }
    return arg0;
}

}
