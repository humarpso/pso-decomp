#include "types.h"
#include "pso/misc/TWindowSubCustomEquip.h"

extern "C" {
}

extern "C" {

s32 TWindowSubCustomEquip::is_type_valid() {
    u8 temp_r0;

    temp_r0 = *(u8 *)((s8 *)this + 0x62);
    switch ((s8) temp_r0) {
    case 0:
        return 0;
    default:
    case 1:
        return 1;
    }
}
s32 TWindowSubCustomEquip::get_saved_slot_for_index(s32 arg0, s8 arg1) {
    switch (arg1) {
    case 0:
        return 2;
    case 1:
        return 1;
    case 2: break;
    }
    return 3;
}

}
