#include "types.h"
#include "pso/misc/TWindowCtrl.h"

extern "C" {

int open__11TWindowCtrlFlll(void*, int, int);

int TWindowCtrl::open_default(int a1) { return open__11TWindowCtrlFlll(this, a1, 15); }

}
