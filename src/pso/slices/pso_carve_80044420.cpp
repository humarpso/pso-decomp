#include "types.h"

extern "C" {

s32 set_indexed_flags(s32 a0 = 0, s32 a1 = 0, s32 a2 = 0);
s32 fn_80154764(s32 a0 = 0, s32 a1 = 0, s32 a2 = 0);
void fn_80044420(void* p);
void fn_80044434(void* p);

void fn_80044420(void* p) { *(s32*)((char*)p + 0x20) = 1; *(s32*)((char*)p + 0x24) = 0; }
void fn_80044434(void* p) { *(s32*)((char*)p + 0x20) = 2; *(s32*)((char*)p + 0x24) = 0; }
void fn_80044448(s32 arg0) {
    fn_80154764(arg0, 0, 0x08000000);
}
void fn_80044470(s32 arg0) {
    set_indexed_flags(arg0, 0, 0x08000000);
}

}
