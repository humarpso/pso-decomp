#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_803DEB74_lbl_8058D8E0 {
    M2C_UNK value;
    u8 remaining[0xCC];
};

extern "C" {
extern RecoveredGlobal_803DEB74_lbl_8058D8E0 lbl_8058D8E0;
u8 *TKeyBoardControl__sub_803DEB74(u32 arg0);
s16 TKeyBoardControl__sub_803DEC10(s16 x);
}

extern "C" {

void clamp_axes__16TKeyBoardControlFPv(u8 *arg0);
void set_some_id__FUl(s32 arg0);

#pragma push
#pragma scheduling off
typedef char RecoveredGlobal_803DEB74_lbl_8058D8E0_size[sizeof(RecoveredGlobal_803DEB74_lbl_8058D8E0) == 0xD0 ? 1 : -1];
u8 *TKeyBoardControl__sub_803DEB74(u32 arg0) {
    s32 var_r5;
    var_r5 = 0;
    switch (arg0) {
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 7:
    case 8:
    case 9:
    case 10:
    case 11:
    case 13:
    case 14:
    case 15:
    case 16:
    case 17:
        break;
    case 0:
        var_r5 = 0;
        break;
    case 6:
        var_r5 = 1;
        break;
    case 12:
        var_r5 = 2;
        break;
    case 18:
        var_r5 = 3;
        break;
    }
    return (u8 *)(&lbl_8058D8E0.value) + (var_r5 * 0x34);
}
#pragma pop

#pragma push
#pragma scheduling off
#pragma optimize_for_size off
s16 TKeyBoardControl__sub_803DEC10(s16 x) {
    return (x * 128) / 89;
}
#pragma pop

void clamp_axes__16TKeyBoardControlFPv(u8 *arg0) {
    u8 temp_r0;
    u8 temp_r0_2;

    temp_r0 = M2C_FIELD(arg0, u8 *, 2);
    if ((s8) temp_r0 > 0x59) {
        M2C_FIELD(arg0, s8 *, 2) = 0x59;
    } else if ((s8) temp_r0 < -0x59) {
        M2C_FIELD(arg0, s8 *, 2) = -0x59;
    }
    temp_r0_2 = M2C_FIELD(arg0, u8 *, 3);
    if ((s8) temp_r0_2 > 0x59) {
        M2C_FIELD(arg0, s8 *, 3) = 0x59;
        return;
    }
    if ((s8) temp_r0_2 < -0x59) {
        M2C_FIELD(arg0, s8 *, 3) = -0x59;
    }
}

extern s32 some_id_805c6f74;

void set_some_id__FUl(s32 arg0) {
    some_id_805c6f74 = arg0;
}

}
