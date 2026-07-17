#include "types.h"

extern "C" {

int TFontSmallLobby__sub_801C0228(void*);
void* TObjPlayer__sub_801D28A0(void* p, void* a1);
int bswap_16__FPUs(void*);
int bswap_32__FPUl(void*);
f32 TObjPlayer__sub_801D2858(void* p);
s32 TObjPlayer__sub_801D2870(void* p);
s32 TObjPlayer__sub_801D2878(void* p);
int bswap_field_u32__10TObjPlayerFPv(void* p);
int clear_photon_blast_state__10TObjPlayerFPv(void* p);
int trigger_photon_blast__10TObjPlayerFPv(void* p);
int check_photon_blast_flag__10TObjPlayerFPv(void* p);
int check_flag_clear__10TObjPlayerFPv(void* p);
int TObjPlayer__sub_801D2A50(void* p);
void TObjPlayer__sub_801D2A78(void* p, f32 v);
s32 TObjPlayer__sub_801D2A80(void* p);
f32 TObjPlayer__sub_801D2A98(void* p);
void TObjPlayer__sub_801D2AA0(void* p, f32 v);
void TObjPlayer__sub_801D2AA8(void* p, s32 v);
void TObjPlayer__sub_801D2AC4(void* p, f32 v);
int start_photon_blast_action__10TObjPlayerFPv(void* p);
f32 get_dist__10TObjPlayerFPv(void* p);
int TObjPlayer__sub_801D2B08(void* p);
void set_technique_state__10TObjPlayerFPvi(void* p, s32 v);
void set_technique_id__10TObjPlayerFPvUc(void* p, u8 v);
int TObjPlayer__sub_801D2C84(void* p);
f32 TObjPlayer__sub_801D2CBC(void* p);
void TObjPlayer__sub_801D2CC4(void* p, f32 v);
void* get_technique_data__10TObjPlayerFPv(void* p);
void set_tech_override__10TObjPlayerFPvUc(void* p, u8 v);
f32 TObjPlayer__sub_801D2CDC(void* p);
void set_attack_target__10TObjPlayerFPvs(void* p, s16 v);
void* TObjPlayer__sub_801D2CEC(void* p);
int bswap_32__FPUl(void*);
int set_flags__10TObjPlayerFPvUi(void*, int);
int clear_flags__11TAdRicoRingFPvUi(void*, int);
int TObjPlayer__sub_8001BEF8(void*, int);
int fn_801D7BF4(void*);

void set_technique_state__10TObjPlayerFPvi(void* p, s32 v) { *(s32*)((char*)p + 0xc) = v; }
void set_technique_id__10TObjPlayerFPvUc(void* p, u8 v) { *(u8*)((char*)p + 0x0) = v; }
int TObjPlayer__sub_801D2C84(void* p) { return TObjPlayer__sub_8001BEF8((char*)p + 0x10, 2); }

}
