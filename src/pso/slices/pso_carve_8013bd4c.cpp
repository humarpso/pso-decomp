#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))

extern "C" {

void TMainCursor__sub_8013E624(void *, int);
void fn_8013F1A8(void *, int);
void TMainCursor__sub_8013E5E8(void *, int);
void __dt__7TObjectFv(void *, int);
void __dl__7TObjectFPv(void *);
extern M2C_UNK lbl_804A72A8[];

void *TMainCursor__vt0(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804A72A8;
        TMainCursor__sub_8013E624((s8 *)arg0 + 0x60, -1);
        fn_8013F1A8((s8 *)arg0 + 0x4C, -1);
        TMainCursor__sub_8013E5E8((s8 *)arg0 + 0x24, -1);
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

}
