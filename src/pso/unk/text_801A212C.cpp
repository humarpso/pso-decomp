#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#include <stddef.h>
struct Stack_801A2340 {
    f32 sp8;
    u8 pad_C[0x4];
    f32 sp10;
    f32 sp14;
    f32 sp18;
};

struct RecoveredGlobal_801A2340_lbl_804FF610 {
    M2C_UNK value;
    u8 remaining[0x8];
};

extern "C" {
s32 get_state_flag__9TMainTaskFv();
s32 TObjPlayer__sub_80083CEC(f32, void *);
s32 TParticleCtrl__sub_803D8D1C(int, void *, void *);
f32 TObjPlayer__sub_803D9884(void *, void *);
extern RecoveredGlobal_801A2340_lbl_804FF610 lbl_804FF610;
extern const f32 lbl_805DC098;
extern const f32 lbl_805DC09C;
s16 update_object_view_visibility(u8 *arg0, f32 farg0, f32 farg1);
s32 get_state_flag__9TMainTaskFv();
s32 TObjPlayer__sub_80083CEC(f32, void *);
s32 TParticleCtrl__sub_803D8D1C(int, void *, void *);
f32 TObjPlayer__sub_803D9884(void *, void *);
extern RecoveredGlobal_801A2340_lbl_804FF610 lbl_804FF610;
extern const f32 lbl_805DC098;
extern const f32 lbl_805DC09C;
s16 classify_actor_view_detail(u8 *arg0, f32 farg0, f32 farg1, f32 farg2);
}

