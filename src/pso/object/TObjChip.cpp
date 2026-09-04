#ifndef PSO_CLASS_PACKAGE
#include "pso/TObjChip.h"

TObjChip::~TObjChip() {}
#else
#if PSO_CLASS_PACKAGE == 0x801809B4
#include "types.h"

extern "C" {

int TObjChip__vt6(void* p);

int TObjChip__vt6(void* p) { return *(u32*)((char*)p + 0x230) == 0; }

}
#endif
#if PSO_CLASS_PACKAGE == 0x801809C4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
struct Base_801809C4 { char pad[0x18]; };
struct VObj_801809C4 : Base_801809C4 {
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
};
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void dispatch_vt9__8TObjChipFPv(void *arg0);
void update__8TObjChipFPv(void *arg0);
M2C_UNK queue_destruction__7TObjectFv(void *);

void dispatch_vt9__8TObjChipFPv(void *arg0) {
    struct VObj_801809C4 *o = (struct VObj_801809C4 *)arg0;
    o->m9();
}

struct Base_801809F0 { char pad[0x18]; };
struct VObj_801809F0 : Base_801809F0 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual int m6(); virtual void m7();
};

void update__8TObjChipFPv(void *arg0) {
    struct VObj_801809F0 *o = (struct VObj_801809F0 *)arg0;
    o->m7();
    if (o->m6() == 1) {
        queue_destruction__7TObjectFv(arg0);
    }
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80180C64
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

u8 *copy_transform__8TObjChipFPvPv(u8 *arg0, u8 *arg1);
M2C_UNK copy_xyz__10TObjPlayerFPvPv(void *, void *);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);

u8 *copy_transform__8TObjChipFPvPv(u8 *arg0, u8 *arg1) {
    M2C_FIELD(arg0, f32 *, 0) = (f32) M2C_FIELD(arg1, f32 *, 0);
    M2C_FIELD(arg0, f32 *, 4) = (f32) M2C_FIELD(arg1, f32 *, 4);
    M2C_FIELD(arg0, f32 *, 8) = (f32) M2C_FIELD(arg1, f32 *, 8);
    VecCopy__FP3VecPC3Vec(arg0 + 0xC, arg1 + 0xC);
    VecCopy__FP3VecPC3Vec(arg0 + 0x18, arg1 + 0x18);
    copy_xyz__10TObjPlayerFPvPv(arg0 + 0x24, arg1 + 0x24);
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) M2C_FIELD(arg1, s32 *, 0x30);
    M2C_FIELD(arg0, s32 *, 0x34) = (s32) M2C_FIELD(arg1, s32 *, 0x34);
    M2C_FIELD(arg0, f32 *, 0x38) = (f32) M2C_FIELD(arg1, f32 *, 0x38);
    M2C_FIELD(arg0, f32 *, 0x3C) = (f32) M2C_FIELD(arg1, f32 *, 0x3C);
    M2C_FIELD(arg0, s32 *, 0x40) = (s32) M2C_FIELD(arg1, s32 *, 0x40);
    M2C_FIELD(arg0, s32 *, 0x44) = (s32) M2C_FIELD(arg1, s32 *, 0x44);
    M2C_FIELD(arg0, s32 *, 0x48) = (s32) M2C_FIELD(arg1, s32 *, 0x48);
    M2C_FIELD(arg0, s32 *, 0x54) = 0;
    M2C_FIELD(arg0, s32 *, 0x50) = 0;
    M2C_FIELD(arg0, s32 *, 0x4C) = 0;
    return arg0;
}

}
#endif
#endif
