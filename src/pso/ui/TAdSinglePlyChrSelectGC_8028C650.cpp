#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TAdSinglePlyChrSelectGC__sub_8028C650(u8 *arg0);
s32 TLobby__sub_8001EEF4();
u32 TLobby__sub_8002058C(u32, M2C_UNK, void *, void *, M2C_UNK, M2C_UNK, s32);
s32 TLobby__sub_8028D714(s32);
u32 alloc__23TAdSinglePlyChrSelectGCFPv(M2C_UNK);
s32 try_acquire_slot__23TAdSinglePlyChrSelectGCFPv(void *);

void TAdSinglePlyChrSelectGC__sub_8028C650(u8 *arg0) {
    u32 var_r31;

    if ((TLobby__sub_8001EEF4() != 0) && (try_acquire_slot__23TAdSinglePlyChrSelectGCFPv(arg0) != 0)) {
        var_r31 = alloc__23TAdSinglePlyChrSelectGCFPv(0x440);
        if (var_r31 != 0U) {
            var_r31 = TLobby__sub_8002058C(var_r31, 6, arg0 + 0x60, arg0 + 0x64, 0, 0, TLobby__sub_8028D714(M2C_FIELD(arg0, s32 *, 0x24)));
        }
        M2C_FIELD(arg0, u32 *, 0x68) = var_r31;
        if (var_r31 != 0U) {
            M2C_FIELD(arg0, s32 *, 0x74) = 0x12C;
            M2C_FIELD(arg0, s32 *, 0x2C) = 1;
        }
    }
}

}
