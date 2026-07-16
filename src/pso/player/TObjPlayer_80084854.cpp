#include "types.h"

extern "C" {

s32 GXSetTexCoordGen2(s32 a0 = 0, s32 a1 = 0, s32 a2 = 0, s32 a3 = 0, s32 a4 = 0, s32 a5 = 0);
f32 TObjPlayer__sub_80084800(void);
f64 TAdEndText__sub_803A20A4();
void TObjPlayer__sub_800847FC(void);
int TObjPlayer__sub_80084854(void* p);

int TObjPlayer__sub_80084854(void* p) { return *(u32*)((char*)p + 0xcfc) == 0; }

}
