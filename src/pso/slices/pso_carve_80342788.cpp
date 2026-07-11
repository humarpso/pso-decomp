#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK TWindowDD__sub_8034330C(void *);
M2C_UNK TWindowDD__sub_803435A0(void *);
M2C_UNK TWindowDD__sub_80347B70(void *);
M2C_UNK TWindowDD__sub_80347C50();
M2C_UNK TWindowDD__sub_80348248();
M2C_UNK TWindowDD__sub_8034827C();
s32 TWindowDD__sub_803482B0(void *);
s32 TWindowDD__sub_80348304(void *);

void TWindowDD__sub_80342788(void *arg0) {
    TWindowDD__sub_80347C50();
    TWindowDD__sub_80347B70(arg0);
    if (TWindowDD__sub_80348304(arg0) != 0) {
        TWindowDD__sub_8034827C();
        M2C_FIELD(arg0, s32 *, 0xB4) = 0xF;
        TWindowDD__sub_803435A0(arg0);
        return;
    }
    if (TWindowDD__sub_803482B0(arg0) != 0) {
        TWindowDD__sub_80348248();
        TWindowDD__sub_8034330C(arg0);
    }
}

}
