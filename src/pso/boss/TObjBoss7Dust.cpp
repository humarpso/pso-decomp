#ifndef PSO_CLASS_PACKAGE
#include "pso/TObjBoss7Dust.h"

TObjBoss7Dust::~TObjBoss7Dust() {}
#else
#if PSO_CLASS_PACKAGE == 0x802F10FC
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void run_task__13TObjBoss7DustFv(void *arg0);
M2C_UNK queue_destruction__7TObjectFv();

extern const f32 lbl_805DEC68;

void run_task__13TObjBoss7DustFv(void *arg0) {
    M2C_FIELD(arg0, f32 *, 0x2C) = (f32) (M2C_FIELD(arg0, f32 *, 0x2C) - lbl_805DEC68);
    M2C_FIELD(arg0, s32 *, 0x1C) = (s32) (M2C_FIELD(arg0, s32 *, 0x1C) + 1);
    if ((s32) M2C_FIELD(arg0, s32 *, 0x1C) >= 0x5A) {
        queue_destruction__7TObjectFv();
    }
}

}
#endif
#endif
