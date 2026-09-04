#include "types.h"

extern "C" {

f32 get_ad_end_text_start__10TObjPlayerFv(void);
f32 get_random_float__8TObjFishFv(void);
f64 TObjPlayer__sub_80019784(void);
u8 get_field_ed__10TObjPlayerFPv(void* p);
int get_item_field_6__10TObjPlayerFPv(void* p);
int get_slot_value__10TObjPlayerFPvi(void*, int);
s32 get_type__10TObjPlayerFPv(void* p);
f64 start__10TAdEndTextFv(void);

f32 get_random_float__8TObjFishFv(void) {
    return (f32) TObjPlayer__sub_80019784();
}

f32 get_ad_end_text_start__10TObjPlayerFv(void) {
    return (f32) start__10TAdEndTextFv();
}

}
