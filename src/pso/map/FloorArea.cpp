#include "types.h"
#include "pso/map/FloorArea.h"

extern floor_area current_floor_area_type;

floor_area get_current_floor_area() {
    return current_floor_area_type;
}
