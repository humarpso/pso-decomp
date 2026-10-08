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
void vec3_add_to(void *, void *);
void update_drops__8TObjRainFPv(struct Rain_80197904 *self);
void VecCopy__FP3VecPC3Vec(void *, void *);
f32 xz_distance_squared(void *, void *);
void reset_transform_state__10TObjPlayerFv(void);
void init_xyz_limits__10TObjPlayerFv(void);
void draw_line_list(void *, int, int);
void reset_line_width(void);
void set_line_width(int);
void subtract_vector(void *, void *);
f32 normalize_vector(void *);
extern u8 *TObjRain__streak_line_list[];
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
            set_line_width(5);
            VecCopy__FP3VecPC3Vec(TObjRain__streak_line_list[0], &drop->position);
            struct Vec_801977D4 pos = drop->position;
            if (xz_distance_squared(lbl_805D4DF0 + 0x178, &pos) < lbl_805DBF10) {
                struct Vec_801977D4 dir = drop->velocity;
                normalize_vector(&dir);
                dir.x *= lbl_805DBF14;
                dir.y *= lbl_805DBF14;
                dir.z *= lbl_805DBF14;
                subtract_vector(&pos, &drop->velocity);
                VecCopy__FP3VecPC3Vec(TObjRain__streak_line_list[0] + 0xC, &pos);
                draw_line_list(TObjRain__streak_line_list, 1, 5);
            }
        }
    }
    reset_line_width();
    reset_transform_state__10TObjPlayerFv();
}

void update_drops__8TObjRainFPv(struct Rain_80197904 *self) {
    s32 active = 0;
    struct Drop_80197904 *drop = self->drops;
    u32 i;
    for (i = 0; i < self->count; drop++, i++) {
        if (drop->active != 0) {
            vec3_add_to(&drop->position, &drop->velocity);
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
