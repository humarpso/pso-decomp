#include "types.h"

struct O_80019828 { s32 arr[16]; };

extern "C" {
f64 TObjPlayer__sub_80019784(f64 x);
void TObjPlayer__sub_80019828(O_80019828 *self);
}

extern "C" {

s32 register_object__10TObjPlayerFi(s32 arg0);
u8 get_field_ed__10TObjPlayerFPv(void* p);
int get_item_field_6__10TObjPlayerFPv(void* p);
int get_slot_value__10TObjPlayerFPvi(void*, int);
s32 get_type__10TObjPlayerFPv(void* p);
f64 start__10TAdEndTextFv(void);

f64 TObjPlayer__sub_80019784(f64 x) { return __fabs(x); }

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
