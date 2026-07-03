#include "types.h"

extern "C" {

s32 fn_80141C68(s32 arg0, s16 arg1);
int __dl__FPv();
void fn_80141CA4(void* p);
void fn_80141CB0(void);
void fn_80141CB4(void);
void fn_80141CB8(void);
void TOTrapAncient02R__sub_80141CF0(void);
void fn_80141CF4(void);

s32 fn_80141C68(s32 arg0, s16 arg1) {
    if ((arg0 != 0) && (arg1 > 0)) {
        __dl__FPv();
    }
    return arg0;
}
void fn_80141CA4(void* p) { *(s32*)((char*)p + 0x0) = 0; }
void fn_80141CB0(void) {  }
void fn_80141CB4(void) {  }
void fn_80141CB8(void) {  }
int fn_80141CBC(void) { return 0; }

}
