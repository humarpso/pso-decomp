#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void TWindowDD__sub_80346F48(void* a0);
void update_selected_id__9TWindowDDFPv(void *arg0);
s32 TWindowDD__sub_80346FC0(s16);
int fn_803467CC(void);

    extern short lbl_805D6E24;
void TWindowDD__sub_80346F48(void* a0) { *(short*)((char*)a0 + 0x1c) = -1; lbl_805D6E24 = -1; fn_803467CC(); }

extern s16 lbl_805D6E24;

void update_selected_id__9TWindowDDFPv(void *arg0) {
    if (((s16) M2C_FIELD(arg0, s16 *, 2) == 1) && (TWindowDD__sub_80346FC0(M2C_FIELD(arg0, s16 *, 4)) != 0)) {
        lbl_805D6E24 = M2C_FIELD(arg0, s16 *, 4);
    }
}

}
