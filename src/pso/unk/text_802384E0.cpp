#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))
#include <stddef.h>
struct Stack_802384E0 {
    M2C_UNK sp8;
    f32 spC;
    u8 trailing_storage[0x4];
};

struct RecoveredGlobal_802384E0_lbl_804CCB28 { M2C_UNK value; u8 remaining[0x14]; };
typedef char RecoveredGlobal_802384E0_lbl_804CCB28_size[sizeof(RecoveredGlobal_802384E0_lbl_804CCB28) == 0x18 ? 1 : -1];

struct Stack_802385EC {
    M2C_UNK sp8;
    f32 spC;
    u8 trailing_storage[0x4];
};

struct RecoveredGlobal_802385EC_lbl_804CCB28 { M2C_UNK value; u8 remaining[0x14]; };
typedef char RecoveredGlobal_802385EC_lbl_804CCB28_size[sizeof(RecoveredGlobal_802385EC_lbl_804CCB28) == 0x18 ? 1 : -1];

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
M2C_UNK queue_destruction__7TObjectFv(void *);
u32 TPhotonMylla__sub_80154CB4(int);
s32 is_parents_unqueued__9TTecLukerFUi();
s32 is_valid_and_active__10TObjPlayerFUi(int);
M2C_UNK TTecRaFoie__sub_80238828(void *, void *);
void run_task__10TTecRaFoieFv(u8 *arg0);
s32 VecCopy__FP3VecPC3Vec(void *, void *);
void *__nw__7TObjectFUl(int);
s32 __ct__7TObjectFP7TObject(void *, void *);
s32 TTecRaFoie__sub_80237DAC(void *);
s32 fn_802A8210(int, int, void *);
extern RecoveredGlobal_802384E0_lbl_804CCB28 lbl_804CCB28;
extern const f32 TTecRaFoie__data_805DC8CC;
extern const f32 lbl_805DC8E4;
extern const f32 lbl_805DC8E8;
extern const f32 lbl_805DC8EC;
u8 *TTecRaFoie__sub_802384E0(u8 *arg0, M2C_UNK *arg1, s16 arg2, s16 arg3, s32 arg4, f32 farg0);
s32 VecCopy__FP3VecPC3Vec(void *, void *);
void *__nw__7TObjectFUl(int);
s32 __ct__7TObjectFP7TObject(void *, void *);
s32 TTecRaFoie__sub_80237DAC(void *);
s32 fn_802A8210(int, int, void *);
extern RecoveredGlobal_802384E0_lbl_804CCB28 lbl_804CCB28;
extern const f32 TTecRaFoie__data_805DC8CC;
extern const f32 lbl_805DC8E4;
extern const f32 lbl_805DC8E8;
extern const f32 lbl_805DC8EC;
u8 *TTecRaFoie__sub_802385EC(u8 *arg0, M2C_UNK *arg1, s16 arg2, s32 arg3, f32 farg0);
s32 TTecCtrl__sub_8022DBC4(int, int, int);
s32 is_technique_ready__8TTecCtrlFv();
s32 TTecAnti__sub_8022B35C(void *, int);
extern RecoveredGlobal_80238D10_lbl_804CC510 lbl_804CC510;
extern RecoveredGlobal_80238D10_lbl_804CC55C lbl_804CC55C;
void TTecRaZonde__sub_80238D10(u8 *arg0);
void TTecRaFoie__vt4(u8 *self, u8 *target);
}

