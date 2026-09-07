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
