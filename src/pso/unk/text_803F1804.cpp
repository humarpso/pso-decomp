#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {
M2C_UNK SIRegisterPollingHandler(void *);
M2C_UNK Dolphin_SIUnregisterPollingHandler(void *);
extern u32 lbl_805D7938;
u32 fn_803F1864(u32 arg0);
void OSClearContext(void *);
void OSSetCurrentContext(void *);
extern u32 lbl_805D7938;
void fn_803F1804(s32 arg0, void *arg1);
}

extern "C" {

void fn_803F1804(s32 arg0, void *arg1) {
    u8 ctx[0x2C8];
    if (lbl_805D7938 != 0) {
        OSClearContext(ctx);
        OSSetCurrentContext(ctx);
        ((void (*)(void))lbl_805D7938)();
        OSClearContext(ctx);
        OSSetCurrentContext(arg1);
    }
}

u32 fn_803F1864(u32 arg0) {
    u32 temp_r31;
    temp_r31 = lbl_805D7938;
    lbl_805D7938 = arg0;
    if (arg0 != 0U) {
        SIRegisterPollingHandler((void *) (((M2C_UNK *)fn_803F1804)));
    } else {
        Dolphin_SIUnregisterPollingHandler((void *) (((M2C_UNK *)fn_803F1804)));
    }
    return temp_r31;
}

}
