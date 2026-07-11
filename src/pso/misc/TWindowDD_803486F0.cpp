#include "types.h"

extern "C" {

s32 clamp_range_5FA_682__9TWindowDDFs(s16 arg0);

s32 clamp_range_5FA_682__9TWindowDDFs(s16 arg0) {
    if ((arg0 >= 0x5FA) && (arg0 <= 0x682)) {
        return arg0 - 0x5FA;
    }
    return 0;
}

}
