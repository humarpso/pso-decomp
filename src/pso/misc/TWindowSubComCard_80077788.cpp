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

struct S_80077840 { u32 key; s32 val; };

struct S_80077814 { u32 key; s32 val; };

struct S_80077798 { s32 a; s32 b; };

struct D_80077798 { s16 a; s16 b; };

struct DO_80077798 { u8 pad[4]; D_80077798 e[5]; };

struct S_80077980 { s32 key; s32 val; };

struct Ent_800777C4 { u16 a; u16 b; u8 pad[0x1C]; };

struct Tbl_800777C4 { u8 f0; u8 count; u8 pad[2]; Ent_800777C4 e[1]; };

extern "C" {
void __dl__FPv(void*);
extern s32 lbl_805D4E5C;
void release__17TWindowSubComCardFv(void);
extern s32 lbl_805D4E58;
s32 get_chr_select__17TWindowSubComCardFv(void);
u8 * TWindowSubComCard__sub_80077958(s32 arg0, s32 arg1);
s32 TWindowSubComCard__sub_80077840(S_80077840 *arr, u16 key);
void fn_80077814(S_80077814 *arr, u16 key, s32 val);
void TLobby__sub_80077798(S_80077798 *src, DO_80077798 *dst);
void TWindowSubComCard__sub_80077980(S_80077980 *arr);
u32 fn_800777C4(Tbl_800777C4 *t, u16 a, u32 b);
}

extern "C" {

int fn_80077788(void);
int fn_80077790(void);
s32 get_com_count__17TWindowSubComCardFv(void);
int TAdSinglePlyChrSelectGC__sub_80132F2C(void*, void*);
int bswap_32__FPUl(void*);
int byteswap_entry__20TWindowSubSymbolChatFPv(void*);
int is_initialized__20TWindowSubSymbolChatFPv(void* p);

int fn_80077788(void) { return 0; }
int fn_80077790(void) { return 0; }

void TLobby__sub_80077798(S_80077798 *src, DO_80077798 *dst) {
    s32 i;
    D_80077798 *d = dst->e;
    for (i = 0; i < 5; i++) {
        d->a = src->a;
        d->b = src->b;
        src++;
        d++;
    }
}

extern s32 lbl_805D4E5C;

u32 fn_800777C4(Tbl_800777C4 *t, u16 a, u32 b) {
    s32 i;
    Ent_800777C4 *e;
    if (b == 0) {
        return 0;
    }
    e = t->e;
    for (i = 0; i < t->count; i++) {
        if (e->a == a && e->b == b) {
            return e->b;
        }
        e++;
    }
    return 0;
}

void fn_80077814(S_80077814 *arr, u16 key, s32 val) {
    s32 i;
    for (i = 0; i < 5; i++) {
        if (arr->key == key) {
            arr->val = val;
            return;
        }
        arr++;
    }
}

s32 TWindowSubComCard__sub_80077840(S_80077840 *arr, u16 key) {
    s32 i;
    for (i = 0; i < 5; i++) {
        if (arr->key == key) {
            return arr->val;
        }
        arr++;
    }
    return 0;
}

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
void TWindowSubComCard__sub_80077980(S_80077980 *arr) {
    s32 i;
    for (i = 0; i < 5; i++) {
        arr->key = 0;
        arr->val = 0;
        arr++;
    }
}

}
