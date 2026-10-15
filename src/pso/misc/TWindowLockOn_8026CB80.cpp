#include "types.h"

extern "C" {

f32 get_target_distance__13TWindowLockOnFv(void);
void *get_window_layout_position();

f32 get_target_distance__13TWindowLockOnFv(void) {
    return *(f32 *)((s8 *)(get_window_layout_position()) + 4);
}

}
