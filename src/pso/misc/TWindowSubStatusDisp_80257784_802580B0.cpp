#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

void advance_state__20TWindowSubStatusDispFPv(void *arg0);
void finalize_state__20TWindowSubStatusDispFPv(void *arg0);
void* reset_entry__20TWindowSubStatusDispFPv(void* a0);
int TWindowSubStatusDisp__sub_80256BDC(void);

    extern unsigned char lbl_804CF998[];
    extern const float lbl_805DCEF8;
void* reset_entry__20TWindowSubStatusDispFPv(void* a0) { TWindowSubStatusDisp__sub_80256BDC(); *(int*)((char*)a0 + 0x4) = (int)lbl_804CF998; *(float*)((char*)a0 + 0x8) = lbl_805DCEF8; *(float*)((char*)a0 + 0xc) = lbl_805DCEF8; *(float*)((char*)a0 + 0x10) = lbl_805DCEF8; *(float*)((char*)a0 + 0x14) = lbl_805DCEF8; return a0; }

void advance_state__20TWindowSubStatusDispFPv(void *arg0) {
    if ((u8) M2C_FIELD(arg0, u8 *, 0x1D) == 0x14) {
        M2C_FIELD(arg0, u8 *, 0x1D) = 0x15U;
    }
}

void finalize_state__20TWindowSubStatusDispFPv(void *arg0) {
    if ((u8) M2C_FIELD(arg0, u8 *, 0x1D) == 0x15) {
        M2C_FIELD(arg0, u8 *, 0x1D) = 0x14U;
    }
}

}
