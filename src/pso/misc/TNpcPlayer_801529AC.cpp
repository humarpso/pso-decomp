#include "types.h"

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
s32 is_partner_counter_reached();
s32 clamp_partner_counter(s32 arg0, s32 arg1, s16 arg2);
}

extern "C" {

void copy_transform__10TNpcPlayerFPvPv(void* p, void* q);
s32 get_action_state__10TNpcPlayerFPv(void* p);
void reset_fields_8c__10TNpcPlayerFPv(void* p);
s32 TNpcPlayer__sub_801528DC(void* p);
s32 TNpcPlayer__sub_80152978(void* p);
void TNpcPlayer__sub_80152A30(void);
int TNpcPlayer__sub_80152A78(void* a0 = 0);
int bswap_6x45_packet(void*);
int bswap_6x44_packet(void*);
int bswap_6x43_packet(void*);
void TNpcPlayer__sub_80152D64(void* p);
int TObjPlayer__sub_80102CE0(void*);
s32 get_condition__10TNpcPlayerFPv(void* p);
s32 get_npc_state__10TNpcPlayerFPv(void* p);
u16 get_npc_type__10TNpcPlayerFPv(void* p);
void* init__10TNpcPlayerFPv(void* p);
void init_model__10TNpcPlayerFPv(void* p);
int read_be16_field2__10TObjPlayerFPv(void*);
void reset_model__10TNpcPlayerFPv(void* p);
void update__10TNpcPlayerFPv(void* p);
void update_lobby__10TNpcPlayerFPv(void* p);
void update_players__10TNpcPlayerFPv(void* p);
int update_players__6TLobbyFi(void*);

void copy_transform__10TNpcPlayerFPvPv(void* p, void* q) { *(u32*)((char*)p + 0x0) = *(u32*)((char*)q + 0x0); *(u32*)((char*)p + 0x4) = *(u32*)((char*)q + 0x4); *(f32*)((char*)p + 0x8) = *(f32*)((char*)q + 0x8); }
s32 get_action_state__10TNpcPlayerFPv(void* p) { return *(s32*)((char*)p + 0x8c); }
void reset_fields_8c__10TNpcPlayerFPv(void* p) { *(s32*)((char*)p + 0x8c) = 0; *(s32*)((char*)p + 0x90) = 0; }
s32 clamp_partner_counter(s32 arg0, s32 arg1, s16 arg2) {
    if (is_partner_counter_reached() != 0) {
        M2C_FIELD((arg0 + (arg1 * 2)), s16 *, 0) = arg2;
        return 1;
    }
    return 0;
}

}
