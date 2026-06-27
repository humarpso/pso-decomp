#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TObjEneRecon__sub_8031C2E0(void *arg0, s32 arg1);

M2C_UNK queue_destruction__7TObjectFv();
u32 TPhotonMylla__sub_80154CB4(u16);
M2C_UNK fn_8031EF14(u32, void *);

void TObjEneRecon__sub_8031C2E0(void *arg0, s32 arg1) {
    u32 temp;
    switch (arg1) {
    case 4:
        M2C_FIELD(arg0, s32 *, 0x444) = (s32) (M2C_FIELD(arg0, s32 *, 0x444) | 1);
        M2C_FIELD(arg0, s32 *, 0x444) = (s32) (M2C_FIELD(arg0, s32 *, 0x444) & 0xFFFFFFFD);
        if ((temp = TPhotonMylla__sub_80154CB4(M2C_FIELD(arg0, u16 *, 0x434))) != 0U) {
            fn_8031EF14(temp, arg0);
        }
        break;
    case 5:
    case 0:
        break;
    case 3:
        queue_destruction__7TObjectFv();
        break;
    }
}

}
