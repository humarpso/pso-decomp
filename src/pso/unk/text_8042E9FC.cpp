#include "types.h"
#include "pso/ui/TAdTrialModemChkGC.h"

extern "C" {
int sprintf(char *, const char *, ...);
s32 set_modem_check_param_360(s8 arg0);
s32 set_modem_param(s16 arg0);
s32 set_modem_check_char(s8 arg0);
s32 set_modem_flag(s8 arg0);
s32 set_modem_check_param(s32 arg0);
s32 TAdTrialModemChkGC__sub_8042F080(s16 arg0);
s32 set_modem_trial_param(s16 arg0);
s32 TAdTrialModemChkGC__sub_8042F0D4(s8 arg0);
s32 TAdPlayerLoadGC__sub_8042F108(s8 arg0);
void *memset(void *, int, u32);
extern char lbl_80480270[];
extern s32 lbl_805D7CA8;
extern u8 *lbl_805D7CC0;
extern s32 lbl_805D7CC4;
s32 TAdTrialModemChkGC::init_modem_check_params() {
    if ((s32) lbl_805D7CA8 == 0) {
        return -1;
    }
    memset((void *) (lbl_805D7CC0 + 0x7020), (int) (0), (int) (0x800));
    *(s32 *)((s8 *)lbl_805D7CC0 + 0x1C) = 0x674;
    sprintf((char *) (lbl_805D7CC4 + 4), lbl_80480270);
    TAdPlayerLoadGC__sub_8042F108((0));
    TAdTrialModemChkGC__sub_8042F0D4((3));
    set_modem_trial_param((1));
    TAdTrialModemChkGC__sub_8042F080((3));
    set_modem_check_param((3));
    set_modem_flag((1));
    set_modem_check_char((1));
    set_modem_param((5));
    set_modem_check_param_360((0));
    *(s32 *)((s8 *)lbl_805D7CC0 + 4) = (s32) (*(s32 *)((s8 *)lbl_805D7CC0 + 4) & 0xFFFFF7FF);
    return 0;
}

}
