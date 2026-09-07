#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredGlobal_800CC6D8___vt__13TObjEneMe1Gee { M2C_UNK value; u8 remaining[0x1D4]; };
typedef char RecoveredGlobal_800CC6D8___vt__13TObjEneMe1Gee_size[sizeof(RecoveredGlobal_800CC6D8___vt__13TObjEneMe1Gee) == 0x1D8 ? 1 : -1];

extern "C" {
s32 VecCopy__FP3VecPC3Vec(void *, void *);
s32 init_object__9TObjEneDDFPv(void *);
s32 init_common_from__9TObjEneDDFPvPv(void *, void *);
s32 calc_position__13TObjEneMe1GeeFiPv(void *, void *);
s32 TObjEneMe1Gee__sub_800CC430(void *);
s32 init_common__18TObjEneMe3SinowZoaFPv(void *);
extern RecoveredGlobal_800CC6D8___vt__13TObjEneMe1Gee __vt__13TObjEneMe1Gee;
extern s32 lbl_805D2A68;
u8 *TObjEneMe1Gee__ct(u8 *arg0, M2C_UNK arg1, u8 *arg2, s32 arg3, s16 arg4, s16 arg5);
}

extern "C" {

u8 *TObjEneMe1Gee__ct(u8 *arg0, M2C_UNK arg1, u8 *arg2, s32 arg3, s16 arg4, s16 arg5) {
    init_object__9TObjEneDDFPv((void *) (arg0));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &__vt__13TObjEneMe1Gee.value;
    init_common__18TObjEneMe3SinowZoaFPv((void *) (arg0 + 0x3CC));
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D2A68;
    M2C_FIELD(arg0, u8 **, 0x3C0) = arg2;
    init_common_from__9TObjEneDDFPvPv((void *) (arg0), (void *) (M2C_FIELD(arg0, u8 **, 0x3C0)));
    M2C_FIELD(arg0, s16 *, 0x1C) = arg4;
    M2C_FIELD(arg0, s16 *, 0x2C) = arg5;
    calc_position__13TObjEneMe1GeeFiPv((void *) (M2C_FIELD(arg0, u8 **, 0x3C0)), (void *) (arg0 + 0x38));
    VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x38), (void *) (arg3));
    M2C_FIELD(arg0, s32 *, 0x60) = (s32) M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x3C0), s32 *, 0x60);
    M2C_FIELD(arg0, s32 *, 0x3C8) = 0;
    M2C_FIELD(arg0, s32 *, 0x3C4) = 1;
    TObjEneMe1Gee__sub_800CC430((void *) (arg0));
    return arg0;
}

}
