#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Vec_80197998 { f32 x, y, z; };

struct Drop_80197998 {
    u32 active;
    Vec_80197998 pos;
    Vec_80197998 vel;
    f32 floor;
};

struct Rain_80197998 {
    u8 pad0[0x1C];
    Drop_80197998 drops[16];
    u32 count;
};

struct Cam_80197998 {
    u8 pad0[0x178];
    f32 x, y, z;
    u8 pad184[0x194 - 0x184];
    s32 yaw;
};

extern "C" {
int rand(void);
f32 sin_table_lookup(s32);
f32 cos_table_lookup(s32);
extern Cam_80197998 *camera_ctrl_instance;
extern const f32 lbl_805DBF18;
extern const f32 lbl_805DBF1C;
extern const f32 lbl_805DBF20;
extern const f32 lbl_805DBF24;
extern const f32 lbl_805DBF28;
extern const f32 lbl_805DBF2C;
extern const f32 lbl_805DBF30;
extern const f32 lbl_805DBF34;
extern const f32 lbl_805DBF38;
void init_drops__8TObjRainFv(u8 *arg0);
}

extern "C" {

#pragma push
#pragma fp_contract on
void init_drops__8TObjRainFv(u8 *arg0) {
    Rain_80197998 *rain = (Rain_80197998 *)arg0;
    s32 angle;
    Drop_80197998 *d;
    s32 i;
    f32 radius;
    f32 x;
    f32 z;
    d = rain->drops;
    for (i = 0; i < rain->count; i++, d++) {
        radius = lbl_805DBF18 * (lbl_805DBF1C * (f32)rand());
        angle = (s32)(lbl_805DBF20 * (lbl_805DBF24 - lbl_805DBF18 * (lbl_805DBF1C * (f32)rand())));
        angle -= camera_ctrl_instance->yaw;
        x = radius * cos_table_lookup(angle);
        z = radius * sin_table_lookup(angle);
        d->pos.x = camera_ctrl_instance->x + x;
        d->pos.y = lbl_805DBF28 + camera_ctrl_instance->y;
        d->pos.z = camera_ctrl_instance->z + z;
        d->vel.x = lbl_805DBF2C * (lbl_805DBF1C * (f32)rand());
        d->vel.y = -(lbl_805DBF34 * (lbl_805DBF1C * (f32)rand()) + lbl_805DBF30);
        d->vel.z = lbl_805DBF2C * (lbl_805DBF1C * (f32)rand());
        d->floor = lbl_805DBF38;
        d->active = 1;
    }
}
#pragma pop

}
