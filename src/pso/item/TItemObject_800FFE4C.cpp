#include "types.h"

extern "C" {

s32 TObjPlayer__sub_80102BE0(s32, s32);
int fn_800FFE04(void);
void fn_800FFE0C(void);
void fn_800FFE10(void);
int fn_800FFE14(void);
int TItemObject__sub_800FFE4C(void* p);
int TObjPlayer__sub_80102BEC(void*, int);

int TItemObject__sub_800FFE4C(void* p) { return TObjPlayer__sub_80102BEC(p, 1024); }

}
