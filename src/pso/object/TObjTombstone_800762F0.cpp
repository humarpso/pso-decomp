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

#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
struct C_80076390 { u32 w[2]; };

struct In_80076390 { u32 w[5]; };

struct B_80076390 { u32 a; In_80076390 b; };

struct E_80076390 { u32 w[8]; };

struct T_80076390 {
    u8 b0, b1, b2, b3;
    s16 h4, h6;
    s32 i8, iC;
    C_80076390 c10;
    B_80076390 s18;
    E_80076390 s30;
};

extern "C" {
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
M2C_UNK reset_entries_and_format_name__13TObjTombstoneFPv(void *);
void setup__13TObjTombstoneFPvii(u8 *arg0, s32 arg1, s32 arg2);
M2C_UNK construct_collider_proxy__10TObjPlayerFPv();
extern RecoveredGlobal_8007643C___vt__13TObjTombstone __vt__13TObjTombstone;
extern s32 TObjTombstone__class_name;
extern s32 TObjTombstone__shared_resource_object;
u8 *TObjTombstone__ct(u8 *arg0, M2C_UNK arg1, s32 arg2, u8 *arg3);
s32 copy_record__13TObjTombstoneFPvi(void *arg0, s32 arg1);
}

extern "C" {

void setup__13TObjTombstoneFPvii(u8 *arg0, s32 arg1, s32 arg2);
s32 TObjFish__sub_8001EDB0(s32, M2C_UNK);
s32 get_bml_model(s32, M2C_UNK);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
M2C_UNK fn_80074E04(s32, void *);

extern s32 TObjTombstone__shared_resource_object;
extern const f32 TObjTombstone__data_805D9174;

void setup__13TObjTombstoneFPvii(u8 *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 0x24) = TObjFish__sub_8001EDB0(TObjTombstone__shared_resource_object, 0);
    M2C_FIELD(arg0, s32 *, 0x34) = get_bml_model(TObjTombstone__shared_resource_object, 0);
    M2C_FIELD(arg0, s32 *, 0xAC) = arg1;
    copy_record__13TObjTombstoneFPvi((void *)(arg0 + 0xC0), (s32)(arg2));
    VecCopy__FP3VecPC3Vec(arg0 + 0x38, arg0 + 0xD0);
    M2C_FIELD(arg0, s32 *, 0x60) = (s32) (M2C_FIELD(arg0, s32 *, 0xAC) << 0xD);
    M2C_FIELD(arg0, f32 *, 0xB0) = (f32) TObjTombstone__data_805D9174;
    M2C_FIELD(arg0, f32 *, 0xB4) = (f32) TObjTombstone__data_805D9174;
    M2C_FIELD(arg0, f32 *, 0xB8) = (f32) TObjTombstone__data_805D9174;
    M2C_FIELD(arg0, f32 *, 0xBC) = (f32) TObjTombstone__data_805D9174;
    M2C_FIELD(arg0, s32 *, 0x230) = 0;
    fn_80074E04(M2C_FIELD(arg0, s32 *, 0xAC), arg0 + 0x38);
}

#define dst ((T_80076390 *)arg0)
#define src ((T_80076390 *)arg1)
s32 copy_record__13TObjTombstoneFPvi(void *arg0, s32 arg1) {
    dst->b0 = src->b0;
    dst->b1 = src->b1;
    dst->b2 = src->b2;
    dst->b3 = src->b3;
    dst->h4 = src->h4;
    dst->h6 = src->h6;
    dst->i8 = src->i8;
    dst->iC = src->iC;
    dst->c10 = src->c10;
    dst->s18 = src->s18;
    dst->s30 = src->s30;
    return (s32)dst;
}
#undef dst
#undef src

u8 *TObjTombstone__ct(u8 *arg0, M2C_UNK arg1, s32 arg2, u8 *arg3) {
    typedef char sp8_offset[(offsetof(Stack_8007643C, sp8) == 0x0) ? 1 : -1];
    typedef char sp9_offset[(offsetof(Stack_8007643C, sp9) == 0x1) ? 1 : -1];
    typedef char spA_offset[(offsetof(Stack_8007643C, spA) == 0x2) ? 1 : -1];
    typedef char sp18_offset[(offsetof(Stack_8007643C, sp18) == 0x10) ? 1 : -1];
    Stack_8007643C stack;
    construct_collider_proxy__10TObjPlayerFPv();
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &__vt__13TObjTombstone.value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) TObjTombstone__class_name;
    if ((u32) (*(u32 *)&TObjTombstone__shared_resource_object) == 0U) {
        return arg0;
    }
    stack.sp8 = M2C_FIELD(arg3, u8 *, 0);
    stack.sp9 = M2C_FIELD(arg3, u8 *, 1);
    stack.spA = M2C_FIELD(arg3, u8 *, 2);
    VecCopy__FP3VecPC3Vec((void *) (&stack.sp18), (void *) (arg3 + 4));
    setup__13TObjTombstoneFPvii((u8 *)((void *) (arg0)), (s32)((void *) (arg2)), (s32)((void *) (&stack.sp8)));
    reset_entries_and_format_name__13TObjTombstoneFPv((void *) (arg0));
    M2C_FIELD(arg0, s32 *, 0x234) = 0;
    return arg0;
}

}
