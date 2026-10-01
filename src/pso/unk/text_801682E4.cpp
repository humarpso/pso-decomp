#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
extern "C" {
s32 get_global_state__14TOKeyMachine01Fv(void);
s32 TOTrapAncient01__sub_80226578(s32, void *, void *, s32, s32);
void fn_80168398(u8 *arg0);
}

extern "C" {

void fn_80168398(u8 *arg0) {
    s32 state = get_global_state__14TOKeyMachine01Fv();
    s32 id = 0;
    switch (*(s16 *)(arg0 + 0x326)) {
    case 2:
        switch (state) {
        case 0x13:
        case 0x14:
            id = 0x4BC11;
            break;
        case 0x15:
        case 0x16:
            id = 0x4004BC11;
            break;
        default:
            id = 0x43C18;
            break;
        }
        break;
    case 1:
        switch (state) {
        case 0x13:
        case 0x14:
            id = 0x4B212;
            break;
        case 0x15:
        case 0x16:
            id = 0x4004B212;
            break;
        default:
            id = 0x4321A;
            break;
        }
        break;
    }
    if (id != 0) {
        TOTrapAncient01__sub_80226578(id, arg0, arg0 + 0x38, 0, 0);
    }
}

}
