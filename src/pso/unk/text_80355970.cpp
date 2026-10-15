#include "types.h"

#include <stddef.h>
struct Stack_80355970 {
    s32 sp8;
    f32 spC;
    u8 trailing_storage[0x4];
};

extern "C" {
s32 VecCopy__FP3VecPC3Vec(void *, void *);
u8 *csnVecterUnder(s32 *, s32);
s32 __nw__7TObjectFUl(int);
s32 TBoss5GryphonTornado__ct(int, void *, void *, void *, void *);
extern const f32 lbl_805D8D48;
s32 spawn_gryphon_tornado(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
}

extern "C" {

s32 spawn_gryphon_tornado(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    typedef char sp8_offset[(offsetof(Stack_80355970, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_80355970, spC) == 0x4) ? 1 : -1];
    Stack_80355970 stack;
    f32 temp_f1;
    s32 temp_r3_2;
    s32 var_r0;
    u8 *temp_r3;
    VecCopy__FP3VecPC3Vec((void *) (&stack.sp8), (void *) (arg2));
    stack.spC = lbl_805D8D48;
    temp_r3 = (u8 *)(csnVecterUnder(&stack.sp8, 0x16EF));
    if (temp_r3 == NULL) {
        return 0;
    }
    temp_f1 = *(f32 *)((s8 *)(*(u8 **)((s8 *)temp_r3 + 4)) + 4);
    if (temp_f1 > lbl_805D8D48) {
        return 0;
    }
    stack.spC = temp_f1;
    temp_r3_2 = __nw__7TObjectFUl((int) (0x5C));
    var_r0 = temp_r3_2;
    if (var_r0 != 0) {
        var_r0 = TBoss5GryphonTornado__ct((int) (temp_r3_2), (void *) (arg0), (void *) (arg1), (void *) (&stack.sp8), (void *) (arg3));
    }
    return var_r0;
}

}
