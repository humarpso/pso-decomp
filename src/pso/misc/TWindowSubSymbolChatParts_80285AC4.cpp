#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void render__25TWindowSubSymbolChatPartsFv(u8 *arg0);
s32 fn_80244364();
M2C_UNK TWindowSubComCard__sub_80245F98(void *, s32);
M2C_UNK fn_8026D790(s32, s32, void *);
M2C_UNK fn_80285274(void *, s32);
M2C_UNK fn_80285314(void *, s32);
M2C_UNK fn_802855C4(void *, s32);
M2C_UNK fn_802857C4(void *, s32);
M2C_UNK fn_80288030(s32, s32);

void render__25TWindowSubSymbolChatPartsFv(u8 *arg0) {
    s32 temp_r3;
    u8 temp_r0;

    temp_r3 = fn_80244364();
    TWindowSubComCard__sub_80245F98(arg0, temp_r3);
    temp_r0 = M2C_FIELD(arg0, u8 *, 0x71);
    switch ((s8) temp_r0) {
    case 0:
        fn_802857C4(arg0, temp_r3);
        break;
    case 1:
        fn_802855C4(arg0, temp_r3);
        break;
    case 2:
        fn_80285314(arg0, temp_r3);
        break;
    }
    fn_8026D790(M2C_FIELD(arg0, s32 *, 0x8C), temp_r3, arg0 + 0x68);
    fn_80285274(arg0, temp_r3);
    fn_80288030(M2C_FIELD(arg0, s32 *, 0x88), temp_r3);
}

}
