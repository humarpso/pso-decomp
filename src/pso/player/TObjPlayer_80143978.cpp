#include "types.h"
#include "pso/object/TObjMotion.h"
#include "pso/player/TObjPlayer.h"
#include "pso/misc/TPlyPhotonChair.h"

extern "C" {

void*TObjMotion::get_anim_entry(int a1) {  return (char*)(*(int *)&(this->action_table)) + a1 * 16; }

}
