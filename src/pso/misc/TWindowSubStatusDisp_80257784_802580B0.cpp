#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_80258100_lbl_804CF998 {
    M2C_UNK value;
    u8 remaining[0x14];
};

extern "C" {
int TWindowSubStatusDisp__sub_80256BDC(void *, s16);
extern unsigned char lbl_804CF998[];
u8 *TWindowSubStatusDisp__sub_80258100(u8 *arg0, u8 *arg1, s16 arg2);
}

extern "C" {

void advance_state__20TWindowSubStatusDispFPv(void *arg0);
void finalize_state__20TWindowSubStatusDispFPv(void *arg0);
void* reset_entry__20TWindowSubStatusDispFPv(void* a0, s16 _w1);

    extern unsigned char lbl_804CF998[];
    extern const float lbl_805DCEF8;
void* reset_entry__20TWindowSubStatusDispFPv(void* a0, s16 _w1) { TWindowSubStatusDisp__sub_80256BDC((void *)(a0), _w1); *(int*)((char*)a0 + 0x4) = (int)lbl_804CF998; *(float*)((char*)a0 + 0x8) = lbl_805DCEF8; *(float*)((char*)a0 + 0xc) = lbl_805DCEF8; *(float*)((char*)a0 + 0x10) = lbl_805DCEF8; *(float*)((char*)a0 + 0x14) = lbl_805DCEF8; return a0; }

typedef char RecoveredGlobal_80258100_lbl_804CF998_size[sizeof(RecoveredGlobal_80258100_lbl_804CF998) == 0x18 ? 1 : -1];
u8 *TWindowSubStatusDisp__sub_80258100(u8 *arg0, u8 *arg1, s16 arg2) {
    TWindowSubStatusDisp__sub_80256BDC((void *)(arg0), arg2);
    M2C_FIELD(arg0, M2C_UNK **, 4) = &(*(RecoveredGlobal_80258100_lbl_804CF998 *)&lbl_804CF998).value;
    M2C_FIELD(arg0, f32 *, 8) = (f32) M2C_FIELD(arg1, f32 *, 4);
    M2C_FIELD(arg0, f32 *, 0xC) = (f32) M2C_FIELD(arg1, f32 *, 8);
    M2C_FIELD(arg0, f32 *, 0x10) = (f32) M2C_FIELD(arg1, f32 *, 0xC);
    M2C_FIELD(arg0, f32 *, 0x14) = (f32) M2C_FIELD(arg1, f32 *, 0x10);
    return arg0;
}

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
