#include "types.h"

extern "C" {

void TObjPlayer__sub_801BD3A4(void);
void free_chara_making__10TObjPlayerFPv(void* p);
void update_body_parts__10TObjPlayerFPv(void* p);
void TObjPlayer__sub_801BD384(void* p);
int copy_player_visual_record(void*);
int TObjWaitEntryHairMoveSim__sub_800FE73C(void*);
int free_loaded_buffers__12TCharaMakingFPv(void*);
int update_body_parts__12TCharaMakingFPv(void*);
int apply_pending_effect__11TBoss6Type2FPv(void*);

void TObjPlayer__sub_801BD384(void* p) { update_body_parts__10TObjPlayerFPv(p); }
void TObjPlayer__sub_801BD3A4(void) {  }
void free_chara_making__10TObjPlayerFPv(void* p) { apply_pending_effect__11TBoss6Type2FPv(p); free_loaded_buffers__12TCharaMakingFPv(p); }
void update_body_parts__10TObjPlayerFPv(void* p) { copy_player_visual_record((char*)p + 0x85c); *(int*)((char*)p + 0xcfc) = 255; update_body_parts__12TCharaMakingFPv(p); TObjWaitEntryHairMoveSim__sub_800FE73C(p); }

}
