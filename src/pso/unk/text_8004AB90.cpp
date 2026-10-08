#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Vec_8004AB90 { f32 x, y, z; };

struct E_8004AB90 { Vec_8004AB90 pos; f32 r; Vec_8004AB90 v; f32 s; };

extern "C" {
void VecCopy__FP3VecPC3Vec(void *, void *);
u8 *get_player_data__10TObjPlayerFi(s32);
M2C_UNK refresh_collision_body_centers(void *);
M2C_UNK vec3_add_to(void *, void *);
f32 vector_length(void *);
M2C_UNK subtract_vector(void *, void *);
M2C_UNK normalize_vector(void *);
f32 xyz_distance(void *, void *);
extern E_8004AB90 lbl_80484D90[];
extern s32 lbl_805D5868;
extern s32 lbl_805D586C;
extern s32 lbl_805D5870;
extern const f32 lbl_805D8908;
extern const f32 lbl_805D890C;
extern const f32 lbl_805D8910;
extern const f32 lbl_805D8914;
void push_players_out_of_zone__14TBoss4DarkFalzFii(M2C_UNK arg0, s32 arg1);
}

extern "C" {

void push_players_out_of_zone__14TBoss4DarkFalzFii(M2C_UNK arg0, s32 arg1) {
    Vec_8004AB90 v;
    E_8004AB90 *e;
    Vec_8004AB90 *ev;
    s32 i;
    u8 *p;
    s32 j;
    u8 *q;
    E_8004AB90 *o;
    f32 r;
    f32 sc;
    f32 orad;
    e = &lbl_80484D90[arg1];
    r = lbl_80484D90[arg1].r;
    sc = lbl_80484D90[arg1].s;
    ev = &lbl_80484D90[arg1].v;
    for (i = lbl_805D586C + lbl_805D5870; i < lbl_805D5868; i++) {
        p = get_player_data__10TObjPlayerFi(i);
        if (p == NULL) continue;
        q = M2C_FIELD(p, u8 **, 0xA4);
        if (q == NULL || !(M2C_FIELD(q, s32 *, 0x18) & 0x20000)) continue;
        if (xyz_distance(e, p + 0x38) <= r) continue;
        for (j = 0; j < 3; j++) {
            o = &lbl_80484D90[j];
            orad = lbl_80484D90[j].r;
            if (j != arg1 && !(xyz_distance(p + 0x38, o) > orad)) {
                VecCopy__FP3VecPC3Vec(&v, p + 0x38);
                subtract_vector(&v, o);
                v.y = lbl_805D8908;
                if (vector_length(&v) <= lbl_805D890C) {
                    v.x = lbl_805D8908;
                    v.z = lbl_805D8910;
                } else {
                    normalize_vector(&v);
                }
                break;
            }
        }
        if (j != 3) {
            v.x = v.x * sc;
            v.z = v.z * sc;
            v.y = lbl_805D8914;
            vec3_add_to(&v, ev);
            VecCopy__FP3VecPC3Vec(p + 0x38, &v);
            refresh_collision_body_centers(p);
        }
    }
}

}
