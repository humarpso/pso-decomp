#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 TRaderMapCore__sub_801F907C(void);
s32 TRaderMapCore__sub_801F90C4(void);
void TRaderMapCore__sub_801F9104(void* p);
s32 TRaderMapCore__sub_801F9058();
s32 TRaderMapCore__sub_8030A808();
s32 fn_801B0EE8();
s32 fn_8030A730();

extern void *lbl_805D5F40;

s32 TRaderMapCore__sub_801F907C(void) {
    if ((void *) lbl_805D5F40 != NULL) {
        if (M2C_FIELD(lbl_805D5F40, u16 *, 4) & 0x10) {
            return 0;
        }
    }
    return 0;
}

s32 TRaderMapCore__sub_801F90C4(void) {
    if ((TRaderMapCore__sub_8030A808() == 1) && (fn_8030A730() == 0)) {
        return 0;
    }
}
void TRaderMapCore__sub_801F9104(void* p) { *(s32*)((char*)p + 0x184) = 0; }

}
