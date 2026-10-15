#include "types.h"

extern "C" {

s32 get_random_scaled__9TObjEneDDFv(void);
f32 calc_boss4_scale__10TObjPlayerFi();

extern f32 lbl_805D9E94;

s32 get_random_scaled__9TObjEneDDFv(void) {
    return (s32) (lbl_805D9E94 * calc_boss4_scale__10TObjPlayerFi());
}

}
