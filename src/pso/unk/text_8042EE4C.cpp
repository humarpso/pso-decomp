#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TAdPlayerLoadGC__sub_8042F108(s8 arg0);
s32 TAdTrialModemChkGC__sub_8042F080(s16 arg0);
s32 TAdTrialModemChkGC__sub_8042F0D4(s8 arg0);
s32 fn_8042EF48(s8 arg0);
s32 set_modem_check_char(s8 arg0);
s32 set_modem_check_param(s32 arg0);
s32 set_modem_check_param_360(s8 arg0);
s32 set_modem_flag(s8 arg0);
s32 set_modem_param(s16 arg0);
s32 set_modem_trial_param(s16 arg0);

extern s32 lbl_805D7CA8;
extern s8 *lbl_805D7CB8;
extern u8 *lbl_805D7CC0;

s32 fn_8042EF48(s8 arg0) {
    if ((s32) lbl_805D7CA8 == 0) {
        return -1;
    }
    *lbl_805D7CB8 = arg0;
    M2C_FIELD(lbl_805D7CC0, s32 *, 4) = (s32) (M2C_FIELD(lbl_805D7CC0, s32 *, 4) | 0x1000);
    return 0;
}

extern s32 lbl_805D7CA8;
extern u8 *lbl_805D7CC0;
extern u8 *lbl_805D7CC4;

s32 set_modem_check_param_360(s8 arg0) {
    if ((s32) lbl_805D7CA8 == 0) {
        return -1;
    }
    M2C_FIELD(lbl_805D7CC4, s8 *, 0x360) = arg0;
    M2C_FIELD(lbl_805D7CC0, s32 *, 4) = (s32) (M2C_FIELD(lbl_805D7CC0, s32 *, 4) | 0x800);
    return 0;
}

extern s32 lbl_805D7CA8;
extern u8 *lbl_805D7CC0;
extern u8 *lbl_805D7CC4;

s32 set_modem_param(s16 arg0) {
    if ((s32) lbl_805D7CA8 == 0) {
        return -1;
    }
    M2C_FIELD(lbl_805D7CC4, s16 *, 0x23E) = arg0;
    M2C_FIELD(lbl_805D7CC0, s32 *, 4) = (s32) (M2C_FIELD(lbl_805D7CC0, s32 *, 4) | 0x800);
    return 0;
}

extern s32 lbl_805D7CA8;
extern u8 *lbl_805D7CC0;
extern u8 *lbl_805D7CC4;

s32 set_modem_check_char(s8 arg0) {
    if ((s32) lbl_805D7CA8 == 0) {
        return -1;
    }
    M2C_FIELD(lbl_805D7CC4, s8 *, 0x23D) = arg0;
    M2C_FIELD(lbl_805D7CC0, s32 *, 4) = (s32) (M2C_FIELD(lbl_805D7CC0, s32 *, 4) | 0x800);
    return 0;
}

extern s32 lbl_805D7CA8;
extern u8 *lbl_805D7CC0;
extern u8 *lbl_805D7CC4;

s32 set_modem_flag(s8 arg0) {
    if ((s32) lbl_805D7CA8 == 0) {
        return -1;
    }
    M2C_FIELD(lbl_805D7CC4, s8 *, 0x23C) = arg0;
    M2C_FIELD(lbl_805D7CC0, s32 *, 4) = (s32) (M2C_FIELD(lbl_805D7CC0, s32 *, 4) | 0x800);
    return 0;
}

extern s32 lbl_805D7CA8;
extern u8 *lbl_805D7CC0;
extern u8 *lbl_805D7CC4;

s32 set_modem_check_param(s32 arg0) {
    if ((s32) lbl_805D7CA8 == 0) {
        return -1;
    }
    M2C_FIELD(lbl_805D7CC4, s32 *, 0xF4) = arg0;
    M2C_FIELD(lbl_805D7CC0, s32 *, 4) = (s32) (M2C_FIELD(lbl_805D7CC0, s32 *, 4) | 0x800);
    return 0;
}

extern u8 *lbl_805D7CC0;
extern u8 *lbl_805D7CC4;

s32 TAdTrialModemChkGC__sub_8042F080(s16 arg0) {
    M2C_FIELD(lbl_805D7CC4, s16 *, 0x1C2) = arg0;
    M2C_FIELD(lbl_805D7CC0, s32 *, 4) = (s32) (M2C_FIELD(lbl_805D7CC0, s32 *, 4) | 0x800);
    return 0;
}

extern s32 lbl_805D7CA8;
extern u8 *lbl_805D7CC0;
extern u8 *lbl_805D7CC4;

s32 set_modem_trial_param(s16 arg0) {
    if ((s32) lbl_805D7CA8 == 0) {
        return -1;
    }
    M2C_FIELD(lbl_805D7CC4, s16 *, 0x1C0) = arg0;
    M2C_FIELD(lbl_805D7CC0, s32 *, 4) = (s32) (M2C_FIELD(lbl_805D7CC0, s32 *, 4) | 0x800);
    return 0;
}

extern s32 lbl_805D7CA8;
extern u8 *lbl_805D7CC0;
extern u8 *lbl_805D7CC4;

s32 TAdTrialModemChkGC__sub_8042F0D4(s8 arg0) {
    if ((s32) lbl_805D7CA8 == 0) {
        return -1;
    }
    M2C_FIELD(lbl_805D7CC4, s8 *, 0x13D) = arg0;
    M2C_FIELD(lbl_805D7CC0, s32 *, 4) = (s32) (M2C_FIELD(lbl_805D7CC0, s32 *, 4) | 0x800);
    return 0;
}

extern s32 lbl_805D7CA8;
extern u8 *lbl_805D7CC0;
extern u8 *lbl_805D7CC4;

s32 TAdPlayerLoadGC__sub_8042F108(s8 arg0) {
    if ((s32) lbl_805D7CA8 == 0) {
        return -1;
    }
    M2C_FIELD(lbl_805D7CC4, s8 *, 0x13C) = arg0;
    M2C_FIELD(lbl_805D7CC0, s32 *, 4) = (s32) (M2C_FIELD(lbl_805D7CC0, s32 *, 4) | 0x800);
    return 0;
}

}
