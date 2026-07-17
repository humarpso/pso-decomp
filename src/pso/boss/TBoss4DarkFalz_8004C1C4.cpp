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

int is_field378_zero__14TBoss4DarkFalzFPv(void* p) { return *(u32*)((char*)p + 0x378) == 0; }
s32 get_action_state__14TBoss4DarkFalzFPv(void* p) { return *(s32*)((char*)p + 0x374); }
s32 get_phase__14TBoss4DarkFalzFPv(void* p) { return *(s32*)((char*)p + 0x374); }
s32 get_state__14TBoss4DarkFalzFPv(void* p) { return *(s32*)((char*)p + 0x374); }
void* get_hit_data__14TBoss4DarkFalzFPv(void* p) { return (char*)p + 0x5c; }
void save_position__14TBoss4DarkFalzFi(s32 arg0) {
    VecCopy__FP3VecPC3Vec((void*)(arg0 + 0x44), (void*)(arg0 + 0x38));
}

}
