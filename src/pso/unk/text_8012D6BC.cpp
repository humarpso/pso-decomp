#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredGlobal_8012D6BC_lbl_804A05A8 {
    M2C_UNK value;
    u8 remaining[0x1C];
};

extern "C" {
u8 * TItemTimerEvent__ct(void *, s16, s32);
extern RecoveredGlobal_8012D6BC_lbl_804A05A8 lbl_804A05A8;
u8 *TObjPlayer__sub_8012D6BC(u8 *arg0, s16 arg1, s32 arg2, f32 farg0);
}

extern "C" {

typedef char RecoveredGlobal_8012D6BC_lbl_804A05A8_size[sizeof(RecoveredGlobal_8012D6BC_lbl_804A05A8) == 0x20 ? 1 : -1];
u8 *TObjPlayer__sub_8012D6BC(u8 *arg0, s16 arg1, s32 arg2, f32 farg0) {
    TItemTimerEvent__ct(arg0, arg1, arg2);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &lbl_804A05A8.value;
    M2C_FIELD(arg0, f32 *, 0x2C) = farg0;
    return arg0;
}

}
