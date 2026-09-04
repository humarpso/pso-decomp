#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

int TBoss4DarkFalz__sub_8004C1AC(void);
s32 TBoss4DarkFalz__sub_8004C1B4(void);
int TBoss4DarkFalz__sub_8004C220(void* p);
s32 get_action_state__14TBoss4DarkFalzFPv(void* p);
void* get_hit_data__14TBoss4DarkFalzFPv(void* p);
s32 get_instance__14TBoss4DarkFalzFv(void);
s32 get_phase__14TBoss4DarkFalzFPv(void* p);
s32 get_state__14TBoss4DarkFalzFPv(void* p);
int is_field378_zero__14TBoss4DarkFalzFPv(void* p);
void save_position__14TBoss4DarkFalzFi(s32 arg0);
void set_code_25_4__14TBoss4DarkFalzFPv(void* p);
void set_state__14TBoss4DarkFalzFPv(void* p);
void swap_and_send__14TBoss4DarkFalzFPv(void* p);
void swap_bytes__14TBoss4DarkFalzFPv(void* p);
int TBoss4DarkFalz__sub_8004BA70(void*);
int TLobby__send_and_handle_60(void*);
int VecCopy__FP3VecPC3Vec(void*, void* a1 = 0);
int bswap_16__FPUs(void*);
int bswap_32__FPUl(void*);
int create__16TObjOnlineEndingFPv(void*);
int read_be16_field2__10TObjPlayerFPv(void*);

    extern int TBoss4DarkFalz__data_805D4D64;
int TBoss4DarkFalz__sub_8004C1AC(void) {  return TBoss4DarkFalz__data_805D4D64; }

extern s32 TBoss4DarkFalz__data_805D4D60;

s32 TBoss4DarkFalz__sub_8004C1B4(void) {
    return TBoss4DarkFalz__data_805D4D60;
}

extern s32 TBoss4DarkFalz__data_805D4D5C;

s32 get_instance__14TBoss4DarkFalzFv(void) {
    return TBoss4DarkFalz__data_805D4D5C;
}

int is_field378_zero__14TBoss4DarkFalzFPv(void* p) { return *(u32*)((char*)p + 0x378) == 0; }
s32 get_action_state__14TBoss4DarkFalzFPv(void* p) { return *(s32*)((char*)p + 0x374); }
s32 get_phase__14TBoss4DarkFalzFPv(void* p) { return *(s32*)((char*)p + 0x374); }
s32 get_state__14TBoss4DarkFalzFPv(void* p) { return *(s32*)((char*)p + 0x374); }
void* get_hit_data__14TBoss4DarkFalzFPv(void* p) { return (char*)p + 0x5c; }
void save_position__14TBoss4DarkFalzFi(s32 arg0) {
    VecCopy__FP3VecPC3Vec((void*)(arg0 + 0x44), (void*)(arg0 + 0x38));
}

int TBoss4DarkFalz__sub_8004C220(void* p) { return VecCopy__FP3VecPC3Vec((char*)p + 0x38); }

void swap_and_send__14TBoss4DarkFalzFPv(void* p) { swap_bytes__14TBoss4DarkFalzFPv((void*)(p)); TLobby__send_and_handle_60(p); }
void swap_bytes__14TBoss4DarkFalzFPv(void* p) { read_be16_field2__10TObjPlayerFPv(p); bswap_16__FPUs((char*)p + 0x4); bswap_16__FPUs((char*)p + 0x6); bswap_32__FPUl((char*)p + 0x8); bswap_32__FPUl((char*)p + 0xc); }
void set_code_25_4__14TBoss4DarkFalzFPv(void* p) { *(u8*)((char*)p + 0x0) = 25; *(u8*)((char*)p + 0x1) = 4; }

void set_state__14TBoss4DarkFalzFPv(void* p) { TBoss4DarkFalz__sub_8004BA70(p); create__16TObjOnlineEndingFPv(p); *(int*)((char*)p + 0x380) = 454; }

}
