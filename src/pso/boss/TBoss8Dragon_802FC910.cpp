#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct V_802FC910 { f32 x, y, z; };

struct V2_802FC910 { f32 x; f32 y; };

struct Boss_802FC910 { u8 pad[0x394]; V_802FC910 pos; };

extern "C" {
f32 clamp_velocity__15TObjBoss2TunnelFPv(void *, f32, f32);
extern const f32 TBoss8Dragon__data_805DED50;
void TBoss8Dragon__sub_802FC9D8(u8 *arg0);
f32 TBoss8Dragon__sub_803D64C0(s32);
f32 TBoss8Dragon__sub_803D64DC(s32);
extern const f32 lbl_805DEEDC;
void TBoss8Dragon__sub_802FC978(u8 *arg0, f32 *arg1, f32 *arg2);
void VecCopy__FP3VecPC3Vec(void *, void *);
f32 clamp_velocity__15TObjBoss2TunnelFPv(void *, f32, f32);
void TBoss8Dragon__sub_802FC978(u8 *arg0, f32 *arg1, f32 *arg2);
void TBoss6Type1__sub_803D9370(void *, void *);
extern const f32 TBoss8Dragon__data_805DEE9C;
s32 TBoss8Dragon__sub_802FC910(Boss_802FC910 *o);
}

extern "C" {

s32 TBoss8Dragon__sub_802FC910(Boss_802FC910 *o) {
    struct { f32 b[2]; V_802FC910 c; } s;
    V_802FC910 a;
    TBoss8Dragon__sub_802FC978((u8 *)o, s.b, (f32 *)&s.c);
    VecCopy__FP3VecPC3Vec(&a, &o->pos);
    TBoss6Type1__sub_803D9370(&a, s.b);
    return ((f32 (*)(void *))clamp_velocity__15TObjBoss2TunnelFPv)(&a) <= TBoss8Dragon__data_805DEE9C;
}

#pragma push
#pragma fp_contract on
void TBoss8Dragon__sub_802FC978(u8 *arg0, f32 *arg1, f32 *arg2) {
    *arg1 = (lbl_805DEEDC * TBoss8Dragon__sub_803D64C0(M2C_FIELD(arg0, s32 *, 0x60))) + M2C_FIELD(arg0, f32 *, 0x38);
    *arg2 = (lbl_805DEEDC * TBoss8Dragon__sub_803D64DC(M2C_FIELD(arg0, s32 *, 0x60))) + M2C_FIELD(arg0, f32 *, 0x40);
}
#pragma pop

void TBoss8Dragon__sub_802FC9D8(u8 *arg0) {
    f32 temp_f1;
    f32 temp_f2;
    temp_f2 = M2C_FIELD(arg0, f32 *, 0x394);
    M2C_FIELD(arg0, f32 *, 0x5CC) = (f32) (temp_f2 - M2C_FIELD(arg0, f32 *, 0x410));
    M2C_FIELD(arg0, f32 *, 0x5D0) = (f32) TBoss8Dragon__data_805DED50;
    temp_f1 = M2C_FIELD(arg0, f32 *, 0x39C);
    M2C_FIELD(arg0, f32 *, 0x5D4) = (f32) (temp_f1 - M2C_FIELD(arg0, f32 *, 0x418));
    M2C_FIELD(arg0, f32 *, 0x5D8) = clamp_velocity__15TObjBoss2TunnelFPv((void *) (arg0 + 0x5CC), (f32) (temp_f1), (f32) (temp_f2));
}

}
