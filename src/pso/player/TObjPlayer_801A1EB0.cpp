#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TLobby__sub_801A1FD8(void);
u16 TLobby__sub_801A1FDC(void *arg0, s32 arg1);
int fn_801A1F48(void);
s16 get_stat_by_key_state__10TObjPlayerFPv(void *arg0);
s32 TContainerAncient01__sub_8020335C(void);
u16 TLobby__sub_801A2078(s32);
u16 TLobby__sub_801A20C8(s32);
int TObjRoomId__sub_801A1E2C(void);
u16 fn_801A210C(s32);
s32 get_global_state__14TOKeyMachine01Fv(void);

s16 get_stat_by_key_state__10TObjPlayerFPv(void *arg0) {
    s32 temp_r3;

    if ((get_global_state__14TOKeyMachine01Fv() == 0) || (get_global_state__14TOKeyMachine01Fv() == 0x12)) {
        return 0;
    }
    if ((u16) M2C_FIELD(arg0, u16 *, 0x1C) < 0x1000U) {
        temp_r3 = get_global_state__14TOKeyMachine01Fv();
        if (((u32) (temp_r3 - 1) <= 1U) || (TContainerAncient01__sub_8020335C() != 0) || (temp_r3 == 0xC) || (temp_r3 == 0x20)) {
            return M2C_FIELD(arg0, s16 *, 0x2E);
        }
        return M2C_FIELD(arg0, s16 *, 0x28);
    }
    return M2C_FIELD(arg0, s16 *, 0x28);
}

int fn_801A1F48(void) { return 0; }

void TLobby__sub_801A1FD8(void) {  }
u16 TLobby__sub_801A1FDC(void *arg0, s32 arg1) {
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
            M2C_FIELD(arg0, u16 *, 0x1C) = TLobby__sub_801A2078(arg1);
            break;
        }
    }
    return M2C_FIELD(arg0, u16 *, 0x1C);
}

}
