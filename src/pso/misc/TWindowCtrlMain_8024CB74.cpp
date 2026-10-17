#include "types.h"
#include "pso/misc/TWindowCtrlMain.h"

extern f32 window_depth_order_cursor;

f32 TWindowCtrlMain::get_scale() {
    return window_depth_order_cursor;
}
