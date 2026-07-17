#include "types.h"

extern "C" {

void swap_bytes__14TBoss4DarkFalzFPv(void* p);
int bswap_16__FPUs(void*);
int bswap_32__FPUl(void*);
int read_be16_field2__10TObjPlayerFPv(void*);
void swap_and_send__14TBoss4DarkFalzFPv(void* p);
int TLobby__send_and_handle_60(void*);
int is_field378_zero__14TBoss4DarkFalzFPv(void* p);
s32 get_action_state__14TBoss4DarkFalzFPv(void* p);
s32 get_phase__14TBoss4DarkFalzFPv(void* p);
s32 get_state__14TBoss4DarkFalzFPv(void* p);
void* get_hit_data__14TBoss4DarkFalzFPv(void* p);
int TBoss4DarkFalz__sub_8004C220(void* p);
void set_code_25_4__14TBoss4DarkFalzFPv(void* p);
int VecCopy__FP3VecPC3Vec(void*, void* a1 = 0);

void swap_and_send__14TBoss4DarkFalzFPv(void* p) { swap_bytes__14TBoss4DarkFalzFPv(p); TLobby__send_and_handle_60(p); }
void swap_bytes__14TBoss4DarkFalzFPv(void* p) { read_be16_field2__10TObjPlayerFPv(p); bswap_16__FPUs((char*)p + 0x4); bswap_16__FPUs((char*)p + 0x6); bswap_32__FPUl((char*)p + 0x8); bswap_32__FPUl((char*)p + 0xc); }
void set_code_25_4__14TBoss4DarkFalzFPv(void* p) { *(u8*)((char*)p + 0x0) = 25; *(u8*)((char*)p + 0x1) = 4; }

}
