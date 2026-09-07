#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Stack_80096300
{
  M2C_UNK sp8;
  f32 spC;
};

struct RecoveredGlobal_80096750_lbl_8048F930 {
    M2C_UNK value;
    u8 remaining[0x54];
};

struct RecoveredGlobal_80096750___vt__21TObjEneRe7BeruraPunch {
    M2C_UNK value;
    u8 remaining[0x5C];
};

extern "C" {
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
u8 *TBoss8Dragon__sub_8007A544(M2C_UNK *, M2C_UNK);
extern const f32 TObjEneRe7BeruraPunch__data_805D97A0;
extern const f32 lbl_805D97B8;
void TObjEneRe7BeruraPunch__sub_80096300(u8 *arg0);
u16 obj_getField1c(void *);
void init__21TObjEneRe7BeruraPunchFPv(u8 *arg0);
s32 init_vtable_and_field18__10TObjPlayerFPv(void *);
s32 init_instance__16TObjEneDellBiterFPvPvPvPvPv(void *, void *, void *, void *, int);
extern RecoveredGlobal_80096750_lbl_8048F930 lbl_8048F930;
extern M2C_UNK __vt__21TObjEneRe7BeruraPunch[];
extern s32 lbl_805D2990;
u8 *TObjEneRe7BeruraPunch__ct(u8 *arg0, s32 arg1, s32 arg2);
}

extern "C" {

struct BeruraBase_800962F4 { char pad[0x14]; };
struct BeruraObj_800962F4 : BeruraBase_800962F4 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
};
struct EneBBase_800962F4 { char pad[0x14]; };
struct EneBVObj_800962F4 : EneBBase_800962F4 {
    virtual void m0();
    virtual void m1(M2C_UNK);
};

void TObjEneRe7BeruraPunch__sub_800962F4(void* p);
void *__dt__21TObjEneRe7BeruraPunchFv(void *arg0, s16 arg1);
void init__21TObjEneRe7BeruraPunchFPv(u8 *arg0);
void reset__21TObjEneRe7BeruraPunchFPv(u8 *arg0);
void TBoss8Dragon__sub_800BC5A0(void *, int);
s32 TBoss8Dragon__sub_800BC5EC(s32, s32);
void TObjPlayer__sub_800A05B8(void *, int);
void __dl__7TObjectFPv(void *);
s32 alloc__23TAdSinglePlyChrSelectGCFPv(M2C_UNK);
void destroy_enemy_object__10TObjPlayerFPvs(void *, int);
M2C_UNK fn_8002B094(s32);
void queue_destruction__7TObjectFv(void *);

void TObjEneRe7BeruraPunch__sub_800962F4(void* p) { *(s32*)((char*)p + 0xb4) = 0; }

extern const f32 lbl_805D9794;
extern const f32 lbl_805D9798;

typedef struct Stack_80096300 Stack_80096300;
void TObjEneRe7BeruraPunch__sub_80096300(u8 *arg0) {
  Stack_80096300 stack;
  f32 new_var;
  u8 *temp_r3;
  VecCopy__FP3VecPC3Vec((void *) (&stack.sp8), (void *) (arg0 + 0xDC));
  stack.spC = lbl_805D97B8;
  temp_r3 = TBoss8Dragon__sub_8007A544(&stack.sp8, 0x16EF);
  if (temp_r3 != 0)
  {
    VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x38), (void *) (*((s32 *) (((s8 *) temp_r3) + 4))));
    VecCopy__FP3VecPC3Vec((void *) (arg0 + 0xE8), (void *) ((*((s32 *) (((s8 *) temp_r3) + 4))) + 0xC));
  }
  else
  {
    *((f32 *) (((s8 *) arg0) + 0x38)) = (f32) (*((f32 *) (((s8 *) arg0) + 0xDC)));
    *((f32 *) (((s8 *) arg0) + 0x40)) = (f32) (*((f32 *) (((s8 *) arg0) + 0xE4)));
  }
  new_var = *((f32 *) (((s8 *) arg0) + 0xE0));
  *((f32 *) (((s8 *) arg0) + 0xCC)) = (f32) (new_var - (*((f32 *) (((s8 *) arg0) + 0x3C))));
  if ((*((f32 *) (((s8 *) arg0) + 0xCC))) < TObjEneRe7BeruraPunch__data_805D97A0)
  {
    *((f32 *) (((s8 *) arg0) + 0xE0)) = (f32) (TObjEneRe7BeruraPunch__data_805D97A0 + (*((f32 *) (((s8 *) arg0) + 0x3C))));
    *((f32 *) (((s8 *) arg0) + 0xCC)) = (f32) TObjEneRe7BeruraPunch__data_805D97A0;
  }
  if ((new_var && new_var) && new_var)
  {
  }
}

