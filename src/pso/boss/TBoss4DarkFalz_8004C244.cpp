#include "types.h"

extern "C" {

void swap_bytes__14TBoss4DarkFalzFPv(void* p);
int bswap_16__FPUs(void*);
int bswap_32__FPUl(void*);
int fn_8001960C(void*);
void TBoss4DarkFalz__sub_8004C244(void* p);
int TLobby__send_and_handle_60(void*);
int is_field378_zero__14TBoss4DarkFalzFPv(void* p);
s32 TBoss4DarkFalz__sub_8004C1D4(void* p);
s32 TBoss4DarkFalz__sub_8004C1DC(void* p);
s32 TBoss4DarkFalz__sub_8004C1E4(void* p);
void* TBoss4DarkFalz__sub_8004C1EC(void* p);
int TBoss4DarkFalz__sub_8004C220(void* p);
void set_code_25_4__14TBoss4DarkFalzFPv(void* p);
int VecCopy__FP3VecPC3Vec(void*, void* a1 = 0);

void TBoss4DarkFalz__sub_8004C244(void* p) { swap_bytes__14TBoss4DarkFalzFPv(p); TLobby__send_and_handle_60(p); }
void swap_bytes__14TBoss4DarkFalzFPv(void* p) { fn_8001960C(p); bswap_16__FPUs((char*)p + 0x4); bswap_16__FPUs((char*)p + 0x6); bswap_32__FPUl((char*)p + 0x8); bswap_32__FPUl((char*)p + 0xc); }
void set_code_25_4__14TBoss4DarkFalzFPv(void* p) { *(u8*)((char*)p + 0x0) = 25; *(u8*)((char*)p + 0x1) = 4; }

}
