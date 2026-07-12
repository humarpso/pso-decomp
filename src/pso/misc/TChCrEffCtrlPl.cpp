#include "types.h"

extern "C" {

s32 TChCrEffCtrlPl__sub_80298F38(void);
int TChCrEffCtrlPl__sub_80298F6C(void* p);
int TAdMultiPlyChrSelectGC__sub_80299454(void*);
s32 TAdMultiPlyChrSelectGC__sub_802C6488();

s32 TChCrEffCtrlPl__sub_80298F38(void) {
    s32 var_r3;

    var_r3 = TAdMultiPlyChrSelectGC__sub_802C6488();
    if ((var_r3 < 0) || (var_r3 > 3)) {
        var_r3 = 0;
    }
    return var_r3;
}
int TChCrEffCtrlPl__sub_80298F6C(void* p) { return TAdMultiPlyChrSelectGC__sub_80299454(p); }

}
