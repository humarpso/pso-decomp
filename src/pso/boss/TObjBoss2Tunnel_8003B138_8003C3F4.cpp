#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Tunnel_8003C45C {
    s32 name;
    u8 pad4[0x18 - 4];
    void *vt;
    f32 f1C;
    f32 f20;
    s32 i24;
    s32 i28;
    u8 pad2C[0x44 - 0x2C];
    s32 i44;
    u8 pad48[4];
    f32 f4C;
    f32 f50;
    f32 f54;
    s32 i58;
    s32 i5C;
    f32 f60;
    s32 i64;
    u8 sub68[0x94 - 0x68];
    f32 f94;
    f32 f98;
    s32 i9C;
    s32 iA0;
    s32 iA4;
    s32 iA8;
    f32 fAC;
    s32 iB0;
    s32 iB4;
    s32 iB8;
    s32 iBC;
    void *splash[2];
    s32 c8[4];
    s32 d8;
};

extern "C" {
void queue_destruction__7TObjectFv(void *);
extern s32 *lbl_805D4C04;
extern s32 *lbl_805D4C08;
extern f32 TObjBoss2Tunnel__data_805D8614;
extern const f32 lbl_805D8654;
void TObjBoss2Tunnel__sub_8003C6D0(u8 *arg0);
extern s32 TObjBoss2Tunnel__data_805D4C00;
void TObjBoss2Tunnel__sub_8003C5F8(void);
extern s32 TObjBoss2Tunnel__data_805D4C00;
void TObjBoss2Tunnel__sub_8003C610(void);
u8 *TObjBoss2RaftSplash__ct(u8 *arg0, u8 *arg1, u8 *arg2, u8 *arg3, f32 *arg4);
void TObjBoss2Tunnel__sub_8003C374(Tunnel_8003C45C *self);
void reset_floats__15TObjBoss2TunnelFPv(void *a0);
s32 reset_floats__15TObjBoss2TunnelFi(s32 arg0);
void *__nw__7TObjectFUl(int);
void __ct__7TObjectFP7TObject(void *);
extern u8 lbl_80435E90[];
extern u8 lbl_80483578[];
extern M2C_UNK __vt__15TObjBoss2Tunnel[];
extern s32 lbl_805D2708;
extern s32 TObjBoss2Tunnel__data_805D4C00;
extern const f32 TObjBoss2Tunnel__data_805D85E0;
extern f32 TObjBoss2Tunnel__data_805D8614;
void *TObjBoss2Tunnel__ct(void *arg0, void *arg1);
}

