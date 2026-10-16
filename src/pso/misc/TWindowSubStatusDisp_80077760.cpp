#include "types.h"
#include "pso/misc/TWindowSubStatusDisp.h"
#include "pso/misc/TWindowSubSymbolChat.h"

extern "C" {

int bswap_32__FPUl(void*);
s32 get_localized_text_entry(s32, s32);
int fn_80077788(void);
int fn_80077790(void);

void*TWindowSubStatusDisp::get_message_10(s32 index) { return (void*)get_localized_text_entry(10, index); }

}
