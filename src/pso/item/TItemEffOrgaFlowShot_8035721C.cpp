#include "types.h"

extern "C" {

int TLobby__send_and_handle_60(void*);
int read_be16_field2_forward(void* p);
void build_6xAD_olga_flow_subordinate_boss_actions(void* p);
int read_be16_field2__10TObjPlayerFPv(void*);

void TItemEffOrgaFlowShot__sub_8035721C(void* p) { read_be16_field2_forward(p); TLobby__send_and_handle_60(p); }

}
