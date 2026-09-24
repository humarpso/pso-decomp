#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct T_8031C250 { u8 pad[0x326]; s16 state; };

extern "C" {
extern u8 *TObjEneRecon__data_805D6AFC;
f32 TObjEneRecon__sub_8031C2BC(void);
f32 TObjEneRecon__sub_8031C2C8(void);
f32 TObjEneRecon__sub_8031C2D4(void);
extern u8 *TObjEneRecon__data_805D6AFC;
extern const f32 lbl_805DF3C8;
s32 TObjEneRecon__sub_8031C274(void);
u8 TObjEneRecon__sub_8031C250(T_8031C250 *self);
}

extern "C" {

u8 TObjEneRecon__sub_8031C250(T_8031C250 *self) {
    return self->state == 8 || self->state == 7;
}

s32 TObjEneRecon__sub_8031C274(void) {
    return (s32) (lbl_805DF3C8 * (f32) M2C_FIELD(TObjEneRecon__data_805D6AFC, s32 *, 0x18));
}

f32 TObjEneRecon__sub_8031C2BC(void) {
    return M2C_FIELD(TObjEneRecon__data_805D6AFC, f32 *, 0xC);
}
f32 TObjEneRecon__sub_8031C2C8(void) {
    return M2C_FIELD(TObjEneRecon__data_805D6AFC, f32 *, 8);
}
f32 TObjEneRecon__sub_8031C2D4(void) {
    return M2C_FIELD(TObjEneRecon__data_805D6AFC, f32 *, 4);
}

}
