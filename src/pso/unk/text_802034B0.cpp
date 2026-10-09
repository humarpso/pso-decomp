#include "types.h"
extern "C" {
extern s32 item_disabled_area_table[];
s32 is_item_area_enabled(s32 x);
}

extern "C" {

s32 is_item_area_enabled(s32 x) {
    s32 i = 0;
    while (item_disabled_area_table[i] != -1) {
        if (x == item_disabled_area_table[i++]) return 0;
    }
    return 1;
}

}
