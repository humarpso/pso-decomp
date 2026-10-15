#include "types.h"

extern "C" {

s16 get_camera_mode__11TCameraCtrlFv(void);

extern s16 TCameraCtrl__camera_mode;

s16 get_camera_mode__11TCameraCtrlFv(void) {
    return TCameraCtrl__camera_mode;
}

}
