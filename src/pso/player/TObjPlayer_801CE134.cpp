#include "types.h"

extern "C" {

s32 TObjPlayer__sub_801CEAC8();
s32 TObjPlayer__sub_801D2FB0(s32, s32, s32, s32);
void TObjPlayer__sub_801CE064(void);
int TObjPlayer__sub_801CE17C(void* p);
int TObjPlayer__sub_801BA2F4(void*);

void TObjPlayer__sub_801CE134(s32 arg0) {
    s32 temp_r3;

    temp_r3 = TObjPlayer__sub_801CEAC8();
    if (temp_r3 != -1) {
        TObjPlayer__sub_801D2FB0(arg0 + 0x7CC, arg0, temp_r3, 2);
    }
}
int TObjPlayer__sub_801CE17C(void* p) { return TObjPlayer__sub_801BA2F4(p); }

}