extern "C" {

void *__dt__10TTecRaFoieFv(void *arg0, s16 arg1);
void create__10TTecRaFoieFPvPvPvPv(void *arg0, void *arg1, void *arg2, void *arg3);
void create_ex__10TTecRaFoieFPvPvPvPv(void *arg0, void *arg1, void *arg2, void *arg3);
void render__10TTecRaFoieFv(void);
void *TTecRaFoie__ct(void *, void *, void *, void *, void *);
void *TTecRaFoie__sub_80238BA4(void *, void *, void *, void *, void *);
void __dl__7TObjectFPv(void *);
void *__nw__7TObjectFUl(int);
void destroy_technique_base__9TTecLukerFPvs(void *, int);

u8 *TTecRaFoie__sub_802384E0(u8 *arg0, M2C_UNK *arg1, s16 arg2, s16 arg3, s32 arg4, f32 farg0) {
    typedef char sp8_offset[(offsetof(Stack_802384E0, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_802384E0, spC) == 0x4) ? 1 : -1];
    Stack_802384E0 stack;
    s32 temp_r3;
    s32 var_r0;
    __ct__7TObjectFP7TObject((void *) (arg0), (void *) (arg4));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &lbl_804CCB28.value;
    M2C_FIELD(arg0, s16 *, 0x20) = arg2;
    M2C_FIELD(arg0, s16 *, 0x22) = arg3;
    M2C_FIELD(arg0, s32 *, 0x60) = 1;
    VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x28), (void *) (arg1));
    M2C_FIELD(arg0, f32 *, 0x44) = farg0;
    M2C_FIELD(arg0, s32 *, 0x58) = 0;
    M2C_FIELD(arg0, s32 *, 0x5C) = 0;
    M2C_FIELD(arg0, f32 *, 0x34) = (f32) lbl_805DC8E4;
    M2C_FIELD(arg0, f32 *, 0x38) = (f32) lbl_805DC8E4;
    M2C_FIELD(arg0, f32 *, 0x3C) = (f32) lbl_805DC8E4;
    M2C_FIELD(arg0, f32 *, 0x48) = (f32) TTecRaFoie__data_805DC8CC;
    M2C_FIELD(arg0, f32 *, 0x4C) = (f32) TTecRaFoie__data_805DC8CC;
    M2C_FIELD(arg0, f32 *, 0x50) = (f32) TTecRaFoie__data_805DC8CC;
    M2C_FIELD(arg0, f32 *, 0x54) = (f32) TTecRaFoie__data_805DC8CC;
    VecCopy__FP3VecPC3Vec((void *) (&stack.sp8), (void *) (arg0 + 0x28));
    stack.spC += lbl_805DC8E8;
    VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x28), (void *) (&stack.sp8));
    TTecRaFoie__sub_80237DAC((void *) (arg0));
    temp_r3 = ((s32)__nw__7TObjectFUl((int) (0x20)));
    var_r0 = temp_r3;
    if (var_r0 != 0) {
        var_r0 = fn_802A8210((int) (temp_r3), (int) (0x11), (void *) (arg0));
    }
    M2C_FIELD(arg0, s32 *, 0x24) = var_r0;
    M2C_FIELD(arg0, f32 *, 0x40) = (f32) lbl_805DC8EC;
    return arg0;
}

u8 *TTecRaFoie__sub_802385EC(u8 *arg0, M2C_UNK *arg1, s16 arg2, s32 arg3, f32 farg0) {
    typedef char sp8_offset[(offsetof(Stack_802385EC, sp8) == 0x0) ? 1 : -1];
    typedef char spC_offset[(offsetof(Stack_802385EC, spC) == 0x4) ? 1 : -1];
    Stack_802385EC stack;
    s32 temp_r3;
    s32 var_r0;
    __ct__7TObjectFP7TObject((void *) (arg0), (void *) (arg3));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &lbl_804CCB28.value;
    M2C_FIELD(arg0, s16 *, 0x20) = arg2;
    M2C_FIELD(arg0, s16 *, 0x22) = 0;
    M2C_FIELD(arg0, s32 *, 0x60) = 1;
    VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x28), (void *) (arg1));
    M2C_FIELD(arg0, f32 *, 0x44) = farg0;
    M2C_FIELD(arg0, s32 *, 0x58) = 0;
    M2C_FIELD(arg0, s32 *, 0x5C) = 0;
    M2C_FIELD(arg0, f32 *, 0x34) = (f32) lbl_805DC8E4;
    M2C_FIELD(arg0, f32 *, 0x38) = (f32) lbl_805DC8E4;
    M2C_FIELD(arg0, f32 *, 0x3C) = (f32) lbl_805DC8E4;
    M2C_FIELD(arg0, f32 *, 0x48) = (f32) TTecRaFoie__data_805DC8CC;
    M2C_FIELD(arg0, f32 *, 0x4C) = (f32) TTecRaFoie__data_805DC8CC;
    M2C_FIELD(arg0, f32 *, 0x50) = (f32) TTecRaFoie__data_805DC8CC;
    M2C_FIELD(arg0, f32 *, 0x54) = (f32) TTecRaFoie__data_805DC8CC;
    VecCopy__FP3VecPC3Vec((void *) (&stack.sp8), (void *) (arg0 + 0x28));
    stack.spC += lbl_805DC8E8;
    VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x28), (void *) (&stack.sp8));
    TTecRaFoie__sub_80237DAC((void *) (arg0));
    temp_r3 = ((s32)__nw__7TObjectFUl((int) (0x20)));
    var_r0 = temp_r3;
    if (var_r0 != 0) {
        var_r0 = fn_802A8210((int) (temp_r3), (int) (0x11), (void *) (arg0));
    }
    M2C_FIELD(arg0, s32 *, 0x24) = var_r0;
    M2C_FIELD(arg0, f32 *, 0x40) = (f32) lbl_805DC8EC;
    return arg0;
}

void TTecRaFoie__vt4(u8 *self, u8 *target) {
    Damage_802386F8 d;
    d.kind = 1;
    d.power = *(f32 *)(self + 0x88);
    ((VObj_802386F8 *)target)->m21(*(s32 *)(self + 0x1C), d, *(s32 *)(self + 0xB8), 2, -1, self);
}