void reset__21TObjEneRe7BeruraPunchFPv(u8 *arg0) {
    fn_8002B094(M2C_FIELD(arg0, s32 *, 0xD8));
    M2C_FIELD(arg0, f32 *, 0xF4) = (f32) lbl_805D9798;
    ((BeruraObj_800962F4*)(arg0 + 0xF8))->m2();
    M2C_FIELD(arg0, s32 *, 0x118) = 0;
    M2C_FIELD(arg0, f32 *, 0x114) = (f32) lbl_805D9794;
}

extern M2C_UNK __vt__21TObjEneRe7BeruraPunch[];

void *__dt__21TObjEneRe7BeruraPunchFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__21TObjEneRe7BeruraPunch;
        if (M2C_FIELD(arg0, void **, 0xD0) != NULL) { queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0xD0)); M2C_FIELD(arg0, M2C_UNK *, 0xD0) = 0; }
        if (M2C_FIELD(arg0, void **, 0xD4) != NULL) { queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0xD4)); M2C_FIELD(arg0, M2C_UNK *, 0xD4) = 0; }
        if (M2C_FIELD(arg0, void **, 0xD8) != NULL) { TBoss8Dragon__sub_800BC5A0(M2C_FIELD(arg0, void **, 0xD8), 1); M2C_FIELD(arg0, M2C_UNK *, 0xD8) = 0; }
        TObjPlayer__sub_800A05B8((s8 *)arg0 + 0xF8, -1);
        destroy_enemy_object__10TObjPlayerFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern const f32 lbl_805D9794;

void init__21TObjEneRe7BeruraPunchFPv(u8 *arg0) {
    s32 var_r0;
    u32 var_a;

    M2C_FIELD(arg0, s32 *, 0xB4) = 0;
    M2C_FIELD(arg0, s32 *, 0xB8) = 0;
    M2C_FIELD(arg0, f32 *, 0xBC) = (f32) lbl_805D9794;
    M2C_FIELD(arg0, f32 *, 0xC0) = (f32) lbl_805D9794;
    M2C_FIELD(arg0, f32 *, 0xC4) = (f32) lbl_805D9794;
    M2C_FIELD(arg0, f32 *, 0xC8) = (f32) lbl_805D9794;
    M2C_FIELD(arg0, f32 *, 0xCC) = (f32) lbl_805D9794;
    M2C_FIELD(arg0, s32 *, 0xD0) = 0;
    M2C_FIELD(arg0, s32 *, 0xD4) = 0;
    var_a = alloc__23TAdSinglePlyChrSelectGCFPv(0x10);
    var_r0 = var_a;
    if (var_r0 != 0) {
        var_r0 = TBoss8Dragon__sub_800BC5EC(var_a, 9);
    }
    M2C_FIELD(arg0, s32 *, 0xD8) = var_r0;
    ((EneBVObj_800962F4*)(arg0 + 0xF8))->m1(0);
    reset__21TObjEneRe7BeruraPunchFPv((u8 *)(arg0));
}
typedef char RecoveredGlobal_80096750_lbl_8048F930_size[sizeof(RecoveredGlobal_80096750_lbl_8048F930) == 0x58 ? 1 : -1];
typedef char RecoveredGlobal_80096750___vt__21TObjEneRe7BeruraPunch_size[sizeof(RecoveredGlobal_80096750___vt__21TObjEneRe7BeruraPunch) == 0x60 ? 1 : -1];
u8 *TObjEneRe7BeruraPunch__ct(u8 *arg0, s32 arg1, s32 arg2) {
    init_instance__16TObjEneDellBiterFPvPvPvPvPv((void *) (arg0), (void *) (arg1), (void *) (arg2), (void *) (&lbl_8048F930.value), (int) (2));
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_80096750___vt__21TObjEneRe7BeruraPunch *)&__vt__21TObjEneRe7BeruraPunch).value;
    init_vtable_and_field18__10TObjPlayerFPv((void *) (arg0 + 0xF8));
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D2990;
    M2C_FIELD(arg0, u16 *, 0xB0) = obj_getField1c((void *) (arg2));
    init__21TObjEneRe7BeruraPunchFPv((u8 *)((void *) (arg0)));
    return arg0;
}

}
