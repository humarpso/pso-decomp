#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void call_9A24_plus_1__11TBoss6Type2Fi(s32 arg0);
s32 get_phase__11TBoss6Type2FPv(void* p);
void render__11TBoss6Type2Fv(void* p);
int draw__11TBoss6Type2FPv(void*);
int render_body_effects__11TBoss6Type2FPv(void*);
M2C_UNK unpack_path_entry__11TBoss6Type2FPvPv(s32);

void render__11TBoss6Type2Fv(void* p) { render_body_effects__11TBoss6Type2FPv(p); draw__11TBoss6Type2FPv(p); }
s32 get_phase__11TBoss6Type2FPv(void* p) { return *(s32*)((char*)p + 0x37c); }

void call_9A24_plus_1__11TBoss6Type2Fi(s32 arg0) {
    unpack_path_entry__11TBoss6Type2FPvPv(arg0 + 1);
}

}
