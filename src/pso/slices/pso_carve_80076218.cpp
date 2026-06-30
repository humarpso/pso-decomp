#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK queue_destruction__7TObjectFv(void *);
s32 fn_80075008();
f32 TObjTombstone__sub_8007598C(void *);
M2C_UNK TObjTombstone__sub_80075DFC(void *);
s32 TObjTombstone__sub_80076098(void *);
M2C_UNK TObjTombstone__sub_80076190(void *);
extern s32 lbl_805D4E4C;

void TObjTombstone__vt1(void *arg0) {
    if (fn_80075008() != 0) {
        queue_destruction__7TObjectFv(arg0);
        return;
    }
    M2C_FIELD(arg0, f32 *, 0xB0) = TObjTombstone__sub_8007598C(arg0);
    TObjTombstone__sub_80076190(arg0);
    if (TObjTombstone__sub_80076098(arg0) != 0) {
        TObjTombstone__sub_80075DFC(arg0);
    }
    M2C_FIELD(arg0, s32 *, 0x230) = (s32) (M2C_FIELD(arg0, s32 *, 0x230) + 1);
    lbl_805D4E4C = 0;
}

}
