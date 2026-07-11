#include "types.h"

extern "C" {

void swap_bytes__14TBoss4DarkFalzFPv(void* p);
int bswap_16__FPUs(void*);
int bswap_32__FPUl(void*);
int fn_8001960C(void*);
void TBoss4DarkFalz__sub_8004C244(void* p);
int TLobby__send_and_handle_60(void*);
int TBoss4DarkFalz__sub_8004C1C4(void* p);
s32 TBoss4DarkFalz__sub_8004C1D4(void* p);
s32 TBoss4DarkFalz__sub_8004C1DC(void* p);
s32 TBoss4DarkFalz__sub_8004C1E4(void* p);
void* TBoss4DarkFalz__sub_8004C1EC(void* p);
int TBoss4DarkFalz__sub_8004C220(void* p);
void set_code_25_4__14TBoss4DarkFalzFPv(void* p);
int VecCopy__FP3VecPC3Vec(void*, void* a1 = 0);

int TBoss4DarkFalz__sub_8004C1C4(void* p) { return *(u32*)((char*)p + 0x378) == 0; }
s32 TBoss4DarkFalz__sub_8004C1D4(void* p) { return *(s32*)((char*)p + 0x374); }
s32 TBoss4DarkFalz__sub_8004C1DC(void* p) { return *(s32*)((char*)p + 0x374); }
s32 TBoss4DarkFalz__sub_8004C1E4(void* p) { return *(s32*)((char*)p + 0x374); }
void* TBoss4DarkFalz__sub_8004C1EC(void* p) { return (char*)p + 0x5c; }
void save_position__14TBoss4DarkFalzFi(s32 arg0) {
    VecCopy__FP3VecPC3Vec((void*)(arg0 + 0x44), (void*)(arg0 + 0x38));
}

}
