#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TObjGrass__vt34(void *arg0);
s32 TObjGrass__vt37(void *arg0);
s32 TObjPlayer__sub_80016D78();
s32 TObjPlayer__sub_80016FF8();

void obj_clearFlags30(void *, u32);

s32 TObjGrass__vt37(void *arg0) {
    if (TObjPlayer__sub_80016D78() != 0) {
        switch (M2C_FIELD(arg0, s16 *, 0x326)) {
        case 0:
            M2C_FIELD(arg0, s32 *, 0x3AC) = 0;
            M2C_FIELD(arg0, s16 *, 0x328) = 2;
            M2C_FIELD(arg0, s16 *, 0xB8) = 1;
            obj_clearFlags30(arg0, 0x04040000);
        }
        return 1;
    }
    return 0;
}

void obj_clearFlags30(void *, u32);

s32 TObjGrass__vt34(void *arg0) {
    if (TObjPlayer__sub_80016FF8() != 0) {
        switch (M2C_FIELD(arg0, s16 *, 0x326)) {
        case 0:
            M2C_FIELD(arg0, s32 *, 0x3AC) = 0;
            M2C_FIELD(arg0, s16 *, 0x328) = 2;
            M2C_FIELD(arg0, s16 *, 0xB8) = 1;
            obj_clearFlags30(arg0, 0x04040000);
        }
        return 1;
    }
    return 0;
}

}
