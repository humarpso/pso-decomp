#include "types.h"
#include "pso/misc/TWindowCtrl.h"

extern "C" {

int TWindowCtrl::open_default(int a1) { return TWindowCtrl::open((s32)this, (s32)a1, (s32)15); }

}
