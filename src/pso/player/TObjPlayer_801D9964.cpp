#include "types.h"
#include "pso/player/TObjPlayer.h"

extern "C" {

int is_invalid_slot__10TObjPlayerFUc(void);
int get_cast_technique_level(void*);

void TObjPlayer::validate_and_clear_slot() { get_cast_technique_level(this); is_invalid_slot__10TObjPlayerFUc(); }

}
