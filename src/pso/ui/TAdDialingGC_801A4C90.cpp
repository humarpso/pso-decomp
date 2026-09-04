#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TAdDialingGC__sub_801A4C90(void);
s32 TAdDialingGC__sub_801A4C9C(void);
void TAdDialingGC__sub_801A4CA4(void *arg0);
void TAdDialingGC__sub_801A4D2C(void);
s32 TAdDialingGC__sub_8007F898(s32, s32);

    extern int lbl_805D6688;
void TAdDialingGC__sub_801A4C90(void) { lbl_805D6688 = 1; }

extern s32 TAdDialingGC__data_805D6C78;

s32 TAdDialingGC__sub_801A4C9C(void) {
    return TAdDialingGC__data_805D6C78;
}

void TAdDialingGC__sub_801A4CA4(void *arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x20);
    switch (temp_r0) {
    case 0:
        TAdDialingGC__sub_8007F898(1, 0);
        return;
    case 1:
        TAdDialingGC__sub_8007F898(0, 0);
        return;
    case 2:
        TAdDialingGC__sub_8007F898(1, 1);
        return;
    case 3:
        TAdDialingGC__sub_8007F898(0, 1);
    case 4:
        return;
    }
}
void TAdDialingGC__sub_801A4D2C(void) {  }

}
