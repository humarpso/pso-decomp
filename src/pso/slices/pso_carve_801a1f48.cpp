#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

u16 fn_801A2078(s32);
u16 TLobby__sub_801A20C8(s32);
u16 fn_801A210C(s32);
s32 TContainerAncient01__sub_8020335C(void);
s32 TOKeyMachine01__sub_802034A8(void);
int TObjRoomId__sub_801A1E2C(void);
void fn_801A1FD8(void);

int fn_801A1F48(void) { return 0; }
void fn_801A1FD8(void) {  }
u16 fn_801A1FDC(void *arg0, s32 arg1) {
    s32 temp_r3;

    if (M2C_FIELD(arg0, u16 *, 0x1C) == 0xFFFF) {
        temp_r3 = M2C_FIELD(arg0, s32 *, 0x30) & 0x70000000;
        switch (temp_r3) {
        case 0x10000000:
            M2C_FIELD(arg0, u16 *, 0x1C) = fn_801A210C(arg1);
            break;
        case 0x20000000:
            M2C_FIELD(arg0, u16 *, 0x1C) = TLobby__sub_801A20C8(arg1);
            break;
        default:
        case 0x40000000:
            M2C_FIELD(arg0, u16 *, 0x1C) = fn_801A2078(arg1);
            break;
        }
    }
    return M2C_FIELD(arg0, u16 *, 0x1C);
}

}
