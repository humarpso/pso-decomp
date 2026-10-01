#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct RecoveredGlobal_802FC500_TBoss8Dragon__data_804744A8 { M2C_UNK value; u8 remaining[0x8]; };
typedef char RecoveredGlobal_802FC500_TBoss8Dragon__data_804744A8_size[sizeof(RecoveredGlobal_802FC500_TBoss8Dragon__data_804744A8) == 0xC ? 1 : -1];

struct Obj_802FC580 {
    u8 pad0[0x698];
    s32 count;
    u8 pad69C[4];
    f32 vals[12];
};

extern "C" {
void VecCopy__FP3VecPC3Vec(void *, void *);
f32 clamp_velocity__15TObjBoss2TunnelFPv(void *);
s32 is_health_low__12TBoss8DragonFPv(void *);
extern RecoveredGlobal_802FC500_TBoss8Dragon__data_804744A8 TBoss8Dragon__data_804744A8;
extern const f32 TBoss8Dragon__data_805DED50;
extern const f32 lbl_805DEED4;
void TBoss8Dragon__sub_802FC500(u8 *arg0);
f32 calc_boss4_scale__10TObjPlayerFi();
f32 get_random_float__21TObjEneMe3ShinowaRealFv(f32);
f32 rand_range__9TObjEneDDFff(void *, f32, f32);
f32 TBoss8Dragon__sub_803D64C0(s32);
f32 TBoss8Dragon__sub_803D64DC(s32);
extern const f32 TBoss8Dragon__data_805DED50;
extern const f32 TBoss8Dragon__data_805DED64;
extern const f32 TBoss8Dragon__data_805DEDB0;
extern const f32 lbl_805DEE18;
s32 TBoss8Dragon__sub_802FC580(Obj_802FC580 *obj, f32 *out);
}

extern "C" {

void TBoss8Dragon__sub_802FC500(u8 *arg0) {
    if (is_health_low__12TBoss8DragonFPv(arg0) != 0) {
        VecCopy__FP3VecPC3Vec(arg0 + 0x394, arg0 + 0x38);
        M2C_FIELD(arg0, f32 *, 0x398) = (f32) TBoss8Dragon__data_805DED50;
        clamp_velocity__15TObjBoss2TunnelFPv(arg0 + 0x394);
        M2C_FIELD(arg0, f32 *, 0x394) = (f32) (M2C_FIELD(arg0, f32 *, 0x394) * lbl_805DEED4);
        M2C_FIELD(arg0, f32 *, 0x39C) = (f32) (M2C_FIELD(arg0, f32 *, 0x39C) * lbl_805DEED4);
        return;
    }
    VecCopy__FP3VecPC3Vec(arg0 + 0x394, &TBoss8Dragon__data_804744A8.value);
}
s32 TBoss8Dragon__sub_802FC580(Obj_802FC580 *obj, f32 *out) {
    s32 ang;
    s32 i;
    s32 n;
    f32 r;
    i = (s32)get_random_float__21TObjEneMe3ShinowaRealFv(TBoss8Dragon__data_805DED64 * calc_boss4_scale__10TObjPlayerFi());
    n = obj->count;
    if (n < 12) {
        obj->count = n + 1;
        while (TBoss8Dragon__data_805DED50 != obj->vals[i]) {
            i++;
            if (i >= 12) {
                i = 0;
            }
        }
        r = rand_range__9TObjEneDDFff(obj, TBoss8Dragon__data_805DEDB0, lbl_805DEE18);
        obj->vals[i] = r;
    } else {
        r = obj->vals[i];
    }
    ang = i * 0x1555;
    out[0] = r * TBoss8Dragon__sub_803D64C0(ang);
    out[1] = TBoss8Dragon__data_805DED50;
    out[2] = r * TBoss8Dragon__sub_803D64DC(ang);
    return 1;
}

}
