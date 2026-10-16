#include "types.h"
#include "pso/enemy/TObjEneRecon.h"

extern "C" {

u8 TObjEneRecon::is_anim_6() {
    return (u8) (this->mode == 6);
}

}
