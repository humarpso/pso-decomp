#include "types.h"

extern "C" {

int get_game_mode__23TAdSinglePlyChrSelectGCFv(void);
u8 is_both_confirmed__23TAdSinglePlyChrSelectGCFPv(void *arg0);

    extern int lbl_805D5FA4;
int get_game_mode__23TAdSinglePlyChrSelectGCFv(void) {  return lbl_805D5FA4; }

u8 is_both_confirmed__23TAdSinglePlyChrSelectGCFPv(void *arg0) {
    s32 var_r4;

    var_r4 = 0;
    if (((u8) *(u8 *)((s8 *)arg0 + 0) == 1) && ((u8) *(u8 *)((s8 *)arg0 + 1) == 1)) {
        var_r4 = 1;
    }
    return (u8)var_r4;
}

}
