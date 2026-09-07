#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_80353684_lbl_804F11E8 { M2C_UNK value; u8 remaining[0xC]; };
typedef char RecoveredGlobal_80353684_lbl_804F11E8_size[sizeof(RecoveredGlobal_80353684_lbl_804F11E8) == 0x10 ? 1 : -1];

extern "C" {
u8 * TLobby__sub_80020004(void *, s32, void *, s32, s32, s32);
int alloc__23TAdSinglePlyChrSelectGCFPv(void *);
s32 get_lobby_type__6TLobbyFv(void);
extern RecoveredGlobal_80353684_lbl_804F11E8 lbl_804F11E8;
extern u32 TObjKabochaLobby__data_805D6EE8;
extern s32 TObjKabochaLobby__data_805D6EEC;
void TObjKabochaLobby__sub_80353684(void);
}

extern "C" {

void unload_static_data__16TObjKabochaLobbyFv(void);
void TLobby__sub_8001FE7C(void*, int);

extern u32 TObjKabochaLobby__data_805D6EE8;

void unload_static_data__16TObjKabochaLobbyFv(void) {
    if ((u32) TObjKabochaLobby__data_805D6EE8 != 0U) {
        TLobby__sub_8001FE7C((void*)TObjKabochaLobby__data_805D6EE8, 1);
        TObjKabochaLobby__data_805D6EE8 = 0U;
    }
}
void TObjKabochaLobby__sub_80353684(void) {
    s32 temp_r3;
    s32 var_r0;
    temp_r3 = alloc__23TAdSinglePlyChrSelectGCFPv((void *)0x440);
    var_r0 = temp_r3;
    if (var_r0 != 0) {
        var_r0 = (long) (TLobby__sub_80020004((void *) temp_r3, 5, &lbl_804F11E8.value, 0, 0, 0));
    }
    (*(s32 *)&TObjKabochaLobby__data_805D6EE8) = var_r0;
    TObjKabochaLobby__data_805D6EEC = get_lobby_type__6TLobbyFv();
}

}
