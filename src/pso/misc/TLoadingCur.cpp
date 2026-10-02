#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))
#include <stddef.h>
struct Stack_8001D0A0 {
    s32 sp8;
    s32 spC;
    s32 sp10;
};

struct RecoveredGlobal_8001D0A0___vt__11TLoadingCur {
    M2C_UNK value;
    u8 remaining[0x14];
};

struct RecoveredGlobal_8001D0A0_lbl_804FF5E8 {
    M2C_UNK value;
    u8 remaining[0x24];
};

struct Pad_8001CD90 {
    char pad0[0x20];
    u32 f20;
    char pad24[0x10];
    s16 s34;
    s16 s36;
    s16 s38;
    s16 s3A;
    char pad3C[0x124];
    u8 f160[0x20];
};

struct Self_8001CD90 {
    char pad0[0x20];
    f32 f20;
    f32 f24;
    f32 f28;
    char pad2C[0xC];
    f32 f38;
    f32 f3C;
    f32 f40;
    u8 f44[0xC];
};

extern "C" {
extern const f32 lbl_805D7E94;
extern const f32 lbl_805D7E98;
extern const f32 TLoadingCur__data_805D7E9C;
extern const f32 lbl_805D7EA0;
extern const f32 lbl_805D7EA4;
s32 TLoadingCur__sub_8001CC28(M2C_UNK arg0, u8 *arg1, u8 *arg2);
s32 fn_80086FE0(void *, void *, int, int);
s32 TBoss1Dragon__sub_8014220C(void *, void *, void *);
s32 __ct__7TObjectFP7TObject(void *, void *);
extern M2C_UNK __vt__11TLoadingCur[];
extern RecoveredGlobal_8001D0A0_lbl_804FF5E8 lbl_804FF5E8;
extern s32 lbl_805D2638;
extern const f32 lbl_805D7E90;
extern const f32 TLoadingCur__data_805D7E9C;
u8 *TLoadingCur__ct(u8 *arg0, s32 arg1);
void VecCopy__FP3VecPC3Vec(void *, void *);
s32 is_split_screen(void);
void fn_8001CAD4(void *);
void fn_8001CBC4(void *, void *);
s32 is_flag_set__11TLoadingCurFPv(void *, s32);
M2C_UNK TOTrapAncient01__sub_80226578(int, void *, void *, int, int);
extern Pad_8001CD90 lbl_8050E208;
extern const f32 TLoadingCur__data_805D7E9C;
extern const f32 lbl_805D7EB0;
extern const f32 lbl_805D7EB4;
extern const f32 lbl_805D7EB8;
extern const f32 lbl_805D7EBC;
void run_task__11TLoadingCurFv(void *arg0);
}

