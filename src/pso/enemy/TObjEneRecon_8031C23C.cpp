#include "types.h"
#include "pso/enemy/TObjEneRecon.h"

extern "C" {

u8 TObjEneRecon::is_anim_5() {
    return (u8) (this->mode == 5);
}

}
