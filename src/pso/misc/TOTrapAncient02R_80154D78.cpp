#include "types.h"

extern "C" {

void TOTrapAncient02R__sub_80154D78(void);
void TObjPlayer__sub_80154D7C(void);
s32 TObjPlayer__sub_80154DBC(u32 arg0);
u32 TObjPlayer__sub_80040B28(s32);
int TObjPlayer__sub_80154E28(void*, void*);

void TOTrapAncient02R__sub_80154D78(void) {  }
void TObjPlayer__sub_80154D7C(void) { { int i; for (i = 0; i < 16; i++) { TObjPlayer__sub_80154E28((void*)i, (void*)0); } } }
s32 TObjPlayer__sub_80154DBC(u32 arg0) {
    s32 var_r31;
    u32 temp_r3;

    var_r31 = 0;
loop_1:
    temp_r3 = TObjPlayer__sub_80040B28(var_r31);
    if (temp_r3 == arg0) {
        return var_r31;
    }
    if (temp_r3 == 0U) {
        return TObjPlayer__sub_80154E28((void*)(var_r31), (void*)(arg0));
    }
    var_r31 += 1;
    if (var_r31 >= 0x10) {
        return -1;
    }
    goto loop_1;
}

}
