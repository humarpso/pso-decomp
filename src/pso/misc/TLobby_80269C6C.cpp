#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
u8 * TWindowMessage__ct(void *, s32, u32, s16);
u8 *__nw__7TObjectFUl(M2C_UNK);
M2C_UNK TLobby__sub_80269DA4(void *, void *);
u8 *TLobby__sub_80269CC0(s32 arg0, s32 arg1, u32 arg2, s16 arg3);
}

extern "C" {

int send_and_handle__6TLobbyFPvii(void* p, int a1, int a2);
void set_window_mode_4__6TLobbyFPvii(void *arg0, M2C_UNK arg1, M2C_UNK arg2);
void update_window_mode_from_progress__6TLobbyFiPv(s32 arg0, void *arg1);
f32 TWindowSubStatusDisp__sub_803D647C(f32);
int fn_80269A0C(void*, int, int, int);

int send_and_handle__6TLobbyFPvii(void* p, int a1, int a2) { return fn_80269A0C(p, a1, a2, -1); }

u8 *TLobby__sub_80269CC0(s32 arg0, s32 arg1, u32 arg2, s16 arg3) {
    u8 *temp_r3;
    u8 *var_r0;
    TLobby__sub_80269DA4((void *) (arg1), (void *) (arg2));
    temp_r3 = (u8 *)(__nw__7TObjectFUl(0x90));
    var_r0 = (u8 *)(temp_r3);
    if (var_r0 != NULL) {
        var_r0 = (u8 *)(TWindowMessage__ct(temp_r3, arg0, arg2, arg3));
    }
    return var_r0;
}

void set_window_mode_4__6TLobbyFPvii(void *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    TLobby__sub_80269CC0((s32)(arg0), (s32)(arg1), (u32)(arg2), (s16)(4));
}

extern const f32 lbl_805DD238;

void update_window_mode_from_progress__6TLobbyFiPv(s32 arg0, void *arg1) {
    set_window_mode_4__6TLobbyFPvii((void *)((void *)(arg0)), (M2C_UNK)((M2C_UNK)(arg1)), (M2C_UNK)((M2C_UNK)((s32) TWindowSubStatusDisp__sub_803D647C((M2C_FIELD(arg1, f32 *, 4) - lbl_805DD238) / lbl_805DD238) + 2)));
}

}
