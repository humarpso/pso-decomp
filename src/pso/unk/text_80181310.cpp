#include "types.h"
typedef s32 M2C_UNK; typedef s8 M2C_UNK8; typedef s16 M2C_UNK16;
typedef s32 M2C_UNK32; typedef s64 M2C_UNK64;
#define M2C_FIELD(expr, type_ptr, offset) (*(type_ptr)((s8 *)(expr) + (offset)))
#define M2C_BITWISE(type, expr) ((type)(expr))
struct Rec_80181310 { s32 timer; s32 count; void *objs[2]; };

struct Ctrl_80181310 { u8 pad0[0x24]; s32 counter; Rec_80181310 recs[5]; };

extern "C" {
f32 get_random_float__21TObjEneMe3ShinowaRealFv(f32);
f32 lerp__9TDeadSpotFff(f32, f32);
f32 fn_801811FC(void *);
f32 fn_80181204(void *);
void *construct_city_air_car(void *, void *, s32, s32, f32);
void *__nw__7TObjectFUl(u32);
s32 all_parents_unqueued_for_destruction__7TObjectFv(void *);
s32 rand(void);
extern f32 lbl_8050DBE0[];
extern f32 lbl_8050DBF4[];
extern const f32 lbl_805DBBC0;
extern const f32 lbl_805DBBC4;
extern const f32 lbl_805DBBCC;
extern const f32 lbl_805DBBD0;
extern const f32 lbl_805DBBD4;
extern const f32 lbl_805DBBD8;
extern const f32 lbl_805DBBDC;
void run_task__19TObjCityAirCar_CtrlFv(Ctrl_80181310 *self);
}

extern "C" {

void run_task__19TObjCityAirCar_CtrlFv(Ctrl_80181310 *self) {
    s32 i;
    Rec_80181310 *r;
    s32 timer;
    s32 count;
    s32 j;
    s32 k;
    s32 type;
    f32 speed;
    void *last;
    void *o;
    for (i = 0; i < 5; i++) {
        r = &self->recs[i];
        count = r->count;
        timer = r->timer;
        for (j = 0; j < count; j++) {
            if (r->objs[j] == NULL || all_parents_unqueued_for_destruction__7TObjectFv(r->objs[j]) == 0) {
                count--;
                for (k = j; k < count; k++) {
                    r->objs[k] = r->objs[k + 1];
                }
                r->objs[count] = NULL;
                j--;
            }
        }
        if (count < 2 && --timer <= 0) {
            timer = lerp__9TDeadSpotFff(lbl_805DBBCC, lbl_805DBBD0);
            if (i == 0 || i == 1) {
                type = get_random_float__21TObjEneMe3ShinowaRealFv(lbl_805DBBD4 * (lbl_805DBBD8 * rand()));
            } else {
                type = (s32)get_random_float__21TObjEneMe3ShinowaRealFv(lbl_805DBBDC * (lbl_805DBBD8 * rand())) + 1;
            }
            if (i == 1 || i == 2) {
                self->counter++;
                if (type == 4) {
                    if (self->counter >= 40) {
                        self->counter = 0;
                    } else {
                        type = 2;
                    }
                }
            }
            speed = lbl_8050DBF4[i] * lerp__9TDeadSpotFff(lbl_805DBBC0, lbl_805DBBD4);
            if (count > 0) {
                last = r->objs[count - 1];
                if (fn_80181204(last) < lbl_805DBBC4 * lbl_8050DBE0[i]) {
                    speed = fn_801811FC(last);
                }
            }
            o = __nw__7TObjectFUl(0xAC);
            if (o != NULL) {
                o = construct_city_air_car(o, self, i, type, speed);
            }
            r->objs[count++] = o;
        }
        r->count = count;
        r->timer = timer;
    }
}

}
