#include "types.h"

extern "C" {

int bswap_32__FPUl(void*);
int byteswap_entry__20TWindowSubSymbolChatFPv(void*);
s32 get_localized_text_entry(s32, s32);
int is_initialized__20TWindowSubSymbolChatFPv(void* p);
int fn_80077788(void);
int fn_80077790(void);

void* get_message_10__20TWindowSubStatusDispFPv(s32 index) { return (void*)get_localized_text_entry(10, index); }

}