extern "C" {

#pragma push
#pragma opt_common_subs off
#pragma opt_propagation off
#pragma fp_contract on
typedef char RecoveredGlobal_801A2340_lbl_804FF610_size[sizeof(RecoveredGlobal_801A2340_lbl_804FF610) == 0xC ? 1 : -1];

#pragma push
#pragma opt_common_subs off
#pragma opt_propagation off
#pragma fp_contract on
s16 classify_actor_view_detail(u8 *arg0, f32 farg0, f32 farg1, f32 farg2) {
    Stack_801A2340 stack;
    f32 z;
    if (M2C_FIELD(arg0, u16 *, 4) & 0x400) {
        if (TObjPlayer__sub_80083CEC(farg2, (void *) (arg0 + 0x38)) != 0) {
            M2C_FIELD(arg0, s16 *, 0x1E) = 1;
            return 1;
        }
        M2C_FIELD(arg0, s16 *, 0x1E) = 0;
        return 0;
    }
    if (get_state_flag__9TMainTaskFv() == 1) {
        return M2C_FIELD(arg0, s16 *, 0x1E);
    }
    TObjPlayer__sub_803D9884((void *) (arg0 + 0x38), (void *) (&stack.sp10));
    z = stack.sp18;
    if (z > lbl_805DC098) {
        M2C_FIELD(arg0, s16 *, 0x1E) = 0;
        return 0;
    }
    if (z < -farg1) {
        M2C_FIELD(arg0, s16 *, 0x1E) = 0;
        return 0;
    }
    if (stack.sp10 < lbl_805DC098) {
        stack.sp10 = (M2C_FIELD(&lbl_804FF610.value, f32 *, 0) * farg2) + M2C_FIELD(arg0, f32 *, 0x38);
        stack.sp14 = (M2C_FIELD(&lbl_804FF610.value, f32 *, 4) * farg2) + M2C_FIELD(arg0, f32 *, 0x3C);
        stack.sp18 = (M2C_FIELD(&lbl_804FF610.value, f32 *, 8) * farg2) + M2C_FIELD(arg0, f32 *, 0x40);
        TParticleCtrl__sub_803D8D1C(0, (void *) (&stack.sp10), (void *) (&stack.sp8));
        if (stack.sp8 < lbl_805DC098) {
            M2C_FIELD(arg0, s16 *, 0x1E) = 0;
            return 0;
        }
    } else {
        stack.sp10 = -((M2C_FIELD(&lbl_804FF610.value, f32 *, 0) * farg2) - M2C_FIELD(arg0, f32 *, 0x38));
        stack.sp14 = -((M2C_FIELD(&lbl_804FF610.value, f32 *, 4) * farg2) - M2C_FIELD(arg0, f32 *, 0x3C));
        stack.sp18 = -((M2C_FIELD(&lbl_804FF610.value, f32 *, 8) * farg2) - M2C_FIELD(arg0, f32 *, 0x40));
        TParticleCtrl__sub_803D8D1C(0, (void *) (&stack.sp10), (void *) (&stack.sp8));
        if (stack.sp8 > lbl_805DC09C) {
            M2C_FIELD(arg0, s16 *, 0x1E) = 0;
            return 0;
        }
    }
    if (z < -farg0) {
        M2C_FIELD(arg0, s16 *, 0x1E) = 2;
        return 2;
    }
    M2C_FIELD(arg0, s16 *, 0x1E) = 1;
    return 1;
}
#pragma pop

s16 update_object_view_visibility(u8 *arg0, f32 farg0, f32 farg1) {
    typedef char sp8_offset[(offsetof(Stack_801A2340, sp8) == 0x0) ? 1 : -1];
    typedef char sp10_offset[(offsetof(Stack_801A2340, sp10) == 0x8) ? 1 : -1];
    typedef char sp14_offset[(offsetof(Stack_801A2340, sp14) == 0xC) ? 1 : -1];
    typedef char sp18_offset[(offsetof(Stack_801A2340, sp18) == 0x10) ? 1 : -1];
    Stack_801A2340 stack;
    if (M2C_FIELD(arg0, u16 *, 4) & 0x400) {
        if (TObjPlayer__sub_80083CEC((f32) (farg1), (void *) (arg0 + 0x38)) != 0) {
            M2C_FIELD(arg0, s16 *, 0x1E) = 1;
            return 1;
        }
        M2C_FIELD(arg0, s16 *, 0x1E) = 0;
        return 0;
    }
    if (get_state_flag__9TMainTaskFv() == 1) {
        return M2C_FIELD(arg0, s16 *, 0x1E);
    }
    TObjPlayer__sub_803D9884((void *) (arg0 + 0x38), (void *) (&stack.sp10));
    if (stack.sp18 > lbl_805DC098) {
        M2C_FIELD(arg0, s16 *, 0x1E) = 0;
        return 0;
    }
    if (stack.sp18 < -farg0) {
        M2C_FIELD(arg0, s16 *, 0x1E) = 0;
        return 0;
    }
    if (stack.sp10 < lbl_805DC098) {
        stack.sp10 = (M2C_FIELD(&lbl_804FF610.value, f32 *, 0) * farg1) + M2C_FIELD(arg0, f32 *, 0x38);
        stack.sp14 = (M2C_FIELD(&lbl_804FF610.value, f32 *, 4) * farg1) + M2C_FIELD(arg0, f32 *, 0x3C);
        stack.sp18 = (M2C_FIELD(&lbl_804FF610.value, f32 *, 8) * farg1) + M2C_FIELD(arg0, f32 *, 0x40);
        TParticleCtrl__sub_803D8D1C((int) (0), (void *) (&stack.sp10), (void *) (&stack.sp8));
        if (stack.sp8 < lbl_805DC098) {
            M2C_FIELD(arg0, s16 *, 0x1E) = 0;
            return 0;
        }
        goto block_15;
    }
    stack.sp10 = -((M2C_FIELD(&lbl_804FF610.value, f32 *, 0) * farg1) - M2C_FIELD(arg0, f32 *, 0x38));
    stack.sp14 = -((M2C_FIELD(&lbl_804FF610.value, f32 *, 4) * farg1) - M2C_FIELD(arg0, f32 *, 0x3C));
    stack.sp18 = -((M2C_FIELD(&lbl_804FF610.value, f32 *, 8) * farg1) - M2C_FIELD(arg0, f32 *, 0x40));
    TParticleCtrl__sub_803D8D1C((int) (0), (void *) (&stack.sp10), (void *) (&stack.sp8));
    if (stack.sp8 > lbl_805DC09C) {
        M2C_FIELD(arg0, s16 *, 0x1E) = 0;
        return 0;
    }
block_15:
    M2C_FIELD(arg0, s16 *, 0x1E) = 1;
    return 1;
}
#pragma pop

}
