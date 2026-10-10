#ifndef PSO_MAP_FLOOR_RESOURCE_CALLBACKS_H
#define PSO_MAP_FLOOR_RESOURCE_CALLBACKS_H
#include "types.h"

typedef void (*FloorResourceCallback)();
struct FloorResourceCallbacks {
    FloorResourceCallback load;
    FloorResourceCallback unload;
};

extern "C" {
extern FloorResourceCallbacks* floor_resource_callback_tables[36];
void unload_floor_resources(s32 selector);
s32 load_floor_resources(s32 selector);
void unload_current_floor_resources(void);
s32 load_current_floor_resources(void);
}
#endif
