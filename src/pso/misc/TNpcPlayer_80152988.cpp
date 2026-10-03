#include "types.h"

extern "C" {

void TNpcPlayer__sub_80152988(void* p, void* a1, void* a2);
s32 TNpcPlayer__sub_801528DC(void* p);
s32 TNpcPlayer__sub_80152978(void* p);
void TNpcPlayer__sub_80152A30(void);
int TNpcPlayer__sub_80152A78(void* a0 = 0);
int bswap_6x45_packet(void*);
int bswap_6x44_packet(void*);
int bswap_6x43_packet(void*);
void TNpcPlayer__sub_80152D64(void* p);
int TObjPlayer__sub_80102CE0(void*);
int copy_transform__10TNpcPlayerFPvPv(void* a0 = 0);
s32 get_action_state__10TNpcPlayerFPv(void* p);
s32 get_condition__10TNpcPlayerFPv(void* p);
s32 get_npc_state__10TNpcPlayerFPv(void* p);
u16 get_npc_type__10TNpcPlayerFPv(void* p);
void* init__10TNpcPlayerFPv(void* p);
void init_model__10TNpcPlayerFPv(void* p);
int read_be16_field2__10TObjPlayerFPv(void*);
void reset_fields_8c__10TNpcPlayerFPv(void* p);
void reset_model__10TNpcPlayerFPv(void* p);
void update__10TNpcPlayerFPv(void* p);
void update_lobby__10TNpcPlayerFPv(void* p);
void update_players__10TNpcPlayerFPv(void* p);
int update_players__6TLobbyFi(void*);

void TNpcPlayer__sub_80152988(void* p, void* a1, void* a2) { copy_transform__10TNpcPlayerFPvPv(a2); }

}
