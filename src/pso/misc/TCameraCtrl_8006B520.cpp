#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void *TCameraCtrl__sub_8006B520(void *arg0, s16 arg1);
M2C_UNK TCameraCtrl__sub_80069DA8();
M2C_UNK __dl__7TObjectFPv(void *);
M2C_UNK __dt__7TObjectFv(void *, M2C_UNK);

extern const M2C_UNK lbl_80488AD8[];
extern s32 TCameraCtrl__data_805D4E10;

void *TCameraCtrl__sub_8006B520(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, const M2C_UNK **, 0x18) = lbl_80488AD8;
        TCameraCtrl__sub_80069DA8();
        TCameraCtrl__data_805D4E10 = 0;
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
