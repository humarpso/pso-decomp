#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct RecoveredGlobal_80256BDC_lbl_804CF918 {
    M2C_UNK value;
    u8 remaining[0x14];
};

struct Bar_80256C00 {
    u8 pad0[0x14];
    f32 scale;
    u8 pad1[4];
    f32 width;
    f32 max;
    f32 target;
};

struct Gauge_802571B4 {
    u16 flags;
    u8 pad2[0x12];
    f32 scale;
    u8 pad18[4];
    f32 cur;
    f32 max;
    f32 val;
};

extern "C" {
extern M2C_UNK lbl_804CF918[];
void TWindowSubStatusDisp__sub_80256BDC(u8 *arg0, s16 arg1);
void TWindowSubStatusDisp__sub_80256C00(struct Bar_80256C00 *bar);
f32 get_random_float__8TObjFishFv(f32);
extern const f32 lbl_805DCE58;
extern const f32 lbl_805DCECC;
void TWindowSubStatusDisp__sub_802571B4(Gauge_802571B4 *g);
}

extern "C" {

void TWindowSubStatusDisp__sub_80256BF8(void);
void TWindowSubStatusDisp__sub_80256BFC(void);
void *destroy__20TWindowSubStatusDispFPvs(void *arg0, s16 arg1);
M2C_UNK __dl__FPv(void *);

extern M2C_UNK lbl_804CF918[];

void *destroy__20TWindowSubStatusDispFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 4) = lbl_804CF918;
        if (arg1 > 0) {
            __dl__FPv(arg0);
        }
    }
    return arg0;
}

typedef char RecoveredGlobal_80256BDC_lbl_804CF918_size[sizeof(RecoveredGlobal_80256BDC_lbl_804CF918) == 0x18 ? 1 : -1];
void TWindowSubStatusDisp__sub_80256BDC(u8 *arg0, s16 arg1) {
    M2C_FIELD(arg0, M2C_UNK **, 4) = &(*(RecoveredGlobal_80256BDC_lbl_804CF918 *)&lbl_804CF918).value;
    M2C_FIELD(arg0, s16 *, 0) = 0;
    M2C_FIELD(arg0, s16 *, 2) = arg1;
}

void TWindowSubStatusDisp__sub_80256BF8(void) {  }
void TWindowSubStatusDisp__sub_80256BFC(void) {  }
void TWindowSubStatusDisp__sub_80256C00(struct Bar_80256C00 *bar) {
    f32 target;
    f32 max = bar->max;
    f32 v;
    if (max <= 0.0f || (target = bar->target) <= 0.0f) {
        v = 0.0f;
    } else {
        v = (target * bar->scale) / max;
    }
    bar->width = v;
}
void TWindowSubStatusDisp__sub_802571B4(Gauge_802571B4 *g) {
    f32 target;
    f32 diff;
    g->flags &= ~4;
    if (g->max <= lbl_805DCE58 || g->val <= lbl_805DCE58) {
        target = 0.0f;
    } else {
        target = (g->val * g->scale) / g->max;
    }
    diff = target - g->cur;
    if (get_random_float__8TObjFishFv(diff) < lbl_805DCECC) {
        g->cur = target;
        g->flags |= 4;
    } else if (diff > lbl_805DCE58) {
        g->cur += lbl_805DCECC;
    } else {
        g->cur -= lbl_805DCECC;
    }
}

}
