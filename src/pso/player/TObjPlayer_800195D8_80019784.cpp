#include "types.h"

struct O_80019828 { s32 arr[16]; };

extern "C" {
f64 TObjPlayer__sub_80019784(f64 x);
void TObjPlayer__sub_80019828(O_80019828 *self);
extern const f64 lbl_80434098;
extern const f64 lbl_804340A0;
extern const f32 TObjPlayer__data_805D7D24;
f32 newton_sqrtf(f32 x);
}

extern "C" {

s32 register_object__10TObjPlayerFi(s32 arg0);
u8 get_field_ed__10TObjPlayerFPv(void* p);
int get_item_field_6__10TObjPlayerFPv(void* p);
int get_slot_value__10TObjPlayerFPvi(void*, int);
s32 get_type__10TObjPlayerFPv(void* p);
f64 atan2(void);

f64 TObjPlayer__sub_80019784(f64 x) { return __fabs(x); }

#pragma push
#pragma fp_contract on
f32 newton_sqrtf(f32 x) {
    volatile f32 y;
    if (x > TObjPlayer__data_805D7D24) {
        f64 guess = __frsqrte(x);
        guess = lbl_80434098 * guess * (lbl_804340A0 - (f64) x * (guess * guess));
        guess = lbl_80434098 * guess * (lbl_804340A0 - (f64) x * (guess * guess));
        guess = lbl_80434098 * guess * (lbl_804340A0 - (f64) x * (guess * guess));
        y = (f32) ((f64) x * guess);
        return y;
    }
    return x;
}
#pragma pop

s32 register_object__10TObjPlayerFi(s32 arg0) {
    TObjPlayer__sub_80019828((O_80019828 *)(arg0));
    return arg0;
}
void TObjPlayer__sub_80019828(O_80019828 *self) {
    s32 i;
    for (i = 0; i < 16; i++) {
        self->arr[i] = 0;
    }
}

}
