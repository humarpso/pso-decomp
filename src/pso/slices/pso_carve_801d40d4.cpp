#include "types.h"

extern "C" {

s32 get_main_phase();
s32 TCameraCtrl__sub_8006B368();
s32 TTecCtrl__sub_801B0EE8();
s32 TAdSinglePlyChrSelectGC__sub_801D5DAC();
s32 TLobby__sub_8030A7B0();
int reset(void* p);
int memset(void*, int, int);

int fn_801D40D4(void) { return 0; }
s32 fn_801D415C(void) {
    if ((get_main_phase() == 0xE) || (TTecCtrl__sub_801B0EE8() != 0) || ((TCameraCtrl__sub_8006B368() == 1) && (TLobby__sub_8030A7B0() == 1))) {
        return 0;
    }
    return TAdSinglePlyChrSelectGC__sub_801D5DAC();
}
int fn_801D41B4(void) { return 0; }
int fn_801D4270(void) { return 0; }
int reset(void* p) { return memset(p, 0, 28); }
int fn_801D4308(void) { return 0; }

}
