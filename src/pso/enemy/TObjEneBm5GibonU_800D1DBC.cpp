#include "types.h"

extern "C" {
int TObjEneBm5GibonU__sub_800D1D80(void* a0 = 0);

s32 TObjPlayer__sub_80016D78();
s32 TObjPlayer__sub_80016C54();
s32 TObjEneBm5GibonU__sub_800D1D70(void* p);
void* TObjEneBm5GibonU__sub_800D1D78(void* p);

s32 TObjEneBm5GibonU__sub_800D1DBC(s32 arg0) {
    if (TObjPlayer__sub_80016D78() != 0) {
        TObjEneBm5GibonU__sub_800D1D80((void*)(arg0));
        return 1;
    }
    return 0;
}
s32 TObjEneBm5GibonU__sub_800D1E04(s32 arg0) {
    if (TObjPlayer__sub_80016C54() != 0) {
        TObjEneBm5GibonU__sub_800D1D80((void*)(arg0));
        return 1;
    }
    return 0;
}

}
