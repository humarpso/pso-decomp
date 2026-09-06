#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
struct M2CCopy_28 { u8 bytes[0x28]; };

#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
extern "C" {
void __dl__FPv(void*);
extern s32 lbl_805D4E5C;
void release__17TWindowSubComCardFv(void);
extern s32 lbl_805D4E58;
s32 get_chr_select__17TWindowSubComCardFv(void);
u8 * TWindowSubComCard__sub_80077958(s32 arg0, s32 arg1);
}

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
void release__17TWindowSubComCardFv(void) {
    if ((u32) (*(u32 *)&lbl_805D4E5C) != 0U) {
        __dl__FPv((void*)(*(u32 *)&lbl_805D4E5C));
        (*(u32 *)&lbl_805D4E5C) = 0U;
    }
}
s32 get_chr_select__17TWindowSubComCardFv(void) {
    return lbl_805D4E58;
}
u8 * TWindowSubComCard__sub_80077958(s32 arg0, s32 arg1) {
    *(M2CCopy_28 *)(arg0) = *(const M2CCopy_28 *)(arg1);
    return (u8 *)arg0;
}

}
