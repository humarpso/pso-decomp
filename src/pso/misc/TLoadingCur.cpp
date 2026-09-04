#ifndef PSO_CLASS_PACKAGE
#include "types.h"

extern "C" {

int render__11TLoadingCurFv(void* p);

int TLoadingCur__sub_8001CCD4(void*);

int render__11TLoadingCurFv(void* p) { return TLoadingCur__sub_8001CCD4(p); }

}
#else
#if PSO_CLASS_PACKAGE == 0x8001D02C
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__dt__11TLoadingCurFv(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
void queue_destruction__7TObjectFv(void *);

extern M2C_UNK __vt__11TLoadingCur[];

void *__dt__11TLoadingCurFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__11TLoadingCur;
        if (M2C_FIELD(arg0, void **, 0x1C) != NULL) { queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x1C)); M2C_FIELD(arg0, M2C_UNK *, 0x1C) = 0; }
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x801A6DE0
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

u8 is_flag_set__11TLoadingCurFPv(void *arg0);

s32 pack_color_bits__13TRaderMapCoreFii();

u8 is_flag_set__11TLoadingCurFPv(void *arg0) {
    return (u8) ((M2C_FIELD(arg0, s32 *, 0x48) & pack_color_bits__13TRaderMapCoreFii()) != 0);
}

}
#endif
#endif
