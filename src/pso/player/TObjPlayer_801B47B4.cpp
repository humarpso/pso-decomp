#include "types.h"

extern "C" {

void send_field_state__10TObjPlayerFPv(void* p);
int send_field_state_if_active__10TObjPlayerFii(void*, void*);
int TObjPlayer__sub_801BF324(void*);

void send_field_state__10TObjPlayerFPv(void* p) { TObjPlayer__sub_801BF324((char*)p + 0x384); send_field_state_if_active__10TObjPlayerFii(p, (void*)142625); }

}
