#include "pso/TObjChip.h"

TObjChip::~TObjChip() {}

#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Base_801809C4_801809B4 { char pad[0x18]; };
struct VObj_801809C4_801809B4 : Base_801809C4_801809B4 {
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

struct VBase_18 { char pad[0x18]; };
struct VObj_18 : VBase_18 {
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
    virtual M2C_UNK m10();
    virtual M2C_UNK m11();
};
#pragma inline_depth(1)
#pragma auto_inline off
#pragma dont_inline off
struct M2CCopy_C { u8 bytes[0xc]; };

struct VBase_18_6eb662 { char pad[0x18]; };

struct VObj_18_6eb662 : VBase_18_6eb662 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual s32 m5(void *, f32);
};

struct RecoveredGlobal_80180AA4___vt__8TObjChip {
    M2C_UNK value;
    u8 remaining[0x34];
};

struct VBase_18_2a3247 { char pad[0x18]; };

struct VObj_18_2a3247 : VBase_18_2a3247 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual s32 m4(f32);
};

struct RecoveredGlobal_80180BD4___vt__8TObjChip {
    M2C_UNK value;
    u8 remaining[0x34];
};

extern "C" {
M2C_UNK set_global_param__8TObjFishFi(int);
void TObjChip__sub_80180134(u8 *arg0);
void TObjChip__sub_80180B38(u8 *arg0, u8 *arg1);
void TObjChip__sub_80180B38(u8 *arg0, u8 *arg1);
void __ct__7TObjectFP7TObject(void *, void *);
extern RecoveredGlobal_80180AA4___vt__8TObjChip __vt__8TObjChip;
extern s32 lbl_805D3240;
extern const f32 lbl_805DBB94;
extern const f32 lbl_805DBB98;
u8 *__ct__8TObjChipFv(u8 *arg0, u8 *arg1, u8 *arg2);
void TObjChip__sub_80180B38(u8 *arg0, u8 *arg1);
void __ct__7TObjectFP7TObject(void *, void *);
extern RecoveredGlobal_80180AA4___vt__8TObjChip __vt__8TObjChip;
extern s32 lbl_805D3240;
extern const f32 lbl_805DBB94;
extern const f32 lbl_805DBB98;
u8 *TObjChip__sub_80180BD4(u8 *arg0, u8 *arg1, u8 *arg2);
}

extern "C" {

struct Base_801809F0_801809B4 { char pad[0x18]; };
struct VObj_801809F0_801809B4 : Base_801809F0_801809B4 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(); virtual int m6(); virtual void m7();
};

int TObjChip__vt6(void* p);
u8 *copy_transform__8TObjChipFPvPv(u8 *arg0, u8 *arg1);
void dispatch_vt9__8TObjChipFPv(void *arg0);
void update__8TObjChipFPv(void *arg0);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
M2C_UNK copy_xyz__10TObjPlayerFPvPv(void *, void *);
M2C_UNK queue_destruction__7TObjectFv(void *);

void TObjChip__sub_80180134(u8 *arg0) {
    set_global_param__8TObjFishFi((int) (M2C_FIELD(arg0, s32 *, 0x68)));
    if (M2C_FIELD(arg0, s32 *, 0x6C) & 0x10) {
        ((VObj_18 *)(arg0))->m10();
        return;
    }
    ((VObj_18 *)(arg0))->m11();
}

int TObjChip__vt6(void* p) { return *(u32*)((char*)p + 0x230) == 0; }

void dispatch_vt9__8TObjChipFPv(void *arg0) {
    struct VObj_801809C4_801809B4 *o = (struct VObj_801809C4_801809B4 *)arg0;
    o->m9();
}

void update__8TObjChipFPv(void *arg0) {
    struct VObj_801809F0_801809B4 *o = (struct VObj_801809F0_801809B4 *)arg0;
    o->m7();
    if (o->m6() == 1) {
        queue_destruction__7TObjectFv(arg0);
    }
}

