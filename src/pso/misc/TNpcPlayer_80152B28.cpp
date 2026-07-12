#include "types.h"

extern "C" {

void init_model__10TNpcPlayerFPv(void* p);
int TObjPlayer__sub_8001960C(void*);
int TObjPlayer__sub_80102CE0(void*);
void update__10TNpcPlayerFPv(void* p);
int update_players__6TLobbyFi(void*);
int TNpcPlayer__sub_80152ACC(void*);
void update_players__10TNpcPlayerFPv(void* p);
int TNpcPlayer__sub_80152B5C(void*);
void update_lobby__10TNpcPlayerFPv(void* p);
int TNpcPlayer__sub_80152BEC(void*);
void reset_model__10TNpcPlayerFPv(void* p);
int TNpcPlayer__sub_80152A78(void* a0 = 0);
void* init__10TNpcPlayerFPv(void* p);
s32 TNpcPlayer__sub_801528DC(void* p);
s32 TNpcPlayer__sub_801528E4(void* p);
u16 TNpcPlayer__sub_801528EC(void* p);
s32 TNpcPlayer__sub_80152978(void* p);
s32 TNpcPlayer__sub_80152980(void* p);
void copy_transform__10TNpcPlayerFPvPv(void* p, void* q);
s32 TNpcPlayer__sub_801529C8(void* p);
void reset_fields_8c__10TNpcPlayerFPv(void* p);
void TNpcPlayer__sub_80152A30(void);
void TNpcPlayer__sub_80152D64(void* p);

void update_players__10TNpcPlayerFPv(void* p) { TNpcPlayer__sub_80152B5C(p); update_players__6TLobbyFi(p); }

}
