#include "types.h"

extern "C" {

int TLobby__send_and_handle_60(void*);
int read_be16_field2_forward(void* p);
void build_6xAD_olga_flow_subordinate_boss_actions(void* p);
int read_be16_field2__10TObjPlayerFPv(void*);

void fn_8035721C(void* p) { read_be16_field2_forward(p); TLobby__send_and_handle_60(p); }
int read_be16_field2_forward(void* p) { return read_be16_field2__10TObjPlayerFPv(p); }
void build_6xAD_olga_flow_subordinate_boss_actions(void* p) { *(u8*)((char*)p + 0x0) = 173; *(u8*)((char*)p + 0x1) = 17; }
int TItemEffOrgaFlowShot__sub_80357284(void) { return 0; }

}
