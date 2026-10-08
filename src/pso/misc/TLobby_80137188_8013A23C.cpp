#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
extern u8 TLobby__data_80506A6C[];
void __dt__18TPlyJoinLobbyEntryFv(void *self, s16 flag);
void __destroy_arr(void *arr, void *dtor, u32 size, u32 count);
void destroy_join_entries__6TLobbyFv(void);
}

extern "C" {

s32 TLobby__sub_8013A23C(s32 arg0);
M2C_UNK __ct__16TPlyGuildCardTagFv();

s32 TLobby__sub_8013A23C(s32 arg0) {
    __ct__16TPlyGuildCardTagFv();
    return arg0;
}
void destroy_join_entries__6TLobbyFv(void) {
    __destroy_arr(TLobby__data_80506A6C, (void *)__dt__18TPlyJoinLobbyEntryFv, 0x43c, 0xc);
}

}
