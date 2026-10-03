#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_80187DC8_lbl_804B6228 { M2C_UNK value; u8 remaining[0xC]; };
typedef char RecoveredGlobal_80187DC8_lbl_804B6228_size[sizeof(RecoveredGlobal_80187DC8_lbl_804B6228) == 0x10 ? 1 : -1];

extern "C" {
u8 * load_resource_from_descriptor(void *, s32, void *, s32, s32, s32);
int alloc__23TAdSinglePlyChrSelectGCFPv(void *);
extern RecoveredGlobal_80187DC8_lbl_804B6228 lbl_804B6228;
extern u32 TObjGbAdvance__data_805D5B74;
void TObjGbAdvance__sub_80187DC8(void);
}

extern "C" {

void free_shared_data__13TObjGbAdvanceFv(void);
void TLobby__sub_8001FE7C(void*, int);

extern u32 TObjGbAdvance__data_805D5B74;

void free_shared_data__13TObjGbAdvanceFv(void) {
    if ((u32) TObjGbAdvance__data_805D5B74 != 0U) {
        TLobby__sub_8001FE7C((void*)TObjGbAdvance__data_805D5B74, 1);
        TObjGbAdvance__data_805D5B74 = 0U;
    }
}
void TObjGbAdvance__sub_80187DC8(void) {
    s32 temp_r3;
    s32 var_r0;
    temp_r3 = alloc__23TAdSinglePlyChrSelectGCFPv((void *)0x440);
    var_r0 = temp_r3;
    if (var_r0 != 0) {
        var_r0 = (long) (load_resource_from_descriptor((void *) temp_r3, 5, &lbl_804B6228.value, 0, 0, 0));
    }
    (*(s32 *)&TObjGbAdvance__data_805D5B74) = var_r0;
}

}
