#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))

struct Craw_80308D1C {
    u8 pad0[0x60];
    s32 angle;
    u8 pad64[0x308 - 0x64];
    f32 vx, vy, vz;
    u8 pad314[0x3A0 - 0x314];
    f32 *speed;
};

extern "C" {
u16 find_nearest_visible_player(void *, void *, f32);
f64 get_ad_end_text_start__10TObjPlayerFv(f32, f32);
M2C_UNK TBoss7Crawfish__sub_80308F8C(void *, int);
f32 sin_table_lookup(s32);
f32 cos_table_lookup(s32);
void normalize_vector(void *);
extern const f64 lbl_804755B0[];
extern const f32 lbl_805DF0D0;
extern const f32 TBoss7Crawfish__data_805DF0D8;
extern const f32 TBoss7Crawfish__data_805DF0DC;
void TBoss7Crawfish__sub_80308D1C(Craw_80308D1C *o);
}

extern "C" {

void update_motion_and_release__14TBoss7CrawfishFPv(u8 *arg0);
M2C_UNK TBoss7Crawfish__sub_803086A8(void *, void *, f32, f32);
M2C_UNK TBoss7Crawfish__sub_803087D4(void *, int);
s32 TBoss7Crawfish__sub_80308ED8(void *, void *);
M2C_UNK TBoss7Crawfish__sub_80308F8C(void *, int);
M2C_UNK copy_pos__11TNowLoadingFPvPv(void *, void *);
M2C_UNK free_child__14TBoss7CrawfishFPv(void *);

extern const f32 TBoss7Crawfish__data_805DF0DC;
extern const f32 lbl_805DF0F4;

void update_motion_and_release__14TBoss7CrawfishFPv(u8 *arg0) {
    f32 *temp_r4;

    temp_r4 = M2C_FIELD(arg0, f32 **, 0x3A0);
    M2C_FIELD(arg0, f32 *, 0xC8) = (f32) (lbl_805DF0F4 * (TBoss7Crawfish__data_805DF0DC + *temp_r4));
    TBoss7Crawfish__sub_803086A8((void *) (arg0), (void *) (temp_r4), (f32) (TBoss7Crawfish__data_805DF0DC), (f32) (lbl_805DF0F4));
    {
        void *temp_ptr = (void *) M2C_FIELD(arg0, u32 *, 0x3CC);
        if (temp_ptr != NULL) {
            copy_pos__11TNowLoadingFPvPv(temp_ptr, (void *) (arg0 + 0x38));
        }
    }
    if (TBoss7Crawfish__sub_80308ED8((void *) (arg0), (void *) (arg0 + 0x308)) == 0) {
        free_child__14TBoss7CrawfishFPv((void *) (arg0));
        TBoss7Crawfish__sub_80308F8C((void *) (arg0), (int) (3));
        return;
    }
    TBoss7Crawfish__sub_803087D4((void *) (arg0), (int) (0x3A80C));
}
void TBoss7Crawfish__sub_80308D1C(Craw_80308D1C *o) {
    u16 r = find_nearest_visible_player(o, &o->vx, lbl_805DF0D0);
    f32 s = TBoss7Crawfish__data_805DF0DC + *o->speed;
    if (r != 0xFFFF) {
        normalize_vector(&o->vx);
        o->vx *= s;
        o->vy *= s;
        o->vz *= s;
    } else {
        o->vx = s * sin_table_lookup(o->angle);
        o->vy = TBoss7Crawfish__data_805DF0D8;
        o->vz = s * cos_table_lookup(o->angle);
    }
    o->angle = lbl_804755B0[0] * get_ad_end_text_start__10TObjPlayerFv(o->vx, o->vz);
    TBoss7Crawfish__sub_80308F8C((void *)(o), (int)(2));
}

}
