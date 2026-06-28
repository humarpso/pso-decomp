#include "types.h"

extern "C" {

s32 fn_8001960C();
s32 bswap_32__FPUl(s32);
s32 TLobby__sub_801E4570(s32);
void fn_80156BA8(void* p);

int fn_80156B18(void) { return 0; }
void fn_80156B38(s32 arg0) {
    fn_8001960C();
    bswap_32__FPUl(arg0 + 4);
    bswap_32__FPUl(arg0 + 8);
}
void fn_80156B74(s32 arg0) {
    fn_80156B18();
    TLobby__sub_801E4570(arg0);
}
void fn_80156BA8(void* p) { *(u8*)((char*)p + 0x0) = 11; *(u8*)((char*)p + 0x1) = 3; }

}
