#include "types.h"

extern "C" {

s32 fn_801AFD84(void* p);
s32 fn_801AFDA8(void* p);
int fn_801AFFB0(void* p);
int TOKeyMachine01__sub_802034A8(void*);

s32 fn_801AFD84(void* p) { return *(s32*)((char*)p + 0x3d0); }
int fn_801AFD8C(void) { return 0; }
s32 fn_801AFDA8(void* p) { return *(s32*)((char*)p + 0x890); }
int fn_801AFDB0(void) { return 0; }
int fn_801AFDBC(void) { return 0; }
int fn_801AFDD8(void) { return 0; }
int fn_801AFE78(void) { return 0; }
int fn_801AFEB4(void) { return 0; }
int fn_801AFEE0(void) { return 0; }
int fn_801AFF0C(void) { return 0; }
int fn_801AFF50(void) { return 0; }
int fn_801AFF80(void) { return 0; }
int fn_801AFFB0(void* p) { return TOKeyMachine01__sub_802034A8(p); }

}
