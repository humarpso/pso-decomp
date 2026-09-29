#include "types.h"
struct O_802C4D5C { u8 pad[0x2a8]; f32 v[1]; };

typedef struct Q_802C4D88 { s8 b[4]; } Q_802C4D88;

typedef struct S_802C4D88 {
    u8 pad0[0x224];
    s32 f224;
    s32 a[32];
    f32 fl[32];
    Q_802C4D88 c[32];
    u8 pad3A8[4];
    s32 f3AC;
} S_802C4D88;

typedef struct V_802C4DD0 { s32 x, y; } V_802C4DD0;

typedef struct S_802C4DD0 {
    u8 pad0[0x1C];
    V_802C4DD0 v1C[32];
    V_802C4DD0 v11C[32];
    s32 pad21C[2];
    s32 f224;
} S_802C4DD0;

extern "C" {
extern const f32 lbl_805DE548;
bool TAdPlyChrSelPlateGC__sub_802C4D5C(O_802C4D5C *self, s32 i);
extern const f32 lbl_805DE54C;
void TAdPlyChrSelPlateGC__sub_802C4D88(S_802C4D88 *arg0);
void copy_vec2__28TWindowSubSymbolChatPartsSetFPvPv(void *, void *);
void TAdPlyChrSelPlateGC__sub_802C4DD0(S_802C4DD0 *arg0);
}

extern "C" {

bool TAdPlyChrSelPlateGC__sub_802C4D5C(O_802C4D5C *self, s32 i) {
    return (self->v[i] >= lbl_805DE548) ? true : false;
}
void TAdPlyChrSelPlateGC__sub_802C4D88(S_802C4D88 *arg0) {
    s32 i;
    arg0->f3AC = -1;
    arg0->f224 = 0;
    for (i = 0; i < 0x20; i++) {
        arg0->a[i] = 0;
        arg0->fl[i] = lbl_805DE54C;
        arg0->c[i].b[0] = 0;
        arg0->c[i].b[1] = 0;
        arg0->c[i].b[2] = 0;
        arg0->c[i].b[3] = 0;
    }
}
typedef void (*Fn1_802C4DD0)(void *);
void TAdPlyChrSelPlateGC__sub_802C4DD0(S_802C4DD0 *arg0) {
    if (arg0->f224 < 0x20) {
        ((Fn1_802C4DD0)copy_vec2__28TWindowSubSymbolChatPartsSetFPvPv)(&arg0->v11C[arg0->f224]);
        copy_vec2__28TWindowSubSymbolChatPartsSetFPvPv(&arg0->v1C[arg0->f224], &arg0->v11C[0]);
        arg0->f224 = arg0->f224 + 1;
    }
}

}
