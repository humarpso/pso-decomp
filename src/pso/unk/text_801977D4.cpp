#include "types.h"
struct Vec_80197904 { f32 x, y, z; };

struct Drop_80197904 {
    s32 active;
    struct Vec_80197904 position;
    struct Vec_80197904 velocity;
    f32 floor_y;
};

struct Rain_80197904 {
    u8 pad00[0x1C];
    struct Drop_80197904 drops[16];
    u32 count;
};

struct Vec_801977D4 { f32 x, y, z; };

struct Drop_801977D4 {
    s32 active;
    struct Vec_801977D4 position;
    struct Vec_801977D4 velocity;
    f32 floor_y;
};

struct Rain_801977D4 {
    u8 pad00[0x1C];
    struct Drop_801977D4 drops[16];
    u32 count;
};

extern "C" {
void queue_destruction__7TObjectFv(void *);
void TBoss4Zako__sub_803D8910(void *, void *);
void fn_80197904(struct Rain_80197904 *self);
void VecCopy__FP3VecPC3Vec(void *, void *);
f32 xz_distance_squared(void *, void *);
void reset_transform_state__10TObjPlayerFv(void);
void init_xyz_limits__10TObjPlayerFv(void);
void TObjPlayer__sub_801E341C(void *, int, int);
void fn_801E3518(void);
void fn_801E3524(int);
void TBoss6Type1__sub_803D9370(void *, void *);
f32 TNpcPlayer__sub_803D97B4(void *);
extern u8 *lbl_804B8998[];
extern u8 *lbl_805D4DF0;
extern const f32 lbl_805DBF10;
extern const f32 lbl_805DBF14;
void draw_streaks__8TObjRainFPv(struct Rain_801977D4 *self);
}

extern "C" {

void draw_streaks__8TObjRainFPv(struct Rain_801977D4 *self) {
    struct Drop_801977D4 *drop;
    u32 i;
    init_xyz_limits__10TObjPlayerFv();
    drop = self->drops;
    for (i = 0; i < self->count; drop++, i++) {
        if (drop->active != 0) {
            fn_801E3524(5);
            VecCopy__FP3VecPC3Vec(lbl_804B8998[0], &drop->position);
            struct Vec_801977D4 pos = drop->position;
            if (xz_distance_squared(lbl_805D4DF0 + 0x178, &pos) < lbl_805DBF10) {
                struct Vec_801977D4 dir = drop->velocity;
                TNpcPlayer__sub_803D97B4(&dir);
                dir.x *= lbl_805DBF14;
                dir.y *= lbl_805DBF14;
                dir.z *= lbl_805DBF14;
                TBoss6Type1__sub_803D9370(&pos, &drop->velocity);
                VecCopy__FP3VecPC3Vec(lbl_804B8998[0] + 0xC, &pos);
                TObjPlayer__sub_801E341C(lbl_804B8998, 1, 5);
            }
        }
    }
    fn_801E3518();
    reset_transform_state__10TObjPlayerFv();
}

void fn_80197904(struct Rain_80197904 *self) {
    s32 active = 0;
    struct Drop_80197904 *drop = self->drops;
    u32 i;
    for (i = 0; i < self->count; drop++, i++) {
        if (drop->active != 0) {
            TBoss4Zako__sub_803D8910(&drop->position, &drop->velocity);
            if (drop->position.y < drop->floor_y) {
                drop->active = 0;
            } else {
                active++;
            }
        }
    }
    if (active == 0) {
        queue_destruction__7TObjectFv(self);
    }
}

}