extern "C" {

void TObjBoss2Tunnel__sub_8003C648(void);
void *__dt__15TObjBoss2TunnelFv(void *arg0, s16 arg1);
void *__dt_deleting__15TObjBoss2TunnelFPvs(void *arg0, s16 arg1);
void clear_global_flag_3000__15TObjBoss2TunnelFv(void);
void clear_target_flags__15TObjBoss2TunnelFv(void);
void *create__15TObjBoss2TunnelFv(void);
void *init__15TObjBoss2TunnelFPv(void *arg0);
s32 is_active__15TObjBoss2TunnelFv(void);
void set_global_flag_100__15TObjBoss2TunnelFv(void);
void set_global_flag_200__15TObjBoss2TunnelFv(void);
void set_global_flag_400__15TObjBoss2TunnelFv(void);
void set_global_flag_800__15TObjBoss2TunnelFv(void);
void __ct__7TObjectFP7TObject(void *);
void __dl__7TObjectFPv(void *);
void __dt__7TObjectFv(void *, int);
void *__nw__7TObjectFUl(int);
void dt__15TObjBoss2TunnelFis(void *, int);

extern M2C_UNK __vt__15TObjBoss2Tunnel[];

void *__dt__15TObjBoss2TunnelFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__15TObjBoss2Tunnel;
        dt__15TObjBoss2TunnelFis((s8 *)arg0 + 0x68, -1);
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern s32 TObjBoss2Tunnel__data_805D4C00;

void *TObjBoss2Tunnel__ct(void *arg0, void *arg1) {
    Tunnel_8003C45C *self = (Tunnel_8003C45C *)arg0;
    s32 i;
    s32 j;
    __ct__7TObjectFP7TObject(arg0);
    self->vt = ((s32 *)&__vt__15TObjBoss2Tunnel);
    reset_floats__15TObjBoss2TunnelFi((s32)self->sub68);
    self->name = lbl_805D2708;
    self->i24 = 0;
    TObjBoss2Tunnel__data_805D4C00 = 0;
    self->f1C = TObjBoss2Tunnel__data_805D85E0;
    self->f20 = TObjBoss2Tunnel__data_805D85E0;
    self->i28 = 0;
    TObjBoss2Tunnel__sub_8003C374(self);
    self->i5C = 0;
    self->f60 = TObjBoss2Tunnel__data_805D85E0;
    self->i44 = 0;
    self->f4C = TObjBoss2Tunnel__data_805D85E0;
    self->f50 = TObjBoss2Tunnel__data_805D85E0;
    self->f54 = TObjBoss2Tunnel__data_805D85E0;
    self->i58 = 0;
    self->i64 = 0;
    reset_floats__15TObjBoss2TunnelFPv(self->sub68);
    self->f94 = TObjBoss2Tunnel__data_805D8614;
    self->f98 = TObjBoss2Tunnel__data_805D85E0;
    self->iB0 = 0x21;
    self->iB4 = 0;
    self->iB8 = 0;
    self->iBC = 0;
    self->i9C = 0;
    self->iA4 = 0;
    self->iA0 = 0;
    self->iA8 = 0;
    self->fAC = TObjBoss2Tunnel__data_805D85E0;
    for (i = 0; i < 2; i++) {
        u8 *o = (u8 *)__nw__7TObjectFUl(0x40);
        if (o != NULL) {
            o = TObjBoss2RaftSplash__ct(o, (u8 *)self, lbl_80483578 + i * 0xC, lbl_80435E90 + i * 0xC, &self->f20);
        }
        self->splash[i] = o;
    }
    for (j = 0; j < 4; j++) {
        self->c8[j] = 0;
    }
    self->d8 = 0xA;
    return self;
}

void set_global_flag_200__15TObjBoss2TunnelFv(void) {
    TObjBoss2Tunnel__data_805D4C00 |= 0x200;
}

extern s32 TObjBoss2Tunnel__data_805D4C00;

void set_global_flag_100__15TObjBoss2TunnelFv(void) {
    TObjBoss2Tunnel__data_805D4C00 |= 0x100;
}

extern s32 TObjBoss2Tunnel__data_805D4C00;

s32 is_active__15TObjBoss2TunnelFv(void) {
    return TObjBoss2Tunnel__data_805D4C00 & 1;
}

extern s32 TObjBoss2Tunnel__data_805D4C00;

void clear_global_flag_3000__15TObjBoss2TunnelFv(void) {
    TObjBoss2Tunnel__data_805D4C00 &= 0xFFFFCFFF;
}

extern s32 TObjBoss2Tunnel__data_805D4C00;

void TObjBoss2Tunnel__sub_8003C5F8(void) {
    (*(u32 *)&TObjBoss2Tunnel__data_805D4C00) |= 0x2000;
    (*(u32 *)&TObjBoss2Tunnel__data_805D4C00) &= ~0x1000;
}

void TObjBoss2Tunnel__sub_8003C610(void) {
    (*(u32 *)&TObjBoss2Tunnel__data_805D4C00) |= 0x1000;
    (*(u32 *)&TObjBoss2Tunnel__data_805D4C00) &= ~0x2000;
}

void set_global_flag_800__15TObjBoss2TunnelFv(void) {
    TObjBoss2Tunnel__data_805D4C00 |= 0x800;
}

extern s32 TObjBoss2Tunnel__data_805D4C00;

void set_global_flag_400__15TObjBoss2TunnelFv(void) {
    TObjBoss2Tunnel__data_805D4C00 |= 0x400;
}

void TObjBoss2Tunnel__sub_8003C648(void) {  }

extern void *tl_02;

void *create__15TObjBoss2TunnelFv(void) {
    void *o = __nw__7TObjectFUl(0xDC);
    if (o != NULL) {
        o = TObjBoss2Tunnel__ct((void *)(o), (void *)(tl_02));
    }
    return o;
}

extern void *lbl_805D4BE8;
extern s32 TObjBoss2Tunnel__data_805D4C00;
extern s32 *lbl_805D4C04;
extern s32 *lbl_805D4C08;

void clear_target_flags__15TObjBoss2TunnelFv(void) {
    s32 *temp_r3;
    s32 *temp_r3_2;

    TObjBoss2Tunnel__data_805D4C00 = 0;
    temp_r3 = M2C_FIELD(M2C_FIELD(M2C_FIELD(M2C_FIELD(lbl_805D4BE8, void **, 0x42C), void **, 0xA8), void **, 0x2C), s32 **, 0x30);
    lbl_805D4C08 = temp_r3;
    temp_r3_2 = M2C_FIELD(temp_r3, s32 **, 0x30);
    lbl_805D4C04 = temp_r3_2;
    *temp_r3_2 &= 0xFFFFFFFE;
    *lbl_805D4C08 &= 0xFFFFFFFE;
}

extern M2C_UNK lbl_804835D8[];

#pragma push
#pragma opt_common_subs off
void TObjBoss2Tunnel__sub_8003C6D0(u8 *arg0) {
    f32 temp_f1;
    M2C_FIELD(arg0, s32 *, 0x1C) = (s32) (M2C_FIELD(arg0, s32 *, 0x1C) + 1);
    if ((s32) M2C_FIELD(arg0, s32 *, 0x1C) > 0x1E) {
        M2C_FIELD(arg0, f32 *, 0x20) = (f32) (M2C_FIELD(arg0, f32 *, 0x20) + TObjBoss2Tunnel__data_805D8614);
        temp_f1 = M2C_FIELD(arg0, f32 *, 0x20);
        if (temp_f1 > lbl_805D8654) {
            M2C_FIELD(arg0, f32 *, 0x20) = (f32) lbl_805D8654;
            queue_destruction__7TObjectFv(arg0);
            return;
        }
        M2C_FIELD((*(u8 * *)&lbl_805D4C04), f32 *, 8) = (f32) -temp_f1;
        M2C_FIELD((*(u8 * *)&lbl_805D4C08), f32 *, 8) = (f32) M2C_FIELD(arg0, f32 *, 0x20);
    }
}
#pragma pop

void *__dt_deleting__15TObjBoss2TunnelFPvs(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804835D8;
        __dt__7TObjectFv(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}

extern M2C_UNK lbl_804835D8[];
extern const f32 TObjBoss2Tunnel__data_805D85E0;

void *init__15TObjBoss2TunnelFPv(void *arg0) {
    __ct__7TObjectFP7TObject(arg0);
    M2C_FIELD(arg0, M2C_UNK **, 0x18) = lbl_804835D8;
    M2C_FIELD(arg0, u32 *, 0x1C) = 0;
    M2C_FIELD(arg0, f32 *, 0x20) = TObjBoss2Tunnel__data_805D85E0;
    return arg0;
}

}
