#include "types.h"
#include "pso/misc/TCameraCtrl.h"

extern "C" {

    extern int TCameraCtrl__fixed_npc_camera_active;
int TCameraCtrl::get_mode() {  return TCameraCtrl__fixed_npc_camera_active; }

}
