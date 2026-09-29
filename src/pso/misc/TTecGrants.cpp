#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))
struct VBase_18_4560ce { char pad[0x18]; };

struct VObj_18_4560ce : VBase_18_4560ce {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual M2C_UNK m4(u32);
};

struct RecoveredGlobal_80233350___vt__10TTecGrants {
    M2C_UNK value;
    u8 remaining[0x24];
};

#include <stddef.h>
struct Stack_802384E0 {
    M2C_UNK sp8;
    f32 spC;
    u8 trailing_storage[0x4];
};

struct RecoveredGlobal_802384E0_lbl_804CCB28 { M2C_UNK value; u8 remaining[0x14]; };

struct Stack_802385EC {
    M2C_UNK sp8;
    f32 spC;
    u8 trailing_storage[0x4];
};

struct RecoveredGlobal_802385EC_lbl_804CCB28 { M2C_UNK value; u8 remaining[0x14]; };

struct RecoveredGlobal_80238D10_lbl_804CC510
{
  M2C_UNK value;
  u8 remaining[0x48];
};

struct RecoveredGlobal_80238D10_lbl_804CC55C
{
  M2C_UNK value;
  u8 remaining[0x94];
};

struct RecoveredFields_80238D10_arg0
{
  u8 unknown_0[0x78];
  s16 field_78;
  u8 unknown_7A[0xE];
  f32 field_88;
  u8 unknown_8C[0x20];
  s16 field_AC;
};

struct Damage_802386F8 { s32 kind; f32 power; };

struct VBase_802386F8 { char pad[0x18]; };

struct VObj_802386F8 : VBase_802386F8 {
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
    virtual void m14();
    virtual void m15();
    virtual void m16();
    virtual void m17();
    virtual void m18();
    virtual void m19();
    virtual void m20();
    virtual s32 m21(s32, Damage_802386F8, s32, s32, s32, void *);
};

