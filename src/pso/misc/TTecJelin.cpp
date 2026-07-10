#include "types.h"

extern "C" {

void render__9TTecJelinFv(void);
void create__9TTecJelinFiiii(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
s32 TTecJelin__sub_80233958(u32 a0 = 0, s32 a1 = 0, s32 a2 = 0, s32 a3 = 0, s32 a4 = 0);
u32 __nw__7TObjectFUl(s32 a0 = 0);

void create__9TTecJelinFiiii(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    u32 obj;
    obj = __nw__7TObjectFUl(0x14C);
    if (obj != 0U) {
        TTecJelin__sub_80233958(obj, arg0, arg1, arg2, arg3);
    }
}
void render__9TTecJelinFv(void) {  }

}
