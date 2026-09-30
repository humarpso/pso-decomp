#include "pso/TEffStarLight2D.h"

TEffStarLight2D::~TEffStarLight2D() {}

#include "types.h"

struct O_80085388 { u32 f0; u8 pad4[0x14]; void *vptr; f32 f1c; f32 f20; f32 f24; f32 f28; };

struct P2_80085388 { f32 x; f32 z; };

extern "C" {
void VecCopy__FP3VecPC3Vec(void *, void *);
void copy_from__15TEffStarLight2DFPvPv(void* p, void* q);
void __ct__7TObjectFP7TObject(void *, void *);
void TParticleCtrl__sub_803D8D1C(int, void *, void *);
extern u8 __vt__15TEffStarLight2D[];
extern u32 lbl_805D292C;
O_80085388 *__ct__15TEffStarLight2DFv(O_80085388 *arg0, void *arg1, void *arg2, void *arg3);
}

extern "C" {

void copy_from__15TEffStarLight2DFPvPv(void* p, void* q);
void copy_from_subobject__15TEffStarLight2DFPvPv(void* p, void* a1);

void copy_from_subobject__15TEffStarLight2DFPvPv(void* p, void* a1) { copy_from__15TEffStarLight2DFPvPv((void*)((char*)p + 0x38), (void*)(a1)); }
void copy_from__15TEffStarLight2DFPvPv(void* p, void* q) { *(f32*)((char*)p + 0x0) = *(f32*)((char*)q + 0x0); *(f32*)((char*)p + 0x4) = *(f32*)((char*)q + 0x4); *(u8*)((char*)p + 0x8) = *(u8*)((char*)q + 0x8); *(u8*)((char*)p + 0x9) = *(u8*)((char*)q + 0x9); *(u8*)((char*)p + 0xa) = *(u8*)((char*)q + 0xa); *(u8*)((char*)p + 0xb) = *(u8*)((char*)q + 0xb); *(u32*)((char*)p + 0xc) = *(u32*)((char*)q + 0xc); *(f32*)((char*)p + 0x10) = *(f32*)((char*)q + 0x10); }
#pragma push
#pragma opt_common_subs off
O_80085388 *__ct__15TEffStarLight2DFv(O_80085388 *arg0, void *arg1, void *arg2, void *arg3) {
    P2_80085388 p;
    __ct__7TObjectFP7TObject(arg0, arg3);
    arg0->vptr = __vt__15TEffStarLight2D;
    arg0->f0 = lbl_805D292C;
    copy_from__15TEffStarLight2DFPvPv((void*)((u8 *)arg0 + 0x38), (void*)(arg2));
    VecCopy__FP3VecPC3Vec((u8 *)arg0 + 0x2C, arg1);
    TParticleCtrl__sub_803D8D1C(0, (u8 *)arg0 + 0x2C, &p);
    arg0->f24 = p.x;
    arg0->f28 = p.z;
    arg0->f1c = arg0->f24;
    arg0->f20 = arg0->f28;
    return arg0;
}
#pragma pop

}
