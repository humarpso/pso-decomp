#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TOTrapChainSawEdge__vt20(void *arg0);
void TOTrapChainSawEdge__vt21(void *arg0);
void *__dt__18TOTrapChainSawEdgeFv(void *arg0, s16 arg1);
void __dl__7TObjectFPv(void *);
void __dt__14TOTrapChainSawFv(void *, int);

void TOTrapChainSawEdge__vt21(void *arg0) {
    s32 temp_r0;
    s32 temp_r4;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x104);
    switch (temp_r0) {
    case 0:
        temp_r4 = M2C_FIELD(arg0, s32 *, 0x100);
        if (temp_r4 > 0) {
            M2C_FIELD(arg0, s32 *, 0x100) = (s32) (temp_r4 - 1);
            M2C_FIELD(arg0, s32 *, 0xF8) = (s32) M2C_FIELD(arg0, s32 *, 0xCC);
            M2C_FIELD(arg0, s32 *, 0x104) = 1;
        }
        return;
    case 1:
        M2C_FIELD(arg0, s32 *, 0xD4) = (s32) (M2C_FIELD(arg0, s32 *, 0xD4) + M2C_FIELD(arg0, s32 *, 0xD0));
        return;
    }
}

extern M2C_UNK lbl_80471F80;
extern const f32 lbl_805DE620;

void TOTrapChainSawEdge__vt20(void *arg0) {
    s32 temp_r0;
    s32 temp_r4;
    s32 temp_r4_2;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x104);
    switch (temp_r0) {
    case 0:
        temp_r4 = M2C_FIELD(arg0, s32 *, 0x100);
        if (temp_r4 > 0) {
            M2C_FIELD(arg0, s32 *, 0x100) = (s32) (temp_r4 - 1);
            M2C_FIELD(arg0, s32 *, 0xF8) = (s32) M2C_FIELD(arg0, s32 *, 0xCC);
            M2C_FIELD(arg0, s32 *, 0x104) = 1;
        }
        break;
    case 1:
        M2C_FIELD(arg0, s32 *, 0xD4) = (s32) (M2C_FIELD(arg0, s32 *, 0xD4) + M2C_FIELD(arg0, s32 *, 0xD0));
        if ((s32) M2C_FIELD(arg0, s32 *, 0xD4) < 0) {
            M2C_FIELD(arg0, s32 *, 0xD4) = 0;
            M2C_FIELD(arg0, s32 *, 0xD0) = (s32) ((f32) M2C_FIELD(arg0, s32 *, 0xD0) * lbl_805DE620);
            M2C_FIELD(arg0, s32 *, 0x104) = 0;
        }
        if (M2C_FIELD(arg0, s32 *, 0xD4) > (temp_r4_2 = M2C_FIELD(arg0, s32 *, 0xCC))) {
            M2C_FIELD(arg0, s32 *, 0xD4) = temp_r4_2;
            M2C_FIELD(arg0, s32 *, 0xD0) = (s32) ((f32) M2C_FIELD(arg0, s32 *, 0xD0) * lbl_805DE620);
        }
        break;
    }
}

extern M2C_UNK __vt__18TOTrapChainSawEdge[];

void *__dt__18TOTrapChainSawEdgeFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__18TOTrapChainSawEdge;
        __dt__14TOTrapChainSawFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
