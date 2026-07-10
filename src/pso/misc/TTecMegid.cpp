#include "types.h"

extern "C" {

void render__9TTecMegidFv(void);
void create__9TTecMegidFiiii(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
void create_ex__9TTecMegidFiiii(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
s32 TTecMegid__ct(u32 a0 = 0, s32 a1 = 0, s32 a2 = 0, s32 a3 = 0, s32 a4 = 0);
s32 TTecMegid__sub_80235940(u32 a0 = 0, s32 a1 = 0, s32 a2 = 0, s32 a3 = 0, s32 a4 = 0);
u32 __nw__7TObjectFUl(s32 a0 = 0);

void create__9TTecMegidFiiii(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    u32 obj;
    obj = __nw__7TObjectFUl(0x17C);
    if (obj != 0U) {
        TTecMegid__ct(obj, arg0, arg1, arg2, arg3);
    }
}
void create_ex__9TTecMegidFiiii(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    u32 obj;
    obj = __nw__7TObjectFUl(0x17C);
    if (obj != 0U) {
        TTecMegid__sub_80235940(obj, arg0, arg1, arg2, arg3);
    }
}
void render__9TTecMegidFv(void) {  }

}
