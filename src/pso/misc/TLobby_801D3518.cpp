#include "types.h"
#include "pso/misc/TLobby.h"
#include "pso/TItemList.h"
#include "pso/player/TObjPlayer.h"

extern "C" {

s32 TItemList__sub_801D5844(s32);
s32 TItemList__sub_801D5854(s32, s32);
int __dl__FPv();
int TItemList__sub_801D3B00(void*, void*, void*, void*);
int TItemList__sub_801D5804(void*);
int TItemList__sub_801D5838(void* a0 = 0);
int TItemList__sub_801D5868(void*, void*);
void fn_801D371C(void* p, void* q);

s32 TLobby::free_if_positive(s32 arg0, s16 arg1) {
    if ((arg0 != 0) && (arg1 > 0)) {
        __dl__FPv();
    }
    return arg0;
}

}
