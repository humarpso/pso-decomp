#include "types.h"
extern "C" {
extern s32 lbl_8044A864[];
s32 is_item_area_enabled(s32 x);
}

extern "C" {

s32 is_item_area_enabled(s32 x) {
    s32 i = 0;
    while (lbl_8044A864[i] != -1) {
        if (x == lbl_8044A864[i++]) return 0;
    }
    return 1;
}

}
