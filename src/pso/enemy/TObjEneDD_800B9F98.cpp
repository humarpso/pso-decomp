#include "types.h"
#pragma fp_contract on

extern "C" {

f32 rand_range__9TObjEneDDFff(f32 farg0, f32 farg1);
f32 calc_boss4_scale__10TObjPlayerFi();

f32 rand_range__9TObjEneDDFff(f32 farg0, f32 farg1) {
    return ((farg1 - farg0) * calc_boss4_scale__10TObjPlayerFi()) + farg0;
}

}
