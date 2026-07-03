#include "types.h"

extern "C" {

s32 TWindowSubStatusDisp__sub_80077760(s32);
s32 fn_802D268C();
int TWindowSubTradeMain__sub_8033131C(void* p);
int TWindowSubTradeMain__sub_803312BC(void*, void* a1 = 0);

void TWindowSubTradeMain__sub_8033133C(s32 arg0) {
    TWindowSubTradeMain__sub_803312BC((void*)(arg0), (void*)(TWindowSubStatusDisp__sub_80077760(0xF7)));
}
void TWindowSubTradeMain__sub_80331378(s32 arg0) {
    TWindowSubTradeMain__sub_803312BC((void*)(arg0), (void*)(fn_802D268C()));
}

}
