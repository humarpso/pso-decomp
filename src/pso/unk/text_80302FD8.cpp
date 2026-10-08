#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#include <stddef.h>
struct Stack_80302FD8 {
    s32 sp8;
    s32 spC;
    s32 sp10;
};

struct RecoveredGlobal_80302FD8_lbl_8047512C {
    M2C_UNK value;
    u8 remaining[0x8];
};

struct RecoveredGlobal_80302FD8_lbl_804E6AF8 {
    M2C_UNK value;
    u8 remaining[0x58];
};

extern "C" {
s32 VecCopy__FP3VecPC3Vec(void *, void *);
s32 create_particle_controller_with_angles(void *, void *, int, int, int);
s32 clear_active_flag__13TParticleCtrlFPv(int);
s32 construct_collision_body(void *, void *, void *);
f32 sin_table_lookup(void *);
f32 cos_table_lookup(void *);
extern RecoveredGlobal_80302FD8_lbl_8047512C lbl_8047512C;
extern RecoveredGlobal_80302FD8_lbl_804E6AF8 lbl_804E6AF8;
extern s32 lbl_805D4074;
extern const f32 lbl_805DEFAC;
u8 *fn_80302FD8(u8 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, f32 farg0);
}

extern "C" {

typedef char RecoveredGlobal_80302FD8_lbl_8047512C_size[sizeof(RecoveredGlobal_80302FD8_lbl_8047512C) == 0xC ? 1 : -1];
typedef char RecoveredGlobal_80302FD8_lbl_804E6AF8_size[sizeof(RecoveredGlobal_80302FD8_lbl_804E6AF8) == 0x5C ? 1 : -1];
u8 *fn_80302FD8(u8 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, f32 farg0) {
    typedef char sp8_offset[(offsetof(Stack_80302FD8, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_80302FD8, spC) == 0x4) ? 1 : -1];
    typedef char sp10_offset[(offsetof(Stack_80302FD8, sp10) == 0x8) ? 1 : -1];
    Stack_80302FD8 stack;
    construct_collision_body((void *) (arg0), (void *) (arg1), (void *) (arg2));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &lbl_804E6AF8.value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D4074;
    M2C_FIELD(arg0, f32 *, 0xC8) = farg0;
    M2C_FIELD(arg0, f32 *, 0xC0) = (f32) lbl_805DEFAC;
    M2C_FIELD(arg0, f32 *, 0xC4) = (f32) lbl_805DEFAC;
    VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x38), (void *) (arg3));
    M2C_FIELD(arg0, f32 *, 0xB0) = sin_table_lookup((void *) (arg4));
    M2C_FIELD(arg0, f32 *, 0xB4) = (f32) lbl_805DEFAC;
    M2C_FIELD(arg0, f32 *, 0xB8) = cos_table_lookup((void *) (arg4));
    M2C_FIELD(arg0, s32 *, 0xBC) = arg5;
    M2C_FIELD(M2C_FIELD(arg0, u8 **, 0xA4), s32 *, 0x14) = 1;
    stack.spC = M2C_FIELD(&lbl_8047512C.value, s32 *, 4);
    stack.sp8 = M2C_FIELD(&lbl_8047512C.value, s32 *, 0);
    stack.sp10 = M2C_FIELD(&lbl_8047512C.value, s32 *, 8);
    stack.spC = arg4 - 0x4000;
    M2C_FIELD(arg0, s32 *, 0xCC) = create_particle_controller_with_angles((void *) (arg0 + 0x38), (void *) (&stack.sp8), (int) (0x210), (int) (0x32), (int) (2));
    clear_active_flag__13TParticleCtrlFPv((int) (M2C_FIELD(arg0, s32 *, 0xCC)));
    return arg0;
}

}