typedef char RecoveredGlobal_80180AA4___vt__8TObjChip_size[sizeof(RecoveredGlobal_80180AA4___vt__8TObjChip) == 0x38 ? 1 : -1];
u8 *__ct__8TObjChipFv(u8 *arg0, u8 *arg1, u8 *arg2) {
    __ct__7TObjectFP7TObject(arg0, arg1);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &__vt__8TObjChip.value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D3240;
    TObjChip__sub_80180B38((u8 *)(arg0 + 0x24), (u8 *)(arg2));
    M2C_FIELD(arg0, f32 *, 0x1C) = (f32) lbl_805DBB94;
    M2C_FIELD(arg0, f32 *, 0x20) = (f32) lbl_805DBB98;
    M2C_FIELD(arg0, s32 *, 0x230) = 1;
    if (((VObj_18_6eb662 *)(arg0))->m5(arg2 + 0x4C, lbl_805DBB94) == 0) {
        M2C_FIELD(arg0, s32 *, 0x230) = 0;
    }
    return arg0;
}

void TObjChip__sub_80180B38(u8 *arg0, u8 *arg1) {
    M2C_FIELD(arg0, f32 *, 0) = (f32) M2C_FIELD(arg1, f32 *, 0);
    M2C_FIELD(arg0, f32 *, 4) = (f32) M2C_FIELD(arg1, f32 *, 4);
    M2C_FIELD(arg0, f32 *, 8) = (f32) M2C_FIELD(arg1, f32 *, 8);
    *(M2CCopy_C *)((s32) arg0 + 0xC) = *(const M2CCopy_C *)((s32) arg1 + 0xC);
    *(M2CCopy_C *)((s32) arg0 + 0x18) = *(const M2CCopy_C *)((s32) arg1 + 0x18);
    *(M2CCopy_C *)((s32) arg0 + 0x24) = *(const M2CCopy_C *)((s32) arg1 + 0x24);
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) M2C_FIELD(arg1, s32 *, 0x30);
    M2C_FIELD(arg0, s32 *, 0x34) = (s32) M2C_FIELD(arg1, s32 *, 0x34);
    M2C_FIELD(arg0, f32 *, 0x38) = (f32) M2C_FIELD(arg1, f32 *, 0x38);
    M2C_FIELD(arg0, f32 *, 0x3C) = (f32) M2C_FIELD(arg1, f32 *, 0x3C);
    M2C_FIELD(arg0, s32 *, 0x40) = (s32) M2C_FIELD(arg1, s32 *, 0x40);
    M2C_FIELD(arg0, s32 *, 0x44) = (s32) M2C_FIELD(arg1, s32 *, 0x44);
    M2C_FIELD(arg0, s32 *, 0x48) = (s32) M2C_FIELD(arg1, s32 *, 0x48);
}

typedef char RecoveredGlobal_80180BD4___vt__8TObjChip_size[sizeof(RecoveredGlobal_80180BD4___vt__8TObjChip) == 0x38 ? 1 : -1];
u8 *TObjChip__sub_80180BD4(u8 *arg0, u8 *arg1, u8 *arg2) {
    __ct__7TObjectFP7TObject(arg0, arg1);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = &(*(RecoveredGlobal_80180BD4___vt__8TObjChip *)&__vt__8TObjChip).value;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D3240;
    TObjChip__sub_80180B38((u8 *)(arg0 + 0x24), (u8 *)(arg2));
    M2C_FIELD(arg0, f32 *, 0x1C) = (f32) lbl_805DBB94;
    M2C_FIELD(arg0, f32 *, 0x20) = (f32) lbl_805DBB98;
    M2C_FIELD(arg0, s32 *, 0x230) = 1;
    if (((VObj_18_2a3247 *)(arg0))->m4(lbl_805DBB94) == 0) {
        M2C_FIELD(arg0, s32 *, 0x230) = 0;
    }
    return arg0;
}

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
