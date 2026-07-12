#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

extern "C" {

s32 fn_8028783C(s32 a0 = 0, s32 a1 = 0);
s32 TBoss3Volopt__sub_8022675C(s32 a0 = 0, s32 a1 = 0, s32 a2 = 0, s32 a3 = 0);
s32 TWindowInputNumber__sub_80211608();
s32 TWindowHelpItem__sub_80255DDC(void* p);
void set_flag0_bit20__15TWindowHelpItemFPv(void* p);
s16 TWindowSubStatusDisp__sub_80255DF4(void* p);
s16 TWindowSubStatusDisp__sub_80255DFC(void* p);
s16 TWindowSubStatusDisp__sub_80255E04(void* p);
s16 TWindowSubStatusDisp__sub_80255E0C(void* p);
void set_flag60_bit4__13TWindowSubMagFPv(void* p);

int TWindowSubMag__sub_80255E24(void) { return 0; }
void fn_80255E3C(void *arg0) {
    if (!(M2C_FIELD(arg0, u16 *, 0x60) & 8) && (TWindowInputNumber__sub_80211608() == 0)) {
        M2C_FIELD(arg0, u16 *, 0x60) = (u16) (M2C_FIELD(arg0, u16 *, 0x60) | 4);
    }
}
void fn_80255E88(void *arg0) {
    s32 temp_r3;
    u32 temp;

    temp_r3 = M2C_FIELD(arg0, s32 *, 0x6C);
    if ((temp_r3 < (s32) M2C_FIELD(arg0, s32 *, 0x64)) || (temp_r3 > (s32) M2C_FIELD(arg0, s32 *, 0x68))) {
        TBoss3Volopt__sub_8022675C(0x53F06, 0, 0, 0);
        return;
    }
    TBoss3Volopt__sub_8022675C(0x52D01, 0, 0, 0);
    M2C_FIELD(arg0, u16 *, 0x60) = (u16) (M2C_FIELD(arg0, u16 *, 0x60) | 2);
    temp = (u32) M2C_FIELD(arg0, u32 *, 0x70);
    if (temp != 0U) {
        fn_8028783C(temp, 2);
    }
}

}
