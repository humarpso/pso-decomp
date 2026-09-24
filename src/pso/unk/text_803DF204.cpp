#include "types.h"
extern "C" {
u32 fn_803DF204(u32 x);
}

extern "C" {

#pragma push
#pragma scheduling off
#pragma peephole off
#pragma optimize_for_size off
u32 fn_803DF204(u32 x) {
    return ((u32)(x << 6) * 8) / 324;
}
#pragma pop

}
