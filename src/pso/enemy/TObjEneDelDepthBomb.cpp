#ifndef PSO_CLASS_PACKAGE
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__dt__19TObjEneDelDepthBombFv(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void destroy_motion_object__10TObjPlayerFPvs(void *, int);

extern M2C_UNK __vt__19TObjEneDelDepthBomb[];

void *__dt__19TObjEneDelDepthBombFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__19TObjEneDelDepthBomb;
        destroy_motion_object__10TObjPlayerFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#else
#if PSO_CLASS_PACKAGE == 0x803134FC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void * create__19TObjEneDelDepthBombFPvPvPvPv(void *arg0, void *arg1, void *arg2, void *arg3);
void *TObjEneDelDepthBomb__ct(void *, void *, void *, void *, void *);
void *__nw__7TObjectFUl(int);

void * create__19TObjEneDelDepthBombFPvPvPvPv(void *arg0, void *arg1, void *arg2, void *arg3) {
    void *o;
    o = __nw__7TObjectFUl(0x358);
    if (o != NULL) {
        o = TObjEneDelDepthBomb__ct(o, arg0, arg1, arg2, arg3);
    }
    return o;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x80316244
#include "types.h"

extern "C" {

f32 get_depth_radius__19TObjEneDelDepthBombFPv(void* p);
int get_flag_bit4__15TObjEneDelDepthFPv(void* p);
s32 get_type__15TObjEneDelDepthFPv(void* p);

f32 get_depth_radius__19TObjEneDelDepthBombFPv(void* p) { return *(f32*)((char*)p + 0x390); }

}
#endif
#endif
