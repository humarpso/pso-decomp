#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void handle_input__9TWindowDDFi(s32 arg0);
M2C_UNK TWindowDD__sub_8034330C(s32);
M2C_UNK TWindowDD__sub_80347B70();
M2C_UNK TWindowDD__sub_80348248();
M2C_UNK TWindowDD__sub_8034827C();
s32 TWindowDD__sub_803482B0(s32);
s32 TWindowDD__sub_80348304(s32);
M2C_UNK TWindowDD__sub_803484C4(s32);

void handle_input__9TWindowDDFi(s32 arg0) {
    TWindowDD__sub_80347B70();
    if (TWindowDD__sub_80348304(arg0) != 0) {
        TWindowDD__sub_8034827C();
        TWindowDD__sub_803484C4(arg0);
        return;
    }
    if (TWindowDD__sub_803482B0(arg0) != 0) {
        TWindowDD__sub_80348248();
        TWindowDD__sub_8034330C(arg0);
    }
}

}
