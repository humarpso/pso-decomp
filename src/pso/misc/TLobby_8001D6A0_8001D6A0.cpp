#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
extern s32 lbl_805D4A90;
void TLobby__sub_8001D9DC(void);
}

extern "C" {

void TLobby__sub_8001D9E8(void* p);
u32 *free_and_delete__6TLobbyFPvs(u32 *arg0, s16 arg1);
s32 get_card_window_area__6TLobbyFv(void);
u8 *init_memory_pool__6TLobbyFPviii(u8 *arg0, s32 arg1, s32 arg2, s32 arg3);
void send_or_handle_packet__6TLobbyFPvPvPvPvUi(void *arg0, void *arg1, void *arg2, void *arg3, u32 arg4);
M2C_UNK TLobby__sub_8001D568(M2C_UNK, s32);
M2C_UNK TLobby__sub_8001D600(M2C_UNK, void *, s32);
M2C_UNK __dl__FPv(u32 *);
u8 *fn_803DE864(s32, M2C_UNK);
s32 get_card_window__17TWindowSubComCardFUi(M2C_UNK);
M2C_UNK xfree__FPv(u32);

void send_or_handle_packet__6TLobbyFPvPvPvPvUi(void *arg0, void *arg1, void *arg2, void *arg3, u32 arg4) {
    if (arg4 == 0U) {
        TLobby__sub_8001D600(0, arg1, M2C_FIELD(arg2, s32 *, 8));
        return;
    }
    TLobby__sub_8001D568(0, M2C_FIELD(arg1, s32 *, 8));
}

u32 *free_and_delete__6TLobbyFPvs(u32 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        if ((u32) *arg0 != 0U) {
            xfree__FPv(*arg0);
            *arg0 = 0U;
        }
        if (arg1 > 0) {
            __dl__FPv(arg0);
        }
    }
    return arg0;
}

u8 *init_memory_pool__6TLobbyFPviii(u8 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_r4;
    u8 *temp_r3;
    u8 *temp_r5;

    M2C_FIELD(arg0, void **, 0) = fn_803DE864(arg3, 0x10);
    if ((void *) M2C_FIELD(arg0, void **, 0) != NULL) {
        M2C_FIELD(arg0, s32 *, 4) = arg3;
        temp_r4 = (arg2 + 0x1F) & 0xFFFFFFE0;
        M2C_FIELD(arg0, s32 *, 8) = temp_r4;
        temp_r3 = (unsigned char *) (M2C_FIELD(arg0, void **, 0));
        M2C_FIELD(arg0, void **, 0x2C) = temp_r3;
        temp_r5 = temp_r3 + 0x10;
        M2C_FIELD(M2C_FIELD(arg0, void **, 0x2C), void **, 0) = temp_r5;
        M2C_FIELD(M2C_FIELD(arg0, void **, 0x2C), s32 *, 4) = 0;
        M2C_FIELD(M2C_FIELD(arg0, void **, 0x2C), s32 *, 8) = 0;
        M2C_FIELD(M2C_FIELD(arg0, void **, 0x2C), s32 *, 0xC) = 0;
        M2C_FIELD(temp_r5, s32 *, 0) = 0;
        M2C_FIELD(temp_r5, void **, 4) = (void *) M2C_FIELD(arg0, void **, 0);
        M2C_FIELD(temp_r5, s32 *, 8) = arg1;
        M2C_FIELD(temp_r5, s32 *, 0xC) = temp_r4;
    }
    return arg0;
}

void TLobby__sub_8001D9DC(void) {
    lbl_805D4A90 = 0;
}

void TLobby__sub_8001D9E8(void* p) { *(s32*)((char*)p + 0x4) = 0; *(s32*)((char*)p + 0x0) = 0; *(s32*)((char*)p + 0xc) = 0; *(s32*)((char*)p + 0x8) = 0; }

s32 get_card_window_area__6TLobbyFv(void) {
    return get_card_window__17TWindowSubComCardFUi(0xFFFF) + 0x2050;
}

}
