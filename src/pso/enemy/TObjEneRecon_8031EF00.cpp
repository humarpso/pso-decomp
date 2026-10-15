#include "types.h"
#include "pso/enemy/TObjEneRecon.h"

extern "C" {

u8 TObjEneRecon::is_anim_6() {
    return (u8) (*(s16 *)((s8 *)this + 0x326) == 6);
}

}
