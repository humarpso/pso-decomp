#include "types.h"

extern "C" {

int TLobby__send_and_handle_60(void*);
int fn_80357250(void* p);
void build_6xAD_olga_flow_subordinate_boss_actions(void* p);
int fn_8001960C(void*);

void fn_8035721C(void* p) { fn_80357250(p); TLobby__send_and_handle_60(p); }
int fn_80357250(void* p) { return fn_8001960C(p); }
void build_6xAD_olga_flow_subordinate_boss_actions(void* p) { *(u8*)((char*)p + 0x0) = 173; *(u8*)((char*)p + 0x1) = 17; }
int TItemEffOrgaFlowShot__sub_80357284(void) { return 0; }

}
