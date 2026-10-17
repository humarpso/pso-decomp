#include "types.h"
#include "pso/system/vector.h"
#include "pso/object/TObjMotion.h"
#include "pso/boss/TBoss4DarkFalz.h"

struct Vec_8004AB90 { f32 x, y, z; };

struct E_8004AB90 { Vec_8004AB90 pos; f32 r; Vec_8004AB90 v; f32 s; };

extern "C" {
u8 *get_player_data__10TObjPlayerFi(s32);
s32 vec3_add_to(void *, void *);
f32 vector_length(void *);
s32 subtract_vector(void *, void *);
s32 normalize_vector(void *);
f32 xyz_distance(void *, void *);
extern E_8004AB90 dark_falz_push_zone_table[];
extern s32 lbl_805D5868;
extern s32 lbl_805D586C;
extern s32 lbl_805D5870;
extern const f32 lbl_805D8908;
extern const f32 lbl_805D890C;
extern const f32 lbl_805D8910;
extern const f32 lbl_805D8914;
void TBoss4DarkFalz::push_players_out_of_zone(s32 arg0, s32 arg1) {
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
    e = &dark_falz_push_zone_table[arg1];
    r = dark_falz_push_zone_table[arg1].r;
    sc = dark_falz_push_zone_table[arg1].s;
    ev = &dark_falz_push_zone_table[arg1].v;
    for (i = lbl_805D586C + lbl_805D5870; i < lbl_805D5868; i++) {
        p = get_player_data__10TObjPlayerFi(i);
        if (p == NULL) continue;
        q = *(u8 **)((s8 *)p + 0xA4);
        if (q == NULL || !(*(s32 *)((s8 *)q + 0x18) & 0x20000)) continue;
        if (xyz_distance(e, p + 0x38) <= r) continue;
        for (j = 0; j < 3; j++) {
            o = &dark_falz_push_zone_table[j];
            orad = dark_falz_push_zone_table[j].r;
            if (j != arg1 && !(xyz_distance(p + 0x38, o) > orad)) {
                VecCopy((Vec *)&v, (const Vec *)(p + 0x38));
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
            VecCopy((Vec *)(p + 0x38), (const Vec *)&v);
            ((TUnk_804AF8A0 *)p)->refresh_collision_body_centers();
        }
    }
}

}
