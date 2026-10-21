#include "types.h"
#include "pso/misc/TCameraCtrl.h"

extern s16 TCameraCtrl__camera_mode;

s32 TCameraCtrl::get_camera_mode() {
    return TCameraCtrl__camera_mode;
}
