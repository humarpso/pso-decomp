#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

int TObjPlayer__sub_80019664(void);
s32 TObjPlayer__sub_800196EC(void);
void bswap_head16__10TObjPlayerFPv(void* p);
f32 calc_random_ratio__10TObjPlayerFv(void);
s32 get_field_3e4__10TObjPlayerFPv(void* p);
u8 get_field_ed__10TObjPlayerFPv(void* p);
int get_item_field_6__10TObjPlayerFPv(void* p);
s32 get_player_count__10TObjPlayerFv(void);
s32 get_type__10TObjPlayerFPv(void* p);
int read_be16_field2__10TObjPlayerFPv(void* p);
void send_head__10TObjPlayerFPv(void* p);
u32 TAdSinglePlyChrSelectGC__sub_8007C3E0();
int TLobby__send_and_handle_60(void*);
f64 TObjPlayer__sub_80019784(void);
int bswap_16__FPUs(void*);
int get_slot_value__10TObjPlayerFPvi(void*, int);
f64 start__10TAdEndTextFv(void);

void bswap_head16__10TObjPlayerFPv(void* p) { read_be16_field2__10TObjPlayerFPv((void*)(p)); bswap_16__FPUs((char*)p + 0x4); }
int read_be16_field2__10TObjPlayerFPv(void* p) { return bswap_16__FPUs((char*)p + 0x2); }
void send_head__10TObjPlayerFPv(void* p) { bswap_head16__10TObjPlayerFPv((void*)(p)); TLobby__send_and_handle_60(p); }

int TObjPlayer__sub_80019664(void) { return 0; }

extern M2C_UNK lbl_80434088;
extern const f32 lbl_805D7D3C;

f32 calc_random_ratio__10TObjPlayerFv(void) {
    return (f32) (TAdSinglePlyChrSelectGC__sub_8007C3E0() >> 0x10U) / lbl_805D7D3C;
}

extern s32 lbl_805D5FC0;

s32 TObjPlayer__sub_800196EC(void) {
    return lbl_805D5FC0;
}

s32 get_field_3e4__10TObjPlayerFPv(void* p) { return *(s32*)((char*)p + 0x3e4); }

extern s32 lbl_805D5D6C;

s32 get_player_count__10TObjPlayerFv(void) {
    return lbl_805D5D6C;
}

int get_item_field_6__10TObjPlayerFPv(void* p) { return get_slot_value__10TObjPlayerFPvi((char*)p + 0xd04, 6); }
u8 get_field_ed__10TObjPlayerFPv(void* p) { return *(u8*)((char*)p + 0xed); }
s32 get_type__10TObjPlayerFPv(void* p) { return *(s32*)((char*)p + 0x0); }

}
