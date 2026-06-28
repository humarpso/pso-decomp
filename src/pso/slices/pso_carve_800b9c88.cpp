#include "types.h"

extern "C" {

s32 fn_8000F8FC();
int fn_800B9C88(void* p);
int fn_800B9CA8(void* p);
int fn_800C6C10(void*);
int fn_801A85A0(void*);

int fn_800B9C88(void* p) { return fn_801A85A0(p); }
int fn_800B9CA8(void* p) { return fn_800C6C10(p); }
u8 fn_800B9CC8(void) {
    return (u8) (fn_8000F8FC() == 0xE);
}
u8 fn_800B9CF4(void) {
    return (u8) (fn_8000F8FC() == 0xF);
}
int TObjEneDD__vt97(void) { return 0; }

}
