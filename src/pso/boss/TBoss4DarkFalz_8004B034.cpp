#include "types.h"

extern "C" {

u8 TBoss4DarkFalz__sub_8004B034(void);
int TBoss4DarkFalz__sub_8004B07C(void);
s32 get_main_phase();
s32 is_split_screen();

u8 TBoss4DarkFalz__sub_8004B034(void) {
    int var_r31;

    var_r31 = 0;
    if ((get_main_phase() == 0xF) || (is_split_screen() != 0)) {
        var_r31 = 1;
    }
    return (u8)var_r31;
}
int TBoss4DarkFalz__sub_8004B07C(void) { return 0; }

}
