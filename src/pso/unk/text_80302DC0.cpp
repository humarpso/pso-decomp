#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct VBase_18_3127e4 { char pad[0x18]; };

struct VObj_18_3127e4 : VBase_18_3127e4 {
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
    virtual M2C_UNK m12(void *, void *, s32);
};

typedef struct Vec_80302DC0 { f32 x; f32 y; f32 z; } Vec_80302DC0;

typedef struct Arg_80302DC0 { s32 id; f32 val; } Arg_80302DC0;

extern "C" {
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
M2C_UNK queue_destruction__7TObjectFv(void *);
u32 csnVector(void *, void *, int);
M2C_UNK copy_pos__11TNowLoadingFPvPv(void *, void *);
M2C_UNK update_enemy_collision_flags__10TObjPlayerFPv(void *);
extern u8 lbl_8047511C[];
extern s32 lbl_80475124[];
extern const f32 lbl_805DEFA0;
extern const f32 lbl_805DEFA4;
extern const f32 lbl_805DEFA8;
void fn_80302DC0(u8 *arg0);
}

extern "C" {

#pragma push
#pragma fp_contract on
void fn_80302DC0(u8 *arg0) {
    Vec_80302DC0 a;
    Vec_80302DC0 b;
    Arg_80302DC0 arg;
    f32 step;
    if (M2C_FIELD(arg0, void **, 0xCC) != NULL) {
        VecCopy__FP3VecPC3Vec(&a, arg0 + 0x38);
        a.x += lbl_805DEFA0 * M2C_FIELD(arg0, f32 *, 0xB0);
        step = lbl_805DEFA4;
        a.z += lbl_805DEFA0 * M2C_FIELD(arg0, f32 *, 0xB8);
        M2C_FIELD(arg0, f32 *, 0xC0) += lbl_805DEFA0;
        while (M2C_FIELD(arg0, f32 *, 0xC0) > M2C_FIELD(arg0, f32 *, 0xC4)) {
            VecCopy__FP3VecPC3Vec(&b, arg0 + 0x38);
            b.x += M2C_FIELD(arg0, f32 *, 0xC4) * M2C_FIELD(arg0, f32 *, 0xB0);
            b.z += M2C_FIELD(arg0, f32 *, 0xC4) * M2C_FIELD(arg0, f32 *, 0xB8);
            if (M2C_FIELD(arg0, void **, 0xCC) != NULL) {
                copy_pos__11TNowLoadingFPvPv(M2C_FIELD(arg0, void **, 0xCC), &b);
            }
            M2C_FIELD(arg0, f32 *, 0xC4) += step;
        }
        M2C_FIELD(arg0, f32 *, 0xC4) -= lbl_805DEFA0;
        M2C_FIELD(arg0, f32 *, 0xC0) -= lbl_805DEFA0;
        if (csnVector(arg0 + 0x38, &a, 0x1EFF) != 0) {
            queue_destruction__7TObjectFv(arg0);
            return;
        }
        VecCopy__FP3VecPC3Vec(arg0 + 0x38, &a);
        M2C_FIELD(M2C_FIELD(arg0, u8 **, 0xA4), f32 *, 0x10) = lbl_805DEFA8;
        M2C_FIELD(M2C_FIELD(arg0, u8 **, 0xA4), f32 *, 0xC) = lbl_805DEFA8;
        update_enemy_collision_flags__10TObjPlayerFPv(arg0);
        if (M2C_FIELD(M2C_FIELD(arg0, u8 **, 0xA4), s32 *, 0x18) & 0x200000) {
            queue_destruction__7TObjectFv(arg0);
            return;
        }
        arg.id = lbl_80475124[0];
        arg.val = M2C_FIELD(arg0, f32 *, 0xC8);
        ((VObj_18_3127e4 *)(arg0))->m12(lbl_8047511C, &arg, M2C_FIELD(arg0, s32 *, 0xBC));
        return;
    }
    queue_destruction__7TObjectFv(arg0);
}
#pragma pop

}
