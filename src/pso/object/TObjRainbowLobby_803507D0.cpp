#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_80350808_lbl_804F0DF0 { M2C_UNK value; u8 remaining[0xC]; };
typedef char RecoveredGlobal_80350808_lbl_804F0DF0_size[sizeof(RecoveredGlobal_80350808_lbl_804F0DF0) == 0x10 ? 1 : -1];

extern "C" {
u8 * TLobby__sub_80020004(void *, s32, void *, s32, s32, s32);
int alloc__23TAdSinglePlyChrSelectGCFPv(void *);
extern RecoveredGlobal_80350808_lbl_804F0DF0 lbl_804F0DF0;
extern u32 TObjRainbowLobby__data_805D6EB0;
void TObjRainbowLobby__sub_80350808(void);
}

extern "C" {

void free_static_data__16TObjRainbowLobbyFv(void);
void TLobby__sub_8001FE7C(void*, int);

extern u32 TObjRainbowLobby__data_805D6EB0;

void free_static_data__16TObjRainbowLobbyFv(void) {
    if ((u32) TObjRainbowLobby__data_805D6EB0 != 0U) {
        TLobby__sub_8001FE7C((void*)TObjRainbowLobby__data_805D6EB0, 1);
        TObjRainbowLobby__data_805D6EB0 = 0U;
    }
}
void TObjRainbowLobby__sub_80350808(void) {
    s32 temp_r3;
    s32 var_r0;
    temp_r3 = alloc__23TAdSinglePlyChrSelectGCFPv((void *)0x440);
    var_r0 = temp_r3;
    if (var_r0 != 0) {
        var_r0 = (long) (TLobby__sub_80020004((void *) temp_r3, 1, &lbl_804F0DF0.value, 0, 0, 0));
    }
    (*(s32 *)&TObjRainbowLobby__data_805D6EB0) = var_r0;
}

}
