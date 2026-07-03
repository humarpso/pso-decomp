#include "types.h"

extern "C" {

s32 fn_80102BE0(s32, s32);
int fn_800FFE04(void);
void fn_800FFE0C(void);
void fn_800FFE10(void);
int fn_800FFE14(void);
int TItemObject__sub_800FFE4C(void* p);
int fn_80102BEC(void*, int);

int fn_800FFDBC(void) { return 0; }
int fn_800FFE04(void) { return 0; }
void fn_800FFE0C(void) {  }
void fn_800FFE10(void) {  }
int fn_800FFE14(void) { return 0; }
u8 fn_800FFE1C(void) {
    s32 uninit;
    return (u8) (fn_80102BE0(uninit, 0x400) == 0x400);
}

}
