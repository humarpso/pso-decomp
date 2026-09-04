#include "types.h"

extern "C" {

void open_status_window__19TWindowSubTradeMainFi(s32 arg0);
void render__19TWindowSubTradeMainFv(void);
void update_from_lobby__19TWindowSubTradeMainFi(s32 arg0);
s32 TLobby__sub_802D268C();
int TWindowSubTradeMain__sub_803312BC(void*, void* a1 = 0);
int TWindowSubTradeMain__sub_8033131C(void* p);
s32 get_message_10__20TWindowSubStatusDispFPv(s32);

void open_status_window__19TWindowSubTradeMainFi(s32 arg0) {
    TWindowSubTradeMain__sub_803312BC((void*)(arg0), (void*)(get_message_10__20TWindowSubStatusDispFPv(0xF7)));
}
void update_from_lobby__19TWindowSubTradeMainFi(s32 arg0) {
    TWindowSubTradeMain__sub_803312BC((void*)(arg0), (void*)(TLobby__sub_802D268C()));
}

void render__19TWindowSubTradeMainFv(void) {  }

}
