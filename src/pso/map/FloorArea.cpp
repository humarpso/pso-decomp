#include "types.h"
#include "pso/map/FloorArea.h"
#include "pso/misc/TLobby_80207644.h"

struct FloorMapSelection {
    s32 area;
    u8 rest[0x8];
};

extern "C" s32 is_item_area_enabled(s32 area);

extern s32 boss_area_id_table[];
extern s32 item_disabled_area_table[];

s32 current_floor_index;
floor_area current_floor_area_type;

s32 is_warp_excluded_area(s32 area) {
    s32 i = 0;
    while (boss_area_id_table[i] != -1) {
        if (area == boss_area_id_table[i++]) return 1;
    }
    return 0;
}

s32 is_boss_area() {
    s32 area = get_current_floor_area();
    s32 i = 0;
    while (boss_area_id_table[i] != -1) {
        if (area == boss_area_id_table[i++]) return 1;
    }
    return 0;
}

void set_current_floor_area(s32 floor) {
    FloorMapSelection selection;
    current_floor_index = floor;
    if (get_floor_map_selection(floor, (u8 *)&selection.area) == 1) {
        current_floor_area_type = (floor_area)selection.area;
    }
}

floor_area get_current_floor_area() {
    return current_floor_area_type;
}

s32 is_item_area_enabled(s32 area) {
    s32 i = 0;
    while (item_disabled_area_table[i] != -1) {
        if (area == item_disabled_area_table[i++]) return 0;
    }
    return 1;
}

s32 is_current_area_item_enabled() {
    return is_item_area_enabled(get_current_floor_area());
}