void render__10TTecRaFoieFv(void) {  }

void run_task__10TTecRaFoieFv(u8 *arg0) {
    u32 temp_r31;
    if ((u32) M2C_FIELD(arg0, u32 *, 0xE8) == 0U) {
        queue_destruction__7TObjectFv((void *) (arg0));
        return;
    }
    M2C_FIELD(arg0, u32 *, 0x1C) = TPhotonMylla__sub_80154CB4((int) (M2C_FIELD(arg0, u16 *, 0xB4)));
    if ((u32) M2C_FIELD(arg0, u32 *, 0x1C) == 0U) {
        queue_destruction__7TObjectFv((void *) (arg0));
        return;
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0x148) == 1) {
        TTecRaFoie__sub_80238828((void *) (arg0), (void *) (arg0 + 0x7C));
        return;
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0xEC) == 0) {
        queue_destruction__7TObjectFv((void *) (arg0));
        return;
    }
    temp_r31 = TPhotonMylla__sub_80154CB4((int) (M2C_FIELD(arg0, u16 *, 0xF0)));
    if ((is_parents_unqueued__9TTecLukerFUi() != 0) && (is_valid_and_active__10TObjPlayerFUi((int) (temp_r31)) != 0)) {
        TTecRaFoie__sub_80238828((void *) (arg0), (void *) (temp_r31 + 0x2FC));
    }
}

void create__10TTecRaFoieFPvPvPvPv(void *arg0, void *arg1, void *arg2, void *arg3) {
    void *o;
    o = __nw__7TObjectFUl(0x14C);
    if (o != NULL) {
        TTecRaFoie__ct(o, arg0, arg1, arg2, arg3);
    }
}

void create_ex__10TTecRaFoieFPvPvPvPv(void *arg0, void *arg1, void *arg2, void *arg3) {
    void *o;
    o = __nw__7TObjectFUl(0x14C);
    if (o != NULL) {
        TTecRaFoie__sub_80238BA4(o, arg0, arg1, arg2, arg3);
    }
}

extern M2C_UNK __vt__10TTecRaFoie[];

void *__dt__10TTecRaFoieFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__10TTecRaFoie;
        destroy_technique_base__9TTecLukerFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
typedef struct RecoveredFields_80238D10_arg0 RecoveredFields_80238D10_arg0;
typedef struct RecoveredGlobal_80238D10_lbl_804CC510 RecoveredGlobal_80238D10_lbl_804CC510;
typedef struct RecoveredGlobal_80238D10_lbl_804CC55C RecoveredGlobal_80238D10_lbl_804CC55C;
typedef char RecoveredGlobal_80238D10_lbl_804CC510_size[((sizeof(RecoveredGlobal_80238D10_lbl_804CC510)) == 0x4C) ? (1) : (-1)];
typedef char RecoveredGlobal_80238D10_lbl_804CC55C_size[((sizeof(RecoveredGlobal_80238D10_lbl_804CC55C)) == 0x98) ? (1) : (-1)];
void TTecRaZonde__sub_80238D10(u8 *arg0) {
  s32 new_var;
  new_var = TTecCtrl__sub_8022DBC4((int) 8, (int) ((RecoveredFields_80238D10_arg0 *) arg0)->field_78, (int) 0xFFFF);
  TTecAnti__sub_8022B35C((void *) (arg0 + 0x88), (int) new_var);
  if ((((s16) ((RecoveredFields_80238D10_arg0 *) arg0)->field_78) >= 0xF) && (is_technique_ready__8TTecCtrlFv() == 0))
  {
    ((RecoveredFields_80238D10_arg0 *) arg0)->field_88 = (f32) ((*((s16 *) (((s8 *) (&lbl_804CC510.value)) + 0x20))) + ((*((s16 *) (((s8 *) (&lbl_804CC510.value)) + 0x22))) * ((RecoveredFields_80238D10_arg0 *) arg0)->field_78));
    return;
  }
  ((RecoveredFields_80238D10_arg0 *) arg0)->field_88 = (f32) (((RecoveredFields_80238D10_arg0 *) arg0)->field_88 + ((f32) (((RecoveredFields_80238D10_arg0 *) arg0)->field_AC * ((RecoveredFields_80238D10_arg0 *) arg0)->field_78)));
  if (is_technique_ready__8TTecCtrlFv() != 0)
  {
    ((RecoveredFields_80238D10_arg0 *) arg0)->field_88 = (f32) (((RecoveredFields_80238D10_arg0 *) arg0)->field_88 * (*((f32 *) (((s8 *) (&lbl_804CC55C.value)) + 0x40))));
  }
}

}
