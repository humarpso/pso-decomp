#include "types.h"
#include "pso/misc/TLobby.h"
#include "pso/ui/TAdEp3Exist.h"

extern "C" {

s32 destroy_ep3_exist__6TLobbyFis(s32 arg0, s16 arg1);
s32 TAdEp3Exist__sub_8036F574();
s32 __dl__FPv(s32);

s32 destroy_ep3_exist__6TLobbyFis(s32 arg0, s16 arg1) {
    if (arg0 != 0) {
        TAdEp3Exist::free_if_valid(arg0, 0);
        if (arg1 > 0) {
            __dl__FPv(arg0);
        }
    }
    return arg0;
}

void *TLobby::reset_counters() {
    TAdEp3Exist__sub_8036F574();
    *(s32 *)((s8 *)this + 0x10) = 0;
    *(s32 *)((s8 *)this + 0x14) = 0;
    *(s32 *)((s8 *)this + 0x18) = 0;
    *(s32 *)((s8 *)this + 0x1C) = 0;
    *(s32 *)((s8 *)this + 0x20) = 0;
    *(s32 *)((s8 *)this + 0x24) = 0;
    *(s32 *)((s8 *)this + 0x28) = 0;
    *(s32 *)((s8 *)this + 0x2C) = 0;
    return this;
}

}
