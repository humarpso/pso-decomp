#include "types.h"

extern "C" {

s16 fn_8026F664(void* p);
s16 fn_8026F69C(void* p);
s32 fn_801A52E8(s32, s32, s32);

void fn_8026F638(s32 arg0, s32 arg1) {
    fn_801A52E8(arg0, arg1 << 0x10, 0xFFFCFFFF);
}
s16 fn_8026F664(void* p) { return *(s16*)((char*)p + 0x78); }
int fn_8026F66C(void) { return 0; }
s16 fn_8026F69C(void* p) { return *(s16*)((char*)p + 0x7a); }

}
