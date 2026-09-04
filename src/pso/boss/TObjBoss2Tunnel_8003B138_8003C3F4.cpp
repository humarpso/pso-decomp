#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_BITWISE(type, expr) ((type)(expr))

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
void *TObjBoss2Tunnel__ct(void *, void *);
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
        o = TObjBoss2Tunnel__ct(o, tl_02);
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
