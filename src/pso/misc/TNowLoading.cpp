#ifndef PSO_CLASS_PACKAGE
#include "types.h"

extern "C" {

void render__11TNowLoadingFv(void);

void render__11TNowLoadingFv(void) {  }

}
#else
#if PSO_CLASS_PACKAGE == 0x8001D2EC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__dt__11TNowLoadingFv(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
void queue_destruction__7TObjectFv(void *);

extern M2C_UNK __vt__11TNowLoading[];

void *__dt__11TNowLoadingFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__11TNowLoading;
        if (M2C_FIELD(arg0, void **, 0x1C) != NULL) { queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x1C)); M2C_FIELD(arg0, M2C_UNK *, 0x1C) = 0; }
        if (M2C_FIELD(arg0, void **, 0x20) != NULL) { queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x20)); M2C_FIELD(arg0, M2C_UNK *, 0x20) = 0; }
        if (M2C_FIELD(arg0, void **, 0x24) != NULL) { queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x24)); M2C_FIELD(arg0, M2C_UNK *, 0x24) = 0; }
        if (M2C_FIELD(arg0, void **, 0x28) != NULL) { queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x28)); M2C_FIELD(arg0, M2C_UNK *, 0x28) = 0; }
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x8001D4D0
#include "types.h"

extern "C" {

void TNowLoading__sub_8001D4D0(void);
void TNowLoading__sub_8001D4D4(void);

void TNowLoading__sub_8001D4D0(void) {  }
void TNowLoading__sub_8001D4D4(void) {  }

}
#endif
#if PSO_CLASS_PACKAGE == 0x80087660
#include "types.h"

extern "C" {

void copy_vec3__11TBoss4Type2FPvPv(void* p, void* q);
void set_flags__11TBoss4Type2FPvUi(void* p, u32 v);
void copy_pos__11TNowLoadingFPvPv(void* p, void* q);

void copy_pos__11TNowLoadingFPvPv(void* p, void* q) { *(f32*)((char*)p + 0x60) = *(f32*)((char*)q + 0x0); *(f32*)((char*)p + 0x64) = *(f32*)((char*)q + 0x4); *(f32*)((char*)p + 0x68) = *(f32*)((char*)q + 0x8); }

}
#endif
#endif
