#include "types.h"
#include "pso/misc/TWindowChat.h"
#include "pso/misc/TWindowSubTradeMain.h"
#include "pso/player/TObjPlayer.h"

extern "C" {

void *get_player_by_client_id(void *);
void TWindowCtrl__sub_8024ADAC(void *);
void TWindowSubTradeMain__sub_802D2870(void);
void fn_8024AB54(void *);
void fn_8027B288(void *);
void fn_8027B2A8(void *);
void TLobby__sub_802D2A0C(void *);

extern void *TWindowSubTradeMain__name;

}
TWindowSubTradeMain::TWindowSubTradeMain(TObject *arg1, void *arg2) : TObject(arg1) {
    void *o;
    void *x;
    *(void **)((s8 *)this + 0x0) = TWindowSubTradeMain__name;
    *(u8 *)((s8 *)this + 0x1C) = 0;
    *(u8 *)((s8 *)this + 0x1D) = 0;
    *(u32 *)((s8 *)this + 0x20) = 0;
    *(void **)((s8 *)this + 0x28) = arg2;
    *(void **)((s8 *)this + 0x2C) = arg1;
    *(u32 *)((s8 *)this + 0x30) = 0;
    *(u32 *)((s8 *)this + 0x34) = 0;
    *(u32 *)((s8 *)this + 0x38) = 0;
    *(u32 *)((s8 *)this + 0x3C) = 0;
    *(u32 *)((s8 *)this + 0x40) = 0;
    *(u32 *)((s8 *)this + 0x44) = 0;
    *(u32 *)((s8 *)this + 0x48) = 0;
    *(u32 *)((s8 *)this + 0x4C) = 0;
    *(u32 *)((s8 *)this + 0x24) = -1;
    fn_8024AB54(*(void **)((s8 *)this + 0x28));
    TWindowCtrl__sub_8024ADAC(*(void **)((s8 *)this + 0x28));
    TLobby__sub_802D2A0C(this);
    TWindowSubTradeMain__sub_802D2870();
    fn_8027B288(*(void **)((s8 *)this + 0x2C));
    o = new TWindowChat(this, (void *)((char *)this + 84));
    *(void **)((s8 *)this + 0x50) = o;
    fn_8027B2A8(*(void **)((s8 *)this + 0x50));
    x = get_player_by_client_id(*(void **)((s8 *)this + 0x28));
    if (x != NULL) {
        ((TObjPlayer *)x)->start_freeze();
    }
}
