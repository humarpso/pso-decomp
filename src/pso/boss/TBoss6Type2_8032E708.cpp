#include "types.h"

extern "C" {

int update_segment_angles__11TBoss6Type2FPv(void*);
void set_target_nodes__11TBoss6Type2FPvPvPv(void* p, void* a1, void* a2);
void TBoss6Type2__sub_8032E708(void* p, s32 v);
void set_action_field_0x408__11TBoss6Type2FPvs(void* p, s16 v);
void set_anim_frame__11TBoss6Type2FPvi(void* p, s32 v);

void TBoss6Type2__sub_8032E708(void* p, s32 v) { *(s32*)((char*)p + 0x40c) = v; }
void set_action_field_0x408__11TBoss6Type2FPvs(void* p, s16 v) { *(s16*)((char*)p + 0x408) = v; }
void set_target_nodes__11TBoss6Type2FPvPvPv(void* p, void* a1, void* a2) { *(void**)((char*)p + 0x2e4) = a1; *(void**)((char*)p + 0x390) = a2; update_segment_angles__11TBoss6Type2FPv(p); }
void set_anim_frame__11TBoss6Type2FPvi(void* p, s32 v) { *(s32*)((char*)p + 0x37c) = v; }

}
