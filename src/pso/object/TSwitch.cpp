#ifndef PSO_CLASS_PACKAGE
#include "pso/TSwitch.h"

TSwitch::~TSwitch() {}
#else
#if PSO_CLASS_PACKAGE == 0x802291F4
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

u8 TSwitch__sub_802291F4(void);
s32 TSwitch__sub_80229164();

u8 TSwitch__sub_802291F4(void) {
    return (u8) (TSwitch__sub_80229164() != 0);
}

}
#endif
#if PSO_CLASS_PACKAGE == 0x802293D8
#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *__ct__7TSwitchFv(void *arg0);
void __ct__7TObjectFP7TObject(void *);

extern M2C_UNK __vt__7TSwitch[];
extern void *lbl_805D3728;

void *__ct__7TSwitchFv(void *arg0) {
    __ct__7TObjectFP7TObject(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__7TSwitch;
    M2C_FIELD(arg0, void **, 0x0) = lbl_805D3728;
    M2C_FIELD(arg0, u8 *, 0x1C) = 0;
    M2C_FIELD(arg0, u32 *, 0x20) = 0;
    M2C_FIELD(arg0, u32 *, 0x24) = 0;
    return arg0;
}

}
#endif
#endif
