#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *__dt__25TWindowSubSymbolChatPartsFv(void *arg0, s16 arg1);
void render__25TWindowSubSymbolChatPartsFv(u8 *arg0);
M2C_UNK TWindowSubComCard__sub_80245F98(void *, s32);
s32 TWindowSubStatusDisp__sub_80244364();
M2C_UNK TWindowSubStatusDisp__sub_8026D790(s32, s32, void *);
void __dl__7TObjectFPv(void *);
void destroy_allocation__20TWindowSubStatusDispFis(void *, int);
void destroy_status_display__20TWindowSubStatusDispFis(void *, int);
void destroy_window__15TWindowAdditionFPvs(void *, int);
M2C_UNK fn_80285274(void *, s32);
M2C_UNK fn_80285314(void *, s32);
M2C_UNK fn_802855C4(void *, s32);
M2C_UNK fn_802857C4(void *, s32);
M2C_UNK forward_render__20TWindowSubStatusDispFPv(s32, s32);

void render__25TWindowSubSymbolChatPartsFv(u8 *arg0) {
    s32 temp_r3;
    u8 temp_r0;

    temp_r3 = TWindowSubStatusDisp__sub_80244364();
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
    TWindowSubStatusDisp__sub_8026D790(M2C_FIELD(arg0, s32 *, 0x8C), temp_r3, arg0 + 0x68);
    fn_80285274(arg0, temp_r3);
    forward_render__20TWindowSubStatusDispFPv(M2C_FIELD(arg0, s32 *, 0x88), temp_r3);
}

extern M2C_UNK __vt__25TWindowSubSymbolChatParts[];

void *__dt__25TWindowSubSymbolChatPartsFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__25TWindowSubSymbolChatParts;
        destroy_allocation__20TWindowSubStatusDispFis(M2C_FIELD(arg0, void **, 0x8C), 1);
        destroy_status_display__20TWindowSubStatusDispFis(M2C_FIELD(arg0, void **, 0x88), 1);
        destroy_window__15TWindowAdditionFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
