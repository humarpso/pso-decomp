#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

typedef s32 M2C_UNK;
struct Vec_80053914 { f32 x, y, z; };

struct O_80053914 {
    u8 pad0[0x38];
    Vec_80053914 pos;
};

extern "C" {
f32 calc_boss4_scale__10TObjPlayerFi(void *);
M2C_UNK VecCopy__FP3VecPC3Vec(Vec_80053914 *, Vec_80053914 *);
O_80053914 *get_player_data__10TObjPlayerFi(s32);
u16 obj_getField1c(void *);
f64 get_ad_end_text_start__10TObjPlayerFv(f32, f32);
s32 TBoss4Type3__sub_8005254C(u16);
f32 TBoss8Dragon__sub_803D64C0(s32);
f32 TBoss8Dragon__sub_803D64DC(s32);
f32 xyz_distance(Vec_80053914 *, Vec_80053914 *);
extern const f64 lbl_80437630;
extern s32 lbl_805D586C;
extern const f32 lbl_805D8B20;
extern const f32 lbl_805D8B4C;
extern const f32 lbl_805D8B50;
extern const f32 lbl_805D8B54;
void TRaderMapCore__sub_80053914(O_80053914 *self, Vec_80053914 *out);
}

extern "C" {

void set_map_position__13TRaderMapCoreFPvPv(void *arg0, void *arg1);

extern const f32 lbl_805D8B58;
extern const f32 lbl_805D8B5C;

#pragma push
#pragma opt_propagation off
void TRaderMapCore__sub_80053914(O_80053914 *self, Vec_80053914 *out) {
    s32 a1;
    O_80053914 *found;
    s32 i;
    O_80053914 *p;
    f32 best;
    f32 d;
    f32 s;
    s32 ang;
    s32 b;
    Vec_80053914 res;
    best = lbl_805D8B20;
    found = NULL;
    for (i = 0; i < lbl_805D586C; i++) {
        p = get_player_data__10TObjPlayerFi(i);
        if (p == NULL) {
            continue;
        }
        if (TBoss4Type3__sub_8005254C(obj_getField1c(p)) == 0) {
            continue;
        }
        {
            Vec_80053914 v = p->pos;
            v.y = lbl_805D8B20;
            d = xyz_distance(&v, &self->pos);
            if (d <= lbl_805D8B4C && d > best) {
                best = d;
                found = p;
                VecCopy__FP3VecPC3Vec(&res, &v);
            }
        }
    }
    if (found != NULL) {
        VecCopy__FP3VecPC3Vec(out, &res);
        return;
    }
    s = lbl_805D8B50 * calc_boss4_scale__10TObjPlayerFi(self);
    a1 = (s32)(lbl_80437630 * get_ad_end_text_start__10TObjPlayerFv(-self->pos.x, -self->pos.z));
    b = (s32)(lbl_805D8B54 * calc_boss4_scale__10TObjPlayerFi(self));
    ang = b + a1;
    ang -= 0x6000;
    out->x = s * TBoss8Dragon__sub_803D64C0(ang);
    out->y = lbl_805D8B20;
    out->z = s * TBoss8Dragon__sub_803D64DC(ang);
}
#pragma pop

void set_map_position__13TRaderMapCoreFPvPv(void *arg0, void *arg1) {
    M2C_FIELD(arg0, s32 *, 0x3B0) = (s32) ((lbl_805D8B58 + M2C_FIELD(arg1, f32 *, 0)) / lbl_805D8B5C);
    M2C_FIELD(arg0, s32 *, 0x3B4) = (s32) ((lbl_805D8B58 + M2C_FIELD(arg1, f32 *, 8)) / lbl_805D8B5C);
}

}
