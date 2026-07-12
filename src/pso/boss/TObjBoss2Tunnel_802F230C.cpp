#include "types.h"

extern "C" {

s32 TObjBoss2Tunnel__sub_802F2300(s32 a0 = 0);
s32 TObjBoss2Tunnel__sub_802F22F4(void);
void TObjBoss2Tunnel__sub_802F23FC(void);

s32 TObjBoss2Tunnel__sub_802F230C(s32 arg0) {
    s32 temp_r31;
    s32 temp_r3;

    temp_r31 = TObjBoss2Tunnel__sub_802F22F4();
    temp_r3 = TObjBoss2Tunnel__sub_802F2300(arg0);
    return temp_r3 | temp_r31;
}

}
