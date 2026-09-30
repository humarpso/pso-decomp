#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Obj_8003C374 { u8 pad[0x28]; s32 start; s32 q[6]; };

struct Obj_8003C2A0 { u8 pad[0x2c]; s32 q[6]; s32 idx; };

struct S_8003C2E4 {
    u8 pad0[0x28];
    s32 f28;
    s32 t[6];
};

extern "C" {
extern s32 lbl_804834BC[];
extern s32 lbl_804834D4[];
void TObjBoss2Tunnel__sub_8003C374(Obj_8003C374 *self);
extern s32 lbl_80483550[];
void TObjBoss2Tunnel__sub_8003C2A0(Obj_8003C2A0 *self);
extern s32 lbl_804834D4[];
void TObjBoss2Tunnel__sub_8003C2E4(S_8003C2E4 *o);
}

extern "C" {

void enable_fog__15TObjBoss2TunnelFPv(void *arg0);
void enable_fog__15TObjBoss2TunnelFv(void);
M2C_UNK update_all__8TFogCtrlFii(s32, M2C_UNK);

extern s32 TObjBoss2Tunnel__data_805D4C00;

void enable_fog__15TObjBoss2TunnelFPv(void *arg0) {
    update_all__8TFogCtrlFii((s32)(M2C_FIELD(arg0, s32 *, 0xB0)), (M2C_UNK)(1));
    TObjBoss2Tunnel__data_805D4C00 |= 4;
}

extern s32 TObjBoss2Tunnel__data_805D4C00;

void enable_fog__15TObjBoss2TunnelFv(void) {
    update_all__8TFogCtrlFii((s32)(0xB), (M2C_UNK)(1));
    TObjBoss2Tunnel__data_805D4C00 |= 2;
}

void TObjBoss2Tunnel__sub_8003C2A0(Obj_8003C2A0 *self) {
    s32 i;
    for (i = 0; i < 5; i++) {
        self->q[i] = self->q[i + 1];
    }
    self->q[5] = lbl_80483550[self->idx++];
}

void TObjBoss2Tunnel__sub_8003C2E4(S_8003C2E4 *o) {
    s32 idx = o->f28;
    s32 n = 6;
    s32 i;
    s32 j;
    if (idx + 6 > 0x1F) {
        n = 0x1F - idx;
    }
    s32 k = idx;
    for (i = 0; i < n; i++, k++) {
        o->t[i] = lbl_804834D4[k];
    }
    for (j = 0; i < 6; i++, j++) {
        o->t[i] = lbl_804834D4[j];
    }
}

void TObjBoss2Tunnel__sub_8003C374(Obj_8003C374 *self) {
    s32 k = self->start;
    s32 n = 6 - k;
    s32 i;
    s32 j;
    for (i = 0; i < n; i++) {
        self->q[i] = lbl_804834BC[k++];
    }
    for (j = 0; i < 6; i++, j++) {
        self->q[i] = lbl_804834D4[j];
    }
}

}
