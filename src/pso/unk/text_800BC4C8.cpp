#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredGlobal_800BC4C8_lbl_804928A0 {
    M2C_UNK value;
    u8 remaining[0x28];
};

struct RecoveredGlobal_800BC4C8_lbl_804928CC {
    M2C_UNK value;
    u8 remaining[0x58];
};

extern "C" {
s32 fn_800BC3E8(void *, void *);
s32 init_collision_body_parts(void *, void *, int);
s32 TObjPlayer__sub_801569F4(void *);
extern RecoveredGlobal_800BC4C8_lbl_804928A0 lbl_804928A0;
extern RecoveredGlobal_800BC4C8_lbl_804928CC lbl_804928CC;
u8 *fn_800BC4C8(u8 *arg0, M2C_UNK arg1, u32 arg2);
}

extern "C" {

typedef char RecoveredGlobal_800BC4C8_lbl_804928A0_size[sizeof(RecoveredGlobal_800BC4C8_lbl_804928A0) == 0x2C ? 1 : -1];
typedef char RecoveredGlobal_800BC4C8_lbl_804928CC_size[sizeof(RecoveredGlobal_800BC4C8_lbl_804928CC) == 0x5C ? 1 : -1];
u8 *fn_800BC4C8(u8 *arg0, M2C_UNK arg1, u32 arg2) {
    TObjPlayer__sub_801569F4((void *) (arg0));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &lbl_804928CC.value;
    init_collision_body_parts((void *) (arg0), (void *) (&lbl_804928A0.value), (int) (1));
    if (arg2 != 0U) {
        fn_800BC3E8((void *) (arg0), (void *) (arg2));
    } else {
        M2C_FIELD(arg0, s32 *, 0xAC) = 0;
    }
    return arg0;
}

}
