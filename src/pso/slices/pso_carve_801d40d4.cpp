#include "types.h"

extern "C" {

s32 get_main_phase();
s32 TCameraCtrl__sub_8006B368();
s32 fn_801B0EE8();
s32 fn_801D5DAC();
s32 fn_8030A7B0();
int fn_801D42E0(void* p);
int memset(void*, int, int);

int fn_801D40D4(void) { return 0; }
s32 fn_801D415C(void) {
    if ((get_main_phase() == 0xE) || (fn_801B0EE8() != 0) || ((TCameraCtrl__sub_8006B368() == 1) && (fn_8030A7B0() == 1))) {
        return 0;
    }
    return fn_801D5DAC();
}
int fn_801D41B4(void) { return 0; }
int fn_801D4270(void) { return 0; }
int fn_801D42E0(void* p) { return memset(p, 0, 28); }
int fn_801D4308(void) { return 0; }

}
