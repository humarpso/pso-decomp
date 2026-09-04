#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void render_and_update_effects__10TObjPlayerFPv(void* p);
void render_effects__10TObjPlayerFPv(void* p);
void snapshot_position__10TObjPlayerFPv(u8 *arg0);
int TOHangerMachine01__sub_803D9C00(void*);
int TObjFish__sub_800543A4(void*);
int TObjPlayer__sub_800531C8(void*);
int TObjPlayer__sub_80053E40(void*);
int TObjPlayer__sub_803D9214(void*, void*);
int TObjPlayer__sub_803D9B2C(void);
int TObjPlayer__sub_803D9B78(void);
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);
int end_effect_render__13TParticleCtrlFv(void);
int toggle_particle_effect__10TObjPlayerFv(void*);

void render_effects__10TObjPlayerFPv(void* p) { toggle_particle_effect__10TObjPlayerFv(p); TObjPlayer__sub_803D9B2C(); TOHangerMachine01__sub_803D9C00((char*)p + 0x38); TObjPlayer__sub_803D9214((void*)0, *(void**)((char*)p + 0x60)); TObjFish__sub_800543A4(p); TObjPlayer__sub_803D9B78(); end_effect_render__13TParticleCtrlFv(); }

extern const f32 lbl_805D8B24;

void snapshot_position__10TObjPlayerFPv(u8 *arg0) {
    VecCopy__FP3VecPC3Vec(arg0 + 0x2FC, arg0 + 0x38);
    M2C_FIELD(arg0, f32 *, 0x300) = (f32) (M2C_FIELD(arg0, f32 *, 0x300) + lbl_805D8B24);
}

void render_and_update_effects__10TObjPlayerFPv(void* p) { TObjPlayer__sub_80053E40(p); render_effects__10TObjPlayerFPv((void*)(p)); TObjPlayer__sub_800531C8(p); }

}
