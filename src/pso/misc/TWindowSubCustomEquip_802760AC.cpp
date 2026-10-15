#include "types.h"

extern "C" {
s32 get_saved_slot_for_index__21TWindowSubCustomEquipFic(s32 arg0, s8 arg1);
}

extern "C" {

s32 is_type_valid__21TWindowSubCustomEquipFPv(void *arg0);

s32 is_type_valid__21TWindowSubCustomEquipFPv(void *arg0) {
    u8 temp_r0;

    temp_r0 = *(u8 *)((s8 *)arg0 + 0x62);
    switch ((s8) temp_r0) {
    case 0:
        return 0;
    default:
    case 1:
        return 1;
    }
}
s32 get_saved_slot_for_index__21TWindowSubCustomEquipFic(s32 arg0, s8 arg1) {
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
