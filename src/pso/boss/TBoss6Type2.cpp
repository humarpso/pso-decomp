#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
void TBoss6Type2__sub_802B9938(f32 *arg0, s8 *arg1, s8 *arg2);
}

extern "C" {

void call_9A24_plus_1__11TBoss6Type2Fi(s32 arg0);
s32 get_phase__11TBoss6Type2FPv(void* p);
void render__11TBoss6Type2Fv(void* p);
int draw__11TBoss6Type2FPv(void*);
int render_body_effects__11TBoss6Type2FPv(void*);
M2C_UNK unpack_path_entry__11TBoss6Type2FPvPv(s32);

void render__11TBoss6Type2Fv(void* p) { render_body_effects__11TBoss6Type2FPv(p); draw__11TBoss6Type2FPv(p); }
s32 get_phase__11TBoss6Type2FPv(void* p) { return *(s32*)((char*)p + 0x37c); }

void TBoss6Type2__sub_802B9938(f32 *arg0, s8 *arg1, s8 *arg2) {
    f32 fa = 0.5f + ((arg0[0] - -10500.0f) / 7.874016f);
    f32 fb = 0.5f + ((arg0[2] - -500.0f) / 7.874016f);
    *arg1 = (s8)fa;
    *arg2 = (s8)fb;
}

void call_9A24_plus_1__11TBoss6Type2Fi(s32 arg0) {
    unpack_path_entry__11TBoss6Type2FPvPv(arg0 + 1);
}

}
