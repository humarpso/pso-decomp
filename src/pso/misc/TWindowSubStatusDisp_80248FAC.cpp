#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void *TWindowSubStatusDisp__sub_80248FAC(void *arg0, s16 arg1);
void destroy_item_list_resources__20TWindowSubStatusDispFPvs(void *, int);
void __dl__7TObjectFPv(void *);

extern M2C_UNK lbl_804CE7E8[];

void *TWindowSubStatusDisp__sub_80248FAC(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804CE7E8;
        destroy_item_list_resources__20TWindowSubStatusDispFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
