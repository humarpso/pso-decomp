#include "types.h"

extern "C" {

int TNpcPlayer__sub_801528F4(void);
int TNpcPlayer__sub_80152900(void);
int TNpcPlayer__sub_80152950(void);
int TNpcPlayer__sub_8015296C(void);
s32 TNpcPlayer__sub_80152978(void* p);
s32 get_condition__10TNpcPlayerFPv(void* p);
s32 TNpcPlayer__sub_801528DC(void* p);
void TNpcPlayer__sub_80152A30(void);
int TNpcPlayer__sub_80152A78(void* a0 = 0);
int TNpcPlayer__sub_80152ACC(void*);
int TNpcPlayer__sub_80152B5C(void*);
int TNpcPlayer__sub_80152BEC(void*);
void TNpcPlayer__sub_80152D64(void* p);
int TObjPlayer__sub_80102CE0(void*);
void copy_transform__10TNpcPlayerFPvPv(void* p, void* q);
s32 get_action_state__10TNpcPlayerFPv(void* p);
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

int TNpcPlayer__sub_801528F4(void) { return 0; }
int TNpcPlayer__sub_80152900(void) { return 0; }
int TNpcPlayer__sub_80152950(void) { return 0; }
int TNpcPlayer__sub_8015296C(void) { return 0; }

s32 TNpcPlayer__sub_80152978(void* p) { return *(s32*)((char*)p + 0x80); }
s32 get_condition__10TNpcPlayerFPv(void* p) { return *(s32*)((char*)p + 0x90); }

}
