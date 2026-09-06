#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Stack_800D8F78 {
    M2C_UNK sp8;
    f32 spC;
};

extern "C" {
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
M2C_UNK TLobby__sub_800869A4(void *, int, int, int);
M2C_UNK TObjEneDellBiter__sub_80087350(void *, int, f32);
extern const f32 lbl_805DA3C0;
void TBoss3Volopt__sub_800D8F78(s32 arg0);
}

extern "C" {

void create_breakup_mdl__12TBoss3VoloptFiiiii(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
M2C_UNK TBreakUpMdl__ct(void*, s32, s32, s32, s32, s32, s32);
void* __nw__7TObjectFUl(M2C_UNK);

extern s32 tl_05;

void create_breakup_mdl__12TBoss3VoloptFiiiii(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    void* obj = __nw__7TObjectFUl(0x54);
    if (obj != 0) {
        TBreakUpMdl__ct(obj, tl_05, arg0, arg1, arg2, arg3, arg4);
    }
}
void TBoss3Volopt__sub_800D8F78(s32 arg0) {
    Stack_800D8F78 stack;
    f32 temp_f1;
    VecCopy__FP3VecPC3Vec((void *) (&stack.sp8), (void *) (arg0));
    TLobby__sub_800869A4((void *) (arg0), (int) (0xEA), (int) (0xA), (int) (0x1E));
    temp_f1 = stack.spC;
    stack.spC = temp_f1 + lbl_805DA3C0;
    TObjEneDellBiter__sub_80087350((void *) (&stack.sp8), (int) (0xE9), (f32) (temp_f1));
}

}
