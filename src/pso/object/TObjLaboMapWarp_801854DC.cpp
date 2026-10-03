#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_80185514_lbl_804B600C { M2C_UNK value; u8 remaining[0xC]; };
typedef char RecoveredGlobal_80185514_lbl_804B600C_size[sizeof(RecoveredGlobal_80185514_lbl_804B600C) == 0x10 ? 1 : -1];

extern "C" {
u8 * load_resource_from_descriptor(void *, s32, void *, s32, s32, s32);
int alloc__23TAdSinglePlyChrSelectGCFPv(void *);
extern RecoveredGlobal_80185514_lbl_804B600C lbl_804B600C;
extern u32 TObjLaboMapWarp__data_805D5B58;
void TObjLaboMapWarp__sub_80185514(void);
}

extern "C" {

void release_static_resource__15TObjLaboMapWarpFv(void);
void TLobby__sub_8001FE7C(void*, int);

extern u32 TObjLaboMapWarp__data_805D5B58;

void release_static_resource__15TObjLaboMapWarpFv(void) {
    if ((u32) TObjLaboMapWarp__data_805D5B58 != 0U) {
        TLobby__sub_8001FE7C((void*)TObjLaboMapWarp__data_805D5B58, 1);
        TObjLaboMapWarp__data_805D5B58 = 0U;
    }
}
void TObjLaboMapWarp__sub_80185514(void) {
    s32 temp_r3;
    s32 var_r0;
    temp_r3 = alloc__23TAdSinglePlyChrSelectGCFPv((void *)0x440);
    var_r0 = temp_r3;
    if (var_r0 != 0) {
        var_r0 = (long) (load_resource_from_descriptor((void *) temp_r3, 5, &lbl_804B600C.value, 0, 0, 0));
    }
    (*(s32 *)&TObjLaboMapWarp__data_805D5B58) = var_r0;
}

}
