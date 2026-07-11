#include "types.h"

extern "C" {

void TAdSinglePlyChrSelectGC__sub_802E2158(void);
void create_result_bg__23TAdSinglePlyChrSelectGCFi(s32 arg0);
s32 close_and_dispatch__23TAdSinglePlyChrSelectGCFPvPvPvPvPv(s32, s32, s32, s32, s32);
s32 create_backgrounds__23TAdSinglePlyChrSelectGCFPv();
s32 fn_80132F2C(s32, s32);

void TAdSinglePlyChrSelectGC__sub_802E2158(void) {  }
void create_result_bg__23TAdSinglePlyChrSelectGCFi(s32 arg0) {
    create_backgrounds__23TAdSinglePlyChrSelectGCFPv();
    close_and_dispatch__23TAdSinglePlyChrSelectGCFPvPvPvPvPv(arg0, fn_80132F2C(0x1C, 0x1C), -1, 0, 0);
}

}
