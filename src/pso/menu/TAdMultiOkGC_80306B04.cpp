#include "types.h"
struct Ok_80306C10 { u8 pad[0x97C]; s32 count; };

struct Ok_80306F84 { u8 pad[0x97C]; s32 count; };

typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Q_80306C70 { f32 a; f32 b; f32 c; f32 d; u8 pad[0x10]; };

struct E_80306C70 { u8 pad0[0x1C]; s32 flags; s32 t; f32 x; f32 y; u8 pad[0x14]; Q_80306C70 q[4]; u8 pad2[4]; };

struct O_80306C70 { E_80306C70 e[1]; };

extern "C" {
s32 get_state_flag__9TMainTaskFv(void);
void reset_transform_state__10TObjPlayerFv(void);
void init_xyz_limits__10TObjPlayerFv(void);
void TAdMultiOkGC__sub_80306B04(void *, int);
void render__12TAdMultiOkGCFv(Ok_80306C10 *o);
void TAdMultiOkGC__sub_80306DF4(void *, int);
void run_task__12TAdMultiOkGCFv(Ok_80306F84 *o);
extern const f32 lbl_805DF04C;
extern const f32 lbl_805DF050;
extern const f32 lbl_805DF054;
extern const f32 lbl_805DF058;
extern const f32 lbl_805DF05C;
extern const f32 lbl_805DF060;
extern const f32 lbl_805DF064;
void TAdMultiOkGC__sub_80306C70(void *arg0, int arg1);
}

extern "C" {

void render__12TAdMultiOkGCFv(Ok_80306C10 *o) {
    s32 i;
    if (get_state_flag__9TMainTaskFv() != 1) {
        init_xyz_limits__10TObjPlayerFv();
        for (i = 0; i < o->count; i++) {
            TAdMultiOkGC__sub_80306B04(o, i);
        }
        reset_transform_state__10TObjPlayerFv();
    }
}

#pragma push
#pragma fp_contract on
void TAdMultiOkGC__sub_80306C70(void *arg0, int arg1) {
    E_80306C70 *e;
    s32 i;
    s32 d;
    f32 f;
    e = &((O_80306C70 *)arg0)->e[arg1];
    if (e->flags & 2) {
        e->t++;
        for (i = 0; i < 5; i++) {
            d = e->t - (i - 1);
            if (e->flags & 1) {
                if (d > 10) {
                    e->flags |= 4;
                } else if (d >= 0) {
                    f = lbl_805DF04C - lbl_805DF050 * (f32)d;
                    e->q[i].a = lbl_805DF054 * f + e->x;
                    e->q[i].b = lbl_805DF058 * f + e->y;
                    e->q[i].c = lbl_805DF05C * f + e->x;
                    e->q[i].d = lbl_805DF060 * f + e->y;
                }
            } else if (d > 5) {
                e->flags &= ~2;
            } else if (d >= 0) {
                f = lbl_805DF064 - lbl_805DF050 * (f32)d;
                e->q[i].a = lbl_805DF054 * f + e->x;
                e->q[i].b = lbl_805DF058 * f + e->y;
                e->q[i].c = lbl_805DF05C * f + e->x;
                e->q[i].d = lbl_805DF060 * f + e->y;
            }
        }
    }
}
#pragma pop

void run_task__12TAdMultiOkGCFv(Ok_80306F84 *o) {
    s32 i;
    for (i = 0; i < o->count; i++) {
        TAdMultiOkGC__sub_80306DF4(o, i);
        TAdMultiOkGC__sub_80306C70((void *)(o), (int)(i));
    }
}

}
