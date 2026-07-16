#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

f32 TLobby__sub_803A2CEC(void);
f32 TLobby__sub_803A2D10(void);
f32 TLobby__sub_803A2D34(void);
f32 TLobby__sub_803A2D58(void);
f32 TLobby__sub_803A2D7C(void);
f64 TAdEndText__sub_803A2CCC();
f64 TLobby__sub_803A2410();
f64 TWindowSubComCard__sub_803A24E4();
f64 fn_803A2AFC();
f64 fn_803A2BD4();

f32 TLobby__sub_803A2CEC(void) {
    return (f32) TWindowSubComCard__sub_803A24E4();
}

f32 TLobby__sub_803A2D10(void) {
    return (f32) TAdEndText__sub_803A2CCC();
}

f32 TLobby__sub_803A2D34(void) {
    return (f32) fn_803A2BD4();
}

f32 TLobby__sub_803A2D58(void) {
    return (f32) fn_803A2AFC();
}

f32 TLobby__sub_803A2D7C(void) {
    return (f32) TLobby__sub_803A2410();
}

}
