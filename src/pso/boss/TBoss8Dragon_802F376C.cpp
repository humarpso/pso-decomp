#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Stack_802F3A48 {
    M2C_UNK sp8;
    u8 trailing_storage[0x3C];
};

extern "C" {
s32 __nw__7TObjectFUl(int);
s32 setup_attack_slot__12TBoss8DragonFiUiiiPv(void *, void *, void *, void *, void *);
s32 TBoss8Dragon__sub_80359DC4(int, int, void *, void *);
extern s32 tl_04;
s32 TBoss8Dragon__sub_802F3A48(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
}

extern "C" {

s32 TBoss8Dragon__sub_802F3A48(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    Stack_802F3A48 stack;
    s32 temp_r3;
    s32 var_r0;
    if (setup_attack_slot__12TBoss8DragonFiUiiiPv((void *) (arg0), (void *) (arg1), (void *) (arg2), (void *) (arg4), (void *) (&stack.sp8)) != 0) {
        temp_r3 = __nw__7TObjectFUl((int) (0x8A4));
        var_r0 = temp_r3;
        if (var_r0 != 0) {
            var_r0 = TBoss8Dragon__sub_80359DC4((int) (temp_r3), (int) (tl_04), (void *) (&stack.sp8), (void *) (arg3));
        }
        return var_r0;
    }
    return 0;
}

}
