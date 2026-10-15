#include "types.h"
#include "pso/misc/TWindowSubStatusDisp.h"

extern "C" {

int bswap_32__FPUl(void*);
int byteswap_entry__20TWindowSubSymbolChatFv(void*);
s32 get_localized_text_entry(s32, s32);
int is_initialized__20TWindowSubSymbolChatFv(void* p);
int fn_80077788(void);
int fn_80077790(void);

void*TWindowSubStatusDisp::get_message_10(s32 index) { return (void*)get_localized_text_entry(10, index); }

}
