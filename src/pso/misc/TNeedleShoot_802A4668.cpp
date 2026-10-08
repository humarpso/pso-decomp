#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
struct Base_802A4668 { char pad[0x18]; };
struct VObj_802A4668 : Base_802A4668 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
};

#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
M2C_UNK check_wall_hit__12TNeedleShootFPv(void *, f32, f32);
void update_position__12TNeedleShootFPv(u8 *arg0);
}

extern "C" {

void TNeedleShoot__sub_802A4668(void *arg0);

void TNeedleShoot__sub_802A4668(void *arg0) {
    struct VObj_802A4668 *o = (struct VObj_802A4668 *)arg0;
    o->m5();
}
#pragma push
#pragma fp_contract on
void update_position__12TNeedleShootFPv(u8 *arg0) {
    f32 temp_f1;
    f32 temp_f2;
    VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x28), (void *) (arg0 + 0x6C));
    M2C_FIELD(arg0, f32 *, 0x6C) = (f32) ((M2C_FIELD(arg0, f32 *, 0x94) * M2C_FIELD(arg0, f32 *, 0xAC)) + M2C_FIELD(arg0, f32 *, 0x6C));
    M2C_FIELD(arg0, f32 *, 0x70) = (f32) ((M2C_FIELD(arg0, f32 *, 0x98) * M2C_FIELD(arg0, f32 *, 0xAC)) + M2C_FIELD(arg0, f32 *, 0x70));
    temp_f2 = M2C_FIELD(arg0, f32 *, 0x9C);
    temp_f1 = M2C_FIELD(arg0, f32 *, 0xAC);
    M2C_FIELD(arg0, f32 *, 0x74) = (f32) ((temp_f2 * temp_f1) + M2C_FIELD(arg0, f32 *, 0x74));
    check_wall_hit__12TNeedleShootFPv((void *) (arg0), (f32) (temp_f1), (f32) (temp_f2));
}
#pragma pop

}
