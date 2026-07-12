#include "types.h"

extern "C" {

s32 get_clamped_player_index__14TChCrEffCtrlPlFv(void);
int TChCrEffCtrlPl__sub_80298F6C(void* p);
int TAdMultiPlyChrSelectGC__sub_80299454(void*);
s32 is_selection_confirmed__22TAdMultiPlyChrSelectGCFv();

s32 get_clamped_player_index__14TChCrEffCtrlPlFv(void) {
    s32 var_r3;

    var_r3 = is_selection_confirmed__22TAdMultiPlyChrSelectGCFv();
    if ((var_r3 < 0) || (var_r3 > 3)) {
        var_r3 = 0;
    }
    return var_r3;
}
int TChCrEffCtrlPl__sub_80298F6C(void* p) { return TAdMultiPlyChrSelectGC__sub_80299454(p); }

}
