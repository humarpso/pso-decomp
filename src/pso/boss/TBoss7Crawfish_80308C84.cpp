#include "types.h"

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
f64 atan2_float(f32, f32);
s32 change_state__14TBoss7CrawfishFPvi(void *, int);
f32 sin_table_lookup(s32);
f32 cos_table_lookup(s32);
void normalize_vector(void *);
extern const f64 lbl_804755B0[];
extern const f32 lbl_805DF0D0;
extern const f32 TBoss7Crawfish__data_805DF0D8;
extern const f32 TBoss7Crawfish__data_805DF0DC;
void aim_at_nearest_player__14TBoss7CrawfishFPv(Craw_80308D1C *o);
}

extern "C" {

void update_motion_and_release__14TBoss7CrawfishFPv(u8 *arg0);
s32 register_attack_hits__14TBoss7CrawfishFPv(void *, void *, f32, f32);
s32 TBoss7Crawfish__sub_803087D4(void *, int);
s32 TBoss7Crawfish__sub_80308ED8(void *, void *);
s32 change_state__14TBoss7CrawfishFPvi(void *, int);
s32 copy_pos__11TNowLoadingFPvPv(void *, void *);
s32 free_child__14TBoss7CrawfishFPv(void *);

extern const f32 TBoss7Crawfish__data_805DF0DC;
extern const f32 lbl_805DF0F4;

void update_motion_and_release__14TBoss7CrawfishFPv(u8 *arg0) {
    f32 *temp_r4;

    temp_r4 = *(f32 **)((s8 *)arg0 + 0x3A0);
    *(f32 *)((s8 *)arg0 + 0xC8) = (f32) (lbl_805DF0F4 * (TBoss7Crawfish__data_805DF0DC + *temp_r4));
    register_attack_hits__14TBoss7CrawfishFPv((void *) (arg0), (void *) (temp_r4), (f32) (TBoss7Crawfish__data_805DF0DC), (f32) (lbl_805DF0F4));
    {
        void *temp_ptr = (void *) *(u32 *)((s8 *)arg0 + 0x3CC);
        if (temp_ptr != NULL) {
            copy_pos__11TNowLoadingFPvPv(temp_ptr, (void *) (arg0 + 0x38));
        }
    }
    if (TBoss7Crawfish__sub_80308ED8((void *) (arg0), (void *) (arg0 + 0x308)) == 0) {
        free_child__14TBoss7CrawfishFPv((void *) (arg0));
        change_state__14TBoss7CrawfishFPvi((void *) (arg0), (int) (3));
        return;
    }
    TBoss7Crawfish__sub_803087D4((void *) (arg0), (int) (0x3A80C));
}
void aim_at_nearest_player__14TBoss7CrawfishFPv(Craw_80308D1C *o) {
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
    o->angle = lbl_804755B0[0] * atan2_float(o->vx, o->vz);
    change_state__14TBoss7CrawfishFPvi((void *)(o), (int)(2));
}

}
