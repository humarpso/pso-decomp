#include "types.h"

extern "C" {

s32 obj_setArrS16_FC(s32, s32, u16);
u16 obj_getArrU16_FC(s32, s32);
s32 obj_getField1c(s32);
s32 TOSwitchAttack__sub_80087278(s32, s32, s32);
s32 TObjPlayer__sub_80087638(s32, s32);
int obj_clearArrS16_FC(void*, void*);
void TObjPlayer__sub_80010A34(void* p);
int TObjPlayer__sub_80010A78(void);
void TObjPlayer__sub_80010A80(void);

void TObjPlayer__sub_80010AF0(s32 arg0) {
    s32 temp_r3;

    temp_r3 = TOSwitchAttack__sub_80087278(arg0 + 0x2FC, 0x1FE, 0x50);
    if (temp_r3 != 0) {
        TObjPlayer__sub_80087638(temp_r3, obj_getField1c(arg0));
    }
}

}
