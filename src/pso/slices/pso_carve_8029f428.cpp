#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

M2C_UNK __dt__7TObjectFv(void *, M2C_UNK);
M2C_UNK queue_destruction__7TObjectFv(void *);
M2C_UNK TScene__sub_80203344(M2C_UNK);
M2C_UNK TScene__sub_8020334C(M2C_UNK);
M2C_UNK TScene__sub_80203354(M2C_UNK);
M2C_UNK __dl__7TObjectFPv(void *);
extern M2C_UNK lbl_804DC7C4[];
extern s32 lbl_805D65F0;
extern s16 lbl_805D65F8;
extern s8 lbl_805D65FA;

void *fn_8029F428(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804DC7C4;
        lbl_805D65F8 = 0;
        lbl_805D65FA = 0;
        lbl_805D65F0 = 0;
        if ((u32) M2C_FIELD(arg0, u32 *, 0x20) != 0U) {
            queue_destruction__7TObjectFv(M2C_FIELD(arg0, void **, 0x20));
            M2C_FIELD(arg0, u32 *, 0x20) = 0U;
        }
        TScene__sub_80203354(0);
        TScene__sub_8020334C(0);
        TScene__sub_80203344(0);
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
