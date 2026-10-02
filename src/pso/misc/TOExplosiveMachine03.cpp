#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

struct Base_80166024_80165F84 { char pad[0x18]; };
struct VObj_80166024_80165F84 : Base_80166024_80165F84 {
    virtual void m0(); virtual void m1(); virtual void m2(); virtual void m3();
    virtual void m4(); virtual void m5(s32);
};

void *TOExplosiveMachine03__create(void *arg0);
void *TOExplosiveMachine03__ct(void *arg0, s32 arg1);
void *__dt__20TOExplosiveMachine03Fv(void *arg0, s16 arg1);
M2C_UNK TOExplosiveMachine__ct();
s32 TObjFish__sub_8001EDB0(s32, M2C_UNK);
void *get_bml_model(s32, M2C_UNK);
void __dl__7TObjectFPv(void *);
void __dt__18TOExplosiveMachineFv(void *, int);
void *__nw__7TObjectFUl(int);

void *TOExplosiveMachine03__create(void *arg0) {
    void *o = __nw__7TObjectFUl(0xAC);
    if (o != NULL) {
        o = TOExplosiveMachine03__ct((void *)(o), (s32)(arg0));
    }
    return o;
}

extern M2C_UNK __vt__20TOExplosiveMachine03[];

void *__dt__20TOExplosiveMachine03Fv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__20TOExplosiveMachine03;
        __dt__18TOExplosiveMachineFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern M2C_UNK __vt__20TOExplosiveMachine03[];
extern s32 lbl_805D2FC0;
extern s32 lbl_805D59A8;

void *TOExplosiveMachine03__ct(void *arg0, s32 arg1) {
    TOExplosiveMachine__ct();
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__20TOExplosiveMachine03;
    M2C_FIELD(arg0, s32 *, 0) = (s32) lbl_805D2FC0;
    ((VObj_80166024_80165F84 *)arg0)->m5(arg1);
    M2C_FIELD(arg0, void **, 0x34) = get_bml_model(lbl_805D59A8, 6);
    M2C_FIELD(arg0, s32 *, 0x24) = TObjFish__sub_8001EDB0(lbl_805D59A8, 6);
    M2C_FIELD(arg0, f32 *, 0x94) = (f32) M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0x34), void **, 4), f32 *, 0x14);
    M2C_FIELD(arg0, void **, 0x9C) = get_bml_model(lbl_805D59A8, 7);
    M2C_FIELD(arg0, s32 *, 0xA4) = TObjFish__sub_8001EDB0(lbl_805D59A8, 7);
    M2C_FIELD(arg0, void **, 0xA0) = get_bml_model(lbl_805D59A8, 8);
    M2C_FIELD(arg0, s32 *, 0xA8) = TObjFish__sub_8001EDB0(lbl_805D59A8, 8);
    return arg0;
}

}
