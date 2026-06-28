#include "types.h"

extern "C" {

s32 TWindowSubStatusDisp__sub_80077760(s32);
s32 fn_802D268C();
int TWindowSubTradeMain__sub_8033131C(void* p);
int fn_803312BC(void*, void* a1 = 0);

int TWindowSubTradeMain__sub_8033131C(void* p) { return fn_803312BC(p); }
void fn_8033133C(s32 arg0) {
    fn_803312BC((void*)(arg0), (void*)(TWindowSubStatusDisp__sub_80077760(0xF7)));
}
void fn_80331378(s32 arg0) {
    fn_803312BC((void*)(arg0), (void*)(fn_802D268C()));
}

}
