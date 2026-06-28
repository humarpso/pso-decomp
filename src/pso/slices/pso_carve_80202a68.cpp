#include "types.h"

extern "C" {

s32 __dt__12TPlyCharDataFv(s32, s32);
s32 __dl__FPv(s32);
u8 fn_80202B30(void* p);

int fn_80202A68(void) { return 0; }
int fn_80202A74(void) { return 0; }
s32 fn_80202AD0(s32 arg0, s16 arg1) {
    if (arg0 != 0) {
        __dt__12TPlyCharDataFv(arg0, -1);
        if (arg1 > 0) {
            __dl__FPv(arg0);
        }
    }
    return arg0;
}
int fn_80202B1C(void) { return 0; }
u8 fn_80202B30(void* p) { return *(u8*)((char*)p + 0x0); }
int fn_80202B38(void) { return 0; }
int fn_80202B4C(void) { return 0; }

}
