#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
int sprintf(char *, const char *, ...);
M2C_UNK set_modem_check_param_360(int);
M2C_UNK set_modem_param(int);
M2C_UNK set_modem_check_char(int);
M2C_UNK set_modem_flag(int);
M2C_UNK set_modem_check_param(int);
M2C_UNK TAdTrialModemChkGC__sub_8042F080(int);
M2C_UNK set_modem_trial_param(int);
M2C_UNK TAdTrialModemChkGC__sub_8042F0D4(int);
M2C_UNK TAdPlayerLoadGC__sub_8042F108(int);
void *memset(void *, int, u32);
extern char lbl_80480270[];
extern s32 lbl_805D7CA8;
extern u8 *lbl_805D7CC0;
extern s32 lbl_805D7CC4;
s32 init_modem_check_params__18TAdTrialModemChkGCFv(void);
}

extern "C" {

s32 init_modem_check_params__18TAdTrialModemChkGCFv(void) {
    if ((s32) lbl_805D7CA8 == 0) {
        return -1;
    }
    memset((void *) (lbl_805D7CC0 + 0x7020), (int) (0), (int) (0x800));
    M2C_FIELD(lbl_805D7CC0, s32 *, 0x1C) = 0x674;
    sprintf((char *) (lbl_805D7CC4 + 4), lbl_80480270);
    TAdPlayerLoadGC__sub_8042F108((int) (0));
    TAdTrialModemChkGC__sub_8042F0D4((int) (3));
    set_modem_trial_param((int) (1));
    TAdTrialModemChkGC__sub_8042F080((int) (3));
    set_modem_check_param((int) (3));
    set_modem_flag((int) (1));
    set_modem_check_char((int) (1));
    set_modem_param((int) (5));
    set_modem_check_param_360((int) (0));
    M2C_FIELD(lbl_805D7CC0, s32 *, 4) = (s32) (M2C_FIELD(lbl_805D7CC0, s32 *, 4) & 0xFFFFF7FF);
    return 0;
}

}
