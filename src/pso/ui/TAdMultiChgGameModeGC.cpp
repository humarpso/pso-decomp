#include "types.h"

extern "C" {

void TAdMultiChgGameModeGC__vt2(void);
void fn_802FFC78(void);
void fn_802FFC7C(void);
s32 TAdMultiChgGameModeGC__sub_802FFC84(void);
s32 fn_802C64D0(u32);
s32 fn_802C658C(u32);

void fn_802FFC78(void) {  }
void fn_802FFC7C(void) {  }
void TAdMultiChgGameModeGC__vt2(void) {  }
s32 TAdMultiChgGameModeGC__sub_802FFC84(void) {
    u32 var_r31;

    var_r31 = 0U;
loop_1:
    if ((fn_802C64D0(var_r31) != 0) && (fn_802C658C(var_r31) > 3)) {
        return 1;
    }
    var_r31 += 1;
    if (var_r31 >= 4U) {
        return 0;
    }
    goto loop_1;
}

}
