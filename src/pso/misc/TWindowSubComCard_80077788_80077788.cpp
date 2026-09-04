#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

int TLobby__sub_80077798(void);
int TWindowSubComCard__sub_80077840(void);
int fn_80077788(void);
int fn_80077790(void);
int fn_800777C4(void);
int fn_80077814(void);
s32 get_com_count__17TWindowSubComCardFv(void);
int TAdSinglePlyChrSelectGC__sub_80132F2C(void*, void*);
int bswap_32__FPUl(void*);
int byteswap_entry__20TWindowSubSymbolChatFPv(void*);
int is_initialized__20TWindowSubSymbolChatFPv(void* p);

int fn_80077788(void) { return 0; }
int fn_80077790(void) { return 0; }
int TLobby__sub_80077798(void) { return 0; }
int fn_800777C4(void) { return 0; }
int fn_80077814(void) { return 0; }
int TWindowSubComCard__sub_80077840(void) { return 0; }

extern s32 lbl_805D4E5C;

s32 get_com_count__17TWindowSubComCardFv(void) {
    return lbl_805D4E5C;
}

}
