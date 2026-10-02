#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
#include <stddef.h>
struct Stack_80038DCC {
    s32 sp8;
    s32 spC;
    s32 sp10;
};

struct RecoveredGlobal_80038DCC_lbl_80435B6C {
    M2C_UNK value;
    u8 remaining[0x8];
};

struct VBase_18_39be15 { char pad[0x18]; };

struct VObj_18_39be15 : VBase_18_39be15 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
    virtual void m6();
    virtual void m7();
    virtual void m8();
    virtual void m9();
    virtual void m10();
    virtual void m11();
    virtual void m12();
    virtual void m13();
    virtual s32 m14(M2C_UNK *, s32 *);
};

typedef struct Pair_80038E2C { s32 a; f32 b; } Pair_80038E2C;

extern "C" {
s32 TObjEneDD__sub_800B9D94(void *, void *, int, void *);
extern RecoveredGlobal_80038DCC_lbl_80435B6C lbl_80435B6C;
void render__18TBoss2PhotonBulletFv(u8 *arg0);
M2C_UNK queue_destruction__7TObjectFv(void *);
f32 TBoss2DeRolLe__sub_80034CF8(void);
u32 TBoss8Dragon__sub_8008741C(void *, int, int);
M2C_UNK copy_pos__11TNowLoadingFPvPv(void *, void *);
s32 TObjPlayer__sub_80156844(void *, void *, void *);
extern M2C_UNK lbl_80435B40[];
extern const f32 lbl_805D8268;
extern const f32 lbl_805D826C;
extern Pair_80038E2C lbl_80435B38[];
void run_task__18TBoss2PhotonBulletFv(u8 *arg0);
}

extern "C" {

typedef char RecoveredGlobal_80038DCC_lbl_80435B6C_size[sizeof(RecoveredGlobal_80038DCC_lbl_80435B6C) == 0xC ? 1 : -1];
void render__18TBoss2PhotonBulletFv(u8 *arg0) {
    typedef char sp8_offset[(offsetof(Stack_80038DCC, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_80038DCC, spC) == 0x4) ? 1 : -1];
    typedef char sp10_offset[(offsetof(Stack_80038DCC, sp10) == 0x8) ? 1 : -1];
    Stack_80038DCC stack;
    if (M2C_FIELD(arg0, s32 *, 0xDC) & 1) {
        stack.sp8 = M2C_FIELD(&lbl_80435B6C.value, s32 *, 0);
        stack.spC = M2C_FIELD(&lbl_80435B6C.value, s32 *, 4);
        stack.sp10 = M2C_FIELD(&lbl_80435B6C.value, s32 *, 8);
        TObjEneDD__sub_800B9D94((void *) (arg0 + 0x38), (void *) (arg0 + 0xCC), (int) (0), (void *) (&stack.sp8));
    }
}
#pragma push
#pragma fp_contract on
void run_task__18TBoss2PhotonBulletFv(u8 *arg0) {
    if (M2C_FIELD(arg0, f32 *, 0xC4) > 8.7f) {
        M2C_FIELD(arg0, f32 *, 0xE0) += 0.05f;
        if (M2C_FIELD(arg0, f32 *, 0xE0) >= 3.0f) {
            M2C_FIELD(arg0, f32 *, 0xE0) = 3.0f;
        }
        M2C_FIELD(arg0, f32 *, 0xC4) = M2C_FIELD(arg0, f32 *, 0xC4) - M2C_FIELD(arg0, f32 *, 0xE0);
        M2C_FIELD(arg0, f32 *, 0xC0) = 2.0f * M2C_FIELD(arg0, f32 *, 0xB4) + M2C_FIELD(arg0, f32 *, 0xC0);
        M2C_FIELD(arg0, f32 *, 0xC8) = 2.0f * M2C_FIELD(arg0, f32 *, 0xBC) + M2C_FIELD(arg0, f32 *, 0xC8);
    } else {
        M2C_FIELD(arg0, f32 *, 0xC4) = 8.7f;
        M2C_FIELD(arg0, f32 *, 0xC0) = M2C_FIELD(arg0, f32 *, 0xB4) * M2C_FIELD(arg0, f32 *, 0xB0) + M2C_FIELD(arg0, f32 *, 0xC0);
        M2C_FIELD(arg0, f32 *, 0xC8) = M2C_FIELD(arg0, f32 *, 0xBC) * M2C_FIELD(arg0, f32 *, 0xB0) + M2C_FIELD(arg0, f32 *, 0xC8);
    }
    M2C_FIELD(arg0, f32 *, 0x38) = M2C_FIELD(arg0, f32 *, 0xC0);
    M2C_FIELD(arg0, f32 *, 0x40) = M2C_FIELD(arg0, f32 *, 0xC8);
    if (M2C_FIELD(arg0, u32 *, 0xE4) == 0) {
        M2C_FIELD(arg0, u32 *, 0xE4) = TBoss8Dragon__sub_8008741C(arg0 + 0xC0, 0xDF, 0x40);
    } else {
        copy_pos__11TNowLoadingFPvPv((void *)M2C_FIELD(arg0, u32 *, 0xE4), arg0 + 0xC0);
    }
    if (M2C_FIELD(arg0, s32 *, 0xD8) % 15 == 0) {
        if (TObjPlayer__sub_80156844(arg0, arg0 + 0x38, arg0 + 0xCC) != 0) {
            M2C_FIELD(arg0, s32 *, 0xDC) |= 1;
        } else {
            M2C_FIELD(arg0, s32 *, 0xDC) &= ~1;
        }
    }
    if (M2C_FIELD(arg0, f32 *, 0x38) <= lbl_805D8268 && M2C_FIELD(arg0, f32 *, 0x38) >= lbl_805D826C) {
        Pair_80038E2C p = lbl_80435B38[0];
        p.b = TBoss2DeRolLe__sub_80034CF8();
        if (((VObj_18_39be15 *)arg0)->m14(lbl_80435B40, (s32 *)&p) != 0) {
            queue_destruction__7TObjectFv(arg0);
            return;
        }
    }
    M2C_FIELD(arg0, s32 *, 0xD8)++;
    if (M2C_FIELD(arg0, s32 *, 0xD8) >= 0x78) {
        queue_destruction__7TObjectFv(arg0);
    }
}
#pragma pop

}
