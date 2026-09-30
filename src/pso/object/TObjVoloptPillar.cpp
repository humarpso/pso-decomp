#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct S_8004A574 {
    s32 f0;
    u8 pad4[0x14];
    void *vt;
    u8 pad1c[0x1c];
    u8 v38[4];
    f32 f3c;
    u8 pad40[0x6c];
    s32 fac;
    u8 padb0[8];
    f32 fb8;
    s32 fbc;
};

extern "C" {
void VecCopy__FP3VecPC3Vec(void *, void *);
f32 TObjPlayer__sub_8013153C(void *, void *);
void TObjEneGibbles__sub_80156780(void *, void *, s32);
void TObjPlayer__sub_801569F4(void *, s32);
extern u8 lbl_80484B38[];
extern M2C_UNK __vt__16TObjVoloptPillar[];
extern u8 lbl_804FEE68[];
extern s32 lbl_805D2760;
extern s32 tl_04;
extern const f32 TObjVoloptPillar__data_805D88C8;
extern const f32 lbl_805D88E4;
extern const f32 lbl_805D88E8;
S_8004A574 *TObjVoloptPillar__ct(S_8004A574 *o, void *pos, s32 arg2);
}

extern "C" {

void *__dt__16TObjVoloptPillarFv(void *arg0, s16 arg1);
void cache_target_values__16TObjVoloptPillarFv(void);
void TObjEneGibbles__sub_80156720(void *);
void __dl__7TObjectFPv(void *);
void destroy_particle_controller__10TObjPlayerFPvs(void *, int);

extern u8 *lbl_805D4C10;
extern s32 lbl_805D4D38;
extern s32 lbl_805D4D3C;
extern s32 lbl_805D4D40;
extern s32 lbl_805D4D44;

void cache_target_values__16TObjVoloptPillarFv(void) {
    lbl_805D4D38 = M2C_FIELD(M2C_FIELD(lbl_805D4C10, void **, 0x42C), s32 *, 0x178);
    lbl_805D4D40 = M2C_FIELD(M2C_FIELD(lbl_805D4C10, void **, 0x42C), s32 *, 0x17C);
    lbl_805D4D3C = M2C_FIELD(M2C_FIELD(lbl_805D4C10, void **, 0x42C), s32 *, 0x158);
    lbl_805D4D44 = M2C_FIELD(M2C_FIELD(lbl_805D4C10, void **, 0x42C), s32 *, 0x15C);
}

extern M2C_UNK __vt__16TObjVoloptPillar[];

void *__dt__16TObjVoloptPillarFv(void *arg0, s16 arg1) {
    if (arg0 != NULL) {
        M2C_FIELD(arg0, M2C_UNK **, 0x18) = __vt__16TObjVoloptPillar;
        TObjEneGibbles__sub_80156720(arg0);
        destroy_particle_controller__10TObjPlayerFPvs(arg0, 0);
        if (arg1 > 0) {
            __dl__7TObjectFPv(arg0);
        }
    }
    return arg0;
}
#pragma push
#pragma fp_contract on
S_8004A574 *TObjVoloptPillar__ct(S_8004A574 *o, void *pos, s32 arg2) {
    f32 d;
    TObjPlayer__sub_801569F4(o, tl_04);
    o->vt = ((u8 *)&__vt__16TObjVoloptPillar);
    o->f0 = lbl_805D2760;
    TObjEneGibbles__sub_80156780(o, lbl_80484B38, 1);
    VecCopy__FP3VecPC3Vec(o->v38, pos);
    d = TObjPlayer__sub_8013153C(o->v38, lbl_804FEE68);
    if (d < lbl_805D88E4) {
        o->f3c = TObjVoloptPillar__data_805D88C8;
    } else {
        o->f3c = TObjVoloptPillar__data_805D88C8 - lbl_805D88E8 * (d - lbl_805D88E4);
    }
    o->fb8 = o->f3c;
    o->fac = 0;
    o->fbc = arg2;
    return o;
}
#pragma pop

}
