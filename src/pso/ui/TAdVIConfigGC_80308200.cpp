#include "types.h"

extern "C" {

s32 fn_80308294(u32 a0 = 0, s32 a1 = 0);
u32 fn_80101AB0(void);
void TAdYesNoBaseGC__vt4(void);
void TAdYesNoBaseGC__vt5(void);
void TAdVIConfigGC__sub_80308200(void* p, s32 v);

void TAdVIConfigGC__sub_80308200(void* p, s32 v) { *(s32*)((char*)p + 0x2c) = v; }

}
