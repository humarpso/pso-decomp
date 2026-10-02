#include "types.h"

extern "C" {
s32 get_global_state__14TOKeyMachine01Fv();
u32 TObjEneRecobox__sub_8032013C(u32 arg0);
}

extern "C" {

int TObjEneRecobox__sub_803201D0(void);

    extern int TObjEneRecobox__data_805D6B20;

u32 TObjEneRecobox__sub_8032013C(u32 arg0) {
    u32 ret;
    if (((s32)(arg0 & 0xBFFF00FF) >> 16 << 16) != 0x30000) {
        return arg0;
    }
    ret = get_global_state__14TOKeyMachine01Fv();
    switch (ret) {
    case 0x22:
        ret = arg0 - 0x40010000 + 0x4E19;
        break;
    case 0x23:
        ret = arg0 - 0x40010000 + 0x4E28;
        break;
    default:
        return arg0;
    }
    ret |= arg0 & 0x8FFFFF00;
    return ret;
}

int TObjEneRecobox__sub_803201D0(void) {  return TObjEneRecobox__data_805D6B20; }

}
