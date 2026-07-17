#include "types.h"

extern "C" {

s32 get_slot_value__10TObjPlayerFPvi(s32 *arg0, s32 arg1);

s32 get_slot_value__10TObjPlayerFPvi(s32 *arg0, s32 arg1) {
    if (arg1 < 0 || arg1 >= 13) {
        return 0;
    }
    return arg0[arg1];
}

}
