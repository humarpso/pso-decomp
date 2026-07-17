#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void init_motion__10TButterflyFPv(u8 *arg0);
s32 rand__11TOBoss4RockFv();
M2C_UNK VecCopy__FP3VecPC3Vec(void *, void *);

extern M2C_UNK lbl_80443970;
extern const f32 lbl_805DBAD8;
extern const f32 lbl_805DBADC;
extern const f32 lbl_805DBAE0;

void init_motion__10TButterflyFPv(u8 *arg0) {
    VecCopy__FP3VecPC3Vec(arg0 + 0x90, arg0 + 0x38);
    M2C_FIELD(arg0, f32 *, 0x9C) = (f32) lbl_805DBAD8;
    M2C_FIELD(arg0, f32 *, 0xA0) = (f32) lbl_805DBAD8;
    M2C_FIELD(arg0, f32 *, 0xA4) = (f32) lbl_805DBAD8;
    M2C_FIELD(arg0, f32 *, 0xA8) = (f32) (lbl_805DBADC * (lbl_805DBAE0 * (f32) rand__11TOBoss4RockFv()));
    M2C_FIELD(arg0, f32 *, 0xB0) = (f32) lbl_805DBAD8;
    M2C_FIELD(arg0, s8 *, 0xB8) = 0;
    M2C_FIELD(arg0, s8 *, 0xB9) = 0;
    M2C_FIELD(arg0, s16 *, 0xB4) = 0x1E;
    M2C_FIELD(arg0, s16 *, 0xB6) = 0;
}

}
