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

struct Ent_8034B050 { s32 *list; s32 count; s32 result; };

extern "C" {
extern RecoveredGlobal_8034B008_lbl_80478B78 lbl_80478B78;
s32 TWindowDD__sub_8034B008(s32 arg0, s32 arg1);
extern G_8034AF68 lbl_804F0070;
extern H_8034AF68 *TWindowDD__ws_data_base;
extern H_8034AF68 *TWindowDD__ws_data_table;
void TWindowDD__sub_8034AF68(void);
extern Ent_8034B050 lbl_804F0040[4];
extern s32 TWindowDD__data_805D6E08;
extern s8 lbl_805D6E90;
extern s32 lbl_805DFD84;
extern s32 lbl_805DFD88;
extern s32 lbl_805DFD8C;
extern s32 lbl_805DFD90;
s32 TWindowDD__sub_8034B050(s32 arg0);
}

extern "C" {

typedef char RecoveredGlobal_8034B008_lbl_80478B78_size[sizeof(RecoveredGlobal_8034B008_lbl_80478B78) == 0x30 ? 1 : -1];

void TWindowDD__sub_8034AF68(void) {
    H_8034AF68 *a = TWindowDD__ws_data_base;
    H_8034AF68 *b;
    s32 i;
    s32 x;
    s32 y;
    if (a == NULL || (b = TWindowDD__ws_data_table) == NULL) {
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
    return M2C_FIELD(((u8 *)(((u8 *)(&lbl_80478B78.value) + (TWindowDD__sub_8034B050((s32)((void *) (arg1))) * 8))) + (arg0 * 4)), s32 *, 0);
}
s32 TWindowDD__sub_8034B050(s32 arg0) {
    s32 r;
    s32 i;
    s32 j;
    Ent_8034B050 *e;
    s32 *list;
    if (lbl_805D6E90 == 0) {
        lbl_804F0040[0].count = lbl_805DFD84;
        lbl_804F0040[1].count = lbl_805DFD88;
        lbl_804F0040[2].count = lbl_805DFD8C;
        lbl_804F0040[3].count = lbl_805DFD90;
        lbl_805D6E90 = 1;
    }
    r = 5;
    for (i = 0; i < 4; i++) {
        e = &lbl_804F0040[i];
        list = e->list;
        for (j = 0; j < e->count; j++) {
            if (arg0 == list[j]) {
                r = e->result;
                break;
            }
        }
        if (r != 5) {
            break;
        }
    }
    if (r == 2 && TWindowDD__data_805D6E08 == 0) {
        r = 1;
    }
    return r;
}

}