extern "C" {

void *__dt__11TLoadingCurFv(void *arg0, s16 arg1);
int render__11TLoadingCurFv(void* p);
int TLoadingCur__sub_8001CCD4(void*);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
void queue_destruction__7TObjectFv(void *);

s32 TLoadingCur__sub_8001CC28(M2C_UNK arg0, u8 *arg1, u8 *arg2) {
    f32 temp_f0;
    f32 temp_f1;
    f32 temp_f1_2;
    f32 temp_f1_3;
    temp_f1_2 = M2C_FIELD(arg1, f32 *, 0);
    if (temp_f1_2 < lbl_805D7E94) {
        M2C_FIELD(arg2, f32 *, 0) = (f32) (lbl_805D7E94 - temp_f1_2);
    } else if (temp_f1_2 > lbl_805D7E98) {
        M2C_FIELD(arg2, f32 *, 0) = (f32) (lbl_805D7E98 - temp_f1_2);
    } else {
        M2C_FIELD(arg2, f32 *, 0) = (f32) TLoadingCur__data_805D7E9C;
    }
    temp_f1_3 = M2C_FIELD(arg1, f32 *, 4);
    if (temp_f1_3 < lbl_805D7EA0) {
        M2C_FIELD(arg2, f32 *, 4) = (f32) (lbl_805D7EA0 - temp_f1_3);
    } else if (temp_f1_3 > lbl_805D7EA4) {
        M2C_FIELD(arg2, f32 *, 4) = (f32) (lbl_805D7EA4 - temp_f1_3);
    } else {
        M2C_FIELD(arg2, f32 *, 4) = (f32) TLoadingCur__data_805D7E9C;
    }
    temp_f0 = M2C_FIELD(arg2, f32 *, 0);
    temp_f1 = M2C_FIELD(arg2, f32 *, 4);
    return (u32)__cntlzw((u32)((((temp_f0 * temp_f0) + (temp_f1 * temp_f1)) <= TLoadingCur__data_805D7E9C))) >> 5;
}

int render__11TLoadingCurFv(void* p) { return TLoadingCur__sub_8001CCD4(p); }

extern M2C_UNK __vt__11TLoadingCur[];

#pragma push
#pragma fp_contract on
#pragma opt_propagation off
void run_task__11TLoadingCurFv(void *arg0) {
    Self_8001CD90 *self = (Self_8001CD90 *)arg0;
    u8 sp8[0xC];
    f32 x;
    f32 y;
    u32 flags;
    void *p;
    x = TLoadingCur__data_805D7E9C;
    y = x;
    x += lbl_805D7EB0 * (f32)lbl_8050E208.s34;
    y -= lbl_805D7EB0 * (f32)lbl_8050E208.s36;
    x += lbl_805D7EB0 * (f32)lbl_8050E208.s38;
    y -= lbl_805D7EB0 * (f32)lbl_8050E208.s3A;
    flags = lbl_8050E208.f20;
    if (flags & 0x10) {
        y += lbl_805D7EB4;
    }
    if (flags & 0x20) {
        y -= lbl_805D7EB4;
    }
    if (flags & 0x80) {
        x += lbl_805D7EB4;
    }
    if (flags & 0x40) {
        x -= lbl_805D7EB4;
    }
    p = lbl_8050E208.f160;
    if (is_flag_set__11TLoadingCurFPv(p, 0x10) != 0) {
        y += lbl_805D7EB4;
    }
    if (is_flag_set__11TLoadingCurFPv(p, 0x20) != 0) {
        y -= lbl_805D7EB4;
    }
    if (is_flag_set__11TLoadingCurFPv(p, 0x80) != 0) {
        x += lbl_805D7EB4;
    }
    if (is_flag_set__11TLoadingCurFPv(p, 0x40) != 0) {
        x -= lbl_805D7EB4;
    }
    self->f38 += lbl_805D7EB8 * x;
    self->f3C += lbl_805D7EB8 * y;
    self->f40 += TLoadingCur__data_805D7E9C;
    self->f20 += self->f38;
    self->f24 += self->f3C;
    self->f28 += self->f40;
    self->f38 *= lbl_805D7EBC;
    self->f3C *= lbl_805D7EBC;
    self->f40 *= lbl_805D7EBC;
    fn_8001CBC4(sp8, arg0);
    VecCopy__FP3VecPC3Vec(self->f44, sp8);
    fn_8001CAD4(arg0);
    if (TLoadingCur__data_805D7E9C != x || TLoadingCur__data_805D7E9C != y) {
        if (is_split_screen() != 0) {
            TOTrapAncient01__sub_80226578(0x53C10, arg0, (u8 *)arg0 + 0x2C, 0, 1);
        } else {
            TOTrapAncient01__sub_80226578(0x53C10, arg0, (u8 *)arg0 + 0x2C, 0, 0);
        }
    }
}
#pragma pop

void *__dt__11TLoadingCurFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__11TLoadingCur;
        if (M2C_FIELD(arg0, void **, 0x1C) != NULL) { queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x1C)); M2C_FIELD(arg0, M2C_UNK *, 0x1C) = 0; }
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
#pragma push
#pragma fp_contract on
typedef char RecoveredGlobal_8001D0A0___vt__11TLoadingCur_size[sizeof(RecoveredGlobal_8001D0A0___vt__11TLoadingCur) == 0x18 ? 1 : -1];
typedef char RecoveredGlobal_8001D0A0_lbl_804FF5E8_size[sizeof(RecoveredGlobal_8001D0A0_lbl_804FF5E8) == 0x28 ? 1 : -1];
u8 *TLoadingCur__ct(u8 *arg0, s32 arg1) {
    typedef char sp8_offset[(offsetof(Stack_8001D0A0, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_8001D0A0, spC) == 0x4) ? 1 : -1];
    typedef char sp10_offset[(offsetof(Stack_8001D0A0, sp10) == 0x8) ? 1 : -1];
    Stack_8001D0A0 stack;
    __ct__7TObjectFP7TObject((void *) (arg0), (void *) (arg1));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_8001D0A0___vt__11TLoadingCur *)&__vt__11TLoadingCur).value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D2638;
    M2C_FIELD(arg0, f32 *, 0x20) = (f32) TLoadingCur__data_805D7E9C;
    M2C_FIELD(arg0, f32 *, 0x24) = (f32) TLoadingCur__data_805D7E9C;
    M2C_FIELD(arg0, f32 *, 0x28) = (f32) TLoadingCur__data_805D7E9C;
    M2C_FIELD(arg0, f32 *, 0x38) = (f32) TLoadingCur__data_805D7E9C;
    M2C_FIELD(arg0, f32 *, 0x3C) = (f32) TLoadingCur__data_805D7E9C;
    M2C_FIELD(arg0, f32 *, 0x40) = (f32) TLoadingCur__data_805D7E9C;
    M2C_FIELD(arg0, f32 *, 0x44) = (f32) ((lbl_805D7E90 * M2C_FIELD(&lbl_804FF5E8.value, f32 *, 0xC)) + M2C_FIELD(&lbl_804FF5E8.value, f32 *, 0));
    M2C_FIELD(arg0, f32 *, 0x48) = (f32) ((lbl_805D7E90 * M2C_FIELD(&lbl_804FF5E8.value, f32 *, 0x10)) + M2C_FIELD(&lbl_804FF5E8.value, f32 *, 4));
    M2C_FIELD(arg0, f32 *, 0x4C) = (f32) ((lbl_805D7E90 * M2C_FIELD(&lbl_804FF5E8.value, f32 *, 0x14)) + M2C_FIELD(&lbl_804FF5E8.value, f32 *, 8));
    M2C_FIELD(arg0, f32 *, 0x50) = (f32) -M2C_FIELD(&lbl_804FF5E8.value, f32 *, 0xC);
    M2C_FIELD(arg0, f32 *, 0x54) = (f32) -M2C_FIELD(&lbl_804FF5E8.value, f32 *, 0x10);
    M2C_FIELD(arg0, f32 *, 0x58) = (f32) -M2C_FIELD(&lbl_804FF5E8.value, f32 *, 0x14);
    stack.sp8 = 0;
    stack.spC = 0;
    stack.sp10 = 0;
    TBoss1Dragon__sub_8014220C((void *) (arg0 + 0x50), (void *) (&stack.sp8), (void *) (&stack.sp10));
    M2C_FIELD(arg0, s32 *, 0x1C) = fn_80086FE0((void *) (arg0 + 0x20), (void *) (&stack.sp8), (int) (0x16), (int) (1));
    return arg0;
}
#pragma pop

}
