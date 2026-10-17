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
    *(void * *)&this->m_name = TWindowSubTradeMain__name;
    this->m_1c = 0;
    this->m_1d = 0;
    this->m_20 = 0;
    *(void **)((s8 *)this + 0x28) = arg2;
    *(void **)((s8 *)this + 0x2C) = arg1;
    this->m_30 = 0;
    this->m_34 = 0;
    this->m_38 = 0;
    this->m_3c = 0;
    this->m_40 = 0;
    this->m_44 = 0;
    this->m_48 = 0;
    this->m_4c = 0;
    this->m_24 = -1;
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
