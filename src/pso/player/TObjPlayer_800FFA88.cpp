#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Self_800FFB38 {
    u8 pad[0x20];
    u32 *list;
};

extern "C" {
f32 sin_table_lookup(s32, f32, f32);
extern const f32 lbl_805DAA68;
extern const f32 lbl_805DAA6C;
extern const f32 lbl_805DAA70;
extern const f32 lbl_805DAA74;
extern const f32 lbl_805DAA78;
s32 interpolate_along_curve__10TObjPlayerFPvPv(void *arg0, void *arg1);
s32 interpolate_along_curve__10TObjPlayerFPvPv(void *arg0, void *arg1);
s32 TAdSinglePlyChrSelectGC__sub_80141E8C(f32);
f32 TAdSinglePlyChrSelectGC__sub_80141EA0(s32);
void TAdSinglePlyChrSelectGC__sub_800FFB38(Self_800FFB38 *self);
}

extern "C" {

s32 get_item_ptr__10TObjPlayerFPvi(void *arg0, s32 arg1);

s32 get_item_ptr__10TObjPlayerFPvi(void *arg0, s32 arg1) {
    return M2C_FIELD(arg0, s32 *, 0xE0) + (arg1 * 0x30);
}
#pragma push
#pragma fp_contract on
s32 interpolate_along_curve__10TObjPlayerFPvPv(void *arg0, void *arg1) {
    f32 temp_f1;
    f32 temp_f2;
    f32 temp_f31;
    f32 temp_orig;
    temp_f1 = M2C_FIELD(arg1, f32 *, 8);
    if ((temp_f1 < lbl_805DAA68) || (temp_f1 > lbl_805DAA6C)) {
        return 0;
    }
    temp_f2 = temp_f1 - lbl_805DAA6C;
    temp_f31 = temp_f2 / lbl_805DAA70;
    M2C_FIELD(arg1, f32 *, 0) = (lbl_805DAA74 * temp_f31) * sin_table_lookup(M2C_FIELD(arg0, s32 *, 0x28) + (s32) (lbl_805DAA78 * temp_f31), lbl_805DAA70, temp_f2) + M2C_FIELD(arg1, f32 *, 0);
    return 1;
}
#pragma pop

void TAdSinglePlyChrSelectGC__sub_800FFB38(Self_800FFB38 *self) {
    f32 v[3];
    s32 stride;
    u32 *p;
    s32 i;
    s32 n;
    s32 kind;
    i = 0;
    p = self->list;
    do {
        switch ((u8)p[0]) {
        case 0x29:
            kind = 3;
            break;
        case 0x2C:
            kind = 4;
            break;
        default:
            kind = -1;
            break;
        }
        if (kind < 0) {
            return;
        }
        n = p[1] >> 16;
        stride = (kind + 3) * 4;
        p += 2;
        while (n > 0) {
            v[0] = TAdSinglePlyChrSelectGC__sub_80141EA0(p[0]);
            v[1] = TAdSinglePlyChrSelectGC__sub_80141EA0(p[1]);
            v[2] = TAdSinglePlyChrSelectGC__sub_80141EA0(p[2]);
            if (interpolate_along_curve__10TObjPlayerFPvPv(self, v) != 0) {
                p[0] = TAdSinglePlyChrSelectGC__sub_80141E8C(v[0]);
                p[1] = TAdSinglePlyChrSelectGC__sub_80141E8C(v[1]);
                p[2] = TAdSinglePlyChrSelectGC__sub_80141E8C(v[2]);
            }
            p = (u32 *)((u8 *)p + stride);
            n--;
        }
        i++;
    } while (i < 1000);
}

}
