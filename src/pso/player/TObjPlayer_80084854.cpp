#include "types.h"

extern "C" {

s32 GXSetTexCoordGen2(s32 a0 = 0, s32 a1 = 0, s32 a2 = 0, s32 a3 = 0, s32 a4 = 0, s32 a5 = 0);
f32 get_end_text_value__10TObjPlayerFv(void);
f64 TAdEndText__sub_803A20A4();
void TObjPlayer__sub_800847FC(void);
int is_inactive__10TObjPlayerFPv(void* p);

int is_inactive__10TObjPlayerFPv(void* p) { return *(u32*)((char*)p + 0xcfc) == 0; }

}
