#include "types.h"

extern "C" {

f32 fn_80084800(void);
f64 fn_803A20A4();
void fn_800847FC(void);
int fn_80084854(void* p);

int fn_800847D4(void) { return 0; }
void fn_800847FC(void) {  }
f32 fn_80084800(void) {
    return (f32) fn_803A20A4();
}
int fn_80084824(void) { return 0; }
int fn_80084834(void) { return 0; }
int fn_80084840(void) { return 0; }
int fn_80084854(void* p) { return *(u32*)((char*)p + 0xcfc) == 0; }

}
