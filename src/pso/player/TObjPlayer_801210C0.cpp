#include "types.h"

extern "C" {

int obj_testFlags30(void*, void*);
void TObjPlayer__sub_8012105C(void);
void TObjPlayer__sub_80121060(void);
u8 TObjPlayer__sub_80121064(void* p);
void set_status_flags__10TObjPlayerFPvUi(void* p, u32 v);
void clear_equip_flags__10TObjPlayerFPvUi(void* p, u32 v);
void set_flag_8__10TObjPlayerFPv(void* p);
void set_model_param__10TObjPlayerFPvs(void* p, s16 v);
void set_model_id__10TObjPlayerFPvs(void* p, s16 v);
int is_status_subsystem_ready__10TObjPlayerFPv(void* p);
void* get_extended_state__10TObjPlayerFPv(void* p);
int query_extended_state__10TObjPlayerFPv(void* p);
void set_action_type__10TObjPlayerFPvs(void* p, s16 v);
void* get_state_ptr__10TObjPlayerFPv(void* p);
int get_attack_damage_scale(void*);
int TObjPlayer__sub_801D2F4C(void*);

void set_model_param__10TObjPlayerFPvs(void* p, s16 v) { *(s16*)((char*)p + 0x118) = v; }
void set_model_id__10TObjPlayerFPvs(void* p, s16 v) { *(s16*)((char*)p + 0x116) = v; }
int is_status_subsystem_ready__10TObjPlayerFPv(void* p) { return TObjPlayer__sub_801D2F4C((char*)p + 0x7cc); }
void* get_extended_state__10TObjPlayerFPv(void* p) { return get_state_ptr__10TObjPlayerFPv((char*)p + 0x7cc); }
int query_extended_state__10TObjPlayerFPv(void* p) { return get_attack_damage_scale((char*)p + 0x7cc); }
void test_flag30_bit0x100000__10TObjPlayerFPv(void* p) { obj_testFlags30(p, (void*)1048576); }
void* TObjPlayer__sub_80121160(void* a0, int a1) {  return (char*)(*(int*)((char*)a0 + 0xdb4)) + a1 * 48; }
void set_action_type__10TObjPlayerFPvs(void* p, s16 v) { *(s16*)((char*)p + 0x0) = v; }

}
