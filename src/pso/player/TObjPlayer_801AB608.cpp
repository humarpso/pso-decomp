#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
int alloc__23TAdSinglePlyChrSelectGCFPv(void *);
u8 * alloc_tables__6TLobbyFPvii(void *, s32, s32);
extern u8 *lbl_805D5D28;
extern u32 lbl_805D5D38;
void TObjPlayer__sub_801AB640(void);
}

extern "C" {

void TObjPlayer__sub_801AB688(void* a0);
void destroy_buffers__10TObjPlayerFv(void);
M2C_UNK destroy_buffer_pair(void*, M2C_UNK);

extern u32 lbl_805D5D38;

void destroy_buffers__10TObjPlayerFv(void) {
    if ((u32) lbl_805D5D38 != 0U) {
        destroy_buffer_pair((void*)lbl_805D5D38, 1);
    }
    lbl_805D5D38 = 0U;
}

    extern const float lbl_805DC188;

void TObjPlayer__sub_801AB640(void) {
    s32 temp_r3;
    s32 var_r0;
    temp_r3 = alloc__23TAdSinglePlyChrSelectGCFPv((void *)0x14);
    var_r0 = temp_r3;
    if (var_r0 != 0) {
        var_r0 = (long) (alloc_tables__6TLobbyFPvii((void *) temp_r3, M2C_FIELD(M2C_FIELD(lbl_805D5D28, u8 **, 0x42C), s32 *, 8), 0));
    }
    (*(s32 *)&lbl_805D5D38) = var_r0;
}

void TObjPlayer__sub_801AB688(void* a0) { *(float*)((char*)a0 + 0x15c) = lbl_805DC188; *(float*)((char*)a0 + 0x160) = lbl_805DC188; *(float*)((char*)a0 + 0x164) = lbl_805DC188; *(float*)((char*)a0 + 0x168) = lbl_805DC188; }

}
