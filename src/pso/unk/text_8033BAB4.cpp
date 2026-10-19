#include "types.h"
#include "pso/ui/TAdSinglePlyChrSelectGC.h"

extern "C" {
s32 fn_8033BAB4(void);
}

s32 fn_8033BAB4(void) {
    s32 flags = 0;
    switch (TAdSinglePlyChrSelectGC::verify_card_player_data()) {
    case -2:
        flags |= 0x30;
        break;
    case -3:
    case -1:
        flags |= 0x10;
        break;
    }
    return flags;
}
