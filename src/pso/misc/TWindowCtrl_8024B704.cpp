#include "types.h"
#include "pso/misc/TWindowCtrl.h"

extern "C" {

void TWindowCtrl::init_all_default() {
    TWindowCtrl::init_all(this, 0);
}

}
