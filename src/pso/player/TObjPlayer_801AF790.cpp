#include "types.h"

extern "C" {

s32 is_alive_and_ready__10TObjPlayerFi(s32 arg0);
s32 TObjPlayer__sub_801BE2DC(s32);
s32 is_technique_ready__8TTecCtrlFv();

s32 is_alive_and_ready__10TObjPlayerFi(s32 arg0) {
    if ((is_technique_ready__8TTecCtrlFv() == 0) && (TObjPlayer__sub_801BE2DC(arg0) != 0)) {
        return 1;
    }
    return 0;
}

}
