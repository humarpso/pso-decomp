#include "types.h"

extern "C" {

void TBoss4DarkFalz__sub_8004C278(void* p);
int bswap_16__FPUs(void*);
int bswap_32__FPUl(void*);
int fn_8001960C(void*);
void TBoss4DarkFalz__sub_8004C244(void* p);
int TLobby__sub_801E4570(void*);
int TBoss4DarkFalz__sub_8004C1C4(void* p);
s32 TBoss4DarkFalz__sub_8004C1D4(void* p);
s32 TBoss4DarkFalz__sub_8004C1DC(void* p);
s32 TBoss4DarkFalz__sub_8004C1E4(void* p);
void* TBoss4DarkFalz__sub_8004C1EC(void* p);
int TBoss4DarkFalz__sub_8004C220(void* p);
void TBoss4DarkFalz__sub_8004C2C4(void* p);
int VecCopy__FP3VecPC3Vec(void*, void* a1 = 0);

int TBoss4DarkFalz__sub_8004C1C4(void* p) { return *(u32*)((char*)p + 0x378) == 0; }
s32 TBoss4DarkFalz__sub_8004C1D4(void* p) { return *(s32*)((char*)p + 0x374); }
s32 TBoss4DarkFalz__sub_8004C1DC(void* p) { return *(s32*)((char*)p + 0x374); }
s32 TBoss4DarkFalz__sub_8004C1E4(void* p) { return *(s32*)((char*)p + 0x374); }
void* TBoss4DarkFalz__sub_8004C1EC(void* p) { return (char*)p + 0x5c; }
void TBoss4DarkFalz__sub_8004C1F4(s32 arg0) {
    VecCopy__FP3VecPC3Vec((void*)(arg0 + 0x44), (void*)(arg0 + 0x38));
}
int TBoss4DarkFalz__sub_8004C220(void* p) { return VecCopy__FP3VecPC3Vec((char*)p + 0x38); }
void TBoss4DarkFalz__sub_8004C244(void* p) { TBoss4DarkFalz__sub_8004C278(p); TLobby__sub_801E4570(p); }
void TBoss4DarkFalz__sub_8004C278(void* p) { fn_8001960C(p); bswap_16__FPUs((char*)p + 0x4); bswap_16__FPUs((char*)p + 0x6); bswap_32__FPUl((char*)p + 0x8); bswap_32__FPUl((char*)p + 0xc); }
void TBoss4DarkFalz__sub_8004C2C4(void* p) { *(u8*)((char*)p + 0x0) = 25; *(u8*)((char*)p + 0x1) = 4; }

}
