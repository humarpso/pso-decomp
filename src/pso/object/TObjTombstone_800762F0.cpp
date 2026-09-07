#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

#include <stddef.h>
struct Stack_8007643C {
    u8 sp8;
    u8 sp9;
    u8 spA;
    u8 pad_B[0xD];
    M2C_UNK sp18;
    u8 trailing_storage[0x3C];
};

struct RecoveredGlobal_8007643C___vt__13TObjTombstone { M2C_UNK value; u8 remaining[0x34]; };
typedef char RecoveredGlobal_8007643C___vt__13TObjTombstone_size[sizeof(RecoveredGlobal_8007643C___vt__13TObjTombstone) == 0x38 ? 1 : -1];

extern "C" {
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
M2C_UNK TObjTombstone__sub_80075D68(void *);
void setup__13TObjTombstoneFPvii(u8 *arg0, s32 arg1, s32 arg2);
M2C_UNK TObjPlayer__sub_801569F4();
extern RecoveredGlobal_8007643C___vt__13TObjTombstone __vt__13TObjTombstone;
extern s32 lbl_805D289C;
extern s32 TObjTombstone__data_805D4E48;
u8 *TObjTombstone__ct(u8 *arg0, M2C_UNK arg1, s32 arg2, u8 *arg3);
}

extern "C" {

void setup__13TObjTombstoneFPvii(u8 *arg0, s32 arg1, s32 arg2);
s32 TObjFish__sub_8001EDB0(s32, M2C_UNK);
s32 TObjFish__sub_8001EDC4(s32, M2C_UNK);
M2C_UNK TObjTombstone__sub_80076390(void *, s32);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
M2C_UNK fn_80074E04(s32, void *);

extern s32 TObjTombstone__data_805D4E48;
extern const f32 TObjTombstone__data_805D9174;

void setup__13TObjTombstoneFPvii(u8 *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 0x24) = TObjFish__sub_8001EDB0(TObjTombstone__data_805D4E48, 0);
    M2C_FIELD(arg0, s32 *, 0x34) = TObjFish__sub_8001EDC4(TObjTombstone__data_805D4E48, 0);
    M2C_FIELD(arg0, s32 *, 0xAC) = arg1;
    TObjTombstone__sub_80076390(arg0 + 0xC0, arg2);
    VecCopy__FP3VecPC3Vec(arg0 + 0x38, arg0 + 0xD0);
    M2C_FIELD(arg0, s32 *, 0x60) = (s32) (M2C_FIELD(arg0, s32 *, 0xAC) << 0xD);
    M2C_FIELD(arg0, f32 *, 0xB0) = (f32) TObjTombstone__data_805D9174;
    M2C_FIELD(arg0, f32 *, 0xB4) = (f32) TObjTombstone__data_805D9174;
    M2C_FIELD(arg0, f32 *, 0xB8) = (f32) TObjTombstone__data_805D9174;
    M2C_FIELD(arg0, f32 *, 0xBC) = (f32) TObjTombstone__data_805D9174;
    M2C_FIELD(arg0, s32 *, 0x230) = 0;
    fn_80074E04(M2C_FIELD(arg0, s32 *, 0xAC), arg0 + 0x38);
}
u8 *TObjTombstone__ct(u8 *arg0, M2C_UNK arg1, s32 arg2, u8 *arg3) {
    typedef char sp8_offset[(offsetof(Stack_8007643C, sp8) == 0x0) ? 1 : -1];
    typedef char sp9_offset[(offsetof(Stack_8007643C, sp9) == 0x1) ? 1 : -1];
    typedef char spA_offset[(offsetof(Stack_8007643C, spA) == 0x2) ? 1 : -1];
    typedef char sp18_offset[(offsetof(Stack_8007643C, sp18) == 0x10) ? 1 : -1];
    Stack_8007643C stack;
    TObjPlayer__sub_801569F4();
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &__vt__13TObjTombstone.value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D289C;
    if ((u32) (*(u32 *)&TObjTombstone__data_805D4E48) == 0U) {
        return arg0;
    }
    stack.sp8 = M2C_FIELD(arg3, u8 *, 0);
    stack.sp9 = M2C_FIELD(arg3, u8 *, 1);
    stack.spA = M2C_FIELD(arg3, u8 *, 2);
    VecCopy__FP3VecPC3Vec((void *) (&stack.sp18), (void *) (arg3 + 4));
    setup__13TObjTombstoneFPvii((u8 *)((void *) (arg0)), (s32)((void *) (arg2)), (s32)((void *) (&stack.sp8)));
    TObjTombstone__sub_80075D68((void *) (arg0));
    M2C_FIELD(arg0, s32 *, 0x234) = 0;
    return arg0;
}

}
