#include "types.h"

extern "C" {

s32 fn_80016D78();
s32 fn_80016C54();
s32 fn_800D1D70(void* p);
void* fn_800D1D78(void* p);

s32 fn_800D1D70(void* p) { return *(s32*)((char*)p + 0x46c); }
void* fn_800D1D78(void* p) { return (char*)p + 0x47c; }
int fn_800D1D80(void* a0 = 0) { return 0; }
s32 fn_800D1DBC(s32 arg0) {
    if (fn_80016D78() != 0) {
        fn_800D1D80((void*)(arg0));
        return 1;
    }
    return 0;
}
s32 fn_800D1E04(s32 arg0) {
    if (fn_80016C54() != 0) {
        fn_800D1D80((void*)(arg0));
        return 1;
    }
    return 0;
}

}
