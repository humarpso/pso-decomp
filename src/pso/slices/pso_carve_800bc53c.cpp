#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 fn_8002B094(void *);
s32 alloc_buffer__11TOBoss4RockFPv(s32);
s32 __dl__FPv(u32 *);
s32 free__11TOBoss4RockFUi(u32);
int queue_destruction__12TObjGrassWebFPv(void* p);
int queue_destruction__7TObjectFv(void*);

int TObjPlayer__sub_800BC53C(void) { return 0; }
int fn_800BC5A0(void) { return 0; }
int fn_800BC5EC(void) { return 0; }
void *fn_800BC620(void *arg0, s32 arg1, s32 arg2) {
    if (arg1 > 0) {
        M2C_FIELD(arg0, s32 *, 0) = alloc_buffer__11TOBoss4RockFPv(arg1 * 4);
    } else {
        M2C_FIELD(arg0, s32 *, 0) = 0;
    }
    M2C_FIELD(arg0, s32 *, 4) = arg2;
    M2C_FIELD(arg0, s32 *, 8) = 0;
    M2C_FIELD(arg0, s32 *, 0xC) = arg1;
    fn_8002B094(arg0);
    return arg0;
}
u32 *fn_800BC688(u32 *arg0, s16 arg1) {
    if (arg0 != NULL) {
        if ((u32) *arg0 != 0U) {
            free__11TOBoss4RockFUi(*arg0);
            *arg0 = 0U;
        }
        if (arg1 > 0) {
            __dl__FPv(arg0);
        }
    }
    return arg0;
}
int fn_800BC6E4(void) { return 0; }
int fn_800BC71C(void) { return 0; }
int fn_800BC758(void) { return 0; }

}
