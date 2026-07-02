#include "types.h"

extern "C" {

u8 TBoss4DarkFalz__sub_8004B034(void);
int TBoss4DarkFalz__sub_8004B07C(void);
s32 fn_8000F8FC();
s32 fn_80019690();

u8 TBoss4DarkFalz__sub_8004B034(void) {
    int var_r31;

    var_r31 = 0;
    if ((fn_8000F8FC() == 0xF) || (fn_80019690() != 0)) {
        var_r31 = 1;
    }
    return (u8)var_r31;
}
int TBoss4DarkFalz__sub_8004B07C(void) { return 0; }

}
