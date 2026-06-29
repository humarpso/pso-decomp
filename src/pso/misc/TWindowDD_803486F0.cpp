#include "types.h"

extern "C" {

s32 TWindowDD__sub_803486F0(s16 arg0);

s32 TWindowDD__sub_803486F0(s16 arg0) {
    if ((arg0 >= 0x5FA) && (arg0 <= 0x682)) {
        return arg0 - 0x5FA;
    }
    return 0;
}

}
