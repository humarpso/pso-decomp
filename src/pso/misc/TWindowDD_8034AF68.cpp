#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredGlobal_8034B008_lbl_80478B78 {
    M2C_UNK value;
    u8 remaining[0x2C];
};

struct H_8034AF68 { u32 f0; s32 f4; };

struct G_8034AF68 {
    s16 ids[16];
    H_8034AF68 *a;
    H_8034AF68 *b;
    u32 a0;
    u32 b0;
    s32 n;
};

extern "C" {
s32 TWindowDD__sub_8034B050(void *);
extern RecoveredGlobal_8034B008_lbl_80478B78 lbl_80478B78;
s32 TWindowDD__sub_8034B008(s32 arg0, s32 arg1);
extern G_8034AF68 lbl_804F0070;
extern H_8034AF68 *TWindowDD__data_805D6E2C;
extern H_8034AF68 *TWindowDD__data_805D6E30;
void TWindowDD__sub_8034AF68(void);
}

extern "C" {

typedef char RecoveredGlobal_8034B008_lbl_80478B78_size[sizeof(RecoveredGlobal_8034B008_lbl_80478B78) == 0x30 ? 1 : -1];

void TWindowDD__sub_8034AF68(void) {
    H_8034AF68 *a = TWindowDD__data_805D6E2C;
    H_8034AF68 *b;
    s32 i;
    s32 x;
    s32 y;
    if (a == NULL || (b = TWindowDD__data_805D6E30) == NULL) {
        return;
    }
    for (i = 0; i < 16; i++) {
        lbl_804F0070.ids[i] = -1;
    }
    lbl_804F0070.a = a;
    lbl_804F0070.b = b;
    lbl_804F0070.a0 = a->f0;
    lbl_804F0070.b0 = b->f0;
    if (lbl_804F0070.a0 == 0 || lbl_804F0070.b0 == 0) {
        return;
    }
    x = a->f4;
    y = b->f4;
    if (x < 1 || y < 1 || x != y) {
        return;
    }
    lbl_804F0070.n = x;
}

s32 TWindowDD__sub_8034B008(s32 arg0, s32 arg1) {
    return M2C_FIELD(((u8 *)(((u8 *)(&lbl_80478B78.value) + (TWindowDD__sub_8034B050((void *) (arg1)) * 8))) + (arg0 * 4)), s32 *, 0);
}

}
