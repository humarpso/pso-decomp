#include "types.h"
#include "pso/misc/TNeedleShoot.h"

struct Base_802A4668 { char pad[0x18]; };
struct VObj_802A4668 : Base_802A4668 {
    virtual void m0();
    virtual void m1();
    virtual void m2();
    virtual void m3();
    virtual void m4();
    virtual void m5();
};

extern "C" {
s32 VecCopy__FP3VecPC3Vec(void *, void *);
s32 check_wall_hit__12TNeedleShootFPv(void *, f32, f32);
}

extern "C" {

void TNeedleShoot__sub_802A4668(void *arg0);

void TNeedleShoot__sub_802A4668(void *arg0) {
    struct VObj_802A4668 *o = (struct VObj_802A4668 *)arg0;
    o->m5();
}
#pragma push
#pragma fp_contract on
void TNeedleShoot::update_position() {
    u8 *arg0 = (u8 *)this;
    f32 temp_f1;
    f32 temp_f2;
    VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x28), (void *) (arg0 + 0x6C));
    *(f32 *)((s8 *)arg0 + 0x6C) = (f32) ((*(f32 *)((s8 *)arg0 + 0x94) * *(f32 *)((s8 *)arg0 + 0xAC)) + *(f32 *)((s8 *)arg0 + 0x6C));
    *(f32 *)((s8 *)arg0 + 0x70) = (f32) ((*(f32 *)((s8 *)arg0 + 0x98) * *(f32 *)((s8 *)arg0 + 0xAC)) + *(f32 *)((s8 *)arg0 + 0x70));
    temp_f2 = *(f32 *)((s8 *)arg0 + 0x9C);
    temp_f1 = *(f32 *)((s8 *)arg0 + 0xAC);
    *(f32 *)((s8 *)arg0 + 0x74) = (f32) ((temp_f2 * temp_f1) + *(f32 *)((s8 *)arg0 + 0x74));
    check_wall_hit__12TNeedleShootFPv((void *) (arg0), (f32) (temp_f1), (f32) (temp_f2));
}
#pragma pop

}
