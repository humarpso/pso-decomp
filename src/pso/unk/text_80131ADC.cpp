#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
void save_position__17TWindowSubComCardFPv(void *);
void fn_80131ADC(u8 *arg0, u8 *arg1);
void save_position__17TWindowSubComCardFPv(void *);
void fn_80131B18(u8 *arg0, u8 *arg1);
}

extern "C" {

void fn_80131ADC(u8 *arg0, u8 *arg1) {
    M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x28), f32 *, 0x30) = (f32) M2C_FIELD(arg1, f32 *, 0);
    M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x28), f32 *, 0x34) = (f32) M2C_FIELD(arg1, f32 *, 4);
    save_position__17TWindowSubComCardFPv(M2C_FIELD(arg0, u8 **, 0x28));
}
void fn_80131B18(u8 *arg0, u8 *arg1) {
    M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x24), f32 *, 0x30) = (f32) M2C_FIELD(arg1, f32 *, 0);
    M2C_FIELD(M2C_FIELD(arg0, u8 **, 0x24), f32 *, 0x34) = (f32) M2C_FIELD(arg1, f32 *, 4);
    save_position__17TWindowSubComCardFPv(M2C_FIELD(arg0, u8 **, 0x24));
}

}
