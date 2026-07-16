#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

u8 *TObjEneRe4Bit__ct(u8 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s16 arg5, s16 arg6);
M2C_UNK TObjEneRe4Bit__sub_800ED7FC(void *);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
M2C_UNK init_common_from__9TObjEneDDFPvPv(void *, void *);
M2C_UNK init_object__9TObjEneDDFPv();
M2C_UNK init_vtable_and_field18__10TObjPlayerFPv(void *);
s16 obj_getField1c(void *);

extern M2C_UNK __vt__13TObjEneRe4Bit[];
extern s32 lbl_805D2AE8;

u8 *TObjEneRe4Bit__ct(u8 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s16 arg5, s16 arg6) {
    init_object__9TObjEneDDFPv();
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__13TObjEneRe4Bit;
    init_vtable_and_field18__10TObjPlayerFPv((void *) (arg0 + 0x3DC));
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D2AE8;
    init_common_from__9TObjEneDDFPvPv((void *) (arg0), (void *) (arg2));
    M2C_FIELD(arg0, s16 *, 0x3C4) = obj_getField1c((void *) (arg2));
    M2C_FIELD(arg0, s16 *, 0x1C) = arg5;
    M2C_FIELD(arg0, s16 *, 0x2C) = arg6;
    M2C_FIELD(arg0, s32 *, 0x3C0) = arg3;
    M2C_FIELD(arg0, s32 *, 0x3C8) = arg4;
    VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x38), (void *) (arg3));
    TObjEneRe4Bit__sub_800ED7FC((void *) (arg0));
    return arg0;
}

}
