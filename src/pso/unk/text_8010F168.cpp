#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *TItemDrop__sub_8010F168(void *arg0, s16 arg1);
u8 *TItemDrop__sub_8010F1B8(u8 *arg0, s32 arg1, s32 arg2);
M2C_UNK __dl__FPv(void *);
s32 alloc_buffer__11TOBoss4RockFPv(void *);
M2C_UNK fn_8010F018();
M2C_UNK fn_8010F0C0(void *);
M2C_UNK free__11TOBoss4RockFUi(s32);
M2C_UNK init_forward__10TObjPlayerFPv(void *);

void *TItemDrop__sub_8010F168(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        fn_8010F018();
        free__11TOBoss4RockFUi(M2C_FIELD(arg0, s32 *, 8));
        if (arg1 > 0) {
            __dl__FPv(arg0);
        }
    }
    return arg0;
}

u8 *TItemDrop__sub_8010F1B8(u8 *arg0, s32 arg1, s32 arg2) {
    init_forward__10TObjPlayerFPv((void *) (arg0 + 0xC));
    M2C_FIELD(arg0, s32 *, 4) = arg1;
    M2C_FIELD(arg0, s32 *, 0) = arg2;
    M2C_FIELD(arg0, s32 *, 8) = alloc_buffer__11TOBoss4RockFPv((void *) (arg2));
    fn_8010F0C0((void *) (arg0));
    return arg0;
}

}
