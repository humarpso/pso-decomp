#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TWindowCtrlMain__sub_8024CB7C(void);
void TWindowCtrlMain__sub_8024CB8C(void);
f32 TWindowCtrlMain__sub_8024CB9C(void);
f32 TWindowCtrlMain__sub_8024CBC0(void);
f32 TWindowCtrlMain__sub_8024CBE4(void);
f32 TWindowCtrlMain__sub_8024CC08(void);
void TWindowCtrlMain__sub_8024CC2C(f32 farg0);
void TWindowCtrlMain__sub_8024CC5C(f32 farg0);
void *TWindowCtrlMain__sub_8024CC8C();

    extern int TWindowCtrlMain__data_805D6400;
void TWindowCtrlMain__sub_8024CB7C(void) { TWindowCtrlMain__data_805D6400 = (TWindowCtrlMain__data_805D6400 | 0x1); }

    extern int TWindowCtrlMain__data_805D6400;
void TWindowCtrlMain__sub_8024CB8C(void) { TWindowCtrlMain__data_805D6400 = (TWindowCtrlMain__data_805D6400 & 0xfffffffe); }

f32 TWindowCtrlMain__sub_8024CB9C(void) {
    return M2C_FIELD(TWindowCtrlMain__sub_8024CC8C(), f32 *, 0x18);
}

f32 TWindowCtrlMain__sub_8024CBC0(void) {
    return M2C_FIELD(TWindowCtrlMain__sub_8024CC8C(), f32 *, 0x14);
}

f32 TWindowCtrlMain__sub_8024CBE4(void) {
    return M2C_FIELD(TWindowCtrlMain__sub_8024CC8C(), f32 *, 0x10);
}

f32 TWindowCtrlMain__sub_8024CC08(void) {
    return M2C_FIELD(TWindowCtrlMain__sub_8024CC8C(), f32 *, 0xC);
}

void TWindowCtrlMain__sub_8024CC2C(f32 farg0) {
    M2C_FIELD(TWindowCtrlMain__sub_8024CC8C(), f32 *, 0x18) = farg0;
}

void TWindowCtrlMain__sub_8024CC5C(f32 farg0) {
    M2C_FIELD(TWindowCtrlMain__sub_8024CC8C(), f32 *, 0xC) = farg0;
}

}
