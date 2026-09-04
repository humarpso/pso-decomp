#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjEneBm5Wolf__sub_800B7FB4(void);
void TObjEneBm5Wolf__sub_800B8020(void);
void release_global_805D5120__14TObjEneBm5WolfFv(void);
void set_state15__14TObjEneBm5WolfFPv(void* p);
void set_state__14TObjEneBm5WolfFPv(void *arg0);
void update_collision_center__14TObjEneBm5WolfFPv(u8 *arg0);
void TLobby__sub_8001FE7C(void*, int);
int TObjEneDD__sub_800BBA18(void*, void*);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *, void *, f32, f32);

extern const f32 TObjEneBm5Wolf__data_805D9DB4;

void update_collision_center__14TObjEneBm5WolfFPv(u8 *arg0) {
    f32 temp_f2;

    M2C_FIELD(arg0, f32 *, 0x2FC) = (f32) M2C_FIELD(arg0, f32 *, 0x38);
    temp_f2 = M2C_FIELD(arg0, f32 *, 0x40C);
    M2C_FIELD(arg0, f32 *, 0x300) = (f32) (temp_f2 + (TObjEneBm5Wolf__data_805D9DB4 + M2C_FIELD(arg0, f32 *, 0x3C)));
    M2C_FIELD(arg0, f32 *, 0x304) = (f32) M2C_FIELD(arg0, f32 *, 0x40);
    VecCopy__FP3VecPC3Vec((void *) (arg0 + 0x74), (void *) (arg0 + 0x2FC), (void *) (arg0), (f32) (TObjEneBm5Wolf__data_805D9DB4), (f32) (temp_f2));
}

void TObjEneBm5Wolf__sub_800B7FB4(void) {  }
void set_state15__14TObjEneBm5WolfFPv(void* p) { if (*(short*)((char*)p + 0x326) != 15) { TObjEneDD__sub_800BBA18(p, (void*)15); } }
void set_state__14TObjEneBm5WolfFPv(void *arg0) {
    s16 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s16 *, 0x326);
    if ((temp_r0 != 0x10) && (temp_r0 != 0x11)) {
        TObjEneDD__sub_800BBA18((void*)(arg0), (void*)(0x10));
    }
}
void TObjEneBm5Wolf__sub_800B8020(void) {  }

extern u32 TObjEneBm5Wolf__data_805D5120;

void release_global_805D5120__14TObjEneBm5WolfFv(void) {
    if ((u32) TObjEneBm5Wolf__data_805D5120 != 0U) {
        TLobby__sub_8001FE7C((void*)TObjEneBm5Wolf__data_805D5120, 1);
        TObjEneBm5Wolf__data_805D5120 = 0U;
    }
}

}
