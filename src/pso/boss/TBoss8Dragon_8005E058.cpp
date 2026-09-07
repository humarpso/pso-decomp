#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredGlobal_8005E17C_lbl_8043797C {
    M2C_UNK value;
    u8 remaining[0x3C];
};

struct RecoveredGlobal_8005E17C_lbl_804FF5C0 {
    M2C_UNK value;
    u8 remaining[0x8];
};

extern "C" {
void get_camera_ctrl__9TObjEneDDFPv(s32, s32);
extern RecoveredGlobal_8005E17C_lbl_8043797C lbl_8043797C;
extern RecoveredGlobal_8005E17C_lbl_804FF5C0 lbl_804FF5C0;
extern s32 lbl_805D4DAC;
extern s32 lbl_805D4DB0;
extern s32 lbl_805D4DB4;
void TBoss8Dragon__sub_8005E17C(void);
}

extern "C" {

typedef char RecoveredGlobal_8005E17C_lbl_8043797C_size[sizeof(RecoveredGlobal_8005E17C_lbl_8043797C) == 0x40 ? 1 : -1];
typedef char RecoveredGlobal_8005E17C_lbl_804FF5C0_size[sizeof(RecoveredGlobal_8005E17C_lbl_804FF5C0) == 0xC ? 1 : -1];
void TBoss8Dragon__sub_8005E17C(void) {
    s32 temp_r4;
    if ((s32) lbl_805D4DAC == (s32) M2C_FIELD(&lbl_8043797C.value, M2C_UNK *, (lbl_805D4DB0 * 4))) {
        temp_r4 = lbl_805D4DB4;
        lbl_805D4DB4 = temp_r4 + 0xC;
        get_camera_ctrl__9TObjEneDDFPv((s32) &lbl_804FF5C0.value, temp_r4);
        lbl_805D4DB0 += 1;
    }
    lbl_805D4DAC += 1;
}

}
