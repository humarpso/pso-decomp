#include "types.h"
#include "pso/misc/TUnk_80488838.h"
#include "pso/misc/TCameraCtrl.h"

extern "C" {

int target_player0__11TCameraCtrlFi(void*);

void TUnk_80488838::run_task() { target_player0__11TCameraCtrlFi(this); ((TUnk_80488838 *)this)->update_orbit_camera(); }

}
