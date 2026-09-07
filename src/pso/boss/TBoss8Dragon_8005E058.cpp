#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredGlobal_8005E17C_lbl_8043797C {
    M2C_UNK value;
    u8 remaining[0x3C];
};

struct RecoveredGlobal_8005E17C_lbl_804FF5C0 {
    M2C_UNK value;
    u8 remaining[0x8];
};

#include <stddef.h>
struct Stack_8005E1E8 {
    M2C_UNK sp8;
    f32 spC;
    u8 trailing_storage[0x4];
};

struct RecoveredGlobal_8005E1E8_lbl_804FF5CC {
    M2C_UNK value;
    u8 remaining[0x8];
};

struct RecoveredGlobal_8005E1E8_lbl_804FF5D8 {
    M2C_UNK value;
    u8 remaining[0xC];
};

extern "C" {
void get_camera_ctrl__9TObjEneDDFPv(s32, s32);
extern RecoveredGlobal_8005E17C_lbl_8043797C lbl_8043797C;
extern RecoveredGlobal_8005E17C_lbl_804FF5C0 lbl_804FF5C0;
extern s32 lbl_805D4DAC;
extern s32 lbl_805D4DB0;
extern s32 lbl_805D4DB4;
void TBoss8Dragon__sub_8005E17C(void);
M2C_UNK VecCopy__FP3VecPC3Vec(void *);
f32 TObjPlayer__sub_8001978C(f32);
f32 clamp_velocity__15TObjBoss2TunnelFPv(void *);
f32 TObjPlayer__sub_803D89C0(void *, void *);
M2C_UNK TBoss6Type1__sub_803D9370(void *, void *);
extern RecoveredGlobal_8005E1E8_lbl_804FF5CC lbl_804FF5CC;
extern RecoveredGlobal_8005E1E8_lbl_804FF5D8 lbl_804FF5D8;
extern const f32 lbl_805D4DC0;
extern const f32 lbl_805D8D5C;
extern const f32 lbl_805D8D88;
s32 TBoss8Dragon__sub_8005E1E8(f32 farg0);
}

extern "C" {

typedef char RecoveredGlobal_8005E17C_lbl_8043797C_size[sizeof(RecoveredGlobal_8005E17C_lbl_8043797C) == 0x40 ? 1 : -1];
typedef char RecoveredGlobal_8005E17C_lbl_804FF5C0_size[sizeof(RecoveredGlobal_8005E17C_lbl_804FF5C0) == 0xC ? 1 : -1];
void TBoss8Dragon__sub_8005E17C(void) {
    s32 temp_r4;
    if ((s32) lbl_805D4DAC == (s32) M2C_FIELD(&lbl_8043797C.value, M2C_UNK *, (lbl_805D4DB0 * 4))) {
        temp_r4 = lbl_805D4DB4;
        lbl_805D4DB4 = temp_r4 + 0xC;
        get_camera_ctrl__9TObjEneDDFPv((s32) &lbl_804FF5C0.value, temp_r4);
        lbl_805D4DB0 += 1;
    }
    lbl_805D4DAC += 1;
}
#pragma push
#pragma fp_contract on
typedef char RecoveredGlobal_8005E1E8_lbl_804FF5CC_size[sizeof(RecoveredGlobal_8005E1E8_lbl_804FF5CC) == 0xC ? 1 : -1];
typedef char RecoveredGlobal_8005E1E8_lbl_804FF5D8_size[sizeof(RecoveredGlobal_8005E1E8_lbl_804FF5D8) == 0x10 ? 1 : -1];
s32 TBoss8Dragon__sub_8005E1E8(f32 farg0) {
    typedef char sp8_offset[(offsetof(Stack_8005E1E8, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_8005E1E8, spC) == 0x4) ? 1 : -1];
    Stack_8005E1E8 stack;
    f32 temp_f1;
    f32 temp_f31;
    VecCopy__FP3VecPC3Vec((void *) (&stack.sp8));
    stack.spC = lbl_805D8D5C;
    TBoss6Type1__sub_803D9370((void *) (&stack.sp8), (void *) (&lbl_804FF5CC.value));
    temp_f1 = clamp_velocity__15TObjBoss2TunnelFPv((void *) (&stack.sp8));
    if ((temp_f1 + farg0) < lbl_805D4DC0) {
        temp_f31 = temp_f1 * (lbl_805D8D88 / TObjPlayer__sub_8001978C((f32) ((temp_f1 * temp_f1) + (farg0 * farg0))));
        if (TObjPlayer__sub_803D89C0((void *) (&stack.sp8), (void *) (&lbl_804FF5D8.value)) >= temp_f31) {
            return 1;
        }
    }
    return 0;
}
#pragma pop

}