extern "C" {
u8 * TPhotonMylla__sub_80154CB4(u16);
u8 * TBoss3Volopt__sub_80232EC0(void *, s32, s32, s32);
s32 is_parents_unqueued__9TTecLukerFUi(u32);
s32 is_valid_and_active__10TObjPlayerFUi(u32);
M2C_UNK queue_destruction__7TObjectFv(void *);
void *__nw__7TObjectFUl(int);
extern s32 tl_07;
void run_task__10TTecGrantsFv(u8 *arg0);
s32 obj_getField1c(int);
s32 TObjPlayer__sub_8004433C(void *);
s32 TTecAnti__sub_8022B3E8(void *, void *);
s32 fn_8022C10C(void *, void *, void *, void *);
s32 fn_80232830(void *);
extern M2C_UNK __vt__10TTecGrants[];
extern s32 lbl_805D37D0;
u8 *TTecGrants__ct(u8 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
void TTecGrants__vt4(u8 *self, u8 *target);
}

extern "C" {

void *__dt__10TTecGrantsFv(void *arg0, s16 arg1);
void create__10TTecGrantsFPvPvPvPv(void *arg0, void *arg1, void *arg2, void *arg3);
void render__10TTecGrantsFv(void);
void __dl__7TObjectFPv(void *);
void *__nw__7TObjectFUl(int);
void destroy_technique_base__9TTecLukerFPvs(void *, int);

void render__10TTecGrantsFv(void) {  }

typedef char RecoveredGlobal_802384E0_lbl_804CCB28_size[sizeof(RecoveredGlobal_802384E0_lbl_804CCB28) == 0x18 ? 1 : -1];
typedef char RecoveredGlobal_802385EC_lbl_804CCB28_size[sizeof(RecoveredGlobal_802385EC_lbl_804CCB28) == 0x18 ? 1 : -1];
void TTecGrants__vt4(u8 *self, u8 *target) {
    Damage_802386F8 d;
    d.kind = 0x4;
    d.power = *(f32 *)(self + 0x88);
    ((VObj_802386F8 *)target)->m21(*(s32 *)(self + 0x1C), d, *(s32 *)(self + 0xB8), 0x9, -1, self);
}
typedef struct RecoveredFields_80238D10_arg0 RecoveredFields_80238D10_arg0;
typedef struct RecoveredGlobal_80238D10_lbl_804CC510 RecoveredGlobal_80238D10_lbl_804CC510;
typedef struct RecoveredGlobal_80238D10_lbl_804CC55C RecoveredGlobal_80238D10_lbl_804CC55C;
typedef char RecoveredGlobal_80238D10_lbl_804CC510_size[((sizeof(RecoveredGlobal_80238D10_lbl_804CC510)) == 0x4C) ? (1) : (-1)];
typedef char RecoveredGlobal_80238D10_lbl_804CC55C_size[((sizeof(RecoveredGlobal_80238D10_lbl_804CC55C)) == 0x98) ? (1) : (-1)];

void create__10TTecGrantsFPvPvPvPv(void *arg0, void *arg1, void *arg2, void *arg3) {
    void *o;
    o = __nw__7TObjectFUl(0x14C);
    if (o != NULL) {
        TTecGrants__ct((u8 *)(o), (s32)(arg0), (s32)(arg1), (s32)(arg2), (s32)(arg3));
    }
}

extern M2C_UNK __vt__10TTecGrants[];

void run_task__10TTecGrantsFv(u8 *arg0) {
    u32 temp_r3;
    u8 *temp_r3_2;
    M2C_FIELD(arg0, u8 **, 0x1C) = TPhotonMylla__sub_80154CB4(M2C_FIELD(arg0, u16 *, 0xB4));
    if ((void *) M2C_FIELD(arg0, u8 **, 0x1C) == NULL) {
        queue_destruction__7TObjectFv((void *) (arg0));
        return;
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0xEC) == 0) {
        queue_destruction__7TObjectFv((void *) (arg0));
        return;
    }
    temp_r3 = (unsigned long) (TPhotonMylla__sub_80154CB4(M2C_FIELD(arg0, u16 *, 0xF0)));
    if ((is_parents_unqueued__9TTecLukerFUi(temp_r3) != 0) && (is_valid_and_active__10TObjPlayerFUi(temp_r3) != 0) && ((s32) M2C_FIELD(arg0, s32 *, 0x148) == 0)) {
        temp_r3_2 = (u8 *)(((u8 *)__nw__7TObjectFUl((int)(0x3C))));
        if (temp_r3_2 != NULL) {
            TBoss3Volopt__sub_80232EC0(temp_r3_2, (s32) temp_r3, (s32) M2C_FIELD(arg0, s16 *, 0x78), tl_07);
        }
    }
    M2C_FIELD(arg0, s32 *, 0x148) = (s32) (M2C_FIELD(arg0, s32 *, 0x148) + 1);
    if ((s32) M2C_FIELD(arg0, s32 *, 0x148) > 0x1E) {
        if ((temp_r3 != 0) && (is_parents_unqueued__9TTecLukerFUi(temp_r3) != 0) && (is_valid_and_active__10TObjPlayerFUi(temp_r3) != 0)) {
            ((VObj_18_4560ce *)(arg0))->m4(temp_r3);
        }
        queue_destruction__7TObjectFv((void *) (arg0));
    }
}

void *__dt__10TTecGrantsFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__10TTecGrants;
        destroy_technique_base__9TTecLukerFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
typedef char RecoveredGlobal_80233350___vt__10TTecGrants_size[sizeof(RecoveredGlobal_80233350___vt__10TTecGrants) == 0x28 ? 1 : -1];
u8 *TTecGrants__ct(u8 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    u32 temp_r3;
    fn_8022C10C((void *) (arg0), (void *) (arg1), (void *) (arg2), (void *) (arg4));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_80233350___vt__10TTecGrants *)&__vt__10TTecGrants).value;
    TObjPlayer__sub_8004433C((void *) (arg0 + 0xEC));
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D37D0;
    fn_80232830((void *) (arg0));
    TTecAnti__sub_8022B3E8((void *) (arg0 + 0xEC), (void *) (arg3));
    M2C_FIELD(arg0, s32 *, 0x148) = 0;
    temp_r3 = M2C_FIELD(arg0, u32 *, 0x1C);
    if (temp_r3 != 0U) {
        M2C_FIELD(arg0, s16 *, 0xB4) = obj_getField1c((int) (temp_r3));
    }
    return arg0;
}

}
