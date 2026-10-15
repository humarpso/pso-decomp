#include "types.h"

extern "C" {

void TCameraCtrl__sub_80067F8C(void* p);
int update_orbit_camera__11TCameraCtrlFv(void*);
int target_player0__11TCameraCtrlFi(void*);

void TCameraCtrl__sub_80067F8C(void* p) { target_player0__11TCameraCtrlFi(p); update_orbit_camera__11TCameraCtrlFv(p); }

}
