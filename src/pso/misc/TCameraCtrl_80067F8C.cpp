#include "types.h"
#include "pso/misc/TCameraCtrl.h"

extern "C" {

void TCameraCtrl__sub_80067F8C(void* p);
int target_player0__11TCameraCtrlFi(void*);

void TCameraCtrl__sub_80067F8C(void* p) { target_player0__11TCameraCtrlFi(p); ((TCameraCtrl *)p)->update_orbit_camera(); }

}
