#include "types.h"

extern "C" {
void *TPhotonMylla__sub_80154CB4(s32 id);
s32 TObjPlayer__sub_80019248(void *p);
s32 TObjPlayer__sub_80010C04(s32 id);
}

extern "C" {

s32 obj_setArrS16_FC(s32, s32, u16);
u16 obj_getArrU16_FC(s32, s32);
s32 obj_getField1c(s32);
s32 TOSwitchAttack__sub_80087278(s32, s32, s32);
s32 TObjPlayer__sub_80087638(s32, s32);
int obj_clearArrS16_FC(void*, void*);
void clear_s16_arrays__10TObjPlayerFPv(void* p);
int TObjPlayer__sub_80010A78(void);
void TObjPlayer__sub_80010A80(void);

s32 TObjPlayer__sub_80010C04(s32 id) {
    void *p;
    if ((u16)id == 0xFFFF || (u16)id >= 0x1000) {
        return 0;
    }
    p = TPhotonMylla__sub_80154CB4(id);
    if (p == 0) {
        return 0;
    }
    return TObjPlayer__sub_80019248(p);
}

}
