#include "types.h"

extern "C" {
f64 floor(f64);
extern const f32 lbl_805E0DE0;
f32 trunc_float__17TWindowSubComCardFf(f32 farg0);
f64 ceil(f64);
extern const f32 lbl_805E0DE8;
f32 round_away_from_zero__20TWindowSubStatusDispFf(f32 farg0);
}

extern "C" {

#pragma push
#pragma scheduling off
f32 trunc_float__17TWindowSubComCardFf(f32 farg0) {
    if (farg0 < lbl_805E0DE0) {
        return -(f32) floor(-farg0);
    }
    return (f32) floor((f64) farg0);
}
#pragma pop

#pragma push
#pragma scheduling off
f32 round_away_from_zero__20TWindowSubStatusDispFf(f32 farg0) {
    if (farg0 < lbl_805E0DE8) {
        return -(f32) ceil(-farg0);
    }
    return (f32) ceil((f64) farg0);
}
#pragma pop

}
