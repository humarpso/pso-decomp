#include "types.h"

extern "C" {

s16 get_handle_value__10TObjPlayerFPv(void* p);
int sub_802a7290_fwd__10TObjPlayerFPv(void*);

s16 get_handle_value__10TObjPlayerFPv(void* p) { return (s16)(sub_802a7290_fwd__10TObjPlayerFPv(*(void**)((char*)p + 0x380))); }

}
