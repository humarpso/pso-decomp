#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void fn_8013F1A8(void *, int);
void TPlyPhotonChair__sub_80143888(void *, int);
void fn_801A25B4(void *, int);
void __dl__7TObjectFPv(void *);
extern M2C_UNK lbl_804F1CC8[];

void *TPlyPhotonChair__vt0(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804F1CC8;
        fn_8013F1A8((s8 *)arg0 + 0xD0, -1);
        TPlyPhotonChair__sub_80143888((s8 *)arg0 + 0xB4, -1);
        TPlyPhotonChair__sub_80143888((s8 *)arg0 + 0x98, -1);
        fn_801A25B4(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
