#include "types.h"
#include "pso/misc/TWindowOptionCtrl.h"

extern "C" {

s32 append_entry__20TWindowSubStatusDispFlllll(s32, s32, s32, s32, s32, s32);

void TWindowOptionCtrl::add_menu_item(s32 arg1, s32 arg2, s32 arg3) {
    append_entry__20TWindowSubStatusDispFlllll(arg1, 0, arg2, arg3, 1, 0);
}

}
