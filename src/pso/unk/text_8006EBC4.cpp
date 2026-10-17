#include "types.h"
#include "pso/misc/TWindowCtrl.h"

extern "C" {
s32 __ct__16TObjBagWarnWin4PFv(int, void *);
s32 __nw__7TObjectFUl(int);
s32 fn_8006EBC4(s32 arg0);
s32 fn_8006EBC4(s32 arg0) {
    s32 temp_r3;
    s32 var_r0;
    if (TWindowCtrl::is_map_visible() == 0) {
        temp_r3 = __nw__7TObjectFUl((int) (0xA4));
        var_r0 = temp_r3;
        if (var_r0 != 0) {
            var_r0 = __ct__16TObjBagWarnWin4PFv((int) (temp_r3), (void *) (arg0));
        }
        return var_r0;
    }
    return 0;
}

}
