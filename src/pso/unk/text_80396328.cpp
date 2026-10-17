#include "types.h"

extern "C" {
s32 GetTRKConnected();
u8 TRKCloseFile(int, void *);
s32 __close_console(s32 arg0);
s32 __close_console(s32 arg0) {
    u8 temp_r3;
    if (GetTRKConnected() == 0) {
        return 1;
    }
    temp_r3 = TRKCloseFile((int) (0xD3), (void *) (arg0));
    switch ((s32) temp_r3) {
    case 0:
        return 0;
    case 2:
        return 2;
    case 1:
    default:
        return 1;
    }
}

}
