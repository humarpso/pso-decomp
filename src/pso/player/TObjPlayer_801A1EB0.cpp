#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

u16 fn_801A2078(s32);
u16 fn_801A20C8(s32);
u16 fn_801A210C(s32);
s32 TContainerAncient01__sub_8020335C(void);
s32 TOKeyMachine01__sub_802034A8(void);
int TObjRoomId__sub_801A1E2C(void);
void fn_801A1FD8(void);

s16 TObjPlayer__sub_801A1EB0(void *arg0) {
    s32 temp_r3;

    if ((TOKeyMachine01__sub_802034A8() == 0) || (TOKeyMachine01__sub_802034A8() == 0x12)) {
        return 0;
    }
    if ((u16) M2C_FIELD(arg0, u16 *, 0x1C) < 0x1000U) {
        temp_r3 = TOKeyMachine01__sub_802034A8();
        if (((u32) (temp_r3 - 1) <= 1U) || (TContainerAncient01__sub_8020335C() != 0) || (temp_r3 == 0xC) || (temp_r3 == 0x20)) {
            return M2C_FIELD(arg0, s16 *, 0x2E);
        }
        return M2C_FIELD(arg0, s16 *, 0x28);
    }
    return M2C_FIELD(arg0, s16 *, 0x28);
}

}
