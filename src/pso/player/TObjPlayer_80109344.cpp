#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct W_801093B4 { s32 a; s32 b; s32 c; };

union V_801093B4 { W_801093B4 w; struct { f32 x; f32 y; f32 z; } f; };

extern "C" {
void forward_item_effect_callback__10TObjPlayerFii(M2C_UNK arg0, s32 arg1);
void spawn_weapon_impact_effect(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2, s32 arg3);
extern const f32 lbl_805DAB38;
void spawn_particle_effect(void *, int);
void spawn_hit_particle_trio__10TObjPlayerFPv(W_801093B4 *arg0);
}

extern "C" {

void spawn_heaven_effect__10TObjPlayerFiUiUsi(s32 arg0, u32 arg1, u16 arg2, s32 arg3);
M2C_UNK TItemEffHeaven__ct(u32, s32, u32, u16, s32);
u32 __nw__7TObjectFUl(M2C_UNK);

void spawn_heaven_effect__10TObjPlayerFiUiUsi(s32 arg0, u32 arg1, u16 arg2, s32 arg3) {
    u32 obj;
    if ((arg0 != 0) && ((u16) arg2 != 0xFFFF) && (arg1 != 0U) && ((obj = __nw__7TObjectFUl(0x4C)) != 0U)) {
        TItemEffHeaven__ct(obj, arg0, arg1, arg2, arg3);
    }
}

#pragma push
#pragma opt_propagation off
void spawn_hit_particle_trio__10TObjPlayerFPv(W_801093B4 *arg0) {
    V_801093B4 v;
    s32 c;
    s32 b;
    s32 a;
    a = arg0->a;
    b = arg0->b;
    c = arg0->c;
    v.w.a = a;
    v.w.b = b;
    v.w.c = c;
    spawn_particle_effect(&v, 0x1D0);
    spawn_particle_effect(&v, 0x1D1);
    v.f.y = v.f.y - lbl_805DAB38;
    spawn_particle_effect(&v, 0x1D2);
}
#pragma pop

void forward_item_effect_callback__10TObjPlayerFii(M2C_UNK arg0, s32 arg1) {
    spawn_hit_particle_trio__10TObjPlayerFPv((W_801093B4 *)((void *) (arg1)));
}
void spawn_weapon_impact_effect(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2, s32 arg3) {
    spawn_hit_particle_trio__10TObjPlayerFPv((W_801093B4 *)((void *) (arg3)));
}

}
