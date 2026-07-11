#include "types.h"

extern "C" {

s32 clamp_range_2C9_552__9TWindowDDFs(s16 arg0);

s32 clamp_range_2C9_552__9TWindowDDFs(s16 arg0) {
    if ((arg0 >= 0x2C9) && (arg0 <= 0x552)) {
        return arg0 - 0x2C9;
    }
    return 0;
}

}
